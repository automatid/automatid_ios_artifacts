//
//  AutomatID_OTMPDefaultWaitView.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 19/09/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//


#import "OTMPAbstractWaitView.h"

@interface AutomatID_OTMPDefaultWaitView : UIView <OTMPAbstractWaitView>

-(void)setLottieAnimation:(NSDictionary*)aLottieJsonAnimation;
-(void)setdefaultAnimation;
@end
