typedef enum {
    AutomatID_OTMLTabbarLabelVisibility_auto = 0,
    AutomatID_OTMLTabbarLabelVisibility_selected = 1,
    AutomatID_OTMLTabbarLabelVisibility_labeled = 2,
    AutomatID_OTMLTabbarLabelVisibility_unlabeled = 3
} AutomatID_OTMLTabbarLabelVisibility;

@interface AutomatID_OTMLTabbarLabelVisibilitySupport : NSObject

+(AutomatID_OTMLTabbarLabelVisibility) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLTabbarLabelVisibility) aValue;

@end
