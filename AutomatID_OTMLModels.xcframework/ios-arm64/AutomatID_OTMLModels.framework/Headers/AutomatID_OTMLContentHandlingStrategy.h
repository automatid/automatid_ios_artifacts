typedef enum {
    AutomatID_OTMLContentHandlingStrategy_replace = 0,
    AutomatID_OTMLContentHandlingStrategy_append = 1
} AutomatID_OTMLContentHandlingStrategy;

@interface AutomatID_OTMLContentHandlingStrategySupport : NSObject

+(AutomatID_OTMLContentHandlingStrategy) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLContentHandlingStrategy) aValue;

@end
