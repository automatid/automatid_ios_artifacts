//
//  AutomatID_OTMLTracePredicate.h
//  Pods
//
//  Created by Enrico on 15/07/2019.
//

@class AutomatID_OTMLTraceModel;

@interface AutomatID_OTMLTracePredicate : NSObject

-(BOOL) isSatistied:(AutomatID_OTMLTraceModel*)aTrace;

@end
