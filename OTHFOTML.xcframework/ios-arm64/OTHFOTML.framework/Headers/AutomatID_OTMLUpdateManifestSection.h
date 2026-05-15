//
//  AutomatID_OTMLUpdateManifestSection.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 23/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "AtomatID_OTMLUpdateSection.h"
#import "AutomatID_OTMLStyleElement.h"
#import "AutomatID_OTMLPadding.h"
#import "AutomatID_OTMLSignedFile.h"
#import "AutomatID_OTMLUpdTraceModel.h"
#import "AutomatID_OTMLHTTPTask.h"

@class AutomatID_OTMLManifestAbstractResource;

@protocol AutomatID_OTMLUpdateManifestSectionResourceDownloadDelegate <NSObject>

-(void)resourcesDownloadDidStart;
-(void)resourceHasDownloadedWithGlobalPercentage:(float)percent;
-(void)resourcesDownloadDidFinishWithError:(NSError*)anError;

@end

@interface AutomatID_OTMLUpdateManifestSection : AtomatID_OTMLUpdateSection


@property (nonatomic, strong, readonly)  NSDictionary<NSString*,AutomatID_OTMLManifestAbstractResource*>* nameToResourceLookupTable;
@property (nonatomic, strong) AutomatID_OTMLUpdTraceModel * traceModel;


-(void)filterResourcesToBeDownloadedUsingCurrentManifestSection:(AutomatID_OTMLUpdateManifestSection *)aCurrentManifestSection;
-(void)downloadModifiedAndMissingResourcesWithDelegate:(NSObject<AutomatID_OTMLUpdateManifestSectionResourceDownloadDelegate>*)aDelegate;

-(NSMutableDictionary*)generateHashToResourceLookupTable;
+(NSMutableArray*)generateHashListFromFileList:(NSArray*)currentFilesList;


@end


