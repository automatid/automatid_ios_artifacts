//
//  AutomatID_OTMLSessionDatasourceHelper.h
//  OTML
//
//  Created by Valerio Ferrantelli on 18/04/2019.
//

#import <Foundation/Foundation.h>
#import <AutomatID_OTMLCore/AutomatID_OTMLRestartAppAwareProtocol.h>
#import "AutomatID_OTMLSessionDatasource.h"

@interface AutomatID_OTMLSessionStoreDSReference : NSObject

-(instancetype)initWithDSHash:(NSString*)aDSHash withTimestamp:(long long)aTimestamp;
@property(nonatomic, readonly) NSString* dsHash;
@property(nonatomic, readonly) long long timestamp;

@end

@interface AutomatID_OTMLSessionDatasourceHelper : NSObject <AutomatID_OTMLRestartAppAwareProtocol>

+(AutomatID_OTMLSessionDatasourceHelper*)getInstance;

-(NSDictionary<NSString*, AutomatID_OTMLSessionStoreDSReference*>*) getSessionStoreDS;
-(void) resetSessionStoreDS;
-(void) addSessionDSs:(NSArray<AutomatID_OTMLSessionDatasource*>*)aSessionDatasourceList;
-(NSString*)getStoreDSHTTPHeadersValue;

@end

