//
//  OTMLLabel.h
//  OTML
//
//  Created by enrico on 31/05/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//


#import "AutomatID_OTMLComponent.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLFont.h>
#import "AutomatID_OTMPLabel.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLStatefulComponent.h>
#import "AutomatID_OTMPStringSizeAware.h"
#import "AutomatID_OTMLVoiceoverDTO.h"

@interface AutomatID_OTMLLabelComponent : AutomatID_OTMLComponent<AutomatID_OTMLAccessibleComponent>{
@protected
    AutomatID_OTMLFont* otmlFontWrapper;
    NSString* gravityString;
    AutomatID_OTMPStringSizeAware* text;
    NSString* hiddenText;
    NSString* pressed_for_id;
    int numberOfLines;
    AutomatID_OTMPLabel* label;
    BOOL animationDisabled;
    BOOL animationDisabledSetted;
}

-(BOOL)isAnimationDisabled;

// to be used called or overridden only by inherited classes
-(NSString*)getTextForLabel;
-(NSString*)getCleanText;
-(void) setCleanText:(NSString*)string;
-(NSString*)getTextFromCleanText;
-(void)updateSizeAwareText:(BOOL)forced;
-(UIColor*)getBlinkColor;


@end
