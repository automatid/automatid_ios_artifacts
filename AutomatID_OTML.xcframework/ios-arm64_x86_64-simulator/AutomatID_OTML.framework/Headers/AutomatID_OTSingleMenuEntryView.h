//
//  OTSingleMenuEntryView.h
//  com.opentech.toyprojects.accordion
//
//  Created by Silvio D'Angelo on 03/04/2018.
//  Copyright © 2018 Opentech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AutomatID_OTMenuEntryModelObject.h"
#import "AutomatID_OTMenuEntryModelStyle.h"

@interface AutomatID_OTSingleMenuEntryView : UIControl

@property(strong) AutomatID_OTMenuEntryModelObject* model;
@property(strong) AutomatID_OTMenuEntryModelStyle* style;

@end
