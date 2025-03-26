//
//  OTMPTouchIDManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 09/06/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//


#import <WatchConnectivity/WatchConnectivity.h>

API_AVAILABLE(ios(9.3))
@interface AutomatID_WCSessionStubDelegate : NSObject <WCSessionDelegate>

@property (nonatomic, assign) WCSessionActivationState sessionState;
@end

@interface AutomatID_OTMPWatchUtil : NSObject
-(BOOL)hasWatchPaired;
+(AutomatID_OTMPWatchUtil*)getInstance;
@end

