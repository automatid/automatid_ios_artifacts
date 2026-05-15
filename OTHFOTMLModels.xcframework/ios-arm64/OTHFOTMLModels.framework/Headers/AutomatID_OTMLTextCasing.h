typedef enum {
    AutomatID_OTMLTextCasing_unchanged = 0,
    AutomatID_OTMLTextCasing_uppercase = 1,
    AutomatID_OTMLTextCasing_lowercase = 2,
    AutomatID_OTMLTextCasing_capitalWords = 3,
    AutomatID_OTMLTextCasing_capitalSentences = 4
} AutomatID_OTMLTextCasing;

@interface AutomatID_OTMLTextCasingSupport : NSObject

+(AutomatID_OTMLTextCasing) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLTextCasing) aValue;

@end
