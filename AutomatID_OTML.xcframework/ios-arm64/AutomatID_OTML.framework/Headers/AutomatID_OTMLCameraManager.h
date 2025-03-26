//
//  OTMPCameraManager.h
//  OTMLFramework
//
//  Created by Alessandro Ruggeri on 12/02/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>

#import <AutomatID_OTMLCore/AutomatID_OTMLCore-umbrella.h>

#import <AutomatID_OTMLModels/AutomatID_OTMLCameraCaptureOutputMode.h>


@interface AutomatID_OTMLCameraManager : NSObject

@property (nonatomic, assign) BOOL useFrontCamera;
@property (nonatomic, assign) BOOL useFlashLight;
@property (nonatomic, assign, readonly) BOOL isCapturing;
@property (nonatomic, assign) BOOL shouldUseOldVideoSessionLogic; //per compatibilità all'indietro se dovesse rompersi qualcosa su mrz o in generale sulle action che usano la camera

-(CGSize)getVideoSessionResolution;
-(void) readaptToNewViewDimensions;

-(void)mountPreviewInView:(UIView*)aView;
-(void)startCapture;
-(void)stopCapture;
-(void)stopCaptureButNotPreview;

-(AVCaptureDevice *) getCurrentDevice;

-(AVCaptureOutput *) getCurrentOutput;

-(AVCaptureDeviceInput *) getCurrentInput;

-(AVCaptureSession *) getCurrentSession;
-(void) setCurrentSession:(AVCaptureSession *) session;
-(void) setCurrentOutput:(AVCaptureOutput*) output;
@end


@interface AutomatID_OTMLCameraManager_PhotoImpl : AutomatID_OTMLCameraManager

@property (nonatomic, assign) AutomatID_OTMLCameraCaptureOutputMode outputMode;

//photo
-(void)takePhoto:(OTMLSimpleCallback)completationBlock;

@end

@interface AutomatID_OTMLCameraManager_VideoImpl : AutomatID_OTMLCameraManager <AVCaptureVideoDataOutputSampleBufferDelegate>

@property (nonatomic, readonly, strong) UIImage * lastFrame;
@property (nonatomic, assign) CGFloat fps;
@property (nonatomic, copy) OTMLSimpleCallback frameAvailableCallback;
@property (nonatomic, assign) AVCaptureSessionPreset sessionPreset;

@end
