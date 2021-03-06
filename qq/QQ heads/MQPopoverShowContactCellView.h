//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQContactsCellView.h"

@class NSImageView, NSTextField;

@interface MQPopoverShowContactCellView : MQContactsCellView
{
    NSTextField *_nickName;
    NSImageView *_headImage;
}

@property(nonatomic) __weak NSImageView *headImage; // @synthesize headImage=_headImage;
@property(nonatomic) __weak NSTextField *nickName; // @synthesize nickName=_nickName;
- (void).cxx_destruct;
- (void)updateSelectedItem:(BOOL)arg1;
- (void)setupContactItem:(id)arg1;
- (void)awakeFromNib;

@end

