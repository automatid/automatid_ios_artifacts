//
//  OTMLConditionInterface.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 04/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

@class AutomatID_OTMLComponent;

@protocol AutomatID_OTMLConditionInterface <NSCopying>

@property(nonatomic, retain) AutomatID_OTMLComponent* sourceComponent;

-(BOOL)isValid;

@end
