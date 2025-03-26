//
//  OTMLEvaluable.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 04/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLConditionInterface.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLConditionsConstants.h>

@class AutomatID_OTMLEvaluableModel;

@interface AutomatID_OTMLEvaluable : NSObject<AutomatID_OTMLConditionInterface>

-(id) initWithModel:(AutomatID_OTMLEvaluableModel*) aModel;
-(NSDictionary*) toDictionaryDescription;
-(NSString*) conditionResolutionDescription:(BOOL)onValid;

@end
