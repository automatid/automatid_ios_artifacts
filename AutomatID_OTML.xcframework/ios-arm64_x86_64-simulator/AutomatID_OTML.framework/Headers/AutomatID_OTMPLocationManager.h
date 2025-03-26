//
//  OTMPLocationManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 10/12/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//
#ifndef EXCLUDE_COCOA_CORE_LOCATION
#import <CoreLocation/CoreLocation.h>
#endif
#import <AutomatID_OTMLCore/AutomatID_OTMLRestartAppAwareProtocol.h>

@protocol AutomatID_OTMPTrackLocationDelegate <NSObject>

#ifndef EXCLUDE_COCOA_CORE_LOCATION
-(void)trackLocationDidFailWithError:(NSError*)error;
-(void)trackLocationDidUpdateLocation:(CLLocation *)newLocation;
#endif
@end

@protocol AutomatID_OTMPAuthLocationDelegate <NSObject>
-(void)trackLocationPermissionDidDenied;
-(void)trackLocationPermissionDidGuaranted;
@end

#ifndef EXCLUDE_COCOA_CORE_LOCATION
@interface AutomatID_OTMPLocationManager : NSObject <CLLocationManagerDelegate, AutomatID_OTMLRestartAppAwareProtocol>
//** nel caso di continuous accuracy più alta attiva hardware aggiuntivo, usare per power save**/
//** nel caso di single location determina quando chiamare il delegato (al raggiungimento di un accuracy) + accuracy più alta attiva hardware aggiuntivo, usare per power save**/
-(void)setAccuracy:(CLLocationAccuracy)accuracy;
#else
@interface AutomatID_OTMPLocationManager : NSObject <AutomatID_OTMLRestartAppAwareProtocol>
#endif

+(AutomatID_OTMPLocationManager*)getInstance;

@property (nonatomic, strong) NSObject<AutomatID_OTMPAuthLocationDelegate>* locationAuthDelegate;


#pragma mark location authorization status

-(BOOL)needAuthorization;
-(BOOL)isAuthorizationDenied:(BOOL)always;
-(BOOL)isAuthorizationGrantedForAlways;
-(BOOL)isAuthorizationGrantedForForeground;
-(BOOL)isLocationAvailable;
-(void)askLocationPermissions_iOS8:(BOOL)requestAlwaysAuthorization;

#pragma mark continuous location manger
-(void)startTrackLocation;
-(void)stopTrackLocation;

#pragma mark single location manger
-(void)getCurrentLocation;


-(void)addLocationDelegateObject:(NSObject<AutomatID_OTMPTrackLocationDelegate>*)aLocationDelegate;
-(void)removeLocationDelegateObject:(NSObject<AutomatID_OTMPTrackLocationDelegate>*)aLocationDelegate;
-(void)removeAllLocationDelegates;

@end

