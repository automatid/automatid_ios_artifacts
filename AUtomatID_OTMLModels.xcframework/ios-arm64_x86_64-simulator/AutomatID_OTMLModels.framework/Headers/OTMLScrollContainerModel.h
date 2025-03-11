#import "OTMLLinearContainerModel.h"
@class OTMPColor;
#import "OTMLScrollBarType.h"


//All triggers that are allowed by this component
extern NSString* const t_ScrollContainer_did_pull_to_refresh;
extern NSString* const t_ScrollContainer_did_scroll_to_bottom;
extern NSString* const t_ScrollContainer_did_scroll_to_top;
extern NSString* const t_ScrollContainer_can_scroll;
extern NSString* const t_ScrollContainer_cant_scroll;
//All triggers that are allowed by this component
extern NSString* const t_ScrollContainer_dismiss_pull_to_refresh_loading;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_ScrollContainer_scroll_snap_reference;
extern NSString* const p_ScrollContainer_scroll_snap_component_group;

@interface OTMLScrollContainerModel : OTMLLinearContainerModel<NSCopying>

    @property(nonatomic, assign) BOOL blink_bar;


@property(nonatomic, assign) BOOL bounce;


@property(nonatomic, assign) NSInteger max_height;


@property(nonatomic, assign) NSInteger max_width;


@property(nonatomic, assign) BOOL pull_to_refresh;


@property(nonatomic, strong) OTMPColor* pull_to_refresh_loading_color;


@property(nonatomic, assign) OTMLScrollBarType scroll_bar_type;


@property(nonatomic, strong) NSString* scroll_snap_component_group;


@property(nonatomic, strong) NSString* scroll_snap_reference;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(OTTBXMLElement*) aEntryElement;


@end
