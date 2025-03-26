//
//  AutomatID_OTMLParamModeStrategy.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 17/01/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import <AutomatID_OTMLModels/AutomatID_OTMLParameterMode.h>

@class AutomatID_OTMLParameter;
@class AutomatID_OTMLParameterEntry;
@class AutomatID_OTMLComponent;



#define PARAM_MODE_DEFAULT_RETURN_VALUE @""


@protocol AutomatID_OTMLAsyncParamModeStrategy <NSObject>
@end
@protocol AutomatID_OTMLNotSingletonParamModeStrategy <NSObject>
@end


@interface AutomatID_OTMLParamModeStrategy : NSObject

-(NSString*) resolveParamModeWithResolvedArguments:(NSArray<AutomatID_OTMLParameterEntry*>*)resolvedArguments
                                     withParameter:(AutomatID_OTMLParameter*)aParam
                          andPreprocessedArguments:(NSDictionary*)preprocessedArguments;
-(NSArray<NSString*>*)getPreprocessedMandatoryParameters;
-(NSArray<NSString*>*)getPreprocessedOptionalParameters;


@end


@interface AutomatID_OTMLParamModeStrategyGroup : NSObject

- (AutomatID_OTMLParamModeStrategy*)getStrategyWithMode:(AutomatID_OTMLParameterMode)aMode;
- (AutomatID_OTMLParamModeStrategy*)getStrategyWithMode:(AutomatID_OTMLParameterMode)aMode andCustomName:(NSString*)aCustomName;

- (BOOL) canResolveParameterWithMode:(AutomatID_OTMLParameterMode)aMode;
- (NSString*) resolveParamModeWithType:(AutomatID_OTMLParameterMode)aMode withResolvedArguments:(NSArray<AutomatID_OTMLParameterEntry*>*)resolvedArguments withParameter:(AutomatID_OTMLParameter*)aParam;

@end
