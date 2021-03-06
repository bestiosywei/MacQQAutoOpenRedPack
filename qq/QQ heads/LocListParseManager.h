//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

#import "NSCacheDelegate.h"
#import "NSXMLParserDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSXMLParser;

@interface LocListParseManager : QQBaseSingleton <NSXMLParserDelegate, NSCacheDelegate>
{
    NSMutableArray *_countrys;
    NSMutableArray *_provinces;
    NSMutableArray *_cities;
    NSXMLParser *_addressParser;
    NSMutableDictionary *_dataCache;
    NSMutableArray *_fullNameCache;
    NSMutableDictionary *_nameToCodeCache;
    NSMutableDictionary *_codeToNameCache;
    NSString *_checkName;
    NSString *_lastCountry;
    NSString *_lastProvince;
    NSString *_lastCity;
}

+ (void)getLocationStr:(id)arg1 proviceId:(id)arg2 cityId:(id)arg3 block:(id)arg4;
@property(copy, nonatomic) NSString *lastCity; // @synthesize lastCity=_lastCity;
@property(copy, nonatomic) NSString *lastProvince; // @synthesize lastProvince=_lastProvince;
@property(copy, nonatomic) NSString *lastCountry; // @synthesize lastCountry=_lastCountry;
@property(copy, nonatomic) NSString *checkName; // @synthesize checkName=_checkName;
@property(retain, nonatomic) NSMutableDictionary *codeToNameCache; // @synthesize codeToNameCache=_codeToNameCache;
@property(retain, nonatomic) NSMutableDictionary *nameToCodeCache; // @synthesize nameToCodeCache=_nameToCodeCache;
@property(retain, nonatomic) NSMutableArray *fullNameCache; // @synthesize fullNameCache=_fullNameCache;
@property(retain, nonatomic) NSMutableDictionary *dataCache; // @synthesize dataCache=_dataCache;
@property(retain, nonatomic) NSXMLParser *addressParser; // @synthesize addressParser=_addressParser;
- (void).cxx_destruct;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)allRegionsInChina;
- (id)allRegionForCity:(id)arg1;
- (id)allCitiesForCountry:(id)arg1 province:(id)arg2;
- (id)allProvincesForCountry:(id)arg1;
- (id)allCountrys;
- (id)nameForCodes:(id)arg1;
- (id)cityForCode:(id)arg1 provinceCode:(id)arg2 countryCode:(id)arg3;
- (id)provinceForCode:(id)arg1 countryCode:(id)arg2;
- (id)countryForCode:(id)arg1;
- (id)keyForCountry:(id)arg1 provincen:(id)arg2 city:(id)arg3;
- (id)codeWithCountryName:(id)arg1 stateName:(id)arg2 cityName:(id)arg3;
- (id)codeWithCountryName:(id)arg1 stateName:(id)arg2;
- (id)keyWithCountryName:(id)arg1 stateName:(id)arg2 cityName:(id)arg3;
- (void)checkCache;
- (void)parseXMLFile:(id)arg1;
- (void)loadXml;
- (void)configPrepare;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

