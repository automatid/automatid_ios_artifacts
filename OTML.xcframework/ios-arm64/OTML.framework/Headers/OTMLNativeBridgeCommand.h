//
//  OTMLNativeBridgeCommand.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 22/09/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLActionCommandSet.h"
#import "OTMLActionCommandWithTriggerResult.h"


@interface OTMLNativeBridgeCommand : OTMLActionCommandSet
@end



@interface OTMLOpenGalleryCommand : OTMLActionCommandWithTriggerResult <UIImagePickerControllerDelegate,UINavigationControllerDelegate>
-(void)openNativeViewController;
-(void)triggerOK;
-(void)triggerKO;
-(void)triggerUserAbort;
@end

#ifndef EXCLUDE_COCOA_CNCONTACTS
#import <ContactsUI/ContactsUI.h>

@interface OTMLOpenNativePhonebookCommand : OTMLActionCommand <CNContactPickerDelegate>

@end
#else
@interface OTMLOpenNativePhonebookCommand : OTMLActionCommand

@end
#endif

@interface OTMLOpenVideoCommand : OTMLActionCommandWithTriggerResult
-(void)playerViewControllerDidDismiss;
@end

@interface OTMLOpenCameraCommand : OTMLOpenGalleryCommand
@end
@interface OTMLOpenPhonebookCommand : OTMLActionCommand
@end
@interface OTMLOpenEditPhotoCommand : OTMLActionCommandWithTriggerResult
@end

@interface OTMLIsNotificationInNotificationCenterCommand : OTMLActionCommand
@end
@interface OTMLRemoveNotificationFromNotificationCenterCommand : OTMLActionCommand
@end
@interface OTMLRemoveAllNotificationsFromNotificationCenterCommand : OTMLActionCommand
@end
@interface OTMLShowRatingNativePopupCommand : OTMLActionCommand
@end

@interface OTMLPickFileFromSystemCommand : OTMLActionCommandWithTriggerResult
@end
