#import <objc/runtime.h>
#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>
@class AutomatID_OTMLEvaluableModel;





@interface AutomatID_OTMLConditionModel : NSObject<NSCopying>

    @property(nonatomic, strong) AutomatID_OTMLEvaluableModel* condition;


@property(nonatomic, strong) NSString* condition_id;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
