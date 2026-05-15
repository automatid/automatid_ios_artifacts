@class AutomatID_OTMLFont;
#import "AutomatID_OTMLComponentModel.h"
@class AutomatID_OTMPColor;


//All triggers that are allowed by this component
extern NSString* const t_AutomatID_FingerPainter_did_start_drawing;
//All triggers that are allowed by this component
extern NSString* const t_AutomatID_FingerPainter_reset;


//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_AutomatID_FingerPainter_paint;
extern NSString* const f_AutomatID_FingerPainter_has_drawing;

@interface AutomatID_OTMLFingerPainterModel : AutomatID_OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) NSInteger bitmap_width;


@property(nonatomic, strong) AutomatID_OTMLFont* font_style_name;


@property(nonatomic, strong) AutomatID_OTMPColor* stroke_color;


@property(nonatomic, assign) NSInteger stroke_width;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
