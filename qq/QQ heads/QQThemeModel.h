//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@interface QQThemeModel : NSObject
{
    unsigned int _themeId;
    NSString *_title;
    NSString *_bundleId;
    NSString *_thumbName;
    NSString *_downloadUrl;
    NSString *_author;
    NSString *_version;
    NSData *_md5;
    int _status;
    BOOL _isNew;
    int _size;
    int _downloadSize;
    NSString *_themePath;
    NSDictionary *_themeConfig;
    BOOL _isSilentUpdate;
}

@property(nonatomic) BOOL isSilentUpdate; // @synthesize isSilentUpdate=_isSilentUpdate;
@property(nonatomic) BOOL isNew; // @synthesize isNew=_isNew;
@property(nonatomic) int downloadSize; // @synthesize downloadSize=_downloadSize;
@property(nonatomic) int size; // @synthesize size=_size;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(copy, nonatomic) NSString *thumbName; // @synthesize thumbName=_thumbName;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int themeId; // @synthesize themeId=_themeId;
- (void).cxx_destruct;
- (BOOL)isNeedsUpdate;
- (BOOL)isSelected;
- (void)resetThemeConfig;
- (id)getThemeConfig;
- (id)getThemePath;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

