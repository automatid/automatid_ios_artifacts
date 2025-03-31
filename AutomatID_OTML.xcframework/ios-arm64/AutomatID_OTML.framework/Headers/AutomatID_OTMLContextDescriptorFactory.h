//
//  OTMLContextDescriptorFactory.h
//  Bolts
//
//  Created by Silvio D'Angelo on 19/08/2019.
//

#import <AutomatID_OTML/AutomatID_OTMLContextDescriptor.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, AutomatID_OTMLContextDescriptorMenuStyle) {
        AutomatID_OTMLContextDescriptorMenuStyle_SwipeToShowMenu,
        AutomatID_OTMLContextDescriptorMenuStyle_SwipeToShowMenuOnTheLeft,
    AutomatID_OTMLContextDescriptorMenuStyle_TabbarMenu,
    AutomatID_OTMLContextDescriptorMenuStyle_TabbarMenu_GroupViewsCanSwipePositions
};

@interface AutomatID_OTMLContextDescriptorFactory : NSObject

+(AutomatID_OTMLContextDescriptor*) newContextsDescriptorWithMenuStyle:(AutomatID_OTMLContextDescriptorMenuStyle) style;

@end

NS_ASSUME_NONNULL_END
