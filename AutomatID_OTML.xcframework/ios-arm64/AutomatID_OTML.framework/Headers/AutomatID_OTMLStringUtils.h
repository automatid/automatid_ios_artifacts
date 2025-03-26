//
//  SimpleStringUtils.h
//  OTML
//
//  Created by epavoni on 10/10/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import <AutomatID_OTMLModels/AutomatID_OTMLTextCasing.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLFont.h>

@interface AutomatID_OTMLStringUtils : NSObject

+(NSString*)localyze:(NSString*)string;
+(NSString*)applyCasing:(AutomatID_OTMLTextCasing) aCasing toString:(NSString*)aString;
+ (NSMutableAttributedString*) attributedStringFromText:(NSString*) HTMLString
                                           withOTMLFont:(AutomatID_OTMLFont*) aFont
                                           andAlignment:(NSTextAlignment) textAlignment;

@end
