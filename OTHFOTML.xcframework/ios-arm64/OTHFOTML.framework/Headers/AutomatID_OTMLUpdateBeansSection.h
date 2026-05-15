//
//  OTMLUpdateBeansSection.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 23/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "AtomatID_OTMLUpdateSection.h"

@interface AutomatID_OTMLUpdateBeansSection : AtomatID_OTMLUpdateSection

@property (nonatomic, strong, readonly) NSDictionary * otmlBeanSet;
@property (nonatomic, strong, readonly) NSDictionary * appBeanSet;
@property (nonatomic, strong, readonly) NSDictionary * addonsBeanSet;

@end
