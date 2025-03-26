//
//  OTMLButtonContainer.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 19/02/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLLinearContainer.h"
#import "AutomatID_OTMPReactiveViewAgglomeration.h"
#import "AutomatID_OTMLLongPressManager.h"
#import "AutomatID_OTMLVoiceoverDTO.h"


@interface AutomatID_OTMLButtonContainer : AutomatID_OTMLLinearContainer<AutomatID_OTMPReactiveViewAgglomeration, AutomatID_OTMLLongPressDelegate, OTMLAccessibleComponent>

@end
