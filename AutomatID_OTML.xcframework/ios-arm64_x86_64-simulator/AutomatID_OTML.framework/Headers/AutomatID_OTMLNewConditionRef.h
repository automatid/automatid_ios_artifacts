//
//  AutomatID_OTMLNewConditionRef.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 04/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLEvaluable.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLConditionRefModel.h>


@interface AutomatID_OTMLNewConditionRef : AutomatID_OTMLEvaluable{
@private NSString * refId;
}

-(id) initWithModel:(AutomatID_OTMLConditionRefModel*) aModel;

@end
