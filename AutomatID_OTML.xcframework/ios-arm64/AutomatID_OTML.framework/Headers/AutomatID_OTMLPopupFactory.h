//
//  AutomatID_OTMLPopupFactory.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 15/02/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLAbstractPopupViewController.h"
#import "AutomatID_OTMLCustomPopupFactory.h"

@interface AutomatID_OTMLPopupFactory : NSObject

+(AutomatID_OTMLAbstractPopupViewController*) popupWithType:(NSString*)currentlyIgnored
                                            Entry:(AutomatID_OTMLEntry*) aEntry
                                andWithParameters:(NSDictionary*) aParameterMap
                                     andWithFrame:(CGRect)aFrame;

+(void) setupCustomPopupFactory:(NSObject<AutomatID_OTMLCustomPopupFactory>*) aOTMLCustomComponentFactory;
+(void) setupCustomPopupFactories:(NSArray*) aOTMLCustomComponentFactoryArray;


@end
