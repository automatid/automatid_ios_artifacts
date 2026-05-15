//
//  AutomatID_OTMLManifestAbstractResource.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 05/05/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//
#import "AutomatID_OTMLPadding.h"
#import "AutomatID_OTMLStyleElement.h"

@interface AutomatID_OTMLManifestAbstractResource : NSObject

@property (strong, nonatomic) NSString* resourceName;
@property (strong, nonatomic) NSString* resourceUrl;
@property (strong, nonatomic) NSString* resourceHash;

-(NSString*)enforcedHashing;

@end



@interface AutomatID_OTMLImageDescriptor: AutomatID_OTMLManifestAbstractResource

@property (strong, nonatomic, readonly) NSString* tcap;
@property (strong, nonatomic, readonly) NSString* lcap;
@property (strong, nonatomic, readonly) AutomatID_OTMLPadding* padding;

- (id)initWithName:(NSString *)aName Hash:(NSString *)anHash withURL:(NSString *)anUrl tCap:(NSString *) aTcap lCap:(NSString *)aLcap padding:(NSString*) aPadding;
- (id)initWithFileSerialization:(NSString*)fileSerialization;
- (NSString*) fileSerialization;

@end

@interface AutomatID_OTMLMapDescriptor: AutomatID_OTMLManifestAbstractResource

- (id)initWithName:(NSString *)aMapName withVersion:(NSString *)aVersion withURL:(NSString *)anUrl;

@end


@interface AutomatID_OTMLStyleDescriptor : AutomatID_OTMLMapDescriptor

@property (nonatomic, assign, readonly) AutomatID_OTMLStyleType type;

- (id)initWithName:(NSString *)aMapName withVersion:(NSString *)aVersion withURL:(NSString *)anUrl withType:(NSString *)aType;

@end


