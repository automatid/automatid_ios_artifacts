//
//  AutomatID_OTMLEngineConfigurator.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 14/11/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLEngineBeanModel.h"
#import "AutomatID_OTMLStringsModel.h"
#import "AutomatID_OTMLEngineFactoryModel.h"
#import "AutomatID_OTMLEngineConfiguration.h"

typedef enum {
    OTMLDeviceType_Phone = 0,
    OTMLDeviceType_Tablet = 1
} OTMLDeviceType;

@protocol AutomatID_OTMLEngineConfiguratorProvider <NSObject>

-(void)willProcessConfiguratorProvider;

-(void)step1_setupModules;

-(void)step2_configureFactory:(AutomatID_OTMLEngineFactoryModel* _Nonnull)aFactoryModel;
-(void)step3_configureBean:(AutomatID_OTMLEngineBeanModel* _Nonnull)aBeanModel;
-(void)step4_configureStrings:(AutomatID_OTMLStringsModel* _Nonnull)aStringsModel;

-(void)step5_configureLibs;

-(void)didProcessConfiguratorProvider;

@end

@interface AutomatID_SimpleEngineConfiguratoinProvider : NSObject<AutomatID_OTMLEngineConfiguratorProvider>
@end

@interface AutomatID_OTMLEngineConfigurator : NSObject

@property (nonnull, nonatomic, strong) AutomatID_OTMLEngineConfiguration * currentConfiguration;


@property (nonatomic, assign) BOOL isAntitamperingReady;
@property (nonatomic, assign) BOOL isTraceReady;
@property (nonatomic, assign) BOOL isFactoryReady;
@property (nonatomic, assign) BOOL isFontReady;
@property (nonatomic, assign) BOOL isBeanReady;
@property (nonatomic, assign) BOOL isStringsReady;
@property (nonatomic, assign) BOOL isAddonReady;

+ (nonnull AutomatID_OTMLEngineConfigurator*)getInstance;
- (OTMLDeviceType) currentOTMLDeviceType;
- (void)addConfiguratorProvider:(NSObject<AutomatID_OTMLEngineConfiguratorProvider>* _Nonnull)aProvider;


- (void)doConfigureOTMLEngine;
- (void)doConfigureOTMLEngineWithProvider:(NSObject<AutomatID_OTMLEngineConfiguratorProvider>* _Nonnull)aProvider;

@end
