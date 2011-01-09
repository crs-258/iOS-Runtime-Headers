/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SURotationController, SUViewControllerContext, UIViewController, SUViewControllerScriptProperties, NSMutableArray;



@interface SUViewController : UIViewController <ISOperationDelegate>
{
    SUViewControllerScriptProperties *_cachedScriptProperties;
    NSMutableArray *_cancelOnDeallocOperations;
    BOOL _excludeFromNavigationHistory;
    UIViewController *_footerViewController;
    UIViewController *_inputAccessoryViewController;
    BOOL _isEnteringForeground;
    BOOL _loading;
    SUViewControllerContext *_memoryPurgeContext;
    NSMutableArray *_operations;
    NSMutableArray *_pendingDialogs;
    SUViewControllerContext *_restoredContext;
    SURotationController *_rotationController;
    NSInteger _rotationState;
    BOOL _shouldInvalidateForMemoryPurge;
    NSInteger _transitionSafetyCount;
}

@property(getter=isVisible,readonly) BOOL visible;
@property(getter=isVisibleAndFrontmost,readonly) BOOL visibleAndFrontmost;
@property(readonly) double defaultPNGExpirationTime;
@property(readonly) NSString *defaultPNGName;
@property(readonly) NSInteger statusBarStyle;
@property(readonly) SUViewControllerFactory *viewControllerFactory;
@property BOOL shouldInvalidateForMemoryPurge;
@property BOOL shouldExcludeFromNavigationHistory;
@property(getter=isLoading) BOOL loading;
@property(retain) UIViewController *inputAccessoryViewController;
@property(readonly) UIViewController *footerViewController;
@property(retain,readonly) SUNavigationItem *navigationItem;


- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (id)copyChildViewControllersForReason:(NSInteger)arg1;
- (void)cancelOperations;
- (id)copyDefaultScriptProperties;
- (id)copyScriptProperties;
- (double)defaultPNGExpirationTime;
- (void)dismissAfterDialogs;
- (void)dismissFooterViewControllerAnimated:(BOOL)arg1;
- (void)enqueueOperation:(id)arg1 cancelOnDealloc:(BOOL)arg2;
- (void)handleApplicationURL:(id)arg1;
- (void)invalidateForMemoryPurge;
- (BOOL)isVisibleAndFrontmost;
- (id)newRotationController;
- (BOOL)presentDialog:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (BOOL)presentDialogForError:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (void)presentFooterViewController:(id)arg1 animated:(BOOL)arg2;
- (void)reloadContentSizeForViewInPopover;
- (void)setInputAccessoryViewController:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setSection:(id)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)trackOperation:(id)arg1 cancelOnDealloc:(BOOL)arg2;
- (void)storePageProtocolDidChange;
- (void)_performScheduledRotation:(id)arg1;
- (void)_dismissFooterAnimationDidStop:(id)arg1;
- (void)_presentFooterAnimationDidStop;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_dialogFinishedNotification:(id)arg1;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)_keyboardDidShowNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)setShouldInvalidateForMemoryPurge:(BOOL)arg1;
- (BOOL)shouldExcludeFromNavigationHistory;
- (void)setShouldExcludeFromNavigationHistory:(BOOL)arg1;
- (id)inputAccessoryViewController;
- (id)footerViewController;
- (id)_rotationController;
- (void)resetRestoredContext;
- (BOOL)shouldInvalidateForMemoryPurge;
- (id)copyArchivableContext;
- (void)restoreArchivableContext:(id)arg1;
- (id)initWithSection:(id)arg1;
- (id)viewControllerFactory;
- (BOOL)isLoading;
- (BOOL)isVisible;
- (void)loadView;
- (void)_setExistingNavigationItem:(id)arg1;
- (id)_existingNavigationItem;
- (void)setParentViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)_canReloadView;
- (void)purgeMemoryForReason:(NSInteger)arg1;
- (NSInteger)_preferredInterfaceOrientationGivenCurrentOrientation:(NSInteger)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (id)defaultPNGName;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (id)inputAccessoryView;
- (id)navigationItem;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(NSInteger)arg2;
- (void)invalidate;
- (id)init;
- (NSInteger)statusBarStyle;
- (void)applicationWillSuspend;
- (void)applicationDidResume;
- (NSInteger)interfaceOrientation;
- (id)defaultFirstResponder;
- (BOOL)_shouldUseDefaultFirstResponder;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (void)reload;

@end