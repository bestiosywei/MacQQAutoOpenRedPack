//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

#import "IAccountService.h"
#import "WloginCallbackProtocol_v2.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, WloginSdk_v2;

@interface QAccountService : QQBaseSingleton <IAccountService, WloginCallbackProtocol_v2>
{
    WloginSdk_v2 *_loginSdk;
    int _loginState;
    NSString *_loginAccount;
    NSString *_activeUinOrAccount;
    NSString *_loginAccountEx;
    NSMutableArray *_sigItems;
    NSArray *_pskeyDomains;
    NSArray *_pt4TokenDomains;
    NSMutableDictionary *_sigRequestCache;
    NSMutableDictionary *_tokenChangedTimeCache;
    unsigned int _subAppID;
}

@property(retain, nonatomic) NSString *loginAccountEx; // @synthesize loginAccountEx=_loginAccountEx;
@property(retain, nonatomic) NSString *activeUinOrAccount; // @synthesize activeUinOrAccount=_activeUinOrAccount;
@property(retain, nonatomic) NSString *loginAccount; // @synthesize loginAccount=_loginAccount;
- (void).cxx_destruct;
- (BOOL)_isTokenExpired:(int)arg1 domain:(id)arg2;
- (void)_saveTokenLastChangedTime:(int)arg1 domain:(id)arg2;
- (id)_tokenKey:(int)arg1 domain:(id)arg2;
- (BOOL)_addDomainList:(id)arg1 withPSkey:(BOOL)arg2 withPT4Token:(BOOL)arg3 forAccount:(id)arg4;
- (void)_addDomain2Wtlogin;
- (void)addDomainList4PT4Token:(id)arg1;
- (void)addDomainList4PSkey:(id)arg1;
- (id)getTicket:(long long)arg1 source:(long long)arg2 account:(id)arg3;
- (id)getMemSig_STWEB:(id)arg1;
- (long long)getOnlineStatus;
- (id)getLoginNickname;
- (id)getUinStr;
- (long long)getUin;
- (void)quickLoginFailed_v2:(id)arg1 andRst:(int)arg2 withErrInfo:(id)arg3 tag:(long long)arg4;
- (void)showWebVerify:(id)arg1 andUrl:(id)arg2 tag:(long long)arg3;
- (void)loginFailed_v2:(id)arg1 andRst:(int)arg2 withErrInfo:(id)arg3 tag:(long long)arg4;
- (void)loginSuccessSig_v2:(id)arg1 andSig:(id)arg2 andBaseInfo:(id)arg3 tag:(long long)arg4;
- (void)inputSmsCodeError_v2:(id)arg1 andErrInfo:(id)arg2 tag:(long long)arg3;
- (void)inputSmsCode_v2:(id)arg1 andMbPhoneInfo:(id)arg2 tag:(long long)arg3;
- (void)inputSmsCodeError_v2:(id)arg1 errMsg:(id)arg2 tag:(long long)arg3;
- (void)inputSmsCode_v2:(id)arg1 andNextTime:(unsigned int)arg2 andTimeout:(unsigned int)arg3 andPhoneNo:(id)arg4 tag:(long long)arg5;
- (void)showPicture_v2:(id)arg1 andPicData:(id)arg2 andWording:(id)arg3 tag:(long long)arg4;
- (void)inputPassword_v2:(id)arg1 andAccount:(id)arg2 tag:(long long)arg3;
- (void)NotifyMSFLoginSuccess;
- (void)loginSuccessHandleWithTag:(long long)arg1 type:(unsigned long long)arg2;
- (id)findMemSigInArray:(id)arg1 sigName:(id)arg2;
- (int)requestAccountSig_STWEB:(id)arg1;
- (int)requestAccountSig_SKEY:(id)arg1;
- (int)requestAccountSig_VKEY:(id)arg1;
- (int)requestAccountSig_SID:(id)arg1;
- (int)requestAccountSigByBit:(unsigned int)arg1 ofAccount:(id)arg2;
- (int)getMemSig_D2KeyInt:(id)arg1;
- (id)getMemSig_D2Key:(id)arg1;
- (id)getMemSig_D2:(id)arg1;
- (id)getMemSig_A2:(id)arg1;
- (id)getSigKeyByBit:(unsigned int)arg1 ofAccount:(id)arg2;
- (id)getSigByBit:(unsigned int)arg1 ofAccount:(id)arg2;
- (void)requestSig_ByBit:(unsigned int)arg1 complection:(id)arg2;
- (void)requestUdpRelaySig:(id)arg1;
- (void)requestSig_PT4Token:(id)arg1;
- (int)requestSig_OpenIDAndAccessToken:(unsigned int)arg1 completion:(id)arg2;
- (int)requestSig_OpenIDAndOpenKey:(unsigned int)arg1 completion:(id)arg2;
- (int)requestSig_STWEB;
- (int)requestSig_SKEY;
- (int)requestSig_VKEY;
- (int)requestSig_SID;
- (int)requestSigByBit:(unsigned int)arg1;
- (id)convertStringFrom:(id)arg1;
- (id)getSig_LHGQ:(id)arg1;
- (id)getSig_DA2;
- (id)getSigKey_OnlineFile_ServerRelay;
- (id)getSig_OnlineFile_ServerRelay;
- (id)getSig_PT4TokenStr:(id)arg1;
- (id)getSig_PT4Token:(id)arg1;
- (id)getSig_PSKEYStr:(id)arg1;
- (id)getSig_PSKEY:(id)arg1;
- (id)getSig_VKEYHexStr;
- (id)getSig_VKEYStr;
- (id)getSig_VKEY;
- (id)encode:(id)arg1;
- (id)getSig_STWEBStr;
- (id)getSig_STWEB;
- (id)getSig_SKEYStr;
- (id)getSig_SKEY;
- (id)getSig_SIDStr;
- (id)getSig_SID;
- (id)getSig_HA3;
- (int)getSig_D2KeyInt;
- (id)getSig_D2Key;
- (id)getSig_D2;
- (id)getSig_A2;
- (id)getSigKeyByBit:(unsigned int)arg1;
- (id)getSigByBit:(unsigned int)arg1;
- (id)hexStringOfData:(id)arg1;
- (BOOL)isSigValidEx:(id)arg1 sigType:(unsigned int)arg2;
- (BOOL)isNeedPwdEx:(id)arg1;
- (int)loginEx:(id)arg1 tag:(long long *)arg2;
- (int)loginEx:(id)arg1 andPwd:(id)arg2 tag:(long long *)arg3;
- (id)getActiveUinOrAccount;
- (int)getLoginState;
- (void)deleteUserAccount:(id)arg1;
- (void)logoutUserAccount;
- (BOOL)isLocalSigValid:(id)arg1 sigType:(unsigned int)arg2;
- (BOOL)isExistPasswordSig:(id)arg1;
- (BOOL)isNeedLoginWithPwd:(id)arg1;
- (int)loginWithAccountFail:(id)arg1;
- (void)loginByOfflineWithAccount:(id)arg1 andUin:(id)arg2;
- (int)loginWithAccountByLocalSig:(id)arg1 tag:(long long *)arg2;
- (int)loginWithAccount:(id)arg1 tag:(long long *)arg2;
- (int)loginWithEIMAccount:(id)arg1 tag:(long long *)arg2;
- (int)loginWithAccount:(id)arg1 andPwd:(id)arg2 tag:(long long *)arg3;
- (id)getLoginAccountEx;
- (id)getLoginAccount;
- (unsigned int)getCurrentAppid;
- (id)getWloginSdk;
- (id)getSigItem:(long long)arg1;
- (void)removeSigItem:(long long)arg1;
- (void)recordSigItemOfEx:(long long)arg1 isLogin:(BOOL)arg2 sigBit:(unsigned int)arg3 thirdPartyAppid:(unsigned int)arg4;
- (void)recordSigItem:(long long)arg1 isLogin:(BOOL)arg2 sigBit:(unsigned int)arg3 thirdPartyAppid:(unsigned int)arg4;
- (void)setWtloginSubAppID:(unsigned int)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

