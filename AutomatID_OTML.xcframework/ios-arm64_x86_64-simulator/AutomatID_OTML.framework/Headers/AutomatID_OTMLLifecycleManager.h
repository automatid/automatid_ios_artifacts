#import <Foundation/Foundation.h>
#import <AutomatID_OTMLCore/AutomatID_OTMLRestartAppAwareProtocol.h>
#import <AutomatID_OTMLCore/AutomatID_OTMLDumpableModuleProtocol.h>


extern NSString* const c_AutomatID_OTMLAppConstants_EVENT_ON_RESTART;


@interface AutomatID_OTMLLifecycleManager : NSObject <AutomatID_OTMLRestartAppAwareProtocol, AutomatID_OTMLDumpableModuleProtocol>

+(AutomatID_OTMLLifecycleManager*)getInstance;

-(void) addRestartAwareObject:(NSObject<AutomatID_OTMLRestartAppAwareProtocol>*) aRestartAwareObject;
-(void) removeRestartAwareObject:(NSObject<AutomatID_OTMLRestartAppAwareProtocol>*) aRestartAwareObject;
-(void) reinitializeRestartappAwareObjects;
-(void) resetRestartappAwareObjectsAfterOTMLUpdate;


-(BOOL) isNewAppVersion;
-(BOOL) isUpdateAsync;
-(void) markUpdateCompleted;
@end
