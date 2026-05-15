typedef enum {
    AutomatID_OTMLDynamicContainerLocalLoadingMode_storage = 0,
    AutomatID_OTMLDynamicContainerLocalLoadingMode_mapstack = 1
} AutomatID_OTMLDynamicContainerLocalLoadingMode;

@interface AutomatID_OTMLDynamicContainerLocalLoadingModeSupport : NSObject

+(AutomatID_OTMLDynamicContainerLocalLoadingMode) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLDynamicContainerLocalLoadingMode) aValue;

@end
