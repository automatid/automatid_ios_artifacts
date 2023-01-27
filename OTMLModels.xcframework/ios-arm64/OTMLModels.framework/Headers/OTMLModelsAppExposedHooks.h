//
//  OTMLModelsAppExposedHooks.h
//  OTMLModels
//
//  Created by Silvio D'Angelo on 16/06/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OTMLModelsAppExposedHooks : NSObject

@property NSDictionary<NSString*,UIColor*>* redefinedColors;
@property NSDictionary<NSString*,UIFont*>* redefinedFontFamilies;
@property NSDictionary<NSString*, NSDictionary<NSString*, NSString*>*>* redefinedStringPlaceholders;

+ (OTMLModelsAppExposedHooks*) getInstance;

@end

NS_ASSUME_NONNULL_END
