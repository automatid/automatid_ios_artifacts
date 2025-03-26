//
//  OTMLCustomActionResolver.h
//  OTMLFramework
//
//  Created by Opentech on 09/01/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLActionCommand.h"
#import "AutomatID_OTMLResolvedAction.h"
#import "AutomatID_OTMLParamModeAbstractStrategy.h"

@protocol AutomatID_OTMLCustomActionResolver <NSObject>

/**
 *  This is the only required method to override if you plan to implement custom actions on the applciation that is using OTMLFramework.
 *      You have to return nil for unknown kind of actions.
 *      You can override a common action kind 
 */
-(AutomatID_OTMLActionCommand*) actionCommandFromResolvedAction:(AutomatID_OTMLResolvedAction*) aResolvedAction;



/**
    those methods are the hook to redefine completely the paramethers resolution. This will not substitute paramMode logic wich is integrated 
 */
@optional
-(BOOL)canResolveParameter:(AutomatID_OTMLParameter*)aParameter;
-(AutomatID_OTMLParameterEntry*)resolveParameter:(AutomatID_OTMLParameter*)aParameter;

/**
 *  This method is required for apps that whant to handle custom param modes (the "cmode" attribute value is the key in this dictionary).
 *  Given a key of NSString type, you should return an object conforms to id<AutomatID_OTMLParamModeStrategy>
 *  The method is called once and the dictionary entries are retained by the framework.
 */
-(NSDictionary<NSString*,AutomatID_OTMLParamModeStrategy*>*) newHandledStrategiesByCustomParamMode;

@end
