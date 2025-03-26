//
//  AbstractComponentFactory.h
//  Pods
//
//  Created by Silvio D'Angelo on 25/05/2017.
//
//

#import <Foundation/Foundation.h>
#import "AutomatID_OTMLComponentModel.h"

#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>

@class AutomatID_OTMLComponentModel;

@protocol AutomatID_AbstractComponentFactory <NSObject>

-(AutomatID_OTMLComponentModel*)initializeModel:(Class)toInitModel
                                        withXML:(AutomatID_OTTBXMLElement*) aEntryElement;

@end
