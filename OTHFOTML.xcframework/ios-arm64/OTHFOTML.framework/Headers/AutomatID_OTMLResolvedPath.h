//
//  AutomatID_OTMLResolvedPath.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 07/03/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AutomatID_OTMLDatasource.h"

/**
 
 Questa classe è usata come un DTO per raccogliere informazioni utili in fase di risoluzione di un DatasourcePath.
 
 */
@interface AutomatID_OTMLResolvedPath : NSObject

- (instancetype)initWithResolved:(BOOL)aResolved
                            root:(AutomatID_OTMLDatasource*)aDSRoot
                          result:(NSArray<AutomatID_OTMLDatasource*>*) aResult
                        fromFile:(BOOL)aFromFile;

+(AutomatID_OTMLResolvedPath *)newFailureResolution;
+(BOOL) isFailureResolution:(AutomatID_OTMLResolvedPath*)path;

@property(nonatomic, readonly) AutomatID_OTMLDatasource* rootElement;
@property(nonatomic, readonly) NSArray<AutomatID_OTMLDatasource*>* result;
@property(nonatomic, readonly) BOOL resolved;
@property(nonatomic, readonly) BOOL fromFile;

@end
