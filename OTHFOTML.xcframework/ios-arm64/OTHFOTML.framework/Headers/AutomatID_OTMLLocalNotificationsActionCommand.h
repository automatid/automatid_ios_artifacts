//
//  AutomatID_OTMLLocalNotificationsActionCommand.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 27/03/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "AutomatID_OTMLActionCommand.h"
#import "AutomatID_OTMLActionCommandSet.h"
#import "AutomatID_OTMLActionCommandWithTriggerResult.h"

@interface AutomatID_OTMLLocalNotificationsActionCommand : AutomatID_OTMLActionCommandSet
@end

@interface AutomatID_OTMLLocalNotificationsCommand : AutomatID_OTMLActionCommandWithTriggerResult
@end

@interface AutomatID_OTMLRemoveLocalNotificationCommand : AutomatID_OTMLActionCommand
@end

@interface AutomatID_OTMLPostponeLocalNotificationCommand : AutomatID_OTMLActionCommand
@end

@interface AutomatID_OTMLCleanLocalNotificationsCommand: AutomatID_OTMLActionCommand
@end
