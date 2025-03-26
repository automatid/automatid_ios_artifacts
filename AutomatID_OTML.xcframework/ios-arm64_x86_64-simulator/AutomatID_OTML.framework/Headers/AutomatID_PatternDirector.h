//
//  AutomatID_PatternDirector.h
//  OTML
//
//  Created by enrico on 29/05/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//


#import "AutomatID_OTMLEntry.h"
#import "AutomatID_OTMLViewController.h"
#import "AutomatID_OTMLBridgeDelegate.h"
#import "AutomatID_OTMLNewCondition.h"
#import "AutomatID_OTMLNetworkTask.h"
#import <MessageUI/MessageUI.h>
#import "AutomatID_OTMLAdvancedUpdaterManager.h"
#import <AutomatID_OTMLCore/AutomatID_OTMLRestartAppAwareProtocol.h>
#import "AutomatID_PatternDirectorDatasouerce.h"
#import "AutomatID_OTMLMapStackEntry.h"

@class AutomatID_MapStack;
@class AutomatID_OTMLLayoutViewController;
@class AutomatID_OTMLDatasource;
@class AutomatID_OTMLSessionDatasource;
@class AutomatID_OTMLContextContainerViewController;

@protocol AutomatID_OTMLBridgeDelegate;

@interface AutomatID_PatternDirector : NSObject<AutomatID_OTMLRestartAppAwareProtocol>{

}

@property (nonatomic,strong,readonly,nullable) AutomatID_OTMLContextContainerViewController* contextController;

/**
 *  @discussion this method is the hook for container app to define its Viewcontrollers hierarchy.
 *  @warning invocation of this method is mandatory for OTML to work as expected.
 *  @note aDictoinary is supposed to have NSString* ad keys and id<AutomatID_OTMLBridgeDelegate,AutomatID_PatternDirectorDatasouerce> as objects
 */

-(void) setupWithContextsController:(nonnull AutomatID_OTMLContextContainerViewController*) aContextDescriptor;

+ (nonnull instancetype) getInstance;
-(nonnull NSString*) mainContextID;

/**
 @discussion push a DS that was retrieved from manifest datasource section
 @param ds a map with key/datasources
 */
-(void) pushOtmlUpdateDescriptorDatasource:(nonnull NSDictionary*)ds;

-(void) pushOTMLVCWithTarget:(nonnull NSString*)aTarget
                  withParams:(nonnull NSDictionary*) aParameters
          WithAutomatID_OTMLDatasource:(nullable NSDictionary*) aRespDatasource
                      andXML:(nullable AutomatID_OTMLMapStackEntry*) aOTMLEntry
    andPreExecuteActionArray:(nullable NSArray*)preExecuteAction
      andPreStackActionArray:(nullable NSArray*)preStackAction
        andOriginalContextId:(nonnull NSString*) aOriginalContextID;

-(void) perfromDotUpdateWithParams:(nonnull NSDictionary*) parameters inOriginalContext:(nonnull NSString*)aOriginalContextID;

-(nullable AutomatID_OTMLEntry*) entryForKey:(nonnull NSString*) key preferredContextID:(nullable NSString*) aCtxID;

-(nullable AutomatID_OTMLLayout*) layoutComponetGroupForKey:(nonnull NSString*) key  preferredContextID:(nullable NSString*) aCtxID;
-(nullable AutomatID_OTMLNewCondition*) conditionGroupForKey:(nonnull NSString*) key preferredContextID:(nullable NSString*) aCtxID;
-(nullable AutomatID_OTMLParameter*) parameterGroupForKey:(nonnull NSString*) key preferredContextID:(nullable NSString*) aCtxID;


-(nullable AutomatID_OTMLDatasource*) getDataSourceForkey:(nonnull NSString*) key preferredContextID:(nullable NSString*) aCtxID;

-(void) pushStoreDictionaryInStackName:(nonnull NSString *)mapStackName andEnsureAllEntryPushedStackEntry:(nonnull AutomatID_OTMLMapStackEntry*)sessionStoreDSEntries;
-(nullable NSString*)searchMapStackCointainingDsWithKey:(nonnull NSString *)dsKEY;

-(void) popNavigationControllerFromStackWithContextID:(nonnull NSString*)aContextID;

-(nullable AutomatID_OTMLViewController*)getAnyOTMLVC;
-(nullable AutomatID_OTMLViewController*)getOTMLViewForMainContext;
-(nullable AutomatID_OTMLViewController*)getAutomatID_OTMLViewControllerForContext:(nonnull NSString*) aContextID;

-(BOOL) updateStoreDS:(nonnull AutomatID_OTMLDatasource*)aNewDS
              forDSID:(nonnull NSString*)aDSID
   preferredContextID:(nullable NSString*) aCtxID;

-(BOOL) updateStoreDS:(nonnull AutomatID_OTMLDatasource*)aNewDS
              forDSID:(nonnull NSString*)aDSID
  pushIfDoesNotExists:(BOOL) shouldPush
   preferredContextID:(nullable NSString*) aCtxID;


-(BOOL)isAnimationLocked;

-(nullable AutomatID_OTMLMapStackEntry*) unstackedEntryForKey:(nonnull NSString*) key;


-(BOOL) didOTMLEntryBeenPushedOnContext:(nonnull NSString*)aContext;

@end
