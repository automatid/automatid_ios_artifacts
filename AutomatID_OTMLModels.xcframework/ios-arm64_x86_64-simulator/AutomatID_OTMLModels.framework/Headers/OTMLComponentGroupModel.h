#import <objc/runtime.h>
#import <AutomatID_OTTBXML/OTTBXML.h>
@class OTMLLayoutModel;





@interface OTMLComponentGroupModel : NSObject<NSCopying>

    @property(nonatomic, strong) NSString* key;


@property(nonatomic, strong) OTMLLayoutModel* layout;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(OTTBXMLElement*) aEntryElement;


@end
