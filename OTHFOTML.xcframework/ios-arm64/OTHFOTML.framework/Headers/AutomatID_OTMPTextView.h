//
//  OTMPTextView.h
//  Pods
//
//  Created by Silvio D'Angelo on 02/04/2020.
//

#import <UIKit/UIKit.h>

@class AutomatID_OTMLFont;
@class AutomatID_OTMPTextView;

NS_ASSUME_NONNULL_BEGIN

@protocol AutomatID_MPTextURLTappedListener <NSObject>

-(void) textURLTapped:(NSString*) aURL;

@optional
-(void) tapOnNonUrlText;

@end

@interface AutomatID_OTMPTextView : UITextView

@property BOOL linksEnabled;
@property BOOL shouldUnderlineLinks;

@property (strong) AutomatID_OTMLFont* linksFont; // default is NO

@property NSLineBreakMode lineBreakMode; // Base UItextView doeas not implement this property.
@property NSUInteger numberOfLines; // Base UItextView doeas not implement this property.

- (instancetype) initWithFrame:(CGRect) frame
                      otmlFont:(AutomatID_OTMLFont*) aFontWrapper;

- (void) setURLTappedListener:(id<AutomatID_MPTextURLTappedListener>) aListener;
- (void) setOTMLFont:(AutomatID_OTMLFont*)theFont;

+ (void) enumerateUrlsinText:(NSString*) string
                   withBlock:(void(^_Nonnull)(NSRange, NSString*)) block;

@end

NS_ASSUME_NONNULL_END
