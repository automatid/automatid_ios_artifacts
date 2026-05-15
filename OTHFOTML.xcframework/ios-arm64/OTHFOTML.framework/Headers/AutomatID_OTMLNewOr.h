//
//  AutomatID_OTMLNewOr.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 04/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLEvaluable.h"

@class OTMLOrModel;


@interface AutomatID_OTMLNewOr : AutomatID_OTMLEvaluable{
@private NSArray * subevaluables;
}

-(id) initWithModel:(OTMLOrModel*) aModel;

@end
