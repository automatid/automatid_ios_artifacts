//
//  OTMLNewAdd.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 04/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLEvaluable.h"

@class OTMLAndModel;

@interface AutomatID_OTMLNewAnd : AutomatID_OTMLEvaluable{
@private NSArray * subevaluables;
}

-(id) initWithModel:(OTMLAndModel*) aModel;


@end
