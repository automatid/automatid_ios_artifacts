typedef enum {
    AutomatID_OTMLRedirectionPolicy_host = 0,
    AutomatID_OTMLRedirectionPolicy_no = 1,
    AutomatID_OTMLRedirectionPolicy_yes = 2
} AutomatID_OTMLRedirectionPolicy;

@interface AutomatID_OTMLRedirectionPolicySupport : NSObject

+(AutomatID_OTMLRedirectionPolicy) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLRedirectionPolicy) aValue;

@end
