typedef enum {
    AutomatID_OTMLSize_medium = 0,
    AutomatID_OTMLSize_small = 1,
    AutomatID_OTMLSize_large = 2
} AutomatID_OTMLSize;

@interface AutomatID_OTMLSizeSupport : NSObject

+(AutomatID_OTMLSize) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLSize) aValue;

@end
