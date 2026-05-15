//
//  AutomatID_OTMLWorkingUpdateDescriptorModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 27/08/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "AutomatID_OTMLAbstractUpdateDescriptorModel.h"
#import "AutomatID_OTMLCurrentDecriptorModel.h"
#import "AutomatID_OTMLDownloadedDescriptorModel.h"
#import "AutomatID_OTMLStorableDescriptorModel.h"

@interface AutomatID_OTMLWorkingUpdateDescriptorModel : AutomatID_OTMLStorableDescriptorModel

-(id)initWithCurrent:(AutomatID_OTMLCurrentDecriptorModel *)aCurrentDescriptor andDownloaded:(AutomatID_OTMLDownloadedDescriptorModel*)downloadedDescriptor;
-(BOOL)upgradeWorkingToReady;

@end
