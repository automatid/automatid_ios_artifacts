#import <objc/runtime.h>
#import "OTMLDatasourceElementModel.h"
#import <OTTBXML/OTTBXML.h>





@interface OTMLDatasourceModel : NSObject<NSCopying>

    @property(nonatomic, strong) NSArray* elements;


@property(nonatomic, strong) NSString* key;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(OTTBXMLElement*) aEntryElement;


@end
