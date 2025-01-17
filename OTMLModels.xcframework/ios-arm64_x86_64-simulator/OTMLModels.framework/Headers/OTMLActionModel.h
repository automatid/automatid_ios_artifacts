#import <objc/runtime.h>
@class OTMLConditionModel;
#import <OTTBXML/OTTBXML.h>
@class OTMLParametersModel;





@interface OTMLActionModel : NSObject<NSCopying>

    @property(nonatomic, strong) OTMLConditionModel* condition;


@property(nonatomic, strong) OTMLParametersModel* parameters;


@property(nonatomic, strong) NSString* target;


@property(nonatomic, strong) NSString* trigger;


@property(nonatomic, strong) NSString* type;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(OTTBXMLElement*) aEntryElement;


@end
