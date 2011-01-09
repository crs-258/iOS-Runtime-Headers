/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMHTMLTextAreaElement : DOMHTMLElement 
{
}

@property(copy) NSString *defaultValue;
@property(retain,readonly) DOMHTMLFormElement *form;
@property(copy) NSString *accessKey;
@property NSInteger cols;
@property BOOL disabled;
@property BOOL autofocus;
@property(copy) NSString *name;
@property BOOL readOnly;
@property NSInteger rows;
@property(copy,readonly) NSString *type;
@property(copy) NSString *value;
@property(readonly) BOOL willValidate;
@property NSInteger selectionStart;
@property NSInteger selectionEnd;


- (void)setDisabled:(BOOL)arg1;
- (NSInteger)structuralComplexityContribution;
- (BOOL)_isEdited;
- (void)select;
- (BOOL)readOnly;
- (BOOL)disabled;
- (id)form;
- (BOOL)autocapitalize;
- (BOOL)autocorrect;
- (id)type;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (void)setName:(id)arg1;
- (id)name;
- (NSUInteger)textLength;
- (id)defaultValue;
- (void)setDefaultValue:(id)arg1;
- (NSInteger)maxLength;
- (void)setMaxLength:(NSInteger)arg1;
- (void)setReadOnly:(BOOL)arg1;
- (BOOL)required;
- (void)setRequired:(BOOL)arg1;
- (NSInteger)selectionStart;
- (void)setSelectionStart:(NSInteger)arg1;
- (NSInteger)selectionEnd;
- (void)setSelectionEnd:(NSInteger)arg1;
- (void)setSelectionRange:(NSInteger)arg1 end:(NSInteger)arg2;
- (NSInteger)cols;
- (void)setCols:(NSInteger)arg1;
- (NSInteger)rows;
- (void)setRows:(NSInteger)arg1;
- (void)setAutocorrect:(BOOL)arg1;
- (void)setAutocapitalize:(BOOL)arg1;
- (id)validity;
- (BOOL)autofocus;
- (void)setAutofocus:(BOOL)arg1;
- (BOOL)willValidate;
- (id)validationMessage;
- (BOOL)checkValidity;
- (void)setCustomValidity:(id)arg1;
- (id)accessKey;
- (void)setAccessKey:(id)arg1;
- (id)endPosition;
- (id)startPosition;
- (BOOL)isTextControl;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)textInputTraits;
- (BOOL)nodeCanBecomeFirstResponder;
- (void)_startAssistingDocumentView:(id)arg1;
- (void)_stopAssistingDocumentView:(id)arg1;
- (BOOL)_requiresAccessoryView;
- (BOOL)_requiresInputView;
- (BOOL)_supportsAutoFill;
- (id)_textFormElement;

@end