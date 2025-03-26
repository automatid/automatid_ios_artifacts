//
//  ScreenViewController.h
//
//  Created by epavoni on 08/05/13.
//  Copyright (c) 2013 Opentech. All rights reserved.
//


@class AutomatID_OTMLMainViewController;
@class AutomatID_OTMLContextContainerViewController;


@interface AutomatID_OTMLScreenViewController : UIViewController

-(nonnull instancetype)initWithContextController:(nonnull AutomatID_OTMLContextContainerViewController*)aController;

-(void) hideScreenViewWithViewController:(nonnull UIViewController*) aVC;
-(void) hideScreenView;
-(void) showScreenView;
@end
