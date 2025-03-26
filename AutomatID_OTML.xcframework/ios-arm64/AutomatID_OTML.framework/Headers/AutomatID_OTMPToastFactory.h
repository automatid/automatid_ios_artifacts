//
//  MPFlexibleLabelFactory.h
//  ToastProject
//
//  Created by Alessandro Ruggeri on 11/07/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//

@class AutomatID_OTMPToastLabel;

@interface AutomatID_OTMPToastFactory : NSObject

+(AutomatID_OTMPToastFactory*)getInstance;
-(void) setupRoot:(UIView*) aRootView duration:(CGFloat) aDuration;
-(void) makeToastWithText:(NSString*) aText;


@end

