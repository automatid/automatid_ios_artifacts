//
//  OTMPSecureSessionAction.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 15/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//


#import "AutomatID_OTHTTPResponse.h"
@class AutomatID_OTHTTPTask;



typedef enum
{
    AutomatID_OTNetworkInteractionType_post = 0,
    AutomatID_OTNetworkInteractionType_get = 1,
    AutomatID_OTNetworkInteractionType_put = 2,
    AutomatID_OTNetworkInteractionType_delete = 3,
    AutomatID_OTNetworkInteractionType_head = 4,
    AutomatID_OTNetworkInteractionType_patch = 5
} AutomatID_OTNetworkInteractionType;

typedef enum
{
    AutomatID_OTMLNetworkInteractionType_url_encoded = 0,
    AutomatID_OTMLNetworkInteractionType_json = 1,
    AutomatID_OTMLNetworkInteractionType_multipart = 2
} AutomatID_OTMLNetworkParametersEncoding;

@interface AutomatID_OTHTTPTask<__covariant AutomatID_ResponseObjectType> : NSObject{
@protected
    NSString * url;
    AutomatID_OTNetworkInteractionType method;
}

NS_ASSUME_NONNULL_BEGIN
// tipo AutomatID_ResponseTransformation : torna un oggetto di tipo AutomatID_ResponseObjectType dato un oggetto di tipo AutomatID_OTHTTPResponse
typedef AutomatID_ResponseObjectType _Nonnull(^AutomatID_ResponseTransformation)(AutomatID_OTHTTPResponse* _Nonnull);

// tipo AutomatID_NetworkTaskCompletion : su possono usare l'oggetto di tipo AutomatID_ResponseObjectType ed un eventuale oggetto errore. I due sono mutualmente esclusivi.
typedef void(^AutomatID_NetworkTaskCompletion)(AutomatID_ResponseObjectType _Nullable, NSError* _Nullable);

// da usare, se non si è interessati a definire "AutomatID_ResponseTransformation"
// ==> in pratica, quando si è covariante con "AutomatID_ResponseObjectType" = AutomatID_OTHTTPResponse
-(void) performAsyncNetworkTaskWithCompletion:(AutomatID_NetworkTaskCompletion) completion;

// da usare se si ha necessità di ridefinire la fase di costruzione dell'oggetto response
-(void) performWithTransformation:(AutomatID_ResponseTransformation) transformation
            withNetworkCompletion:(AutomatID_NetworkTaskCompletion) completion;



typedef void(^AutomatID_ProgressElaborationBlock)(NSNumber* aProgress);


-(void) setDownloadProgressHandler:(AutomatID_ProgressElaborationBlock)downloadHandler
             uploadProgressHandler:(AutomatID_ProgressElaborationBlock)uploadHandler;

-(void) handleProcessingOfData:(NSData *) taskData
               withURLResponse:(NSURLResponse *)taskResponse
              withNetworkError:(NSError *) taskError
         andWithTransformation:(AutomatID_ResponseTransformation) tranformation;

@property (nonatomic, strong, readonly) NSURLRequest * request;
@property (nonatomic, strong, readonly) NSHTTPURLResponse * response;

@property (nonatomic, readonly, strong) NSURLSession* currentSession;
@property (nonatomic, readonly, strong) NSURLSessionTask* currentTask;

@property (nonatomic, readonly, strong) NSMutableDictionary<NSString*, NSString*>* mutableHeaderDict;


@property (nonatomic, strong) NSDictionary* userInfo;
@property (nonatomic, assign) BOOL forceCompletitionMainThread;


-(id) initWithURL:(NSString*) aUrl
        andMethod:(AutomatID_OTNetworkInteractionType) aMethod
     usingSession:(NSURLSession*) aSession;

-(void)abortNetworkTask;

-(void)setRequestParametersEncoding:(AutomatID_OTMLNetworkParametersEncoding)anEncoding;

-(void)setRequestParameters:(NSDictionary*)aParameters;
-(NSDictionary*)getRequestParameters;

-(NSURLResponse *)getResponse;

-(NSMutableDictionary<NSString*, NSString*>*)getMutableHeaderDict;
-(void)setMutableHeaderDict:(NSMutableDictionary<NSString*, NSString*>*)aMutableHeaderDict;

-(AutomatID_OTNetworkInteractionType)getMethod;

-(void)setRequestMultiPartParameters:(NSArray*)aParameters;

-(void)setRequestBody:(NSData*)aBodyRequest;

-(void)addHttpHeaders:(NSDictionary*)aHeaders;

-(NSMutableURLRequest *)buildRequest;

-(void)setDownloadProgressValue:(NSNumber*)aProgressValue;
-(void)setUploadProgressValue:(NSNumber*)aProgressValue;

-(NSString*)getCurrentSessionName;
-(void)taskWillExecute:(NSURLSessionTask*)aTask;
-(void)taskDidExecute:(NSURLSessionTask*)aTask;



+(void)setHeaders:(NSDictionary<NSString*,NSString*>*)aAdditionalHeaders onHeaderMutableDictionary:(NSMutableDictionary<NSString*, NSString*>*)aHeaders;

+(void)addCommonHttpHeaders:(NSDictionary*)aHeaders;
+(long long)serverTimestampOffset;

NS_ASSUME_NONNULL_END

@end
