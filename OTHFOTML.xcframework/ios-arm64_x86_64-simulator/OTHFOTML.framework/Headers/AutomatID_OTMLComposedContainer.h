//
//  OTMLComposedContainer.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 09/12/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLContainer.h"

@protocol AutomatID_OTMPDraggableGUIDelegate <NSObject>

-(void) draggableGUIHAsBeenDraggedByTouches:(NSSet*) aTouchSet withEvent:(UIEvent*) aEvent;
-(void) draggableReceivedSwitchStateGesture;
-(void) draggableHasBeenReleasedByTouches:(NSSet*) aTouchSet withEvent:(UIEvent*) aEvent;

@end

@interface AutomatID_OTMLComposedContainer : AutomatID_OTMLContainer<AutomatID_OTMPDraggableGUIDelegate>

@end
