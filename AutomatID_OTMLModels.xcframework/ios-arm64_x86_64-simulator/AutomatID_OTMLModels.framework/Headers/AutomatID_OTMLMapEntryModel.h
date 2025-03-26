#import <objc/runtime.h>
@class AutomatID_OTMLLayoutModel;
#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>
@class AutomatID_OTMLConditionsModel;
@class AutomatID_OTMLDatasourcesModel;
#import "AutomatID_OTMLAnimationTypes.h"
@class AutomatID_OTMLParametersModel;





@interface AutomatID_OTMLMapEntryModel : NSObject<NSCopying>

    @property(nonatomic, assign) AutomatID_OTMLAnimationTypes animation_type;


@property(nonatomic, strong) NSString* canGoBack;


@property(nonatomic, strong) AutomatID_OTMLConditionsModel* conditions;


@property(nonatomic, strong) AutomatID_OTMLDatasourcesModel* datasources;


@property(nonatomic, assign) BOOL ignore_context_animations;


@property(nonatomic, assign) BOOL in_animation;


@property(nonatomic, assign) BOOL in_animation_fade_previous;


@property(nonatomic, strong) AutomatID_OTMLLayoutModel* layout;


@property(nonatomic, strong) AutomatID_OTMLParametersModel* parameters;


@property(nonatomic, strong) NSString* script;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
