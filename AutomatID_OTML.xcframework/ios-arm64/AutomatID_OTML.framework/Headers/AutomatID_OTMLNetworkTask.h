//
//  AutomatID_OTMLNetworkTask.h
//  OTML
//
//  Created by Valerio Ferrantelli on 10/05/2019.
//

#import <Foundation/Foundation.h>
#import "AutomatID_OTMLHTTPTask.h"
#import "AutomatID_OTMLNetworkResponse.h"
#import "AutomatID_OTMPNetworkTaskErrorFactory.h"


@interface AutomatID_OTMLNetworkTask : AutomatID_OTMLHTTPTask

@property (nonatomic, retain) NSString* cacheTag;
@property (assign, nonatomic) int requestID;
@property (assign, nonatomic) BOOL isAPrefetchNetworkInteraction;
@property (assign, nonatomic) BOOL isStackStackManagementDisabled;
@property (nonatomic, retain) NSString* originalContextID;
@property (nonatomic, assign) BOOL showWaitView;
@property (nonatomic, retain) NSDictionary* actionParams;

+(long long) getServerTimestampOffset;

+(void) updateServerTimestampOffsetWith:(AutomatID_OTHTTPResponse*)response;

@end

