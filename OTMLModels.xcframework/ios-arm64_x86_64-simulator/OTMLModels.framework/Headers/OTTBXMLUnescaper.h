#import <Foundation/Foundation.h>
#import "OTTBXML.h"

NS_ASSUME_NONNULL_BEGIN

@interface OTTBXMLUnescaper : NSObject

+ (NSString*) textForElement:(OTTBXMLElement*)aXMLElement;

+ (NSString*) valueOfAttributeNamed:(NSString *)aName forElement:(OTTBXMLElement*)aXMLElement;

+ (void)iterateAttributesOfElement:(OTTBXMLElement *)anElement withBlock:(OTTBXMLIterateAttributeBlock)iterateAttributeBlock;

+ (NSString*) unescapeXMLString:(NSString*) aXMLEscapedString;

@end

NS_ASSUME_NONNULL_END
