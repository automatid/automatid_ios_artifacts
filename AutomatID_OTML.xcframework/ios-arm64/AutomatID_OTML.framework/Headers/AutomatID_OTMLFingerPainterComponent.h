//
//  OTMLFingerPrinter.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 14/01/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLComponent.h"

@protocol AutomatID_OTMLFingerpaintDrawingDelegate <NSObject>

@optional
-(void)didStartDrawing;

@optional
-(void)hasDrawing;

@end

@interface AutomatID_OTMLFingerPainterComponent : AutomatID_OTMLComponent <AutomatID_OTMLFingerpaintDrawingDelegate>

@end
