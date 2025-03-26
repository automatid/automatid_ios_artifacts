typedef enum {
    AutomatID_OTMLNetworkInteractionType_post = 0,
    AutomatID_OTMLNetworkInteractionType_get = 1,
    AutomatID_OTMLNetworkInteractionType_put = 2,
    AutomatID_OTMLNetworkInteractionType_delete = 3,
    AutomatID_OTMLNetworkInteractionType_head = 4,
    AutomatID_OTMLNetworkInteractionType_patch = 5
} AutomatID_OTMLNetworkInteractionType;

@interface AutomatID_OTMLNetworkInteractionTypeSupport : NSObject

+(AutomatID_OTMLNetworkInteractionType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLNetworkInteractionType) aValue;

@end
