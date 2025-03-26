//
//  OTMLDropdownPanleCommand.h
//  Pods
//
//  Created by Enrico on 25/10/2019.
//

#import "AutomatID_OTMLActionCommand.h"
#import "AutomatID_OTMLVerticalAlignment.h"
#import "AutomatID_OTMLActionCommandSet.h"
@class AutomatID_OTMLFont;
@class AutomatID_OTMPColor;


NS_ASSUME_NONNULL_BEGIN
@interface AutomatID_OTMLDropdownPanelCommandDTO : NSObject

@property(nonatomic, assign) NSTimeInterval duration;
@property(nonatomic, assign) BOOL dismissPrevious;

@property(nonatomic, strong, nullable) AutomatID_OTMLFont* titleFont;
@property(nonatomic, strong, nullable) NSString* titleString;

@property(nonatomic, strong, nullable) AutomatID_OTMLFont* bodyFont;
@property(nonatomic, strong, nullable) NSString* bodyString;

@property(nonatomic, assign) AutomatID_OTMLVerticalAlignment leftImagePosition;
@property(nonatomic, strong, nullable) AutomatID_OTMLImage* leftImage;

@property(nonatomic, assign) AutomatID_OTMLVerticalAlignment rightImagePosition;
@property(nonatomic, strong, nullable) AutomatID_OTMLImage* rightImage;
@property(nonatomic, strong, nullable) AutomatID_OTMLImage* rightImagePressed;

@property(nonatomic, strong, nullable) AutomatID_OTMPColor* bottomSeparatorColor;


@property(nonatomic, strong) AutomatID_OTMPColor* background_color;



/*
 //Currently not required
 
@property(nonatomic, strong, nullable) OTMLFont* leftButtonFont;
@property(nonatomic, strong, nullable) NSString* leftButtonString;
@property(nonatomic, strong, nullable) OTMPColor* leftButtonBackgroundColor;

@property(nonatomic, strong, nullable) OTMLFont* centerButtonFont;
@property(nonatomic, strong, nullable) NSString* centerButtonString;
@property(nonatomic, strong, nullable) OTMPColor* centerButtonBackgroundColor;

@property(nonatomic, strong, nullable) OTMLFont* rightButtonFont;
@property(nonatomic, strong, nullable) NSString* rightButtonString;
@property(nonatomic, strong, nullable) OTMPColor* rightButtonBackgroundColor;
 
@property(nonatomic, strong, nullable) OTMPColor* buttonsSeparatorColor;
*/

@end

@interface AutomatID_OTMLDropdownPanelCommand : AutomatID_OTMLActionCommand

@end

@interface AutomatID_OTMLDropdownPanelCloseCommand : AutomatID_OTMLActionCommand

@end

@interface AutomatID_OTMLDropdownPanelCommandPlug : AutomatID_OTMLActionCommandSet

@end

NS_ASSUME_NONNULL_END
