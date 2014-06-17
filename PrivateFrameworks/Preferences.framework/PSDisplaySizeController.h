/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UILabel, PSSpecifier;

@interface PSDisplaySizeController : PSListController  {
    UILabel *_bodyExampleLabel;
    UILabel *_headlineExampleLabel;
    PSSpecifier *_displayGroupSpecifier;
    long long _originalDisplayMode;
    long long _displayMode;
}

+ (bool)shouldShowDisplaySize;

- (void)displaySizeConfirmed:(id)arg1;
- (id)getDisplaySizeModeValueForSpecifier:(id)arg1;
- (void)setDisplaySizeModeValue:(id)arg1 forSpecifier:(id)arg2;
- (void)updateDoneButtonEnabled;
- (void)finishDone:(id)arg1;
- (void)finishCancel:(id)arg1;
- (void)sizeCategoryDidChange:(id)arg1;
- (id)specifiers;
- (void)dealloc;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end