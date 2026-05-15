/*
 * AutomatID_SMJEvaluationContextImpl.h
 *
 * Copyright 2020 Avérous Julien-Pierre
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


/* Adapted from https://github.com/json-path/JsonPath/blob/master/json-path/src/main/java/com/jayway/jsonpath/internal/path/EvaluationContextImpl.java */


#import <Foundation/Foundation.h>

#import "AutomatID_SMJEvaluationContext.h"
#import "AutomatID_SMJConfiguration.h"

#import "AutomatID_SMJPath.h"
#import "AutomatID_SMJPathRef.h"


NS_ASSUME_NONNULL_BEGIN


/*
** Types
*/
#pragma mark - Types


typedef enum AutomatID_SMJEvaluationContextStatus
{
	SMJEvaluationContextStatusDone,
	SMJEvaluationContextStatusAborted
} SMJEvaluationContextStatus;



/*
** AutomatID_SMJEvaluationContextImpl
*/
#pragma mark - AutomatID_SMJEvaluationContextImpl

@interface AutomatID_SMJEvaluationContextImpl : NSObject <AutomatID_SMJEvaluationContext>

// -- Instance --
- (instancetype)initWithPath:(id <AutomatID_SMJPath>)path rootJsonObject:(id)rootJsonObject configuration:(AutomatID_SMJConfiguration *)configuration forUpdate:(BOOL)forUpdate;

// -- Result --
- (SMJEvaluationContextStatus)addResult:(NSString *)path operation:(AutomatID_SMJPathRef *)operation jsonObject:(id)jsonObject;

// -- Update --
@property (readonly, getter=isForUpdate) BOOL forUpdate;

// -- Cache --
@property (readonly) NSMutableDictionary <NSString *, id> *evaluationCache;

@end


NS_ASSUME_NONNULL_END
