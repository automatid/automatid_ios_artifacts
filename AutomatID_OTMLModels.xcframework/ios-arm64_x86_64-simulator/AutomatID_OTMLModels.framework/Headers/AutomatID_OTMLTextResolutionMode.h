typedef enum {
    AutomatID_OTMLTextResolutionMode_language_manager = 0,
    AutomatID_OTMLTextResolutionMode_literal = 1,
    AutomatID_OTMLTextResolutionMode_resolve_value = 2
} AutomatID_OTMLTextResolutionMode;

@interface AutomatID_OTMLTextResolutionModeSupport : NSObject

+(AutomatID_OTMLTextResolutionMode) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLTextResolutionMode) aValue;

@end
