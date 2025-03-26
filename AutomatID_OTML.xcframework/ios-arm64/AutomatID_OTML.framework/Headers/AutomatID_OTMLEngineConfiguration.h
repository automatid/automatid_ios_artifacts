//
//  AutomatID_OTMLEngineConfiguration.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 14/11/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLStringsModel.h"
#import "AutomatID_OTMLEngineFactoryModel.h"
#import "AutomatID_OTMLEngineBeanModel.h"
#import "AutomatID_OTMLAppExposedHooks.h"

@interface AutomatID_OTMLEngineConfiguration : NSObject

@property (nonatomic, strong) AutomatID_OTMLEngineFactoryModel* factoriesModel;
@property (nonatomic, strong) AutomatID_OTMLStringsModel* stringsModel;
@property (nonatomic, strong) AutomatID_OTMLEngineBeanModel* beanModel;
@property (nonatomic, strong) AutomatID_OTMLAppExposedHooks* hooks;

@end
