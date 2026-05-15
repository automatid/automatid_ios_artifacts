//
//  OTMLActionCommandWithTriggerResult.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 22/09/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "AutomatID_OTMLActionCommand.h"


@interface AutomatID_OTMLActionCommandWithTriggerResult : AutomatID_OTMLActionCommand

@property (nonatomic, strong) AutomatID_OTMLViewController * viewController;
@property (nonatomic, strong) NSString * delegateContext;
@property (nonatomic, strong) NSString * delegateComponent;

-(void)triggerEvent:(NSString*)aEvent;

@end
