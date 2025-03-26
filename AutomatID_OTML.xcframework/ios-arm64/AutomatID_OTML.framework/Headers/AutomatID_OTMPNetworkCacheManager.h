//
//  AutomatID_OTMPNetworkCacheManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 20/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import <AutomatID_OTMLCore/AutomatID_OTMLRestartAppAwareProtocol.h>

@class AutomatID_OTMLNetworkResponse;

@interface AutomatID_OTMPCacheItemDescription : NSObject

@property(nonatomic, readonly) NSString* cacheID;
@property(nonatomic, readonly) NSString* etag;

@end

@interface AutomatID_OTMPNetworkCacheManager : NSObject <AutomatID_OTMLRestartAppAwareProtocol>

-(instancetype)init __attribute__((unavailable("Init not available. Please use OTMLImage +otmlImageFromDescriprion: to build an OTMLImage")));
+(AutomatID_OTMPNetworkCacheManager*)getInstance;
-(AutomatID_OTMLNetworkResponse*)checkCachedResponseWithTarget:(NSString*)aTarget
                                         andParameters:(NSDictionary*)aParameters
                                             andMethod:(NSString*)method;

-(void)addNetworkCacheResponse:(AutomatID_OTMLNetworkResponse*) _pResponse;
-(NSArray<AutomatID_OTMPCacheItemDescription*>*)cacheItemsDescriptionWithRegex:(NSRegularExpression *)aRegex;
-(NSArray<AutomatID_OTMPCacheItemDescription*>*)cacheItemsDescriptionWithID:(NSString *)aCacheID;
-(void)cleanNetworkCache;
-(void)cleanNetworkCacheWithID:(NSString*)aCacheID;
-(void)cleanNetworkCacheWithRegex:(NSRegularExpression *)aRegex;



@end
