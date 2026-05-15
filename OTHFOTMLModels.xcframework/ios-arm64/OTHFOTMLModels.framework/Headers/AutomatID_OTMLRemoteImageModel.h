#import "AutomatID_OTMLImageModel.h"


//All triggers that are allowed by this component
extern NSString* const t_AutomatID_RemoteImage_remote_image_loaded;
extern NSString* const t_AutomatID_RemoteImage_remote_image_load_did_fail;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_AutomatID_RemoteImage_url;
extern NSString* const p_AutomatID_RemoteImage_phonebook_image_id;

@interface AutomatID_OTMLRemoteImageModel : AutomatID_OTMLImageModel<NSCopying>

    @property(nonatomic, strong) NSString* phonebook_image_id;


@property(nonatomic, strong) NSString* url;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
