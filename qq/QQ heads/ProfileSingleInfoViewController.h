//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProfileBaseInfoViewController.h"

#import "EIMMenuControllerDelegate.h"
#import "HoverButtonDelegate.h"
#import "MQFloatTextFieldDelegate.h"

@class EIMMenuController, MQFloatTextField, MQNinePartImage, NSArray, NSImageView, NSLayoutConstraint, NSMutableArray, NSString, NSTextField, NSView, ProfileSource, TXColorView, TXHoverButton;

@interface ProfileSingleInfoViewController : ProfileBaseInfoViewController <MQFloatTextFieldDelegate, HoverButtonDelegate, EIMMenuControllerDelegate>
{
    TXColorView *_gridInfo;
    NSView *_infoView;
    TXColorView *_sourceContainer;
    NSTextField *_textSourceOne;
    NSTextField *_textSourceTwo;
    TXHoverButton *_btnCloseSource;
    NSLayoutConstraint *_gripTopConstraint;
    NSLayoutConstraint *_QAgeTrailingConstraint;
    NSTextField *_labelNick;
    NSTextField *_labelRemark;
    NSTextField *_labelGroup;
    NSTextField *_labelQQ;
    NSTextField *_labelQAge;
    NSTextField *_labelQAge2;
    NSTextField *_labelMobile;
    NSTextField *_labelTelephone;
    NSTextField *_labelEmail;
    NSTextField *_labelCompany;
    NSTextField *_labelProfession;
    NSTextField *_labelSchool;
    NSTextField *_labelLocation;
    NSTextField *_labelHome;
    NSTextField *_labelHomePage;
    TXHoverButton *_btnHomePage;
    NSTextField *_labelDescription;
    NSTextField *_textNick;
    MQFloatTextField *_textRemark;
    TXHoverButton *_btnEditRemark;
    NSTextField *_textQQNum;
    TXHoverButton *_btnCopyQQNum;
    TXColorView *_btnGroupBg;
    TXHoverButton *_btnGroup;
    NSLayoutConstraint *_groupBgWidthConstraint;
    NSLayoutConstraint *_groupWidthConstraint;
    NSTextField *_textQAge;
    NSTextField *_textMobile;
    NSTextField *_textPhone;
    NSTextField *_textEmail;
    NSTextField *_textCompany;
    NSTextField *_textProfession;
    NSTextField *_textSchool;
    NSTextField *_textHometown;
    NSTextField *_textHomePage;
    NSTextField *_textDescription;
    NSTextField *_textCountry;
    NSTextField *_textProvince;
    NSTextField *_textCity;
    NSTextField *_textHomeCountry;
    NSTextField *_textHomeProvince;
    NSTextField *_textHomeCity;
    NSView *_gridInfoContainer;
    NSView *_containerSex;
    NSImageView *_imageSex;
    NSTextField *_labelSex;
    NSView *_containerAge;
    NSImageView *_imageAge;
    NSImageView *_imageAge2;
    NSImageView *_imageAge3;
    NSTextField *_labelAge;
    NSLayoutConstraint *_imageAgeLeading;
    NSLayoutConstraint *_imageAgeLeading2;
    NSLayoutConstraint *_imageAgeLeading3;
    NSView *_containerShengxiao;
    NSImageView *_imageShengxiao;
    NSTextField *_labelShengxiao;
    NSView *_containerConstellation;
    NSImageView *_imageConstellation;
    NSTextField *_labelConstellation;
    NSView *_containerBirthday;
    NSImageView *_imageBirthday;
    NSImageView *_imageBirthday2;
    NSTextField *_labelBirthOfDay;
    NSTextField *_labelBirthday;
    NSLayoutConstraint *imageBirthLeading;
    NSLayoutConstraint *imageBirthLeading2;
    NSLayoutConstraint *imageBirthLeading3;
    NSLayoutConstraint *birthLineLeading;
    TXColorView *_birthLine;
    NSView *_containerBloodType;
    NSImageView *_imageBloodType;
    NSTextField *_labelBloodType;
    unsigned long long _dwUin;
    ProfileSource *_source;
    NSArray *_pArrUIOrder;
    NSMutableArray *_pArrUIContraints;
    NSArray *_gridArrUIOrder;
    NSMutableArray *_gridArrUIContraints;
    NSLayoutConstraint *_btnHomeWidthConstraint;
    BOOL _isGridInfoShown;
    MQNinePartImage *groupBgImg;
    MQNinePartImage *groupBgHoverImg;
    BOOL isGroupHover;
    long long _belongIndex;
    NSMutableArray *_groupMenuArray;
    EIMMenuController *menuGroup;
    id <SingleInfoDelegate> _singleInfoDelegate;
}

+ (void)showErrorMsg:(id)arg1 detailStr:(id)arg2;
+ (id)securityMobileStr:(id)arg1;
@property(nonatomic) __weak id <SingleInfoDelegate> singleInfoDelegate; // @synthesize singleInfoDelegate=_singleInfoDelegate;
- (void).cxx_destruct;
- (void)summitRemark:(id)arg1;
- (void)saveRemarkName;
- (void)onBtnRemarkClick:(id)arg1;
- (void)floatTextFieldDidEndEditing:(id)arg1;
- (void)updateGridInfoContent:(id)arg1;
- (BOOL)isAvailableUrl:(id)arg1;
- (BOOL)IsChinese:(id)arg1;
- (void)updateComponentContent:(id)arg1;
- (void)initLayoutInfo;
- (void)relayoutUI;
- (void)hideComponent;
- (void)initLabelTitle;
- (void)updateSourceData;
- (void)updateContentWithProfile;
- (void)updateSelfContentInfo;
- (void)updateWithUin:(unsigned long long)arg1;
- (void)setProfileSource:(id)arg1;
- (void)hideSettingBtnOrNot;
- (void)onBtnGroupClick:(id)arg1;
- (void)onBtnHomePageClick:(id)arg1;
- (void)onBtnCloseSourceClick:(id)arg1;
- (void)onBtnCopyClick:(id)arg1;
- (void)reportCopyQQnum:(id)arg1;
- (void)onExitHover:(id)arg1;
- (void)onEnterHover:(id)arg1;
- (void)onMenuClose:(id)arg1;
- (void)locateContact:(id)arg1;
- (void)eimMenu:(id)arg1 onSelectedItem:(id)arg2;
- (long long)groupMaxLength;
- (void)initFriendGroup;
- (void)handleFolderStatusChanged:(id)arg1;
- (void)computeGroupWidth;
- (void)updateGroupBg:(BOOL)arg1;
- (void)setHomePageButton:(id)arg1;
- (void)dealloc;
- (id)infoNibName;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

