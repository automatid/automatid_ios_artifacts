//
//  GeneralFactory.h
//  OTMLFramework
//
//  Created by epavoni on 22/08/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "LayoutFactoryInterface.h"
#import <AutomatID_OTTBXML/OTTBXML.h>
#import "OTMLLayoutModel.h"

@interface LayoutGeneralFactory : NSObject

+(void) setupLayoutResolvers:(NSArray*) aFactoryResolvers;

+(LayoutGeneralFactory*) getInstance;

-(OTMLLayoutModel*) newModelfromXMLEntry:(OTTBXMLElement*) aEntryElement;

@end
