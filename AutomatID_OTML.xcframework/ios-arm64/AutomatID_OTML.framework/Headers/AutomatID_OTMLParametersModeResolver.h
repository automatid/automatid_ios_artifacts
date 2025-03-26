//
//  OTMLParamethersModeResolver.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 07/01/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import <AutomatID_OTMLModels/AutomatID_OTMLParameterMode.h>

@class AutomatID_OTMLParameterEntry;
@class AutomatID_OTMLParamModeStrategy;
@class AutomatID_OTMLParameter;
@class AutomatID_OTMLLayoutViewController;


@interface AutomatID_OTMLParametersModeResolver : NSObject

+(AutomatID_OTMLParametersModeResolver*) getInstance;

-(NSString*) applyParamModedParam:(AutomatID_OTMLParameter*) param
                                usingOtmlVC:(AutomatID_OTMLLayoutViewController*) aVC
                                 validating:(BOOL) shouldValidate
                                 untilCount:(int) aRecursionEnd;


-(AutomatID_OTMLParamModeStrategy*) asyncStrategyForMode:(AutomatID_OTMLParameterMode)aMode;

@end
