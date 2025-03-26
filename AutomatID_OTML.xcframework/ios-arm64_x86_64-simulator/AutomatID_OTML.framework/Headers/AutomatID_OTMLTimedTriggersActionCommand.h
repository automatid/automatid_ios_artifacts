//
//  OTMLTimedTriggersActionCommand.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 19/03/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "AutomatID_OTMLActionCommandSet.h"
#import "AutomatID_OTMLActionCommand.h"

@interface AutomatID_OTMLTimedTriggersActionCommand : AutomatID_OTMLActionCommandSet

@end

@interface AutomatID_OTMLScheduleTimedTriggerCommand : AutomatID_OTMLActionCommand

@end

@interface AutomatID_OTMLRemoveTimedTriggerCommand : AutomatID_OTMLActionCommand

@end

@interface AutomatID_OTMLPostponeTimedTriggerCommand : AutomatID_OTMLActionCommand

@end

@interface AutomatID_OTMLCleanTimedTriggerCommand : AutomatID_OTMLActionCommand

@end
