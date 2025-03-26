//
//  OTMLAbstractFontParser.h
//  Pods
//
//  Created by Silvio D'Angelo on 20/06/2017.
//
//


@class AutomatID_OTMLFont;
@protocol AutomatID_OTMLAbstractFontParser <NSObject>

-(void)parseFont:(AutomatID_OTMLFont*)fontToPopulate withFamily:(NSString*)aFamily;
-(UIFont*)wrappedFontForOTMLFont:(AutomatID_OTMLFont*)aFont;

@end
