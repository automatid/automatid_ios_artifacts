typedef enum {
    AutomatID_OTMLParameterType_string = 0,
    AutomatID_OTMLParameterType_integer = 1,
    AutomatID_OTMLParameterType_bool = 2,
    AutomatID_OTMLParameterType_floatnumber = 3,
    AutomatID_OTMLParameterType_bigdecimal = 4,
    AutomatID_OTMLParameterType_longinteger = 5,
    AutomatID_OTMLParameterType_bin = 6,
    AutomatID_OTMLParameterType_ds = 7,
    AutomatID_OTMLParameterType_color = 8,
    AutomatID_OTMLParameterType_json_object = 9,
    AutomatID_OTMLParameterType_json_array = 10,
    AutomatID_OTMLParameterType_font = 11,
    AutomatID_OTMLParameterType_maptype = 12,
    AutomatID_OTMLParameterType_visibility = 13,
    AutomatID_OTMLParameterType_dynamic_container_local_loading_mode = 14,
    AutomatID_OTMLParameterType_otml_mt_autentication = 15,
    AutomatID_OTMLParameterType_directional_sort = 16,
    AutomatID_OTMLParameterType_sortable_types = 17,
    AutomatID_OTMLParameterType_barcode_format = 18,
    AutomatID_OTMLParameterType_barcode_type = 19,
    AutomatID_OTMLParameterType_barcode_validator = 20,
    AutomatID_OTMLParameterType_content_scale = 21,
    AutomatID_OTMLParameterType_ocr_type = 22,
    AutomatID_OTMLParameterType_input_keyboard_type = 23,
    AutomatID_OTMLParameterType_tabbarlabelvisibility = 24,
    AutomatID_OTMLParameterType_otml_animation_image_lottie_scale_type = 25,
    AutomatID_OTMLParameterType_dynamic_content_handling_strategy = 26
} AutomatID_OTMLParameterType;

@interface AutomatID_OTMLParameterTypeSupport : NSObject

+(AutomatID_OTMLParameterType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLParameterType) aValue;

@end
