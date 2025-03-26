@class AutomatID_OTMLFont;
#import "AutomatID_OTMLFrameContainerModel.h"
@class AutomatID_OTMPColor;
#import "AutomatID_OTMLPageContainerIndicatorType.h"


//All triggers that are allowed by this component
extern NSString* const t_AutomatID_PageContainer_page_changed;
//All triggers that are allowed by this component
extern NSString* const t_AutomatID_PageContainer_goto_next_page;
extern NSString* const t_AutomatID_PageContainer_goto_prev_page;
extern NSString* const t_AutomatID_PageContainer_reload_indicator;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_AutomatID_PageContainer_current_page;
extern NSString* const p_AutomatID_PageContainer_swipe_enabled;
extern NSString* const p_AutomatID_PageContainer_hide_page_indicator;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_AutomatID_PageContainer_current_page;
extern NSString* const f_AutomatID_PageContainer_content_page_id;
extern NSString* const f_AutomatID_PageContainer_current_page_zero_based;
extern NSString* const f_AutomatID_PageContainer_pages_count;
extern NSString* const f_AutomatID_PageContainer_has_prev_page;
extern NSString* const f_AutomatID_PageContainer_has_next_page;

@interface AutomatID_OTMLPageContainerModel : AutomatID_OTMLFrameContainerModel<NSCopying>

    @property(nonatomic, assign) BOOL bounce;


@property(nonatomic, strong) AutomatID_OTMPColor* current_indicator_color;


@property(nonatomic, assign) BOOL hide_page_indicator;


@property(nonatomic, strong) AutomatID_OTMPColor* indicator_bg_color;


@property(nonatomic, strong) AutomatID_OTMPColor* indicator_color;


@property(nonatomic, assign) NSInteger indicator_height;


@property(nonatomic, assign) NSInteger indicator_size;


@property(nonatomic, assign) NSInteger indicator_top_padding;


@property(nonatomic, assign) AutomatID_OTMLPageContainerIndicatorType indicator_type;


@property(nonatomic, strong) NSString* indicator_width;


@property(nonatomic, assign) NSInteger max_indicators;


@property(nonatomic, assign) BOOL overlay_indicator;


@property(nonatomic, assign) BOOL page_indicator_on_bottom;


@property(nonatomic, strong) NSString* scroll_bg;


@property(nonatomic, strong) AutomatID_OTMPColor* shadow_color;


@property(nonatomic, assign) BOOL swipe_enabled;


@property(nonatomic, assign) NSInteger tab_bottom_padding;


@property(nonatomic, assign) NSInteger tab_top_padding;


@property(nonatomic, strong) AutomatID_OTMLFont* text_indicator_font_style;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
