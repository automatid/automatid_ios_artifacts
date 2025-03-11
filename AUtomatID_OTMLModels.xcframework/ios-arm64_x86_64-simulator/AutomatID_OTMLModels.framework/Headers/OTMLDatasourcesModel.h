#import <objc/runtime.h>
#import "OTMLDatasourceModel.h"
#import <AutomatID_OTTBXML/OTTBXML.h>





@interface OTMLDatasourcesModel : NSObject<NSCopying>

    @property(nonatomic, strong) NSArray* datasources;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(OTTBXMLElement*) aEntryElement;


@end
