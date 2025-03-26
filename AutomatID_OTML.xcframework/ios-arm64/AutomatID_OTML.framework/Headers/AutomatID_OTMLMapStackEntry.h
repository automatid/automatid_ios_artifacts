//
//  AutomatID_OTMLMapStackEntry.h
//  OTML
//
//  Created by epavoni on 29/08/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

@class AutomatID_OTMLEntry;
@class AutomatID_OTMLLayout;
@class AutomatID_OTMLDatasource;
@class AutomatID_OTMLNewCondition;
@class AutomatID_OTMLParameter;
#import <AutomatID_OTMLModels/AutomatID_OTMLMapElementsModel.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLDatasourcesModel.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLConditionsModel.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLComponentGroupsModel.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLComponentGroupModel.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLActionsModel.h>

@interface AutomatID_OTMLMapStackEntry : NSObject<NSCopying>{
    BOOL mark;
    BOOL lightMark;
    BOOL staticMap;
    NSString* markID;
    NSString* contextID;
    NSDictionary* baseMap;
    NSDictionary* baseGroups;
    NSDictionary* baseDataSource;
    NSDictionary<NSString*, AutomatID_OTMLNewCondition*>* conditionGroup;
    NSDictionary<NSString*, AutomatID_OTMLParameter*>* parameterGroup;
    NSMutableDictionary* storeDataSource;
}

@property (nonatomic, retain) NSString* _Nonnull markTargetID;
@property (nonatomic, retain) NSArray* _Nonnull markTagIDS;
@property (nonatomic, readonly) NSString* _Nonnull markID;
@property (nonatomic, strong) NSString* _Nonnull contextID;


+(nonnull AutomatID_OTMLMapStackEntry*) newNavigationMarkWIthContext:(nonnull NSString*)aContextID
                                                 andTarget:(nonnull NSString*)aTarget;

-(nonnull instancetype) initWithDatasource:(nonnull NSDictionary*)aDictionary;
-(nonnull instancetype) initWithBaseMap:(nonnull NSString*) aBaseMap;
-(nonnull instancetype) initWithBaseMapData:(nonnull NSData*) aBaseMapData;
-(nonnull instancetype) initWithBaseMapData:(nonnull NSData*) aBaseMapData targetContext:(nonnull NSString*)aContext;

-(nonnull id)initWithMarkID:(nonnull NSString*) aMarkID isLightMark:(BOOL) isaLightMark;
-(nonnull id)initWithMapStackEntry:(nonnull AutomatID_OTMLMapStackEntry*)aMapStackEntry;
-(nonnull AutomatID_OTMLEntry*)newEntryWithID:(nonnull NSString*) aID;
-(nonnull AutomatID_OTMLEntry*)newFirstEntry;
-(nonnull AutomatID_OTMLLayout*)newLayoutFromComponentGroupWithID:(nonnull NSString*) aID;

-(nonnull AutomatID_OTMLDatasource*)newDatasourceWithID:(nonnull NSString*) aID;

+(nullable AutomatID_OTMLComponentModel*) searchInLayout:(nonnull AutomatID_OTMLLayoutModel* ) layout
                                         componentWithId:(nonnull NSString*) coid;

-(nonnull NSMutableDictionary*) getStroreDictionary;
-(nonnull NSDictionary*) getDatasourceMap;
-(nonnull NSDictionary<NSString*, AutomatID_OTMLNewCondition*>*)getConditionGroupMap;
-(nonnull NSDictionary<NSString*, AutomatID_OTMLParameter*>*)getParameterGroupMap;
-(nullable AutomatID_OTMLNewCondition*) newConditionFromGroupWithID:(nonnull NSString*) aID;
-(nullable AutomatID_OTMLParameter*) newParameterFromGroupWithID:(nonnull NSString*) aID;

-(BOOL) isMark;
-(BOOL) isLightMark;
-(BOOL) isNavigationMark;
-(void) dispose;

@end
