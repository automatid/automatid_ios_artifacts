//
//  AutomatID_OTMLiOS9PopupDSParser.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 22/09/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLPopupModel.h"
#import "AutomatID_OTMLAbstractPopupViewController.h"

@interface AutomatID_OTMLiOS9PopupDSParser : NSObject <OTMLPopupParserProtocol>

@property (nonatomic, strong) AutomatID_OTMLPopupModel * popupModel;

@end
