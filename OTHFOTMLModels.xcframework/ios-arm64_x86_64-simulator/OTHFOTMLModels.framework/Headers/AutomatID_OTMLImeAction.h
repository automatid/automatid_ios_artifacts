typedef enum {
    AutomatID_OTMLImeAction_none = 0,
    AutomatID_OTMLImeAction_done = 1,
    AutomatID_OTMLImeAction_next = 2,
    AutomatID_OTMLImeAction_search = 3,
    AutomatID_OTMLImeAction_send = 4,
    AutomatID_OTMLImeAction_go = 5
} AutomatID_OTMLImeAction;

@interface AutomatID_OTMLImeActionSupport : NSObject

+(AutomatID_OTMLImeAction) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLImeAction) aValue;

@end
