//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextAttachment.h"

@class BHMessageModel, MQGroupFileTextAttachmentCell, QQGroupFileInfo, QQGroupFileTransferTask;

@interface MQGroupFileTextAttachment : NSTextAttachment
{
    MQGroupFileTextAttachmentCell *_cell;
    QQGroupFileTransferTask *_task;
    QQGroupFileInfo *_fileInfo;
    BHMessageModel *_messageModel;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)showInFinderAction;
- (void)resumeTransferTaskAction;
- (void)pauseTransferTaskAction;
- (void)removeTransferTaskAction;
- (void)downloadAction;
- (void)doubleClickAction;
- (void)updateStatusText;
- (void)setTextView:(id)arg1;
- (id)localFilePath;
- (void)setCropedThumbnailImage:(id)arg1;
- (void)loadThumbnailImage;
- (id)getLocalImageWithPath:(id)arg1;
- (id)getThumbForLocalVideo:(id)arg1;
- (id)initWithMessageModel:(id)arg1;
- (BOOL)isBubbleMode;

@end

