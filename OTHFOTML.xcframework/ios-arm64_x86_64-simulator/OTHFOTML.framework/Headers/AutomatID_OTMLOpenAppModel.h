//
//  AutomatID_OTMLLocalNotificationModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 21/06/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLExternalEventModel.h"

@interface AutomatID_OTMLOpenAppModel : AutomatID_OTMLConcreteEventModel

@property (nonatomic, strong) NSURL * url;
@property (nonatomic, strong) NSString * srcApplication;


@end
