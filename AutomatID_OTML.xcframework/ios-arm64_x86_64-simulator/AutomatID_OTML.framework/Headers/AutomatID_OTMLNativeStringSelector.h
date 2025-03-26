//
//  OTMLSelectorOnPopupActivatorComponent.h
//  OTML
//
//  Created by Silvio D'Angelo on 19/09/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLComponent.h"
#import "AutomatID_OTMLSelectorDSExpert.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLFont.h>
#import "AutomatID_OTMLReceiverAnchorDelegate.h"
#import "AutomatID_OTMPStringPicker.h"
#import "AutomatID_OTMLTextFieldComponent.h"


@interface AutomatID_OTMLNativeStringSelector : AutomatID_OTMLTextFieldComponent <NSCopying, OTMPStringPickerValueChangeDelegate>

@end
