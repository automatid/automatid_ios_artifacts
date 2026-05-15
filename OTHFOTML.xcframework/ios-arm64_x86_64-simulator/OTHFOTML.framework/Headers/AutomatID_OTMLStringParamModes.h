//
//  AutomatID_OTMLStringParamModes.h
//  Pods
//
//  Created by Valerio Ferrantelli on 14/06/17.
//
//
#import "AutomatID_OTMLParamModeAbstractStrategy.h"


@interface AutomatID_OTMLStringParamModes : AutomatID_OTMLParamModeStrategyGroup
@end
@interface AutomatID_OTMLReplaceStringParamMode : AutomatID_OTMLParamModeStrategy
@end
@interface AutomatID_OTMLConcatStringParamMode : AutomatID_OTMLParamModeStrategy
@end
@interface AutomatID_OTMLTrimStringParamMode : AutomatID_OTMLParamModeStrategy
@end
@interface AutomatID_OTMLSplitStringParamMode : AutomatID_OTMLParamModeStrategy
@end
@interface AutomatID_OTMLSubstringStringParamMode : AutomatID_OTMLParamModeStrategy
@end
@interface AutomatID_OTMLBase64EncodeParamMode : AutomatID_OTMLParamModeStrategy
@end
@interface AutomatID_OTMLBase64DecodeParamMode : AutomatID_OTMLParamModeStrategy
@end
@interface AutomatID_OTMLStripDiacriticsStringParamMode : AutomatID_OTMLParamModeStrategy
@end
@interface AutomatID_OTMLQueryStringParamMode : AutomatID_OTMLParamModeStrategy

+ (NSString *) serializeForQueryURLParameters:(NSDictionary<NSString *,id> *)dictionary;

@end
@interface AutomatID_OTMLURLEncodeParamMode : AutomatID_OTMLParamModeStrategy
- (instancetype)initWithEncodeMode:(BOOL)_isEncodeMode;
@end
@interface AutomatID_OTMLChangeCaseStringParamMode : AutomatID_OTMLParamModeStrategy
@end
@interface AutomatID_OTMLLenghtStringParamMode : AutomatID_OTMLParamModeStrategy
@end
@interface AutomatID_OTMLDecomposeURLParamMode : AutomatID_OTMLParamModeStrategy
@end

@interface AutomatID_OTMLCardFormatterParamMode : AutomatID_OTMLParamModeStrategy
@end // payment_card_formatter
@interface AutomatID_OTMLCardTypeParamMode : AutomatID_OTMLParamModeStrategy
@end // payment_card_type
