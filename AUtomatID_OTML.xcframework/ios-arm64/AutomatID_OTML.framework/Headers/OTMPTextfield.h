//
//  MPTextfield.h
//  OTML
//
//  Created by Valerio Ferrantelli on 01/10/12.
//
//


#import <AutomatID_OTMLModels/OTMLCoreConstants.h>
#import <AutomatID_OTMLModels/OTMLStatefulComponent.h>
#import <AutomatID_OTMLModels/OTMLFont.h>



#define floating_placeholder_height 13.0

@class OTMLfont;
@interface OTMPTextfield : UITextField <OTMLStatefulObject,UITextFieldDelegate>{
@protected UIEdgeInsets inset;
}

@property (nonatomic, assign) BOOL floatingPlaceholder;
-(void) setPlaceholderFont:(OTMLFont *)_pFont;
-(void) setHardMinFontSize:(CGFloat)aHardMinFontSize;

@end
