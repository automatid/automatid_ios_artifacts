typedef enum {
    AutomatID_OTMLComponentErrorMode_self_full = 0,
    AutomatID_OTMLComponentErrorMode_self_bg = 1,
    AutomatID_OTMLComponentErrorMode_none = 2
} AutomatID_OTMLComponentErrorMode;

@interface AutomatID_OTMLComponentErrorModeSupport : NSObject

+(AutomatID_OTMLComponentErrorMode) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLComponentErrorMode) aValue;

@end
