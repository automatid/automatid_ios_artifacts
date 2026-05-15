//
//  AutomatID_OTMLViewController.h
//  OTML
//
//  Created by enrico on 31/05/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//



#import "AutomatID_OTMLLayoutViewController.h"
#import "AutomatID_OTMLBridgeDelegate.h"
#import "AutomatID_OTMLJSEngineManager.h"
#import "AutomatID_OTMLDatasource.h"
#import "AutomatID_OTMLEntry.h"
#import "AutomatID_OTMLViewControllerResponderDelegate.h"

@class AutomatID_OTMLComponent;
@class AutomatID_OTMLHeaderConfigurator;
@class AutomatID_OTMLMainViewController;


@interface AutomatID_OTMLViewController : AutomatID_OTMLLayoutViewController <AutomatID_OTMLViewControllerResponderDelegate, UIGestureRecognizerDelegate>{
@protected
    CGRect frame;
    AutomatID_OTMLJSEngineManager * jsEngine;

}

@property (nonatomic, assign) BOOL isViewControllerReady; //storicamente un view controller è definito ready appena la web view che gestisce i JS è pronta ad elaborare i JS. Migliorabile...
@property (nonatomic, readonly) CGSize frameSize;
@property (nonatomic, assign) BOOL isHeaderVisible;
@property (nonatomic, readonly) AutomatID_OTMLHeaderConfigurator* headerConfigurator;

@property (nonatomic, assign) BOOL shouldForceOrientationCheck;
@property (nonatomic, assign) UIInterfaceOrientationMask forcedOrientation;

// framework methods (do not override or at least call super)

-(id) initWithEntry:(AutomatID_OTMLEntry*) aEntry andWithParameters:(NSDictionary*) aParameterMap andWithFrame:(CGRect) aFrame;

-(id) initWithEntry:(AutomatID_OTMLEntry*) aEntry
  andWithParameters:(NSDictionary*) aParameterMap
       andWithFrame:(CGRect) aFrame
          onContext:(NSString*) aContext;

-(void) setFrame:(CGRect)aFrame;
-(CGRect) getFrame;

- (void)handleDeviceOrientationCheckAndForceIt;
-(void) executeJSWithTarget:(NSString*)target andParameters:(NSDictionary*) parameters;
-(void) executeTrigger:(NSString*)aTrigger forTarget:(NSString*)aTarget;
-(void) executeTrigger:(NSString*)aTrigger onComponent:(AutomatID_OTMLComponent*)aComponent;

-(void) askGoBackWithContext:(NSString*)aContext skipBackActions:(BOOL)skipBackActions;

-(BOOL) canGoBack;
-(BOOL) hasBackActions;

-(void)updateFramesInViewAnimated:(BOOL)animated animationTime:(CGFloat)animationTime;


//TODO enrico serve ancora, lo possiamo usare per i grafici in orizzontale? //container ad hoc che invertegli assi...
-(BOOL) canRotate;
-(UIView*) getLandscapeViewInFrame:(CGRect) aLandscapeFrame;



-(void) _dequeuedTriggerEvent_:(NSString*)aTrigger;

-(BOOL)isPopup;

-(BOOL) refreshThePageFromModalViewsAndErrorsAndDismissResponder:(BOOL)_dismissResponder;

-(void) controllerDidShow;
-(AutomatID_OTMLComponent*)getRootComponent;


-(void)applyViewBackgroundModel;

-(void)scrollToComponent:(NSString*)aComponentID;
-(void)scrollToComponentAtTop:(NSString*)aComponentID;

-(void)applyHeaderDescriptorModel;
@end
