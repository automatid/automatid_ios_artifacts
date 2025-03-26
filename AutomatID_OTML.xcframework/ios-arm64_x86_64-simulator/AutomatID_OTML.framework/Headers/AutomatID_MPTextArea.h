//
//  AutomatID_MPTextArea.h
//  OTMLFramework
//
//  Created by epavoni on 21/05/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//


#import <AutomatID_OTMLModels/AutomatID_OTMLCoreConstants.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLStatefulComponent.h>

@class AutomatID_OTMLFont;

@interface AutomatID_MPTextArea : UITextView <AutomatID_OTMLStatefulObject,UITextViewDelegate>{
@protected UIEdgeInsets inset;
}

@property (nonatomic, assign) BOOL floatingPlaceholder;

-(void) setPlaceholderFont:(AutomatID_OTMLFont *)_pFont;
-(void) setPlaceholder:(NSString *)placeholder;
-(void) updatePlaceHodlerFrameAnimated;
-(void) setEnabled:(BOOL)enabled;

/**
 HOOK method for customization (see OTMPFLoatingPLaceholderLabel)
 */
-(BOOL) customIsCurrentlyEditing;

@end
