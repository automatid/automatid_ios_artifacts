//
//  AutomatID_OTMLPushNotificationsAckSender.h
//  Pods
//
//  Created by Valerio Ferrantelli on 31/08/17.
//
//

/**
 Attenzione, la classe è concepita per essere utilizzata sia dal target principale dell'app che dall'extension. Non dare per scontato che ci si muova esclusivamente entro lo stack dell'app completa.
 */
@interface AutomatID_OTMLPushNotificationsAckSender : NSObject

+ (NSString*)ackEndpointWithEndpointMapping:(NSString *)mapping;
+ (BOOL)pushNeedAck:(NSDictionary*)userInfo;

/**
 Attenzione, la classe è concepita per essere utilizzata sia dal target principale dell'app che dall'extension. Non dare per scontato che ci si muova esclusivamente entro lo stack dell'app completa.
 */

/**
 Initalize the AutomatID_OTMLPushNotificationsAckSender by providing an ack endpoint address
 */
- (instancetype)initWithEndpoint:(NSString*)anEndpoint;

/**
Initalize the AutomatID_OTMLPushNotificationsAckSender by providing an ack mapping.
 Note that this will initialize with endpoint associated with "*" in the json mapping string or default otherwise
 @param mapping a Json string
*/
- (instancetype)initWithEndpointMapping:(NSString *)mapping;

- (void)sendAck:(NSDictionary*)userInfo completitionHandler:(OTMLSimpleCallback)aOnComplete;

- (void)sendPendingAcksWithCompletitionHandler:(OTMLSimpleCallback)aOnComplete;


@end
