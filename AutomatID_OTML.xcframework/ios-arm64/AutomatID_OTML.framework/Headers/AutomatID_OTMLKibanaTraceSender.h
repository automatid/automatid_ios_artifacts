//
//  AutomatID_OTMLKibanaTraceSender.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 30/03/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLTraceConfigurator.h"

@class AutomatID_OTMLHTTPTask;

/**
Si occupa di gestire l'invio verso Kibana di tracciature
 **/
@interface AutomatID_OTMLKibanaTraceSender : NSObject <AutomatID_OTMLTraceSenderDelegate>

@property (nonatomic, strong) NSString* traceFilesFolder;
@property (nonatomic, readonly) BOOL isReadyToSend;
///

@property (nonatomic, retain) NSString* endpoint;

/** SubFolder nella folder Trace dove salvare le tracciature temporanee **/
-(void)setTraceFilesFolder:(NSString*)aFolder;

/** Per la cifratura del body **/
-(void)setHTTPBodyEncriptionRSAPublicKey:(NSData*)pubKey;


@end
