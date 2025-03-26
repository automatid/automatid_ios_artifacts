#import <objc/runtime.h>
#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>
@class AutomatID_OTMLConditionModel;
@class AutomatID_OTMLParametersModel;





@interface AutomatID_OTMLActionModel : NSObject<NSCopying>

    @property(nonatomic, strong) AutomatID_OTMLConditionModel* condition;


@property(nonatomic, strong) AutomatID_OTMLParametersModel* parameters;


@property(nonatomic, strong) NSString* target;


@property(nonatomic, strong) NSString* trigger;


@property(nonatomic, strong) NSString* type;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
