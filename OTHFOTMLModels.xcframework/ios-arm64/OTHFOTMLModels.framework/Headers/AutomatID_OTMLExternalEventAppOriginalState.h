typedef enum {
    AutomatID_OTMLExternalEventAppOriginalState_foreground = 0,
    AutomatID_OTMLExternalEventAppOriginalState_opening = 1,
    AutomatID_OTMLExternalEventAppOriginalState_background = 2
} AutomatID_OTMLExternalEventAppOriginalState;

@interface AutomatID_OTMLExternalEventAppOriginalStateSupport : NSObject

+(AutomatID_OTMLExternalEventAppOriginalState) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLExternalEventAppOriginalState) aValue;

@end
