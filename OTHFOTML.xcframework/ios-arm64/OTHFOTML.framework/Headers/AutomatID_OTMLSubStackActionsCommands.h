//
//  OTMLSubStackActions.h
//  OTMLFramework
//
//  Created by Enrico on 05/05/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLActionCommandSet.h"
#import "AutomatID_OTMLExternalEventModel.h"

@interface AutomatID_RemoveExternalEventBean : NSObject

-(nonnull instancetype) initWithTarget:(nullable NSString*)aTarget type:(nullable NSString*)aType;
-(nonnull instancetype) init __attribute__((unavailable("Init not available. Please use initWithTarget:type: instead")));

@property (nonatomic, readonly) BOOL removeByID;
@property (nonatomic, readonly) BOOL removeByType;
@property (nonatomic, readonly) BOOL removeAll;
@property (nonatomic, readonly) NSString* __nonnull idToRemove;
@property (nonatomic, readonly) AutomatID_OTMLExternalEventType typeToRemove;

@end

@interface AutomatID_RemoveExternalEventCommand : AutomatID_OTMLActionCommand
@end


@interface AutomatID_OTMLSubStackActionsCommands: AutomatID_OTMLActionCommandSet
@end
