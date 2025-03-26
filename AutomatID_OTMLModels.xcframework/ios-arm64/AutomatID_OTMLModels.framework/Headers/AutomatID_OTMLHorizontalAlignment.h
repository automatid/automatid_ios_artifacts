typedef enum {
    AutomatID_OTMLHorizontalAlignment_left = 0,
    AutomatID_OTMLHorizontalAlignment_center = 1,
    AutomatID_OTMLHorizontalAlignment_right = 2
} AutomatID_OTMLHorizontalAlignment;

@interface AutomatID_OTMLHorizontalAlignmentSupport : NSObject

+(AutomatID_OTMLHorizontalAlignment) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLHorizontalAlignment) aValue;

@end
