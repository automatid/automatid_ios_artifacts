//
//  AutomatID_OTMLParameter.h
//  OTML
//
//  Created by enrico on 04/06/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//



#import "AutomatID_OTMLNewCondition.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLParameterType.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLParameterMode.h>

@class AutomatID_OTMLComponent;
@class AutomatID_OTMLParameterModel;
@class AutomatID_OTMLNewCondition;

@interface AutomatID_OTMLParameter : NSObject<NSCopying>

@property (nonatomic, strong) AutomatID_OTMLComponent* sourceComponent;
@property (nonatomic, strong) AutomatID_OTMLNewCondition * condition;
@property (nonatomic, strong) NSArray<AutomatID_OTMLParameter*>* param_mode_arguments;
@property (nonatomic, assign) BOOL requiresResolution;


//Questi ora sono dei semplici bridge

@property (nonatomic, strong) NSString * srcid;
@property (nonatomic, strong) NSString * name;
@property (nonatomic, strong) NSString * flagforsrc;
@property (nonatomic, strong) NSString * value;
@property (nonatomic, assign) AutomatID_OTMLParameterMode paramMode;
@property (nonatomic, strong) NSString * custom_mode;
@property (nonatomic, assign) AutomatID_OTMLParameterType paramType;


-(BOOL) hasValidConditions;

-(id) initWithModel:(AutomatID_OTMLParameterModel*) aModel;
-(id) initWithDictionary:(NSDictionary*) aDictionary;
-(id) initWithValue:(NSString*)aValue srcID:(NSString*)aSrcID flagForSrc:(NSString*)aFlagForSrc name:(NSString*)aName;

-(NSDictionary*) toDictionaryDescription;

@end
