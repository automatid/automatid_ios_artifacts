//
//  FactoryInterface.h
//  OTMLFramework
//
//  Created by MetaModelli
//  Copyright (c) 2017 Opentech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <OTTBXML/OTTBXML.h>

@class OTMLConditionModel;

@protocol ConditionFactoryInterface <NSObject>

-(OTMLConditionModel*) newModelfromXMLEntry:(OTTBXMLElement*) aEntryElement;

@end
