//
//  AutomatID_OTMLExternalEVentManagerExtensionSide.h
//  Bolts
//
//  Created by Silvio D'Angelo on 14/10/2019.
//

#import <Foundation/Foundation.h>

@protocol AutomatID_OTMLEngineConfiguratorProvider;

NS_ASSUME_NONNULL_BEGIN

@interface AutomatID_OTMLExtensionSideConfiguration : NSObject

+ (void) configureOTMLWith:(id<AutomatID_OTMLEngineConfiguratorProvider>) provider;

@end

@interface AutomatID_OTMLExternalEVentManagerExtensionSide : NSObject

-(instancetype) initWithOTMLConfiguratorProvider:(id<AutomatID_OTMLEngineConfiguratorProvider>) provider;

-(void) savePushNotficationUserInfo:(NSDictionary*) userInfo;
-(void) markAsRemovedPushNotficationUserInfo:(NSDictionary*) userInfo
                withUserActionWithIdentifier:(NSString*) aActionIdentifier;

@end

NS_ASSUME_NONNULL_END
