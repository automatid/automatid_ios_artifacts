//
//  FactoryInterface.h
//  OTMLFramework
//
//  Created by MetaModelli
//  Copyright (c) 2017 Opentech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AutomatID_OTTBXML/OTTBXML.h>

@class OTMLLayoutModel;

@protocol LayoutFactoryInterface <NSObject>

-(OTMLLayoutModel*) newModelfromXMLEntry:(OTTBXMLElement*) aEntryElement;

@end
