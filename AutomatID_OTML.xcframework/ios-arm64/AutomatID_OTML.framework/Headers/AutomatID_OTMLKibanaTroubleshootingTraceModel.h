//
//  AutomatID_OTMLKibanaTroubleshootingTraceModel.h
//  Pods
//
//  Created by Enrico on 08/06/2020.
//

#import "AutomatID_OTMLTraceModel.h"

@interface AutomatID_OTMLKibanaTroubleshootingTraceModel : AutomatID_OTMLTraceModel

@property (nonatomic, strong, readonly) NSString * issueID;

- (instancetype)initWithIssueID:(NSString*)aIssueId;

@end
