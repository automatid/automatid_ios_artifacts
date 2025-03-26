//
//  AutomatID_OTMLSelectorDSExpert.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 23/09/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//


#import "AutomatID_OTMLViewController.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLTextResolutionMode.h>


@interface AutomatID_OTMLSelectorDSExpert : NSObject

@property (nonatomic, retain) NSString * reference_ds;
@property (nonatomic, assign) AutomatID_OTMLTextResolutionMode otmlTextResolutionModeLabel;
@property (nonatomic, assign) AutomatID_OTMLTextResolutionMode otmlTextResolutionModeValue;

-(id) initWithLabelPath:(NSString*) aLabPath
       andWithValuePath:(NSString*) aValPath
    inReferenceDSatPath:(NSString*) reference_ds
                 withVC:(AutomatID_OTMLViewController*) theVC
    withOtmlTextResolutionModeLabel:(AutomatID_OTMLTextResolutionMode) aOtmlTextResolutionModeLabel
    andOtmlTextResolutionModeValue:(AutomatID_OTMLTextResolutionMode) aOtmlTextResolutionModeValue;


-(void)reloadData;
-(NSArray*)getLabels;
-(NSArray*)getValues;


@end
