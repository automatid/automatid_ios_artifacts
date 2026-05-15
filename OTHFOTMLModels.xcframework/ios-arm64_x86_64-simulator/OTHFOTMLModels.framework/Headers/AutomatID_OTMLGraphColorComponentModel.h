#import "AutomatID_OTMLComponentModel.h"




//All parameters that are accepted in INPUT by this component
extern NSString* const p_AutomatID_GraphColorComponent_ds_path;
extern NSString* const p_AutomatID_GraphColorComponent_ds_dto;

@interface AutomatID_OTMLGraphColorComponentModel : AutomatID_OTMLComponentModel<NSCopying>

    @property(nonatomic, strong) NSString* colors_array;


@property(nonatomic, strong) NSString* ds_dto;


@property(nonatomic, strong) NSString* ds_path;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
