/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventViewController : UIViewController <EKEventTitleDetailItemDelegate, EKUIEventStatusButtonsViewDelegate, UIAlertViewDelegate> {
    BOOL  _ICSPreview;
    _UIAccessDeniedView * _accessDeniedView;
    EKEventEditViewController * _activeEventEditor;
    BOOL  _allowsEditing;
    BOOL  _allowsInviteResponses;
    BOOL  _allowsSubitems;
    BOOL  _autoPop;
    UIView * _blankFooterView;
    BOOL  _calendarPreviewIsInlineDayView;
    UIViewController * _confirmationAlertPresentationSourceViewController;
    EKEventDetailItem * _currentEditItem;
    NSArray * _currentSections;
    BOOL  _dead;
    <EKEventViewDelegate> * _delegate;
    BOOL  _didAppear;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _disclosedTableRange;
    int  _disclosedTableSection;
    int  _editorHideTransition;
    int  _editorShowTransition;
    EKEvent * _event;
    BOOL  _hidePreview;
    BOOL  _ignoreDBChanges;
    BOOL  _inlineDayViewRespectsSelectedCalendarsFilter;
    NSArray * _items;
    int  _lastAuthorizationStatus;
    int  _lastOrientation;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _layoutMargins;
    BOOL  _minimalMode;
    BOOL  _needsReload;
    BOOL  _noninteractivePlatterMode;
    int  _pendingStatus;
    EKUIRecurrenceAlertController * _recurrenceAlertController;
    int  _scrollToSection;
    EKEventDetailItem * _selectedEditItem;
    BOOL  _showingBlankFooterView;
    BOOL  _showsAddToCalendar;
    BOOL  _showsDelegateMessage;
    BOOL  _showsDelegatorMessage;
    BOOL  _showsDoneButton;
    BOOL  _showsOutOfDateMessage;
    BOOL  _showsPreview;
    BOOL  _showsUpdateCalendar;
    SingleToolbarItemContainerView * _statusButtonsContainerView;
    EKUIEventStatusButtonsView * _statusButtonsView;
    float  _statusButtonsViewCachedFontSize;
    BOOL  _tableIsBeingEdited;
    UITableView * _tableView;
    BOOL  _trustsStatus;
    BOOL  _viewIsVisible;
}

@property (getter=isICSPreview, nonatomic) BOOL ICSPreview;
@property (nonatomic) BOOL allowsCalendarPreview;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL allowsInviteResponses;
@property (nonatomic) BOOL allowsSubitems;
@property (nonatomic) BOOL calendarPreviewIsInlineDayView;
@property (nonatomic) UIViewController *confirmationAlertPresentationSourceViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKEventViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) int editorHideTransition;
@property (nonatomic) int editorShowTransition;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, readonly) UIScrollView *eventDetailsScrollView;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL hideCalendarPreview;
@property (nonatomic) BOOL inlineDayViewRespectsSelectedCalendarsFilter;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } layoutMargins;
@property (nonatomic) BOOL minimalMode;
@property (nonatomic) BOOL noninteractivePlatterMode;
@property (nonatomic) int scrollToSection;
@property (nonatomic) BOOL showsAddToCalendar;
@property (nonatomic) BOOL showsDelegateMessage;
@property (nonatomic) BOOL showsDelegatorMessage;
@property (nonatomic) BOOL showsDoneButton;
@property (nonatomic) BOOL showsOutOfDateMessage;
@property (nonatomic) BOOL showsUpdateCalendar;
@property (readonly) Class superclass;

+ (void)adjustLayoutForCell:(id)arg1 tableViewWidth:(float)arg2 numRowsInSection:(unsigned int)arg3 cellRow:(unsigned int)arg4 forceLayout:(BOOL)arg5;
+ (void)setDefaultDatesForEvent:(id)arg1;

