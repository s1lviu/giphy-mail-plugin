//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@interface NSView (MailAdditions)
- (BOOL)_testIsHIDPI;
- (id)newFullRenderedSnapshot;
- (id)newRenderedSnapshotForLayerBackedView:(struct CGRect)arg1;
- (id)newRenderedSnapshotWithRect:(struct CGRect)arg1 allowAlpha:(BOOL)arg2 forceScaleFactor:(double)arg3;
- (id)newSnapshotForLayerBackedView;
- (id)newSnapshotForLayerBackedViewInRect:(struct CGRect)arg1;
- (id)newSnapshotIgnoringSubviewsWithRect:(struct CGRect)arg1;
- (id)newSnapshotWithRect:(struct CGRect)arg1;
- (struct CGRect)rectInScreenCoords:(struct CGRect)arg1;
@end

