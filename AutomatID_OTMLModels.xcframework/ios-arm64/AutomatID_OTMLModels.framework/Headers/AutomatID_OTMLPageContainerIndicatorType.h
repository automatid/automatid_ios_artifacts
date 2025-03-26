typedef enum {
    AutomatID_OTMLPageContainerIndicatorType_bullets = 0,
    AutomatID_OTMLPageContainerIndicatorType_lines = 1,
    AutomatID_OTMLPageContainerIndicatorType_names = 2
} AutomatID_OTMLPageContainerIndicatorType;

@interface AutomatID_OTMLPageContainerIndicatorTypeSupport : NSObject

+(AutomatID_OTMLPageContainerIndicatorType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLPageContainerIndicatorType) aValue;

@end
