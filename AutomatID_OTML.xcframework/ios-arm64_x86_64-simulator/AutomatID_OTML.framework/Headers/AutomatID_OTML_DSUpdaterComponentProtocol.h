//
//  AutomatID_OTML_DSUpdaterComponentProtocol.h
//  OTMLFramework
//
//  Created by epavoni on 14/03/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//


@class AutomatID_OTMLDatasource;

@protocol AutomatID_OTML_DSUpdaterComponentProtocol

-(AutomatID_OTMLDatasource*) getLastResponseDSForID:(NSString*) anID;

@end
