//
//  OTMLFontParser.h
//  Pods
//
//  Created by Valerio Ferrantelli on 08/06/17.
//
//

#import <AutomatID_OTMLModels/AutomatID_OTMLAbstractFontParser.h>

@interface AutomatID_OTMLFontParser : NSObject <AutomatID_OTMLAbstractFontParser>

typedef NSString*(^FontFamilyNameResolve)(NSString* family, NSString* style);
typedef UIFont*(^FontFamilyResolve)(NSString* family, NSString* style);

@property (nonatomic, strong) NSDictionary* fontNameTranslationMap;
@property (nonatomic, strong) NSDictionary* fontStyleTranslationMap;

@property (nonatomic, copy) OTMLCallback fontSizeTranslationCallback;

@property (nonatomic, copy) FontFamilyNameResolve advancedFamilyTranslationMethod;
@property (nonatomic, copy) FontFamilyResolve advancedFontTranslationMethod;

@end
