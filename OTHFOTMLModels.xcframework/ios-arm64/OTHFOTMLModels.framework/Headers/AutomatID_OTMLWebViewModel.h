#import "AutomatID_OTMLComponentModel.h"
#import "AutomatID_OTMLNetworkInteractionType.h"


//All triggers that are allowed by this component
extern NSString* const t_AutomatID_WebView_did_finish_load;
extern NSString* const t_AutomatID_WebView_download_did_finish;
extern NSString* const t_AutomatID_WebView_download_did_error;
extern NSString* const t_AutomatID_WebView_did_finish_internal_navigation;
//All triggers that are allowed by this component
extern NSString* const t_AutomatID_WebView_refresh;
extern NSString* const t_AutomatID_WebView_refresh_if_necessary;
extern NSString* const t_AutomatID_WebView_back;
extern NSString* const t_AutomatID_WebView_forward;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_AutomatID_WebView_source;
extern NSString* const p_AutomatID_WebView_html_text;
extern NSString* const p_AutomatID_WebView_navigation_filter_regex_pattern;
extern NSString* const p_AutomatID_WebView_html_text_base_url;
extern NSString* const p_AutomatID_WebView_open_file_after_download;
extern NSString* const p_AutomatID_WebView_download_fallback_file_extension;
extern NSString* const p_AutomatID_WebView_download_filter_regex_pattern;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_AutomatID_WebView_can_go_back;
extern NSString* const f_AutomatID_WebView_can_go_forward;
extern NSString* const f_AutomatID_WebView_url_loaded;

@interface AutomatID_OTMLWebViewModel : AutomatID_OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) BOOL auto_load;


@property(nonatomic, strong) NSString* download_filter_regex_pattern;


@property(nonatomic, assign) BOOL download_support_enabled;


@property(nonatomic, assign) BOOL fixed_size;


@property(nonatomic, assign) BOOL has_otml_js_bridge;


@property(nonatomic, strong) NSString* html_text;


@property(nonatomic, assign) AutomatID_OTMLNetworkInteractionType http_type;


@property(nonatomic, strong) NSString* network_params;


@property(nonatomic, assign) BOOL open_file_after_download;


@property(nonatomic, strong) NSString* source;


@property(nonatomic, strong) NSString* zoom;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
