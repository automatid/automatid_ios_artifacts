//
//  OTMLExternalEventAstractProcessor.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 26/04/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLExternalEventModel.h"

@interface AutomatID_OTMLExternalEventAbstractProcessor : NSObject

-(BOOL)processExternalEvent:(AutomatID_OTMLExternalEventModel*)anEvent;
-(void)preProcessExternalEvent:(AutomatID_OTMLExternalEventModel*)anEvent;

//for customExternalEventModel
-(AutomatID_OTMLExternalEventModel*) prepareExternalEventModelForEventWithPayload:(NSObject*) aPayload withApplication:(UIApplication *)aApplication;
-(AutomatID_OTMLConcreteEventModel*) prepareConcreteEventModelForEventWithPayload:(NSObject*) aPayload withApplication:(UIApplication *)aApplication andExternalEventModel:(AutomatID_OTMLExternalEventModel*) aEventModel;

@end
