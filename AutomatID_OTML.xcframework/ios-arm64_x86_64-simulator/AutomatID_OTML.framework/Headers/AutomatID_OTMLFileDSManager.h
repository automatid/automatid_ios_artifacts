//
//  OTMLFileDSManager.h
//  OTMLFramework
//
//  Created by epavoni on 04/06/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <AutomatID_OTMLCore/AutomatID_OTMLRestartAppAwareProtocol.h>

@class AutomatID_OTMLDatasource;

@interface AutomatID_OTMLFileDSManager : NSObject <AutomatID_OTMLRestartAppAwareProtocol>

+(AutomatID_OTMLFileDSManager*)getInstance;

-(AutomatID_OTMLDatasource*)getDSFromLoadDsID:(NSString*)key;

-(AutomatID_OTMLDatasource*)readDSWithFilename:(NSString*)aFilename;
-(AutomatID_OTMLDatasource*)readDSWithFullPath:(NSString*)aFullPath;

-(BOOL)storeDS:(AutomatID_OTMLDatasource*)aDS withFilename:(NSString*)aFilename;

-(BOOL)removeFilename:(NSString*)theFilename;
-(BOOL)removeFullPath:(NSString*)theFulltPath;

-(void)cleanup;

@end
