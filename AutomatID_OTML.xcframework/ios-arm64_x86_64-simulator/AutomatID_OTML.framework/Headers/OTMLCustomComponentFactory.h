//
//  OTMLCustomComponentFactory.h
//  OTML
//
//  Created by epavoni on 28/08/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

#import "AutomatID_OTMLComponent.h"

@protocol OTMLCustomComponentFactory <NSObject>

-(AutomatID_OTMLComponent*) componentWithModel:(AutomatID_OTMLComponentModel*) aModel;


@end
