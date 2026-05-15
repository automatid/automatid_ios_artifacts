//
//  AutomatID_OTMLCustomPopupFactory.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 15/02/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

@class AutomatID_OTMLEntry;
#import "AutomatID_OTMLAbstractPopupViewController.h"


@protocol AutomatID_OTMLCustomPopupFactory <NSObject>

-(AutomatID_OTMLAbstractPopupViewController*) popupWithType:(NSString*)currentlyIgnored
                                            Entry:(AutomatID_OTMLEntry*) aEntry
                                andWithParameters:(NSDictionary*) aParameterMap
                                     andWithFrame:(CGRect)aFrame;
@end
