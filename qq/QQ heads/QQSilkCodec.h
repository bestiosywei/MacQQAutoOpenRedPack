//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQSilkCodec : NSObject
{
    unsigned long long _silkSampleRate;
    unsigned long long _silkBitRate;
    unsigned long long _silkDurationPreFrame;
    unsigned long long _silkSamplesPerFrame;
    BOOL _needSavePcmFile;
    int _xo;
    struct {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
        int _field5;
        int _field6;
        int _field7;
        int _field8;
    } *_encodeControl;
    void *_encodeObject;
    short *_frameBuffer;
    unsigned int _frameBufferLength;
    unsigned int _frameBufferedSamples;
    unsigned long long _frameCount;
    int _stgain;
    CDStruct_1cb64a06 *_decodeControl;
    void *_decodeObject;
    BOOL _initSuccessDenoiseSDK;
}

@property(nonatomic) unsigned long long silkSamplesPerFrame; // @synthesize silkSamplesPerFrame=_silkSamplesPerFrame;
@property(nonatomic) unsigned long long silkDurationPreFrame; // @synthesize silkDurationPreFrame=_silkDurationPreFrame;
@property(nonatomic) unsigned long long silkBitRate; // @synthesize silkBitRate=_silkBitRate;
@property(nonatomic) unsigned long long silkSampleRate; // @synthesize silkSampleRate=_silkSampleRate;
- (id)description;
- (id)decode:(id)arg1 withLostFlag:(unsigned char)arg2;
- (BOOL)setDecodeParam;
- (id)encode:(short *)arg1 withSamplesCount:(unsigned long long)arg2;
- (id)encodeOneFrame:(short *)arg1 length:(unsigned int)arg2 withSamplesCount:(unsigned int)arg3;
- (unsigned long long)encode:(id)arg1 withSamplesCount:(unsigned long long)arg2 callback:(id)arg3;
- (BOOL)cleanEncode;
- (BOOL)setEncodeParam;
- (BOOL)deallocEncodeBuffer;
- (BOOL)allocEncodeBuffer;
- (void)dealloc;
- (id)init;

@end
