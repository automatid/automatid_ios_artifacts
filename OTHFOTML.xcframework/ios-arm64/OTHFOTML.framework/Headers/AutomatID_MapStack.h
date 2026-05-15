//
//  MapStack.h
//  OTML
//
//  Created by enrico on 30/05/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//



@class AutomatID_OTMLEntry;
@class AutomatID_OTMLLayout;
@class AutomatID_OTMLDatasource;
@class AutomatID_OTMLResourceLoader;

#import "AutomatID_OTMLMapStackEntry.h"
#import "AutomatID_OTMLNewCondition.h"

@interface AutomatID_MapStack : NSObject

-(nonnull instancetype) init __attribute__((unavailable("Init not available. Please use initWitKey: or initWithKey:andValue: instead")));

/**
 init the MapStack using the given aMainContextID
 @param aStackName theStackName
 @param aMainContextID the context id to be returned as default
 */
-(nonnull instancetype) initWithName:(nonnull NSString*)aStackName
             andDefaultMainContextID:(nonnull NSString*)aMainContextID;
/**
 init the MapStack using the given aMainContextID.
 NOTE: Added for test purposes
 @param aStackName theStackName
 @param aMainContextID the context id to be returned as default
 @param rl Resource Loader to use for resource loading.
 */
-(nonnull instancetype)initWithName:(nonnull NSString *)aStackName
            andDefaultMainContextID:(nonnull NSString *)aMainContextID
                     resourceLoader:(nonnull AutomatID_OTMLResourceLoader*) rl;

@property (nonatomic, readonly) NSString* _Nonnull stackName;


-(BOOL) containsMarkWithID:(nonnull NSString*) aMarkID;


-(nullable AutomatID_OTMLEntry*)getEntryWithID:(nonnull NSString*) aID;
-(nullable AutomatID_OTMLLayout*)getLayoutFromComponentGroupWithID:(nonnull NSString*) aID;
-(nullable AutomatID_OTMLDatasource*)getDatasourceWithID:(nonnull NSString*) aID;
-(nullable AutomatID_OTMLNewCondition*) getConditionFromGroupWithID:(nonnull NSString*) aID;
-(nullable AutomatID_OTMLParameter*) getParameterFromGroupWithID:(nonnull NSString*) aID;

-(BOOL) pushMap:(nonnull NSString*)aMapName
  withContextID:(nonnull NSString*)aContextID;
-(nonnull NSString*) topContextID;
-(nullable NSMutableDictionary*) popKeepWithContext:(nullable NSString*) aMarkID keepingEntry:(nullable AutomatID_OTMLMapStackEntry*) aKeepEntry;
-(nullable NSMutableDictionary*) popRemoveWithContext:(nullable NSString*) aMarkID keepingEntry:(nullable AutomatID_OTMLMapStackEntry*) aKeepEntry;
-(unsigned int) popKeep:(nullable NSString*) aMarkID;
-(unsigned int) popRemove:(nullable NSString*) aMarkID;
-(unsigned int) popKeep:(nullable NSString*) aMarkID keepingEntry:(nullable AutomatID_OTMLMapStackEntry*) aKeepEntry;
-(unsigned int) popRemove:(nullable NSString*) aMarkID keepingEntry:(nullable AutomatID_OTMLMapStackEntry*) aKeepEntry;
-(nonnull NSMutableDictionary*)removeLastNavMarkKeepingEntries:(BOOL)keepingEntries;
-(BOOL) pushStackEntry:(nonnull AutomatID_OTMLMapStackEntry*) aAutomatID_OTMLMapStackEntry;

/**
 this method pushes the store dictionary included in the aAutomatID_OTMLMapStackEntry ONLY IF IT IS ALREADY PRESENT IN STACK.
 @note: if it is pushed is removed from the former aAutomatID_OTMLMapStackEntry, otherwise it is left in aAutomatID_OTMLMapStackEntry itself.
 @note: you should either: push the aAutomatID_OTMLMapStackEntry that have already cleaned up store ds or ensure to push the store ds elements otherwise.
 */
-(void)pushStoreDictionaryAndFilterStackEntry:(nonnull AutomatID_OTMLMapStackEntry*) aAutomatID_OTMLMapStackEntry;
-(void)pushStoreDictionaryAndEnsureAllEntryPushedStackEntry:(nonnull AutomatID_OTMLMapStackEntry*) aAutomatID_OTMLMapStackEntry;
-(BOOL) popMarkOnlyNavigation:(BOOL) popOnlyNavigation;
-(nonnull NSMutableDictionary*) popMarkOnlyNavigation:(BOOL) popOnlyNavigation withContext:(nullable NSString*)aContext;
-(BOOL)updateStoreDS:(nullable AutomatID_OTMLDatasource*)aNewDS forDSID:(nonnull NSString*)aDSID;
-(BOOL)updateStoreDS:(nullable AutomatID_OTMLDatasource*)aNewDS forDSID:(nonnull NSString*)aDSID pushIfDoesNotExists:(BOOL) shouldPush;

-(nonnull NSMutableDictionary*)gobackWithDirectiveComponents:(nonnull NSArray*) directivitySplittedByDot
                                                keepingEntry:(nullable AutomatID_OTMLMapStackEntry*) akeepingEntry;
-(BOOL) pushStackEntryBelowNavMark:(nonnull AutomatID_OTMLMapStackEntry*) aAutomatID_OTMLMapStackEntry;

/**
 * @param aMapName the xml name
 * @return AutomatID_OTMLMapStackEntry a map entry directly from disk or bundle. The map and its DS are not pushed into stack
 */
+(nullable AutomatID_OTMLMapStackEntry*)getUnstackedEntryWithMap:(nonnull NSString*) aMapName;

@end
