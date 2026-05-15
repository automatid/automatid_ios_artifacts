/*
 * SMJRootPathToken.h
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


/* Adapted from https://github.com/json-path/JsonPath/blob/master/json-path/src/main/java/com/jayway/jsonpath/internal/path/RootPathToken.java */


#import "AutomatID_SMJPathToken.h"

#import "AutomatID_SMJPathTokenAppender.h"


NS_ASSUME_NONNULL_BEGIN


/*
** SMJRootPathToken
*/
#pragma mark - SMJRootPathToken

@interface AutomatID_SMJRootPathToken : AutomatID_SMJPathToken

// -- Instance --
- (instancetype)initWithRootToken:(unichar)rootToken;

// -- Content --
- (AutomatID_SMJRootPathToken *)appendPathToken:(AutomatID_SMJPathToken *)next;

@property (readonly) id <AutomatID_SMJPathTokenAppender> pathTokenAppender;
@property (nonatomic) AutomatID_SMJPathToken *tail;


// -- Property --
@property (readonly, getter=isFunctionPath) BOOL functionPath;

@end


NS_ASSUME_NONNULL_END
