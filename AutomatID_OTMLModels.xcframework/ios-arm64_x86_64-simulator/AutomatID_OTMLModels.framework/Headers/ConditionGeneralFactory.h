//
//  GeneralFactory.h
//  OTMLFramework
//
//  Created by epavoni on 22/08/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ConditionFactoryInterface.h"
#import <AutomatID_OTTBXML/OTTBXML.h>
#import "OTMLConditionModel.h"

@interface ConditionGeneralFactory : NSObject

+(void) setupConditionResolvers:(NSArray*) aFactoryResolvers;

+(ConditionGeneralFactory*) getInstance;

-(OTMLConditionModel*) newModelfromXMLEntry:(OTTBXMLElement*) aEntryElement;

@end
