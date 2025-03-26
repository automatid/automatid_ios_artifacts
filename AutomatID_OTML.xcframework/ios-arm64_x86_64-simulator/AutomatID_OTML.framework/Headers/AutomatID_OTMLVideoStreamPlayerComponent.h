//
//  OTMLVideoStreamPlayer.h
//  StitchedStreamPlayer
//
//  Created by Silvio D'Angelo on 31/10/13.
//
//

#import <UIKit/UIKit.h>
#import "AutomatID_OTMLComponent.h"
#import "AutomatID_OTMLVideoStreamPlayerView.h"
#import "AutomatID_OTMPShowHideViewProtocol.h"
#import <AutomatID_OTMLCore/AutomatID_OTMLRestartAppAwareProtocol.h>

@interface AutomatID_OTMLVideoStreamPlayerComponent : AutomatID_OTMLComponent<AutomatID_OTMLVideoStreamPlayerViewDelegate, AutomatID_OTMLRestartAppAwareProtocol>

@end
