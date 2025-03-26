typedef enum {
    AutomatID_OTMLVerticalAlignment_top = 0,
    AutomatID_OTMLVerticalAlignment_middle = 1,
    AutomatID_OTMLVerticalAlignment_down = 2
} AutomatID_OTMLVerticalAlignment;

@interface AutomatID_OTMLVerticalAlignmentSupport : NSObject

+(AutomatID_OTMLVerticalAlignment) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLVerticalAlignment) aValue;

@end
