#import <objc/runtime.h>
#import "OTMLMapElementModel.h"
#import <OTTBXML/OTTBXML.h>





@interface OTMLMapElementsModel : NSObject<NSCopying>

    @property(nonatomic, strong) NSArray* elements;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(OTTBXMLElement*) aEntryElement;


@end
