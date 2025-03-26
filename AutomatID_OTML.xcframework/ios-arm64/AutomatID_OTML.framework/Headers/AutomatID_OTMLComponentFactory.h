//
//  AutomatID_OTMLComponentFactory.h
//  OTML
//
//  Created by enrico on 30/05/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//


#import "AutomatID_OTMLComponent.h"
#import "OTMLCustomComponentFactory.h"


@class AutomatID_OTMLComponentModel;

@interface AutomatID_OTMLComponentFactory : NSObject

+(AutomatID_OTMLComponent*) componentWithModel:(AutomatID_OTMLComponentModel*) aModel;

+(void) setupCustomComponentFactory:(NSObject<OTMLCustomComponentFactory>*) aOTMLCustomComponentFactory;
+(void) setupCustomComponentFactories:(NSArray*) aOTMLCustomComponentFactoryArray;

@end
