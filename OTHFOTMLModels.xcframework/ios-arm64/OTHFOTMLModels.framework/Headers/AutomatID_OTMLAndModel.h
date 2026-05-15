#import "AutomatID_EvaluableGeneralFactory.h"
#import "AutomatID_OTMLEvaluableModel.h"





@interface AutomatID_OTMLAndModel : AutomatID_OTMLEvaluableModel<NSCopying>

    @property(nonatomic, strong) NSArray* conditions;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
