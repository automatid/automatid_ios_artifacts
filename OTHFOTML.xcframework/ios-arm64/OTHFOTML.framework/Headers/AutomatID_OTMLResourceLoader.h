//
//  AutomatID_OTMLResourceLoader.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 02/12/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

@class AutomatID_OTMLSignedFile;
@class AutomatID_OTMLSignedData;
@class AutomatID_OTMLMapStackEntry;
@class AutomatID_OTMLImage;


/**
 Nota: questo lavora sempre sul "current updater descriptor"
 
 **/
@interface AutomatID_OTMLResourceLoader : NSObject

+(AutomatID_OTMLResourceLoader*)getInstance;

-(AutomatID_OTMLMapStackEntry*) loadMapWithName:(NSString*)aMapName;
-(AutomatID_OTMLMapStackEntry*) loadMapWithName:(NSString*)aMapName contextTarget:(NSString*)context;

-(AutomatID_OTMLImage*)loadImageWithName:(NSString*)aImageName;
-(NSData*)loadStyleWithName:(NSString*)aStyleName;


@end
