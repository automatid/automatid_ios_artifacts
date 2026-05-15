//
//  AutomatID_OTMLExternalEventManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 26/04/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//


/*
 
 Push Notifications
 Tabella original app state in base a quando arriva la push
 e al tipo di push
 
        Silent | Non Silent | Non Silent
                               con interazione
 
 FG       0         0            0
 
 BG       2         NA           1
 
 Killed   NA        NA           1
 
 
 0 -> Active -> Foreground
 1 -> Inactive -> Starting
 2 -> Background -> Background
 -1 -> Non determinabile -> Unknown

 
 Push Notifications
 NUOVA Tabella CON PUSH SERVICE EXTENSION original app state in base a quando arriva la push
 e al tipo di push
 
        Silent | Non Silent | Non Silent
                               con interazione
 
 FG       0         0            0
 
 BG       2         -1           1
 
 Killed   NA        -1           1
 
 
 */




#import "AutomatID_OTMLExternalEventModel.h"
#import "AutomatID_OTMLSubStackActionsCommands.h"
#import "AutomatID_OTMLRestartAppAwareProtocol.h"

@class AutomatID_OTMLPushNotificationUpdateCommandModel;

typedef void(^ExternalEventProcessCompletationBlock)(NSDictionary*userInfo);

@interface AutomatID_OTMLExternalEventManager : NSObject <AutomatID_OTMLRestartAppAwareProtocol>

+(AutomatID_OTMLExternalEventManager*)getInstance;

@property (nonatomic, copy) ExternalEventProcessCompletationBlock completion_block;



#pragma mark notifications
-(void)enqueueRemoteNotificationWithWithApplication:(UIApplication*)application remoteNotification:(NSDictionary*)userInfo completionHandler:(ExternalEventProcessCompletationBlock)completionHandler andActionIdentifier:(NSString*)anIndentifier;

-(void)enqueueLocalNotificationWithWithApplication:(UIApplication *)application localNotification:(UILocalNotification *)aLocalNotification andActionIdentifier:(NSString*)anIndentifier;

#pragma mark apple pay
-(void) enqueueApplePayEventWithApplication:(UIApplication *)application
                                   andCards:(NSString*) cards;

#pragma mark open app
-(void)enqueueOpenAppWithApplication:(UIApplication *)application URL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;
-(NSString*)getLastOpenAppSourceApplication;

-(void)enqueueSDKLauchWithTarget:(NSString*)aTarget andOptions:(NSDictionary*)options;

#pragma mark custom events
-(void)enqueueExternalEventUsingProcessorForEventType:(AutomatID_OTMLExternalEventType) aEventType withApplication:(UIApplication *)aApplication eventPayload:(NSObject*)aPayload;




-(void)notifyTappedChanged:(BOOL)isTapped forEvent:(AutomatID_OTMLExternalEventModel *)anEvent;

#pragma mark queue management
-(void)lockSystemExternalEventsQueue;
-(void)unlockSystemExternalEventsQueue;
-(void)prepareSystemExternalEventsQueue;

#pragma mark app_ready management
-(void)setAppReadyForEventType:(AutomatID_OTMLExternalEventType)aType;
-(void)setDisableAppReadyForAllEvents;
-(BOOL)isAppReadyFor:(AutomatID_OTMLExternalEventType)aType;


#pragma mark rimuove eventi dalla coda degli eventi
-(void)removeEventsWithBeanCommand:(AutomatID_RemoveExternalEventBean*)aBean;
@end
