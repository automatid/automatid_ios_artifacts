#import <objc/runtime.h>
#import "OTMLActionModel.h"
#import <OTTBXML/OTTBXML.h>





@interface OTMLActionsModel : NSObject<NSCopying>

    @property(nonatomic, strong) NSArray* actions;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(OTTBXMLElement*) aEntryElement;


@end
