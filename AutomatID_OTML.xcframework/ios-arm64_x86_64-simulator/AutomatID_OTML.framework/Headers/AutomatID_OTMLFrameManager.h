//
//  AutomatID_OTMLFrameManager.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 14/11/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AutomatID_OTMLImage.h"
#import "AutomatID_OTMLPadding.h"

#import <AutomatID_OTMLModels/AutomatID_OTMPColor.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLComponentModel.h>

@class AutomatID_OTMLComponentBackgroundView;

@interface AutomatID_OTMLFrameManager : NSObject<NSCopying>

-(id) initWithModel:(AutomatID_OTMLComponentModel*) aModel;

/**
 *  @returns YES iff padding should be updated (ask it's new value with property: padding).
 */
-(BOOL) handlePaddingUpdateWithParams:(AutomatID_OTMLComponentModel*) aDictionary;
-(void) updateBgColorsWithModel:(AutomatID_OTMLComponentModel*) aModel;
-(void) updateBgImagesFromFormerParamWithModel:(AutomatID_OTMLComponentModel*) aModel;

extern NSInteger const cAutomatID_MAX_OTML_VIEW_SIZE;

-(AutomatID_OTMLComponentBackgroundView*) newBackGroundViewWithFRame:(CGRect) aFrame;

@property (nonatomic, strong) AutomatID_OTMLImage* imageNormal;
@property (nonatomic, strong) AutomatID_OTMLImage* imagePressed;
@property (nonatomic, strong) AutomatID_OTMLImage* imageSelected;
@property (nonatomic, strong) AutomatID_OTMLImage* imageDisabled;
@property (nonatomic, strong) AutomatID_OTMLImage* imageSelectedAndDisabled;
@property (nonatomic, strong) AutomatID_OTMLImage* imagePressedAndSelected;

@property (nonatomic, strong) AutomatID_OTMPColor* colorNormal;
@property (nonatomic, strong) AutomatID_OTMPColor* colorPressed;
@property (nonatomic, strong) AutomatID_OTMPColor* colorSelected;
@property (nonatomic, strong) AutomatID_OTMPColor* colorDisabled;
@property (nonatomic, strong) AutomatID_OTMPColor* colorSelectedAndDisabled;
@property (nonatomic, strong) AutomatID_OTMPColor* colorPressedAndSelected;
@property (nonatomic, readonly) BOOL isPaddingFromBGImage;


@property (nonatomic, strong) AutomatID_OTMLImage* imageNormalError;
@property (nonatomic, strong) AutomatID_OTMLImage* imagePressedError;
@property (nonatomic, strong) AutomatID_OTMLImage* imageSelectedError;
@property (nonatomic, strong) AutomatID_OTMLImage* imagePressedAndSelectedError;

@property (nonatomic, strong) AutomatID_OTMPColor* colorNormalError;
@property (nonatomic, strong) AutomatID_OTMPColor* colorPressedError;
@property (nonatomic, strong) AutomatID_OTMPColor* colorSelectedError;
@property (nonatomic, strong) AutomatID_OTMPColor* colorPressedAndSelectedError;


@property(nonatomic, strong) AutomatID_OTMLPadding* padding;

@end
