#import <objc/runtime.h>
@class AutomatID_OTMLMapEntryModel;
#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>





@interface AutomatID_OTMLMapElementModel : NSObject<NSCopying>

    @property(nonatomic, strong) AutomatID_OTMLMapEntryModel* entry;


@property(nonatomic, strong) NSString* key;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
