//
//  AutomatID_OTMLDatasourceFilter.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 01/10/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//


@interface AutomatID_OTMLDatasourceFilter : NSObject

-(BOOL) isEqualTofilter:(AutomatID_OTMLDatasourceFilter*) anotherFilter;
+(AutomatID_OTMLDatasourceFilter*) filterWithRule:(NSString*) aruleToApply;

@property (nonatomic,strong) NSString* filterRule;

@end
