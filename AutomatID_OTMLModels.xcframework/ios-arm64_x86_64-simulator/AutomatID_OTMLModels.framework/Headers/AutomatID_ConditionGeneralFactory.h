//
//  GeneralFactory.h
//  OTMLFramework
//
//  Created by epavoni on 22/08/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "AutomatID_ConditionFactoryInterface.h"
#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>
#import "AutomatID_OTMLConditionModel.h"

@interface AutomatID_ConditionGeneralFactory : NSObject

+(void) setupConditionResolvers:(NSArray*) aFactoryResolvers;

+(AutomatID_ConditionGeneralFactory*) getInstance;

-(AutomatID_OTMLConditionModel*) newModelfromXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;

@end
