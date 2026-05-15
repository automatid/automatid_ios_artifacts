//
//  AutomatID_OTMLUpdateResult.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 22/11/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>



typedef NS_OPTIONS(unsigned int, AutomatID_OTMLUpdateResultCode) {
    OTMLUpdateResultCode_unknown = 0,
    OTMLUpdateResultCode_update_available = 1,
    OTMLUpdateResultCode_update_not_available = 1<<1,
    OTMLUpdateResultCode_blocking_update = 1<<2,
    OTMLUpdateResultCode_partial_result = 1<<3,
    OTMLUpdateResultCode_final_result = 1<<4

};

@interface AutomatID_OTMLUpdateResult : NSObject

@property (nonatomic, assign) unsigned int code;

+(AutomatID_OTMLUpdateResult*)resultWithCode:(AutomatID_OTMLUpdateResultCode)aCode;

-(BOOL)isBlockingUpdate;
-(BOOL)isUpdateAvailable;

@end
