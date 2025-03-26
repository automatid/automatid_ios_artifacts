//
//  GeneralFactory.h
//  OTMLFramework
//
//  Created by epavoni on 22/08/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "AutomatID_ComponentFactoryInterface.h"
#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>
#import "AutomatID_OTMLComponentModel.h"

@interface AutomatID_ComponentGeneralFactory : NSObject

+(void) setupComponentResolvers:(NSArray*) aFactoryResolvers;

+(AutomatID_ComponentGeneralFactory*) getInstance;

-(AutomatID_OTMLComponentModel*) newModelfromXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;

@end
