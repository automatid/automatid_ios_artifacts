#import <objc/runtime.h>
#import "OTMLConditionModel.h"
#import <OTTBXML/OTTBXML.h>





@interface OTMLConditionsModel : NSObject<NSCopying>

    @property(nonatomic, strong) NSArray* conditions;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(OTTBXMLElement*) aEntryElement;


@end
