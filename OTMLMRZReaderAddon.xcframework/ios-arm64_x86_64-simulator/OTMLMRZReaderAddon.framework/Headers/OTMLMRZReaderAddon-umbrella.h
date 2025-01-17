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

#import "OTMLMRZReaderConstants.h"
#import "OTML_MRZComponentModelFactory.h"
#import "OTML_MRZComponentModelToObjectInterface.h"
#import "OTMLMrzReaderModel.h"
#import "MRZCustomComponentFactory.h"
#import "OTMLMRZReaderComponent.h"
#import "OTMLMRZReaderAddon.OTVersion.h"

FOUNDATION_EXPORT double OTMLMRZReaderAddonVersionNumber;
FOUNDATION_EXPORT const unsigned char OTMLMRZReaderAddonVersionString[];

