#import <Foundation/Foundation.h>
#import "AutomatID_OTTBXML.h"

NS_ASSUME_NONNULL_BEGIN

@interface AutomatID_OTTBXMLUnescaper : NSObject

+ (NSString*) textForElement:(AutomatID_OTTBXMLElement*)aXMLElement;

+ (NSString*) valueOfAttributeNamed:(NSString *)aName forElement:(AutomatID_OTTBXMLElement*)aXMLElement;

+ (void)iterateAttributesOfElement:(AutomatID_OTTBXMLElement *)anElement withBlock:(OTTBXMLIterateAttributeBlock)iterateAttributeBlock;

+ (NSString*) unescapeXMLString:(NSString*) aXMLEscapedString;

@end

NS_ASSUME_NONNULL_END
