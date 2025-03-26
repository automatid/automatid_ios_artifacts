//
//  MPShowSensitiveView.h
//  OTML
//
//  Created by Alessandro Ruggeri on 30/08/11.
//  Copyright 2011 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMPShowHideViewProtocol.h"

@interface AutomatID_OTMPShowHideView : UIView

@property (nonatomic, weak) NSObject<AutomatID_OTMPShowHideViewProtocol>* showDelegate;

@end
