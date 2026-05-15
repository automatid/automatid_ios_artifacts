#import "AutomatID_OTMLContainerModel.h"


//All triggers that are allowed by this component
extern NSString* const t_AutomatID_ComposedContainer_did_expand;
extern NSString* const t_AutomatID_ComposedContainer_did_collapse;
extern NSString* const t_AutomatID_ComposedContainer_did_anchor;
extern NSString* const t_AutomatID_ComposedContainer_sliding_started;



@interface AutomatID_OTMLComposedContainerModel : AutomatID_OTMLContainerModel<NSCopying>

    @property(nonatomic, strong) NSString* draggable_group_id;


@property(nonatomic, strong) NSString* main_group_id;


@property(nonatomic, strong) NSString* secondary_group_id;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
