#import "AutomatID_OTMLComponentModel.h"


//All triggers that are allowed by this component
extern NSString* const t_AutomatID_VideoPlayer_play;
extern NSString* const t_AutomatID_VideoPlayer_stop;
extern NSString* const t_AutomatID_VideoPlayer_pause;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_AutomatID_VideoPlayer_meta_data_ds;

@interface AutomatID_OTMLVideoPlayerModel : AutomatID_OTMLComponentModel<NSCopying>

    @property(nonatomic, strong) NSString* base_addr_path;


@property(nonatomic, strong) NSString* fragments_path;


@property(nonatomic, strong) NSString* full_label;


@property(nonatomic, assign) BOOL play_on_load;


@property(nonatomic, strong) NSString* signature_path;


@property(nonatomic, strong) NSString* wrap_label;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
