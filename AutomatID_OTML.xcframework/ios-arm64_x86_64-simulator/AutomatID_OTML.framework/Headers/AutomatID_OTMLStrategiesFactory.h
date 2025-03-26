//
//  AutomatID_OTMLStrategiesFactory.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 15/02/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLContentHandlingStrategyDelegate.h"

@interface AutomatID_OTMLStrategiesFactory : NSObject

+(id<AutomatID_OTMLContentHandlingStrategyDelegate>) contentHandlingStrategyWithName:(NSString*)aStrategyName
                                           initializedWithREquirer:(id) aComponentInstance;

@end
