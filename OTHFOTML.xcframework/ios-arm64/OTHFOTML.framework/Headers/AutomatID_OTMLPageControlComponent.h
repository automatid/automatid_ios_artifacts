//
//  OTMLSwitch.h
//  OTML
//
//  Created by Alessandro Ruggeri on 01/10/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLComponent.h"
 
@interface AutomatID_OTMLPageControlComponent : AutomatID_OTMLComponent

/**
 interfaccia usata da page container v2 per manovrare il page control
 **/
@property (nonatomic, assign) NSInteger numberOfPages;
@property (nonatomic, assign) NSInteger currentPage;
@property (nonatomic, weak) AutomatID_OTMLComponent * pager;



@end
