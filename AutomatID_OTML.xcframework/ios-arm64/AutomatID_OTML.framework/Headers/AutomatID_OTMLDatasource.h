//
//  OTMLMutableDatasourceElement.h
//  OTMLFramework
//
//  Created by epavoni on 31/05/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <AutomatID_OTMLModels/AutomatID_OTMLDatasourceModel.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLDatasourceElementModel.h>

static NSString* const k_load_DS_prefix = @"otml_load_ds_";

@interface AutomatID_OTMLDatasource : NSObject <NSCopying>

+ (AutomatID_OTMLDatasource*) newFilledDatasourceFromString:(NSString*)someXMLString;
+ (AutomatID_OTMLDatasource*) newEmptyOTMLDataSourceWithKey:(NSString*)aKey;
+ (AutomatID_OTMLDatasource*) newWithKey:(NSString*) aKey andValue:(NSString*) aValue;

- (id)init;
- (id)initWithDatasourceElement:(AutomatID_OTMLDatasource*)aDSElement;
- (id)initWithXMLModel_Datasource_NOT_Element:(AutomatID_OTMLDatasourceModel *)aModel;



+ (NSArray*) differingIndexesBetweenRenderedDSBasedModelArray:(NSArray*) last_model_array
                           andActualRetievedDSBasedModelArray:(NSArray*) actual_ds_model_array;

+(NSString*)getJSONFromDictionary:(NSDictionary*)_dict;

- (id) initWithKey:(NSString*)aKey;
- (id) initWithKey:(NSString*)aKey andValue:(NSString*)aValue;
- (id) initWithModel:(AutomatID_OTMLDatasourceElementModel*)aModel;

- (NSArray<AutomatID_OTMLDatasource*>*) getListElement;
- (AutomatID_OTMLDatasource*) getElementAtIndex:(int) _pIndex;
- (NSString*) getKey;
- (NSString*) getValue;
- (NSString*) getJSON;
-(NSString*)getCompactJsonSerializationSkippingRootKey:(BOOL) skipRootKey;
- (void)setKey:(NSString*)aKey;
- (AutomatID_OTMLDatasource*) getElementWithKey:(NSString*) aKey;

-(NSString*)getXML;
-(NSDictionary*) intermediateSerializationObject;

- (void)setValue:(NSString*)aValue;
- (void)setElements:(NSArray*)aElements;
- (void)setElements:(NSArray *)aElements copy:(BOOL)copyElements;

- (void) insertElement:(AutomatID_OTMLDatasource*)anElement
               atIndex:(unsigned int) _pIndex;

- (void) setElement:(AutomatID_OTMLDatasource*)anElement AtIndex:(unsigned int) _pIndex;
- (void) addElement:(AutomatID_OTMLDatasource*)anElement;
- (void) removeElementAtIndex:(unsigned int)_pIndex;
- (void) removeFirstElementWithKey:(NSString*)aKey;
- (void) removeAllElementWithKey:(NSString*)aKey;

- (void)setElement:(AutomatID_OTMLDatasource*)aDatasource;
-(NSString*) simplifiedDescription;

@end
