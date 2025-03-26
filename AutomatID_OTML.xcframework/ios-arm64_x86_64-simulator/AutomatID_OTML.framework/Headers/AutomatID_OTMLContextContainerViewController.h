//
//  OTMLContextContainerViewController.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 12/09/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

@class AutomatID_OTMLMainViewControllerInstancesBasket;
@class AutomatID_OTMLContextDescriptor;
@class AutomatID_OTMLViewController;
@class AutomatID_OTMLAction;
@class AutomatID_OTMLContextGroupContainerView;
@class AutomatID_OTMLMainViewController;
@class AutomatID_OTMPOrderedDictionary;

#import <AutomatID_OTMLCore/AutomatID_OTMLRestartAppAwareProtocol.h>

@interface AutomatID_OTMLContextContainerViewController : UIViewController<AutomatID_OTMLRestartAppAwareProtocol, UIGestureRecognizerDelegate>

@property (nonatomic, readonly, nonnull) AutomatID_OTMLMainViewControllerInstancesBasket* contextInstances;
@property (nonatomic, readonly, nonnull) AutomatID_OTMLContextDescriptor* contextDescriptor;

@property (nonatomic, readonly, strong, nonnull) AutomatID_OTMPOrderedDictionary<NSString*,AutomatID_OTMLContextGroupContainerView*>* groupViewByGroupID;
@property (nonatomic, readonly, strong, nonnull)  NSMutableDictionary<NSString*,AutomatID_OTMLMainViewController*>* mainVCByContextID;
@property (nonatomic, readonly, strong, nonnull)  NSMutableDictionary<NSString*,NSString*>* groupIDByContextID;

@property (nonatomic, assign) UIInterfaceOrientationMask currentOrientation;


-(nonnull instancetype) init __attribute__((unavailable("Init not available. Please use initWithContextDescriptor instead")));
-(nonnull instancetype)initWithContextDescriptor:(nonnull AutomatID_OTMLContextDescriptor*)aDescriptor;

+(nullable UIImage*)fastScreenshotOfMainWindowWithRect:(CGRect)aRect;

-(void) pushOTML:(nonnull AutomatID_OTMLViewController*) aOTMLvc withContext:(nonnull NSString*)contextID;
-(void) popOTMLbackSteps:(unsigned int) numberOfStepBack animated:(BOOL) animated withContext:(nonnull NSString*)contextID;

/**
 performs action on top VC in a specific context.
 @param anAction the action to execute
 @param contextID the contextID to search for the top AutomatID_OTMLViewController.
 @note <b>If contextID is nil</b>, the action will be executed as a <b>global action</b>
 @note If contextID exists, <b>but no AutomatID_OTMLViewController is currently pushed</b>, the action will be executed as a <b>global action</b>
 */
-(void) performOnTopOTMLVC:(nonnull AutomatID_OTMLAction*) anAction withContext:(nullable NSString*)contextID;

-(nullable AutomatID_OTMLViewController*) getAutomatID_OTMLViewControllerForContext:(nonnull NSString*) contextID;
-(nullable AutomatID_OTMLViewController*) getAnyOTMLVC;

-(CGRect) getFrameForContentInContext:(nonnull NSString*)contextID;

-(BOOL) didOTMLEntryBeenPushedOnContext:(nonnull NSString*)aContext;

-(BOOL) isAnimationLocked;

-(nonnull NSString*) mainContextID;


-(void) notifyOpenResponder;

-(void) notifyDismissed;

-(void) customDismissActualResponder;

-(void) updateContextFrames;

-(BOOL) setContextVisibility:(BOOL)open animated:(BOOL)animated forced:(BOOL)forced onContext:(nonnull NSString*) aContextID;
-(BOOL) setGroupVisibility:(BOOL)open animated:(BOOL)animated forced:(BOOL)forced onGroup:(nonnull NSString*) aGroupID;

-(BOOL) isContextOpen:(nonnull NSString*) aContextID;
-(BOOL) isGroupOpen:(nonnull NSString*) aGroupID;

-(UIInterfaceOrientationMask)evaluateOrientation;

@end
