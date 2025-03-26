//
//  OTMLActionResolver.h
//  OTMLFramework
//
//  Created by Opentech on 09/01/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

@class AutomatID_OTMLAction;
@class AutomatID_OTMLViewController;
@class AutomatID_OTMLParameter;
@class AutomatID_OTMLParameterEntry;
@class AutomatID_OTMLResolvedAction;

@interface AutomatID_OTMLResolvedActionDirectivity : NSObject

@property (strong, nonatomic, readonly) AutomatID_OTMLResolvedAction* resolvedAction;
@property (nonatomic, readonly) BOOL actionExecutesOnRestart;
@property (nonatomic, readonly) BOOL actionTriggeredValidationException;
@property (strong, nonatomic, readonly) AutomatID_OTMLViewController* targetController;

+(AutomatID_OTMLResolvedActionDirectivity*)noAction;
+(AutomatID_OTMLResolvedActionDirectivity*)skipForValidationExcepion;
+(AutomatID_OTMLResolvedActionDirectivity*)skipForOnRestart;

- (id)initWithResolvedAction:(AutomatID_OTMLResolvedAction*) aResolvedAction actionTriggeredValidationException:(BOOL)actionTriggeredValidationException actionExecutesOnRestart:(BOOL) actionExecutesOnRestart targetController:(AutomatID_OTMLViewController*) aTargetController;

@end


@interface AutomatID_OTMLActionResolver : NSObject

+(void) setupCustomActionResolvers:(NSArray*) aOTMLCustomActionResolverArray;
+(AutomatID_OTMLActionResolver*) getInstance;
-(BOOL) performAction:(AutomatID_OTMLAction*) aAction withOTMLVC:(AutomatID_OTMLViewController*) aOTMLvc;

-(AutomatID_OTMLResolvedActionDirectivity*)resolveAction:(AutomatID_OTMLAction*)aAction onOtmlViewController:(AutomatID_OTMLViewController*)origOTMLVC;
-(BOOL)executeResolvedAction:(AutomatID_OTMLResolvedAction*)the_action onOtmlViewController:(AutomatID_OTMLViewController*)aOTMLvc;

-(BOOL)postHandle:(AutomatID_OTMLAction*)aAction;

-(BOOL)canResolveParameter:(AutomatID_OTMLParameter*)aParameter;
-(AutomatID_OTMLParameterEntry*)resolveParameter:(AutomatID_OTMLParameter*)aParameter;

@end
