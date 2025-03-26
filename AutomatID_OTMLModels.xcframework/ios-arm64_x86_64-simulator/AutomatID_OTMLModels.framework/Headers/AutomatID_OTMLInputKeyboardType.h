typedef enum {
    AutomatID_OTMLInputKeyboardType_alphanumeric = 0,
    AutomatID_OTMLInputKeyboardType_alphanumericOnNumber = 1,
    AutomatID_OTMLInputKeyboardType_numericDecimal = 2,
    AutomatID_OTMLInputKeyboardType_numberOnly = 3,
    AutomatID_OTMLInputKeyboardType_phonePad = 4,
    AutomatID_OTMLInputKeyboardType_url = 5,
    AutomatID_OTMLInputKeyboardType_email = 6,
    AutomatID_OTMLInputKeyboardType_date = 7
} AutomatID_OTMLInputKeyboardType;

@interface AutomatID_OTMLInputKeyboardTypeSupport : NSObject

+(AutomatID_OTMLInputKeyboardType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLInputKeyboardType) aValue;

@end
