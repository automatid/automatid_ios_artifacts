//
//  OTMLUpdateDescriptorManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 21/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//


#import "AutomatID_OTMLCurrentDecriptorModel.h"
#import "AutomatID_OTMLDownloadedDescriptorModel.h"
#import "AutomatID_OTMLWorkingUpdateDescriptorModel.h"
#import "AutomatID_OTMLReadyUpdateDescriptorModel.h"

#define OTML_UPDATE_SECTIONS_WORKING_DESCRIPTOR_PATH @"otml_update_working"

@interface AutomatID_OTMLUpdateDescriptorManager : NSObject

+(void)invalidateCurrentDescriptorCache;

+(AutomatID_OTMLCurrentDecriptorModel*)getCurrentDescriptorCached;
+(AutomatID_OTMLCurrentDecriptorModel*)getCurrentDescriptorCopy;

+(AutomatID_OTMLReadyUpdateDescriptorModel*)getReadyDescriptorCopy;

+(void)cleanReadyFolder;
+(void)cleanTmpFolder;
+(void)cleanWorkingFolder;


+(void)__CANCEL_CURRENT_DESCRIPTOR_AND_RESOURCES__;
+(BOOL)isCurrentDescriptorStoredInBundle;

@end
