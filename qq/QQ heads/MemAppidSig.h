//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class MemSigManager;

@interface MemAppidSig : NSObject <NSCoding>
{
    unsigned int dwAppid;
    unsigned int dwPriority;
    unsigned int dwTime;
    unsigned int dwExpTime;
    MemSigManager *memSigManager;
}

@property(nonatomic) unsigned int dwExpTime; // @synthesize dwExpTime;
@property(nonatomic) unsigned int dwTime; // @synthesize dwTime;
@property(nonatomic) unsigned int dwPriority; // @synthesize dwPriority;
@property(nonatomic) unsigned int dwAppid; // @synthesize dwAppid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getAllSig:(id)arg1;
- (void)printAppidSig;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)removeSigByName:(id)arg1;
- (id)appidSigByName:(id)arg1;
- (void)addAppidSig:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

