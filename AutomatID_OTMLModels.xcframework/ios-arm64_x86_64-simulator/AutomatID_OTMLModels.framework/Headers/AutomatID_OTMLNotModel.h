@class AutomatID_OTMLEvaluableModel;
#import "AutomatID_OTMLEvaluableModel.h"





@interface AutomatID_OTMLNotModel : AutomatID_OTMLEvaluableModel<NSCopying>

    @property(nonatomic, strong) AutomatID_OTMLEvaluableModel* condition;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
