//
//  Logger.h
//  OTML
//
//  Created by epavoni on 30/12/08.
//  Copyright 2008 Opentech ENG.. All rights reserved.
//

@class AutomatID_OTMLLogModel;

typedef enum{
    AUTOMAT_ID_LOG_ASPECT_NONE                     = 0,
    AUTOMAT_ID_LOG_ASPECT_NOTIFICATION_CENTER      = 1 << 0,
    AUTOMAT_ID_LOG_ASPECT_PARAM_RESOLVE            = 1 << 1,
    AUTOMAT_ID_LOG_ASPECT_INTERNAL                 = 1 << 2,
    AUTOMAT_ID_LOG_ASPECT_CONTEXTS           = 1 << 3,
    AUTOMAT_ID_LOG_ASPECT_EXTERNAL_EVENTS  = 1 << 4,
    AUTOMAT_ID_LOG_ASPECT_COMPONENT        = 1 << 5,
    AUTOMAT_ID_LOG_ASPECT_PERMISSIONS      = 1 << 6,
    AUTOMAT_ID_LOG_ASPECT_STACK            = 1 << 7,
    AUTOMAT_ID_LOG_ASPECT_NETWORK          = 1 << 8,
    AUTOMAT_ID_LOG_ASPECT_CRYPTO           = 1 << 9,
    AUTOMAT_ID_LOG_ASPECT_FRAME            = 1 << 10,
    AUTOMAT_ID_LOG_ASPECT_LIFECYCLE        = 1 << 11,
    AUTOMAT_ID_LOG_ASPECT_FILE             = 1 << 12,
    AUTOMAT_ID_LOG_ASPECT_ACTION           = 1 << 13,
    AUTOMAT_ID_LOG_ASPECT_CONDITION        = 1 << 14,
    AUTOMAT_ID_LOG_ASPECT_STYLE            = 1 << 15,
    AUTOMAT_ID_LOG_ASPECT_DATASOURCE       = 1 << 16,
    AUTOMAT_ID_LOG_ASPECT_COMPONENT_UPDATE = 1 << 17, //usato poco e male
    AUTOMAT_ID_LOG_ASPECT_TRIGGERS         = 1 << 18,
    AUTOMAT_ID_LOG_ASPECT_OTML_UPDATER     = 1 << 19,
    AUTOMAT_ID_LOG_ASPECT_LOCATION         = 1 << 20,
    AUTOMAT_ID_LOG_ASPECT_APPLICATION_2    = 1 << 21,
    AUTOMAT_ID_LOG_ASPECT_ALERT    = 1 << 22,
    AUTOMAT_ID_LOG_ASPECT_FONT             = 1 << 23,
    AUTOMAT_ID_LOG_ASPECT_JS               = 1 << 24,
    AUTOMAT_ID_LOG_ASPECT_WEBVIEW          = 1 << 25,
    AUTOMAT_ID_LOG_ASPECT_TOUCHID          = 1 << 26,
    AUTOMAT_ID_LOG_ASPECT_KEYCHAIN         = 1 << 27,
    AUTOMAT_ID_LOG_ASPECT_MOBILE_TOKEN           = 1 << 28,
    AUTOMAT_ID_LOG_ASPECT_PUSH_NOTIFICATIONS     = 1 << 29,
    AUTOMAT_ID_LOG_ASPECT_TRACE                    = 1 << 30,
    AUTOMAT_ID_LOG_ASPECT_FRONTEND_DEBUG           = 1 << 31, //usato per debug lato front-end
}AUTOMAT_ID_LOG_ASPECT;

typedef NS_ENUM(NSUInteger,AUTOMAT_ID_LOG_LEVEL){
    AUTOMAT_ID_LOG_LEVEL_DEBUG,
    AUTOMAT_ID_LOG_LEVEL_INFO,
    AUTOMAT_ID_LOG_LEVEL_WARNING,
    AUTOMAT_ID_LOG_LEVEL_ERROR,
    AUTOMAT_ID_LOG_LEVEL_CRITICAL,
    AUTOMAT_ID_LOG_LEVEL_CRITICAL_NOW
};

typedef NS_ENUM(NSUInteger, AutomatID_OTMPLoggerProcessor) {
    AutomatID_OTMPLoggerProcessor_NoProcessor,
    AutomatID_OTMPLoggerProcessor_Othros,
    AutomatID_OTMPLoggerProcessor_Filesystem,
    AutomatID_OTMPLoggerProcessor_NSLog
};

@protocol AutomatID_OTMPLogDelegate <NSObject>
-(void)logwithLevel:(AUTOMAT_ID_LOG_LEVEL)level aspect:(AUTOMAT_ID_LOG_ASPECT) aspect from:(const char*)source threadName:(NSString*)aThreadName message:(NSString *)message;
-(AutomatID_OTMPLoggerProcessor)loggerProcessor;
@end

@protocol AutomatID_OTMPLoggerProcessorDelegate <NSObject>
-(void)processLog:(AutomatID_OTMLLogModel*)aLog;

@end


@interface AutomatID_OTMLLogModel : NSObject

@property (nonatomic, assign) AUTOMAT_ID_LOG_LEVEL level;
@property (nonatomic, assign) AUTOMAT_ID_LOG_ASPECT aspect;
@property (nonatomic, assign) const char* source;
@property (nonatomic, strong) NSString* messageString;
@property (nonatomic, strong) NSData* messageData;

@end

@interface AutomatID_OTMPLogger : NSObject

+(NSArray*)LOG_PREFIXES;

+(void)setLogDelegate:(NSObject<AutomatID_OTMPLogDelegate>*) aDelegate;

+(void)logwithLevel:(AUTOMAT_ID_LOG_LEVEL)level aspect:(AUTOMAT_ID_LOG_ASPECT) aspect from:(const char*)source message:(NSString *)format, ...;
+(void)logwithLevel:(AUTOMAT_ID_LOG_LEVEL)level aspect:(AUTOMAT_ID_LOG_ASPECT) aspect formattedMessage:(NSString *)format;
+(void)logEventAndExit;
+(void)logEventAndExit:(NSString*) theReasonToCrash;

@end

