//
//  UIApplication+AutomatID_BSMobileProvision.h
//
//  Created by kaolin fire on 2013-06-24.
//  Copyright (c) 2013 The Blindsight Corporation. All rights reserved.
//  Released under the BSD 2-Clause License (see LICENSE)


typedef NS_ENUM(NSInteger, UIApplicationReleaseMode) {
	UIApplicationReleaseUnknown,
	UIApplicationReleaseSim,
	UIApplicationReleaseDev,
	UIApplicationReleaseAdHoc,
	UIApplicationReleaseAppStore,
	UIApplicationReleaseEnterprise,
};

@interface UIApplication (AutomatID_BSMobileProvision)

-(UIApplicationReleaseMode) releaseMode;

@end
