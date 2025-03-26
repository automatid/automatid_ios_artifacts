//
//  MPPopupFactory.h
//  OTML
//
//  Created by Alessandro Ruggeri on 24/09/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMPToastFactory.h"
#import <AutomatID_OTMLCore/AutomatID_OTMLRestartAppAwareProtocol.h>

#define otml_AutomatID_OTMPOverlayeredViewsFactory_will_MOUNT_wait_view @"otml_AutomatID_OTMPOverlayeredViewsFactory_will_mount_wait_view"
#define otml_AutomatID_OTMPOverlayeredViewsFactory_will_UNmount_wait_view @"otml_AutomatID_OTMPOverlayeredViewsFactory_will_unmount_wait_view"

typedef enum {
    OTMPOverlayeredLoading_default = 0,
    OTMPOverlayeredLoading_lottie = 1
} AutomatID_OTMPOverlayeredLoading;

@interface AutomatID_OTMPOverlayeredViewsFactory : NSObject <AutomatID_OTMLRestartAppAwareProtocol>

+(AutomatID_OTMPOverlayeredViewsFactory*)getIstance;

-(AutomatID_OTMPOverlayeredLoading) loadingType;

@property (strong, nonatomic, readonly) UIWindow *window;

/**** WAIT ****/
-(void) mountWaitView;
-(void) removeWaitView;
-(BOOL) isTheWaitViewShown;

/**** TOAST ****/
-(void) makeToast:(NSString*)toastText withDuration:(CGFloat) aDuration;


/**** BG LOADING INDICATOR ****/
-(void) startBGActivityIndicator;
-(void) stopBGActivityIndicator;


@end

