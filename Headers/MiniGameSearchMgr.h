//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGameCenterExt.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MiniGameSearchMgr : NSObject <IGameCenterExt>
{
    NSMutableArray *_arrMiniGameContact;
    NSMutableArray *_arrMainResult;
    NSMutableDictionary *_dicMainSearchTip;
    NSMutableArray *_arrDetailResult;
    NSMutableDictionary *_dicDetailSearchTip;
    NSMutableDictionary *_dicChinesePinYin;
    unsigned long long _cacheModifyTime;
    NSString *_newestQueryText;
    NSString *_newestQueryTextForDetail;
    NSString *_lastQueryText;
    NSString *_lastQueryTextForDetail;
    NSMutableArray *_arrDetailPageLastQueryKeywords;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrDetailPageLastQueryKeywords; // @synthesize arrDetailPageLastQueryKeywords=_arrDetailPageLastQueryKeywords;
- (void)asyncSearch:(id)arg1;
- (void)asyncSearchForDetail:(id)arg1;
- (void)cancelSearch;
- (void)cancelSearchForDetail;
- (void)dealloc;
- (void)doInitWorker;
- (void)doSearch:(id)arg1;
- (void)doSearchForDetail:(id)arg1;
- (id)getArrDetailSearchResult;
- (id)getArrMainSearchResult;
- (id)getDetailMatchTipForKey:(id)arg1;
- (id)getDetailSearchMatchTip;
- (id)getMainSearchMatchTip;
- (id)getMatchTipForKey:(id)arg1;
- (_Bool)hasSearchDoneForDetailPage:(id)arg1;
- (_Bool)hasSearchDoneForHomePage:(id)arg1;
- (_Bool)hasSearchResultForHomePage:(id)arg1;
- (id)init;
- (void)initCacheModifyTime;
- (void)initSource;
@property(retain, nonatomic) NSString *lastQueryText; // @synthesize lastQueryText=_lastQueryText;
@property(retain, nonatomic) NSString *lastQueryTextForDetail; // @synthesize lastQueryTextForDetail=_lastQueryTextForDetail;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
@property(retain, nonatomic) NSString *newestQueryTextForDetail; // @synthesize newestQueryTextForDetail=_newestQueryTextForDetail;
- (void)onGetAllMiniGameList:(id)arg1 error:(long long)arg2;
- (void)refreshSource:(id)arg1;
- (_Bool)shouldUpdateGameCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

