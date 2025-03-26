#import "AutomatID_OTMLComponentModel.h"
@class AutomatID_OTMPColor;


//All triggers that are allowed by this component
extern NSString* const t_AutomatID_Switch_value_change;
extern NSString* const t_AutomatID_Switch_value_change_from_parameter;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_AutomatID_Switch_is_on;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_AutomatID_Switch_is_on;

@interface AutomatID_OTMLSwitchModel : AutomatID_OTMLComponentModel<NSCopying>

    @property(nonatomic, strong) AutomatID_OTMPColor* color_thumb_off;


@property(nonatomic, strong) AutomatID_OTMPColor* color_thumb_on;


@property(nonatomic, strong) AutomatID_OTMPColor* color_track_off;


@property(nonatomic, strong) AutomatID_OTMPColor* color_track_on;


@property(nonatomic, assign) BOOL start_value;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
