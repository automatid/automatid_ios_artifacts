#import "AutomatID_OTMLComponentModel.h"
@class AutomatID_OTMPColor;


//All triggers that are allowed by this component
extern NSString* const t_AutomatID_Slider_value_change_on_touchup;
extern NSString* const t_AutomatID_Slider_value_change_from_parameter;
extern NSString* const t_AutomatID_Slider_value_change_on_dragging;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_AutomatID_Slider_max_val;
extern NSString* const p_AutomatID_Slider_min_val;
extern NSString* const p_AutomatID_Slider_increment;
extern NSString* const p_AutomatID_Slider_value;
extern NSString* const p_AutomatID_Slider_accepted_values;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_AutomatID_Slider_max_val;
extern NSString* const f_AutomatID_Slider_min_val;
extern NSString* const f_AutomatID_Slider_increment;
extern NSString* const f_AutomatID_Slider_value;

@interface AutomatID_OTMLSliderModel : AutomatID_OTMLComponentModel<NSCopying>

    @property(nonatomic, strong) NSString* accepted_values;


/**
@discussion  increment the size of each tick of the slider. Must be strictly positive, default value is 1.
iOS & WP if 0 it is continuous slider
@note optional
*/
@property(nonatomic, assign) float increment;


@property(nonatomic, assign) float max_val;


@property(nonatomic, assign) float min_val;


/**
@discussion  thumb_color the color of the thumb. Cannot be a gradient.
@note optional
*/
@property(nonatomic, strong) AutomatID_OTMPColor* thumb_color;


/**
@discussion  track_left_color the color of the track area of the slider at the left of the thumb. Cannot be a gradient.
@note optional
*/
@property(nonatomic, strong) AutomatID_OTMPColor* track_left_color;


/**
@discussion  track_right_color the color of the track area of the slider at the right of the thumb. Cannot be a gradient.
@note optional
*/
@property(nonatomic, strong) AutomatID_OTMPColor* track_right_color;


@property(nonatomic, assign) float value;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
