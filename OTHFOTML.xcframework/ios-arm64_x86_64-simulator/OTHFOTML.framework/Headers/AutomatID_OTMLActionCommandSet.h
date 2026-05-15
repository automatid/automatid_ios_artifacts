//
//  ActionCommands.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 25/11/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLActionCommand.h"
#import "AutomatID_OTMLCustomActionResolver.h"

@interface AutomatID_OTMLActionCommandSet : NSObject<AutomatID_OTMLCustomActionResolver>

-(id) init;
-(id) initForSubClasses;
-(NSDictionary*) actionCommands;
-(AutomatID_OTMLActionCommand*)nonSingletonActionWithType:(NSString *)aType;

@end
