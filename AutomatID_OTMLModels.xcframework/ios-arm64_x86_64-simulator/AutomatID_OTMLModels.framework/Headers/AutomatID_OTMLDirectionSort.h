typedef enum {
    AutomatID_OTMLDirectionSort_desc = 0,
    AutomatID_OTMLDirectionSort_asc = 1
} AutomatID_OTMLDirectionSort;

@interface AutomatID_OTMLDirectionSortSupport : NSObject

+(AutomatID_OTMLDirectionSort) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLDirectionSort) aValue;

@end
