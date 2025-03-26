#import "AutomatID_OTMLInvalidateMode.h"
#import "AutomatID_OTMLDirectionSort.h"
#import "AutomatID_OTMLTextResolutionMode.h"
#import "AutomatID_OTMLUpdatePolicy.h"
#import "AutomatID_OTMLSortableTypes.h"
#import "AutomatID_OTMLCameraCaptureOutputMode.h"
#import "AutomatID_OTMLComponentErrorMode.h"
#import "AutomatID_OTMLPopupButtonPosition.h"
#import "AutomatID_OTMLRedirectionPolicy.h"
#import "AutomatID_OTMLCardType.h"
#import "AutomatID_OTMLPagerMode.h"
#import "AutomatID_OTMLExternalEventAppOriginalState.h"
#import "AutomatID_OTMLImeAction.h"
#import "AutomatID_OTMLComponentModel.h"
#import "AutomatID_OTMLAnimationTypes.h"
#import "AutomatID_OTMLAuthenticationMode.h"
#import "AutomatID_OTMLPopupButtonStyle.h"
#import "AutomatID_OTMLAnchors.h"
#import "AutomatID_OTMLFontStyle.h"
#import "AutomatID_OTMLImageSlideshowAnimationTypes.h"
#import "AutomatID_OTMLScrollBarType.h"





@interface AutomatID_OTMLEnumCollectionModel : AutomatID_OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) AutomatID_OTMLAnimationTypes animation_type;


@property(nonatomic, assign) AutomatID_OTMLExternalEventAppOriginalState appOriginalState;


@property(nonatomic, assign) AutomatID_OTMLAuthenticationMode authenticationMode;


@property(nonatomic, assign) AutomatID_OTMLCameraCaptureOutputMode camera_capture_output_mode;


@property(nonatomic, assign) AutomatID_OTMLCardType card_type;


@property(nonatomic, assign) AutomatID_OTMLComponentErrorMode componentErrorMode;


@property(nonatomic, assign) AutomatID_OTMLDirectionSort direction_sort;


@property(nonatomic, assign) AutomatID_OTMLFontStyle fontStyle;


@property(nonatomic, assign) AutomatID_OTMLImageSlideshowAnimationTypes imageSlideshowAnimationType;


@property(nonatomic, assign) AutomatID_OTMLImeAction ime_action;


@property(nonatomic, assign) AutomatID_OTMLInvalidateMode invalidateMode;


@property(nonatomic, assign) AutomatID_OTMLTextResolutionMode otmlTextResolutionMode;


@property(nonatomic, assign) AutomatID_OTMLPagerMode pagerMode;


@property(nonatomic, assign) AutomatID_OTMLPopupButtonPosition popupButtonPosition;


@property(nonatomic, assign) AutomatID_OTMLPopupButtonStyle popupButtonStyle;


@property(nonatomic, assign) AutomatID_OTMLRedirectionPolicy redirection_policy;


@property(nonatomic, assign) AutomatID_OTMLAnchors responder_anchor;


@property(nonatomic, assign) AutomatID_OTMLScrollBarType scroll_bar_type;


@property(nonatomic, assign) AutomatID_OTMLSortableTypes sortable_type;


@property(nonatomic, assign) AutomatID_OTMLUpdatePolicy update_policy;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
