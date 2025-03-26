//
//  AutomatID_OTMLPopupModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 21/09/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <AutomatID_OTMLModels/AutomatID_OTMLFont.h>
#import "AutomatID_OTMLAction.h"
#import "AutomatID_OTMLPopupModel.h"
#import <AutomatID_OTMLModels/AutomatID_OTMPColor.h>
#import "AutomatID_OTMLPadding.h"
#import "AutomatID_OTMLMargin.h"


typedef NS_ENUM(NSUInteger, AutomatID_OTMLAlertType){
    
    OTMLAlertType_otml_popup = 0,
    OTMLAlertType_native_popup,
    OTMLAlertType_native_actionsheet
    
    
};

typedef NS_ENUM(NSUInteger, AutomatID_OTMLPopupButtonType){
    
    OTMLPopupButtonType_default = 0,    //accept
    OTMLPopupButtonType_cancel,         //dismiss
    OTMLPopupButtonType_destructive     //destructive
    
    
};

@interface AutomatID_OTMLPopupButtonModel : NSObject

@property (nonatomic, strong) NSString * title;
@property (nonatomic, strong) AutomatID_OTMLFont * font;
@property (nonatomic, assign) AutomatID_OTMLPopupButtonType style;
@property (nonatomic, strong) NSString* trigger;


@end


@interface AutomatID_OTMLPopupModel : NSObject

//TITLE
@property (nonatomic, strong) AutomatID_OTMLMargin * headerMargin;
@property (nonatomic, strong) NSString * title;
@property (nonatomic, strong) AutomatID_OTMLFont * titleFont;


//POPUP
@property (nonatomic, strong) NSString * datasourceName;
@property (nonatomic, assign) AutomatID_OTMLAlertType alertType;
@property (nonatomic, strong) UIColor * backgroundColor;
@property (nonatomic, strong) AutomatID_OTMLMargin * popupMargin;
@property (nonatomic, assign) int popupCornerRadius;

//FOOTER
@property (nonatomic, strong) AutomatID_OTMLMargin * footerMargin;
@property (nonatomic, strong) UIColor * footerBackgroundColor;

//BUTTONS
@property (nonatomic, assign) int buttonHeight;
@property (nonatomic, strong) UIColor * buttonBackgroundColorN;
@property (nonatomic, strong) UIColor * buttonBackgroundColorP;
@property (nonatomic, strong) NSArray<AutomatID_OTMLPopupButtonModel*>* buttons;



@end



