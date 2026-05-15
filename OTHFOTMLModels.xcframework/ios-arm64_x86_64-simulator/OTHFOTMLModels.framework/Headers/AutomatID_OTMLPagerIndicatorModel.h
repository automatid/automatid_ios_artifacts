@class AutomatID_OTMLFont;
#import "AutomatID_OTMLComponentModel.h"
@class AutomatID_OTMPColor;
#import "AutomatID_OTMLPageContainerIndicatorType.h"




//All parameters that are accepted in INPUT by this component
extern NSString* const p_AutomatID_PagerIndicator_indicator_color;
extern NSString* const p_AutomatID_PagerIndicator_current_indicator_color;

@interface AutomatID_OTMLPagerIndicatorModel : AutomatID_OTMLComponentModel<NSCopying>

    @property(nonatomic, strong) AutomatID_OTMPColor* current_indicator_color;


@property(nonatomic, assign) BOOL disable_user_interaction;


@property(nonatomic, strong) AutomatID_OTMPColor* indicator_color;


@property(nonatomic, assign) NSInteger indicator_size;


@property(nonatomic, assign) AutomatID_OTMLPageContainerIndicatorType indicator_type;


@property(nonatomic, assign) NSInteger max_indicators;


@property(nonatomic, strong) AutomatID_OTMLFont* text_indicator_font_style;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
