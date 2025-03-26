//
//  NSDictionary+AutomatID_DatasourceValuesByPlatforms.h
//  OTML
//
//  Created by Silvio D'Angelo on 17/09/2018.
//

#import <Foundation/Foundation.h>

@class AutomatID_OTMLDatasource;

@interface NSDictionary (AutomatID_DatasourceValuesByPlatforms)

+(nonnull NSDictionary<NSString*,AutomatID_OTMLDatasource*>*) dictionaryFromDS:(nonnull AutomatID_OTMLDatasource*) aDS
                                  withKeysHavingNoPrefixOrByPriority:(nonnull NSArray<NSString*>*) platforms;

@end
