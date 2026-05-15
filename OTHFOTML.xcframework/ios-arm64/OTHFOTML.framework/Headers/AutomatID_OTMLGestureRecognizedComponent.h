//
//  OTMLGestureRecognizedComponent.h
//  OTMLFramework
//
//  Created by Alessandro Ruggeri on 02/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//
@class AutomatID_OTMLComponent;

@interface AutomatID_OTMLGestureRecognizedComponent : UIGestureRecognizer <UIGestureRecognizerDelegate>

@property(nonatomic,readwrite) UIGestureRecognizerState state;

-(void)lockMoving:(BOOL)lock;
-(void)setSubComponentdraggable:(AutomatID_OTMLComponent*) aComponent;
-(void)setMovementX:(BOOL)xMov movementY:(BOOL)yMov;

@end
