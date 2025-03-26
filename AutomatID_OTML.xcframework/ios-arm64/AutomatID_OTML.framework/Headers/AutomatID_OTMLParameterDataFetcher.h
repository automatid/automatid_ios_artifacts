//
//  AutomatID_OTMLParameterDataFetcher.h
//  Pods
//
//  Created by Silvio D'Angelo on 25/03/2020.
//

#import <Foundation/Foundation.h>
@class AutomatID_OTMLDatasource;
@class AutomatID_OTMLComponent;

NS_ASSUME_NONNULL_BEGIN

@protocol AutomatID_OTMLParameterDataFetcher <NSObject>

-(nullable AutomatID_OTMLDatasource*) getDatasourceWithID:(nonnull NSString*) aDatasourceID;
-(nullable AutomatID_OTMLComponent*) findComponentByID:(nonnull NSString*) aComponentID;
-(nullable NSString*) findPushedParamValueFromKey:(nonnull NSString*) aParametherName;

@end

NS_ASSUME_NONNULL_END
