//
//  OTMLActionCommand.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 25/11/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLResolvedAction.h"
#import "AutomatID_OTMLViewController.h"
#import "AutomatID_OTMLComponent.h"

@interface AutomatID_OTMLActionCommand : NSObject{
    NSDictionary* paramethers;
}

/**
 *   the Command will be executed. DEfault implementation is a no-op.
 */
-(void) executeResolvedAction:(AutomatID_OTMLResolvedAction*) aAction
             onViewController:(AutomatID_OTMLViewController*) aNestingVC;

@end
