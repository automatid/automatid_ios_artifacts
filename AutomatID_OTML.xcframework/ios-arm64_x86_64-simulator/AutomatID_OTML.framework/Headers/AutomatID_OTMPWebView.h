//
//  OTMPWebView.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 04/06/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "AutomatID_OTMLViewController.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLNetworkInteractionType.h>
#import <WebKit/WebKit.h>

@class AutomatID_OTMPWebView;

@protocol AutomatID_OTMPWebViewDelegate <NSObject>
- (BOOL) webView:(AutomatID_OTMPWebView*)aWebView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(WKNavigationType)navigationType;
- (void) webViewDidStartLoad:(AutomatID_OTMPWebView*)aWebView;
- (void) webViewDidFinishLoad:(AutomatID_OTMPWebView*)aWebView;
- (void) webView:(AutomatID_OTMPWebView*)aWebView didFailLoadWithError:(NSError *)error;

- (AutomatID_OTMLViewController*) getOtmlViewControllerForJSActionExecution;

@end


@interface AutomatID_OTMPWebView : UIControl <AutomatID_OTMPWebViewDelegate>

@property (nonatomic, weak) NSObject<AutomatID_OTMPWebViewDelegate>* webViewDelegate;
@property (nonatomic, assign) double content_zoom;

- (void) applyContentUrl:(NSString *)aContentUrl
             withMethod:(AutomatID_OTMLNetworkInteractionType)requestMethod;

- (void) applyFileURL:(NSString *) aContentUrl;

- (void) applyContentText:(NSString *)aContentText
             usingBaseURL:(NSURL *)baseURL;

- (void)getWebViewSize;

- (CGFloat) getContentHeight;

- (CGFloat) getContentWidth;

- (NSMutableURLRequest*)getRequestWithContentUrl:(NSString*)aContentUrl
                                       andMethod:(AutomatID_OTMLNetworkInteractionType)requestMethod;

-(BOOL)isReady;

@end

