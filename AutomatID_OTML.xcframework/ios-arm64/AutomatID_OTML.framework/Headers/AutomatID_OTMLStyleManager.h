//
//  AutomatID_OTMLStyleManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 28/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import <AutomatID_OTMLModels/AutomatID_AbstractComponentFactory.h>
@class AutomatID_OTMLComponentModel;

@interface AutomatID_OTMLStyleManager : NSObject<AutomatID_AbstractComponentFactory>

+(AutomatID_OTMLStyleManager*)getInstance;
+(void)resetInstance;

@end
