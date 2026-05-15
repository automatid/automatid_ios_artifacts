//
//  AutomatID_OTMLAbstractUpdateDescriptorModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 27/08/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "AutomatID_OTMLUpdateVersionsSection.h"
#import "AutomatID_OTMLUpdateManifestSection.h"
#import "AutomatID_OTMLUpdateDatasourcesSection.h"
#import "AutomatID_OTMLUpdateActionsSection.h"
#import "AutomatID_OTMLUpdateStringsSection.h"
#import "AutomatID_OTMLUpdateBeansSection.h"
#import "AutomatID_OTMLUpdTraceModel.h"

#define OTML_UPDATE_VERSION_SECTION_NAME @"versions_container"
#define OTML_UPDATE_MANIFEST_SECTION_NAME @"manifest_container"
#define OTML_UPDATE_DATASOURCE_SECTION_NAME @"datasources_container"
#define OTML_UPDATE_ACTIONS_SECTION_NAME @"actions_container"
#define OTML_UPDATE_STRINGS_SECTION_NAME @"strings_container"
#define OTML_UPDATE_BEANS_SECTION_NAME @"bean_container"

@interface AutomatID_OTMLAbstractUpdateDescriptorModel : NSObject

@property (nonatomic, strong) AutomatID_OTMLUpdateVersionsSection* versionsSection;
@property (nonatomic, strong) AutomatID_OTMLUpdateManifestSection* manifestSection;
@property (nonatomic, strong) AutomatID_OTMLUpdateDatasourcesSection* datasourcesSection;
@property (nonatomic, strong) AutomatID_OTMLUpdateActionsSection* actionsSection;
@property (nonatomic, strong) AutomatID_OTMLUpdateStringsSection* stringsSection;
@property (nonatomic, strong) AutomatID_OTMLUpdateBeansSection* beansSection;
@property (nonatomic, strong, readonly) NSString* descriptorName;
@property (nonatomic, strong) AutomatID_OTMLUpdTraceModel * updaterTrace;


-(instancetype)initWithDescriptorModelCopy:(AutomatID_OTMLAbstractUpdateDescriptorModel*)aDescriptor;

-(BOOL)isEqualToDescriptor:(AutomatID_OTMLAbstractUpdateDescriptorModel*)aDescriptor;
-(BOOL)isValid;

-(void)freeMemory;
-(NSArray<AtomatID_OTMLUpdateSection*>*)newArrayOfSections;



@end
