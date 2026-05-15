@class AutomatID_OTMLFont;
#import "AutomatID_OTMLAbstractTextComponentModel.h"


//All triggers that are allowed by this component
extern NSString* const t_AutomatID_RichText_did_click_link;


//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_AutomatID_RichText_last_clicked_link;

@interface AutomatID_OTMLRichTextModel : AutomatID_OTMLAbstractTextComponentModel<NSCopying>

    /**
    attiva gestione link, se attivo anche enable_rick_text (trigger ai link, ....)
    */
    @property(nonatomic, assign) BOOL enable_links;


/**
attiva gestione tag html (bold, link, ....)
*/
@property(nonatomic, assign) BOOL enable_rich_text;


@property(nonatomic, assign) BOOL enable_underline_link;


@property(nonatomic, strong) AutomatID_OTMLFont* font_style_name_link;


/**
Show at most this many text lines. If the text is longer, it will be truncated at the end with an ellipsis character (...)
*/
@property(nonatomic, assign) NSInteger max_lines;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
