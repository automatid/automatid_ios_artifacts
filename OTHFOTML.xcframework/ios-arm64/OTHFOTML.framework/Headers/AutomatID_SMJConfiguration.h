/*
 * AutomatID_SMJConfiguration.h
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


/* Adapted from https://github.com/json-path/JsonPath/blob/master/json-path/src/main/java/com/jayway/jsonpath/Configuration.java */


#import <Foundation/Foundation.h>

#import "AutomatID_SMJOption.h"
#import "AutomatID_SMJEvaluationListener.h"


NS_ASSUME_NONNULL_BEGIN


/*
** AutomatID_SMJConfiguration
*/
#pragma mark - AutomatID_SMJConfiguration

@interface AutomatID_SMJConfiguration : NSObject <NSCopying>

// -- Instance --
+ (instancetype)defaultConfiguration;

+ (instancetype)configurationWithOption:(SMJOption)option;

// Listeners.
- (void)addListener:(id <AutomatID_SMJEvaluationListener>)listener;
- (void)removeListener:(id <AutomatID_SMJEvaluationListener>)listener;

@property (nonatomic) NSArray <id <AutomatID_SMJEvaluationListener>> *evaluationListeners;

// Options.
- (BOOL)containsOption:(SMJOption)option;
- (void)addOption:(SMJOption)option;

@end


NS_ASSUME_NONNULL_END
