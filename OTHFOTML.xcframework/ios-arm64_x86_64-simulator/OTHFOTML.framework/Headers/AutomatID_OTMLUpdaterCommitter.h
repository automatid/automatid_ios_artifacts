//
//  AutomatID_OTMLUpdaterCommitter.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/01/17.
//  Copyright © 2017 Opentech ENG. All rights reserved.
//

typedef NS_ENUM(unsigned int, OTMLUpdaterCommitterReason) {
    OTMLUpdaterCommitterReason_prestartapp,
    OTMLUpdaterCommitterReason_preupdater,
    OTMLUpdaterCommitterReason_postupdater
};

@interface AutomatID_OTMLUpdaterCommitter : NSObject

-(instancetype)initWithReason:(OTMLUpdaterCommitterReason)aReason;

-(BOOL)isDescriptorReadyToBeCommitted;
-(BOOL)commitReadyDescriptor;

@end
