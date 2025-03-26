typedef enum {
    AutomatID_OTMLImageContentScale_none = 0,
    AutomatID_OTMLImageContentScale_fill = 1,
    AutomatID_OTMLImageContentScale_fit = 2
} AutomatID_OTMLImageContentScale;

@interface AutomatID_OTMLImageContentScaleSupport : NSObject

+(AutomatID_OTMLImageContentScale) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLImageContentScale) aValue;

@end
