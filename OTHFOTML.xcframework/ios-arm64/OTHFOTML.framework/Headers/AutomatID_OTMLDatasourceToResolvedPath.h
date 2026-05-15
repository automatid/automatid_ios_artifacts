//
//  AutomatID_OTMLDatasourceToResolvedPath.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 07/03/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AutomatID_OTMLDatasource.h"
#import "AutomatID_OTMLResolvedPath.h"

@interface AutomatID_OTMLDatasourceToResolvedPath : NSObject

+(nonnull AutomatID_OTMLResolvedPath*) innerResolvePathSPlitted:(nonnull NSArray*) aPathSplittedByDot
                        searchingInsideRootDatasource:(nullable AutomatID_OTMLDatasource*) aDatasource;

/**
 in realtà preferireri non esporre questo metodo ma vedo che lo stesso è necessario a AutomatID_OTMLDatasourceHelper e DSHelper ha un serio bisogno di refactoring per ridurre la complessità (ha + di 1000 righe)
 */
+(nullable NSArray<AutomatID_OTMLDatasource*>*) protectedResolveDataSourceElementsSplitted:(nonnull NSArray*) splitted
                                                                    inDatasource:(nonnull AutomatID_OTMLDatasource *) aDSInterface
                                                                         start_i:(int)start_i;

+(nullable AutomatID_OTMLDatasource *) getElementForKey:(nullable NSString*) aKey
                                 inDatasource:(nonnull AutomatID_OTMLDatasource *) aDatasourceInterface;

@end
