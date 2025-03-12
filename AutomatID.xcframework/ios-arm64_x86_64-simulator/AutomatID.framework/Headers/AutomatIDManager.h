//
//  AutomatIDManager.h
//  AutomatID
//
//  Created by Build Bot 2 on 22/06/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AutomatIDDocumentType : NSObject

+(AutomatIDDocumentType*) passport;
+(AutomatIDDocumentType*) identityCard;

@end

typedef NS_ENUM(NSInteger, AutomatIDDocumentTypes) {
    AutomatIDDocumentTypes_PASSPORT,
    AutomatIDDocumentTypes_IDENTITY_CARD
};

typedef NS_ENUM(NSInteger, AutomatIDFontStyle) {
    AutomatIDFontStyle_REGULAR=0,
    AutomatIDFontStyle_MEDIUM=-1,
    AutomatIDFontStyle_BOLD=-2
};

/**
 * The hosting app choice on how to manage an error during the SCI flow.
 */
typedef NS_ENUM(NSInteger, RecoverableErrorHandlingDecision) {
    /**
     * The hosting app wants the Plugin UI to stay opened and to allow the user to retry the SCI flow.
     */
    ErrorHandlingDecision_RETRY_SCI,
    /**
     * The hosting app wants the SCI flow to be aborted, closing the Plugin UI.
     */
    ErrorHandlingDecision_ABORT_SCI
};

@interface AutomatIDConfiguration : NSObject

@property BOOL showFallbackButton;
@property UIFont* defaultFontRegular;
@property UIFont* defaultFontMedium;
@property UIFont* defaultFontBold;

@property UIFont* titleFontBold;
@property UIFont* titleFontRegular;
@property UIFont* titleFontMedium;

@property UIFont* buttonFontBold;
@property UIFont* buttonFontRegular;
@property UIFont* buttonFontMedium;

-(void) addRawFont:(NSString*)fontAlias withFontStyle:(AutomatIDFontStyle)style withFont:(UIFont*)font;

@property UIColor* lightIconNormalColor;
@property UIColor* lightIconPressedColor;
@property UIColor* lightTitleColor;
@property UIColor* lightLabelColor;
@property UIColor* lightButtonBgNormalColor;
@property UIColor* lightButtonBgPressedColor;
@property UIColor* lightButtonLabelNormalColor;
@property UIColor* lightButtonLabelPressedColor;
@property UIColor* lightLinkNormalColor;
@property UIColor* lightLinkPressedColor;

@property UIColor* darkTitleColor;
@property UIColor* darkLabelColor;
@property UIColor* darkLinkNormalColor;
@property UIColor* darkLinkPressedColor;
@property UIColor* darkButtonBgNormalColor;
@property UIColor* darkButtonBgPressedColor;
@property UIColor* darkButtonLabelNormalColor;
@property UIColor* darkButtonLabelPressedColor;

@property UIColor* buttonBorderNormalColor;
@property UIColor* buttonBorderPressedColor;
@property UIColor* documentIconNormalColor;
@property UIColor* documentIconPressedColor;
@property UIColor* iconNormalColor;
@property UIColor* iconPressedColor;
@property UIColor* lightHeaderIconNormalColor;
@property UIColor* lightHeaderIconPressedColor;
@property UIColor* darkHeaderIconNormalColor;
@property UIColor* darkHeaderIconPressedColor;

@property UIColor* mrzBackIconNormalColor;
@property UIColor* mrzBackIconPressedColor;
@property UIColor* mrzSuccessRead;

@property UIColor* nfcScanBarLoadingColor;

@property UIColor* summaryTitleColor;

@property UIColor* faceScanLabelColor;

@property UIColor* fillerSeparatorColor;

@property UIColor* backgroundColor;

-(void) addRawColor:(NSString*)colorAlias withColor:(UIColor*)color;


-(void) addStringsForLocale:(NSString*) locale withPlaceholders:(NSDictionary<NSString*, NSString*>*)placeholders;

@end

@interface AutomatIDRequest : NSObject
/**
 *  Factory method for AutomatID request instances
 *
 *  @param documentTypes the array of scannable document types, AutomatIDDocumentType exposes factory methods for this array elements
 */

+(AutomatIDRequest*) requestWithDocumentTypes:(NSArray<AutomatIDDocumentType*>*)types;


@end

@interface AutomatIDResultSuccess : NSObject

@property AutomatIDDocumentTypes usedDocument;
@property NSString* jwt;

