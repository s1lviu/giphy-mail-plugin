//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@interface ModalDimmingWindow : NSWindow
{
    id <MailDimmingWindowDelegate> _dimmingWindowDelegate;
}

- (void)dim;
@property(retain, nonatomic) id <MailDimmingWindowDelegate> dimmingWindowDelegate; // @synthesize dimmingWindowDelegate=_dimmingWindowDelegate;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(NSUInteger)arg2 backing:(NSUInteger)arg3 defer:(BOOL)arg4;
- (void)mouseDown:(id)arg1;

@end

