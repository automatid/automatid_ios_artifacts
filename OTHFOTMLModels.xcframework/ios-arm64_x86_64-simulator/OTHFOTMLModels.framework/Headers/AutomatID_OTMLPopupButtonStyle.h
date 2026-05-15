typedef enum {
    AutomatID_OTMLPopupButtonStyle_accept = 0,
    AutomatID_OTMLPopupButtonStyle_dismiss = 1,
    AutomatID_OTMLPopupButtonStyle_destructive = 2
} AutomatID_OTMLPopupButtonStyle;

@interface AutomatID_OTMLPopupButtonStyleSupport : NSObject

+(AutomatID_OTMLPopupButtonStyle) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLPopupButtonStyle) aValue;

@end
