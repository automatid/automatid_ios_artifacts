//
//  AutomatID_SDiOSVersion.h
//  OTML
//
//  Copyright (c) 2020 opentech.com. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, AutomatID_DeviceVersion){
    UnknownDevice,
    Simulator,
	
    iPhone4,
    iPhone4S,
    iPhone5,
    iPhone5C,
    iPhone5S,
    iPhone6,
    iPhone6Plus,
    iPhone6S,
    iPhone6SPlus,
    iPhone7,
    iPhone7Plus,
    iPhone8,
    iPhone8Plus,
    iPhoneX,
    iPhoneSE,
    iPhoneXS,
    iPhoneXSMax,
    iPhoneXR,
    iPhone11,
    iPhone11Pro,
    iPhone11ProMax,
    iPhoneSE2,
    iPhone12Mini,
    iPhone12,
    iPhone12Pro,
    iPhone12ProMax,

    iPad1,
    iPad2,
    iPadMini,
    iPad3,
    iPad4,
    iPadAir,
    iPadMini2,
    iPadAir2,
    iPadMini3,
    iPadMini4,
    iPadPro12Dot9Inch,
    iPadPro9Dot7Inch,
    iPad5,
    iPadPro12Dot9Inch2Gen,
    iPadPro10Dot5Inch,

    iPad6,
    iPad7,
    iPadPro11Inch,
    iPadPro12Dot9Inch3Gen,
    iPadPro11Inch2Gen,
    iPadPro12Dot9Inch4Gen,
    iPadMini5,
    iPadAir3,
    iPad8,
    iPadAir4,

    iPodTouch1Gen,
    iPodTouch2Gen,
    iPodTouch3Gen,
    iPodTouch4Gen,
    iPodTouch5Gen,
    iPodTouch6Gen,
    iPodTouch7Gen,
};

typedef NS_ENUM(NSInteger, AutomatID_DeviceSize){
    UnknownSize     = 0,
    Screen3Dot5inch = 1,
    Screen4inch     = 2,
    Screen4Dot7inch = 3,
    Screen5Dot5inch = 4,
    Screen5Dot8inch = 5
};

@interface AutomatID_SDiOSVersion : NSObject

+ (AutomatID_DeviceVersion)deviceVersion;
+ (NSString *)deviceNameForVersion:(AutomatID_DeviceVersion)deviceVersion;
+ (AutomatID_DeviceSize)resolutionSize;
+ (AutomatID_DeviceSize)deviceSize;
+ (NSString *)deviceSizeName:(AutomatID_DeviceSize)deviceSize;
+ (NSString *)deviceNameString;
+ (BOOL)isZoomed;

+ (BOOL)versionEqualTo:(NSString *)version;
+ (BOOL)versionGreaterThan:(NSString *)version;
+ (BOOL)versionGreaterThanOrEqualTo:(NSString *)version;
+ (BOOL)versionLessThan:(NSString *)version;
+ (BOOL)versionLessThanOrEqualTo:(NSString *)version;

@end
