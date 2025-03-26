#import "AutomatID_OTMLContainerModel.h"
#import "AutomatID_OTMLOrientations.h"




//All parameters that are accepted in INPUT by this component
extern NSString* const p_AutomatID_GridContainer_number_of_blocks;

@interface AutomatID_OTMLGridContainerModel : AutomatID_OTMLContainerModel<NSCopying>

    @property(nonatomic, assign) AutomatID_OTMLOrientations disposition;


@property(nonatomic, assign) NSInteger number_of_blocks;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
