//
//  OTMLUpdateLoadingViewAnimatedProgressBar.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 13/08/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "AutomatID_OTMLUpdateLoadingAbstractView.h"

@interface AutomatID_OTMLUpdateLoadingViewAnimatedProgressBar : UIView <AutomatID_OTMLUpdateLoadingAbstractView>
@property (nonatomic, assign) BOOL showOTMLUpdateOnlyIfUpdating;
@property (nonatomic, assign) CGFloat showTimerInSeconds;
@end
