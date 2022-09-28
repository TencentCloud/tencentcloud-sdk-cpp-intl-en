/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TEO_V20220901_TEOCLIENT_H_
#define TENCENTCLOUD_TEO_V20220901_TEOCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/teo/v20220901/model/CheckCertificateRequest.h>
#include <tencentcloud/teo/v20220901/model/CheckCertificateResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateCredentialRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateCredentialResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateDnsRecordRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateDnsRecordResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateLogSetRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateLogSetResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateLogTopicTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateLogTopicTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/CreatePlanForZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/CreatePlanForZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/CreatePrefetchTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/CreatePrefetchTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/CreatePurgeTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/CreatePurgeTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateReplayTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateReplayTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteDnsRecordsRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteDnsRecordsResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteLogTopicTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteLogTopicTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeAddableEntityListRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeAddableEntityListResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeAvailablePlansRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeAvailablePlansResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeBillingDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeBillingDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotClientIpListRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotClientIpListResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotHitRuleDetailRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotHitRuleDetailResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotLogRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotLogResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotTopDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeBotTopDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeClientRuleListRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeClientRuleListResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeContentQuotaRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeContentQuotaResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackEventRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackEventResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackEventDetailRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackEventDetailResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackSourceEventRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackSourceEventResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackTopDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackTopDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSBlockListRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSBlockListResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSMajorAttackEventRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSMajorAttackEventResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDefaultCertificatesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDefaultCertificatesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDnsDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDnsDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDnsRecordsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDnsRecordsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDnssecRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDnssecResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeHostsSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeHostsSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeIdentificationsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeIdentificationsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeLogSetsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeLogSetsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeLogTopicTaskDetailRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeLogTopicTaskDetailResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeLogTopicTasksRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeLogTopicTasksResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeOverviewL7DataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeOverviewL7DataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribePrefetchTasksRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribePrefetchTasksResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribePurgeTasksRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribePurgeTasksResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeSingleL7AnalysisDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeSingleL7AnalysisDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeTimingL4DataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeTimingL4DataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeTimingL7AnalysisDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeTimingL7AnalysisDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeTimingL7CacheDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeTimingL7CacheDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeTopL7AnalysisDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeTopL7AnalysisDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeTopL7CacheDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeTopL7CacheDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebManagedRulesDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebManagedRulesDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebManagedRulesHitRuleDetailRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebManagedRulesHitRuleDetailResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebManagedRulesLogRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebManagedRulesLogResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionAttackEventsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionAttackEventsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionClientIpListRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionClientIpListResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionHitRuleDetailRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionHitRuleDetailResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionTopDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeWebProtectionTopDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeZoneSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeZoneSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeZonesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeZonesResponse.h>
#include <tencentcloud/teo/v20220901/model/DownloadL4LogsRequest.h>
#include <tencentcloud/teo/v20220901/model/DownloadL4LogsResponse.h>
#include <tencentcloud/teo/v20220901/model/DownloadL7LogsRequest.h>
#include <tencentcloud/teo/v20220901/model/DownloadL7LogsResponse.h>
#include <tencentcloud/teo/v20220901/model/IdentifyZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/IdentifyZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyDefaultCertificateRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyDefaultCertificateResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyDnsRecordRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyDnsRecordResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyDnssecRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyDnssecResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyHostsCertificateRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyHostsCertificateResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyLogTopicTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyLogTopicTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyRulePriorityRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyRulePriorityResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneCnameSpeedUpRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneCnameSpeedUpResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/ReclaimZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/ReclaimZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/SwitchLogTopicTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/SwitchLogTopicTaskResponse.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            class TeoClient : public AbstractClient
            {
            public:
                TeoClient(const Credential &credential, const std::string &region);
                TeoClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CheckCertificateResponse> CheckCertificateOutcome;
                typedef std::future<CheckCertificateOutcome> CheckCertificateOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CheckCertificateRequest&, CheckCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCredentialResponse> CreateCredentialOutcome;
                typedef std::future<CreateCredentialOutcome> CreateCredentialOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateCredentialRequest&, CreateCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDnsRecordResponse> CreateDnsRecordOutcome;
                typedef std::future<CreateDnsRecordOutcome> CreateDnsRecordOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateDnsRecordRequest&, CreateDnsRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDnsRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLogSetResponse> CreateLogSetOutcome;
                typedef std::future<CreateLogSetOutcome> CreateLogSetOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateLogSetRequest&, CreateLogSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogSetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLogTopicTaskResponse> CreateLogTopicTaskOutcome;
                typedef std::future<CreateLogTopicTaskOutcome> CreateLogTopicTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateLogTopicTaskRequest&, CreateLogTopicTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogTopicTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePlanForZoneResponse> CreatePlanForZoneOutcome;
                typedef std::future<CreatePlanForZoneOutcome> CreatePlanForZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreatePlanForZoneRequest&, CreatePlanForZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePlanForZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrefetchTaskResponse> CreatePrefetchTaskOutcome;
                typedef std::future<CreatePrefetchTaskOutcome> CreatePrefetchTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreatePrefetchTaskRequest&, CreatePrefetchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrefetchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePurgeTaskResponse> CreatePurgeTaskOutcome;
                typedef std::future<CreatePurgeTaskOutcome> CreatePurgeTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreatePurgeTaskRequest&, CreatePurgeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePurgeTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReplayTaskResponse> CreateReplayTaskOutcome;
                typedef std::future<CreateReplayTaskOutcome> CreateReplayTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateReplayTaskRequest&, CreateReplayTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReplayTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRuleResponse> CreateRuleOutcome;
                typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateRuleRequest&, CreateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateZoneResponse> CreateZoneOutcome;
                typedef std::future<CreateZoneOutcome> CreateZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateZoneRequest&, CreateZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDnsRecordsResponse> DeleteDnsRecordsOutcome;
                typedef std::future<DeleteDnsRecordsOutcome> DeleteDnsRecordsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteDnsRecordsRequest&, DeleteDnsRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDnsRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLogTopicTaskResponse> DeleteLogTopicTaskOutcome;
                typedef std::future<DeleteLogTopicTaskOutcome> DeleteLogTopicTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteLogTopicTaskRequest&, DeleteLogTopicTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogTopicTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRulesResponse> DeleteRulesOutcome;
                typedef std::future<DeleteRulesOutcome> DeleteRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteRulesRequest&, DeleteRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteZoneResponse> DeleteZoneOutcome;
                typedef std::future<DeleteZoneOutcome> DeleteZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteZoneRequest&, DeleteZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddableEntityListResponse> DescribeAddableEntityListOutcome;
                typedef std::future<DescribeAddableEntityListOutcome> DescribeAddableEntityListOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeAddableEntityListRequest&, DescribeAddableEntityListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddableEntityListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAvailablePlansResponse> DescribeAvailablePlansOutcome;
                typedef std::future<DescribeAvailablePlansOutcome> DescribeAvailablePlansOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeAvailablePlansRequest&, DescribeAvailablePlansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailablePlansAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillingDataResponse> DescribeBillingDataOutcome;
                typedef std::future<DescribeBillingDataOutcome> DescribeBillingDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeBillingDataRequest&, DescribeBillingDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillingDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBotClientIpListResponse> DescribeBotClientIpListOutcome;
                typedef std::future<DescribeBotClientIpListOutcome> DescribeBotClientIpListOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeBotClientIpListRequest&, DescribeBotClientIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBotClientIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBotDataResponse> DescribeBotDataOutcome;
                typedef std::future<DescribeBotDataOutcome> DescribeBotDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeBotDataRequest&, DescribeBotDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBotDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBotHitRuleDetailResponse> DescribeBotHitRuleDetailOutcome;
                typedef std::future<DescribeBotHitRuleDetailOutcome> DescribeBotHitRuleDetailOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeBotHitRuleDetailRequest&, DescribeBotHitRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBotHitRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBotLogResponse> DescribeBotLogOutcome;
                typedef std::future<DescribeBotLogOutcome> DescribeBotLogOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeBotLogRequest&, DescribeBotLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBotLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBotTopDataResponse> DescribeBotTopDataOutcome;
                typedef std::future<DescribeBotTopDataOutcome> DescribeBotTopDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeBotTopDataRequest&, DescribeBotTopDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBotTopDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClientRuleListResponse> DescribeClientRuleListOutcome;
                typedef std::future<DescribeClientRuleListOutcome> DescribeClientRuleListOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeClientRuleListRequest&, DescribeClientRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContentQuotaResponse> DescribeContentQuotaOutcome;
                typedef std::future<DescribeContentQuotaOutcome> DescribeContentQuotaOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeContentQuotaRequest&, DescribeContentQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContentQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAttackDataResponse> DescribeDDoSAttackDataOutcome;
                typedef std::future<DescribeDDoSAttackDataOutcome> DescribeDDoSAttackDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSAttackDataRequest&, DescribeDDoSAttackDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAttackDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAttackEventResponse> DescribeDDoSAttackEventOutcome;
                typedef std::future<DescribeDDoSAttackEventOutcome> DescribeDDoSAttackEventOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSAttackEventRequest&, DescribeDDoSAttackEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAttackEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAttackEventDetailResponse> DescribeDDoSAttackEventDetailOutcome;
                typedef std::future<DescribeDDoSAttackEventDetailOutcome> DescribeDDoSAttackEventDetailOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSAttackEventDetailRequest&, DescribeDDoSAttackEventDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAttackEventDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAttackSourceEventResponse> DescribeDDoSAttackSourceEventOutcome;
                typedef std::future<DescribeDDoSAttackSourceEventOutcome> DescribeDDoSAttackSourceEventOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSAttackSourceEventRequest&, DescribeDDoSAttackSourceEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAttackSourceEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAttackTopDataResponse> DescribeDDoSAttackTopDataOutcome;
                typedef std::future<DescribeDDoSAttackTopDataOutcome> DescribeDDoSAttackTopDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSAttackTopDataRequest&, DescribeDDoSAttackTopDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAttackTopDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSBlockListResponse> DescribeDDoSBlockListOutcome;
                typedef std::future<DescribeDDoSBlockListOutcome> DescribeDDoSBlockListOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSBlockListRequest&, DescribeDDoSBlockListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSBlockListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSMajorAttackEventResponse> DescribeDDoSMajorAttackEventOutcome;
                typedef std::future<DescribeDDoSMajorAttackEventOutcome> DescribeDDoSMajorAttackEventOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSMajorAttackEventRequest&, DescribeDDoSMajorAttackEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSMajorAttackEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefaultCertificatesResponse> DescribeDefaultCertificatesOutcome;
                typedef std::future<DescribeDefaultCertificatesOutcome> DescribeDefaultCertificatesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDefaultCertificatesRequest&, DescribeDefaultCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDnsDataResponse> DescribeDnsDataOutcome;
                typedef std::future<DescribeDnsDataOutcome> DescribeDnsDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDnsDataRequest&, DescribeDnsDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDnsRecordsResponse> DescribeDnsRecordsOutcome;
                typedef std::future<DescribeDnsRecordsOutcome> DescribeDnsRecordsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDnsRecordsRequest&, DescribeDnsRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDnssecResponse> DescribeDnssecOutcome;
                typedef std::future<DescribeDnssecOutcome> DescribeDnssecOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDnssecRequest&, DescribeDnssecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnssecAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostsSettingResponse> DescribeHostsSettingOutcome;
                typedef std::future<DescribeHostsSettingOutcome> DescribeHostsSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeHostsSettingRequest&, DescribeHostsSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostsSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIdentificationsResponse> DescribeIdentificationsOutcome;
                typedef std::future<DescribeIdentificationsOutcome> DescribeIdentificationsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeIdentificationsRequest&, DescribeIdentificationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIdentificationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogSetsResponse> DescribeLogSetsOutcome;
                typedef std::future<DescribeLogSetsOutcome> DescribeLogSetsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeLogSetsRequest&, DescribeLogSetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogSetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogTopicTaskDetailResponse> DescribeLogTopicTaskDetailOutcome;
                typedef std::future<DescribeLogTopicTaskDetailOutcome> DescribeLogTopicTaskDetailOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeLogTopicTaskDetailRequest&, DescribeLogTopicTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogTopicTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogTopicTasksResponse> DescribeLogTopicTasksOutcome;
                typedef std::future<DescribeLogTopicTasksOutcome> DescribeLogTopicTasksOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeLogTopicTasksRequest&, DescribeLogTopicTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogTopicTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOverviewL7DataResponse> DescribeOverviewL7DataOutcome;
                typedef std::future<DescribeOverviewL7DataOutcome> DescribeOverviewL7DataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeOverviewL7DataRequest&, DescribeOverviewL7DataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewL7DataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrefetchTasksResponse> DescribePrefetchTasksOutcome;
                typedef std::future<DescribePrefetchTasksOutcome> DescribePrefetchTasksOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribePrefetchTasksRequest&, DescribePrefetchTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrefetchTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePurgeTasksResponse> DescribePurgeTasksOutcome;
                typedef std::future<DescribePurgeTasksOutcome> DescribePurgeTasksOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribePurgeTasksRequest&, DescribePurgeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesResponse> DescribeRulesOutcome;
                typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeRulesRequest&, DescribeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesSettingResponse> DescribeRulesSettingOutcome;
                typedef std::future<DescribeRulesSettingOutcome> DescribeRulesSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeRulesSettingRequest&, DescribeRulesSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSingleL7AnalysisDataResponse> DescribeSingleL7AnalysisDataOutcome;
                typedef std::future<DescribeSingleL7AnalysisDataOutcome> DescribeSingleL7AnalysisDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSingleL7AnalysisDataRequest&, DescribeSingleL7AnalysisDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSingleL7AnalysisDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTimingL4DataResponse> DescribeTimingL4DataOutcome;
                typedef std::future<DescribeTimingL4DataOutcome> DescribeTimingL4DataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeTimingL4DataRequest&, DescribeTimingL4DataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTimingL4DataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTimingL7AnalysisDataResponse> DescribeTimingL7AnalysisDataOutcome;
                typedef std::future<DescribeTimingL7AnalysisDataOutcome> DescribeTimingL7AnalysisDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeTimingL7AnalysisDataRequest&, DescribeTimingL7AnalysisDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTimingL7AnalysisDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTimingL7CacheDataResponse> DescribeTimingL7CacheDataOutcome;
                typedef std::future<DescribeTimingL7CacheDataOutcome> DescribeTimingL7CacheDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeTimingL7CacheDataRequest&, DescribeTimingL7CacheDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTimingL7CacheDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopL7AnalysisDataResponse> DescribeTopL7AnalysisDataOutcome;
                typedef std::future<DescribeTopL7AnalysisDataOutcome> DescribeTopL7AnalysisDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeTopL7AnalysisDataRequest&, DescribeTopL7AnalysisDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopL7AnalysisDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopL7CacheDataResponse> DescribeTopL7CacheDataOutcome;
                typedef std::future<DescribeTopL7CacheDataOutcome> DescribeTopL7CacheDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeTopL7CacheDataRequest&, DescribeTopL7CacheDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopL7CacheDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebManagedRulesDataResponse> DescribeWebManagedRulesDataOutcome;
                typedef std::future<DescribeWebManagedRulesDataOutcome> DescribeWebManagedRulesDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebManagedRulesDataRequest&, DescribeWebManagedRulesDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebManagedRulesDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebManagedRulesHitRuleDetailResponse> DescribeWebManagedRulesHitRuleDetailOutcome;
                typedef std::future<DescribeWebManagedRulesHitRuleDetailOutcome> DescribeWebManagedRulesHitRuleDetailOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebManagedRulesHitRuleDetailRequest&, DescribeWebManagedRulesHitRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebManagedRulesHitRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebManagedRulesLogResponse> DescribeWebManagedRulesLogOutcome;
                typedef std::future<DescribeWebManagedRulesLogOutcome> DescribeWebManagedRulesLogOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebManagedRulesLogRequest&, DescribeWebManagedRulesLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebManagedRulesLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebProtectionAttackEventsResponse> DescribeWebProtectionAttackEventsOutcome;
                typedef std::future<DescribeWebProtectionAttackEventsOutcome> DescribeWebProtectionAttackEventsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebProtectionAttackEventsRequest&, DescribeWebProtectionAttackEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebProtectionAttackEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebProtectionClientIpListResponse> DescribeWebProtectionClientIpListOutcome;
                typedef std::future<DescribeWebProtectionClientIpListOutcome> DescribeWebProtectionClientIpListOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebProtectionClientIpListRequest&, DescribeWebProtectionClientIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebProtectionClientIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebProtectionDataResponse> DescribeWebProtectionDataOutcome;
                typedef std::future<DescribeWebProtectionDataOutcome> DescribeWebProtectionDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebProtectionDataRequest&, DescribeWebProtectionDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebProtectionDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebProtectionHitRuleDetailResponse> DescribeWebProtectionHitRuleDetailOutcome;
                typedef std::future<DescribeWebProtectionHitRuleDetailOutcome> DescribeWebProtectionHitRuleDetailOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebProtectionHitRuleDetailRequest&, DescribeWebProtectionHitRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebProtectionHitRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebProtectionTopDataResponse> DescribeWebProtectionTopDataOutcome;
                typedef std::future<DescribeWebProtectionTopDataOutcome> DescribeWebProtectionTopDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeWebProtectionTopDataRequest&, DescribeWebProtectionTopDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebProtectionTopDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneSettingResponse> DescribeZoneSettingOutcome;
                typedef std::future<DescribeZoneSettingOutcome> DescribeZoneSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeZoneSettingRequest&, DescribeZoneSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadL4LogsResponse> DownloadL4LogsOutcome;
                typedef std::future<DownloadL4LogsOutcome> DownloadL4LogsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DownloadL4LogsRequest&, DownloadL4LogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadL4LogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadL7LogsResponse> DownloadL7LogsOutcome;
                typedef std::future<DownloadL7LogsOutcome> DownloadL7LogsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DownloadL7LogsRequest&, DownloadL7LogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadL7LogsAsyncHandler;
                typedef Outcome<Core::Error, Model::IdentifyZoneResponse> IdentifyZoneOutcome;
                typedef std::future<IdentifyZoneOutcome> IdentifyZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::IdentifyZoneRequest&, IdentifyZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IdentifyZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDefaultCertificateResponse> ModifyDefaultCertificateOutcome;
                typedef std::future<ModifyDefaultCertificateOutcome> ModifyDefaultCertificateOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyDefaultCertificateRequest&, ModifyDefaultCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDefaultCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDnsRecordResponse> ModifyDnsRecordOutcome;
                typedef std::future<ModifyDnsRecordOutcome> ModifyDnsRecordOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyDnsRecordRequest&, ModifyDnsRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDnsRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDnssecResponse> ModifyDnssecOutcome;
                typedef std::future<ModifyDnssecOutcome> ModifyDnssecOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyDnssecRequest&, ModifyDnssecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDnssecAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHostsCertificateResponse> ModifyHostsCertificateOutcome;
                typedef std::future<ModifyHostsCertificateOutcome> ModifyHostsCertificateOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyHostsCertificateRequest&, ModifyHostsCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostsCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLogTopicTaskResponse> ModifyLogTopicTaskOutcome;
                typedef std::future<ModifyLogTopicTaskOutcome> ModifyLogTopicTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyLogTopicTaskRequest&, ModifyLogTopicTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogTopicTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRuleResponse> ModifyRuleOutcome;
                typedef std::future<ModifyRuleOutcome> ModifyRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyRuleRequest&, ModifyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRulePriorityResponse> ModifyRulePriorityOutcome;
                typedef std::future<ModifyRulePriorityOutcome> ModifyRulePriorityOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyRulePriorityRequest&, ModifyRulePriorityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRulePriorityAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneResponse> ModifyZoneOutcome;
                typedef std::future<ModifyZoneOutcome> ModifyZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyZoneRequest&, ModifyZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneCnameSpeedUpResponse> ModifyZoneCnameSpeedUpOutcome;
                typedef std::future<ModifyZoneCnameSpeedUpOutcome> ModifyZoneCnameSpeedUpOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyZoneCnameSpeedUpRequest&, ModifyZoneCnameSpeedUpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneCnameSpeedUpAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneSettingResponse> ModifyZoneSettingOutcome;
                typedef std::future<ModifyZoneSettingOutcome> ModifyZoneSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyZoneSettingRequest&, ModifyZoneSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneStatusResponse> ModifyZoneStatusOutcome;
                typedef std::future<ModifyZoneStatusOutcome> ModifyZoneStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyZoneStatusRequest&, ModifyZoneStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ReclaimZoneResponse> ReclaimZoneOutcome;
                typedef std::future<ReclaimZoneOutcome> ReclaimZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ReclaimZoneRequest&, ReclaimZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReclaimZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchLogTopicTaskResponse> SwitchLogTopicTaskOutcome;
                typedef std::future<SwitchLogTopicTaskOutcome> SwitchLogTopicTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::SwitchLogTopicTaskRequest&, SwitchLogTopicTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchLogTopicTaskAsyncHandler;



                /**
                 *This API is used to verify a certificate.
                 * @param req CheckCertificateRequest
                 * @return CheckCertificateOutcome
                 */
                CheckCertificateOutcome CheckCertificate(const Model::CheckCertificateRequest &request);
                void CheckCertificateAsync(const Model::CheckCertificateRequest& request, const CheckCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckCertificateOutcomeCallable CheckCertificateCallable(const Model::CheckCertificateRequest& request);

                /**
                 *Creates a credential for COS origin-pull.
                 * @param req CreateCredentialRequest
                 * @return CreateCredentialOutcome
                 */
                CreateCredentialOutcome CreateCredential(const Model::CreateCredentialRequest &request);
                void CreateCredentialAsync(const Model::CreateCredentialRequest& request, const CreateCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCredentialOutcomeCallable CreateCredentialCallable(const Model::CreateCredentialRequest& request);

                /**
                 *This API is used to create a DNS record.
                 * @param req CreateDnsRecordRequest
                 * @return CreateDnsRecordOutcome
                 */
                CreateDnsRecordOutcome CreateDnsRecord(const Model::CreateDnsRecordRequest &request);
                void CreateDnsRecordAsync(const Model::CreateDnsRecordRequest& request, const CreateDnsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDnsRecordOutcomeCallable CreateDnsRecordCallable(const Model::CreateDnsRecordRequest& request);

                /**
                 *This API is used to create a CLS logset.
                 * @param req CreateLogSetRequest
                 * @return CreateLogSetOutcome
                 */
                CreateLogSetOutcome CreateLogSet(const Model::CreateLogSetRequest &request);
                void CreateLogSetAsync(const Model::CreateLogSetRequest& request, const CreateLogSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLogSetOutcomeCallable CreateLogSetCallable(const Model::CreateLogSetRequest& request);

                /**
                 *This API is used to create a shipping task.
                 * @param req CreateLogTopicTaskRequest
                 * @return CreateLogTopicTaskOutcome
                 */
                CreateLogTopicTaskOutcome CreateLogTopicTask(const Model::CreateLogTopicTaskRequest &request);
                void CreateLogTopicTaskAsync(const Model::CreateLogTopicTaskRequest& request, const CreateLogTopicTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLogTopicTaskOutcomeCallable CreateLogTopicTaskCallable(const Model::CreateLogTopicTaskRequest& request);

                /**
                 *This API is used to purchase a plan for a new site.
                 * @param req CreatePlanForZoneRequest
                 * @return CreatePlanForZoneOutcome
                 */
                CreatePlanForZoneOutcome CreatePlanForZone(const Model::CreatePlanForZoneRequest &request);
                void CreatePlanForZoneAsync(const Model::CreatePlanForZoneRequest& request, const CreatePlanForZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePlanForZoneOutcomeCallable CreatePlanForZoneCallable(const Model::CreatePlanForZoneRequest& request);

                /**
                 *This API is used to create a pre-warming task.
                 * @param req CreatePrefetchTaskRequest
                 * @return CreatePrefetchTaskOutcome
                 */
                CreatePrefetchTaskOutcome CreatePrefetchTask(const Model::CreatePrefetchTaskRequest &request);
                void CreatePrefetchTaskAsync(const Model::CreatePrefetchTaskRequest& request, const CreatePrefetchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrefetchTaskOutcomeCallable CreatePrefetchTaskCallable(const Model::CreatePrefetchTaskRequest& request);

                /**
                 *This API is used to create a cache purging task.
                 * @param req CreatePurgeTaskRequest
                 * @return CreatePurgeTaskOutcome
                 */
                CreatePurgeTaskOutcome CreatePurgeTask(const Model::CreatePurgeTaskRequest &request);
                void CreatePurgeTaskAsync(const Model::CreatePurgeTaskRequest& request, const CreatePurgeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePurgeTaskOutcomeCallable CreatePurgeTaskCallable(const Model::CreatePurgeTaskRequest& request);

                /**
                 *This API is used to create a replay task for purging or pre-warming URLs.
                 * @param req CreateReplayTaskRequest
                 * @return CreateReplayTaskOutcome
                 */
                CreateReplayTaskOutcome CreateReplayTask(const Model::CreateReplayTaskRequest &request);
                void CreateReplayTaskAsync(const Model::CreateReplayTaskRequest& request, const CreateReplayTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReplayTaskOutcomeCallable CreateReplayTaskCallable(const Model::CreateReplayTaskRequest& request);

                /**
                 *This API is used to create a rule in the rule engine.
                 * @param req CreateRuleRequest
                 * @return CreateRuleOutcome
                 */
                CreateRuleOutcome CreateRule(const Model::CreateRuleRequest &request);
                void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request);

                /**
                 *This API is used to access a new site.
                 * @param req CreateZoneRequest
                 * @return CreateZoneOutcome
                 */
                CreateZoneOutcome CreateZone(const Model::CreateZoneRequest &request);
                void CreateZoneAsync(const Model::CreateZoneRequest& request, const CreateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateZoneOutcomeCallable CreateZoneCallable(const Model::CreateZoneRequest& request);

                /**
                 *This API is used to delete DNS records in batches.
                 * @param req DeleteDnsRecordsRequest
                 * @return DeleteDnsRecordsOutcome
                 */
                DeleteDnsRecordsOutcome DeleteDnsRecords(const Model::DeleteDnsRecordsRequest &request);
                void DeleteDnsRecordsAsync(const Model::DeleteDnsRecordsRequest& request, const DeleteDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDnsRecordsOutcomeCallable DeleteDnsRecordsCallable(const Model::DeleteDnsRecordsRequest& request);

                /**
                 *This API is used to delete a shipping task.
                 * @param req DeleteLogTopicTaskRequest
                 * @return DeleteLogTopicTaskOutcome
                 */
                DeleteLogTopicTaskOutcome DeleteLogTopicTask(const Model::DeleteLogTopicTaskRequest &request);
                void DeleteLogTopicTaskAsync(const Model::DeleteLogTopicTaskRequest& request, const DeleteLogTopicTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLogTopicTaskOutcomeCallable DeleteLogTopicTaskCallable(const Model::DeleteLogTopicTaskRequest& request);

                /**
                 *This API is used to batch delete rules from the rule engine.
                 * @param req DeleteRulesRequest
                 * @return DeleteRulesOutcome
                 */
                DeleteRulesOutcome DeleteRules(const Model::DeleteRulesRequest &request);
                void DeleteRulesAsync(const Model::DeleteRulesRequest& request, const DeleteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRulesOutcomeCallable DeleteRulesCallable(const Model::DeleteRulesRequest& request);

                /**
                 *This API is used to delete a site.
                 * @param req DeleteZoneRequest
                 * @return DeleteZoneOutcome
                 */
                DeleteZoneOutcome DeleteZone(const Model::DeleteZoneRequest &request);
                void DeleteZoneAsync(const Model::DeleteZoneRequest& request, const DeleteZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteZoneOutcomeCallable DeleteZoneCallable(const Model::DeleteZoneRequest& request);

                /**
                 *This API is used to query available shipping entities.
                 * @param req DescribeAddableEntityListRequest
                 * @return DescribeAddableEntityListOutcome
                 */
                DescribeAddableEntityListOutcome DescribeAddableEntityList(const Model::DescribeAddableEntityListRequest &request);
                void DescribeAddableEntityListAsync(const Model::DescribeAddableEntityListRequest& request, const DescribeAddableEntityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddableEntityListOutcomeCallable DescribeAddableEntityListCallable(const Model::DescribeAddableEntityListRequest& request);

                /**
                 *This API is used to query plan options available for purchase.
                 * @param req DescribeAvailablePlansRequest
                 * @return DescribeAvailablePlansOutcome
                 */
                DescribeAvailablePlansOutcome DescribeAvailablePlans(const Model::DescribeAvailablePlansRequest &request);
                void DescribeAvailablePlansAsync(const Model::DescribeAvailablePlansRequest& request, const DescribeAvailablePlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailablePlansOutcomeCallable DescribeAvailablePlansCallable(const Model::DescribeAvailablePlansRequest& request);

                /**
                 *This API is used to get the billing data.
                 * @param req DescribeBillingDataRequest
                 * @return DescribeBillingDataOutcome
                 */
                DescribeBillingDataOutcome DescribeBillingData(const Model::DescribeBillingDataRequest &request);
                void DescribeBillingDataAsync(const Model::DescribeBillingDataRequest& request, const DescribeBillingDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillingDataOutcomeCallable DescribeBillingDataCallable(const Model::DescribeBillingDataRequest& request);

                /**
                 *This API is used to query the list of bot attackers.
                 * @param req DescribeBotClientIpListRequest
                 * @return DescribeBotClientIpListOutcome
                 */
                DescribeBotClientIpListOutcome DescribeBotClientIpList(const Model::DescribeBotClientIpListRequest &request);
                void DescribeBotClientIpListAsync(const Model::DescribeBotClientIpListRequest& request, const DescribeBotClientIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBotClientIpListOutcomeCallable DescribeBotClientIpListCallable(const Model::DescribeBotClientIpListRequest& request);

                /**
                 *This API is used to query the bot attack data recorded over time.
                 * @param req DescribeBotDataRequest
                 * @return DescribeBotDataOutcome
                 */
                DescribeBotDataOutcome DescribeBotData(const Model::DescribeBotDataRequest &request);
                void DescribeBotDataAsync(const Model::DescribeBotDataRequest& request, const DescribeBotDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBotDataOutcomeCallable DescribeBotDataCallable(const Model::DescribeBotDataRequest& request);

                /**
                 *This API is used to query the details of a hit bot security rule.
                 * @param req DescribeBotHitRuleDetailRequest
                 * @return DescribeBotHitRuleDetailOutcome
                 */
                DescribeBotHitRuleDetailOutcome DescribeBotHitRuleDetail(const Model::DescribeBotHitRuleDetailRequest &request);
                void DescribeBotHitRuleDetailAsync(const Model::DescribeBotHitRuleDetailRequest& request, const DescribeBotHitRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBotHitRuleDetailOutcomeCallable DescribeBotHitRuleDetailCallable(const Model::DescribeBotHitRuleDetailRequest& request);

                /**
                 *This API is used to query bot attack logs.
                 * @param req DescribeBotLogRequest
                 * @return DescribeBotLogOutcome
                 */
                DescribeBotLogOutcome DescribeBotLog(const Model::DescribeBotLogRequest &request);
                void DescribeBotLogAsync(const Model::DescribeBotLogRequest& request, const DescribeBotLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBotLogOutcomeCallable DescribeBotLogCallable(const Model::DescribeBotLogRequest& request);

                /**
                 *This API is used to query the top-ranked bot attack data.
                 * @param req DescribeBotTopDataRequest
                 * @return DescribeBotTopDataOutcome
                 */
                DescribeBotTopDataOutcome DescribeBotTopData(const Model::DescribeBotTopDataRequest &request);
                void DescribeBotTopDataAsync(const Model::DescribeBotTopDataRequest& request, const DescribeBotTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBotTopDataOutcomeCallable DescribeBotTopDataCallable(const Model::DescribeBotTopDataRequest& request);

                /**
                 *This API is used to query the information of blocked clients.
                 * @param req DescribeClientRuleListRequest
                 * @return DescribeClientRuleListOutcome
                 */
                DescribeClientRuleListOutcome DescribeClientRuleList(const Model::DescribeClientRuleListRequest &request);
                void DescribeClientRuleListAsync(const Model::DescribeClientRuleListRequest& request, const DescribeClientRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClientRuleListOutcomeCallable DescribeClientRuleListCallable(const Model::DescribeClientRuleListRequest& request);

                /**
                 *This API is used to query content management quotas.
                 * @param req DescribeContentQuotaRequest
                 * @return DescribeContentQuotaOutcome
                 */
                DescribeContentQuotaOutcome DescribeContentQuota(const Model::DescribeContentQuotaRequest &request);
                void DescribeContentQuotaAsync(const Model::DescribeContentQuotaRequest& request, const DescribeContentQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContentQuotaOutcomeCallable DescribeContentQuotaCallable(const Model::DescribeContentQuotaRequest& request);

                /**
                 *This API is used to query the DDoS attack data recorded over time.
                 * @param req DescribeDDoSAttackDataRequest
                 * @return DescribeDDoSAttackDataOutcome
                 */
                DescribeDDoSAttackDataOutcome DescribeDDoSAttackData(const Model::DescribeDDoSAttackDataRequest &request);
                void DescribeDDoSAttackDataAsync(const Model::DescribeDDoSAttackDataRequest& request, const DescribeDDoSAttackDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSAttackDataOutcomeCallable DescribeDDoSAttackDataCallable(const Model::DescribeDDoSAttackDataRequest& request);

                /**
                 *This API is used to query the list of DDoS attack events.
                 * @param req DescribeDDoSAttackEventRequest
                 * @return DescribeDDoSAttackEventOutcome
                 */
                DescribeDDoSAttackEventOutcome DescribeDDoSAttackEvent(const Model::DescribeDDoSAttackEventRequest &request);
                void DescribeDDoSAttackEventAsync(const Model::DescribeDDoSAttackEventRequest& request, const DescribeDDoSAttackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSAttackEventOutcomeCallable DescribeDDoSAttackEventCallable(const Model::DescribeDDoSAttackEventRequest& request);

                /**
                 *This API is used to query the details of a DDoS attack event.
                 * @param req DescribeDDoSAttackEventDetailRequest
                 * @return DescribeDDoSAttackEventDetailOutcome
                 */
                DescribeDDoSAttackEventDetailOutcome DescribeDDoSAttackEventDetail(const Model::DescribeDDoSAttackEventDetailRequest &request);
                void DescribeDDoSAttackEventDetailAsync(const Model::DescribeDDoSAttackEventDetailRequest& request, const DescribeDDoSAttackEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSAttackEventDetailOutcomeCallable DescribeDDoSAttackEventDetailCallable(const Model::DescribeDDoSAttackEventDetailRequest& request);

                /**
                 *This API is used to query the list of DDoS attackers.
                 * @param req DescribeDDoSAttackSourceEventRequest
                 * @return DescribeDDoSAttackSourceEventOutcome
                 */
                DescribeDDoSAttackSourceEventOutcome DescribeDDoSAttackSourceEvent(const Model::DescribeDDoSAttackSourceEventRequest &request);
                void DescribeDDoSAttackSourceEventAsync(const Model::DescribeDDoSAttackSourceEventRequest& request, const DescribeDDoSAttackSourceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSAttackSourceEventOutcomeCallable DescribeDDoSAttackSourceEventCallable(const Model::DescribeDDoSAttackSourceEventRequest& request);

                /**
                 *This API is used to query the top-ranked DDoS attack data.
                 * @param req DescribeDDoSAttackTopDataRequest
                 * @return DescribeDDoSAttackTopDataOutcome
                 */
                DescribeDDoSAttackTopDataOutcome DescribeDDoSAttackTopData(const Model::DescribeDDoSAttackTopDataRequest &request);
                void DescribeDDoSAttackTopDataAsync(const Model::DescribeDDoSAttackTopDataRequest& request, const DescribeDDoSAttackTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSAttackTopDataOutcomeCallable DescribeDDoSAttackTopDataCallable(const Model::DescribeDDoSAttackTopDataRequest& request);

                /**
                 *This API is used to query the list of DDoS blocking data.
                 * @param req DescribeDDoSBlockListRequest
                 * @return DescribeDDoSBlockListOutcome
                 */
                DescribeDDoSBlockListOutcome DescribeDDoSBlockList(const Model::DescribeDDoSBlockListRequest &request);
                void DescribeDDoSBlockListAsync(const Model::DescribeDDoSBlockListRequest& request, const DescribeDDoSBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSBlockListOutcomeCallable DescribeDDoSBlockListCallable(const Model::DescribeDDoSBlockListRequest& request);

                /**
                 *This API is used to query the list of large attack events.
                 * @param req DescribeDDoSMajorAttackEventRequest
                 * @return DescribeDDoSMajorAttackEventOutcome
                 */
                DescribeDDoSMajorAttackEventOutcome DescribeDDoSMajorAttackEvent(const Model::DescribeDDoSMajorAttackEventRequest &request);
                void DescribeDDoSMajorAttackEventAsync(const Model::DescribeDDoSMajorAttackEventRequest& request, const DescribeDDoSMajorAttackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSMajorAttackEventOutcomeCallable DescribeDDoSMajorAttackEventCallable(const Model::DescribeDDoSMajorAttackEventRequest& request);

                /**
                 *This API is used to query a list of default certificates.
                 * @param req DescribeDefaultCertificatesRequest
                 * @return DescribeDefaultCertificatesOutcome
                 */
                DescribeDefaultCertificatesOutcome DescribeDefaultCertificates(const Model::DescribeDefaultCertificatesRequest &request);
                void DescribeDefaultCertificatesAsync(const Model::DescribeDefaultCertificatesRequest& request, const DescribeDefaultCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefaultCertificatesOutcomeCallable DescribeDefaultCertificatesCallable(const Model::DescribeDefaultCertificatesRequest& request);

                /**
                 *This API is used to get DNS requests.
                 * @param req DescribeDnsDataRequest
                 * @return DescribeDnsDataOutcome
                 */
                DescribeDnsDataOutcome DescribeDnsData(const Model::DescribeDnsDataRequest &request);
                void DescribeDnsDataAsync(const Model::DescribeDnsDataRequest& request, const DescribeDnsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDnsDataOutcomeCallable DescribeDnsDataCallable(const Model::DescribeDnsDataRequest& request);

                /**
                 *This API is used to query DNS records. Paging, sorting and filtering are supported.
                 * @param req DescribeDnsRecordsRequest
                 * @return DescribeDnsRecordsOutcome
                 */
                DescribeDnsRecordsOutcome DescribeDnsRecords(const Model::DescribeDnsRecordsRequest &request);
                void DescribeDnsRecordsAsync(const Model::DescribeDnsRecordsRequest& request, const DescribeDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDnsRecordsOutcomeCallable DescribeDnsRecordsCallable(const Model::DescribeDnsRecordsRequest& request);

                /**
                 *This API is used to query DNSSEC information.
                 * @param req DescribeDnssecRequest
                 * @return DescribeDnssecOutcome
                 */
                DescribeDnssecOutcome DescribeDnssec(const Model::DescribeDnssecRequest &request);
                void DescribeDnssecAsync(const Model::DescribeDnssecRequest& request, const DescribeDnssecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDnssecOutcomeCallable DescribeDnssecCallable(const Model::DescribeDnssecRequest& request);

                /**
                 *This API is used to query detailed domain name configuration.
                 * @param req DescribeHostsSettingRequest
                 * @return DescribeHostsSettingOutcome
                 */
                DescribeHostsSettingOutcome DescribeHostsSetting(const Model::DescribeHostsSettingRequest &request);
                void DescribeHostsSettingAsync(const Model::DescribeHostsSettingRequest& request, const DescribeHostsSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostsSettingOutcomeCallable DescribeHostsSettingCallable(const Model::DescribeHostsSettingRequest& request);

                /**
                 *This API is used to query the verification information of a site.
                 * @param req DescribeIdentificationsRequest
                 * @return DescribeIdentificationsOutcome
                 */
                DescribeIdentificationsOutcome DescribeIdentifications(const Model::DescribeIdentificationsRequest &request);
                void DescribeIdentificationsAsync(const Model::DescribeIdentificationsRequest& request, const DescribeIdentificationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIdentificationsOutcomeCallable DescribeIdentificationsCallable(const Model::DescribeIdentificationsRequest& request);

                /**
                 *This API is used to get a list of logsets.
                 * @param req DescribeLogSetsRequest
                 * @return DescribeLogSetsOutcome
                 */
                DescribeLogSetsOutcome DescribeLogSets(const Model::DescribeLogSetsRequest &request);
                void DescribeLogSetsAsync(const Model::DescribeLogSetsRequest& request, const DescribeLogSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogSetsOutcomeCallable DescribeLogSetsCallable(const Model::DescribeLogSetsRequest& request);

                /**
                 *This API is used to get the details of a shipping task.
                 * @param req DescribeLogTopicTaskDetailRequest
                 * @return DescribeLogTopicTaskDetailOutcome
                 */
                DescribeLogTopicTaskDetailOutcome DescribeLogTopicTaskDetail(const Model::DescribeLogTopicTaskDetailRequest &request);
                void DescribeLogTopicTaskDetailAsync(const Model::DescribeLogTopicTaskDetailRequest& request, const DescribeLogTopicTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogTopicTaskDetailOutcomeCallable DescribeLogTopicTaskDetailCallable(const Model::DescribeLogTopicTaskDetailRequest& request);

                /**
                 *This API is used to get a list of shipping tasks.
                 * @param req DescribeLogTopicTasksRequest
                 * @return DescribeLogTopicTasksOutcome
                 */
                DescribeLogTopicTasksOutcome DescribeLogTopicTasks(const Model::DescribeLogTopicTasksRequest &request);
                void DescribeLogTopicTasksAsync(const Model::DescribeLogTopicTasksRequest& request, const DescribeLogTopicTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogTopicTasksOutcomeCallable DescribeLogTopicTasksCallable(const Model::DescribeLogTopicTasksRequest& request);

                /**
                 *This API is used to query the L7 traffic summary statistics recorded over time.
                 * @param req DescribeOverviewL7DataRequest
                 * @return DescribeOverviewL7DataOutcome
                 */
                DescribeOverviewL7DataOutcome DescribeOverviewL7Data(const Model::DescribeOverviewL7DataRequest &request);
                void DescribeOverviewL7DataAsync(const Model::DescribeOverviewL7DataRequest& request, const DescribeOverviewL7DataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOverviewL7DataOutcomeCallable DescribeOverviewL7DataCallable(const Model::DescribeOverviewL7DataRequest& request);

                /**
                 *This API is used to query the pre-warming task status.
                 * @param req DescribePrefetchTasksRequest
                 * @return DescribePrefetchTasksOutcome
                 */
                DescribePrefetchTasksOutcome DescribePrefetchTasks(const Model::DescribePrefetchTasksRequest &request);
                void DescribePrefetchTasksAsync(const Model::DescribePrefetchTasksRequest& request, const DescribePrefetchTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrefetchTasksOutcomeCallable DescribePrefetchTasksCallable(const Model::DescribePrefetchTasksRequest& request);

                /**
                 *Querying the cache purging history
                 * @param req DescribePurgeTasksRequest
                 * @return DescribePurgeTasksOutcome
                 */
                DescribePurgeTasksOutcome DescribePurgeTasks(const Model::DescribePurgeTasksRequest &request);
                void DescribePurgeTasksAsync(const Model::DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurgeTasksOutcomeCallable DescribePurgeTasksCallable(const Model::DescribePurgeTasksRequest& request);

                /**
                 *This API is used to query the rules in the rule engine.
                 * @param req DescribeRulesRequest
                 * @return DescribeRulesOutcome
                 */
                DescribeRulesOutcome DescribeRules(const Model::DescribeRulesRequest &request);
                void DescribeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesOutcomeCallable DescribeRulesCallable(const Model::DescribeRulesRequest& request);

                /**
                 *This API is used to return the list of the settings of the rule engine that can be used for request match and their detailed recommended configuration information.
                 * @param req DescribeRulesSettingRequest
                 * @return DescribeRulesSettingOutcome
                 */
                DescribeRulesSettingOutcome DescribeRulesSetting(const Model::DescribeRulesSettingRequest &request);
                void DescribeRulesSettingAsync(const Model::DescribeRulesSettingRequest& request, const DescribeRulesSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesSettingOutcomeCallable DescribeRulesSettingCallable(const Model::DescribeRulesSettingRequest& request);

                /**
                 *This API is used to query the list of L7 dimensional data.
                 * @param req DescribeSingleL7AnalysisDataRequest
                 * @return DescribeSingleL7AnalysisDataOutcome
                 */
                DescribeSingleL7AnalysisDataOutcome DescribeSingleL7AnalysisData(const Model::DescribeSingleL7AnalysisDataRequest &request);
                void DescribeSingleL7AnalysisDataAsync(const Model::DescribeSingleL7AnalysisDataRequest& request, const DescribeSingleL7AnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSingleL7AnalysisDataOutcomeCallable DescribeSingleL7AnalysisDataCallable(const Model::DescribeSingleL7AnalysisDataRequest& request);

                /**
                 *This API is used to query the list of L4 traffic data recorded over time.
                 * @param req DescribeTimingL4DataRequest
                 * @return DescribeTimingL4DataOutcome
                 */
                DescribeTimingL4DataOutcome DescribeTimingL4Data(const Model::DescribeTimingL4DataRequest &request);
                void DescribeTimingL4DataAsync(const Model::DescribeTimingL4DataRequest& request, const DescribeTimingL4DataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimingL4DataOutcomeCallable DescribeTimingL4DataCallable(const Model::DescribeTimingL4DataRequest& request);

                /**
                 *This API is used to query the L7 data recorded over time.
                 * @param req DescribeTimingL7AnalysisDataRequest
                 * @return DescribeTimingL7AnalysisDataOutcome
                 */
                DescribeTimingL7AnalysisDataOutcome DescribeTimingL7AnalysisData(const Model::DescribeTimingL7AnalysisDataRequest &request);
                void DescribeTimingL7AnalysisDataAsync(const Model::DescribeTimingL7AnalysisDataRequest& request, const DescribeTimingL7AnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimingL7AnalysisDataOutcomeCallable DescribeTimingL7AnalysisDataCallable(const Model::DescribeTimingL7AnalysisDataRequest& request);

                /**
                 *This API is used to query the time-series L7 cached data.
                 * @param req DescribeTimingL7CacheDataRequest
                 * @return DescribeTimingL7CacheDataOutcome
                 */
                DescribeTimingL7CacheDataOutcome DescribeTimingL7CacheData(const Model::DescribeTimingL7CacheDataRequest &request);
                void DescribeTimingL7CacheDataAsync(const Model::DescribeTimingL7CacheDataRequest& request, const DescribeTimingL7CacheDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimingL7CacheDataOutcomeCallable DescribeTimingL7CacheDataCallable(const Model::DescribeTimingL7CacheDataRequest& request);

                /**
                 *This API is used to query the top-ranked L7 traffic data.
                 * @param req DescribeTopL7AnalysisDataRequest
                 * @return DescribeTopL7AnalysisDataOutcome
                 */
                DescribeTopL7AnalysisDataOutcome DescribeTopL7AnalysisData(const Model::DescribeTopL7AnalysisDataRequest &request);
                void DescribeTopL7AnalysisDataAsync(const Model::DescribeTopL7AnalysisDataRequest& request, const DescribeTopL7AnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopL7AnalysisDataOutcomeCallable DescribeTopL7AnalysisDataCallable(const Model::DescribeTopL7AnalysisDataRequest& request);

                /**
                 *This API is used to query the cached L7 top-ranked data.
                 * @param req DescribeTopL7CacheDataRequest
                 * @return DescribeTopL7CacheDataOutcome
                 */
                DescribeTopL7CacheDataOutcome DescribeTopL7CacheData(const Model::DescribeTopL7CacheDataRequest &request);
                void DescribeTopL7CacheDataAsync(const Model::DescribeTopL7CacheDataRequest& request, const DescribeTopL7CacheDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopL7CacheDataOutcomeCallable DescribeTopL7CacheDataCallable(const Model::DescribeTopL7CacheDataRequest& request);

                /**
                 *This API is used to query the WAF attack data recorded over time.
                 * @param req DescribeWebManagedRulesDataRequest
                 * @return DescribeWebManagedRulesDataOutcome
                 */
                DescribeWebManagedRulesDataOutcome DescribeWebManagedRulesData(const Model::DescribeWebManagedRulesDataRequest &request);
                void DescribeWebManagedRulesDataAsync(const Model::DescribeWebManagedRulesDataRequest& request, const DescribeWebManagedRulesDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebManagedRulesDataOutcomeCallable DescribeWebManagedRulesDataCallable(const Model::DescribeWebManagedRulesDataRequest& request);

                /**
                 *This API is used to query the details of a hit WAF security rule.
                 * @param req DescribeWebManagedRulesHitRuleDetailRequest
                 * @return DescribeWebManagedRulesHitRuleDetailOutcome
                 */
                DescribeWebManagedRulesHitRuleDetailOutcome DescribeWebManagedRulesHitRuleDetail(const Model::DescribeWebManagedRulesHitRuleDetailRequest &request);
                void DescribeWebManagedRulesHitRuleDetailAsync(const Model::DescribeWebManagedRulesHitRuleDetailRequest& request, const DescribeWebManagedRulesHitRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebManagedRulesHitRuleDetailOutcomeCallable DescribeWebManagedRulesHitRuleDetailCallable(const Model::DescribeWebManagedRulesHitRuleDetailRequest& request);

                /**
                 *This API is used to query web attack logs.
                 * @param req DescribeWebManagedRulesLogRequest
                 * @return DescribeWebManagedRulesLogOutcome
                 */
                DescribeWebManagedRulesLogOutcome DescribeWebManagedRulesLog(const Model::DescribeWebManagedRulesLogRequest &request);
                void DescribeWebManagedRulesLogAsync(const Model::DescribeWebManagedRulesLogRequest& request, const DescribeWebManagedRulesLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebManagedRulesLogOutcomeCallable DescribeWebManagedRulesLogCallable(const Model::DescribeWebManagedRulesLogRequest& request);

                /**
                 *This API is used to query the list of CC attack events.
                 * @param req DescribeWebProtectionAttackEventsRequest
                 * @return DescribeWebProtectionAttackEventsOutcome
                 */
                DescribeWebProtectionAttackEventsOutcome DescribeWebProtectionAttackEvents(const Model::DescribeWebProtectionAttackEventsRequest &request);
                void DescribeWebProtectionAttackEventsAsync(const Model::DescribeWebProtectionAttackEventsRequest& request, const DescribeWebProtectionAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebProtectionAttackEventsOutcomeCallable DescribeWebProtectionAttackEventsCallable(const Model::DescribeWebProtectionAttackEventsRequest& request);

                /**
                 *This API is used to query the information of CC attackers.
                 * @param req DescribeWebProtectionClientIpListRequest
                 * @return DescribeWebProtectionClientIpListOutcome
                 */
                DescribeWebProtectionClientIpListOutcome DescribeWebProtectionClientIpList(const Model::DescribeWebProtectionClientIpListRequest &request);
                void DescribeWebProtectionClientIpListAsync(const Model::DescribeWebProtectionClientIpListRequest& request, const DescribeWebProtectionClientIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebProtectionClientIpListOutcomeCallable DescribeWebProtectionClientIpListCallable(const Model::DescribeWebProtectionClientIpListRequest& request);

                /**
                 *This API is used to query the CC protection data recorded over time.
                 * @param req DescribeWebProtectionDataRequest
                 * @return DescribeWebProtectionDataOutcome
                 */
                DescribeWebProtectionDataOutcome DescribeWebProtectionData(const Model::DescribeWebProtectionDataRequest &request);
                void DescribeWebProtectionDataAsync(const Model::DescribeWebProtectionDataRequest& request, const DescribeWebProtectionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebProtectionDataOutcomeCallable DescribeWebProtectionDataCallable(const Model::DescribeWebProtectionDataRequest& request);

                /**
                 *This API is used to query the details of a hit CC protection rule.
                 * @param req DescribeWebProtectionHitRuleDetailRequest
                 * @return DescribeWebProtectionHitRuleDetailOutcome
                 */
                DescribeWebProtectionHitRuleDetailOutcome DescribeWebProtectionHitRuleDetail(const Model::DescribeWebProtectionHitRuleDetailRequest &request);
                void DescribeWebProtectionHitRuleDetailAsync(const Model::DescribeWebProtectionHitRuleDetailRequest& request, const DescribeWebProtectionHitRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebProtectionHitRuleDetailOutcomeCallable DescribeWebProtectionHitRuleDetailCallable(const Model::DescribeWebProtectionHitRuleDetailRequest& request);

                /**
                 *This API is used to query the top-ranked CC protection data.
                 * @param req DescribeWebProtectionTopDataRequest
                 * @return DescribeWebProtectionTopDataOutcome
                 */
                DescribeWebProtectionTopDataOutcome DescribeWebProtectionTopData(const Model::DescribeWebProtectionTopDataRequest &request);
                void DescribeWebProtectionTopDataAsync(const Model::DescribeWebProtectionTopDataRequest& request, const DescribeWebProtectionTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebProtectionTopDataOutcomeCallable DescribeWebProtectionTopDataCallable(const Model::DescribeWebProtectionTopDataRequest& request);

                /**
                 *This API is used to query the site configuration.
                 * @param req DescribeZoneSettingRequest
                 * @return DescribeZoneSettingOutcome
                 */
                DescribeZoneSettingOutcome DescribeZoneSetting(const Model::DescribeZoneSettingRequest &request);
                void DescribeZoneSettingAsync(const Model::DescribeZoneSettingRequest& request, const DescribeZoneSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneSettingOutcomeCallable DescribeZoneSettingCallable(const Model::DescribeZoneSettingRequest& request);

                /**
                 *This API is used to query the list of user sites.
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *This API is used to download L4 logs.
                 * @param req DownloadL4LogsRequest
                 * @return DownloadL4LogsOutcome
                 */
                DownloadL4LogsOutcome DownloadL4Logs(const Model::DownloadL4LogsRequest &request);
                void DownloadL4LogsAsync(const Model::DownloadL4LogsRequest& request, const DownloadL4LogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadL4LogsOutcomeCallable DownloadL4LogsCallable(const Model::DownloadL4LogsRequest& request);

                /**
                 *This API is used to download L7 logs.
                 * @param req DownloadL7LogsRequest
                 * @return DownloadL7LogsOutcome
                 */
                DownloadL7LogsOutcome DownloadL7Logs(const Model::DownloadL7LogsRequest &request);
                void DownloadL7LogsAsync(const Model::DownloadL7LogsRequest& request, const DownloadL7LogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadL7LogsOutcomeCallable DownloadL7LogsCallable(const Model::DownloadL7LogsRequest& request);

                /**
                 *This API is used to verify ownership of the site.
                 * @param req IdentifyZoneRequest
                 * @return IdentifyZoneOutcome
                 */
                IdentifyZoneOutcome IdentifyZone(const Model::IdentifyZoneRequest &request);
                void IdentifyZoneAsync(const Model::IdentifyZoneRequest& request, const IdentifyZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IdentifyZoneOutcomeCallable IdentifyZoneCallable(const Model::IdentifyZoneRequest& request);

                /**
                 *This example shows you how to modify the status of a default certificate.
                 * @param req ModifyDefaultCertificateRequest
                 * @return ModifyDefaultCertificateOutcome
                 */
                ModifyDefaultCertificateOutcome ModifyDefaultCertificate(const Model::ModifyDefaultCertificateRequest &request);
                void ModifyDefaultCertificateAsync(const Model::ModifyDefaultCertificateRequest& request, const ModifyDefaultCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDefaultCertificateOutcomeCallable ModifyDefaultCertificateCallable(const Model::ModifyDefaultCertificateRequest& request);

                /**
                 *This API is used to modify DNS records.
                 * @param req ModifyDnsRecordRequest
                 * @return ModifyDnsRecordOutcome
                 */
                ModifyDnsRecordOutcome ModifyDnsRecord(const Model::ModifyDnsRecordRequest &request);
                void ModifyDnsRecordAsync(const Model::ModifyDnsRecordRequest& request, const ModifyDnsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDnsRecordOutcomeCallable ModifyDnsRecordCallable(const Model::ModifyDnsRecordRequest& request);

                /**
                 *This API is used to modify the DNSSEC status of a site.
                 * @param req ModifyDnssecRequest
                 * @return ModifyDnssecOutcome
                 */
                ModifyDnssecOutcome ModifyDnssec(const Model::ModifyDnssecRequest &request);
                void ModifyDnssecAsync(const Model::ModifyDnssecRequest& request, const ModifyDnssecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDnssecOutcomeCallable ModifyDnssecCallable(const Model::ModifyDnssecRequest& request);

                /**
                 *This API is used to modify the certificate of a domain name.
                 * @param req ModifyHostsCertificateRequest
                 * @return ModifyHostsCertificateOutcome
                 */
                ModifyHostsCertificateOutcome ModifyHostsCertificate(const Model::ModifyHostsCertificateRequest &request);
                void ModifyHostsCertificateAsync(const Model::ModifyHostsCertificateRequest& request, const ModifyHostsCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHostsCertificateOutcomeCallable ModifyHostsCertificateCallable(const Model::ModifyHostsCertificateRequest& request);

                /**
                 *This API is used to modify a shipping task.
                 * @param req ModifyLogTopicTaskRequest
                 * @return ModifyLogTopicTaskOutcome
                 */
                ModifyLogTopicTaskOutcome ModifyLogTopicTask(const Model::ModifyLogTopicTaskRequest &request);
                void ModifyLogTopicTaskAsync(const Model::ModifyLogTopicTaskRequest& request, const ModifyLogTopicTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLogTopicTaskOutcomeCallable ModifyLogTopicTaskCallable(const Model::ModifyLogTopicTaskRequest& request);

                /**
                 *This API is used to modify a rule in the rule engine.
                 * @param req ModifyRuleRequest
                 * @return ModifyRuleOutcome
                 */
                ModifyRuleOutcome ModifyRule(const Model::ModifyRuleRequest &request);
                void ModifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRuleOutcomeCallable ModifyRuleCallable(const Model::ModifyRuleRequest& request);

                /**
                 *This API is used to modify the priority of a rule in the rule engine.
                 * @param req ModifyRulePriorityRequest
                 * @return ModifyRulePriorityOutcome
                 */
                ModifyRulePriorityOutcome ModifyRulePriority(const Model::ModifyRulePriorityRequest &request);
                void ModifyRulePriorityAsync(const Model::ModifyRulePriorityRequest& request, const ModifyRulePriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRulePriorityOutcomeCallable ModifyRulePriorityCallable(const Model::ModifyRulePriorityRequest& request);

                /**
                 *This API is used to modify a site.
                 * @param req ModifyZoneRequest
                 * @return ModifyZoneOutcome
                 */
                ModifyZoneOutcome ModifyZone(const Model::ModifyZoneRequest &request);
                void ModifyZoneAsync(const Model::ModifyZoneRequest& request, const ModifyZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneOutcomeCallable ModifyZoneCallable(const Model::ModifyZoneRequest& request);

                /**
                 *This API is used to modify the CNAME acceleration status.
                 * @param req ModifyZoneCnameSpeedUpRequest
                 * @return ModifyZoneCnameSpeedUpOutcome
                 */
                ModifyZoneCnameSpeedUpOutcome ModifyZoneCnameSpeedUp(const Model::ModifyZoneCnameSpeedUpRequest &request);
                void ModifyZoneCnameSpeedUpAsync(const Model::ModifyZoneCnameSpeedUpRequest& request, const ModifyZoneCnameSpeedUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneCnameSpeedUpOutcomeCallable ModifyZoneCnameSpeedUpCallable(const Model::ModifyZoneCnameSpeedUpRequest& request);

                /**
                 *This API is used to modify the site configuration.
                 * @param req ModifyZoneSettingRequest
                 * @return ModifyZoneSettingOutcome
                 */
                ModifyZoneSettingOutcome ModifyZoneSetting(const Model::ModifyZoneSettingRequest &request);
                void ModifyZoneSettingAsync(const Model::ModifyZoneSettingRequest& request, const ModifyZoneSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneSettingOutcomeCallable ModifyZoneSettingCallable(const Model::ModifyZoneSettingRequest& request);

                /**
                 *This API is used to change the site status.
                 * @param req ModifyZoneStatusRequest
                 * @return ModifyZoneStatusOutcome
                 */
                ModifyZoneStatusOutcome ModifyZoneStatus(const Model::ModifyZoneStatusRequest &request);
                void ModifyZoneStatusAsync(const Model::ModifyZoneStatusRequest& request, const ModifyZoneStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneStatusOutcomeCallable ModifyZoneStatusCallable(const Model::ModifyZoneStatusRequest& request);

                /**
                 *This API is used to reclaim a site from other users after its ownership is verified.
                 * @param req ReclaimZoneRequest
                 * @return ReclaimZoneOutcome
                 */
                ReclaimZoneOutcome ReclaimZone(const Model::ReclaimZoneRequest &request);
                void ReclaimZoneAsync(const Model::ReclaimZoneRequest& request, const ReclaimZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReclaimZoneOutcomeCallable ReclaimZoneCallable(const Model::ReclaimZoneRequest& request);

                /**
                 *This API is used to enable or disable a shipping task.
                 * @param req SwitchLogTopicTaskRequest
                 * @return SwitchLogTopicTaskOutcome
                 */
                SwitchLogTopicTaskOutcome SwitchLogTopicTask(const Model::SwitchLogTopicTaskRequest &request);
                void SwitchLogTopicTaskAsync(const Model::SwitchLogTopicTaskRequest& request, const SwitchLogTopicTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchLogTopicTaskOutcomeCallable SwitchLogTopicTaskCallable(const Model::SwitchLogTopicTaskRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_TEOCLIENT_H_
