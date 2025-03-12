#import "OTMLLabelModel.h"


//All triggers that are allowed by this component
extern NSString* const t_Button_click;
extern NSString* const t_Button_click_from_parameter;
extern NSString* const t_Button_touch;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_Button_filter_click_delay;

@interface OTMLButtonModel : OTMLLabelModel<NSCopying>

    @property(nonatomic, assign) NSInteger filter_click_delay;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(OTTBXMLElement*) aEntryElement;


@end
