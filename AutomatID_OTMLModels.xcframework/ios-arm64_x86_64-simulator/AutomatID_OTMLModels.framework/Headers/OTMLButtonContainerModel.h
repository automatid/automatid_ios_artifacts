#import "OTMLLinearContainerModel.h"


//All triggers that are allowed by this component
extern NSString* const t_ButtonContainer_click;
extern NSString* const t_ButtonContainer_long_press_tick;
extern NSString* const t_ButtonContainer_long_press_started;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_ButtonContainer_filter_click_delay;

@interface OTMLButtonContainerModel : OTMLLinearContainerModel<NSCopying>

    @property(nonatomic, assign) NSInteger filter_click_delay;


@property(nonatomic, strong) NSString* long_press_trigger_timing;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(OTTBXMLElement*) aEntryElement;


@end
