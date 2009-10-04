/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIWebSelectionBlock.h"
#import "UIKeyboardInput.h"
#import <WebKit/DOMNode.h>
#import "UIKit-Structs.h"


@interface DOMNode (UIWebFormAssistantExtras)
-(id)createPeripheral;
@end

@interface DOMNode (UIWebFormExtensions)
-(id)createSelectedItem;
-(id)createPickerCell;
@end

@interface DOMNode (UIKit_DOMExtras)
-(id)tagName;
-(id)urlScheme;
@end

@interface DOMNode (UITextInputAdditions) <UIKeyboardInput>
-(void)takeTraitsFrom:(id)from;
-(BOOL)hasContent;
-(void)setupPlaceholderTextIfNeeded;
-(id)textInputTraits;
-(void)setSecure:(BOOL)secure;
-(id)delegate;
-(BOOL)isProxyFor:(id)aFor;
-(BOOL)requiresKeyEvents;
-(void)handleKeyEvent:(GSEventRef)event;
-(CFCharacterSetRef)textTrimmingSet;
-(void)setTextTrimmingSet:(CFCharacterSetRef)set;
-(void)deleteBackward;
-(void)insertText:(id)text;
-(unsigned short)characterInRelationToCaretSelection:(int)caretSelection;
-(unsigned short)characterBeforeCaretSelection;
-(void)setMarkedText:(id)text;
-(void)setMarkedText:(id)text selectedRange:(NSRange)range;
-(void)confirmMarkedText:(id)text;
-(CGRect)rectForNSRange:(NSRange)nsrange;
-(id)rectsForNSRange:(NSRange)nsrange;
-(id)markedText;
-(void)replaceRangeWithText:(NSRange)text replacementText:(id)text2;
-(void)replaceCurrentWordWithText:(id)text;
-(void)replaceRangeWithTextWithoutClosingTyping:(NSRange)textWithoutClosingTyping replacementText:(id)text;
-(unsigned short)characterAfterCaretSelection;
-(id)fontForCaretSelection;
-(id)textColorForCaretSelection;
-(CGRect)rectContainingCaretSelection;
-(id)wordRangeContainingCaretSelection;
-(id)wordContainingCaretSelection;
-(id)wordInRange:(id)range;
-(void)expandSelectionToStartOfWordContainingCaretSelection;
-(int)wordOffsetInRange:(id)range;
-(NSRange)markedTextRange;
-(NSRange)selectionRange;
-(id)selectedDOMRange;
-(void)setSelectedDOMRange:(id)range affinityDownstream:(BOOL)downstream;
-(id)rangeByMovingCurrentSelection:(int)selection;
-(id)rangeByExtendingCurrentSelection:(int)selection;
-(void)extendCurrentSelection:(int)selection;
-(BOOL)hasSelection;
-(BOOL)selectionAtDocumentStart;
-(BOOL)selectionAtSentenceStart;
-(BOOL)selectionAtWordStart;
-(BOOL)rangeAtSentenceStart:(id)sentenceStart;
-(void)moveBackward:(unsigned)backward;
-(void)moveForward:(unsigned)forward;
-(void)selectAll;
-(int)selectionState;
-(void)setText:(id)text;
-(id)text;
-(void)setSelectionWithPoint:(CGPoint)point;
-(CGRect)caretRect;
-(CGRect)convertCaretRect:(CGRect)rect;
-(id)keyboardInputView;
-(BOOL)isShowingPlaceholder;
-(id)textSuggestionDelegate;
-(void)setTextSuggestionDelegate:(id)delegate;
-(BOOL)contentsIsSingleValue;
-(void)setContentsIsSingleValue:(BOOL)value;
-(int)textLoupeVisibility;
-(void)setTextLoupeVisibility:(int)visibility;
-(UIReturnKeyType)returnKeyType;
-(void)setReturnKeyType:(UIReturnKeyType)type;
-(int)initialSelectionBehavior;
-(void)setInitialSelectionBehavior:(int)behavior;
-(id)editingDelegate;
-(void)setEditingDelegate:(id)delegate;
-(id)automaticallySelectedOverlay;
-(void)updateAutoscroll:(id)autoscroll;
-(CGPoint)constrainedPoint:(CGPoint)point;
-(void)acceptedAutoFillWord:(id)word;
-(BOOL)isAutoFillMode;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(void)updateSelection;
-(id)selectionView;
-(CGRect)selectionClipRect;
-(id)content;
-(id)interactionAssistant;
-(BOOL)isEditable;
-(BOOL)isEditing;
-(BOOL)becomesEditableWithGestures;
-(void)setBecomesEditableWithGestures:(BOOL)gestures;
-(void)detachInteractionAssistant;
-(void)detachSelectionView;
@end

@interface DOMNode (UIWebViewAdditions)
-(CGRect)convertRect:(CGRect)rect toView:(id)view;
-(BOOL)isTextControl;
-(BOOL)isSecure;
@end

@interface DOMNode (UIWebFormsDOMApprovedFocus)
+(id)approvedFocusNode;
-(void)setApprovedFocus:(BOOL)focus;
-(BOOL)hasApprovedFocus;
@end

@interface DOMNode (UIWebInteraction)
-(BOOL)showsTapHighlight;
-(id)tapHighlightColor;
-(BOOL)touchCalloutEnabled;
-(id)absoluteQuadsAtPoint:(CGPoint)point;
-(BOOL)isLikelyToBeginPageLoad;
-(BOOL)nodeCanBecomeFirstResponder;
@end

@interface DOMNode (UIWebSelectionAdditions) <UIWebSelectionBlock>
-(BOOL)containsNode:(id)node;
-(BOOL)strictlyContainsNode:(id)node;
-(id)asElement;
-(id)enclosingElementIncludingSelf;
-(id)webFrame;
-(id)parentBlock;
-(BOOL)selectable;
-(BOOL)hasCustomLineHeight;
-(BOOL)isSameBlock:(id)block;
-(BOOL)containsBlock:(id)block;
-(BOOL)strictlyContainsBlock:(id)block;
-(id)largerParent;
-(BOOL)rendersAsBlock;
-(id)asDomNode;
-(id)asDomRange;
-(BOOL)containsRange:(id)range;
-(id)rangeOfContents;
-(BOOL)canShrinkDirectlyToTextOnly;
-(CGRect)boundingRect;
-(id)enclosingDocument;
-(id)firstDescendantOfAboutTheSameWidthOrHeightAsRect:(CGRect)aboutTheSameWidthOrHeightAsRect withDescentDirection:(int)descentDirection;
-(id)firstDescendantOfAboutTheSameWidthOrHeight;
-(id)lastDescendantOfAboutTheSameWidthOrHeight;
@end
