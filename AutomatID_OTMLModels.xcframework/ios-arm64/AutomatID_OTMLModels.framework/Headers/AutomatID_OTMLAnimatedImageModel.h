#import "AutomatID_OTMLAnimationImageLottieScaleTypes.h"
#import "AutomatID_OTMLComponentModel.h"


//All triggers that are allowed by this component
extern NSString* const t_AutomatID_AnimatedImage_lottie_trigger_start;
extern NSString* const t_AutomatID_AnimatedImage_lottie_trigger_end;
extern NSString* const t_AutomatID_AnimatedImage_lottie_trigger_cancel;
//All triggers that are allowed by this component
extern NSString* const t_AutomatID_AnimatedImage_start_animation;
extern NSString* const t_AutomatID_AnimatedImage_stop_animation;
extern NSString* const t_AutomatID_AnimatedImage_reset_animation;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_AutomatID_AnimatedImage_animation_image_prefix;
extern NSString* const p_AutomatID_AnimatedImage_animation_duration;
extern NSString* const p_AutomatID_AnimatedImage_animation_frame_number;
extern NSString* const p_AutomatID_AnimatedImage_lottie_scale_type;

@interface AutomatID_OTMLAnimatedImageModel : AutomatID_OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) float animation_duration;


@property(nonatomic, assign) NSInteger animation_frame_number;


@property(nonatomic, strong) NSString* animation_image_prefix;


@property(nonatomic, assign) BOOL enable_auto_start_and_stop;


@property(nonatomic, assign) BOOL loop_animation;


@property(nonatomic, assign) BOOL lottie_autoPlay;


@property(nonatomic, strong) NSString* lottie_resource;


@property(nonatomic, assign) float lottie_scale;


@property(nonatomic, assign) AutomatID_OTMLAnimationImageLottieScaleTypes lottie_scale_type;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
