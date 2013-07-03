/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUILockupItemCellLayout, SKUICellLayoutView, SKUITextBoxView;

@interface SKUIEditorialLockupCellLayout : SKUIItemCellLayout  {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsets;
    SKUILockupItemCellLayout *_lockupLayout;
    SKUICellLayoutView *_lockupView;
    SKUITextBoxView *_textBoxView;
    float _textBoxViewHeight;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property(readonly) SKUILockupItemCellLayout * lockupLayout;
@property(readonly) SKUITextBoxView * textBoxView;


- (id)_lockupView;
- (id)lockupLayout;
- (void)applyEditorialLayout:(id)arg1 withOrientation:(int)arg2;
- (id)textBoxView;
- (void)layoutForItemOfferChange;
- (BOOL)isIconImageHidden;
- (void)setIconImageHidden:(BOOL)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)iconImageView;
- (void)setIconImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)iconImage;
- (void)layoutSubviews;

@end