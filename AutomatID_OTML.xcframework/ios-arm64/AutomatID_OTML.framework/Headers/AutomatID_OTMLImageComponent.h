//
//  OTMLImage.h
//  OTML
//
//  Created by Alessandro Ruggeri on 11/06/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLComponent.h"
#import "AutomatID_OTMLImage.h"
#import <AutomatID_OTMLModels/AutomatID_OTMLImageContentScale.h>

@interface AutomatID_OTMLImageComponent : AutomatID_OTMLComponent <AutomatID_OTMLStatefulComponent>{
    @protected AutomatID_OTMLImage * image_n;
    @protected AutomatID_OTMLImage * image_p;
    @protected AutomatID_OTMLImage * image_s;
    @protected AutomatID_OTMLImage * image_sp;
    @protected AutomatID_OTMLImage * image_d;
}

@property (nonatomic, readonly)UIImageView* imageView;


@end
