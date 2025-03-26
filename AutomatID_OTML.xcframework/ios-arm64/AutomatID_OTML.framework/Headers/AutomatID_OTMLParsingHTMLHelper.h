//
//  AutomatID_OTMLParsingHTMLHelper.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 21/03/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <AutomatID_OTMLModels/AutomatID_OTMLComponentModel.h>

@interface AutomatID_OTMLParsingHTMLHelper : NSObject

-(id) initWithModel:(AutomatID_OTMLComponentModel*) aModel;

-(NSString*) parsedStringForHTMLString:(NSString*) aHTML;


@end
