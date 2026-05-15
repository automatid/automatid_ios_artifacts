typedef enum {
    AutomatID_OTMLVisibility_visible = 0,
    AutomatID_OTMLVisibility_collapsed = 1,
    AutomatID_OTMLVisibility_invisible = 2,
    AutomatID_OTMLVisibility_collapsed_h = 3,
    AutomatID_OTMLVisibility_collapsed_both = 4,
    AutomatID_OTMLVisibility_collapsed_v = 5
} AutomatID_OTMLVisibility;

@interface AutomatID_OTMLVisibilitySupport : NSObject

+(AutomatID_OTMLVisibility) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLVisibility) aValue;

@end
