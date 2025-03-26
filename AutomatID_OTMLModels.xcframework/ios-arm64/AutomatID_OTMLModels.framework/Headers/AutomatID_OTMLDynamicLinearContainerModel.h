#import "AutomatID_OTMLLinearContainerModel.h"
#import "AutomatID_OTMLContentHandlingStrategy.h"
#import "AutomatID_OTMLNetworkRequestType.h"
#import "AutomatID_OTMLDynamicContainerLocalLoadingMode.h"


//All triggers that are allowed by this component
extern NSString* const t_AutomatID_DynamicLinearContainer_on_network_ok_response;
extern NSString* const t_AutomatID_DynamicLinearContainer_did_network_ok_response;
extern NSString* const t_AutomatID_DynamicLinearContainer_on_network_ko_response;
//All triggers that are allowed by this component
extern NSString* const t_AutomatID_DynamicLinearContainer_refresh_with_fade;
extern NSString* const t_AutomatID_DynamicLinearContainer_refresh;
extern NSString* const t_AutomatID_DynamicLinearContainer_refresh_if_necessary;
extern NSString* const t_AutomatID_DynamicLinearContainer_clear;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_AutomatID_DynamicLinearContainer_network_target;
extern NSString* const p_AutomatID_DynamicLinearContainer_local_loading_mode;
extern NSString* const p_AutomatID_DynamicLinearContainer_content_handling_strategy;

@interface AutomatID_OTMLDynamicLinearContainerModel : AutomatID_OTMLLinearContainerModel<NSCopying>

    @property(nonatomic, assign) AutomatID_OTMLContentHandlingStrategy content_handling_strategy;


@property(nonatomic, assign) BOOL continue_requests_when_detached;


@property(nonatomic, assign) AutomatID_OTMLNetworkRequestType http_type;


@property(nonatomic, assign) AutomatID_OTMLDynamicContainerLocalLoadingMode local_loading_mode;


@property(nonatomic, strong) NSString* network_params;


@property(nonatomic, strong) NSString* network_target;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
