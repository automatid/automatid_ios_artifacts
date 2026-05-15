#import "AutomatID_OTMLPropagateTouch.h"
#import "AutomatID_OTMLComponentModel.h"
#import "AutomatID_ComponentGeneralFactory.h"




//All parameters that are accepted in INPUT by this component
extern NSString* const p_AutomatID_Container_apply_systembar_insets_as_padding;

@interface AutomatID_OTMLContainerModel : AutomatID_OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) BOOL consider_as_group_for_voice_over;


@property(nonatomic, assign) AutomatID_OTMLPropagateTouch propagate_disabled;


@property(nonatomic, strong) NSString* propagate_disabled_list;


@property(nonatomic, assign) AutomatID_OTMLPropagateTouch propagate_pressed;


@property(nonatomic, strong) NSString* propagate_pressed_list;


@property(nonatomic, assign) AutomatID_OTMLPropagateTouch propagate_selected;


@property(nonatomic, strong) NSString* propagate_selected_list;


@property(nonatomic, strong) NSArray* subComponents;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
