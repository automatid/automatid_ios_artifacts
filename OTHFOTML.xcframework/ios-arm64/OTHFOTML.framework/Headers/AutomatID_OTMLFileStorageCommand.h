//
//  OTMLSecureStorageCommand.h
//  Pods
//
//  Created by Valerio Ferrantelli on 06/02/17.
//
//

#import "AutomatID_OTMLActionCommandSet.h"
#import "AutomatID_OTMLActionCommandWithTriggerResult.h"

@interface AutomatID_OTMLFileStorageWriteCommand : AutomatID_OTMLActionCommandWithTriggerResult

@end

@interface AutomatID_OTMLFileStorageDeleteCommand : AutomatID_OTMLActionCommandWithTriggerResult

@end

@interface AutomatID_OTMLFileStorageCleanCommand : AutomatID_OTMLActionCommandWithTriggerResult

@end

@interface AutomatID_OTMLFileStorageReadCommand : AutomatID_OTMLActionCommandWithTriggerResult

@end

@interface AutomatID_OTMLFileStorageCommand : AutomatID_OTMLActionCommandSet



@end
