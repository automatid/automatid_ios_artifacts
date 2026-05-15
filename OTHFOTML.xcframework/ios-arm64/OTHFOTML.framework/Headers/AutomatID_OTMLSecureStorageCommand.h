//
//  OTMLSecureStorageCommand.h
//  Pods
//
//  Created by Valerio Ferrantelli on 06/02/17.
//
//

#import "AutomatID_OTMLActionCommandSet.h"
#import "AutomatID_OTMLActionCommandWithTriggerResult.h"

@interface AutomatID_OTMLSecureStorageWriteCommand : AutomatID_OTMLActionCommandWithTriggerResult
@end

@interface AutomatID_OTMLSecureStorageDeleteCommand : AutomatID_OTMLActionCommandWithTriggerResult
@end

@interface AutomatID_OTMLSecureStorageCleanCommand : AutomatID_OTMLActionCommandWithTriggerResult
@end

@interface AutomatID_OTMLSecureStorageReadCommand : AutomatID_OTMLActionCommandWithTriggerResult
@end

@interface AutomatID_OTMLRSAKeyPairGenerationCommand : AutomatID_OTMLActionCommandWithTriggerResult
@end

@interface AutomatID_OTMLBackupValuePutCommand : AutomatID_OTMLActionCommandWithTriggerResult
@end

@interface AutomatID_OTMLBackupValueDeleteValueCommand : AutomatID_OTMLActionCommandWithTriggerResult
@end

@interface AutomatID_OTMLBackupValueDeleteFileCommand : AutomatID_OTMLActionCommandWithTriggerResult
@end

@interface AutomatID_OTMLBackupValueDeleteAllFilesCommand : AutomatID_OTMLActionCommandWithTriggerResult
@end


@interface AutomatID_OTMLSecureStorageCommand : AutomatID_OTMLActionCommandSet

+(NSString*)getAccount;
+(NSString*)doRead:(NSString*)key;
+(BOOL)doExists:(NSString*)key;

@end
