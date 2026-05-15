//
//  AutomatID_OTMLPushNotificationDisplayerProtocol.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 29/04/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLPushNotificationModel.h"
#import "AutomatID_OTMLExternalEventModel.h"

@protocol AutomatID_OTMLPushNotificationDisplayerProtocol <NSObject>

-(BOOL) canDisplayPushNotification:(AutomatID_OTMLExternalEventModel*) aNotification;
-(BOOL) isBlackListedPushNotification:(AutomatID_OTMLExternalEventModel*) aNotification;
-(void) doDisplayPushNotification:(AutomatID_OTMLExternalEventModel*) aNotification;

@end
