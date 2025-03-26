//
//  AutomatID_OTMLSignChecker.h
//  OTMLFramework
//
//  Created by epavoni on 22/11/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//


@interface AutomatID_OTMLSignChecker : NSObject

+(AutomatID_OTMLSignChecker*)getInstance;
-(BOOL) isB64Sign:(NSString*)aSign validForData:(NSData*)aData;
-(BOOL) isSign:(NSData*)aSign validForData:(NSData*)aData;

@end
