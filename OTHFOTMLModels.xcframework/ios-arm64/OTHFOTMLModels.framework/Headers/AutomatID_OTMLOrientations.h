typedef enum {
    AutomatID_OTMLOrientations_v = 0,
    AutomatID_OTMLOrientations_h = 1
} AutomatID_OTMLOrientations;

@interface AutomatID_OTMLOrientationsSupport : NSObject

+(AutomatID_OTMLOrientations) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLOrientations) aValue;

@end
