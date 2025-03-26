//
//  AutomatID_OTMLLayoutViewController.h
//  OTML
//
//  Created by Alessandro Ruggeri on 19/06/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//


#import "AutomatID_OTMLParameterToParEntryResolution.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLTriggersConstants.h>
#import "AutomatID_OTMLDatasource.h"
#import "AutomatID_OTMLParameterDataFetcher.h"

@class AutomatID_OTMLComponent;
@class AutomatID_OTMLEntry;
@class AutomatID_OTMLParameter;
@class AutomatID_OTMLParameterEntry;
@class AutomatID_OTMLNewCondition;
@class AutomatID_OTMLMainViewController;

@interface AutomatID_OTMLLayoutViewController : UIViewController<AutomatID_OTMLParameterDataFetcher>{
@protected AutomatID_OTMLEntry* entry;
@protected AutomatID_OTMLComponent* component;
@protected NSDictionary* parameterMap;
    
@protected    BOOL first_shown;

    
@protected NSMutableDictionary* otmlBuffer;
@protected NSMutableDictionary* dynaBinding;
}

@property (nonatomic, strong, nonnull) NSString* contextID;
@property (nonatomic, nullable, weak) AutomatID_OTMLMainViewController* parentMVC;


-(nonnull id) initWithEntry:(nonnull AutomatID_OTMLEntry*) aEntry
          andWithParameters:(nonnull NSDictionary*) aParameterMap;


-(nonnull AutomatID_OTMLEntry*)getEntry;

-(void)setInAnimation:(BOOL)inAnimation;
-(BOOL)inAnimation;
-(BOOL)inAnimationFadePrevious;


-(nullable AutomatID_OTMLParameterEntry*) resolveAsKeyValueParameter:(nonnull AutomatID_OTMLParameter*) aParameter validate:(BOOL)validateNow;

-(nullable AutomatID_OTMLNewCondition*) getConditionRefWithID:(nullable NSString*) aConditionId;
-(nullable AutomatID_OTMLParameter*) getParameterRefWithID:(nullable NSString*)aParameterRefID;

-(void) dismissDinamicBinding;
-(void) assignDynamicBindingForDictionary:(nonnull NSDictionary*) aDictionary;
-(nullable NSString*) findPushedParamValueFromKey:(nullable NSString*) aParametherName;

+(nullable AutomatID_OTMLDatasource*) getElementForKey:(nonnull NSString*) aKey inDatasource:(nonnull AutomatID_OTMLDatasource*) aDatasourceInterface;

-(void) did_showTrigger;
-(void) will_showTrigger;
-(void) will_hideTrigger;
-(void) did_hideTrigger;
-(void)contextMountedTrigger;
-(void)contextUnmountedTrigger;

-(nonnull NSString*)getCurrentEntryName;
-(void)dispose;
-(void)triggerEvent:(nonnull NSString*) anEvent;
-(void)cleanFindComponentIdBuffer;


-(nullable NSString*)valueForCustomEntryAttribute:(nonnull NSString*)aCustomKey;

@end
