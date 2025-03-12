#import <objc/runtime.h>
#import <AutomatID_OTTBXML/OTTBXML.h>
#import "OTMLComponentGroupModel.h"





@interface OTMLComponentGroupsModel : NSObject<NSCopying>

    @property(nonatomic, strong) NSArray* component_groups;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(OTTBXMLElement*) aEntryElement;


@end
