typedef enum {
    AutomatID_OTMLPopupButtonPosition_end = 0,
    AutomatID_OTMLPopupButtonPosition_start = 1
} AutomatID_OTMLPopupButtonPosition;

@interface AutomatID_OTMLPopupButtonPositionSupport : NSObject

+(AutomatID_OTMLPopupButtonPosition) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLPopupButtonPosition) aValue;

@end
