//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AIImageCollectionViewDelegate.h"

@class AIImageCollectionView, NSImage, NSMenu, NSMutableArray, NSString;

@interface CustomHeadMenuController : NSObject <AIImageCollectionViewDelegate>
{
    NSMenu *mMenu;
    AIImageCollectionView *mCollectionView;
    NSImage *mUploadHeadImage;
    NSMutableArray *mCollectionItemImageNames;
    int mPopUpPositon;
    BOOL mIsDefaultHeadUploadding;
    id <CustomHeadMenuControllerGetImageDelegate> _getImageDelegate;
}

+ (id)shareCustomHeadMenuController;
@property __weak id <CustomHeadMenuControllerGetImageDelegate> getImageDelegate; // @synthesize getImageDelegate=_getImageDelegate;
@property int popUpPositon; // @synthesize popUpPositon=mPopUpPositon;
@property(retain) NSImage *uploadHeadImage; // @synthesize uploadHeadImage=mUploadHeadImage;
@property AIImageCollectionView *collectionView; // @synthesize collectionView=mCollectionView;
@property NSMenu *menu; // @synthesize menu=mMenu;
- (void).cxx_destruct;
- (void)setUploadImage:(id)arg1;
- (void)onCallback_Upload_CustomHead:(int)arg1;
- (void)uploadCustomHead:(id)arg1;
- (id)jpgRepresentationOfImage:(id)arg1;
- (id)compressImage:(id)arg1;
- (void)pictureTakerDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)imageCollectionView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (BOOL)imageCollectionView:(id)arg1 shouldSelectItemAtIndex:(unsigned long long)arg2;
- (BOOL)imageCollectionView:(id)arg1 shouldHighlightItemAtIndex:(unsigned long long)arg2;
- (void)onCustomImageMenuItemClicked:(id)arg1;
- (void)popUpMenuInView:(id)arg1 atLocation:(struct CGPoint)arg2;
- (id)createSystemHeadArray;
- (void)setGroupDataSource;
- (void)setUserDataSource;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

