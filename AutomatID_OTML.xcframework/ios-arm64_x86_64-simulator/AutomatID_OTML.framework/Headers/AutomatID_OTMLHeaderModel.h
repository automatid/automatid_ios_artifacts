//
//  AutomatID_OTMLHeaderModel.h
//
//  Created by Alessandro Ruggeri on 31/08/16.
//  Copyright © 2016 Valerio Ferrantelli. All rights reserved.
//

#import <AutomatID_OTMLModels/AutomatID_OTMLHeaderConfigurationConstants.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLHeaderEntryConstants.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLTextResolutionMode.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLCoreCommandsConstants.h>
#import <AutomatID_OTMLModels/AutomatID_OTMPColor.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLFont.h>
#import "AutomatID_OTMLDatasource.h"
#import "AutomatID_OTMLViewController.h"
#import "UIImage+AutomatID_OTMLBridge.h"
#import "AutomatID_OTMLImage.h"

@interface AutomatID_HeaderButtonModelDTO : NSObject
@property (nonatomic, strong) NSString* title;
@property (nonatomic, strong) NSString* subtitle;
@property (nonatomic, strong) NSString* position;
@property (nonatomic, assign) NSUInteger buttonDatasourceIndex;
@property (nonatomic, strong) NSString* icon;
@property (nonatomic, strong) NSString* iconDisabled;
@property (nonatomic, strong) NSString* icon_param_ref;
@property (nonatomic, strong) NSString* icon_disabled_param_ref;
@property (nonatomic, strong) NSArray* action_set;
@property (nonatomic, strong) NSString* condition_reference_enabled;
@property (nonatomic, strong) NSString* condition_reference_visible;
@property (nonatomic, strong) NSString* badge_text;
@property (nonatomic, strong) AutomatID_OTMPColor* badge_color;
@property (nonatomic, strong) AutomatID_OTMLFont* badge_font;
@property (nonatomic, assign) CGFloat badge_radius;
@property (nonatomic, assign) CGFloat maxBtHeight;
@property (nonatomic, assign) BOOL enabled;
@property (nonatomic, assign) NSString* accessibility_id_back_button;

-(instancetype)initWithModel:(AutomatID_OTMLDatasource*) theModelOfButton withOtmlVC:(AutomatID_OTMLViewController *)theVC andLocalizationType:(NSString*)_locType;
@end

@interface AutomatID_OTMLHeaderModel : NSObject

@property (nonatomic, assign) NSString * otmlTextResolutionMode;
@property (nonatomic, assign) BOOL isHidden;
@property (nonatomic, retain) NSString * largeTitlesMode;
@property (nonatomic, retain) NSString * textTitle;
@property (nonatomic, retain) NSString * subTextTitle;
@property (nonatomic, retain) NSString * header_logo;
@property (nonatomic, retain) UIImage * headerBgImage;
@property (nonatomic, retain) AutomatID_OTMLImage * otheaderBgImage;
@property (nonatomic, retain) AutomatID_OTMPColor * header_bg_color;
@property (nonatomic, assign) BOOL show_back;
@property (nonatomic, assign) BOOL show_menu;
@property (nonatomic, assign) BOOL menuButtonRight;
@property (nonatomic, assign) BOOL backButtonRight;
@property (nonatomic, retain) AutomatID_HeaderButtonModelDTO* menuButtonDTO;
@property (nonatomic, retain) AutomatID_HeaderButtonModelDTO* backButtonDTO;
@property (nonatomic, retain) AutomatID_HeaderButtonModelDTO* freeButtonDTO;
@property (nonatomic, retain) NSArray* buttonsList;
@property (nonatomic, retain) AutomatID_OTMLFont * headerLabelTitleFont;
@property (nonatomic, retain) AutomatID_OTMLFont * headerLabelSubTitleFont;
@property (nonatomic, retain) AutomatID_OTMLFont * headerButtonFont;
@property (nonatomic, assign) BOOL show_bottom_line;
@property (nonatomic, retain) UIImage * headerMenuIcon;
@property (nonatomic, retain) UIImage * headerBackIcon;
@property (nonatomic, assign) CGFloat headerIconDisabledAlpha;

@property (nonatomic, retain) NSString * textfield_placeholder;
@property (nonatomic, retain) AutomatID_OTMLFont* textfieldFontStyle;
@property (nonatomic, retain) NSString* textfieldBGImage;
@property (nonatomic, retain) NSString* textfieldNcKey;
@property (nonatomic, retain) NSString* textfieldNDelay;
@property (nonatomic, retain) NSString* textfieldDoneText;

@property (nonatomic, retain) AutomatID_OTMLFont* searchButtonDismissedFontStyle;

-(instancetype) initWithModel:(AutomatID_OTMLDatasource*) theModelOfTheModel withOtmlVC:(AutomatID_OTMLViewController *)theVC;
+(NSArray*)parseActionsWithDatasource:(AutomatID_OTMLDatasource*)ds;
/***
 *  Crea un Dictionary stringa-datasource rispettando la gerarchia di iverride su base piattaforma.
 */
+(NSDictionary<NSString*, AutomatID_OTMLDatasource*>*) convertToDictionaryFromDatasource:(AutomatID_OTMLDatasource*) _theModelOfTheModel;

@end
