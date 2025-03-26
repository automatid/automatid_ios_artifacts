#import "AutomatID_OTMLComponentModel.h"


//All triggers that are allowed by this component
extern NSString* const t_AutomatID_ImageSlideshow_did_start;
extern NSString* const t_AutomatID_ImageSlideshow_did_finish;
//All triggers that are allowed by this component
extern NSString* const t_AutomatID_ImageSlideshow_reload_ds;
extern NSString* const t_AutomatID_ImageSlideshow_start;
extern NSString* const t_AutomatID_ImageSlideshow_stop;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_AutomatID_ImageSlideshow_reference_ds;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_AutomatID_ImageSlideshow_total_play_time;

@interface AutomatID_OTMLImageSlideshowModel : AutomatID_OTMLComponentModel<NSCopying>

    @property(nonatomic, strong) NSString* play_again_cg;


@property(nonatomic, strong) NSString* reference_ds;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
