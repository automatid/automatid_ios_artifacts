typedef enum {
    AutomatID_OTMLAnimationTypes_none = 0,
    AutomatID_OTMLAnimationTypes_flip_horizontal_left = 1,
    AutomatID_OTMLAnimationTypes_flip_horizontal_right = 2,
    AutomatID_OTMLAnimationTypes_curl_up = 3,
    AutomatID_OTMLAnimationTypes_curl_down = 4,
    AutomatID_OTMLAnimationTypes_linear_vertical_top_bottom = 5,
    AutomatID_OTMLAnimationTypes_linear_vertical_bottom_top = 6,
    AutomatID_OTMLAnimationTypes_linear_horizontal_right_left = 7,
    AutomatID_OTMLAnimationTypes_linear_horizontal_left_right = 8
} AutomatID_OTMLAnimationTypes;

@interface AutomatID_OTMLAnimationTypesSupport : NSObject

+(AutomatID_OTMLAnimationTypes) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLAnimationTypes) aValue;

@end
