//
//  AutomatID_OTMLCryptoParamModes.h
//  Pods
//
//  Created by Valerio Ferrantelli on 13/06/17.
//
//

#import "AutomatID_OTMLParamModeAbstractStrategy.h"

@class AutomatID_OTMLImage;

@interface AutomatID_OTMLImageParamModes : AutomatID_OTMLParamModeStrategyGroup
@end

@interface AutomatID_OTMLImageManipulationParamMode : AutomatID_OTMLParamModeStrategy<AutomatID_OTMLAsyncParamModeStrategy, AutomatID_OTMLNotSingletonParamModeStrategy>

@property(nonatomic, retain) AutomatID_OTMLImage* srcUIImage;

@end

@interface AutomatID_OTMLImageSizeParamMode : AutomatID_OTMLParamModeStrategy
@end

@interface AutomatID_OTMLDimensionToPxParamMode : AutomatID_OTMLParamModeStrategy
@end

@interface AutomatID_OTMLPxToDimensionParamMode : AutomatID_OTMLParamModeStrategy
@end

@interface AutomatID_OTMLImageFromTextParamMode : AutomatID_OTMLParamModeStrategy
@end

