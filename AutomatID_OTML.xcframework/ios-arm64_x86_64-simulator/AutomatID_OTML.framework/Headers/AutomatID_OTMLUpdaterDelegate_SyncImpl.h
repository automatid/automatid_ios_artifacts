//
//  OTMLUpdaterDelegate.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 16/11/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLUpdateLoadingAbstractView.h"
#import "AutomatID_OTMLAdvancedUpdaterManager.h"

@interface AutomatID_OTMLUpdaterDelegate_SyncImpl : AutomatID_OTMLAdvancedUpdaterDelegateBase

@property (nonatomic, strong) NSObject<AutomatID_OTMLUpdateLoadingAbstractView>* updateProgressViewDelegate;



@end
