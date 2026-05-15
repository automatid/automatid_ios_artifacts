//
//  AutomatID_OTMLUpdaterDownloader.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/11/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AutomatID_OTMLUpdateManifestSection.h"
#import "AutomatID_OTMLAdvancedUpdaterManager.h"
#import "AutomatID_OTMLDownloadedDescriptorModel.h"

typedef void(^AutomatID_OTMLUpdaterDownloaderCallback)(NSError*error);

@interface AutomatID_OTMLUpdaterDownloader : NSObject <AutomatID_OTMLUpdateManifestSectionResourceDownloadDelegate>

@property (nonatomic, weak) AutomatID_OTMLAdvancedUpdaterDelegateBase * otmlUpdaterDelegate;


-(instancetype)initWithDownloadedDescriptor:(AutomatID_OTMLDownloadedDescriptorModel*)aModel;
-(void)performContentDownloadWithCompletationkBlock:(AutomatID_OTMLUpdaterDownloaderCallback)completationBlock;


@end
