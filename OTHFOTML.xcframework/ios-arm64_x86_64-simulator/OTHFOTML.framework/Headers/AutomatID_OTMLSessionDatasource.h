//
//  AutomatID_OTMLSessionDatasource.h
//  OTMLFramework
//
//  Created by Enrico on 11/04/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

@class AutomatID_OTMLDatasource;

@interface AutomatID_OTMLSessionDatasource : NSObject

-(nonnull instancetype) init __attribute__((unavailable("Init not available. Please use OTMLImage +otmlImageFromDescriprion: to build an OTMLImage")));

-(nonnull instancetype) initWithDS:(nonnull AutomatID_OTMLDatasource*) datasource withHash:(nonnull NSString*) dsHash withTimestamp:(long long)timestamp;

@property(nonatomic, readonly) NSString* __nonnull dsHash;
@property(nonatomic, readonly) long long timestamp;
@property(nonatomic, readonly) AutomatID_OTMLDatasource* __nonnull datasource;



@end
