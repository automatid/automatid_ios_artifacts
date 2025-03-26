//
//  OTMLNetworkHeadersManeger.h
//  OTML
//
//  Created by Valerio Ferrantelli on 23/04/18.
//

#import <Foundation/Foundation.h>
#import <AutomatID_OTMLCore/AutomatID_OTMLRestartAppAwareProtocol.h>
@class AutomatID_OTMLComponent;

@interface AutomatID_OTMLNetworkHeadersManager : NSObject <AutomatID_OTMLRestartAppAwareProtocol>

+(AutomatID_OTMLNetworkHeadersManager*)getInstance;

+(void) addCommonsHeaders:(NSDictionary<NSString*,NSString*>*) headers;

-(NSMutableDictionary*)getHeaders;
-(NSMutableDictionary*)getHeadersWithManifestWithoutBundleInfo;
-(NSMutableDictionary*)getHeadersWithoutManifestWithoutBundleInfo;
-(NSMutableDictionary*)getHeadersWithBundleWithoutManifestInfo;
-(NSMutableDictionary*)getCacheableBundleHeaders;

-(NSMutableDictionary*)getComponentDrivenHeaders:(AutomatID_OTMLComponent*) aComponent;
-(void)resetCache;


@end
