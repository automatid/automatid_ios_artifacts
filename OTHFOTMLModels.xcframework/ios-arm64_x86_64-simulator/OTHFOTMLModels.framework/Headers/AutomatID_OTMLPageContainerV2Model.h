#import "AutomatID_OTMLFrameContainerModel.h"
#import "AutomatID_OTMLModePagerList.h"
@class AutomatID_OTMPColor;


//All triggers that are allowed by this component
extern NSString* const t_AutomatID_PageContainerV2_page_changed;
//All triggers that are allowed by this component
extern NSString* const t_AutomatID_PageContainerV2_goto_next_page;
extern NSString* const t_AutomatID_PageContainerV2_goto_prev_page;
extern NSString* const t_AutomatID_PageContainerV2_goto_next_page_no_ani;
extern NSString* const t_AutomatID_PageContainerV2_goto_prev_page_no_ani;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_AutomatID_PageContainerV2_current_page;
extern NSString* const p_AutomatID_PageContainerV2_current_page_no_ani;
extern NSString* const p_AutomatID_PageContainerV2_swipe_enabled;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_AutomatID_PageContainerV2_current_page;
extern NSString* const f_AutomatID_PageContainerV2_content_page_id;
extern NSString* const f_AutomatID_PageContainerV2_current_page_zero_based;
extern NSString* const f_AutomatID_PageContainerV2_pages_count;
extern NSString* const f_AutomatID_PageContainerV2_has_prev_page;
extern NSString* const f_AutomatID_PageContainerV2_has_next_page;

@interface AutomatID_OTMLPageContainerV2Model : AutomatID_OTMLFrameContainerModel<NSCopying>

    @property(nonatomic, assign) BOOL bounce;


@property(nonatomic, assign) AutomatID_OTMLModePagerList mode;


@property(nonatomic, strong) NSString* pager_indicator_id;


@property(nonatomic, assign) NSInteger preview_size;


/**
Image name to be used as parallax scroll background
*/
@property(nonatomic, strong) NSString* scroll_bg;


@property(nonatomic, strong) AutomatID_OTMPColor* shadow_color;


@property(nonatomic, assign) BOOL swipe_enabled;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
