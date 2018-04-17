//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBMessageObserverDelegate.h"

@interface GameSearchManager : NSObject <PBMessageObserverDelegate>
{
    unsigned int _eventID;
    id <GameSearchManagerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@property(nonatomic) __weak id <GameSearchManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFinishWithResultGroups:(id)arg1 searchWithText:(id)arg2 error:(long long)arg3;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;
- (void)handleSearchResponse:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)requestSearchWithText:(id)arg1;
- (_Bool)sendSearchRequestWithKeywords:(id)arg1 searchWithText:(id)arg2;

@end

