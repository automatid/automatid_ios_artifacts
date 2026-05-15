//
//  OTMLLongPressTimersModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 24/03/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

@protocol AutomatID_OTMLLongPressDelegate <NSObject>

-(void)longPressEventDidTick:(int)tickCount;
-(void)longPressEventDidDetected;

@end

@interface AutomatID_OTMLLongPressManager : NSObject

-(void)start;
-(void)stop;
-(instancetype)initWithTimerDescription:(NSString*)timerDescrition;
-(void)addDelegate:(NSObject<AutomatID_OTMLLongPressDelegate>*)aDelegate;

@end
