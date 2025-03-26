//
//  OTMLNewNot.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 04/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLEvaluable.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLNotModel.h>


@interface AutomatID_OTMLNewNot : AutomatID_OTMLEvaluable{
@private AutomatID_OTMLEvaluable * subevaluable;
}

-(id) initWithModel:(AutomatID_OTMLNotModel*) aModel;

@end
