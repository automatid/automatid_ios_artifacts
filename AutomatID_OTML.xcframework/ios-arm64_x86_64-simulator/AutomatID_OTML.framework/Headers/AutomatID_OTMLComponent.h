//
//  OTMLComponent.h
//  OTML
//
//  Created by enrico on 30/05/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

#import "AutomatID_OTMLViewController.h"
#import "AutomatID_OTMLMargin.h"
#import "AutomatID_OTMLPadding.h"
#import "AutomatID_OTMLImage.h"
#import "UIImage+AutomatID_OTMLBridge.h"
#import "AutomatID_OTMLDatasource.h"
#import <AutomatID_OTMLModels/AutomatID_OTMPColor.h>
#import "AutomatID_OTMLParameterEntry.h"
#import "AutomatID_OTMLComponentBackgroundView.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLComponentConstants.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLVisibility.h>
#import "AutomatID_OTMLLayout.h"
#import "UIImage+AutomatID_OTMLBridge.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLCoreConstants.h>
#import "AutomatID_OTMLComponentResponderDelegate.h"
#import "AutomatID_OTMLComponentFrameModelHelper.h"
#import "AutomatID_OTMLParameterEntry.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLStatefulComponent.h>
#import "AutomatID_OTMLComponentFrameModelHelper.h"

@class AutomatID_OTMLParameter;
@class AutomatID_OTMLViewController;
@class AutomatID_OTMLComponentModel;
@class AutomatID_OTMLContainer;
@protocol OTMLCustomComponentErrorHandler;


#define ERROR_ICON_OFFSET 5
#define MAXSIZE cAutomatID_MAX_OTML_VIEW_SIZE


@interface AutomatID_OTMLComponent : NSObject<NSCopying, AutomatID_OTMLStatefulComponent>{
@protected
    AutomatID_OTMLComponentFrameModelHelper * frameModelHelper;
    AutomatID_OTMLFrameManager* padding_manager;

    NSArray<AutomatID_OTMLParameter*>* parameters;
    AutomatID_OTMLViewController* otmlViewController;

    //state based
    CGRect formerFrame;
    CGRect frameFromOutside;
    BOOL invalidatedFrame;
    UIView* view;

    BOOL ready;
    BOOL disposed;

    NSString* componentName;

    CGRect frameScaledByMarginsAndPadding;
    CGRect lastFrameFromOutside;

    AutomatID_OTMLComponentModel * _model;
}

@property (strong, nonatomic, readonly) UIView* view;
@property (nonatomic, strong) AutomatID_OTMLViewController* otmlViewController;

-(AutomatID_OTMLComponentFrameModelHelper*) getTheFrameModelHelper;
-(id) initWithOTMLComponent:(AutomatID_OTMLComponent*) aComponent;
-(id) initWithModel:(AutomatID_OTMLComponentModel*) aModel;


-(BOOL) isBackGroundOrMainView:(UIView*) aView;
-(void) configureContentView:(UIView*) aView;



/** BASE ATTRIBUTES **/
-(void) setParent:(AutomatID_OTMLContainer*) aParent;
-(AutomatID_OTMLContainer*) getParent;
-(AutomatID_OTMLViewController*) getNestingOTMLVC;

-(NSString*) getOtmlID;
-(NSString*) getComponentName;
-(AutomatID_OTMLComponentModel*) model;

/*** ERROR MANAGEMENT ***/
-(UIView*) getErrorView;
-(NSString*) getValidationErrorMessage;
-(void)updateFramesInViewRecursively;



-(void) exitFromErrorState;
-(BOOL) exitFromErrorStateAndInvalidate:(BOOL)invalidate;
-(void) updateErrorViewFrames;



/** COMPONENT SIZE **/
-(CGFloat) contentHeightMin;
-(CGFloat) contentWidthMin;
-(CGFloat) contentHeightWrapped;
-(CGFloat) contentHeight;
-(CGFloat) contentWidthWrapped;
-(CGFloat) contentWidth;
-(CGFloat) getMaxWrappingWidth;
-(CGFloat) getMaxWrappingHeight;


/** COMPONENT FRAME **/
-(BOOL) setFrame:(CGRect) aFrame ParentIsWrappingW:(BOOL) parentWrappingW ParentIsWrappingH:(BOOL) parentWrappingH;
-(void) invalidateAndPropagate: (BOOL) proagate;
-(void) invalidateAndPropagateToChild:(BOOL) proagate propagateToParents:(BOOL)propagateToParents shouldUpdateFrames:(BOOL) frameMustBeUpdated;
-(CGRect) getFrame;
-(void) setFillingWidth:(CGFloat) aWidth invalidating:(BOOL) shouldInvalidate;
-(void) setFillingHeight:(CGFloat) aHeight invalidating:(BOOL) shouldInvalidate;
-(void) setFillingSize:(CGSize) aSizeToFill
          invalidating:(BOOL) shouldInvalidate;
-(void) updateFramesInView;
-(BOOL) skipUpdateFrame;

-(void) repositionOriginX:(CGFloat) aX invalidating:(BOOL) shouldInvalidate;
-(void) repositionOriginY:(CGFloat) aY invalidating:(BOOL) shouldInvalidate;
-(void) repositionOrigin:(CGPoint) aOrigin invalidating:(BOOL) shouldInvalidate;



-(NSInteger) getZIndex;

