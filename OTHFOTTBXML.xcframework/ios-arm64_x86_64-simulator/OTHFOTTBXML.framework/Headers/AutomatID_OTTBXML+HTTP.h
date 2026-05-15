//
//  OTTBXML+HTTP.h
//
//  Created by Tom Bradley on 29/01/2011.
//  Copyright 2012 71Squared All rights reserved.
//

#import "AutomatID_OTTBXML.h"

typedef void (^OTTBXMLAsyncRequestSuccessBlock)(NSData *,NSURLResponse *);
typedef void (^OTTBXMLAsyncRequestFailureBlock)(NSData *,NSError *);

@interface NSMutableURLRequest (OTTBXML_HTTP)

+ (NSMutableURLRequest*) OTTBXMLGetRequestWithURL:(NSURL*)url;
+ (NSMutableURLRequest*) OTTBXMLPostRequestWithURL:(NSURL*)url parameters:(NSDictionary*)parameters;

@end


@interface NSURLConnection (OTTBXML_HTTP)

+ (void)OTTBXMLAsyncRequest:(NSURLRequest *)request success:(OTTBXMLAsyncRequestSuccessBlock)successBlock failure:(OTTBXMLAsyncRequestFailureBlock)failureBlock;

@end


@interface AutomatID_OTTBXML (OTTBXML_HTTP)

+ (id)OTTBXMLWithURL:(NSURL*)aURL success:(OTTBXMLSuccessBlock)successBlock failure:(OTTBXMLFailureBlock)failureBlock;
- (id)initWithURL:(NSURL*)aURL success:(OTTBXMLSuccessBlock)successBlock failure:(OTTBXMLFailureBlock)failureBlock;

@end


