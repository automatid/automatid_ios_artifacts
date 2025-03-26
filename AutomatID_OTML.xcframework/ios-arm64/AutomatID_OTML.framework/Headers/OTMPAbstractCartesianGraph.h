//
//  OTMPAbstractCartesianGraph.h
//  OTMLFramework
//
//  Created by Enrico Pavoni on 03/03/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "OTMPCartesianPoint.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLComponentModel.h>

@class AutomatID_OTMLFont;

@protocol OTMPCartesianGraphInterpolatedLabelResolver <NSObject>

@optional
-(nullable NSString*)resolve_X_InterpolatedLabelAtIndex:(NSUInteger)anIndex withValue:(CGFloat)aValue;
-(nullable NSString*)resolve_Y_InterpolatedLabelAtIndex:(NSUInteger)anIndex withValue:(CGFloat)aValue;

@end

@interface OTMPAbstractCartesianGraph : UIControl{
    @protected NSArray<OTMPCartesianPoint*>* points;
}
#pragma mark init
-(nonnull instancetype) init __attribute__((unavailable("init not available")));
-(nonnull instancetype) initWithFrame:(CGRect)frame __attribute__((unavailable("init not available")));
-(nonnull instancetype) initWithCoder:(nullable NSCoder *)aDecoder __attribute__((unavailable("init not available")));

-(nonnull instancetype) initWithFrame:(CGRect)aFrame
                   modelConfiguration:(nonnull AutomatID_OTMLComponentModel*)aModel;

#pragma mark public
-(void) redrawWithPoints:(nonnull NSArray<OTMPCartesianPoint*>*) aPoints
            withResolver:(nullable NSObject<OTMPCartesianGraphInterpolatedLabelResolver>*)yLabelFormatter;
-(void) rebuildWithModelConfiguration:(nonnull AutomatID_OTMLComponentModel*)aModel
                         withResolver:(nullable NSObject<OTMPCartesianGraphInterpolatedLabelResolver>*)yLabelFormatter;

-(void) delayRedrawAndSetPoints:(nonnull NSArray<OTMPCartesianPoint*>*) aPoints
                   withResolver:(nullable NSObject<OTMPCartesianGraphInterpolatedLabelResolver>*)yLabelFormatter;

-(void) delayRedrawAndRebuildWithModelConfiguration:(nonnull AutomatID_OTMLComponentModel*)aModel
                                       withResolver:(nullable NSObject<OTMPCartesianGraphInterpolatedLabelResolver>*)yLabelFormatter;

+(CGFloat) adjustBaseTickSpace:(CGFloat) aBaseTickSpace adjustToUpper:(BOOL) shouldadjustToUpper;

#pragma mark abstract
-(nonnull AutomatID_OTMLComponentModel*) model;
-(UIEdgeInsets) getGraphInset;
-(BOOL)scale_X_valuesToZero;
-(BOOL)scale_Y_valuesToZero;
-(NSInteger)modulo_X_axis;
-(NSInteger)modulo_Y_axis;
-(NSInteger)modulo_Bullets;
-(nullable AutomatID_OTMLFont*)font_X_axis;
-(nullable AutomatID_OTMLFont*)font_Y_axis;
-(BOOL)interpolateYLabels;
-(BOOL)interpolateXLabels;
-(NSInteger)horizontalGridlinesNumber;
-(NSInteger)verticalGridlinesNumber;
-(CGFloat)minFixedX;
-(CGFloat)minFixedY;
-(CGFloat)maxFixedX;
-(CGFloat)maxFixedY;
-(CGFloat)xLabelAxisDistance;
-(CGFloat)yLabelAxisDistance;
-(CGSize)bulletSize;

-(void)redraw;

#pragma mark properties
@property (nonatomic, assign) BOOL isXLabelsInterpolated;
@property (nonatomic, assign) BOOL isYLabelsInterpolated;
@property (nonatomic, readonly) NSArray<NSString*>* _Nonnull axis_Y_Labels;
@property (nonatomic, readonly) NSArray<NSString*>* _Nonnull axis_X_Labels;
@property (nonatomic, readonly) CGRect yLabelsFrame;
@property (nonatomic, readonly) CGRect xLabelsFrame;
@property (nonatomic, readonly) CGFloat yAxisCoord;
@property (nonatomic, readonly) CGFloat xAxisCoord;
@property (nonatomic, readonly) CGRect chartFrame;

@end
