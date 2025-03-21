//
//  OTMLLocationManager.h
//  OTMLFramework
//
//  Created by Enrico Pavoni on 02/07/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "PatternDirector.h"
#ifndef EXCLUDE_COCOA_CORE_LOCATION
#import <CoreLocation/CoreLocation.h>
#endif

@protocol OTMPTrackLocationDelegate;

@interface OTMLLocationSearchBean : NSObject

@property (nonatomic, assign)BOOL reset_last_location_before_start_tracking;
@property (nonatomic, assign)BOOL is_use_gps_auto_selection;
@property (nonatomic, assign)BOOL is_use_gps_enabled;
@property (nonatomic, assign)BOOL is_single_location_mode_enabled;
@property (nonatomic, assign)NSInteger horizontal_accuracy;
@property (nonatomic, assign)NSInteger timeout;
@property (nonatomic, assign)NSInteger min_last_location_polling;

@end

@interface OTMLLocationProvider : NSObject <OTMLRestartAppAwareProtocol, OTMPTrackLocationDelegate>
#ifndef EXCLUDE_COCOA_CORE_LOCATION
@property (nonatomic, readonly) CLLocation* lastLocation;
#endif


+(OTMLLocationProvider*)getInstance;
-(void)startLocationWithSearchBean:(OTMLLocationSearchBean*)aSearchBean;
-(void)stopLocation;

@end
