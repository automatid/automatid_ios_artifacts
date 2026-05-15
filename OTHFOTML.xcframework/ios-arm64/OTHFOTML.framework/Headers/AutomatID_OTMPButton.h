//
//  MPButton.h
//  OTML
//
//  Created by Valerio Ferrantelli on 04/10/12.
//
//

@class AutomatID_OTMLFont;
@class AutomatID_OTMPButton;
@class AutomatID_OTMPLabel;


@protocol AutomatID_OTMPButtonEnabledListener <NSObject>
-(void)buttonDidEnabled:(NSNumber*) isEnabled;
@end

@protocol AutomatID_OTMPButtonPressedListener <NSObject>
-(void)buttonDidPressed:(NSNumber*) isPresed sender:(AutomatID_OTMPButton*)theButton;
@end

@protocol AutomatID_OTMPButtonSelectedListener <NSObject>
-(void)buttonDidSelected:(NSNumber*) isSelected sender:(AutomatID_OTMPButton*)theButton;
@end


@protocol AutomatID_OTMPButtonFactotumDelegate<AutomatID_OTMPButtonEnabledListener,AutomatID_OTMPButtonPressedListener,AutomatID_OTMPButtonSelectedListener>
@end

typedef void (^AutomatID_ActionBlock)(id);

@interface AutomatID_OTMPButton : UIButton <AutomatID_OTMPButtonPressedListener, AutomatID_OTMPButtonSelectedListener>{
    AutomatID_ActionBlock _actionBlock;
    AutomatID_ActionBlock _actionBlock2;
    
    AutomatID_ActionBlock _actionBlockPressed;
    AutomatID_ActionBlock _actionBlockSelected;
    
    
    @protected AutomatID_OTMPLabel* theLabel;
}

-(void) handleControlState:(UIControlState)state
                 withBlock:(AutomatID_ActionBlock)action;

- (id)initWithFrame:(CGRect) frame
        normalImage:(UIImage*) aNormalImage
   highlightedImage:(UIImage*) aPressedImage
      disabledImage:(UIImage*) aDisabledImage
   andSelectedImage:(UIImage*) aSelectedImage;

- (id)initWithFrame:(CGRect)frame
        normalImage:(UIImage*) aNormalImage
   highlightedImage:(UIImage*) aPressedImage
      disabledImage:(UIImage*) aDisabledImage
   andSelectedImage:(UIImage*) aSelectedImage
andSelectedPressedImage:(UIImage*) aSelectedPressedImage;


-(void)setButtonDelegate:(id<AutomatID_OTMPButtonFactotumDelegate>) aDelegate;
-(void)setEnabledListener:(id<AutomatID_OTMPButtonEnabledListener>) aListener;
-(void)setPressedListener:(id<AutomatID_OTMPButtonPressedListener>) aListener;
-(void)setSelectedListener:(id<AutomatID_OTMPButtonSelectedListener>) aListener;

-(void)setBackgroundColor:(UIColor *)color forState:(UIControlState)state;

-(void) handleControlEvent:(UIControlEvents)event withBlock:(AutomatID_ActionBlock)action;
-(void) handleControlEvent:(UIControlEvents)event withBlock:(AutomatID_ActionBlock)action andId:(int)idx;

-(void)setLabelWithText:(NSString*) theText
              andUIFont:(UIFont*) theFont;
-(void) setLabelWithText:(NSString*) theText andFont:(AutomatID_OTMLFont*)theFont;
-(void) setLabelTextAlignment:(NSTextAlignment)a;
-(void) setLabelColor:(UIColor*)theColor;


-(AutomatID_OTMPLabel*) getLabel;

-(void)setImage:(UIImage *)image forState:(UIControlState)state;
-(void)setTitle:(NSString *)title forState:(UIControlState)state;


@end
