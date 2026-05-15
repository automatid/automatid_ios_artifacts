//
//  AutomatID_OTMLAbstractPopupViewController.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 15/02/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLViewController.h"
#import "AutomatID_OTMLPopupModel.h"



@protocol AutomatID_OTMLPopupParserProtocol <NSObject>

-(AutomatID_OTMLPopupModel*)buildPopupModelWithDSName:(NSString*)aDSName usingVC:(AutomatID_OTMLViewController*)aVC;

@end



@interface AutomatID_OTMLAbstractPopupViewController :  AutomatID_OTMLViewController

@property (nonatomic, strong) AutomatID_OTMLPopupModel * popupModel;

/**
 Must be overrided
 **/
-(NSObject<AutomatID_OTMLPopupParserProtocol>*)getPopupParser;

/**
 Call when you are ready to generate the view
 **/
-(UIView*)generatePopupViewWithModel:(AutomatID_OTMLPopupModel*)aPopupModel;

-(void)buttonDidPressed:(UIButton*)aButton;


@end
