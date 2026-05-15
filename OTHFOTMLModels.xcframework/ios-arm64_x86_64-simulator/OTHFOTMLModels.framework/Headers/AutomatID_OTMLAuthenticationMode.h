typedef enum {
    AutomatID_OTMLAuthenticationMode_none = 0,
    AutomatID_OTMLAuthenticationMode_biometric = 1,
    AutomatID_OTMLAuthenticationMode_passcode = 2,
    AutomatID_OTMLAuthenticationMode_passcode_or_biometric = 3
} AutomatID_OTMLAuthenticationMode;

@interface AutomatID_OTMLAuthenticationModeSupport : NSObject

+(AutomatID_OTMLAuthenticationMode) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLAuthenticationMode) aValue;

@end
