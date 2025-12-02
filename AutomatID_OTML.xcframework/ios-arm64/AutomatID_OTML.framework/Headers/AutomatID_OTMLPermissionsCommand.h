//
//  OTMLPermissionsCommand.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 25/09/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "AutomatID_OTMLActionCommandSet.h"
#import "AutomatID_OTMLActionCommandWithTriggerResult.h"
#import <AVFoundation/AVFoundation.h>

@protocol AutomatID_OTMPAuthLocationDelegate;

typedef enum {
    OTMLPermissionStatusUnknown = -1,
    OTMLPermissionStatusNotDetermined = 0,
    OTMLPermissionStatusDenied = 1,
    OTMLPermissionStatusGranted = 2
} AutomatID_OTMLPermissionsStatus;

typedef enum {
    OTMLNotificationsPermissionsTypeLocal,
    OTMLNotificationsPermissionsTypeRemote
} AutomatID_OTMLNotificationsPermissionsTypes;

@interface AutomatID_OTMLPermissionsCommand : AutomatID_OTMLActionCommandSet

+(BOOL)isCameraPermissionsNotDetermined;
+(BOOL)isCameraPermissionsGranted;
+(BOOL)isMicrophonePermissionsGranted;
+(BOOL)isMicrophonePermissionsNotDetermined;

+(BOOL)isUserNotificationsPermissionsStatusNotDetermined;

+(BOOL)isRemoteNotificationsPermissionsStatusGranted;

+(BOOL)isLocalNotificationsPermissionsStatusGranted;

+(BOOL)isPhonebookPermissionsGranted;
+(BOOL)isPhonebookPermissionsNotDetermined;

@end

@interface AutomatID_OTMLAskPermissionsCommand : AutomatID_OTMLActionCommandWithTriggerResult <AutomatID_OTMPAuthLocationDelegate>

+(AutomatID_OTMLAskPermissionsCommand*)getInstance;

-(AutomatID_OTMLNotificationsPermissionsTypes)notificationsRequestType;

-(void)triggerPopupGrantedForType:(AutomatID_OTMLNotificationsPermissionsTypes)aType;
-(void)triggerPopupDeniedForType:(AutomatID_OTMLNotificationsPermissionsTypes)aType;

@end

@interface AutomatID_OTMLOpenAppSystemSettingsPermissionsCommand : AutomatID_OTMLActionCommandWithTriggerResult

@end


