//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface FAMsgProcessorDataline : NSObject
{
    unsigned long long _lastReadedTime;
    NSMutableDictionary *_groupMsgCache;
    NSMutableDictionary *_famodelCache;
    NSMutableDictionary *_textMsgCache;
    NSMutableSet *_sessionCache;
}

- (void).cxx_destruct;
- (BOOL)_checkMessageIllegal:(const struct MsgBody_MsgHeader *)arg1;
- (void)doReportReadState;
- (void)_notifyMultiFileMsg:(id)arg1;
- (void)processDatalineFileMsg:(id)arg1;
- (BOOL)_action0x211_0x7_0x4Message:(id)arg1;
- (BOOL)_action0x211_0x7_0x1Message:(id)arg1;
- (BOOL)_actionReceive0x211_0x7Message:(MsgBody_96abbbc3 *)arg1 withMsgModel:(id)arg2;
- (BOOL)_handle0x211Msg:(const struct Msg *)arg1 withMsgModel:(id)arg2;
- (BOOL)_parse0x211_0x7_0x4Message:(MsgBody_96abbbc3 *)arg1 toMsgModel:(id)arg2;
- (BOOL)_parse0x211_0x7_0x1Message:(MsgBody_96abbbc3 *)arg1 toMsgModel:(id)arg2;
- (BOOL)_parseReceive0x211_0x7Message:(MsgBody_96abbbc3 *)arg1 toMsgModel:(id)arg2;
- (BOOL)_parse0x211Msg:(const struct Msg *)arg1 toMsgModel:(id)arg2;
- (BOOL)handleFileMsg:(const struct Msg *)arg1 toMsgModel:(id)arg2;
- (BOOL)isDuplicateMsg:(id)arg1 duplicate:(char *)arg2;
- (BOOL)parseFileMsg:(const struct Msg *)arg1 toMsgModel:(id)arg2;
- (id)init;

@end

