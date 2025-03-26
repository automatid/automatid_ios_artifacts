typedef enum {
    AutomatID_OTMLCartesianGridLineType_none = 0,
    AutomatID_OTMLCartesianGridLineType_continuous = 1,
    AutomatID_OTMLCartesianGridLineType_dashed = 2
} AutomatID_OTMLCartesianGridLineType;

@interface AutomatID_OTMLCartesianGridLineTypeSupport : NSObject

+(AutomatID_OTMLCartesianGridLineType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLCartesianGridLineType) aValue;

@end
