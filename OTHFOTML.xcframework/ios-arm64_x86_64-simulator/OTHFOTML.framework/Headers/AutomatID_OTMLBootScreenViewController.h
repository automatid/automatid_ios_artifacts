//
//  BootScreenViewController.h
//  OTML
//
//  Created by epavoni on 09/10/12.
//  Copyright 2012 Opentech ENG. All rights reserved.
//


@class AutomatID_OTMLUpdaterDelegate_SyncImpl;

@interface AutomatID_OTMLBootScreenViewController : UIViewController

@property (nonatomic, strong) AutomatID_OTMLUpdaterDelegate_SyncImpl* otmlUpdaterDelegate;
@property (nonatomic, assign) BOOL showOTMLUpdateOnlyIfUpdating;
@property BOOL putScreenshootWithCurrentOrientation;

@end
