//
//  AutomatID_OTMLImage.h
//  OTML
//
//  Created by Alessandro Ruggeri on 03/09/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLUpdateManifestSection.h"
#import "AutomatID_OTMLManifestAbstractResource.h"

typedef enum {
    AutomatID_OTMLImageOutputFormat_jpg = 0,
    AutomatID_OTMLImageOutputFormat_png = 1
} AutomatID_OTMLImageOutputFormat;

@interface AutomatID_OTMLImageOutputFormatSupport : NSObject

+(AutomatID_OTMLImageOutputFormat) valueFromString:(nullable NSString*) aStringValue;
+(nonnull NSString*) stringFromValue:(AutomatID_OTMLImageOutputFormat) aValue;

@end


@interface AutomatID_OTMLImage : NSObject<NSCopying>

-(nullable instancetype) initWithUIImage:(nonnull UIImage*)anImage
                          imgDescription:(nullable AutomatID_OTMLImageDescriptor*) aImageDescriptor;

-(nonnull instancetype) init __attribute__((unavailable("Init not available. Please use OTMLImage +otmlImageFromDescriprion: to build an OTMLImage")));

+(nullable AutomatID_OTMLImage*) otmlImageFromDescriprion:(nullable NSString*) aImgDescription;

@property (nonatomic, readonly) AutomatID_OTMLImageDescriptor* _Nonnull imageDescription;
@property (nonatomic, readonly) UIImage* _Nonnull image;


-(nullable NSData*)imageDataWithFormat:(AutomatID_OTMLImageOutputFormat)outputFormat quality:(NSInteger)aQuality;

/**
 produce a string representing the OTML image with format B64:<image data>
 @param outputFormat export using this format.  Please note that only png supports alpha channel and only jp
 @param aQuality export quality. Please note that only jpeg format will use jpeg quality, but this will not support alpha channel
 @return the OTML Image in string format (B64)
 */
-(nullable NSString*) representInOTMLB64WithFormat:(AutomatID_OTMLImageOutputFormat)outputFormat quality:(NSInteger)aQuality;
-(nullable NSString*) representInFileOrMemWithPath:(nullable NSString*)aImageFilePath format:(AutomatID_OTMLImageOutputFormat)outputFormat quality:(NSInteger)aQuality;

@end
