//
//  OTMLTraceManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 25/11/15.
//  Copyright © 2015 Opentech ENG. All rights reserved.
//


@class AutomatID_OTMLTraceModel;
@class AutomatID_OTMLTracePredicate;

@protocol AutomatID_OTMLTraceSenderDelegate <NSObject>
-(void)sendTrace:(nonnull AutomatID_OTMLTraceModel*)aTrace now:(BOOL)sendNow;
@end

@interface AutomatID_OTMLTraceDelegateMap : NSObject

@property (nonatomic, strong, readonly) NSObject<AutomatID_OTMLTraceSenderDelegate>* __nonnull delegate;
@property (nonatomic, strong, readonly) AutomatID_OTMLTracePredicate* __nonnull predicate;

- (nonnull instancetype)initWithPredicate: (nonnull AutomatID_OTMLTracePredicate*) predicate andDelegate:(nonnull NSObject<AutomatID_OTMLTraceSenderDelegate>*) delegate;

@end

@interface AutomatID_OTMLTraceConfigurator : NSObject
+(nonnull AutomatID_OTMLTraceConfigurator *)getIntance;

/**
 @deprecated
 is metod is Deprecated. Use addTraceSenderDelegate:withTracePredicate: instead.
 If you want the class based predicate please use AutomatID_OTMLClassTracePredicate explicitly
 **/
-(void)addTraceSenderDelegate:(nonnull NSObject<AutomatID_OTMLTraceSenderDelegate>*)aDelegate withTraceClass:(nonnull Class)aClass __deprecated;

-(void)addTraceSenderDelegate:(nonnull NSObject<AutomatID_OTMLTraceSenderDelegate>*)aDelegate withTracePredicate:(nonnull AutomatID_OTMLTracePredicate*)aPredicate;
-(void)dispatchTrace:(nonnull AutomatID_OTMLTraceModel*)aTrace now:(BOOL)sendNow;
@end
