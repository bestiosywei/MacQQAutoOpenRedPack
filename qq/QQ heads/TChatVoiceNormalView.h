//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXAudioView.h"

#import "TChatEventProtocol.h"
#import "TChatVoiceView.h"

@class MQSessionID, NSString, TChatBaseViewModel, TChatImage;

@interface TChatVoiceNormalView : TXAudioView <TChatVoiceView, TChatEventProtocol>
{
    TChatBaseViewModel *_viewModel;
    MQSessionID *_sessionID;
}

@property __weak MQSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (id)handleMenuEvent:(id)arg1;
@property(readonly, nonatomic) TChatImage *dragImage;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect)arg1;
- (void)refreshWithTime:(int)arg1;
- (void)setBubbleImage:(BOOL)arg1;
- (BOOL)bIsAudioFileExist;
- (id)initWithUin:(unsigned long long)arg1 andAudioPath:(id)arg2 andTimeLength:(int)arg3 isSelf:(_Bool)arg4 withGUID:(id)arg5;
- (void)update:(id)arg1;
- (void)_downloadFile;
- (void)mouseDown:(id)arg1;
- (void)requestReloadDate;

// Remaining properties
@property(nonatomic) long long aioWidth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL drawSelectedRange;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

