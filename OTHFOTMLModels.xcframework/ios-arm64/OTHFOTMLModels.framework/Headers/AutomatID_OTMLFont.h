//
//  OTMLFont.h
//  OTML
//
//  Created by Silvio D'Angelo on 20/09/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//


#import "AutomatID_OTMPColor.h"
#import "AutomatID_OTMLStatefulComponent.h"
#import "AutomatID_OTMLFontStyle.h"

@protocol AutomatID_OTMLAbstractFontParser;

#define FALLBACK_DEFAULT_FONT_SIZE 17.0
#define FALLBACK_DEFAULT_FONT [UIFont systemFontOfSize:FALLBACK_DEFAULT_FONT_SIZE]


@interface AutomatID_OTMLFont : NSObject <NSCopying>

@property (nonatomic, strong) NSString * family;
@property (nonatomic, strong) NSString * name;
@property (nonatomic, assign) CGFloat size;
@property (nonatomic, strong) NSString * style;
@property (nonatomic, strong) NSArray<AutomatID_OTMPColor*>* colors;

@property (nonatomic, readonly, strong) UIFont * wrappedFont;

+(void) setFontParser:(id<AutomatID_OTMLAbstractFontParser>)aParser;
-(id) initWithFontStyleName:(NSString*) aFontName;

+(AutomatID_OTMLFont*) defaultFont;
+(AutomatID_OTMLFont*) fontWithStyleName:(NSString*) aFontName;
-(AutomatID_OTMPColor*) getTextColor:(AutomatID_OTMLComponentStatus) stateIdx;
-(NSDictionary*)getFontAttributes;

@end

@interface AutomatID_OTMLDefaultFont : AutomatID_OTMLFont
@end
