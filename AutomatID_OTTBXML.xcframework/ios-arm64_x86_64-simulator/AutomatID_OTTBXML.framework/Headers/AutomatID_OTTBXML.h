// ================================================================================================
//  AutomatID_OTTBXML.h
//  Fast processing of XML files
//
// ================================================================================================
//  Created by Tom Bradley on 21/10/2009.
//  Version 1.5
//  
//  Copyright 2012 71Squared All rights reserved.b
//  
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//  
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
// ================================================================================================

@class AutomatID_OTTBXML;


// ================================================================================================
//  Error Codes
// ================================================================================================
enum OTTBXMLErrorCodes {
    D_OTTBXML_DATA_NIL,
    D_OTTBXML_DECODE_FAILURE,
    D_OTTBXML_MEMORY_ALLOC_FAILURE,
    D_OTTBXML_FILE_NOT_FOUND_IN_BUNDLE,
    
    D_OTTBXML_ELEMENT_IS_NIL,
    D_OTTBXML_ELEMENT_NAME_IS_NIL,
    D_OTTBXML_ELEMENT_NOT_FOUND,
    D_OTTBXML_ELEMENT_TEXT_IS_NIL,
    D_OTTBXML_ATTRIBUTE_IS_NIL,
    D_OTTBXML_ATTRIBUTE_NAME_IS_NIL,
    D_OTTBXML_ATTRIBUTE_NOT_FOUND,
    D_OTTBXML_PARAM_NAME_IS_NIL
};


// ================================================================================================
//  Defines
// ================================================================================================
#define D_OTTBXML_DOMAIN @"com.71squared.OTTBXML"

#define MAX_ELEMENTS 100
#define MAX_ATTRIBUTES 100

#define OTTBXML_ATTRIBUTE_NAME_START 0
#define OTTBXML_ATTRIBUTE_NAME_END 1
#define OTTBXML_ATTRIBUTE_VALUE_START 2
#define OTTBXML_ATTRIBUTE_VALUE_END 3
#define OTTBXML_ATTRIBUTE_CDATA_END 4

// ================================================================================================
//  Structures
// ================================================================================================

/** The OTTBXMLAttribute structure holds information about a single XML attribute. The structure holds the attribute name, value and next sibling attribute. This structure allows us to create a linked list of attributes belonging to a specific element.
 */
typedef struct _OTTBXMLAttribute {
	char * name;
	char * value;
	struct _OTTBXMLAttribute * next;
} AutomatID_OTTBXMLAttribute;



/** The OTTBXMLElement structure holds information about a single XML element. The structure holds the element name & text along with pointers to the first attribute, parent element, first child element and first sibling element. Using this structure, we can create a linked list of OTTBXMLElements to map out an entire XML file.
 */
typedef struct _OTTBXMLElement {
	char * name;
	char * text;
	
	AutomatID_OTTBXMLAttribute * firstAttribute;
	
	struct _OTTBXMLElement * parentElement;
	
	struct _OTTBXMLElement * firstChild;
	struct _OTTBXMLElement * currentChild;
	
	struct _OTTBXMLElement * nextSibling;
	struct _OTTBXMLElement * previousSibling;
	
} AutomatID_OTTBXMLElement;

/** The OTTBXMLElementBuffer is a structure that holds a buffer of OTTBXMLElements. When the buffer of elements is used, an additional buffer is created and linked to the previous one. This allows for efficient memory allocation/deallocation elements.
 */
typedef struct _OTTBXMLElementBuffer {
	AutomatID_OTTBXMLElement * elements;
	struct _OTTBXMLElementBuffer * next;
	struct _OTTBXMLElementBuffer * previous;
} OTTBXMLElementBuffer;



/** The OTTBXMLAttributeBuffer is a structure that holds a buffer of OTTBXMLAttributes. When the buffer of attributes is used, an additional buffer is created and linked to the previous one. This allows for efficient memeory allocation/deallocation of attributes.
 */
typedef struct _OTTBXMLAttributeBuffer {
	AutomatID_OTTBXMLAttribute * attributes;
	struct _OTTBXMLAttributeBuffer * next;
	struct _OTTBXMLAttributeBuffer * previous;
} OTTBXMLAttributeBuffer;


// ================================================================================================
//  Block Callbacks
// ================================================================================================
typedef void (^OTTBXMLSuccessBlock)(AutomatID_OTTBXML *);
typedef void (^OTTBXMLFailureBlock)(AutomatID_OTTBXML *, NSError *);
typedef void (^OTTBXMLIterateBlock)(AutomatID_OTTBXMLElement *);
typedef void (^OTTBXMLIterateAttributeBlock)(AutomatID_OTTBXMLAttribute *, NSString*, NSString*);


// ================================================================================================
//  OTTBXML Public Interface
// ================================================================================================

@interface AutomatID_OTTBXML : NSObject {
	
@private
	AutomatID_OTTBXMLElement * rootXMLElement;
	
