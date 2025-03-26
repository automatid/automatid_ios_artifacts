//
//  AutomatID_OTMLReceiverAnchorDelegate.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 22/02/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <AutomatID_OTMLModels/AutomatID_OTMLAnchors.h>

@protocol AutomatID_OTMLReceiverAnchorDelegate <NSObject>

-(int)customAnchorMinOffset;
-(int)customAnchorOffset;
-(double) componentCurrentResponderHeightAdjustment; // questo metodo è stato introdotto per risolvere: https://jiraopentech.atlassian.net/browse/ID-113
-(AutomatID_OTMLAnchors)customAnchorType;
-(CGRect)keyboardFrame;

/**
 default implementation returns YES. Return no to disable the "slide to keep visible" behaviour
 */
-(BOOL) shouldActAsANativeReceiver;

@end
