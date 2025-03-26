//
//  AutomatID_OTMLAbstractClauseConditionResolver.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 10/05/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <AutomatID_OTMLModels/AutomatID_OTMLClauseTypes.h>
#import "AutomatID_OTMLParameterDataFetcher.h"

@interface AutomatID_OTMLAbstractClauseConditionResolver : NSObject

- (BOOL) canResolveConditionWithType:(AutomatID_OTMLClauseTypes)aType;

- (BOOL) isClauseValidWithType:(AutomatID_OTMLClauseTypes)aType
        usingResolvedOperators:(NSDictionary*)operators
   andResolvedDefaultOperators:(NSDictionary*)defaultOperators;

- (NSString*) conditionResolutionDescriptionWithType:(AutomatID_OTMLClauseTypes)aType
                              usingResolvedOperators:(NSDictionary*)operators
                         andResolvedDefaultOperators:(NSDictionary*)defaultOperators
                             andUnresolvedParameters:(NSDictionary*)unresolvedOperators;

@end
