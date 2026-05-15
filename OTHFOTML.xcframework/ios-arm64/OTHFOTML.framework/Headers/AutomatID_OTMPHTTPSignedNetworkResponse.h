//
//  AutomatID_OTMPHTTPSignedNetworkResponse.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 21/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "AutomatID_OTHTTPResponse.h"

@interface AutomatID_OTMPHTTPSignedNetworkResponse : AutomatID_OTHTTPResponse

@property (nonatomic, assign) int nonce;

-(BOOL)checkSign;
-(NSString*)getSign;

@end
