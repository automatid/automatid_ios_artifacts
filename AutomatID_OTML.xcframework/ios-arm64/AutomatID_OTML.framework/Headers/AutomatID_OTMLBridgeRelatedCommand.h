//
//  OTMLBridgeRelatedCommand.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 26/11/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLActionCommandSet.h"

#import <MessageUI/MessageUI.h>
#import <MessageUI/MFMessageComposeViewController.h>

#import <StoreKit/StoreKit.h>

#import "AutomatID_OTMLActionCommandWithTriggerResult.h"

@interface AutomatID_OTMLFacebookPostCommand : AutomatID_OTMLActionCommand
@end

@interface AutomatID_OTMLActionShareCommand : AutomatID_OTMLActionCommand <UIDocumentInteractionControllerDelegate>
@end

@interface AutomatID_OTMLAskPushTokenCommand : AutomatID_OTMLActionCommand

@property (nonatomic, strong) NSString* firebaseSenderIdentifier;

+(AutomatID_OTMLAskPushTokenCommand*)getInstance;
-(void)triggerPushTokenDidCompletedSuccessfullyWithToken:(NSString*)aToken;
-(void)triggerPushTokenDidCompletedWithError;

@end

@interface AutomatID_OTMLMailToCommand : AutomatID_OTMLActionCommand <MFMailComposeViewControllerDelegate>
@end

@interface AutomatID_OTMLDriveToCommand : AutomatID_OTMLActionCommand
@end

@interface AutomatID_OTMLPrintCommand : AutomatID_OTMLActionCommand
@end

@interface AutomatID_OTMLMakeAToastCommand : AutomatID_OTMLActionCommand
@end

@interface AutomatID_OTMLOpenSkipeCommand : AutomatID_OTMLActionCommand
@end

@interface AutomatID_OTMLOpenBrowserCommand : AutomatID_OTMLActionCommand
@end

@interface AutomatID_OTMLOpenAppCommand : AutomatID_OTMLActionCommandWithTriggerResult <SKStoreProductViewControllerDelegate>
@end

@interface AutomatID_OTMLPhoneCallCommand : AutomatID_OTMLActionCommand
@end

@interface AutomatID_OTMLSetLocaleCommand : AutomatID_OTMLActionCommand
@end

@interface AutomatID_OTMLSMSToCommand : AutomatID_OTMLActionCommand <MFMessageComposeViewControllerDelegate>
@end

@interface AutomatID_OTMLChangeBrightnessToCommand : AutomatID_OTMLActionCommand
@end

@interface AutomatID_OTMLAppReadyCommand : AutomatID_OTMLActionCommand
@end

@interface AutomatID_OTMLMailCommand : AutomatID_OTMLActionCommand
@end

@interface AutomatID_DoShowLoading : AutomatID_OTMLActionCommand
@end

@interface AutomatID_DoSetBadgeCount : AutomatID_OTMLActionCommand
@end

@interface AutomatID_PasteboardCopyCommand : AutomatID_OTMLActionCommand
@end

@interface AutomatID_OTMLActionCookieResetCommand : AutomatID_OTMLActionCommandWithTriggerResult
@end

@interface AutomatID_OTMLPhonebookLoadCommand : AutomatID_OTMLActionCommand
@end

@interface AutomatID_OTMLBridgeRelatedCommand : AutomatID_OTMLActionCommandSet
@end
