//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSString;

@interface QQP2PAVChatModel : NSObject
{
    unsigned long long _selfUin;
    NSString *_selfNick;
    NSImage *_selfImage;
    NSString *_selfPhoneCode;
    unsigned long long _friUin;
    NSString *_friNick;
    NSImage *_friImage;
    NSString *_friPhoneCode;
    unsigned long long _groupId;
    unsigned int _friColorRingId;
    int _accountType;
    int _sessionType;
    int _startEvent;
    int _avChatState;
    int _startSessionType;
    int _friMicState;
    BOOL _isFriHasMic;
    BOOL _isFriHasCamera;
    BOOL _isSharp;
    BOOL _isSupportAVShift;
    BOOL _isMobileRequest;
    char *_pVideoBuffer;
    BOOL _isSwitchTerminal;
    BOOL _isPeerSwitchTerminal;
    BOOL _isTipsTouch;
    BOOL _decorateEnable;
    BOOL _filterEnable;
    BOOL _selfDevExpressionEnable;
    BOOL _peerDevExpressionEnable;
    BOOL _peerVerExpressionEnable;
    BOOL _selfDevMultiEnable;
    BOOL _peerDevMultiEnable;
    BOOL _peerVerMultiEnable;
    BOOL _selfMultiSwapFaceEnable;
    BOOL _peerMultiDevSwapFaceEnable;
    BOOL _peerMultiVerSwapFaceEnable;
    BOOL _selfSupportMultiEnable;
    BOOL _picFixEnable;
    BOOL _selfDevDrawingEnable;
    BOOL _peerDevDrawingEnable;
    BOOL _peerVerDrawingEnable;
}

@property(nonatomic) BOOL peerVerDrawingEnable; // @synthesize peerVerDrawingEnable=_peerVerDrawingEnable;
@property(nonatomic) BOOL peerDevDrawingEnable; // @synthesize peerDevDrawingEnable=_peerDevDrawingEnable;
@property(nonatomic) BOOL selfDevDrawingEnable; // @synthesize selfDevDrawingEnable=_selfDevDrawingEnable;
@property(nonatomic) BOOL picFixEnable; // @synthesize picFixEnable=_picFixEnable;
@property(nonatomic) BOOL selfSupportMultiEnable; // @synthesize selfSupportMultiEnable=_selfSupportMultiEnable;
@property(nonatomic) BOOL peerMultiVerSwapFaceEnable; // @synthesize peerMultiVerSwapFaceEnable=_peerMultiVerSwapFaceEnable;
@property(nonatomic) BOOL peerMultiDevSwapFaceEnable; // @synthesize peerMultiDevSwapFaceEnable=_peerMultiDevSwapFaceEnable;
@property(nonatomic) BOOL selfMultiSwapFaceEnable; // @synthesize selfMultiSwapFaceEnable=_selfMultiSwapFaceEnable;
@property(nonatomic) BOOL peerVerMultiEnable; // @synthesize peerVerMultiEnable=_peerVerMultiEnable;
@property(nonatomic) BOOL peerDevMultiEnable; // @synthesize peerDevMultiEnable=_peerDevMultiEnable;
@property(nonatomic) BOOL selfDevMultiEnable; // @synthesize selfDevMultiEnable=_selfDevMultiEnable;
@property(nonatomic) BOOL peerVerExpressionEnable; // @synthesize peerVerExpressionEnable=_peerVerExpressionEnable;
@property(nonatomic) BOOL peerDevExpressionEnable; // @synthesize peerDevExpressionEnable=_peerDevExpressionEnable;
@property(nonatomic) BOOL selfDevExpressionEnable; // @synthesize selfDevExpressionEnable=_selfDevExpressionEnable;
@property(nonatomic) BOOL filterEnable; // @synthesize filterEnable=_filterEnable;
@property(nonatomic) BOOL decorateEnable; // @synthesize decorateEnable=_decorateEnable;
@property(nonatomic) BOOL isMobileRequest; // @synthesize isMobileRequest=_isMobileRequest;
@property(nonatomic) int startSessionType; // @synthesize startSessionType=_startSessionType;
@property(nonatomic) BOOL isFriHasCamera; // @synthesize isFriHasCamera=_isFriHasCamera;
@property(nonatomic) BOOL isFriHasMic; // @synthesize isFriHasMic=_isFriHasMic;
@property(nonatomic) int friMicState; // @synthesize friMicState=_friMicState;
@property(nonatomic) int avChatState; // @synthesize avChatState=_avChatState;
@property(nonatomic) int startEvent; // @synthesize startEvent=_startEvent;
@property(nonatomic) int sessionType; // @synthesize sessionType=_sessionType;
@property(nonatomic) int accountType; // @synthesize accountType=_accountType;
@property(nonatomic) BOOL isTipsTouch; // @synthesize isTipsTouch=_isTipsTouch;
@property(nonatomic) BOOL isPeerSwitchTerminal; // @synthesize isPeerSwitchTerminal=_isPeerSwitchTerminal;
@property(nonatomic) BOOL isSwitchTerminal; // @synthesize isSwitchTerminal=_isSwitchTerminal;
@property(nonatomic) BOOL isSharp; // @synthesize isSharp=_isSharp;
@property(nonatomic) BOOL isSupportAVShift; // @synthesize isSupportAVShift=_isSupportAVShift;
@property(nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) unsigned int friColorRingId; // @synthesize friColorRingId=_friColorRingId;
@property(copy, nonatomic) NSString *friPhoneCode; // @synthesize friPhoneCode=_friPhoneCode;
@property(copy, nonatomic) NSString *friNick; // @synthesize friNick=_friNick;
@property(nonatomic) unsigned long long friUin; // @synthesize friUin=_friUin;
@property(copy, nonatomic) NSString *selfPhoneCode; // @synthesize selfPhoneCode=_selfPhoneCode;
@property(copy, nonatomic) NSString *selfNick; // @synthesize selfNick=_selfNick;
@property(nonatomic) unsigned long long selfUin; // @synthesize selfUin=_selfUin;
- (void).cxx_destruct;
- (void)dealloc;
- (char *)getVideoBuffer;
- (void)setVideoBuffer:(char *)arg1;
- (id)init;

@end
