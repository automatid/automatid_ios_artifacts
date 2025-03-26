#import "AutomatID_OTMLHorizontalAlignment.h"
#import "AutomatID_OTMLVerticalAlignment.h"
#import "AutomatID_OTMLContainerModel.h"
@class AutomatID_OTMPColor;
#import "AutomatID_OTMLOrientations.h"





@interface AutomatID_OTMLLinearContainerModel : AutomatID_OTMLContainerModel<NSCopying>

    @property(nonatomic, assign) BOOL adjust_auto_min_height_for_keyboard;


@property(nonatomic, assign) BOOL auto_min_height_from_parent_scroll_container;


@property(nonatomic, assign) BOOL bg_image_alpha;


@property(nonatomic, assign) AutomatID_OTMLHorizontalAlignment content_align;


@property(nonatomic, assign) AutomatID_OTMLVerticalAlignment content_v_align;


@property(nonatomic, assign) BOOL disable_user_interactivity;


@property(nonatomic, assign) BOOL draggable_sub_component;


@property(nonatomic, strong) NSString* draggable_sub_filename;


@property(nonatomic, strong) AutomatID_OTMPColor* dragging_area_color;


@property(nonatomic, strong) AutomatID_OTMPColor* dragging_border_color;


@property(nonatomic, assign) NSInteger noise_alpha_percent;


@property(nonatomic, strong) NSString* noise_pattern;


@property(nonatomic, assign) AutomatID_OTMLOrientations orientation;


@property(nonatomic, strong) NSString* rounding;


@property(nonatomic, assign) BOOL stopAnimationReload;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
