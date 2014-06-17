/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVCaptureOutputInternal_FigRecorder;

@interface AVCaptureOutput_FigRecorder : NSObject  {
    AVCaptureOutputInternal_FigRecorder *_outputInternal;
}

@property(readonly) NSArray * connections;

+ (void)initialize;

- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)didStartForSessionWithoutGraphRebuild:(id)arg1;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForMetadataOutputRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })metadataOutputRectOfInterestForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)transformedMetadataObjectForMetadataObject:(id)arg1 connection:(id)arg2;
- (bool)canAddConnectionForMediaType:(id)arg1;
- (id)firstEnabledConnectionForMediaType:(id)arg1;
- (void)updateMetadataTransformForCaptureOptions:(id)arg1;
- (bool)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (bool)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (struct CGSize { double x1; double x2; })outputSizeForCaptureOptions:(id)arg1;
- (id)_inputForConnection:(id)arg1;
- (id)notReadyError;
- (void)bumpChangeSeed;
- (int)changeSeed;
- (id)connections;
- (void)didStartForSession:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (id)connectionWithMediaType:(id)arg1;
- (id)liveConnections;
- (id)init;
- (void)setSession:(id)arg1;
- (id)session;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end