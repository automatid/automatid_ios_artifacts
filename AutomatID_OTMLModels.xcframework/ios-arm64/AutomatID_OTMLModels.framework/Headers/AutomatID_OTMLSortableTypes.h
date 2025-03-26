typedef enum {
    AutomatID_OTMLSortableTypes_string = 0,
    AutomatID_OTMLSortableTypes_integer = 1,
    AutomatID_OTMLSortableTypes_decimal = 2,
    AutomatID_OTMLSortableTypes_date = 3
} AutomatID_OTMLSortableTypes;

@interface AutomatID_OTMLSortableTypesSupport : NSObject

+(AutomatID_OTMLSortableTypes) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLSortableTypes) aValue;

@end
