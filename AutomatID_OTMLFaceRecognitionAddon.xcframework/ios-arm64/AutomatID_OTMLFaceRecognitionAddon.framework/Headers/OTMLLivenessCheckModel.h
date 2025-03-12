#import <AutomatID_OTTBXML/OTTBXML.h>


//All triggers that are allowed by this component
extern NSString* const t_LivenessCheck_liveness_check_no_faces;
extern NSString* const t_LivenessCheck_liveness_check_multiple_faces;
extern NSString* const t_LivenessCheck_liveness_check_face_detected_in_viewfinder;
extern NSString* const t_LivenessCheck_liveness_check_did_progress;
extern NSString* const t_LivenessCheck_liveness_check_did_complete;
extern NSString* const t_LivenessCheck_camera_error;
//All triggers that are allowed by this component
extern NSString* const t_LivenessCheck_start_capture;
extern NSString* const t_LivenessCheck_stop_capture;
extern NSString* const t_LivenessCheck_clear_result;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_LivenessCheck_requested_segment_pictures;
extern NSString* const p_LivenessCheck_blink_count_required;
extern NSString* const p_LivenessCheck_blink_accepted_angle_x_start;
extern NSString* const p_LivenessCheck_blink_accepted_angle_x_end;
extern NSString* const p_LivenessCheck_blink_accepted_angle_y_start;
extern NSString* const p_LivenessCheck_blink_accepted_angle_y_end;
extern NSString* const p_LivenessCheck_blink_eyes_opened_threshold;
extern NSString* const p_LivenessCheck_blink_eyes_closed_threshold;
extern NSString* const p_LivenessCheck_blink_min_duration_ms;
extern NSString* const p_LivenessCheck_allowed_detections_with_no_faces;
extern NSString* const p_LivenessCheck_segments_top_margin;
extern NSString* const p_LivenessCheck_segments_bottom_margin;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_LivenessCheck_frontal_face_picture;
extern NSString* const f_LivenessCheck_requested_picture_segment_1;
extern NSString* const f_LivenessCheck_requested_picture_segment_2;
extern NSString* const f_LivenessCheck_requested_picture_segment_3;
extern NSString* const f_LivenessCheck_requested_picture_segment_4;
extern NSString* const f_LivenessCheck_requested_picture_segment_5;
extern NSString* const f_LivenessCheck_requested_picture_segment_6;
extern NSString* const f_LivenessCheck_requested_picture_segment_7;
extern NSString* const f_LivenessCheck_detected_blink_count;

@interface OTMLLivenessCheckModel : OTMLComponentModel<NSCopying>

    /**
    Valore finale del range angolo X (verticale) in cui eseguire il blink check
    */
    @property(nonatomic, assign) float blink_accepted_angle_x_end;


/**
Valore iniziale del range angolo X (verticale) in cui eseguire il blink check
*/
@property(nonatomic, assign) float blink_accepted_angle_x_start;


/**
Valore finale del range angolo Y (orizzontale) in cui eseguire il blink check
*/
@property(nonatomic, assign) float blink_accepted_angle_y_end;


/**
Valore iniziale del range angolo Y (orizzontale) in cui eseguire il blink check
*/
@property(nonatomic, assign) float blink_accepted_angle_y_start;


/**
Numero minimo di blink per completare il liveness check, 0 per disabilitare
*/
@property(nonatomic, assign) NSInteger blink_count_required;


/**
Percentuale sotto la quale gli occhi sono considerati chiusi
*/
@property(nonatomic, assign) float blink_eyes_closed_threshold;


/**
Percentuale sopra la quale gli occhi sono considerati aperti
*/
@property(nonatomic, assign) float blink_eyes_opened_threshold;


/**
Tempo minimo in cui gli occhi devono essere tenuti chiusi per considerarlo blink
*/
@property(nonatomic, assign) NSInteger blink_min_duration_ms;


/**
Immagine del primo segmento (tutto a sinistra) quando la corrispondente angolazione del viso è stata acquisita
*/
@property(nonatomic, strong) NSString* img_segment_1_acquired;


/**
Immagine del primo segmento (tutto a sinistra) quando la corrispondente angolazione del viso non è stata acquisita
*/
@property(nonatomic, strong) NSString* img_segment_1_normal;


/**
Immagine del secondo segmento quando la corrispondente angolazione del viso è stata acquisita
*/
@property(nonatomic, strong) NSString* img_segment_2_acquired;


/**
Immagine del secondo segmento quando la corrispondente angolazione del viso non è stata acquisita
*/
@property(nonatomic, strong) NSString* img_segment_2_normal;


/**
Immagine del terzo segmento quando la corrispondente angolazione del viso è stata acquisita
*/
@property(nonatomic, strong) NSString* img_segment_3_acquired;


/**
Immagine del terzo segmento quando la corrispondente angolazione del viso non è stata acquisita
*/
@property(nonatomic, strong) NSString* img_segment_3_normal;


/**
Immagine del quarto segmento (segmento centrale) quando la corrispondente angolazione del viso è stata acquisita
*/
@property(nonatomic, strong) NSString* img_segment_4_acquired;


/**
Immagine del quarto segmento (segmento centrale) quando la corrispondente angolazione del viso non è stata acquisita
*/
@property(nonatomic, strong) NSString* img_segment_4_normal;


/**
Immagine del quinto segmento quando la corrispondente angolazione del viso è stata acquisita
*/
@property(nonatomic, strong) NSString* img_segment_5_acquired;


/**
Immagine del quinto segmento quando la corrispondente angolazione del viso non è stata acquisita
*/
@property(nonatomic, strong) NSString* img_segment_5_normal;


/**
Immagine del sesto segmento quando la corrispondente angolazione del viso è stata acquisita
*/
@property(nonatomic, strong) NSString* img_segment_6_acquired;


/**
Immagine del sesto segmento quando la corrispondente angolazione del viso non è stata acquisita
*/
@property(nonatomic, strong) NSString* img_segment_6_normal;


/**
Immagine del settimo segmento (tutto a destra) quando la corrispondente angolazione del viso è stata acquisita
*/
@property(nonatomic, strong) NSString* img_segment_7_acquired;


/**
Immagine del settimo segmento (tutto a destra) quando la corrispondente angolazione del viso non è stata acquisita
*/
@property(nonatomic, strong) NSString* img_segment_7_normal;


/**
Segmenti in corrispondenza dei quali acquisire la foto dell'utente, separati da ; (es. 2;4;6). Se non fornito si assume segmento centrale (4).
*/
@property(nonatomic, strong) NSString* requested_segment_pictures;


@property(nonatomic, strong) NSString* viewfinder_mask;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(OTTBXMLElement*) aEntryElement;


@end
