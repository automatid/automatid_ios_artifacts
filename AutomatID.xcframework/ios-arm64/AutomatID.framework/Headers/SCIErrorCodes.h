//
//  SCIErrorCodes.h
//  AutomatID
//
//  Created by Silvio D'Angelo on 26/07/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
CF_ENUM(NSInteger) {
#pragma mark - neutral error code
    kUnknownErrorCode = 0,

#pragma mark - client error codes
    kCONFIG_FILE_IS_EMPTY = 1,
    kCONFIG_FILE_DECRYPTION_FAILED = 2,
    kCONFIGURATION_FILE_MALFORMED = 3,
    kINTEGRITY_CHECK_ON_CONFIG_FILE_FAILED = 4,
    kAPP_ID_CHECK_FAILED = 5,
    kSDK_MIN_VERSION_CHECK_FAILED = 6,
    kINVALID_PARAMETERS = 10,
    kNFC_READER_IS_NOT_PRESENT = 11,
    kMALFORMED_SUCCESS_RESPONSE = 12,
    kMALFORMED_ERROR_RESPONSE = 13,

#pragma mark - server error codes
    kGENERIC_ERROR = 500,
    kTOO_MANY_FACES = 501,
    kNO_FACE_MATCH = 502,
    kEXPIRED_DOCUMENT = 503,
    kEXPIRED_CARD = 504,
    kNOT_VALID_CARD = 505,
    kINVALID_PASSPORT_DATA = 506,
    kDECIPHERING_REQUEST_ERROR = 507,
    kUSER_NOT_ALLOWED_TO_PERFORM_SCI = 508,
    kDECIPHERING_CARD_DATA_ERROR = 509,
    kEXPIRED_CARD_DURING_SCAN = 510
};


NS_ASSUME_NONNULL_END
