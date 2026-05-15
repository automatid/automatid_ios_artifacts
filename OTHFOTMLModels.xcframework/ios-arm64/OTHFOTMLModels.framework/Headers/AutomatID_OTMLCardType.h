typedef enum {
    AutomatID_OTMLCardType_none = 0,
    AutomatID_OTMLCardType_visa = 1,
    AutomatID_OTMLCardType_visa_electron = 2,
    AutomatID_OTMLCardType_amex = 3,
    AutomatID_OTMLCardType_unionpay = 4,
    AutomatID_OTMLCardType_mastercard = 5,
    AutomatID_OTMLCardType_maestro = 6,
    AutomatID_OTMLCardType_diners_int = 7,
    AutomatID_OTMLCardType_diners_us = 8,
    AutomatID_OTMLCardType_diners_discover = 9,
    AutomatID_OTMLCardType_jcb = 10,
    AutomatID_OTMLCardType_uatp = 11,
    AutomatID_OTMLCardType_dankort = 12,
    AutomatID_OTMLCardType_interpayment = 13
} AutomatID_OTMLCardType;

@interface AutomatID_OTMLCardTypeSupport : NSObject

+(AutomatID_OTMLCardType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLCardType) aValue;

@end
