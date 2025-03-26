//
//  MPLabel.h
//  ING
//
//  Created by Pasquale Cerqua on 17/10/12.
//
//

#import <UIKit/UIKit.h>

#import <AutomatID_OTMLModels/AutomatID_OTMLStatefulComponent.h>

@class AutomatID_OTMLFont;
@class AutomatID_OTMPLabel;


@protocol MPLabelPressedListener <NSObject>
-(void)labelDidPressed:(NSNumber*) isPresed sender:(AutomatID_OTMPLabel*)theLabel;
@end

@protocol MPLabelURLTappedListener <NSObject>
-(void)textURLTapped:(NSString*) aURL;
@end


@interface AutomatID_OTMPLabel : UILabel <AutomatID_OTMLStatefulObject>{
	AutomatID_OTMLFont* fontWrapper;
    AutomatID_OTMLComponentStatus currentState;
}

@property (nonatomic) UIEdgeInsets edgeInsets;
@property (nonatomic, readonly) BOOL linksEnabled;

- (id)initWithFrame:(CGRect)frame otmlFont:(AutomatID_OTMLFont*) aFontWrapper;
- (id)initWithFrame:(CGRect)frame otmlFont:(AutomatID_OTMLFont*) aFontWrapper andAdjustFontSizeFitWith:(BOOL) adjustFont;
- (void) setState:(AutomatID_OTMLComponentStatus) state;
- (void) setState:(AutomatID_OTMLComponentStatus) state forced:(BOOL) forced;
-(AutomatID_OTMLComponentStatus)getCurrentState;
-(void)setPressedListener:(NSObject<MPLabelPressedListener> *)aListener;
-(void)setURLTappedListener:(id<MPLabelURLTappedListener>) aListener;
-(void)setOTMLFont:(AutomatID_OTMLFont*)theFont;
-(CGSize)sizeThatFitsWithCurrentFrame;
    
@end