@end


typedef NS_ENUM(NSInteger, AutomatIDErrorCode) {
    AutomatIDErrorCode_CONFIG_FILE_IS_EMPTY = 1,
    AutomatIDErrorCode_CONFIG_FILE_DECRYPTION_FAILED = 2,
    AutomatIDErrorCode_CONFIGURATION_FILE_MALFORMED = 3,
    AutomatIDErrorCode_INTEGRITY_CHECK_ON_CONFIG_FILE_FAILED = 4,
    AutomatIDErrorCode_APP_ID_CHECK_FAILED = 5,
    AutomatIDErrorCode_SDK_MIN_VERSION_CHECK_FAILED = 6,
    AutomatIDErrorCode_GENERIC_CONFIG_FILE_READ_AND_PARSING_ERROR = 7,
    AutomatIDErrorCode_UNABLE_TO_OPEN_THE_CONFIG_FILE = 8,
    AutomatIDErrorCode_INVOCATION_WITHOUT_INIT = 9,
    AutomatIDErrorCode_INVALID_PARAMETERS = 10,
    AutomatIDErrorCode_NFC_READER_IS_NOT_PRESENT = 11,
    AutomatIDErrorCode_MALFORMED_SUCCESS_RESPONSE = 12,
    AutomatIDErrorCode_MALFORMED_ERROR_RESPONSE = 13,
    AutomatIDErrorCode_USER_TAPPED_FALLBACK_BUTTON = 14,
    AutomatIDErrorCode_GENERIC_ERROR = 500,
    AutomatIDErrorCode_TOO_MANY_FACES = 501,
    AutomatIDErrorCode_NO_FACE_MATCH = 502,
    AutomatIDErrorCode_EXPIRED_DOCUMENT = 503,
    AutomatIDErrorCode_NO_CARD_MATCH = 505,
    AutomatIDErrorCode_INVALID_DOCUMENT_DATA = 506,
    AutomatIDErrorCode_EXPIRED_CARD = 510,
    AutomatIDErrorCode_NOT_RECOVERABLE_ERROR = 522,
    AutomatIDErrorCode_BILLING_ERROR = 523
};


/**

 PLUGIN_CONFIGURATION    ="    plugin.configuration    "    CONFIG_FILE_IS_EMPTY = 1
 PLUGIN_CONFIGURATION    ="    plugin.configuration    "    CONFIG_FILE_DECRYPTION_FAILED = 2
 PLUGIN_CONFIGURATION    ="    plugin.configuration    "    CONFIGURATION_FILE_MALFORMED = 3
 PLUGIN_CONFIGURATION    ="    plugin.configuration    "    INTEGRITY_CHECK_ON_CONFIG_FILE_FAILED = 4
 PLUGIN_CONFIGURATION    ="    plugin.configuration    "    APP_ID_CHECK_FAILED = 5
 PLUGIN_CONFIGURATION    ="    plugin.configuration    "    SDK_MIN_VERSION_CHECK_FAILED = 6
 PLUGIN_CONFIGURATION    ="    plugin.configuration    "    GENERIC_CONFIG_FILE_READ_AND_PARSING_ERROR = 7
 PLUGIN_CONFIGURATION    ="    plugin.configuration    "    UNABLE_TO_OPEN_THE_CONFIG_FILE = 8
 PLUGIN_INVOCATION    ="    plugin.invocation    "    INVOCATION_WITHOUT_INIT = 9
 PLUGIN_INVOCATION    ="    plugin.invocation    "    INVALID_PARAMETERS = 10
 PLUGIN_DEVICE_COMPATIBILITY    ="    plugin.device_compatibility    "    NFC_READER_IS_NOT_PRESENT = 11
 INVALID_RESPONSE    ="    invalid_response    "    MALFORMED_SUCCESS_RESPONSE = 12
 INVALID_RESPONSE    ="    invalid_response    "    MALFORMED_ERROR_RESPONSE = 13
 IDENTIFICATION_FLOW    ="    identification_flow    "    USER_TAPPED_FALLBACK_BUTTON = 14
 SERVER_GENERIC_ERROR    ="    server.generic_error    "    GENERIC_ERROR = 500
 SERVER_DOCUMENT_ERROR    ="    server.document_error    "    EXPIRED_DOCUMENT = 503
 SERVER_DOCUMENT_ERROR    ="    server.document_error    "    INVALID_DOCUMENT_DATA = 506
 SERVER_FACE_ERROR    ="    server.face_error    "    TOO_MANY_FACES = 501
 SERVER_FACE_ERROR    ="    server.face_error    "    NO_FACE_MATCH = 502
 SERVER_CARD_ERROR    ="    server.card_error    "    NO_CARD_MATCH = 505
 SERVER_CARD_ERROR    ="    server.card_error    "    EXPIRED_CARD = 510
 SERVER_CARD_ERROR    ="    server.card_error    "    NOT_RECOVERABLE_ERROR = 522
 SERVER_GENERIC_ERROR    ="    server.generic_error    "    BILLING_ERROR = 523

 */
