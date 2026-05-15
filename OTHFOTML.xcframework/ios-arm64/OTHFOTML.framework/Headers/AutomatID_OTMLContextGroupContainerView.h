//
//  OTMLContextGroupContainerView.h
//  OTMLFramework
//
//  Created by Enrico on 28/09/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLContextDescriptor.h"
#import "AutomatID_OTMLContextContainerViewController.h"

#import "AutomatID_OTMLContextDescriptor.h"

@import UIKit;

@interface AutomatID_OTMLContextGroupContainerViewController : UIViewController

- (nonnull instancetype)initWithFrame:(CGRect)frame
                        forDescriptor:(nonnull AutomatID_OTMLContextGroupDescriptorItem*)aDescriptor
                 forContextController:(nonnull AutomatID_OTMLContextContainerViewController*) contextController;
-(nonnull AutomatID_OTMLContextGroupContainerView*) innerView;
@end

@interface AutomatID_OTMLContextGroupContainerView : UIImageView <UIGestureRecognizerDelegate>

@property(nonnull, readonly) NSString* groupID;
@property(nonnull, readonly) NSMutableArray<NSString*>* contextIDs;
@property(nonatomic, retain, nullable) NSString* topContextID;
@property(nonatomic, assign) BOOL isOpen;
@property(nonatomic, readonly) BOOL isCloseAnimationAllowed;
@property(nonatomic, readonly) BOOL isOpenAnimationAllowed;
@property(nonatomic, readonly, nullable) UIColor* otml_bgColor;
@property(nonatomic, readonly, nullable) UIImage* otml_bgImage;
@property(nonatomic, readonly, nullable) UIImage* otml_blurImage;
@property(nonatomic, weak, nullable) AutomatID_OTMLContextContainerViewController* referenceContextController;
@property(nonatomic, assign) CGPoint gestureTransform;

@property(nonatomic, assign) AutomatID_OTMLContextDescriptorAnimation inAnimation;
@property(nonatomic, assign) AutomatID_OTMLContextDescriptorAnimation outAnimation;

- (nonnull instancetype)initWithFrame:(CGRect)frame forDescriptor:(nonnull AutomatID_OTMLContextGroupDescriptorItem*)aDescriptor forContextController:(nonnull AutomatID_OTMLContextContainerViewController*) contextController;
-(void)setBlurImage:(nullable UIImage*)aImage;
-(void)setBGVisibility:(BOOL)visible;
-(void)addSubview:(nonnull UIView *)view withContextID:(nonnull NSString*)aContextID;

-(void)setCurrentOrientation:(UIInterfaceOrientationMask)aOrientation;

@end


