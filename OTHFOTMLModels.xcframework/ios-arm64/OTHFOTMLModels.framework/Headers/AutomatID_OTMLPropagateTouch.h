typedef enum {
    AutomatID_OTMLPropagateTouch_all = 0,
    AutomatID_OTMLPropagateTouch_none = 1,
    AutomatID_OTMLPropagateTouch_components = 2,
    AutomatID_OTMLPropagateTouch_containers = 3,
    AutomatID_OTMLPropagateTouch_by_id = 4
} AutomatID_OTMLPropagateTouch;

@interface AutomatID_OTMLPropagateTouchSupport : NSObject

+(AutomatID_OTMLPropagateTouch) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLPropagateTouch) aValue;

@end
