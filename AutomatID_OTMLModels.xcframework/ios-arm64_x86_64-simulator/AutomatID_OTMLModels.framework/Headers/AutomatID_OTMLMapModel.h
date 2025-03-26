#import <objc/runtime.h>
@class AutomatID_OTMLActionsModel;
#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>
@class AutomatID_OTMLConditionsModel;
@class AutomatID_OTMLDatasourcesModel;
@class AutomatID_OTMLParametersModel;
@class AutomatID_OTMLComponentGroupsModel;
@class AutomatID_OTMLMapElementsModel;





@interface AutomatID_OTMLMapModel : NSObject<NSCopying>

    @property(nonatomic, strong) AutomatID_OTMLActionsModel* app_actions;


@property(nonatomic, strong) AutomatID_OTMLComponentGroupsModel* componentGroups;


@property(nonatomic, strong) AutomatID_OTMLConditionsModel* conditions;


@property(nonatomic, strong) AutomatID_OTMLDatasourcesModel* datasources;


@property(nonatomic, strong) AutomatID_OTMLMapElementsModel* elements;


@property(nonatomic, strong) NSString* name;


@property(nonatomic, strong) AutomatID_OTMLParametersModel* parameters;


@property(nonatomic, strong) NSString* version;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
