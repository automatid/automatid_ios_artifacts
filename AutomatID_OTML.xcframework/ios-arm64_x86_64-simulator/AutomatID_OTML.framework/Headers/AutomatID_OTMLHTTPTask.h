//
//  AutomatID_OTMLHTTPTask.h
//  OTML
//
//  Created by Cristiano Calicchia on 20/05/21.
//

#import <Foundation/Foundation.h>
#import "AutomatID_OTHTTPTask.h"
#import "AutomatID_OTMLNetworkResponse.h"
#import "AutomatID_OTMPNetworkTaskErrorFactory.h"

#define HEADER_PACKAGE_PREFIX @"X-OTSC-BUNDLE"

NS_ASSUME_NONNULL_BEGIN

@interface AutomatID_OTMLHTTPTask  : AutomatID_OTHTTPTask<AutomatID_OTHTTPResponse*>

-(void)repackageBundleHeaders:(NSMutableDictionary<NSString*, NSString*>*)aHeaders;

@end

NS_ASSUME_NONNULL_END
