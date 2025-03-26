//
//  OTMLVoiceoverDTO.h
//  OTML
//
//  Created by Silvio D'Angelo on 04/04/22.
//

#import <Foundation/Foundation.h>


@class AutomatID_OTMLComponent;
@class AutomatID_OTMLViewController;

NS_ASSUME_NONNULL_BEGIN

@protocol OTMLAccessibleComponent <NSObject>

-(NSString*) componentIntrinsicAccessibleLabel;
-(BOOL) hasButtonComponentsTraits;

@end

@interface AutomatID_OTMLVoiceoverDTO : NSObject

+(AutomatID_OTMLVoiceoverDTO*) dtoFromComponent:(AutomatID_OTMLComponent*) component;


@property BOOL isAccessibilityItem;

@property (nullable) NSString* hint;
@property (nullable) NSString* label;
@property NSInteger index;
@property (nullable) NSString* group;

@end

NS_ASSUME_NONNULL_END
