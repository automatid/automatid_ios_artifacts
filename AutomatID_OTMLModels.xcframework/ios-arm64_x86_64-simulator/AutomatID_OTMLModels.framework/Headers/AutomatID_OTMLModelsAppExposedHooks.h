//
//  AutomatID_OTMLModelsAppExposedHooks.h
//  OTMLModels
//
//  Created by Silvio D'Angelo on 16/06/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AutomatID_OTMLModelsAppExposedHooks : NSObject

@property NSDictionary<NSString*,UIColor*>* redefinedColors;
@property NSDictionary<NSString*,UIFont*>* redefinedFontFamilies;
@property NSDictionary<NSString*, NSDictionary<NSString*, NSString*>*>* redefinedStringPlaceholders;

+ (AutomatID_OTMLModelsAppExposedHooks*) getInstance;

@end

NS_ASSUME_NONNULL_END
