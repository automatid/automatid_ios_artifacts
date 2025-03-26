//
//  OTMLLayout.h
//  OTML
//
//  Created by enrico on 30/05/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//


#import "AutomatID_OTMLComponent.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLLayoutModel.h>

@interface AutomatID_OTMLLayout : NSObject<NSCopying>{
@private 
    AutomatID_OTMLComponent* rootComponent;
    CGRect frame;
}
@property (nonatomic, strong) NSArray* tags;

- (id)initWithModel:(AutomatID_OTMLLayoutModel*)aModel;

-(BOOL) setFrame:(CGRect) aFrame;
-(CGRect) getFrame;
-(BOOL) setFrame:(CGRect) aFrame wrappingH:(BOOL) isWrappingH;
-(BOOL) setFrame:(CGRect) aFrame wrappingW:(BOOL) isWrappingW;
-(AutomatID_OTMLComponent*) getRootComponent;
-(BOOL) didTrigger:(NSString*) aTrigger;
-(BOOL)hasActionsForTrogger:(NSString*)aTrigger;

@end
