#import <objc/runtime.h>
@class AutomatID_OTMLActionsModel;
@class AutomatID_OTMLComponentModel;
#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>





@interface AutomatID_OTMLLayoutModel : NSObject<NSCopying>

    @property(nonatomic, strong) AutomatID_OTMLActionsModel* actions;


@property(nonatomic, strong) AutomatID_OTMLComponentModel* rootComponent;


@property(nonatomic, strong) NSString* tag;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
