//
//  AutomatID_OTMLSessionFollower.h
//  OTMLFramework
//
//  Created by epavoni on 07/11/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLAction.h"
#import "AutomatID_OTMLRestartAppAwareProtocol.h"

@interface AutomatID_OTMLSessionFollower : NSObject <AutomatID_OTMLRestartAppAwareProtocol>

@property(nonatomic, assign) NSTimeInterval interactionInterval;
@property(nonatomic, assign) NSTimeInterval backgroundInterval;

-(BOOL) isInactive;

+(instancetype) getInstance;

-(void) markUIInteraction;

-(void) appInForeground;
-(void) appInBackground;

-(void) startTrack;
-(void) stopTrack;

@end
