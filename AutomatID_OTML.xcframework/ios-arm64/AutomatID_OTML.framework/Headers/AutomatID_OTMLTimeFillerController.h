//
//  AUTimeFillerController.h
//  Austria
//
//  Created by Silvio D'Angelo on 05/02/2019.
//  Copyright © 2019 Opentech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AutomatID_OTMLTimeFillerControllerDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface AutomatID_OTMLTimeFillerController : NSObject

-(instancetype) initWithDuration:(NSInteger) aDuration
                     andTickTime:(NSInteger) aTickTime
                    andComponent:(id<AutomatID_OTMLTimeFillerControllerDelegate>) filler;

@property BOOL isStopped;
@property BOOL countdownExpired;
@property NSInteger currentCounter;

-(void) start;
-(void) reset;
-(void) decreaseCounterByOneTick;

@end

NS_ASSUME_NONNULL_END
