//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQBaseTableView.h"

@interface MQAIOMemberTableView : MQBaseTableView
{
    id <MQAIOMemberSearchViewControllerDelegate> _exDelegate;
}

@property(nonatomic) id <MQAIOMemberSearchViewControllerDelegate> exDelegate; // @synthesize exDelegate=_exDelegate;
- (BOOL)resignFirstResponder;
- (void)keyDown:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;

@end
