#import <AutomatID_OTTBXML/OTTBXML.h>


//All triggers that are allowed by this component
extern NSString* const t_MrzReader_ocr_read_completed;
extern NSString* const t_MrzReader_camera_error;
//All triggers that are allowed by this component
extern NSString* const t_MrzReader_start_capture;
extern NSString* const t_MrzReader_clean_scan_result;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_MrzReader_viewfinder_mask;
extern NSString* const p_MrzReader_viewfinder_margin_tlbr;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_MrzReader_structured_content;
extern NSString* const f_MrzReader_camera_frame;

@interface OTMLMrzReaderModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) BOOL overscan_height;


/**
La viewfinder_mask verrà ridimensionata preservando l'aspect ratio e assumerà almeno le distanze qui fornite dai bordi del componente.
*/
@property(nonatomic, strong) NSString* viewfinder_margin_tlbr;


@property(nonatomic, strong) NSString* viewfinder_mask;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(OTTBXMLElement*) aEntryElement;


@end
