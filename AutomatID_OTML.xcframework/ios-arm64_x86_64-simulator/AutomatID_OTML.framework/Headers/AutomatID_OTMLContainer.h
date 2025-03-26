//
//  OTMLContainer.h
//  OTML
//
//  Created by enrico on 11/06/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

#import "AutomatID_OTMLComponent.h"
#import "AutomatID_FramePropagationResponse.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLOrientations.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLPropagateTouch.h>

@interface AutomatID_OTMLContainer : AutomatID_OTMLComponent{
    NSArray * subComponents;
    CGRect lastRefillFrame;
}

@property (nonatomic, assign) BOOL skipUpdateFramesInSubViews;

- (NSArray*) getSubComponents;
- (NSUInteger) subComponentsMax;
- (NSUInteger) subComponentsLimit;


-(void)doResignEveryResponder;
-(AutomatID_OTMLComponent*) findFirstKeyboardAnchoredComponent;

-(void) updateFramesInSubViews;
-(void) componentHasBeenSelected:(AutomatID_OTMLComponent*)aComponent;
-(void) setMainCointainerHiddenWhenEvaluatingCollapsedOnSetFrame:(BOOL)hidden;
- (UIView *)newContentViewWithFrame:(CGRect) aFRame;
/**
 use only if someone other has stripped the container of its child elements and have took the ownership
 **/
- (void)_hardremoveSubComponents;

/**
 EXTENSOIN POINTS,
 */

// implement this method, wich is the primitive for sub_components frame assignation and calculation. See FrameContainer or LinearContainer as a reference
// if you don't override this method, a RunTimeException will raise.
-(AutomatID_FramePropagationResponse*) propagateFrameToSubComponentsWrappingW:(BOOL)wrappingW WrappingH:(BOOL)wrappingH;
-(NSString*)descriptionWithModel:(AutomatID_OTMLComponentModel*)aModel indent:(NSInteger)indent description:(NSString*)aDescr;
+(BOOL)containerWithModel:(AutomatID_OTMLComponentModel*)aModel containComponent:(Class)toContain;

@end
