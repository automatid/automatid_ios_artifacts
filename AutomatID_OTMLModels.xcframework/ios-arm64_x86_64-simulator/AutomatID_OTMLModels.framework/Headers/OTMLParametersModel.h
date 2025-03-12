#import <objc/runtime.h>
#import "OTMLParameterModel.h"
#import <AutomatID_OTTBXML/OTTBXML.h>





@interface OTMLParametersModel : NSObject<NSCopying>

    @property(nonatomic, strong) NSArray* parameters;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(OTTBXMLElement*) aEntryElement;


@end
