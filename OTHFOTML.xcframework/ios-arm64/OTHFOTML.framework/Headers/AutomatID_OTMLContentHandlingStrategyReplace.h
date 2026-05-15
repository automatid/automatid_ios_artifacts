//
//  AutomatID_OTMLContentHandlingStrategyReplace.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 15/02/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLContentHandlingStrategyDelegate.h"
/**
 *      Maybe that's useless now but the Strategy idea is the best for reusage
 *      (thinking about future and most complex situations).
 */
@interface AutomatID_OTMLContentHandlingStrategyReplace : NSObject<AutomatID_OTMLContentHandlingStrategyDelegate>
@end


@interface AutomatID_OTMLContentHandlingStrategyAppend : NSObject<AutomatID_OTMLContentHandlingStrategyDelegate>
@end
