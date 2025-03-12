#import <objc/runtime.h>
@class OTMLMapEntryModel;
#import <AutomatID_OTTBXML/OTTBXML.h>





@interface OTMLMapElementModel : NSObject<NSCopying>

    @property(nonatomic, strong) OTMLMapEntryModel* entry;


@property(nonatomic, strong) NSString* key;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(OTTBXMLElement*) aEntryElement;


@end
