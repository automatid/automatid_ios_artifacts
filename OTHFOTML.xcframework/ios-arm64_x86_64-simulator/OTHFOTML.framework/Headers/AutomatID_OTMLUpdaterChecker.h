//
//  AutomatID_OTMLUpdaterChecker.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/11/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLDownloadedDescriptorModel.h"

//param: is update needed
typedef void(^OTMLUpdaterCheckerCallback)(NSNumber*param, NSError*error);

@interface AutomatID_OTMLUpdaterChecker : NSObject

@property (nonatomic, readonly, strong) AutomatID_OTMLDownloadedDescriptorModel * downloadedDescriptor;
@property (nonatomic, readonly, assign) BOOL isBlockingUpdate;

-(void)checkUpdatesWithCompletationkBlock:(OTMLUpdaterCheckerCallback)completationBlock;

@end
