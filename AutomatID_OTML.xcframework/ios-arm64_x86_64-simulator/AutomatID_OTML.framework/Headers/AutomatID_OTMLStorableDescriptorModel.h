//
//  AutomatID_OTMLStorableDescriptorModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 07/12/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLAbstractUpdateDescriptorModel.h"

@interface AutomatID_OTMLStorableDescriptorModel : AutomatID_OTMLAbstractUpdateDescriptorModel


-(BOOL)storeDescriptor;
-(void)loadDescriptor;
+(NSString*)goToCommonFolderFromPath:(NSString*)aPath;

-(id)initFromStorage;
-(NSString*)getDescriptorStoragePath;

@end
