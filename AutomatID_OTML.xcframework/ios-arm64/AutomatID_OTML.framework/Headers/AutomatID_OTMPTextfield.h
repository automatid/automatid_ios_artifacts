//
//  MPTextfield.h
//  OTML
//
//  Created by Valerio Ferrantelli on 01/10/12.
//
//


#import <AutomatID_OTMLModels/AutomatID_OTMLCoreConstants.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLStatefulComponent.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLFont.h>



#define floating_placeholder_height 13.0

@class OTMLfont;
@interface AutomatID_OTMPTextfield : UITextField <AutomatID_OTMLStatefulObject,UITextFieldDelegate>{
@protected UIEdgeInsets inset;
}

@property (nonatomic, assign) BOOL floatingPlaceholder;
-(void) setPlaceholderFont:(AutomatID_OTMLFont *)_pFont;
-(void) setHardMinFontSize:(CGFloat)aHardMinFontSize;

@end
