typedef enum {
    AutomatID_OTMLNetworkRequestType_post = 0,
    AutomatID_OTMLNetworkRequestType_get = 1,
    AutomatID_OTMLNetworkRequestType_raw_post = 2
} AutomatID_OTMLNetworkRequestType;

@interface AutomatID_OTMLNetworkRequestTypeSupport : NSObject

+(AutomatID_OTMLNetworkRequestType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLNetworkRequestType) aValue;

@end
