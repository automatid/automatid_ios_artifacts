//
//  AutomatID_OTMLDatasourceHelper.h
//  OTMLFramework
//
//  Created by epavoni on 21/11/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLDatasource.h"
#import "AutomatID_OTMLResolvedPath.h"
#import "AutomatID_OTMLParameterDataFetcher.h"

@class AutomatID_OTMLViewController;
@class AutomatID_OTMLComponent;


@interface AutomatID_OTMLDatasourceHelper : NSObject

#pragma mark -  DS Resolution (Read) methods

/***
 @discussion Resolves the path using the AutomatID_OTMLViewController as an  AutomatID_OTMLResolvedPath.
 @param aPath The path to be searched for. Can be nil, but this will return a failure resolution
 @param aAutomatID_OTMLViewController The reference OTMLVC. Can be nil, if nil only mapstack DS will be searched for (via AutomatID_PatternDirector)
 @return allways an AutomatID_OTMLResolvedPath containing: The resolved Boolean if it has been correctly resolved, fromFile boolean if it has been loaded from file, rootElement Datasource (if it has ben corretly resolved), NSArray<AutomatID_OTMLDatasource*>*. If no DS has been found or the path cannot be followed, this returns nil. If the path ends with "[]", then the child list is returned, otherwise an NSArray with the single element is returned;
 */
+(nonnull AutomatID_OTMLResolvedPath*) resolveDataSourcePath:(nullable NSString*) aPath
                              inAutomatID_OTMLViewController:(nullable id<AutomatID_OTMLParameterDataFetcher>) aAutomatID_OTMLViewController;

/**
 @discussion Resolves the path using the AutomatID_OTMLViewController as an  NSArray<AutomatID_OTMLDatasource*>* (Usually a AutomatID_OTMLDatasourceElemnt).
 @param aPath The path to be searched for. Cannot be nil.
 @param aAutomatID_OTMLViewController The reference OTMLVC. Can be nil, if nil only mapstack DS will be searched for (via AutomatID_PatternDirector)
 @return an NSArray<AutomatID_OTMLDatasource*>* (Usually a AutomatID_OTMLDatasourceElemnt). If no DS has been found or the path cannot be followed, it returns nil. If the path ends with "[]", then the child list is returned, otherwise an NSArray with the single element is returned.
 @deprecated please use resolveDataSourcePath instead
 */
+(nullable NSArray<AutomatID_OTMLDatasource *>*) resolveDataSourceElementsPath:(nullable NSString*) aPath
                                                inAutomatID_OTMLViewController:(nullable AutomatID_OTMLViewController*) aAutomatID_OTMLViewController __attribute__((deprecated));

/**
 @discussion Resolves the path using aDSInterface as the root element of NSArray<AutomatID_OTMLDatasource*>* (Usually a AutomatID_OTMLDatasourceElemnt).
 @param aPath The path to be searched for. Cannot be nil.
 @param aDSInterface The reference NSArray<AutomatID_OTMLDatasource*>*. Cannot be nil.
 @param explodeRoothOfPath If NO the root of aPath (the block before the first ".") is skipped. It is usefull to set it to YES when the path sgtrig contains the full path, but the DS is retrieved somewhere else.
 @return an NSArray<AutomatID_OTMLDatasource*>* (Usually a AutomatID_OTMLDatasourceElemnt). If no DS has been found or the path cannot be followed, it returns nil. If the path ends with "[]", then the child list is returned, otherwise an NSArray with the single element is returned.
 */
+(nullable NSArray<AutomatID_OTMLDatasource*>*) resolveDataSourceElementsPath:(nonnull NSString*) aPath
                                                       inDatasource:(nonnull AutomatID_OTMLDatasource *) aDSInterface
                                                        explodeRoot:(BOOL)explodeRoothOfPath;

/**
 @discussion Search inside the datasourceElement child of aDatasourceInterface and returns it.
 @param aDatasourceInterface The root AutomatID_OTMLDatasource.
 @param aKey The key to be searched for.
 @return The AutomatID_OTMLDatasource found. Nil if not found.
 */
+(nullable AutomatID_OTMLDatasource *) getElementForKey:(nullable NSString*) aKey
                                 inDatasource:(nonnull AutomatID_OTMLDatasource *) aDatasourceInterface;


#pragma mark - DS Write methods
/**
 @discussion Create the DS, at given path, with key as the first component of aPath (splitted by ".").
 After this method is called, AutomatID_OTMLDatasourceHelper will return aElements when any of the resolveDataSourceElementsPath: methods is called with aPath.
 
 @param aAutomatID_OTMLViewController The reference OTMLVC. Can be nil, if nil only mapstack DS will be searched for (via AutomatID_PatternDirector)
 @param aPath The path to be searched for. Cannot be nil.
 @param aElements subelements to inject in the new ds.
 @note does not entirely overwrite the destination.
 */
+(BOOL) createOrOverrideDSWithPath:(nonnull NSString*) aPath
             withElementsFromArray:(nonnull NSArray<AutomatID_OTMLDatasource*>*) aElements
                      withFileName:(nullable NSString*) fileName
              inAutomatID_OTMLViewController:(nullable AutomatID_OTMLViewController*) aAutomatID_OTMLViewController;

