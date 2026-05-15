//
//  OTHTTPMultipartBuilder.h
//  OTMLCore
//
//  Created by Valerio Ferrantelli on 09/05/2019.
//

#import <Foundation/Foundation.h>

@interface AutomatID_MultiPartFormDataObject : NSObject

@property (nonatomic, retain) NSString * key;
@property (nonatomic, retain) NSString * value;
@property (nonatomic, retain) NSData * object;
@property (nonatomic, retain) NSString * contentType;


@end

@interface AutomatID_OTHTTPMultipartBuilder : NSObject

- (NSData *)multipartDataWithParameters:(NSArray<AutomatID_MultiPartFormDataObject*> *)parameters boundary:(NSString **)boundary;

@end

