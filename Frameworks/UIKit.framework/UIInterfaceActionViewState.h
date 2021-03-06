/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInterfaceActionViewState : UIInterfaceActionVisualStyleViewState <NSCopying> {
    UIInterfaceAction * _action;
    id  _actionViewStateContext;
    BOOL  _isFocused;
    BOOL  _isHighlighted;
    BOOL  _isPreferred;
    UIColor * _legacyPresentationTintColor;
}

@property (nonatomic, readonly) UIInterfaceAction *action;
@property (nonatomic, readonly) id actionViewStateContext;
@property (nonatomic, readonly) BOOL isFocused;
@property (nonatomic, readonly) BOOL isHighlighted;
@property (nonatomic, readonly) BOOL isPreferred;
@property (nonatomic, readonly) UIColor *legacyPresentationTintColor;

+ (id)viewStateForActionRepresentationView:(id)arg1 action:(id)arg2;
+ (id)viewStateForActionRepresentationViewDescendantView:(id)arg1 action:(id)arg2;
+ (id)viewStateForAlertControllerActionView:(id)arg1;
+ (id)viewStateRepresentingDefaultAction;
+ (id)viewStateRepresentingPreferredAction;

- (void).cxx_destruct;
- (void)_collectStateForDefaultState;
- (void)_collectStateFromAction:(id)arg1;
- (void)_collectStateFromActionRepresentationView:(id)arg1;
- (void)_collectStateFromActionViewState:(id)arg1;
- (id)_legacyPresentationTintColorForActionRepresentationDescendantView:(id)arg1;
- (BOOL)_stateEqualToActionViewState:(id)arg1;
- (id)action;
- (id)actionViewStateContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithPropertiesFromActionRepresentationView:(id)arg1 groupView:(id)arg2 action:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFocused;
- (BOOL)isHighlighted;
- (BOOL)isPreferred;
- (id)legacyPresentationTintColor;

@end
