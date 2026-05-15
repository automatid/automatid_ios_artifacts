//
//  OTMLCollapsableEventDelegate.h
//  ING
//
//  Created by epavoni on 24/10/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//



@class AutomatID_OTMLComponent;

@protocol AutomatID_OTMLCollapsableEventDelegate <NSObject>

-(void) otmlCollapsableItem:(AutomatID_OTMLComponent*) aComponent collapseStatusChangedIsNowOpen:(BOOL)isOpen;

@end
