/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordZoneChangesOperation : CKDDatabaseOperation <CKDOperationPipelining> {
    long long  _changeTypes;
    bool  _clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
    bool  _fetchAllChanges;
    NSObject<OS_dispatch_group> * _fetchRecordsGroup;
    unsigned long long  _numRequestsSent;
    NSDictionary * _optionsByRecordZoneID;
    CKDRecordCache * _recordCache;
    id /* block */  _recordChangedBlock;
    CKDRecordFetchAggregator * _recordFetcher;
    NSArray * _recordZoneIDs;
    NSMutableArray * _requestInfos;
    CKDFetchZoneChangesRequestOperationResult * _savedResult;
    id /* block */  _serverChangeTokenUpdatedBlock;
    bool  _shouldFetchAssetContents;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) long long changeTypes;
@property (nonatomic) bool clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fetchAllChanges;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *fetchRecordsGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numRequestsSent;
@property (nonatomic, retain) NSDictionary *optionsByRecordZoneID;
@property (nonatomic, readonly) NSString *pipeliningDescription;
@property (nonatomic, readonly) CKDRecordCache *recordCache;
@property (nonatomic, copy) id /* block */ recordChangedBlock;
@property (nonatomic, retain) CKDRecordFetchAggregator *recordFetcher;
@property (nonatomic, retain) NSArray *recordZoneIDs;
@property (nonatomic, retain) NSMutableArray *requestInfos;
@property (nonatomic, retain) CKDFetchZoneChangesRequestOperationResult *savedResult;
@property (nonatomic, copy) id /* block */ serverChangeTokenUpdatedBlock;
@property (nonatomic) bool shouldFetchAssetContents;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleFetchChangesRequestFinishedWithSchedulerInfo:(id)arg1;
- (void)_handleRecordChange:(id)arg1 perRequestSchedulerInfo:(id)arg2;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1;
- (void)_sendFetchChangesRequestForZoneIDs:(id)arg1 withOptions:(id)arg2 previousRequestSchedulerInfo:(id)arg3;
- (id)activityCreate;
- (long long)changeTypes;
- (bool)clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
- (bool)fetchAllChanges;
- (id)fetchRecordsGroup;
- (void)fillOutOperationResult:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (unsigned long long)numRequestsSent;
- (Class)operationResultClass;
- (id)optionsByRecordZoneID;
- (id)pipeliningDescription;
- (id)recordCache;
- (id /* block */)recordChangedBlock;
- (id)recordFetcher;
- (id)recordZoneIDs;
- (id)requestInfos;
- (id)savedResult;
- (id /* block */)serverChangeTokenUpdatedBlock;
- (void)setChangeTypes:(long long)arg1;
- (void)setClientIsUsingLegacyCKFetchRecordChangesOperationAPI:(bool)arg1;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setFetchRecordsGroup:(id)arg1;
- (void)setNumRequestsSent:(unsigned long long)arg1;
- (void)setOptionsByRecordZoneID:(id)arg1;
- (void)setRecordChangedBlock:(id /* block */)arg1;
- (void)setRecordFetcher:(id)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setRequestInfos:(id)arg1;
- (void)setSavedResult:(id)arg1;
- (void)setServerChangeTokenUpdatedBlock:(id /* block */)arg1;
- (void)setShouldFetchAssetContents:(bool)arg1;
- (bool)shouldFetchAssetContents;

@end
