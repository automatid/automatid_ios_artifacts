//
//  AutomatID_OTMPStreamedVideoMetaData.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 31/10/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLDatasource.h"

@interface AutomatID_OTMPStreamedVideoMetaData : NSObject

-(id) initWithDatasourceElement:(AutomatID_OTMLDatasource*) aElement;
-(id) initWithDatasourceElement:(AutomatID_OTMLDatasource*) aElement withBaseAddr:(NSString*)aBaseAddr withSignature:(NSString*) aSignature withFragment:(NSString*)aFragment;

-(NSString*) urlToInvokeOnZeroBasedFragment:(int) aFragmentIndex;
-(int) numberOfFragments;
-(NSString*) signatureForRequests;

@end
