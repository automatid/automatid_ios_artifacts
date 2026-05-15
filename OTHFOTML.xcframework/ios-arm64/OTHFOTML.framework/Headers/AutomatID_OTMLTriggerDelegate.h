//
//  OTMLDelegate.h
//  OTMLFramework
//
//  Created by Enrico Pavoni on 23/02/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLParameterEntry.h"
#import "AutomatID_OTMLViewController.h"

@interface AutomatID_OTMLTriggerDelegate : NSObject

- (nullable instancetype)initWithParameters:(nonnull NSArray<AutomatID_OTMLParameterEntry*>*) resolvedParameters
              inOtmlViewController:(nullable AutomatID_OTMLViewController*)aOTVC
      delegateComponentParameterID:(nonnull NSString*) aDelegateComponentParameterID
        delegateContextParameterID:(nonnull NSString*) aDelegateContextParameterID;

- (nullable instancetype)initWithDictionary:(nonnull NSDictionary<NSString*, NSString*>*) parameters
              inOtmlViewController:(nullable AutomatID_OTMLViewController*)aOTVC
      delegateComponentParameterID:(nonnull NSString*) aDelegateComponentParameterID
        delegateContextParameterID:(nonnull NSString*) aDelegateContextParameterID;

-(void)triggerDelegate:(nonnull NSString*)event;

@end
