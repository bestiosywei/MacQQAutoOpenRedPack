//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QDatabase : NSObject
{
    NSString *_dbPath;
    struct sqlite3 *_db;
}

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)commitUpdate;
- (void)beginUpdate;
- (id)queryWithSQL:(id)arg1;
- (BOOL)executeSQL:(id)arg1;
- (id)initWithName:(id)arg1;

@end

