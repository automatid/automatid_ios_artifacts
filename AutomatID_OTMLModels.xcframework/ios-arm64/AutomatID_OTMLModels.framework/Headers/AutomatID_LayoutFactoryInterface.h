//
//  FactoryInterface.h
//  OTMLFramework
//
//  Created by MetaModelli
//  Copyright (c) 2017 Opentech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>

@class AutomatID_OTMLLayoutModel;

@protocol AutomatID_LayoutFactoryInterface <NSObject>

-(AutomatID_OTMLLayoutModel*) newModelfromXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;

@end
