typedef enum {
    AutomatID_OTMLClauseTypes_is_empty = 0,
    AutomatID_OTMLClauseTypes_is_not_empty = 1,
    AutomatID_OTMLClauseTypes_is_equals = 2,
    AutomatID_OTMLClauseTypes_is_not_equals = 3,
    AutomatID_OTMLClauseTypes_is_equals_no_case = 4,
    AutomatID_OTMLClauseTypes_is_not_equals_no_case = 5,
    AutomatID_OTMLClauseTypes_is_true = 6,
    AutomatID_OTMLClauseTypes_is_false = 7,
    AutomatID_OTMLClauseTypes_is_num_greater = 8,
    AutomatID_OTMLClauseTypes_is_num_smaller = 9,
    AutomatID_OTMLClauseTypes_is_num_greater_eq = 10,
    AutomatID_OTMLClauseTypes_is_num_smaller_eq = 11,
    AutomatID_OTMLClauseTypes_is_num_equals = 12,
    AutomatID_OTMLClauseTypes_is_num_not_equals = 13,
    AutomatID_OTMLClauseTypes_starts_with = 14,
    AutomatID_OTMLClauseTypes_ends_with = 15,
    AutomatID_OTMLClauseTypes_contains = 16,
    AutomatID_OTMLClauseTypes_contains_no_case = 17,
    AutomatID_OTMLClauseTypes_is_length_greater = 18,
    AutomatID_OTMLClauseTypes_is_length_smaller = 19,
    AutomatID_OTMLClauseTypes_is_length_equals = 20,
    AutomatID_OTMLClauseTypes_is_length_greater_eq = 21,
    AutomatID_OTMLClauseTypes_is_length_smaller_eq = 22,
    AutomatID_OTMLClauseTypes_is_luhn_valid = 23,
    AutomatID_OTMLClauseTypes_ds_exist = 24,
    AutomatID_OTMLClauseTypes_ds_list_empty = 25,
    AutomatID_OTMLClauseTypes_ht_exists = 26,
    AutomatID_OTMLClauseTypes_ht_is_empty = 27,
    AutomatID_OTMLClauseTypes_contains_word_starting_with = 28,
    AutomatID_OTMLClauseTypes_contains_word_ending_with = 29,
    AutomatID_OTMLClauseTypes_matches_regex = 30,
    AutomatID_OTMLClauseTypes_rsa_sign_check = 31,
    AutomatID_OTMLClauseTypes_is_iban_valid = 32,
    AutomatID_OTMLClauseTypes_otml_secure_storage_exists = 33,
    AutomatID_OTMLClauseTypes_is_barcode_valid = 34,
    AutomatID_OTMLClauseTypes_is_luhn_mod_n_valid = 35
} AutomatID_OTMLClauseTypes;

@interface AutomatID_OTMLClauseTypesSupport : NSObject

+(AutomatID_OTMLClauseTypes) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLClauseTypes) aValue;

@end
