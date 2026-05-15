typedef enum {
    AutomatID_OTMLFontStyle_regular = 0,
    AutomatID_OTMLFontStyle_bold = 1,
    AutomatID_OTMLFontStyle_boldItalic = 2,
    AutomatID_OTMLFontStyle_condensedBlack = 3,
    AutomatID_OTMLFontStyle_condensedBold = 4,
    AutomatID_OTMLFontStyle_italic = 5,
    AutomatID_OTMLFontStyle_light = 6,
    AutomatID_OTMLFontStyle_lightItalic = 7,
    AutomatID_OTMLFontStyle_medium = 8,
    AutomatID_OTMLFontStyle_mediumItalic = 9,
    AutomatID_OTMLFontStyle_ultraLight = 10,
    AutomatID_OTMLFontStyle_ultraLightItalic = 11,
    AutomatID_OTMLFontStyle_thin = 12,
    AutomatID_OTMLFontStyle_thinItalic = 13,
    AutomatID_OTMLFontStyle_semiBold = 14
} AutomatID_OTMLFontStyle;

@interface AutomatID_OTMLFontStyleSupport : NSObject

+(AutomatID_OTMLFontStyle) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(AutomatID_OTMLFontStyle) aValue;

@end
