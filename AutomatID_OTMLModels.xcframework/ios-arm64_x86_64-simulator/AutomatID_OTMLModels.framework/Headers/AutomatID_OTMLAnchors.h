typedef enum {
    AutomatID_OTMLAnchors_bottom = 0,
    AutomatID_OTMLAnchors_top = 1
} AutomatID_OTMLAnchors;

@interface AutomatID_OTMLAnchorsSupport : NSObject

+(AutomatID_OTMLAnchors) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLAnchors) aValue;

@end
