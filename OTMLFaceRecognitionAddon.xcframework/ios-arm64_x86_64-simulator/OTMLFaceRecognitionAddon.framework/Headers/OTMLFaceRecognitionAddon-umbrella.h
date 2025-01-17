#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "OTML_FARComponentModelFactory.h"
#import "OTML_FARComponentModelToObjectInterface.h"
#import "OTMLLivenessCheckModel.h"
#import "OTMLFaceRecognitionDebugMode.h"
#import "OTMLFaceRecognitionAddon.OTVersion.h"
#import "ProjectConfigurationOTMLFaceRecognitionAddon.h"

FOUNDATION_EXPORT double OTMLFaceRecognitionAddonVersionNumber;
FOUNDATION_EXPORT const unsigned char OTMLFaceRecognitionAddonVersionString[];

