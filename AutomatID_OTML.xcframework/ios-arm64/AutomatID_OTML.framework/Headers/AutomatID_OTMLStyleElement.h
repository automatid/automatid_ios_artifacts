//
//  AutomatID_OTMLStyleElement.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 29/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import <AutomatID_OTMLModels/AutomatID_OTMLComponentModel.h>
#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>

typedef enum {
	AutomatID_OTMLStyleTypeComponent = 0,
    AutomatID_OTMLStyleTypeClass = 1,
    AutomatID_OTMLStyleTypeID = 2,
    AutomatID_OTMLStyleTypeBehaviour = 3
} AutomatID_OTMLStyleType;

@interface AutomatID_OTMLStyleElement : NSObject

@property (nonatomic, strong) AutomatID_OTMLComponentModel * stylemodel;
@property (nonatomic, assign) AutomatID_OTTBXMLElement * xmlElement;
@property (nonatomic, assign) AutomatID_OTMLStyleType type;

+(NSString*)styleTypeStringWith:(AutomatID_OTMLStyleType)styleType;

@end
