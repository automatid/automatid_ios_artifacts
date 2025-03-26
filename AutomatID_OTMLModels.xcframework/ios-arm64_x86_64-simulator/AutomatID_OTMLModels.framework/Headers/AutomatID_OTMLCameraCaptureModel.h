#import "AutomatID_OTMLComponentModel.h"
#import "AutomatID_OTMLCameraCaptureOutputMode.h"


//All triggers that are allowed by this component
extern NSString* const t_AutomatID_CameraCapture_did_take_picture;
extern NSString* const t_AutomatID_CameraCapture_camera_error;
//All triggers that are allowed by this component
extern NSString* const t_AutomatID_CameraCapture_take_picture;
extern NSString* const t_AutomatID_CameraCapture_switch_camera;
extern NSString* const t_AutomatID_CameraCapture_reset;



@interface AutomatID_OTMLCameraCaptureModel : AutomatID_OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) BOOL enable_old_preview_logic;


/**
A list of semicolon separated image manipulation parameter refs.
After taking a picture, the component will stop the camera preview and display the picture processed by the FIRST image manipulator.
*/
@property(nonatomic, strong) NSString* image_manipulation_param_refs;


/**
A list of semicolon separated flagforsrc names to retrieve the processed image.
If empty, for retrocompatibility it will assume the value OTMLCameraCaptureConstants.FALLBACK_FLAGFORSRC
*/
@property(nonatomic, strong) NSString* output_image_flagforsrcs;


@property(nonatomic, assign) AutomatID_OTMLCameraCaptureOutputMode output_mode;


@property(nonatomic, assign) BOOL start_with_front_camera;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
