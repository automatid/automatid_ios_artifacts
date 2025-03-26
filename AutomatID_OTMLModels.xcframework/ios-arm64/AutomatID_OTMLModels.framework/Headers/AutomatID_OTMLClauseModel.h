#import "AutomatID_OTMLEvaluableModel.h"
#import "AutomatID_OTMLParameterModel.h"
#import "AutomatID_OTMLClauseTypes.h"





@interface AutomatID_OTMLClauseModel : AutomatID_OTMLEvaluableModel<NSCopying>

    @property(nonatomic, strong) NSArray* param;


@property(nonatomic, assign) AutomatID_OTMLClauseTypes type;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
