//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class CNAutocompleteResult, NSImage, NSString, NSView;

@protocol CNAutocompleteResultWindowDelegate <NSObject>

@optional
- (NSString *)accountStringForResult:(CNAutocompleteResult *)arg1;
- (NSString *)addressStringForResult:(CNAutocompleteResult *)arg1;
- (NSString *)currentPrefix;
- (void)didSelectResult:(CNAutocompleteResult *)arg1;
- (NSString *)headerForNilPrefixResults;
- (NSImage *)iconTypeForResult:(CNAutocompleteResult *)arg1 selected:(BOOL)arg2;
- (void)selectedResult:(id)arg1;
- (void)selectionDidChange:(id)arg1;
- (NSView *)viewForResult:(id)arg1;
@end

