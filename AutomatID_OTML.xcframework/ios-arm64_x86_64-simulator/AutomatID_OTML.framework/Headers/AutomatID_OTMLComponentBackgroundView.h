//
//  OTMLComponentState.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 05/11/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLStatefulComponent.h>
#import <AutomatID_OTMLModels/AutomatID_OTMPColor.h>
#import "AutomatID_OTMLImage.h"

@class AutomatID_OTMLFrameManager;

@interface AutomatID_OTMLComponentBackgroundView : UIImageView <AutomatID_OTMLStatefulObject>

-(id) initWithModel:(AutomatID_OTMLFrameManager*) aModel
           andFrame:(CGRect) aFrame;

-(void) updateForModelChanges;

@property (nonatomic, assign) CGFloat cornerRadius;

@end
