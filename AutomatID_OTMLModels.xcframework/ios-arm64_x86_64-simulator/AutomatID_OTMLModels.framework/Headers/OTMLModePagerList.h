typedef enum {
    OTMLModePagerList_normal = 0,
    OTMLModePagerList_gallery = 1
} OTMLModePagerList;

@interface OTMLModePagerListSupport : NSObject

+(OTMLModePagerList) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLModePagerList) aValue;

@end
