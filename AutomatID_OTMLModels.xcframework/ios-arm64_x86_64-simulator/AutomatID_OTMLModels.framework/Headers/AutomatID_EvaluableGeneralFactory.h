//
//  GeneralFactory.h
//  OTMLFramework
//
//  Created by epavoni on 22/08/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "AutomatID_EvaluableFactoryInterface.h"
#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>
#import "AutomatID_OTMLEvaluableModel.h"

@interface AutomatID_EvaluableGeneralFactory : NSObject

+(void) setupEvaluableResolvers:(NSArray*) aFactoryResolvers;

+(AutomatID_EvaluableGeneralFactory*) getInstance;

-(AutomatID_OTMLEvaluableModel*) newModelfromXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;

@end
