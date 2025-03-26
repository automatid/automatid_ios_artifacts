//
//  AutomatID_OTMLKeyboardNavigationBar.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/03/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//


@protocol AutomatID_OTMLKeyboardNavigationBarDelegate <NSObject>
-(void)nextButtonDidPressed;
-(void)prevButtonDidPressed;
-(void)doneButtonDidPressed;
@end

@protocol AutomatID_OTMLKeyboardNavigationBarDatasource <NSObject>
-(BOOL)hasNextResponder;
-(BOOL)hasPrevResponder;
-(BOOL)hasDoneButton;

@optional
-(NSString*)customizedNextButtonTitle;
@optional
-(NSString*)customizedPrevButtonTitle;
@optional
-(NSString*)customizedDoneButtonTitle;
@end

@interface AutomatID_OTMLKeyboardNavigationBar : NSObject

@property (nonatomic, assign) UIBarStyle barStyle;
@property (nonatomic, retain) NSObject<AutomatID_OTMLKeyboardNavigationBarDatasource>* navigatorDatasource;
@property (nonatomic, retain) NSObject<AutomatID_OTMLKeyboardNavigationBarDelegate>* navigatorDelegate;


-(void)applyBarToResponder:(NSObject*)aTextinput;

@end
