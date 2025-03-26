//
//  AutomatID_OTMLWebViewCookieStorage.h
//  OTML
//
//  Created by Valerio Ferrantelli on 11/03/2019.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
#import <AutomatID_OTMLCore/AutomatID_OTMLRestartAppAwareProtocol.h>


@interface AutomatID_OTMLWebViewCookieStorage : NSObject <AutomatID_OTMLRestartAppAwareProtocol>


@property (nonatomic, strong, readonly) NSMutableArray<NSHTTPCookie*> * sharedExternalCookies;

+(AutomatID_OTMLWebViewCookieStorage*) getInstance;

-(void)addCookieWithURL:(NSString*)aURL andValue:(NSString*)aValue;

-(void)applyCookiesToConfiguration:(WKWebViewConfiguration *)aConf withCompletion:(OTMLVerySimpleCallback)aCallback;
@end

