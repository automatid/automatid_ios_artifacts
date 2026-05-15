//
//  AutomatID_OTMLFingerPrinterCanvas.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 14/01/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AutomatID_OTMLFingerPainterComponent.h"

@interface AutomatID_OTMLFingerPrinterCanvas : UIView{
    
}

-(id) initWithFrame:(CGRect) aFrame
   usingStrokeWidth:(CGFloat) theWidth
   usingStrokeColor:(UIColor*) theColor
           delegate:(id<AutomatID_OTMLFingerpaintDrawingDelegate>)aDelegate;

-(void) clearCanvas;
-(UIImage*) fingerPrintedImage;

@end
