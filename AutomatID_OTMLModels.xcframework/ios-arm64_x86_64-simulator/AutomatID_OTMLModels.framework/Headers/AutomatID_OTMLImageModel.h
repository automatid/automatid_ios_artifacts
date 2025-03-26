#import "AutomatID_OTMLImageContentScale.h"
#import "AutomatID_OTMLHorizontalAlignment.h"
#import "AutomatID_OTMLVerticalAlignment.h"
#import "AutomatID_OTMLComponentModel.h"


//All triggers that are allowed by this component
extern NSString* const t_AutomatID_Image_load_in_thread_start;
extern NSString* const t_AutomatID_Image_load_in_thread_end;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_AutomatID_Image_image_n;
extern NSString* const p_AutomatID_Image_image_d;
extern NSString* const p_AutomatID_Image_image_p;
extern NSString* const p_AutomatID_Image_image_s;
extern NSString* const p_AutomatID_Image_image_sp;
extern NSString* const p_AutomatID_Image_content_scale;
extern NSString* const p_AutomatID_Image_load_in_thread;

@interface AutomatID_OTMLImageModel : AutomatID_OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) AutomatID_OTMLHorizontalAlignment content_align;


/**
describe how to scale the image content
*/
@property(nonatomic, assign) AutomatID_OTMLImageContentScale content_scale;


@property(nonatomic, assign) AutomatID_OTMLVerticalAlignment content_v_align;


/**
image in disabled state
*/
@property(nonatomic, strong) NSString* image_d;


/**
image in normal state
*/
@property(nonatomic, strong) NSString* image_n;


/**
image in pressed state
*/
@property(nonatomic, strong) NSString* image_p;


/**
image in selected state
*/
@property(nonatomic, strong) NSString* image_s;


/**
image in selected + pressed state
*/
@property(nonatomic, strong) NSString* image_sp;


@property(nonatomic, assign) BOOL pinch_to_zoom;


@property(nonatomic, assign) float pinch_to_zoom_scale_max;


/**
repeat the image (eg. as a texture)
*/
@property(nonatomic, assign) BOOL repeat;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
