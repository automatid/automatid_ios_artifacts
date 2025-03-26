//
//  AutomatID_OTMPNetworkTaskErrorFactory.h
//  OTML
//
//  Created by Valerio Ferrantelli on 10/05/2019.
//

#import <Foundation/Foundation.h>


@interface AutomatID_OTMPNetworkTaskErrorFactory : NSObject
+(NSError*)getWrongSignError;
+(NSError*)getFilesystemError;
+(NSError *)getNotValidResponseError;

@end

