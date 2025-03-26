//
//  OTMLNativeBridgeCommand.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 22/09/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "AutomatID_OTMLActionCommandSet.h"
#import "AutomatID_OTMLActionCommandWithTriggerResult.h"


@interface AutomatID_OTMLNativeBridgeCommand : AutomatID_OTMLActionCommandSet
@end

@interface AutomatID_OTMLOpenGalleryCommand : AutomatID_OTMLActionCommandWithTriggerResult <UIImagePickerControllerDelegate,UINavigationControllerDelegate>
-(void)openNativeViewController;
-(void)triggerOK;
-(void)triggerKO;
-(void)triggerUserAbort;
@end

