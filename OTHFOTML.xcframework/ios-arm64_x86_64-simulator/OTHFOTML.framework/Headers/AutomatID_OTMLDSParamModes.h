//
//  AutomatID_OTMLCryptoParamModes.h
//  Pods
//
//  Created by Valerio Ferrantelli on 13/06/17.
//
//

#import "AutomatID_OTMLParamModeAbstractStrategy.h"


@interface AutomatID_OTMLDSParamModes : AutomatID_OTMLParamModeStrategyGroup
@end

@interface AutomatID_OTMLDSToJsonParamMode : AutomatID_OTMLParamModeStrategy
@end

@interface AutomatID_OTMLDSMinMaxParamMode : AutomatID_OTMLParamModeStrategy
- (instancetype)initWithMode:(BOOL)maxMode;
@end

@interface AutomatID_OTMLDSSearchParamMode : AutomatID_OTMLParamModeStrategy
@end
