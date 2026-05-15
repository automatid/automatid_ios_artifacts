typedef enum {
    AutomatID_OTMLPagerMode_panorama = 0,
    AutomatID_OTMLPagerMode_pivot = 1
} AutomatID_OTMLPagerMode;

@interface AutomatID_OTMLPagerModeSupport : NSObject

+(AutomatID_OTMLPagerMode) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLPagerMode) aValue;

@end
