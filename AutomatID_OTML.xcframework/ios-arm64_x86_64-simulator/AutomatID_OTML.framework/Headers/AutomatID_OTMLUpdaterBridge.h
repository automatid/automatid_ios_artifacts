//
//  OTMLLifecycle.h
//  OTML
//
//  Created by Valerio Ferrantelli on 08/02/2019.
//

@class AutomatID_OTMLUpdateResult;
@class AutomatID_OTMLAdvancedUpdaterDelegateBase;

@interface AutomatID_OTMLUpdaterBridge : NSObject

-(void)manageAsyncUpdateResult:(AutomatID_OTMLUpdateResult*)aResult_ withError:(NSError*)error onDelegate:(AutomatID_OTMLAdvancedUpdaterDelegateBase*)aDelegate;
-(void)manageSyncUpdateResult:(AutomatID_OTMLUpdateResult*)aResult_ withError:(NSError*)error onDelegate:(AutomatID_OTMLAdvancedUpdaterDelegateBase*)aDelegate;

@end
