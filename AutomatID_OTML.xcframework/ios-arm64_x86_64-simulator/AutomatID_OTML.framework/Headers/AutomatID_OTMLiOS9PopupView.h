//
//  AutomatID_OTMLiOS9PopupView.h
//  OTML
//
//  Created by Silvio D'Angelo on 01/10/2018.
//

#import <UIKit/UIKit.h>

@class AutomatID_OTMLPopupModel;
@class AutomatID_OTMLEntry;

NS_ASSUME_NONNULL_BEGIN

@interface AutomatID_OTMLiOS9PopupView : UIView

+(AutomatID_OTMLiOS9PopupView*) buildViewControllerFrame:(CGRect) frame
                                     fromModel:(AutomatID_OTMLPopupModel *) popupModel
                             withBodyFromEntry:(AutomatID_OTMLEntry *) entry
                          withTargetForButtons:(id) atarget
                         andSelectorForButtons:(SEL) selectorForButtons;

-(void) refreshInnerViewsWithContainerFrame:(CGRect) frame
                                  fromModel:(AutomatID_OTMLPopupModel *) popupModel
                          withBodyFromEntry:(AutomatID_OTMLEntry *) entry;

@end

NS_ASSUME_NONNULL_END
