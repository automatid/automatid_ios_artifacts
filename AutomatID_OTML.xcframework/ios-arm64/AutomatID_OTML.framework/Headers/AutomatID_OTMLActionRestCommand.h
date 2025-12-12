//
//  OTMLActionRestCommand.h
//  OTMLFramework
//
//  Created by Alessandro Ruggeri on 25/01/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLActionCommandSet.h"

typedef NS_ENUM(NSUInteger, AutomatID_OTResponseStorage) {
    OTResponseStorage_Datasource,
    OTResponseStorage_RAM_STORAGE
};

@interface AutomatID_OTMLActionRestCommand : AutomatID_OTMLActionCommand

@property AutomatID_OTResponseStorage resposeStoragePolicy;

@end