/**
 @discussion Create the DS, at given path, with key as the first component of aPath (splitted by ".").
 After this method is called, AutomatID_OTMLDatasourceHelper will return aElements when any of the resolveDataSourceElementsPath: methods is called with aPath.
 
 @param aAutomatID_OTMLViewController The reference OTMLVC. Can be nil, if nil only mapstack DS will be searched for (via AutomatID_PatternDirector)
 @param dsTarget The path to be searched for. Cannot be nil.
 @param aElements subelements to inject in the new ds.
 @param overwriteDestination entirely overwrite the destination.
 */
+(BOOL) createOrOverrideDSWithPath:(nonnull NSString*) dsTarget
             withElementsFromArray:(nonnull NSArray<AutomatID_OTMLDatasource*>*) aElements
                      withFileName:(nullable NSString*) fileName
                         overwrite:(BOOL)overwriteDestination
              inAutomatID_OTMLViewController:(nullable AutomatID_OTMLViewController*) aAutomatID_OTMLViewController;

/**
 @discussion Create the DS, at given path, with key as the first component of aPath (splitted by ".").
 After this method is called, AutomatID_OTMLDatasourceHelper will return aDS.subelements when any of the resolveDataSourceElementsPath: methods is called with aPath.[].
 
 @param aAutomatID_OTMLViewController The reference OTMLVC. Can be nil, if nil only mapstack DS will be searched for (via AutomatID_PatternDirector)
 @param aPath The path to be searched for. Cannot be nil.
 @param fileName filename means you are saving on file.
 @param ds the DS whose modification you want to commit.
 */
+(BOOL) commitChangesOnDSNamed:(nonnull NSString*) aPath
              overridingWithDS:(nonnull AutomatID_OTMLDatasource *)ds
                  withFileName:(nullable NSString*) fileName
          inAutomatID_OTMLViewController:(nullable AutomatID_OTMLViewController*) aAutomatID_OTMLViewController;


+(nonnull AutomatID_OTMLDatasource *)setInDStheValue:(nullable NSString*)theVal
                              creatingPath:(nonnull NSString*)thePath
                                 pathIndex:(unsigned int)pathIndex
                        toMutableDSElement:(nonnull AutomatID_OTMLDatasource *)aDS
                               followIndex:(BOOL) shouldFollowIndexes
                             createIndexes:(BOOL) shouldCreateIndexes
                     createElementsForPath:(BOOL) shouldCreateIntermediate
                      setEmptyWhenNilValue:(BOOL) setEmptyNilVal;


/***
 @discussion Saves a DS in a file or a otml_store, updating it if exists and creating elements if not
 @param dsTarget MUST be the DS path. CANNOT be nil, shoulf have 2 element "." separated
 @param fileName file name, usually is equal to dsTarget, but can be different. CAN be nil if target is an otml_store
 @param save_ds_delegate an OTMLComponent to whom will be triggered otml_ds_save_ok or otml_ds_save_fail according to save operation result. Can be nil
 @param tmpOver the Mutable DS to save or update. CANNOT be nil
 */
+(void)saveAsDSCreate:(nonnull NSString*)dsTarget
               inFile:(nullable NSString*)fileName
         withDelegate:(nullable AutomatID_OTMLComponent*)save_ds_delegate
       withParameters:(nonnull NSMutableDictionary*)tmpOver
 inAutomatID_OTMLViewController:(nullable AutomatID_OTMLViewController*) aAutomatID_OTMLViewController;


/***
 @discussion 
  Saves a DS in a file or a otml_store, updating it if exists and FAILING if the path does not exists
 @param dsTarget
  MUST be the DS path. CANNOT be nil, shoulf have 2 element "." separated
 @param fileName
  file name, usually is equal to dsTarget, but can be different. CAN be nil if target is an otml_store
 @param save_ds_delegate 
  an OTMLComponent to whom will be triggered otml_ds_save_ok or otml_ds_save_fail according to save operation result. Can be nil
 @param tmpOver 
  the Mutable DS to save or update. CANNOT be nil
 */
+(void)saveAsDSUpdate:(nonnull NSString*)dsTarget
               inFile:(nullable NSString*)fileName
         withDelegate:(nullable AutomatID_OTMLComponent*)save_ds_delegate
       withParameters:(nonnull NSMutableDictionary*)tmpOver
 inAutomatID_OTMLViewController:(nullable AutomatID_OTMLViewController*) aAutomatID_OTMLViewController;

/***
 @discussion Delete a DS path (eventually all the ds content9 in a file or a otml_store, updating it if exists and FAILING if the path does not exists
 @param dsTarget MUST be the DS path. CANNOT be nil, shoulf have 2 element "." separated
 @param fileName file name, usually is equal to dsTarget, but can be different. CAN be nil if target is an otml_store
 @param save_ds_delegate an OTMLComponent to whom will be triggered otml_ds_save_ok or otml_ds_save_fail according to save operation result. Can be nil
 @param tmpOver the Mutable DS to save or update. CANNOT be nil
 */
+(void)saveAsDSDelete:(nonnull NSString*)dsTarget
               inFile:(nullable NSString*)fileName
        withStoreDSID:(nullable NSString*)aStoreDSID
         withDelegate:(nullable AutomatID_OTMLComponent*)save_ds_delegate
       withParameters:(nullable NSMutableDictionary*)tmpOver
 inAutomatID_OTMLViewController:(nullable AutomatID_OTMLViewController*) aAutomatID_OTMLViewController;

@end


