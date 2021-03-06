/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

@class NSPopUpButton, NSTextField;

@interface IDEGeneralPrefsPaneController : IDEViewController
{
    NSPopUpButton *_singleClickPopUpButton;
    NSPopUpButton *_optionClickPopUpButton;
    NSPopUpButton *_doubleClickPopUpButton;
    NSTextField *_singleClickTextLabel;
    NSTextField *_optionClickTextLabel;
    NSTextField *_doubleClickTextLabel;
}

- (id)_labelNameForTarget:(int)arg1;
- (id)_menuNameForTarget:(int)arg1;
- (id)dialogWarningsExtensionPoint;
@property NSPopUpButton *doubleClickPopUpButton; // @synthesize doubleClickPopUpButton=_doubleClickPopUpButton;
@property unsigned long long doubleClickTarget;
@property NSTextField *doubleClickTextLabel; // @synthesize doubleClickTextLabel=_doubleClickTextLabel;
- (void)loadView;
@property NSPopUpButton *optionClickPopUpButton; // @synthesize optionClickPopUpButton=_optionClickPopUpButton;
@property unsigned long long optionClickTarget;
@property NSTextField *optionClickTextLabel; // @synthesize optionClickTextLabel=_optionClickTextLabel;
- (void)resetDialogWarnings:(id)arg1;
@property BOOL shouldActivateNewTabsAndWindows;
@property NSPopUpButton *singleClickPopUpButton; // @synthesize singleClickPopUpButton=_singleClickPopUpButton;
@property unsigned long long singleClickTarget;
@property NSTextField *singleClickTextLabel; // @synthesize singleClickTextLabel=_singleClickTextLabel;

@end

