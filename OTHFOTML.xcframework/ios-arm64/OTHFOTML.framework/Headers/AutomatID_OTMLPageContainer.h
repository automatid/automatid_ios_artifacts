//
//  OTMLPageContainer.h
//  OTML
//
//  Created by epavoni on 03/10/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

#import "AutomatID_OTMLFrameContainer.h"
#import "AutomatID_OTMPUIPageControl.h"
#import "AutomatID_HorizontalTableView.h"

@interface AutomatID_OTMLPageContainer : AutomatID_OTMLFrameContainer<UIScrollViewDelegate, OTMPPageControlDelegate, HorizontalTableViewDelegate>{
@protected
    AutomatID_OTMPUIPageControl* pageControl;
    NSInteger indicator_heigh;
@private
    CGFloat pageWidth;
    NSInteger max_indictors_count;
    BOOL scrollBounce;
    UILabel* page_label;
}

@end
