//
//  OTMLColor.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 11/03/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//


@class AutomatID_OTMPColor;

@protocol AutomatID_OTMLAbstractColorParser <NSObject>

-(void)parseColor:(AutomatID_OTMPColor*)aColor withColorString:(NSString*)aColorString;
-(UIColor*)wrappedColorForOTMPColor:(AutomatID_OTMPColor*)aColor;

@end

@interface AutomatID_OTMLGradientModel : NSString

@property (nonatomic, strong) NSArray<AutomatID_OTMPColor*>* colors;
@property (nonatomic, strong) NSString* direction;
@property (nonatomic, assign) CGRect gradientFrame;

-(NSArray<UIColor*>*)wrappedUIColors;


@end

@interface AutomatID_OTMPColor : NSObject <NSCopying>

@property(nonatomic,assign) CGFloat rgba_r;
@property(nonatomic,assign) CGFloat rgba_g;
@property(nonatomic,assign) CGFloat rgba_b;
@property(nonatomic,assign) CGFloat rgba_a;

@property (nonatomic, readonly, strong) NSString * colorString;
@property (nonatomic, readonly, strong) UIColor * wrappedUIColor;

@property (nonatomic, assign) BOOL isGradient;
@property (nonatomic, strong) AutomatID_OTMLGradientModel * gradientModel;

/**
 L'unico usato dai modelli
 **/
+(AutomatID_OTMPColor*) newMPColorFromString:(NSString*) aColorString;
-(BOOL)isClearColor;
-(void)setGradientFrame:(CGRect)aFrame;



/**
 Usati da OTML
 **/
+(AutomatID_OTMPColor*) newClearColor;
+(AutomatID_OTMPColor*) newBlackColor;
+(AutomatID_OTMPColor*) newColorFromPlainUIColor:(UIColor*) aPlainColor;

+(void) setColorParser:(id<AutomatID_OTMLAbstractColorParser>)aParser;

@end


