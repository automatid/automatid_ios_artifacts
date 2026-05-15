typedef enum {
    AutomatID_OTMLModePagerList_normal = 0,
    AutomatID_OTMLModePagerList_gallery = 1
} AutomatID_OTMLModePagerList;

@interface AutomatID_OTMLModePagerListSupport : NSObject

+(AutomatID_OTMLModePagerList) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLModePagerList) aValue;

@end
