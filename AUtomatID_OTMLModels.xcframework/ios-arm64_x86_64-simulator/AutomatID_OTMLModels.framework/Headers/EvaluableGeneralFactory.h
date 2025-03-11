//
//  GeneralFactory.h
//  OTMLFramework
//
//  Created by epavoni on 22/08/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "EvaluableFactoryInterface.h"
#import <AutomatID_OTTBXML/OTTBXML.h>
#import "OTMLEvaluableModel.h"

@interface EvaluableGeneralFactory : NSObject

+(void) setupEvaluableResolvers:(NSArray*) aFactoryResolvers;

+(EvaluableGeneralFactory*) getInstance;

-(OTMLEvaluableModel*) newModelfromXMLEntry:(OTTBXMLElement*) aEntryElement;

@end
