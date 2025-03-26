//
//  FactoryInterface.h
//  OTMLFramework
//
//  Created by MetaModelli
//  Copyright (c) 2017 Opentech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>

@class AutomatID_OTMLComponentModel;

@protocol AutomatID_ComponentFactoryInterface <NSObject>

-(AutomatID_OTMLComponentModel*) newModelfromXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;

@end