-(AutomatID_OTMLPadding*)padding;
-(void)setPadding:(AutomatID_OTMLPadding*)padding;
-(CGFloat) getFillFactor;
-(AutomatID_OTMLMargin*) getMargin;
-(void)setMargin:(AutomatID_OTMLMargin*)margin;
-(CGSize)bgSize;

-(void)restoreMinHForKeyboardSize;
-(void)reduceMinHByKeyboardSize:(CGRect)aKeyboardFrame;
-(CGFloat) getReducedMinHByKeyboardSize;

/** COMPONENT FRAME HELPERS **/
-(CGRect) scaleFrameByMarginAndPadding:(CGRect) aFrame;
-(CGRect) scaleFrameByMargin:(CGRect) aFrame;
-(CGRect) scaleFrameByPadding:(CGRect) aFrame;
-(CGRect) inflateFrameByMarginAndPadding:(CGRect) aFrame;
-(CGRect) inflateFrameByMargin:(CGRect) aFrame;
-(CGRect) inflateFrameByPadding:(CGRect) aFrame;

-(CGRect) frameForBgContainer;
-(CGRect) frameForContentViewWithoutBgContainer;
-(CGRect) frameForContentViewInBGContainer;




/** COMPONENT TRIGGERS **/
-(void) componentDidShow;
-(void) didTrigger:(NSString*) aTrigger;



/** COMPONENT POSITIONING **/

-(void) askScrollToFit:(AutomatID_OTMLComponent*)aComponent;
-(void) askScrollToFitTop:(AutomatID_OTMLComponent*)aComponent scrollUpWard:(BOOL) shouldGoUp offset:(CGFloat)additionalOffset;



/** COMPONENT STATE **/

//Visibility
-(BOOL) isVisible;
-(BOOL) isCollapsed;
-(BOOL) setVisibility:(AutomatID_OTMLVisibility) aVisibility;
-(BOOL) setVisibility:(AutomatID_OTMLVisibility) aVisibility invalidating:(BOOL)invalidating;


//Control state
-(BOOL) isEnabled;
-(BOOL) isSelected;


//-(BOOL) updateAlpha;
-(BOOL) updateHidden;

// TODO: non è implementato da tutti i component
-(void) dispose;
-(BOOL) isReady;
-(BOOL) isDisposed;



/** COMPONENT PARAMS **/
-(NSString*) getParametrizationValueWithFlag:(NSString*) aFlag validate:(BOOL)validateNow;
-(void) handleFormerParameters;
-(void) handleFormerParametersMap:(NSArray*) aParameterMap;
-(BOOL) handleParameters:(NSDictionary*) updParams
                applyNow:(BOOL)shouldApplyNow;
-(BOOL) handleConcreteComponentParameters:(NSDictionary*) updParams;




/** COMPONENT HIERARCHIC BEHAVIOUR **/
-(AutomatID_OTMLParameterEntry*) hierarchicParameterResolveAsKeyValueParameter:(AutomatID_OTMLParameter*) aParameter
                                                        forComponent:(AutomatID_OTMLComponent*)aComponent
                                                            validate:(BOOL)validateNow;
-(NSInteger) getHierarchicResolvedRow;
-(NSInteger) getHierarchicResolvedSection;
-(NSInteger) getHierarchicResolvedRowForComponent:(AutomatID_OTMLComponent*)aComponent;
-(NSInteger) getHierarchicResolvedSectionForComponent:(AutomatID_OTMLComponent*)aComponent;
-(NSInteger) getHierarchicOriginalRow;
-(NSInteger) getHierarchicOriginalSection;
-(void)setHierarchicIndexPath:(NSIndexPath*)anIndexPath;


/** COMPONENT BACKGROUND **/

-(UIView*) newBackgroundContainerView;
-(UIView*) newContentViewWithFrame:(CGRect) cViewFrame;
-(AutomatID_OTMLComponentBackgroundView *) newBackgroundContainerViewWithFrame:(CGRect) aTotalFrame;
-(AutomatID_OTMLComponentBackgroundView *) getBGView;



/** COMPONENT NAVIGATION **/
-(AutomatID_OTMLComponent<AutomatID_OTMLComponentResponderDelegate>*)getNextResponderComponentFromComponent:(AutomatID_OTMLComponent*)aComponent backwardSearch:(BOOL) canSearchBack tentative:(NSInteger) tentative;
-(AutomatID_OTMLComponent<AutomatID_OTMLComponentResponderDelegate>*)getPreviuosResponderComponentFromComponent:(AutomatID_OTMLComponent*)aComponent backwardSearch:(BOOL) canSearchBack tentative:(NSInteger) tentative;
-(BOOL) containsComponent:(AutomatID_OTMLComponent*) aComponent;
-(AutomatID_OTMLComponent*) findComponentByID:(NSString*) aOtmlID;




/** COMPONENT ROTATION **/
-(BOOL) canRotate;
-(UIView*)getLandscapeViewInFrame:(CGRect) aLandscapeFrame;




+(AutomatID_OTMLLayout*) componentGroupNamed:(NSString*) aComponentGroudID preferredContextID:(NSString*) aCtxID;
+(void) printAllFramesOfView:(UIView*) aView withLogTag:(NSString*) space;
-(void) printAllFramesWithLogTag:(NSString*) space;

@end





@protocol OTMLCustomComponentErrorHandler <NSObject>

-(BOOL) canhandleErrorForComponent:(AutomatID_OTMLComponent*)aComponent;
-(void) handleError:(NSString*) anErrorString forComponent:(AutomatID_OTMLComponent*)aComponent;

@end

