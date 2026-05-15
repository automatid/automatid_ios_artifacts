//
//  OTMLScrollContainer.h
//  OTML
//
//  Created by enrico on 11/06/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

#import "AutomatID_OTMLContainer.h"
#import "AutomatID_OTMLLinearContainer.h"


@interface AutomatID_OTMLScrollContainer : AutomatID_OTMLLinearContainer<UIScrollViewDelegate>

@property (nonatomic, assign) BOOL forceToBounceVertically;
@property (nonatomic, assign) BOOL scrolledDueToTextfield;

-(UIScrollView*) getCurrentScrollView;


@end
