//
//  OTMLDelegateDSCrud.h
//  OTMLFramework
//
//  Created by Enrico Pavoni on 23/02/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLTriggerDelegate.h"

@interface AutomatID_OTMLDSCrudTriggerDelegate : AutomatID_OTMLTriggerDelegate

- (nullable instancetype)initWithParameters:(nonnull NSArray<AutomatID_OTMLParameterEntry*>*) resolvedParameters
                       inOtmlViewController:(nullable AutomatID_OTMLViewController*)aOTVC;

- (nullable instancetype)initWithDictionary:(nonnull NSDictionary*) parameters
                       inOtmlViewController:(nullable AutomatID_OTMLViewController*)aOTVC;

-(void)triggerOK;
-(void)triggerKo;

@end
