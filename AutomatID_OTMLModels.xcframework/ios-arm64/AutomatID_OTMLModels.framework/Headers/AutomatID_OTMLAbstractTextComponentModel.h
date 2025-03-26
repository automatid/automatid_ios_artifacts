@class AutomatID_OTMLFont;
#import "AutomatID_OTMLHorizontalAlignment.h"
#import "AutomatID_OTMLVerticalAlignment.h"
#import "AutomatID_OTMLComponentModel.h"




//All parameters that are accepted in INPUT by this component
extern NSString* const p_AutomatID_AbstractTextComponent_font_style_name;
extern NSString* const p_AutomatID_AbstractTextComponent_text;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_AutomatID_AbstractTextComponent_text;

@interface AutomatID_OTMLAbstractTextComponentModel : AutomatID_OTMLComponentModel<NSCopying>

    /**
    Horizontal text alignment.
    Please keep in mind that this is useful whenever the text component is bigger than text (eg. has no value when with is wrap)
    */
    @property(nonatomic, assign) AutomatID_OTMLHorizontalAlignment content_align;


@property(nonatomic, assign) AutomatID_OTMLVerticalAlignment content_v_align;


/**
Font style to be used for (main) text
*/
@property(nonatomic, strong) AutomatID_OTMLFont* font_style_name;


@property(nonatomic, assign) BOOL notify_privacy;


@property(nonatomic, strong) NSString* text;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
