//
//  OTMenuDelegate.h
//  com.opentech.toyprojects.accordion
//
//  Created by Silvio D'Angelo on 28/03/2018.
//  Copyright © 2018 Opentech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AutomatID_OTMenuEntryModelStyle.h"
#import "AutomatID_OTMenuEntryModelObject.h"


@protocol AutomatID_OTMenuDelegate

-(AutomatID_OTMenuEntryModelObject *) modelObjectForEntryAtIndex:(NSUInteger)aSectionImdex;
-(AutomatID_OTMenuEntryModelStyle *) styleForFirstLevelEntryAtIndex:(NSUInteger)aSectionImdex;
-(AutomatID_OTMenuEntryModelStyle *) secondLevelEntryViewStyle;
-(NSUInteger) numberOfFirstLevelEntries;

@end
