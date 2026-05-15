typedef enum {
    AutomatID_OTMLInvalidateMode_none = 0,
    AutomatID_OTMLInvalidateMode_passcode_reset = 1,
    AutomatID_OTMLInvalidateMode_passcode_reset_or_fingerset_changed = 2,
    AutomatID_OTMLInvalidateMode_fingerset_changed = 3
} AutomatID_OTMLInvalidateMode;

@interface AutomatID_OTMLInvalidateModeSupport : NSObject

+(AutomatID_OTMLInvalidateMode) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLInvalidateMode) aValue;

@end
