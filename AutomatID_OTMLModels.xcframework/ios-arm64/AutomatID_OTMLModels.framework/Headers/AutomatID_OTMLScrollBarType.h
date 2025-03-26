typedef enum {
    AutomatID_OTMLScrollBarType_h = 0,
    AutomatID_OTMLScrollBarType_v = 1,
    AutomatID_OTMLScrollBarType_n = 2
} AutomatID_OTMLScrollBarType;

@interface AutomatID_OTMLScrollBarTypeSupport : NSObject

+(AutomatID_OTMLScrollBarType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLScrollBarType) aValue;

@end
