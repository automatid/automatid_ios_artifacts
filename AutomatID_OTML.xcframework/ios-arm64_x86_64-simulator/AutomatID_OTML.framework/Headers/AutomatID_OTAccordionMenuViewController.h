//
//  ViewController.h
//  com.opentech.toyprojects.accordion
//
//  Created by Silvio D'Angelo on 28/03/2018.
//  Copyright © 2018 Opentech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AutomatID_OTMenuDelegate.h"

@interface AutomatID_OTAccordionMenuViewController : UIViewController<UIScrollViewDelegate>

@property(weak) id<AutomatID_OTMenuDelegate> menuDelegate;
-(void) updateMenuContent;
-(void) setupWithFrame:(CGRect) aFrame;
-(void) selectMenuEntryAtIndexOne:(NSInteger) index1 andIndexTwo:(NSInteger) index2;

@end
