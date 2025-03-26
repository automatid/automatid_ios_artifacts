typedef enum {
    AutomatID_OTMLAnimationImageLottieScaleTypes_none = 0,
    AutomatID_OTMLAnimationImageLottieScaleTypes_fit_center = 1,
    AutomatID_OTMLAnimationImageLottieScaleTypes_fit_xy = 2,
    AutomatID_OTMLAnimationImageLottieScaleTypes_center = 3,
    AutomatID_OTMLAnimationImageLottieScaleTypes_center_crop = 4,
    AutomatID_OTMLAnimationImageLottieScaleTypes_center_inside = 5,
    AutomatID_OTMLAnimationImageLottieScaleTypes_fit_end = 6,
    AutomatID_OTMLAnimationImageLottieScaleTypes_fit_start = 7,
    AutomatID_OTMLAnimationImageLottieScaleTypes_matrix = 8
} AutomatID_OTMLAnimationImageLottieScaleTypes;

@interface AutomatID_OTMLAnimationImageLottieScaleTypesSupport : NSObject

+(AutomatID_OTMLAnimationImageLottieScaleTypes) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLAnimationImageLottieScaleTypes) aValue;

@end
