//
//  AutomatID_OTMLCertPinningChecker.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 25/10/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AutomatID_OTMPHTTPSCertificateModel.h"


@interface AutomatID_OTMLCertPinningChecker : NSObject

+(void)addListOfValidCerts:(NSArray<AutomatID_OTMPHTTPSCertificateModel*>*)listOfValidCerts;

-(BOOL)isCertificatePinningValidUsingWhitelist:(NSArray<AutomatID_OTMPHTTPSCertificateModel*>*)listOfValidCerts
                                andCurrentList:(SecTrustRef)serverTrust;

@end
