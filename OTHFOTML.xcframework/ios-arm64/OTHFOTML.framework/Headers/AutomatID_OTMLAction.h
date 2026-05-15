//
//  OTMLAction.h
//  OTML
//
//  Created by enrico on 04/06/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

#import "AutomatID_OTMLNewCondition.h"
#import "AutomatID_OTMLDatasource.h"

#define OTML_VALIDATION_EXCEPTION_SRCID_KEY @"otml_validationexception_srcid"
#define OTML_VALIDATION_EXCEPTION_ERRORMESSAGE_KEY @"otml_validationexception_error_message"

@class AutomatID_OTMLNewCondition;
@class AutomatID_OTMLViewController;
@class AutomatID_OTMLComponent;
@class AutomatID_OTMLActionModel;


@interface AutomatID_OTMLValidationException : NSException

+(NSException *)exceptionWithMessage:(NSString*)aMessage forComponent:(AutomatID_OTMLComponent*)aCompoent;

-(NSString*) getSrcID;
-(NSString*) getErrorMessage;

@end

@interface AutomatID_OTMLMultiValidationException : NSException

@property (nonatomic, strong) NSArray<AutomatID_OTMLValidationException*>* exceptions;
+(void) raiseExceptions:(NSArray<AutomatID_OTMLValidationException*>*) arrayOfException;

@end

@interface AutomatID_OTMLAction : NSObject<NSCopying>

-(id)initWithType:(NSString*)_type withTarget:(NSString*)_target withTrigger:(NSString*)_trigger andParameters:(NSDictionary*)_parameters;
-(id)initWithType:(NSString*)_type withTarget:(NSString*)_target withTrigger:(NSString*)_trigger andParameters:(NSDictionary*)_parameters andUnresolvedParameters:(NSArray*) _unresolvedParams;
-(id)initWithType:(NSString*)_type withTarget:(NSString*)_target withTrigger:(NSString*)_trigger andParameters:(NSDictionary*)_parameters andUnresolvedParameters:(NSArray*) _unresolvedParams andCondition:(NSArray*) _condictions;
-(id)initWithModel:(AutomatID_OTMLActionModel*)aModel;
-(id)initWithDatasouceElement:(AutomatID_OTMLDatasource*)actionDS;


@property (strong, nonatomic, readonly) NSString* target;
@property (nonatomic, strong)  NSString* trigger;
@property (strong, nonatomic, readonly)  NSString* type;
@property (strong, nonatomic, readonly)  NSArray* parameters;
@property (nonatomic, strong) AutomatID_OTMLComponent* triggeringConponent;
@property (nonatomic, strong) NSDictionary* postExec_parameters;
@property (nonatomic, strong) NSString* postExec_target;
@property (nonatomic, strong)  NSString* suggestedExecutionContext;
@property (nonatomic, strong) AutomatID_OTMLNewCondition * condition;


-(BOOL) performActionWithOTMLVC:(AutomatID_OTMLViewController*) aOTMLvc;

-(NSDictionary*) resolveParametersWithOTMLvc:(AutomatID_OTMLViewController*) aOTMLVC;
-(NSDictionary*) resolveParametersWithOTMLvc:(AutomatID_OTMLViewController*) aOTMLVC dynamicBinding:(BOOL) performDynamicBinding;
-(void) handleOTMLValidationException:(AutomatID_OTMLValidationException*)exception forOTMLVC:(AutomatID_OTMLViewController*) aOTMLVC;
-(NSString*) getOverridingTargetForParams:(NSDictionary*) aDictionary;
-(NSString*) getOverridingTriggerForParams:(NSArray*) aDictionary;
-(NSDictionary*) parametersRemovingOverriding:(NSDictionary*) aDictionary;

@end
