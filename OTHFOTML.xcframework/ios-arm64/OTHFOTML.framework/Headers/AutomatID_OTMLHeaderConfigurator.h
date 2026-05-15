//
//  AppHeaderConfigurator.h
//
//  Created by Alessandro Ruggeri on 31/08/16.
//  Copyright © 2016 Valerio Ferrantelli. All rights reserved.
//

#import "AutomatID_OTMLHeaderModel.h"
#import <OTHFOTMLCore/AutomatID_OTMLRestartAppAwareProtocol.h>

@interface AutomatID_OTMLHeaderConfigurator : NSObject <UISearchBarDelegate, AutomatID_OTMLRestartAppAwareProtocol>

@property (nonatomic, retain) AutomatID_OTMLHeaderModel * model;

- (id) initWithDatasource:(AutomatID_OTMLDatasource*)_datasource
               withOtmlVC:(AutomatID_OTMLViewController*)_viewController;

- (void) clearHeaderDescriptior;

@end