	OTTBXMLElementBuffer * currentElementBuffer;
	OTTBXMLAttributeBuffer * currentAttributeBuffer;
	
	long currentElement;
	long currentAttribute;
	
	char * bytes;
	long bytesLength;
}


@property (nonatomic, readonly) AutomatID_OTTBXMLElement * rootXMLElement;

+ (id)OTTBXMLWithXMLString:(NSString*)aXMLString error:(NSError **)error;
+ (id)OTTBXMLWithXMLData:(NSData*)aData error:(NSError **)error;
+ (id)OTTBXMLWithXMLFile:(NSString*)aXMLFile error:(NSError **)error;
+ (id)OTTBXMLWithXMLFile:(NSString*)aXMLFile fileExtension:(NSString*)aFileExtension error:(NSError **)error;

+ (id)OTTBXMLWithXMLString:(NSString*)aXMLString __attribute__((deprecated));
+ (id)OTTBXMLWithXMLData:(NSData*)aData __attribute__((deprecated));
+ (id)OTTBXMLWithXMLFile:(NSString*)aXMLFile __attribute__((deprecated));
+ (id)OTTBXMLWithXMLFile:(NSString*)aXMLFile fileExtension:(NSString*)aFileExtension __attribute__((deprecated));


- (id)initWithXMLString:(NSString*)aXMLString error:(NSError **)error;
- (id)initWithXMLData:(NSData*)aData error:(NSError **)error;
- (id)initWithXMLFile:(NSString*)aXMLFile error:(NSError **)error;
- (id)initWithXMLFile:(NSString*)aXMLFile fileExtension:(NSString*)aFileExtension error:(NSError **)error;

- (id)initWithXMLString:(NSString*)aXMLString __attribute__((deprecated));
- (id)initWithXMLData:(NSData*)aData __attribute__((deprecated));
- (id)initWithXMLFile:(NSString*)aXMLFile __attribute__((deprecated));
- (id)initWithXMLFile:(NSString*)aXMLFile fileExtension:(NSString*)aFileExtension __attribute__((deprecated));


- (void) decodeData:(NSData*)data;
- (void) decodeData:(NSData*)data withError:(NSError **)error;

@end

// ================================================================================================
//  OTTBXML Static Functions Interface
// ================================================================================================

@interface AutomatID_OTTBXML (StaticFunctions)

+ (NSString*) elementName:(AutomatID_OTTBXMLElement*)aXMLElement;
+ (NSString*) elementName:(AutomatID_OTTBXMLElement*)aXMLElement error:(NSError **)error;
+ (NSString*) textForElement:(AutomatID_OTTBXMLElement*)aXMLElement;
+ (NSString*) textForElement:(AutomatID_OTTBXMLElement*)aXMLElement error:(NSError **)error;
+ (NSString*) valueOfAttributeNamed:(NSString *)aName forElement:(AutomatID_OTTBXMLElement*)aXMLElement;
+ (NSString*) valueOfAttributeNamed:(NSString *)aName forElement:(AutomatID_OTTBXMLElement*)aXMLElement error:(NSError **)error;

+ (NSString*) attributeName:(AutomatID_OTTBXMLAttribute*)aXMLAttribute;
+ (NSString*) attributeName:(AutomatID_OTTBXMLAttribute*)aXMLAttribute error:(NSError **)error;
+ (NSString*) attributeValue:(AutomatID_OTTBXMLAttribute*)aXMLAttribute;
+ (NSString*) attributeValue:(AutomatID_OTTBXMLAttribute*)aXMLAttribute error:(NSError **)error;

+ (AutomatID_OTTBXMLElement*) nextSiblingNamed:(NSString*)aName searchFromElement:(AutomatID_OTTBXMLElement*)aXMLElement;
+ (AutomatID_OTTBXMLElement*) childElementNamed:(NSString*)aName parentElement:(AutomatID_OTTBXMLElement*)aParentXMLElement;

+ (AutomatID_OTTBXMLElement*) nextSiblingNamed:(NSString*)aName searchFromElement:(AutomatID_OTTBXMLElement*)aXMLElement error:(NSError **)error;
+ (AutomatID_OTTBXMLElement*) childElementNamed:(NSString*)aName parentElement:(AutomatID_OTTBXMLElement*)aParentXMLElement error:(NSError **)error;

/** Iterate through all elements found using query.
 
 Inspiration taken from John Blanco's RaptureXML https://github.com/ZaBlanc/RaptureXML
 */
+ (void)iterateElementsForQuery:(NSString *)query fromElement:(AutomatID_OTTBXMLElement *)anElement withBlock:(OTTBXMLIterateBlock)iterateBlock;
+ (void)iterateAttributesOfElement:(AutomatID_OTTBXMLElement *)anElement withBlock:(OTTBXMLIterateAttributeBlock)iterateBlock;


@end
