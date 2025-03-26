@class AutomatID_OTMLFont;
#import "AutomatID_OTMLHorizontalAlignment.h"
#import "AutomatID_OTMLVerticalAlignment.h"
#import "AutomatID_OTMLComponentModel.h"
@class AutomatID_OTMPColor;
#import "AutomatID_OTMLAnchors.h"


//All triggers that are allowed by this component
extern NSString* const t_AutomatID_DateSelector_value_change;
extern NSString* const t_AutomatID_DateSelector_did_clear;
extern NSString* const t_AutomatID_DateSelector_did_select_blacklisted_date;
//All triggers that are allowed by this component
extern NSString* const t_AutomatID_DateSelector_do_clear;
extern NSString* const t_AutomatID_DateSelector_on_focus;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_AutomatID_DateSelector_placeholder;
extern NSString* const p_AutomatID_DateSelector_locale;
extern NSString* const p_AutomatID_DateSelector_timezone;
extern NSString* const p_AutomatID_DateSelector_date;
extern NSString* const p_AutomatID_DateSelector_date_format;
extern NSString* const p_AutomatID_DateSelector_default_picker_date;
extern NSString* const p_AutomatID_DateSelector_min_date;
extern NSString* const p_AutomatID_DateSelector_max_date;
extern NSString* const p_AutomatID_DateSelector_not_after_date_error_message;
extern NSString* const p_AutomatID_DateSelector_not_before_date_error_message;
extern NSString* const p_AutomatID_DateSelector_blacklisted_dates;
extern NSString* const p_AutomatID_DateSelector_month_year_only_popup_title;
extern NSString* const p_AutomatID_DateSelector_month_year_only_popup_ok_button;
extern NSString* const p_AutomatID_DateSelector_month_year_only_popup_cancel_button;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_AutomatID_DateSelector_date;

@interface AutomatID_OTMLDateSelectorModel : AutomatID_OTMLComponentModel<NSCopying>

    @property(nonatomic, strong) AutomatID_OTMLFont* blacklisted_date_fontstyle;


/**
Lista di timestamp separati da ; di date non selezionabili
*/
@property(nonatomic, strong) NSString* blacklisted_dates;


@property(nonatomic, strong) NSString* clear_image;


@property(nonatomic, assign) AutomatID_OTMLHorizontalAlignment content_align;


@property(nonatomic, assign) AutomatID_OTMLVerticalAlignment content_v_align;


@property(nonatomic, strong) NSString* custom_done_text;


@property(nonatomic, strong) NSString* custom_next_text;


@property(nonatomic, strong) NSString* custom_prev_text;


/**
http//wiki.opentech.com/doku.php?id=otmlotmldateselector
*/
@property(nonatomic, strong) NSString* date;


@property(nonatomic, strong) NSString* date_format;


/**
http//wiki.opentech.com/doku.php?id=otmlotmldateselector
*/
@property(nonatomic, strong) NSString* default_picker_date;


@property(nonatomic, assign) BOOL enable_clear_button;


@property(nonatomic, assign) BOOL floatingPlaceholder;


@property(nonatomic, assign) NSInteger floating_placeholder_distance;


@property(nonatomic, strong) AutomatID_OTMLFont* font_style_name;


@property(nonatomic, strong) NSString* locale;


@property(nonatomic, strong) NSString* max_date;


@property(nonatomic, strong) NSString* min_date;


@property(nonatomic, assign) BOOL month_year_only;


@property(nonatomic, strong) NSString* not_after_dateselector_component_id;


@property(nonatomic, strong) NSString* not_before_dateselector_component_id;


@property(nonatomic, assign) BOOL open_on_focus_changed;


@property(nonatomic, strong) AutomatID_OTMPColor* picker_bg_color;


@property(nonatomic, strong) NSString* placeholder;


@property(nonatomic, strong) AutomatID_OTMLFont* placeholder_font_style_name;


/**
Defines the keyboard anchor for iPhone4 class display.
If "none" the textfield will not move
If "top" the textfield will keep the offset from top
If "bottom" the textfield will keep the offset from bottom (so from keyboard)
*/
@property(nonatomic, assign) AutomatID_OTMLAnchors responder_anchor;


/**
Defines the offset for iPhone4 class display.
It must be defined not 0 only if responder_anchor is not "none"
*/
@property(nonatomic, assign) NSInteger responder_min_offset;


/**
Defines the offset for iPhone4 class display.
It must be defined not 0 only if responder_anchor is not "none"
*/
@property(nonatomic, assign) NSInteger responder_offset;


@property(nonatomic, strong) NSString* timezone;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
