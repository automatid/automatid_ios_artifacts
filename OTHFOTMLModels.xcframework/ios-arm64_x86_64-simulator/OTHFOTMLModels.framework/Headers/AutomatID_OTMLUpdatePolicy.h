typedef enum {
    AutomatID_OTMLUpdatePolicy_synchronous = 0,
    AutomatID_OTMLUpdatePolicy_asynchronous = 1
} AutomatID_OTMLUpdatePolicy;

@interface AutomatID_OTMLUpdatePolicySupport : NSObject

+(AutomatID_OTMLUpdatePolicy) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLUpdatePolicy) aValue;

@end
