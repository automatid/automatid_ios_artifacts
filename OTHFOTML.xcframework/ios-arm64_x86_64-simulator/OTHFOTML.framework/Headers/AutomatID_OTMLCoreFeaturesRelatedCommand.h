//
//  OTMLCoreFeaturesRelatedCommand.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 26/11/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLActionCommandSet.h"
@interface AutomatID_DoRevalidateHeader : AutomatID_OTMLActionCommand
@end

@interface AutomatID_ShowHeaderTextfieldMode : AutomatID_OTMLActionCommand
@end

@interface AutomatID_HideHeaderTextfieldMode : AutomatID_OTMLActionCommand
@end


NS_ASSUME_NONNULL_BEGIN
@interface AutomatID_NotifyEventWithCallbackCommand : AutomatID_OTMLActionCommand
typedef void (^OTNotifyEventCallback)(NSInteger resultCode, NSDictionary* _Nullable result);

+(void) addObserverWithID:(NSString*) callbackID
             withCallback:(OTNotifyEventCallback) callback;

+(void) consumeCallBackWithID:(NSString*) callbackID
               withResultCode:(NSInteger) resultCode
                    andResult:(nullable NSDictionary*) dictionary;

@end
NS_ASSUME_NONNULL_END


@interface AutomatID_OTMLCoreFeaturesRelatedCommand : AutomatID_OTMLActionCommandSet

@end
