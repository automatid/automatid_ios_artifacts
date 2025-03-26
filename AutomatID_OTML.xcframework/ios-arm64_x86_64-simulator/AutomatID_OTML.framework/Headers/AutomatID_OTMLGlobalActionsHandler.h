//
//  AutomatID_OTMLGlobalActionsHandler.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 22/01/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "AutomatID_OTMLViewController.h"
#import <AutomatID_OTMLCore/AutomatID_OTMLRestartAppAwareProtocol.h>

@interface AutomatID_OTMLGlobalActionsHandler : NSObject <AutomatID_OTMLRestartAppAwareProtocol>

+(AutomatID_OTMLGlobalActionsHandler*) sharedHandler;
+(void) configureWithGlobaActions:(NSMutableArray*) aMutArrOfActionsWithGlobalTriggers;
+(void) configureWithGlobaActionsModels:(NSArray*) actionModels;
-(BOOL) performActionWithTrigger:(NSString*)aTrigger;

@property NSMutableDictionary<NSString*,NSString*>* hashmap;

@end
