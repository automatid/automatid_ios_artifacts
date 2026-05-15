#import "AutomatID_OTMLLabelModel.h"


//All triggers that are allowed by this component
extern NSString* const t_AutomatID_Button_click;
extern NSString* const t_AutomatID_Button_click_from_parameter;
extern NSString* const t_AutomatID_Button_touch;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_AutomatID_Button_filter_click_delay;

@interface AutomatID_OTMLButtonModel : AutomatID_OTMLLabelModel<NSCopying>

    @property(nonatomic, assign) NSInteger filter_click_delay;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
