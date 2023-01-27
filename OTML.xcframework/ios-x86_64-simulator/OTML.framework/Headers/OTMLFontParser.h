//
//  OTMLFontParser.h
//  Pods
//
//  Created by Valerio Ferrantelli on 08/06/17.
//
//

#import <OTMLModels/OTMLAbstractFontParser.h>

@interface OTMLFontParser : NSObject <OTMLAbstractFontParser>

typedef NSString*(^FontFamilyNameResolve)(NSString* family, NSString* style);
typedef UIFont*(^FontFamilyResolve)(NSString* family, NSString* style);

@property (nonatomic, strong) NSDictionary* fontNameTranslationMap;
@property (nonatomic, strong) NSDictionary* fontStyleTranslationMap;

@property (nonatomic, copy) OTMLCallback fontSizeTranslationCallback;

@property (nonatomic, copy) FontFamilyNameResolve advancedFamilyTranslationMethod;
@property (nonatomic, copy) FontFamilyResolve advancedFontTranslationMethod;

@end
