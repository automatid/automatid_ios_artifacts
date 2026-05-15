//
//  OTMLRowLinearContainer.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 07/08/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLLinearContainer.h"

@class AutomatID_OTMLListCellContainerModel;

@interface AutomatID_OTMLRowLinearContainer : AutomatID_OTMLLinearContainer

-(void) setHierarchicOriginalSection:(NSInteger)aSection;
-(void) setHierarchicOriginaldRow:(NSInteger)aRow;

@end
