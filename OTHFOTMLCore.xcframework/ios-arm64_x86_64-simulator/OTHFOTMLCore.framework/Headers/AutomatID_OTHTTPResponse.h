//
//  OTMPHTTPNetworkResponse.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 21/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//


@interface AutomatID_OTHTTPResponse : NSObject

- (instancetype) initWithOTResponse:(AutomatID_OTHTTPResponse*) response;

@property (nonatomic, strong) NSData * bodyResponse;
@property (nonatomic, assign) NSInteger statusCode;
@property (nonatomic, strong) NSDictionary * headersResponse;
@property (nonatomic, strong) NSArray<NSHTTPCookie *> * cookiesResponse;

@end
