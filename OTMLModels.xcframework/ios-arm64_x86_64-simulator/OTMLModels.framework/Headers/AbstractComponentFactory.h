//
//  AbstractComponentFactory.h
//  Pods
//
//  Created by Silvio D'Angelo on 25/05/2017.
//
//

#import <Foundation/Foundation.h>
#import "OTMLComponentModel.h"

#import <OTTBXML/OTTBXML.h>

@class OTMLComponentModel;

@protocol AbstractComponentFactory <NSObject>

-(OTMLComponentModel*)initializeModel:(Class)toInitModel
                              withXML:(OTTBXMLElement*) aEntryElement;

@end
