//
//  GeneralFactory.h
//  OTMLFramework
//
//  Created by epavoni on 22/08/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "AutomatID_LayoutFactoryInterface.h"
#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>
#import "AutomatID_OTMLLayoutModel.h"

@interface AutomatID_LayoutGeneralFactory : NSObject

+(void) setupLayoutResolvers:(NSArray*) aFactoryResolvers;

+(AutomatID_LayoutGeneralFactory*) getInstance;

-(AutomatID_OTMLLayoutModel*) newModelfromXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;

@end
