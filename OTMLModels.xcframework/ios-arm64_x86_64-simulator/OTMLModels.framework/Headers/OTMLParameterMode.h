typedef enum {
    OTMLParameterMode_none = 0,
    OTMLParameterMode_replace = 1,
    OTMLParameterMode_concat = 2,
    OTMLParameterMode_substring = 3,
    OTMLParameterMode_multiplication = 4,
    OTMLParameterMode_summation = 5,
    OTMLParameterMode_division = 6,
    OTMLParameterMode_subtraction = 7,
    OTMLParameterMode_modulo = 8,
    OTMLParameterMode_percentage_add = 9,
    OTMLParameterMode_percentage_sub = 10,
    OTMLParameterMode_image_manipulation = 11,
    OTMLParameterMode_custom = 12,
    OTMLParameterMode_ds_to_json = 13,
    OTMLParameterMode_ds_min = 14,
    OTMLParameterMode_ds_max = 15,
    OTMLParameterMode_rsa_encrypt = 16,
    OTMLParameterMode_rsa_decrypt = 17,
    OTMLParameterMode_get_rsa_publickey = 18,
    OTMLParameterMode_ds_search = 19,
    OTMLParameterMode_b64_encode = 20,
    OTMLParameterMode_b64_decode = 21,
    OTMLParameterMode_json_object_serialization = 22,
    OTMLParameterMode_json_array_serialization = 23,
    OTMLParameterMode_query_string = 24,
    OTMLParameterMode_json_path = 25,
    OTMLParameterMode_js_resolve = 26,
    OTMLParameterMode_json_object_ds_serialization = 27,
    OTMLParameterMode_basic_authentication_header = 28,
    OTMLParameterMode_ht_read = 29,
    OTMLParameterMode_parameter_resolve = 30,
    OTMLParameterMode_strip_diacritics = 31,
    OTMLParameterMode_parameter_ref = 32,
    OTMLParameterMode_number_format = 33,
    OTMLParameterMode_number_parse = 34,
    OTMLParameterMode_number_round = 35,
    OTMLParameterMode_number_integer_part = 36,
    OTMLParameterMode_number_decimal_part = 37,
    OTMLParameterMode_date_format = 38,
    OTMLParameterMode_date_parse = 39,
    OTMLParameterMode_log = 40,
    OTMLParameterMode_ln = 41,
    OTMLParameterMode_pow = 42,
    OTMLParameterMode_sqrt = 43,
    OTMLParameterMode_sha256 = 44,
    OTMLParameterMode_pbkdf2 = 45,
    OTMLParameterMode_random_number = 46,
    OTMLParameterMode_random_bytes = 47,
    OTMLParameterMode_cache_etag_list = 48,
    OTMLParameterMode_decompose_url = 49,
    OTMLParameterMode_url_encode = 50,
    OTMLParameterMode_url_decode = 51,
    OTMLParameterMode_change_case = 52,
    OTMLParameterMode_date_add_field = 53,
    OTMLParameterMode_iban_format = 54,
    OTMLParameterMode_string_length = 55,
    OTMLParameterMode_image_size = 56,
    OTMLParameterMode_otml_secure_storage_read = 57,
    OTMLParameterMode_aes = 58,
    OTMLParameterMode_split = 59,
    OTMLParameterMode_luhn_checksum = 60,
    OTMLParameterMode_random_string = 61,
    OTMLParameterMode_trim = 62,
    OTMLParameterMode_parse_phone_number = 63,
    OTMLParameterMode_otml_file_storage_read = 64,
    OTMLParameterMode_otml_ram_storage_read = 65,
    OTMLParameterMode_image_from_text = 66,
    OTMLParameterMode_dimension_to_px = 67,
    OTMLParameterMode_px_to_dimension = 68,
    OTMLParameterMode_payment_card_formatter = 69,
    OTMLParameterMode_payment_card_type = 70,
    OTMLParameterMode_backup_file_read = 71,
    OTMLParameterMode_pinblock_iso9564_format1 = 72
} OTMLParameterMode;

@interface OTMLParameterModeSupport : NSObject

+(OTMLParameterMode) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLParameterMode) aValue;

@end