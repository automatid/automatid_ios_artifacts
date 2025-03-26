//
//  AutomatID_OTMLDownloadedDescriptorModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 27/08/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "AutomatID_OTMLAbstractUpdateDescriptorModel.h"

@interface AutomatID_OTMLDownloadedDescriptorModel : AutomatID_OTMLAbstractUpdateDescriptorModel

@property int nonce;

-(id)initWithData:(NSData*)aFullResponseData;

@end
