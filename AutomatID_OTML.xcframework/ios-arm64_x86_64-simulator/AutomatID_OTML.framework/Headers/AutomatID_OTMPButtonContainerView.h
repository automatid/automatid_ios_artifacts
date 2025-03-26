//
//  AutomatID_OTMPButtonContainerView.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 07/06/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLComponentBackgroundView.h"
#import "AutomatID_OTMPReactiveViewAgglomeration.h"

@interface AutomatID_OTMPButtonContainerView : AutomatID_OTMLComponentBackgroundView

-(id) initWithModel:(AutomatID_OTMLFrameManager *) aModel
           andFrame:(CGRect) aFrame
andReactionDelegate:(NSObject<AutomatID_OTMPReactiveViewAgglomeration>*) theDelegate;


@end
