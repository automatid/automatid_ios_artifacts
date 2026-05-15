//
//  OTMLBeneficiarioTextField.h
//  ING
//
//  Created by epavoni on 16/10/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

#import "AutomatID_OTMLTextFieldComponent.h"
#import "AutomatID_OTMLDatasource.h"
#import "AutomatID_OTMLImage.h"

@interface AutomatID_OTMLHintedTextFieldComponent : AutomatID_OTMLTextFieldComponent <UITableViewDelegate, UITableViewDataSource>{
    @protected NSString* referenceHintDsPath;
}

-(NSArray*)getResolverdHintedChild;
-(void)setHintLoaded:(BOOL)set;
-(void) setHintResponseAtIndex:(int) anIndex;
-(void) loadHint;
-(BOOL)searchTokens;
-(void) filterResults;


@end