@interface AutomatIDResultError : NSObject

@property NSString* technicalDescription;

/**
 Possible error domain values:
 "plugin.configuration", "invalid_response", "identification_flow", "server.generic_error", "server.face_error",
 */
@property NSString* domain;

@property AutomatIDErrorCode code;

@end

/**
 * The callback invoked at the end of a SCI flow.
 */
@interface AutomatIDCallback: NSObject

/**
 * The Strong Costumer Identification. The error object contains the details of the error.
 *
 * The hosting app should decide, according to the provided error, whether to allow the user to retry
 * the SCI flow or to abort it, by returning the corresponding value.
 *
 * @NOTE: the default implementation returns ErrorHandlingDecision_RETRY_SCI for any recoverable error
 *
 * @return ErrorHandlingDecision according to the hosting app choice.
 */
@property (nonatomic, copy, nonnull) RecoverableErrorHandlingDecision (^decideRecoverableErrorHandling)(AutomatIDResultError* error);

/**
 * The Strong Costumer Identification failed. The error object contains the details of the error.
 */
@property (nonatomic, copy, nonnull) void (^onError)(AutomatIDResultError* error);

/**
 * The Strong Customer Identification flow was successful. The result object contains the JWT with the identification result.
 */
@property (nonatomic, copy, nonnull) void (^onSuccess)(AutomatIDResultSuccess* success);

/**
 * The AutomatID flow was canceled by the user.
 */
@property (nonatomic, copy, nonnull) void (^onCancel)(void);


@end


@interface AutomatIDManager : NSObject

/**
 Check if the SDK library is on the screen
 @note When the SDK is launched it generate a new UIWindow and use it for its presentation. When the SDK is closed the previus window is keyed.
 @return YES if the SDK is on the screen
 */
+(BOOL)isOnScreen;

/**
 This method perform the following check:
 - sdk is properly configurated.
 @return YES if AutomatID SDK has been properly configurated
 */
+(BOOL)isConfigurated;


/**
 This method perform the following checks:
  - sdk is properly configurated.
  - the device running the application has NFC hardware.
  - the iOS version installed on the device includes the NFC tag reading.
 @return YES if AUtomatID flow can start
 */
+(BOOL)isAutomatIDSupported;

/**
 It is required to call this method in your implementatoin of UIApplicationDelegate (application:supportedInterfaceOrientationsForWindow:)
 
 @return  topmost view controller's UIInterfaceOrientationMask
 */
+ (UIInterfaceOrientationMask)evaluateCurrentOrientation;


/**
 Initializes the AutomatID framework with the configuration file provided by Opentech
 
 @param filePath the file path of the configuration file. The path can be obtained with [[NSBundle mainBundle] pathForResource:@"my_file_name" ofType:@"otml"]
 @param anError an error if occurred
 
 @note In case of error the api return an NSError with domain otml_configuration_error and different error codes:
 0: file not found
 1-5: security error: please contact Opentech
 Other errors thrown by this api (see ERRORS MANAGEMENT):
 - Parameter errors
 
 This method must be called as soon as possible, the best option is to call it into the -(BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
 
 @return YES if the configuration completes without errors, NO otherwise (see anError for details)
 */
+(BOOL)configureWithFile:(NSString *)filePath withConfiguration:(nullable AutomatIDConfiguration*)config  withError:(NSError*__autoreleasing*)anError;

/**
 Performs strong costumer identification.
 
 @param request describing the array of scannable document types, AutomatIDDocumentType exposes factory methods for this array elements
 @param completion AutomatIDCallback implements the callback for success, error and user cancelled.
 */

+(void) startIdentificationWithRequest:(AutomatIDRequest*) request andCompletion:(AutomatIDCallback*)completion;


@end

NS_ASSUME_NONNULL_END
