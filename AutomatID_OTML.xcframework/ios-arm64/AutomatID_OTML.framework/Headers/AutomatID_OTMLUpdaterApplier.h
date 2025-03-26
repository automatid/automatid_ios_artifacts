//
//  AutomatID_OTMLUpdaterApplier.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/11/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLAdvancedUpdaterManager.h"

@interface AutomatID_OTMLUpdaterApplier : NSObject

-(void)applyCurrentDescriptorSections;
-(void)executeActions;

@end
