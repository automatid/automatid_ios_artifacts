//
//  AutomatID_OTMLCryptoParamModes.h
//  Pods
//
//  Created by Valerio Ferrantelli on 13/06/17.
//
//

#import "AutomatID_OTMLParamModeAbstractStrategy.h"


@interface AutomatID_OTMLParameterManipulationParamModes : AutomatID_OTMLParamModeStrategyGroup
@end


@interface AutomatID_OTMLParameterResolveParamMode : AutomatID_OTMLParamModeStrategy
@end

@interface AutomatID_OTMLParameterRefParamMode : AutomatID_OTMLParamModeStrategy
@end

@interface OTMLCustomParamMode : AutomatID_OTMLParamModeStrategy

+(AutomatID_OTMLParamModeStrategy*) customParamModeStrategyFromCMode:(NSString*) aCustomModeStr;

@end
