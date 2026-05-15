typedef enum {
    AutomatID_OTMLTextInputCasing_unchanged = 0,
    AutomatID_OTMLTextInputCasing_uppercase = 1,
    AutomatID_OTMLTextInputCasing_lowercase = 2
} AutomatID_OTMLTextInputCasing;

@interface AutomatID_OTMLTextInputCasingSupport : NSObject

+(AutomatID_OTMLTextInputCasing) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLTextInputCasing) aValue;

@end
