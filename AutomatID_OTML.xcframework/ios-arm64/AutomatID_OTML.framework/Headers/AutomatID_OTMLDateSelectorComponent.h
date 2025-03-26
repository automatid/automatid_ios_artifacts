//
//  OTMLDateSelector
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 20/09/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLComponent.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLFont.h>
#import "AutomatID_OTMPDatePicker.h"
#import "AutomatID_OTMLTextFieldComponent.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLDateSelectorModel.h>

@interface AutomatID_OTMLDateSelectorComponent : AutomatID_OTMLTextFieldComponent <NSCopying, AutomatID_OTMPDatePickerValueChangeDelegate>
@end
