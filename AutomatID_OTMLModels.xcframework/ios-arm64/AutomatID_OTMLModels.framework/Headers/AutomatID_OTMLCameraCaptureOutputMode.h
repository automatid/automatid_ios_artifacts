typedef enum {
    AutomatID_OTMLCameraCaptureOutputMode_max_resolution = 0,
    AutomatID_OTMLCameraCaptureOutputMode_match_preview = 1
} AutomatID_OTMLCameraCaptureOutputMode;

@interface AutomatID_OTMLCameraCaptureOutputModeSupport : NSObject

+(AutomatID_OTMLCameraCaptureOutputMode) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLCameraCaptureOutputMode) aValue;

@end
