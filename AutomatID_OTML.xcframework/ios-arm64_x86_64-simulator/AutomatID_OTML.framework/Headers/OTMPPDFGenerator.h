//
//  OTMPPDFGenerator.h
//  OTMLFramework
//
//  Created by Alessandro Ruggeri on 28/10/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <AutomatID_OTMLModels/AutomatID_OTMPColor.h>
#import <AutomatID_OTMLModels/AutomatID_OTMLFont.h>


@class OTMLfont;

@interface OTMPPDFGenerator : NSObject{
    NSString * contentText;
}

@property(nonatomic, assign) BOOL showPageNumber;
@property(nonatomic, strong) NSString * headerText;
@property(nonatomic, strong) AutomatID_OTMPColor * colorHeader;
@property(nonatomic, strong) AutomatID_OTMLFont * fontHeader;
@property(nonatomic, strong) AutomatID_OTMPColor * colorText;
@property(nonatomic, strong) AutomatID_OTMLFont * fontContentText;
@property(nonatomic, strong) NSString * filePath;

-(id)initWithText:(NSString*) aText;
- (BOOL)generatePdf;

@end
