//
//  OTMLListTableProcedure.h
//  OTMLFramework
//
//  Created by epavoni on 20/12/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLComponent.h"
@class AutomatID_OTMPDatasourceElementSorter;
@class AutomatID_OTMLTableListAdapterSectionBean;

typedef enum {
    OTMLListTableProcedureSortOrderAscending,
    OTMLListTableProcedureSortOrderDescending
}OTMLListTableProcedureSortOrder;

typedef enum {
    OTMLListTableProcedureSortTypeNumber,
    OTMLListTableProcedureSortTypeString
}OTMLListTableProcedureSortType;


@interface AutomatID_StubRowComponent : AutomatID_OTMLComponent

- (id)initWithDSE:(AutomatID_OTMLDatasource*)aDSE
           parent:(AutomatID_OTMLComponent*)aParent
              row:(int)aRow
          section:(int)aSection;

@end

@protocol AutomatID_OTMLListTableProcedure <NSObject, NSCopying>

/**
 @discussion
  Define a filter computation.
 @param aSectionList
  the array of datasource of a single section
 @return 
  an array of NSNumber containing ony the filtered, sorted valid elements
 */
-(NSArray*)computeFilterMapForSectionList:(NSArray*)aSectionList
                         inSectionINdexed:(unsigned int) aSectionIndex
                 usingParentForResolution:(AutomatID_OTMLComponent*)the_parent;

@end

@interface AutomatID_OTMLListTableBlockedFilterProcedure : NSObject<AutomatID_OTMLListTableProcedure>

-(void)addToBlockedFilterSection:(int)originalSecrion andRow:(int)originalRow;
-(void)resetBlockedFilter;
-(BOOL)isEmpty;

@end

@interface AutomatID_OTMLListTableSortProcedure : NSObject<AutomatID_OTMLListTableProcedure>

- (id)initWithSortKey:(NSString*)aSortKey orderDirection:(OTMLListTableProcedureSortOrder) aSortOrder sortType:(OTMLListTableProcedureSortType)aSortType resolveAsSrcID:(BOOL)shouldResolveAsSrcID;

- (id)initWithSortKey:(NSString*)aSortKey orderDirection:(OTMLListTableProcedureSortOrder) aSortOrder sortType:(OTMLListTableProcedureSortType)aSortType;

- (id)initWithOTMPDatasourceElementSorter:(AutomatID_OTMPDatasourceElementSorter*)aSorter __attribute__((deprecated));

@end

@interface AutomatID_OTMLListTableFilterEntriesProcedure : NSObject<AutomatID_OTMLListTableProcedure>

-(id) initWithConditionWithID:(NSString*) the_condition_ref_id;

@end

@interface AutomatID_SortAndFilterEachSection : NSObject<AutomatID_OTMLListTableProcedure>

-(void)addToBlockedFilterSection:(int)originalSecrion andRow:(int)originalRow;
-(void)resetBlockedFilter;
-(void)setSorter:(AutomatID_OTMLListTableSortProcedure*)aSorter;
-(void)setFilter:(AutomatID_OTMLListTableFilterEntriesProcedure*)aFilter;

@end
