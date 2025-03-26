#import <objc/runtime.h>
@class AutomatID_OTMLLayoutModel;
#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>





@interface AutomatID_OTMLComponentGroupModel : NSObject<NSCopying>

    @property(nonatomic, strong) NSString* key;


@property(nonatomic, strong) AutomatID_OTMLLayoutModel* layout;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
