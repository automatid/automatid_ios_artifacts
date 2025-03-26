//
//  OTMLLinearContainer.h
//  OTML
//
//  Created by enrico on 30/05/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

#import "AutomatID_OTMLContainer.h"
#import "AutomatID_OTMLGestureRecognizedComponent.h"
@protocol OTMLAccessibleComponent;

@interface AutomatID_OTMLLinearContainer : AutomatID_OTMLContainer {
@protected
    AutomatID_OTMLOrientations orientation;
    BOOL clipWithBgImageAlpha;
    NSString * rounding;
    CGFloat noiseAlpha;
    NSString * noisePattern;
    BOOL animationDisabled;
    BOOL animationDisabledSetted;
    BOOL stopAnimationReload;
    CGPoint startPosition;
    CGPoint endPosition;
}


-(BOOL)isAnimationDisabled;
-(UIView *)newContentViewWithFrame:(CGRect) aFRame;
-(UIView*) forceView;

-(void)animateVerticalExpansion:(double)duration;
-(void)animateVerticalCollapse:(double)duration;
-(void)animateHorizontalExpansion:(double)duration;
-(void)animateHorizontalCollapse:(double)duration;

@end
