//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OCRFaceAdapter : NSObject
{
}

+ (void)setUserEnableOCR:(BOOL)arg1;
+ (BOOL)userEnableOCR;
+ (struct _OCRControl)OCRControlSwitch:(id)arg1 timeIntervalJson:(id)arg2 uin:(unsigned long long)arg3;
+ (id)hourStringWithTimeInterval:(int)arg1;
+ (id)dayStringWithTimeInterval:(int)arg1;
+ (long long)_compareVersion:(id)arg1 ver2:(id)arg2;
+ (BOOL)needUpdateRemarkWithDataVersion:(id)arg1 targetVersion:(id)arg2;
+ (id)saveSurpriseImage:(id)arg1 sceneMode:(long long)arg2 sessionID:(id)arg3;
+ (id)saveImageToTempDir:(id)arg1;
+ (id)_getOCRImageTempDir;
+ (void)removeSurpriseImage:(id)arg1;
+ (void)removeSurpriseImageFromTempDir;
+ (void)removeImageFromTempDir;
+ (long long)getScenceModelWithSurprisePath:(id)arg1;
+ (void)surpriseImageSendedReport:(id)arg1;
+ (id)getSurpriseUinWithSessionID:(id)arg1 msgModels:(id)arg2;
+ (id)createSessionIDWithContact:(id)arg1;
+ (BOOL)isSupportSurpriseWithBaseElem:(id)arg1;
+ (id)getGifFirstFrame:(id)arg1;
+ (id)addImagePathExtension:(id)arg1;
+ (id)compressImage:(id)arg1 factor:(double)arg2;
+ (id)limitRemark:(id)arg1;
+ (id)fullWidthToHalfWidth:(id)arg1;
+ (id)filterSpecialChar:(id)arg1;
+ (id)filterInterpunctionChar:(id)arg1;
+ (BOOL)hasInterpunction:(id)arg1;
+ (BOOL)hasSpecialChar:(id)arg1;
+ (id)ocrFaceModels2MQFaceUnits:(id)arg1;
+ (id)faceUnits2OCRFaceModels:(id)arg1;
+ (id)ocrFaceModel2MQFaceUnit:(id)arg1;
+ (id)faceUnit2OCRFaceModel:(id)arg1;

@end

