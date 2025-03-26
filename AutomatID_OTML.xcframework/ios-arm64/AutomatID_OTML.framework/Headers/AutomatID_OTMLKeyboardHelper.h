//
//  AutomatID_OTMLKeyboardHelper.h
//  OTMLFramework
//
//  Created by Enrico Pavoni on 04/02/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <AutomatID_OTMLModels/AutomatID_OTMLInputKeyboardType.h>

@interface AutomatID_OTMLKeyboardHelper : NSObject

+(UIKeyboardType) keyboardTypeFromOTMLKeyboard:(AutomatID_OTMLInputKeyboardType) OTMLInputKeyboardType;
@end
