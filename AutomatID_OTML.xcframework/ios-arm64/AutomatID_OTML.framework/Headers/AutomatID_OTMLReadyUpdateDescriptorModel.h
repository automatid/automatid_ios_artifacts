//
//  AutomatID_OTMLReadyUpdateDescriptorModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 24/11/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLAbstractUpdateDescriptorModel.h"
#import "AutomatID_OTMLStorableDescriptorModel.h"

@interface AutomatID_OTMLReadyUpdateDescriptorModel : AutomatID_OTMLStorableDescriptorModel

@property (nonatomic, strong) NSError * commitError;

-(BOOL)upgradeReadyToCurrent;
-(BOOL)isDescriptorReadyToBeCommitted;


@end
