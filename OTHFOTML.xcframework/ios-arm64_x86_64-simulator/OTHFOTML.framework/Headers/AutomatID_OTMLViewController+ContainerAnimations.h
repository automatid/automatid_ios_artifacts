//
//  AutomatID_OTMLViewController+ContainerAnimations.h
//  Pods
//
//  Created by Silvio D'Angelo on 08/06/2017.
//
//

#import "AutomatID_OTMLViewController.h"
#import "AutomatID_OTMLComponent.h"

@interface AutomatID_OTMLViewController (ContainerAnimations)

extern NSString* _Nonnull const AutomatID_OTMLComponentAnimatableProperty_COLLAPSE;
extern NSString* _Nonnull const AutomatID_OTMLComponentAnimatableProperty_EXPAND;
extern NSString* _Nonnull const AutomatID_OTMLComponentAnimatableProperty_ROTATE;


-(void) updateProperties:(nonnull NSArray<NSString*>*) aProp
            onComponents:(nonnull NSArray<AutomatID_OTMLComponent*>*) acompom
           withEndValues:(nonnull NSArray<NSString*>*) aEndValues;


-(void) animateAllAnimatables:(nonnull NSArray<NSString*>*) aProp
                 onComponents:(nonnull NSArray<AutomatID_OTMLComponent*>*) acompom
                withEndValues:(nonnull NSArray<NSString*>*) aEndValues;


+(void) startRegisteringAnimationsToDisableWithNextCommit;
+(void) commitAnimationsToDisable;

@end
