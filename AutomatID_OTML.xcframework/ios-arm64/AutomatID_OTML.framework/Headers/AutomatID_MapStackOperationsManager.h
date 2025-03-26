//
//  AutomatID_MapStackOperationsManager.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 23/12/15.
//  Copyright © 2015 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AutomatID_OTMLContextContainerViewController.h"
#import "AutomatID_MapStack.h"

@interface AutomatID_MapStackOperationsManager : NSObject

+(AutomatID_OTMLMapStackEntry*)performStackDirectivities:(NSString*) aStackDirectivities
                                    onMapStack:(AutomatID_MapStack*) aMapStack
                        withResponseDatasource:(NSDictionary*)aRespDatasource
                                 withPutTarget:(NSString*) aTarget
                                   withNavMark:(BOOL)isForPost
                          withOTMLPiggibackMap:(AutomatID_OTMLMapStackEntry*) aPiggibackEntry
                                 withContextID:(NSString*)aContextID
                             skipBackAnimation:(BOOL)shouldSkipBackAnimation
                            withUIStackHandler:(AutomatID_OTMLContextContainerViewController*) aContextsController;

+(void) performPopOperationwithContextID:(NSString*) aContextID
                              onMapStack:(AutomatID_MapStack*) targetStack
                      withUIStackHandler:(AutomatID_OTMLContextContainerViewController*) aContextsController;

@end
