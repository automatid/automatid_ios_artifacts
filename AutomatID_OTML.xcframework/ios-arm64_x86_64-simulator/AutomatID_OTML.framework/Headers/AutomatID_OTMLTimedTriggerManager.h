//
//  AutomatID_OTMLTimedTriggerManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 19/03/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "AutomatID_OTMLTimedTriggerModel.h"
#import <AutomatID_OTMLCore/AutomatID_OTMLRestartAppAwareProtocol.h>


@interface AutomatID_OTMLTimedTriggerManager : NSObject <AutomatID_OTMLRestartAppAwareProtocol>

-(AutomatID_OTMLTimedTriggerModel*)removeTimedTriggerWithFullID:(NSString*)aTimedTriggerFullID;
-(void)scheduleTimedTriggerWithModel:(AutomatID_OTMLTimedTriggerModel*)aTimedTrigger;
-(AutomatID_OTMLTimedTriggerModel*)postponeTimedTriggerWithFullID:(NSString*)aTimedTriggerFullID forSeconds:(double)secondsToPostpone;

-(AutomatID_OTMLTimedTriggerModel*)timedTriggerWithFullID:(NSString*)aTimedTriggerFullID;

-(void)pauseActiveTimedTriggers;
-(void)playActiveTimedTriggers;
-(void)processExpiredTimedTriggers;

-(void)loadSavedTimedTrigger;

+(AutomatID_OTMLTimedTriggerManager*)getInstance;

@end
