//
//  OTMLWebView.h
//  OTML
//
//  Created by epavoni on 20/09/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

#import "AutomatID_OTMLComponent.h"
#import "AutomatID_OTMPWebView.h"

@interface AutomatID_OTMLWebViewComponent : AutomatID_OTMLComponent<AutomatID_OTMPWebViewDelegate>{
@protected
    AutomatID_OTMPWebView* contentWebView;
}

-(void) loadContent;
-(BOOL) isJSBridgeEnabled;

@end
