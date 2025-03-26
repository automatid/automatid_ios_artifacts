//
//  FactoryInterface.h
//  OTMLFramework
//
//  Created by MetaModelli
//  Copyright (c) 2017 Opentech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>

@class AutomatID_OTMLConditionModel;

@protocol AutomatID_ConditionFactoryInterface <NSObject>

-(AutomatID_OTMLConditionModel*) newModelfromXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;

@end
