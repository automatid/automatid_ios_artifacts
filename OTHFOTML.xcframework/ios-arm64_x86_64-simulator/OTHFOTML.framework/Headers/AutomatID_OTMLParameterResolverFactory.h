//
//  AutomatID_OTMLParameterResolverFactory.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/04/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLParameter.h"


@interface AutomatID_OTMLAbstractParameterResolverSubFactory : NSObject
-(NSString*)resolveParameter:(AutomatID_OTMLParameter*)aParameter;
@end


@interface AutomatID_OTMLParameterResolverFactory : NSObject
+(AutomatID_OTMLParameterResolverFactory*)getInstance;
-(NSString*)resolveParameter:(AutomatID_OTMLParameter*)aParameter;
@end
