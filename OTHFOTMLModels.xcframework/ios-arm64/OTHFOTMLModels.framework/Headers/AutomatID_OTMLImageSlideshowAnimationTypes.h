typedef enum {
    AutomatID_OTMLImageSlideshowAnimationTypes_none = 0,
    AutomatID_OTMLImageSlideshowAnimationTypes_enter_from_left = 1,
    AutomatID_OTMLImageSlideshowAnimationTypes_enter_from_right = 2,
    AutomatID_OTMLImageSlideshowAnimationTypes_enter_from_top = 3,
    AutomatID_OTMLImageSlideshowAnimationTypes_enter_from_bottom = 4,
    AutomatID_OTMLImageSlideshowAnimationTypes_exit_to_left = 5,
    AutomatID_OTMLImageSlideshowAnimationTypes_exit_to_right = 6,
    AutomatID_OTMLImageSlideshowAnimationTypes_exit_to_top = 7,
    AutomatID_OTMLImageSlideshowAnimationTypes_exit_to_bottom = 8,
    AutomatID_OTMLImageSlideshowAnimationTypes_fade_in = 9,
    AutomatID_OTMLImageSlideshowAnimationTypes_fade_out = 10,
    AutomatID_OTMLImageSlideshowAnimationTypes_fade_in_out = 11
} AutomatID_OTMLImageSlideshowAnimationTypes;

@interface AutomatID_OTMLImageSlideshowAnimationTypesSupport : NSObject

+(AutomatID_OTMLImageSlideshowAnimationTypes) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLImageSlideshowAnimationTypes) aValue;

@end
