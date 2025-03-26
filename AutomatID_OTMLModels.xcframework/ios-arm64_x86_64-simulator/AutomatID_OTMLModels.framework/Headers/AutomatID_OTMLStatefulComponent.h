//
//  OTMLStatefulComponent.h
//  ING
//
//  Created by Pasquale Cerqua on 18/10/12.
//
// 


typedef NS_ENUM(u_int8_t, AutomatID_OTMLComponentStatus){
    AutomatID_OTMLComponentStatus_normal = 0,
	AutomatID_OTMLComponentStatus_pressed = 1 << 0,
	AutomatID_OTMLComponentStatus_selected = 1 << 1,
	AutomatID_OTMLComponentStatus_disabled = 1 << 2,
    AutomatID_OTMLComponentStatus_error = 1 << 3
};


@protocol AutomatID_OTMLStatefulComponent <NSObject>

-(BOOL) setSelected:(BOOL)isSelected;
-(void) setInnerViewsSelected:(BOOL)isSelected;

-(BOOL) setEnabled:(BOOL)isEnabled;
-(void) setInnerViewsEnabled:(BOOL)isEnabled;

-(BOOL) setHighlighted:(BOOL)isHighlighted;
-(void) setInnerViewsHighlighted:(BOOL)isHighlighted;

@end

@protocol AutomatID_OTMLStatefulObject <NSObject>

-(void) setState:(AutomatID_OTMLComponentStatus) state;
-(void) setStateON:(AutomatID_OTMLComponentStatus) bitmastToTurnOn;
-(void) setStateOFF:(AutomatID_OTMLComponentStatus) bitmastToTurnOff;

@end
