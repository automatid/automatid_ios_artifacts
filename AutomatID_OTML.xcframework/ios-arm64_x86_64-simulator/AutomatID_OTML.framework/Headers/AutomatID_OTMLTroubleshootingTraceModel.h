//
//  AutomatID_OTMLTroubleshootingTraceModel.h
//  Pods
//
//  Created by Valerio Ferrantelli on 19/01/17.
//
//

#import "AutomatID_OTMLTraceModel.h"

@interface AutomatID_OTMLTroubleshootingTraceModel : AutomatID_OTMLTraceModel

@property (nonatomic, strong, readonly) NSString * issueID;

- (instancetype)initWithIssueID:(NSString*)aIssueId;


@end
