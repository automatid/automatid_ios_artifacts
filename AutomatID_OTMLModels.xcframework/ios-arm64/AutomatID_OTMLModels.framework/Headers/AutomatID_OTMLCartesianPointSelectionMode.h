typedef enum {
    AutomatID_OTMLCartesianPointSelectionMode_none = 0,
    AutomatID_OTMLCartesianPointSelectionMode_line = 1,
    AutomatID_OTMLCartesianPointSelectionMode_balloon = 2
} AutomatID_OTMLCartesianPointSelectionMode;

@interface AutomatID_OTMLCartesianPointSelectionModeSupport : NSObject

+(AutomatID_OTMLCartesianPointSelectionMode) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLCartesianPointSelectionMode) aValue;

@end
