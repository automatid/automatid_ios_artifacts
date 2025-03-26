//
//  AutomatID_OTMLVideoStreamPlayerView.h
//  StitchedStreamPlayer
//
//  Created by Silvio D'Angelo on 31/10/13.
//
//

#import <UIKit/UIKit.h>
#import "AutomatID_MyPlayerLayerView.h"
#import <AVFoundation/AVFoundation.h>

@class AutomatID_OTMLVideoStreamPlayerView;

@protocol AutomatID_OTMLVideoStreamPlayerViewDelegate <NSObject>

-(void) player:(AutomatID_OTMLVideoStreamPlayerView*) aPlayerView didEncounterAnError:(NSError*) theError;

-(void) playerViewDidEndStreamingVideo:(AutomatID_OTMLVideoStreamPlayerView*) aPlayerView;

-(void) playerViewRequiresFullScreenMode:(AutomatID_OTMLVideoStreamPlayerView*) aPlayerView;

-(void) playerViewDidLeaveFullScreenMode:(AutomatID_OTMLVideoStreamPlayerView*) aPlayerView;

-(void) playerViewIsReadyToPlayNextVideo:(AutomatID_OTMLVideoStreamPlayerView*) aPlayerVideo;

@end

@interface AutomatID_OTMLVideoStreamPlayerView : UIControl

- (id)initWithFrame:(CGRect)frame
        andDelegate:(id<AutomatID_OTMLVideoStreamPlayerViewDelegate>)aDelegate;

- (id)initWithFrame:(CGRect)frame
        andDelegate:(id<AutomatID_OTMLVideoStreamPlayerViewDelegate>)aDelegate
	  withFullLabel:(NSString*)aFullLabel
	  withWrapLabel:(NSString*)aWrapLabel;

-(void) play;
-(void) pause;
-(void) buttaviatutto; // <-- dal nome potrete ben vedere che questo metodo è temporaneo

- (void)loadMovieFromUrl:(NSString*) theUrl;

-(void) askFullMode:(id)sender;
-(void) askWrapMode:(id) sender;
-(BOOL) isActuallyOnFullScreen;

@property (strong) NSString* theUrlForResourceToStream;
@property (strong) AVPlayer *player;
@property (strong) AVPlayerItem *playerItem;

@end