- (void).cxx_destruct;
- (void)_addToCalendarClicked:(id)arg1;
- (BOOL)_backingEventAllowsEditing;
- (void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1;
- (void)_deleteClicked:(id)arg1;
- (void)_deleteSuggestionTapped:(id)arg1;
- (void)_dismissEditor:(BOOL)arg1 deleted:(BOOL)arg2;
- (id)_footerLabelContainingText:(id)arg1;
- (struct CGSize { float x1; float x2; })_idealSize;
- (id)_indexPathForAttendeesDetailItem;
- (id)_indexPathForSection:(int)arg1;
- (BOOL)_isDisplayingDeletableEvent;
- (BOOL)_isDisplayingInvitation;
- (BOOL)_isDisplayingSuggestion;
- (id)_items;
- (void)_keyboardWasHidden:(id)arg1;
- (void)_keyboardWasShown:(id)arg1;
- (void)_layoutStatusButtonsForInterfaceOrientation:(int)arg1;
- (void)_localeChanged;
- (BOOL)_navigationBarShouldBeHidden;
- (void)_performDelete:(int)arg1;
- (void)_performEditKeyCommand;
- (BOOL)_performSave:(int)arg1 animated:(BOOL)arg2;
- (void)_pop;
- (void)_prepareEventForEdit;
- (void)_presentDetachSheet;
- (void)_presentValidationAlert:(id)arg1;
- (void)_refreshEventAndReload;
- (void)_reloadIfNeeded;
- (void)_saveStatus:(int)arg1;
- (void)_saveStatus:(int)arg1 span:(int)arg2;
- (unsigned int)_sectionForDetailItem:(id)arg1;
- (void)_setNeedsReload;
- (void)_setObservesKeyboardNotifications:(BOOL)arg1;
- (void)_setUpAttendeesWithAcceptedItem:(id)arg1 declinedItem:(id)arg2 maybeItem:(id)arg3 noReplyItem:(id)arg4;
- (void)_setUpForEvent;
- (void)_setUpkeyCommands;
- (BOOL)_shouldDisplayDelegateOrOutOfDateMessage;
- (BOOL)_shouldDisplayDoneButton;
- (BOOL)_shouldDisplayStatusButtons;
- (BOOL)_shouldPopSelf;
- (BOOL)_shouldShowEditButton;
- (id)_statusButtons;
- (id)_statusButtonsContainerView;
- (id)_statusButtonsView;
- (void)_storeChanged:(id)arg1;
- (void)_teardownTableView;
- (void)_updateFooterIfNeeded;
- (void)_updateNavBarAnimated:(BOOL)arg1;
- (void)_updateResponse;
- (void)_updateResponseVisibility;
- (void)_updateStatusButtonsActions;
- (void)_updateTableContentForSizeCategoryChange:(id)arg1;
- (void)_updateTableContentInsetForKeyboard:(id)arg1;
- (id)_viewControllerForEditorPresentation;
- (id)accessDeniedView;
- (id)activeEventEditor;
- (BOOL)allowContextProvider:(id)arg1;
- (BOOL)allowsCalendarPreview;
- (BOOL)allowsEditing;
- (BOOL)allowsInviteResponses;
- (BOOL)allowsSubitems;
- (BOOL)calendarPreviewIsInlineDayView;
- (BOOL)canBecomeFirstResponder;
- (void)completeWithAction:(int)arg1;
- (id)confirmationAlertPresentationSourceViewController;
- (void)dealloc;
- (id)delegate;
- (void)detailItem:(id)arg1 performActionsOnCellAtIndexPath:(id)arg2 actions:(id /* block */)arg3;
- (void)detailItem:(id)arg1 wantsIndexPathsScrolledToVisible:(id)arg2;
- (void)detailItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;
- (void)detailItem:(id)arg1 wantsRowReload:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)doneButtonPressed;
- (void)editButtonPressed;
- (void)editEvent;
- (int)editorHideTransition;
- (int)editorShowTransition;
- (id)event;
- (void)eventDetailItemWantsRefeshForHeightChange;
- (id)eventDetailsScrollView;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)eventItemDidCommit:(id)arg1;
- (void)eventItemDidEndEditing:(id)arg1;
- (void)eventItemDidStartEditing:(id)arg1;
- (void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(float)arg2;
- (void)eventStatusButtonsView:(id)arg1 didSelectAction:(int)arg2;
- (float)eventStatusButtonsViewButtonFontSize:(id)arg1;
- (id)getCurrentContext;
- (BOOL)hideCalendarPreview;
- (id)initWithEvent:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)inlineDayViewRespectsSelectedCalendarsFilter;
- (void)invokeAction:(int)arg1;
- (BOOL)isICSPreview;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })layoutMargins;
- (void)loadView;
- (BOOL)minimalMode;
- (BOOL)noninteractivePlatterMode;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)openAttendeesDetailItem;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)presentEditorAnimated:(BOOL)arg1;
- (int)scrollToSection;
- (void)setActiveEventEditor:(id)arg1;
- (void)setAllowsCalendarPreview:(BOOL)arg1;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setAllowsInviteResponses:(BOOL)arg1;
- (void)setAllowsSubitems:(BOOL)arg1;
- (void)setCalendarPreviewIsInlineDayView:(BOOL)arg1;
- (void)setConfirmationAlertPresentationSourceViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditorHideTransition:(int)arg1;
- (void)setEditorShowTransition:(int)arg1;
- (void)setEvent:(id)arg1;
- (void)setHideCalendarPreview:(BOOL)arg1;
- (void)setICSPreview:(BOOL)arg1;
- (void)setInlineDayViewRespectsSelectedCalendarsFilter:(BOOL)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setMinimalMode:(BOOL)arg1;
- (void)setNoninteractivePlatterMode:(BOOL)arg1;
- (void)setScrollToSection:(int)arg1;
- (void)setShowsAddToCalendar:(BOOL)arg1;
- (void)setShowsDelegateMessage:(BOOL)arg1;
- (void)setShowsDelegatorMessage:(BOOL)arg1;
- (void)setShowsDoneButton:(BOOL)arg1;
- (void)setShowsOutOfDateMessage:(BOOL)arg1;
- (void)setShowsUpdateCalendar:(BOOL)arg1;
- (void)setTopInset:(float)arg1;
- (BOOL)shouldShowEditButtonInline;
- (BOOL)showsAddToCalendar;
- (BOOL)showsDelegateMessage;
- (BOOL)showsDelegatorMessage;
- (BOOL)showsDoneButton;
- (BOOL)showsOutOfDateMessage;
- (BOOL)showsUpdateCalendar;
- (unsigned int)supportedInterfaceOrientations;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (float)topInset;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewControllerForEventItem:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end