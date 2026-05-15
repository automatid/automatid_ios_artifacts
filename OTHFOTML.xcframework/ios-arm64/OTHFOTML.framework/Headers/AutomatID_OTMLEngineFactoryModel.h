//
//  OTMPFactoriesDataBean.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 19/12/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLCustomPopupFactory.h"

@protocol AutomatID_OTMLCustomActionResolver;
@protocol AutomatID_OTMLPushNotificationDisplayerProtocol;
@protocol AutomatID_OTMLHeaderNotificationDelegate;
@protocol AutomatID_OTMLCustomComponentFactory;
@protocol AutomatID_OTMLCustomPopupFactory;
@protocol AutomatID_ComponentFactoryInterface;



@interface AutomatID_OTMLEngineFactoryModel : NSObject

@property (nonatomic, strong, readonly) NSMutableArray* customActionResolvers;
@property (nonatomic, strong, readonly) NSMutableArray* customNotificationHandlers;
@property (nonatomic, strong, readonly) NSMutableArray* customComponentFactories;
@property (nonatomic, strong, readonly) NSMutableArray* customComponentModelFactories;

@property (nonatomic, strong) id<AutomatID_OTMLCustomPopupFactory> customPopupFactory;


-(void)addComponentModelFactory:(NSObject<AutomatID_ComponentFactoryInterface>*)aComponentModelFactory;
-(void)addActionResolver:(NSObject<AutomatID_OTMLCustomActionResolver>*)aResolver;
-(void)addNotificationHandler:(NSObject <AutomatID_OTMLPushNotificationDisplayerProtocol, AutomatID_OTMLHeaderNotificationDelegate>*)aNotificationHandler;
-(void)addComponentFactory:(NSObject<AutomatID_OTMLCustomComponentFactory>*)aComponentFactory;
-(void)setPopupFactory:(NSObject<AutomatID_OTMLCustomPopupFactory>*)aPopupFactory;


@end
