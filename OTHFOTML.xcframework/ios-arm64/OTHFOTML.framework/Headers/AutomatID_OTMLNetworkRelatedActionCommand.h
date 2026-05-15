//
//  OTMLNetworkRelatedActionCommand.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 25/11/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLActionCommand.h"
#import "AutomatID_OTMLActionCommandSet.h"



@interface AutomatID_OTMLRawPostRequestBean : NSObject

@property (nonatomic, readonly) NSString* target;
@property (nonatomic, readonly) NSString* cacheTag;
@property (nonatomic, readonly) BOOL shouldPrefetch;
@property (nonatomic, readonly) BOOL shouldSkipLoading;
@property (nonatomic, readonly) BOOL shouldSkipCache;
@property (nonatomic, readonly) BOOL shouldDisableStackManagement;
@property (nonatomic, readonly) NSData* body;
@property (nonatomic, readonly) NSDictionary* additionalHeaders;
@property (nonatomic, readonly) NSString* originalContextID;

-(instancetype)init __attribute__((unavailable("Init not available. Please use OTMLImage +otmlImageFromDescriprion: to build an OTMLImage")));

-(instancetype)initWithTarget:(NSString*)target
                     cacheTag:(NSString*) cacheTag
                     prefetch:(BOOL)shouldPrefetch
                  skipLoading:(BOOL)shouldSkipLoading
                    skipCache:(BOOL)shouldSkipCache
       disableStackManagement:(BOOL)shouldDisableStackManagement
                         body:(NSData*)body
            additionalHeaders:(NSDictionary*)additionalHeaders
          inOriginalContextID:(NSString*)originalContextID;

+(AutomatID_OTMLRawPostRequestBean *)rawPostBeanWithAction:(AutomatID_OTMLResolvedAction *)aAction;

+(AutomatID_OTMLRawPostRequestBean *)rawPostBeanWithTarget:(NSString*) target
                                  withParameters:(NSDictionary<NSString*,NSString*>*)parameters
                             withSourceComponent:(AutomatID_OTMLComponent*)sourceComponent;
@end
@interface AutomatID_OTMLNetworkRelatedActionCommand : AutomatID_OTMLActionCommandSet
@end
@interface AutomatID_OTMLPrefetchCommand : AutomatID_OTMLActionCommand
@end
@interface AutomatID_OTMLInvalidateSessionDSHashes : AutomatID_OTMLActionCommand
@end
@interface AutomatID_OTMLCacheCommand : AutomatID_OTMLActionCommand
@end
@interface AutomatID_OTMLAddWebviewCookieCommand : AutomatID_OTMLActionCommand
@end
@interface AutomatID_OTMLNavigationRelatedCommand : AutomatID_OTMLActionCommand
@end
@interface AutomatID_OTMLRawPostCommand : AutomatID_OTMLActionCommand
@end
@interface AutomatID_OTMLJavascriptCommand : AutomatID_OTMLActionCommand
@end
@interface AutomatID_OMTLIdLvL2SetUserIdCommand : AutomatID_OTMLActionCommand
@end
@interface AutomatID_OMTLIdLvL2ResetUserIdCommand : AutomatID_OTMLActionCommand
@end

