//
//  OTMLSimpleGeoMap.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/08/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLComponent.h"

#ifndef EXCLUDE_COCOA_CORE_LOCATION
#import <MapKit/MapKit.h>
@interface OTMLGeoMapComponent : OTMLComponent<MKMapViewDelegate>
#else
@interface OTMLGeoMapComponent : OTMLComponent
#endif

@end
