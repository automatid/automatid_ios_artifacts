//
//  AutomatID_OTMLNewCondition.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 04/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLConditionInterface.h"

@class AutomatID_OTMLConditionModel;
@class AutomatID_OTMLEvaluable;
@class AutomatID_OTMLComponent;


@interface AutomatID_OTMLNewCondition : NSObject<AutomatID_OTMLConditionInterface>{

}
@property (nonatomic, strong) AutomatID_OTMLComponent * sourceComponent;
@property (nonatomic, strong) NSString * idCondition;
@property (nonatomic, strong) AutomatID_OTMLEvaluable * rootEvaluable;

-(id) initWithModel:(AutomatID_OTMLConditionModel*) aModel;
-(NSDictionary*) toDictionaryDescription;
-(NSString *)conditionResolutionDescription:(BOOL)onValid;

@end
