#import <objc/runtime.h>
@class OTMLEvaluableModel;
#import <OTTBXML/OTTBXML.h>





@interface OTMLConditionModel : NSObject<NSCopying>

    @property(nonatomic, strong) OTMLEvaluableModel* condition;


@property(nonatomic, strong) NSString* condition_id;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(OTTBXMLElement*) aEntryElement;


@end
