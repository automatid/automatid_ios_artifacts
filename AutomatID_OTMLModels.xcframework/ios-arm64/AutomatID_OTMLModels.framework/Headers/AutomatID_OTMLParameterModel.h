#import <objc/runtime.h>
#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>
@class AutomatID_OTMLConditionModel;
@class AutomatID_OTMLParametersModel;
#import "AutomatID_OTMLParameterMode.h"
#import "AutomatID_OTMLParameterType.h"





@interface AutomatID_OTMLParameterModel : NSObject<NSCopying>

    @property(nonatomic, strong) AutomatID_OTMLConditionModel* condition;


@property(nonatomic, strong) NSString* customMode;


@property(nonatomic, strong) NSString* flagforsrc;


@property(nonatomic, assign) AutomatID_OTMLParameterMode mode;


@property(nonatomic, strong) NSString* name;


@property(nonatomic, strong) AutomatID_OTMLParametersModel* parameters;


@property(nonatomic, assign) BOOL sensitive;


@property(nonatomic, strong) NSString* srcid;


@property(nonatomic, assign) AutomatID_OTMLParameterType type;


@property(nonatomic, strong) NSString* validFor;


@property(nonatomic, assign) BOOL validate;


@property(nonatomic, strong) NSString* value;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
