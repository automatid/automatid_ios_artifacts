//
//  OTMLPagerList.h
//  OTMLFramework
//
//  Created by Alessandro Ruggeri on 17/07/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLContainer.h"

typedef enum {
    OTMLPagerListViewDatasourceProcessResultNotProcessed,
    OTMLPagerListViewDatasourceProcessResultProcessed,
    OTMLPagerListViewDatasourceProcessResultProcessedNeedNoElemView,
    OTMLPagerListViewDatasourceProcessResultError
}OTMLPagerListViewDatasourceProcessResult;

@interface AutomatID_OTMLPagerList : AutomatID_OTMLContainer <UIScrollViewDelegate>

@end
