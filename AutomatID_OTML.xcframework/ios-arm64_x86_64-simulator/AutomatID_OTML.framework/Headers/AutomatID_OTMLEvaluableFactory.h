//
//  OTMLEvaluableFactory.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 04/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLEvaluable.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLEvaluableModel.h>

@interface AutomatID_OTMLEvaluableFactory : NSObject

+(AutomatID_OTMLEvaluable *)evaluableWithModel:(AutomatID_OTMLEvaluableModel*)aModel;

@end
