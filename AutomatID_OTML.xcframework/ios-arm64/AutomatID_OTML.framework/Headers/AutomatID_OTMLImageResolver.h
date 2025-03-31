//
//  AutomatID_OTMLImageResolver.h
//  OTML
//
//  Created by Alessandro Ruggeri on 11/06/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//


#import "AutomatID_OTMLImage.h"
#import <AutomatID_OTMLCore/AutomatID_OTMLRestartAppAwareProtocol.h>

@class AutomatID_OTMLImageDescriptor;
@class AutomatID_OTMLParameter;

typedef enum {
    OTMLImageResolverLocation_resource = 0,
    OTMLImageResolverLocation_file = 1,
    OTMLImageResolverLocation_mem = 2
} OTMLImageResolverLocation;

@interface AutomatID_OTMLImageResolverLocationSupport : NSObject

+(OTMLImageResolverLocation) valueFromString:(nullable NSString*) aStringValue;
+(nonnull NSString*) stringFromValue:(OTMLImageResolverLocation) aValue;

@end


@interface AutomatID_OTMLImageResolver : NSObject <AutomatID_OTMLRestartAppAwareProtocol>

-(nonnull instancetype) init __attribute__((unavailable("init not available")));

+ (nonnull instancetype)sharedInstance;

/**
 @discussion 
  Clean the image buffer in use to avoid multple file loading
 */
-(void)cleanImgBuffer;

/**
 @discussion 
  Returns an OTMLImage giving its description.
 @param otmlImageFromDescriprion
  the String representing the OTMLImage. This can be a resource name or a B64:<b64data> description
 @return 
  the OTMLImage or nil if the image cannot be built
 */
-(nullable AutomatID_OTMLImage*) otmlImageFromDescriprion:(nullable NSString*) otmlImageFromDescriprion;

/**
 @discussion 
  Create an OTMLImage from OTML Resources defined in the current manifest update.
 @note 
  DO NOT use this method directly if you just want an OTMLImage, please use the otmlImageFromDescriprion methods
 @param aOTMLResourceName 
  The otml resource name
 @return 
  the OTMLImage or nil if the image cannot be built
 **/
-(nullable AutomatID_OTMLImage*) createOTMLImageFromOTMLResourcesWithName:(nullable NSString*) aOTMLResourceName;

/**
 @discussion 
  Create an OTMLImage from Base64.
 @note 
  DO NOT use this method directly if you just want an OTMLImage, please use the otmlImageFromDescriprion methods
 @param aBase64String
  The base 64 string representing an image data. Note that this string DOES NOT INCLUDES the B64 prefix
 @param aOTMLImageDescriptor 
  The AutomatID_OTMLImageDescriptor
 @return 
  the OTMLImage or nil if the image cannot be built
 **/
-(nullable AutomatID_OTMLImage*) createOTMLImageFromBase64String:(nullable NSString*) aBase64String
                                        withDescriptor:(nullable AutomatID_OTMLImageDescriptor*)aOTMLImageDescriptor;

/**
 @discussion
  Makes an OTMLImage from UIImage.
 @param aUIImage 
  The image to convert
 @param aOTMLImageDescriptor 
  The AutomatID_OTMLImageDescriptor
 @return 
  the OTMLImage
 **/
-(nullable AutomatID_OTMLImage*) createOTMLImageFromUIImage:(nullable UIImage*) aUIImage
                                   withDescriptor:(nullable AutomatID_OTMLImageDescriptor*)aOTMLImageDescriptor;

-(nullable NSString*) saveOTMLImage:(nullable AutomatID_OTMLImage*)aOTMLImage
                InFileOrMemWithPath:(nullable NSString*)aImageFilePath
                             format:(AutomatID_OTMLImageOutputFormat)outputFormat
                            quality:(NSInteger)aQuality;

@end
