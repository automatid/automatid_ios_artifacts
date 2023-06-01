//
//  OTTBXMLUnescaper.h
//  OTMLModels
//
//  Created by Silvio D'Angelo on 08/05/23.
//

#import <Foundation/Foundation.h>
#import <TBXML/TBXML.h>

NS_ASSUME_NONNULL_BEGIN

@interface OTTBXMLUnescaper : NSObject

+ (NSString*) textForElement:(TBXMLElement*)aXMLElement;

+ (NSString*) valueOfAttributeNamed:(NSString *)aName forElement:(TBXMLElement*)aXMLElement;

+ (void)iterateAttributesOfElement:(TBXMLElement *)anElement withBlock:(TBXMLIterateAttributeBlock)iterateAttributeBlock;

@end

NS_ASSUME_NONNULL_END
