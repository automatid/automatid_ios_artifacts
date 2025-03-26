#import <objc/runtime.h>
#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>
#import "AutomatID_OTMLConditionModel.h"





@interface AutomatID_OTMLConditionsModel : NSObject<NSCopying>

    @property(nonatomic, strong) NSArray* conditions;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
