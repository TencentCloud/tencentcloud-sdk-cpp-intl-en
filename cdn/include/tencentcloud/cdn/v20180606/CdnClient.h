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

#ifndef TENCENTCLOUD_CDN_V20180606_CDNCLIENT_H_
#define TENCENTCLOUD_CDN_V20180606_CDNCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cdn/v20180606/model/AddCLSTopicDomainsRequest.h>
#include <tencentcloud/cdn/v20180606/model/AddCLSTopicDomainsResponse.h>
#include <tencentcloud/cdn/v20180606/model/AddCdnDomainRequest.h>
#include <tencentcloud/cdn/v20180606/model/AddCdnDomainResponse.h>
#include <tencentcloud/cdn/v20180606/model/CreateClsLogTopicRequest.h>
#include <tencentcloud/cdn/v20180606/model/CreateClsLogTopicResponse.h>
#include <tencentcloud/cdn/v20180606/model/CreateScdnFailedLogTaskRequest.h>
#include <tencentcloud/cdn/v20180606/model/CreateScdnFailedLogTaskResponse.h>
#include <tencentcloud/cdn/v20180606/model/DeleteCdnDomainRequest.h>
#include <tencentcloud/cdn/v20180606/model/DeleteCdnDomainResponse.h>
#include <tencentcloud/cdn/v20180606/model/DeleteClsLogTopicRequest.h>
#include <tencentcloud/cdn/v20180606/model/DeleteClsLogTopicResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeBillingDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeBillingDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnDomainLogsRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnDomainLogsResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnIpRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnIpResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnOriginIpRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnOriginIpResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCertDomainsRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCertDomainsResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeDomainsRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeDomainsResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeDomainsConfigRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeDomainsConfigResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeIpStatusRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeIpStatusResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeIpVisitRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeIpVisitResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeMapInfoRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeMapInfoResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeOriginDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeOriginDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribePayTypeRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribePayTypeResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribePurgeQuotaRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribePurgeQuotaResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribePurgeTasksRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribePurgeTasksResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribePushQuotaRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribePushQuotaResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribePushTasksRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribePushTasksResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeReportDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeReportDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeUrlViolationsRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeUrlViolationsResponse.h>
#include <tencentcloud/cdn/v20180606/model/DisableCachesRequest.h>
#include <tencentcloud/cdn/v20180606/model/DisableCachesResponse.h>
#include <tencentcloud/cdn/v20180606/model/DisableClsLogTopicRequest.h>
#include <tencentcloud/cdn/v20180606/model/DisableClsLogTopicResponse.h>
#include <tencentcloud/cdn/v20180606/model/EnableCachesRequest.h>
#include <tencentcloud/cdn/v20180606/model/EnableCachesResponse.h>
#include <tencentcloud/cdn/v20180606/model/EnableClsLogTopicRequest.h>
#include <tencentcloud/cdn/v20180606/model/EnableClsLogTopicResponse.h>
#include <tencentcloud/cdn/v20180606/model/GetDisableRecordsRequest.h>
#include <tencentcloud/cdn/v20180606/model/GetDisableRecordsResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListClsLogTopicsRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListClsLogTopicsResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListClsTopicDomainsRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListClsTopicDomainsResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListTopDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListTopDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/ManageClsTopicDomainsRequest.h>
#include <tencentcloud/cdn/v20180606/model/ManageClsTopicDomainsResponse.h>
#include <tencentcloud/cdn/v20180606/model/PurgePathCacheRequest.h>
#include <tencentcloud/cdn/v20180606/model/PurgePathCacheResponse.h>
#include <tencentcloud/cdn/v20180606/model/PurgeUrlsCacheRequest.h>
#include <tencentcloud/cdn/v20180606/model/PurgeUrlsCacheResponse.h>
#include <tencentcloud/cdn/v20180606/model/PushUrlsCacheRequest.h>
#include <tencentcloud/cdn/v20180606/model/PushUrlsCacheResponse.h>
#include <tencentcloud/cdn/v20180606/model/SearchClsLogRequest.h>
#include <tencentcloud/cdn/v20180606/model/SearchClsLogResponse.h>
#include <tencentcloud/cdn/v20180606/model/StartCdnDomainRequest.h>
#include <tencentcloud/cdn/v20180606/model/StartCdnDomainResponse.h>
#include <tencentcloud/cdn/v20180606/model/StopCdnDomainRequest.h>
#include <tencentcloud/cdn/v20180606/model/StopCdnDomainResponse.h>
#include <tencentcloud/cdn/v20180606/model/UpdateDomainConfigRequest.h>
#include <tencentcloud/cdn/v20180606/model/UpdateDomainConfigResponse.h>
#include <tencentcloud/cdn/v20180606/model/UpdatePayTypeRequest.h>
#include <tencentcloud/cdn/v20180606/model/UpdatePayTypeResponse.h>
#include <tencentcloud/cdn/v20180606/model/UpdateScdnDomainRequest.h>
#include <tencentcloud/cdn/v20180606/model/UpdateScdnDomainResponse.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            class CdnClient : public AbstractClient
            {
            public:
                CdnClient(const Credential &credential, const std::string &region);
                CdnClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddCLSTopicDomainsResponse> AddCLSTopicDomainsOutcome;
                typedef std::future<AddCLSTopicDomainsOutcome> AddCLSTopicDomainsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::AddCLSTopicDomainsRequest&, AddCLSTopicDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCLSTopicDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::AddCdnDomainResponse> AddCdnDomainOutcome;
                typedef std::future<AddCdnDomainOutcome> AddCdnDomainOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::AddCdnDomainRequest&, AddCdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCdnDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClsLogTopicResponse> CreateClsLogTopicOutcome;
                typedef std::future<CreateClsLogTopicOutcome> CreateClsLogTopicOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::CreateClsLogTopicRequest&, CreateClsLogTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClsLogTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScdnFailedLogTaskResponse> CreateScdnFailedLogTaskOutcome;
                typedef std::future<CreateScdnFailedLogTaskOutcome> CreateScdnFailedLogTaskOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::CreateScdnFailedLogTaskRequest&, CreateScdnFailedLogTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScdnFailedLogTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCdnDomainResponse> DeleteCdnDomainOutcome;
                typedef std::future<DeleteCdnDomainOutcome> DeleteCdnDomainOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DeleteCdnDomainRequest&, DeleteCdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCdnDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClsLogTopicResponse> DeleteClsLogTopicOutcome;
                typedef std::future<DeleteClsLogTopicOutcome> DeleteClsLogTopicOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DeleteClsLogTopicRequest&, DeleteClsLogTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClsLogTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillingDataResponse> DescribeBillingDataOutcome;
                typedef std::future<DescribeBillingDataOutcome> DescribeBillingDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeBillingDataRequest&, DescribeBillingDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillingDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCdnDataResponse> DescribeCdnDataOutcome;
                typedef std::future<DescribeCdnDataOutcome> DescribeCdnDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCdnDataRequest&, DescribeCdnDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCdnDomainLogsResponse> DescribeCdnDomainLogsOutcome;
                typedef std::future<DescribeCdnDomainLogsOutcome> DescribeCdnDomainLogsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCdnDomainLogsRequest&, DescribeCdnDomainLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDomainLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCdnIpResponse> DescribeCdnIpOutcome;
                typedef std::future<DescribeCdnIpOutcome> DescribeCdnIpOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCdnIpRequest&, DescribeCdnIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnIpAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCdnOriginIpResponse> DescribeCdnOriginIpOutcome;
                typedef std::future<DescribeCdnOriginIpOutcome> DescribeCdnOriginIpOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCdnOriginIpRequest&, DescribeCdnOriginIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnOriginIpAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertDomainsResponse> DescribeCertDomainsOutcome;
                typedef std::future<DescribeCertDomainsOutcome> DescribeCertDomainsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCertDomainsRequest&, DescribeCertDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainsResponse> DescribeDomainsOutcome;
                typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeDomainsRequest&, DescribeDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainsConfigResponse> DescribeDomainsConfigOutcome;
                typedef std::future<DescribeDomainsConfigOutcome> DescribeDomainsConfigOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeDomainsConfigRequest&, DescribeDomainsConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpStatusResponse> DescribeIpStatusOutcome;
                typedef std::future<DescribeIpStatusOutcome> DescribeIpStatusOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeIpStatusRequest&, DescribeIpStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpVisitResponse> DescribeIpVisitOutcome;
                typedef std::future<DescribeIpVisitOutcome> DescribeIpVisitOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeIpVisitRequest&, DescribeIpVisitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpVisitAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMapInfoResponse> DescribeMapInfoOutcome;
                typedef std::future<DescribeMapInfoOutcome> DescribeMapInfoOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeMapInfoRequest&, DescribeMapInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMapInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOriginDataResponse> DescribeOriginDataOutcome;
                typedef std::future<DescribeOriginDataOutcome> DescribeOriginDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeOriginDataRequest&, DescribeOriginDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOriginDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePayTypeResponse> DescribePayTypeOutcome;
                typedef std::future<DescribePayTypeOutcome> DescribePayTypeOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribePayTypeRequest&, DescribePayTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePayTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePurgeQuotaResponse> DescribePurgeQuotaOutcome;
                typedef std::future<DescribePurgeQuotaOutcome> DescribePurgeQuotaOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribePurgeQuotaRequest&, DescribePurgeQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePurgeTasksResponse> DescribePurgeTasksOutcome;
                typedef std::future<DescribePurgeTasksOutcome> DescribePurgeTasksOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribePurgeTasksRequest&, DescribePurgeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePushQuotaResponse> DescribePushQuotaOutcome;
                typedef std::future<DescribePushQuotaOutcome> DescribePushQuotaOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribePushQuotaRequest&, DescribePushQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePushQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePushTasksResponse> DescribePushTasksOutcome;
                typedef std::future<DescribePushTasksOutcome> DescribePushTasksOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribePushTasksRequest&, DescribePushTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePushTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReportDataResponse> DescribeReportDataOutcome;
                typedef std::future<DescribeReportDataOutcome> DescribeReportDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeReportDataRequest&, DescribeReportDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReportDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUrlViolationsResponse> DescribeUrlViolationsOutcome;
                typedef std::future<DescribeUrlViolationsOutcome> DescribeUrlViolationsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeUrlViolationsRequest&, DescribeUrlViolationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUrlViolationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableCachesResponse> DisableCachesOutcome;
                typedef std::future<DisableCachesOutcome> DisableCachesOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DisableCachesRequest&, DisableCachesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableCachesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableClsLogTopicResponse> DisableClsLogTopicOutcome;
                typedef std::future<DisableClsLogTopicOutcome> DisableClsLogTopicOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DisableClsLogTopicRequest&, DisableClsLogTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableClsLogTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableCachesResponse> EnableCachesOutcome;
                typedef std::future<EnableCachesOutcome> EnableCachesOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::EnableCachesRequest&, EnableCachesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableCachesAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableClsLogTopicResponse> EnableClsLogTopicOutcome;
                typedef std::future<EnableClsLogTopicOutcome> EnableClsLogTopicOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::EnableClsLogTopicRequest&, EnableClsLogTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableClsLogTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDisableRecordsResponse> GetDisableRecordsOutcome;
                typedef std::future<GetDisableRecordsOutcome> GetDisableRecordsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::GetDisableRecordsRequest&, GetDisableRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDisableRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListClsLogTopicsResponse> ListClsLogTopicsOutcome;
                typedef std::future<ListClsLogTopicsOutcome> ListClsLogTopicsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListClsLogTopicsRequest&, ListClsLogTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListClsLogTopicsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListClsTopicDomainsResponse> ListClsTopicDomainsOutcome;
                typedef std::future<ListClsTopicDomainsOutcome> ListClsTopicDomainsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListClsTopicDomainsRequest&, ListClsTopicDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListClsTopicDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTopDataResponse> ListTopDataOutcome;
                typedef std::future<ListTopDataOutcome> ListTopDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListTopDataRequest&, ListTopDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTopDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ManageClsTopicDomainsResponse> ManageClsTopicDomainsOutcome;
                typedef std::future<ManageClsTopicDomainsOutcome> ManageClsTopicDomainsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ManageClsTopicDomainsRequest&, ManageClsTopicDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageClsTopicDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::PurgePathCacheResponse> PurgePathCacheOutcome;
                typedef std::future<PurgePathCacheOutcome> PurgePathCacheOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::PurgePathCacheRequest&, PurgePathCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PurgePathCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::PurgeUrlsCacheResponse> PurgeUrlsCacheOutcome;
                typedef std::future<PurgeUrlsCacheOutcome> PurgeUrlsCacheOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::PurgeUrlsCacheRequest&, PurgeUrlsCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PurgeUrlsCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::PushUrlsCacheResponse> PushUrlsCacheOutcome;
                typedef std::future<PushUrlsCacheOutcome> PushUrlsCacheOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::PushUrlsCacheRequest&, PushUrlsCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PushUrlsCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchClsLogResponse> SearchClsLogOutcome;
                typedef std::future<SearchClsLogOutcome> SearchClsLogOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::SearchClsLogRequest&, SearchClsLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchClsLogAsyncHandler;
                typedef Outcome<Core::Error, Model::StartCdnDomainResponse> StartCdnDomainOutcome;
                typedef std::future<StartCdnDomainOutcome> StartCdnDomainOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::StartCdnDomainRequest&, StartCdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartCdnDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::StopCdnDomainResponse> StopCdnDomainOutcome;
                typedef std::future<StopCdnDomainOutcome> StopCdnDomainOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::StopCdnDomainRequest&, StopCdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopCdnDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDomainConfigResponse> UpdateDomainConfigOutcome;
                typedef std::future<UpdateDomainConfigOutcome> UpdateDomainConfigOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::UpdateDomainConfigRequest&, UpdateDomainConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDomainConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePayTypeResponse> UpdatePayTypeOutcome;
                typedef std::future<UpdatePayTypeOutcome> UpdatePayTypeOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::UpdatePayTypeRequest&, UpdatePayTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePayTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateScdnDomainResponse> UpdateScdnDomainOutcome;
                typedef std::future<UpdateScdnDomainOutcome> UpdateScdnDomainOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::UpdateScdnDomainRequest&, UpdateScdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateScdnDomainAsyncHandler;



                /**
                 *This API is used to add one or more domains to a specified log topic.
                 * @param req AddCLSTopicDomainsRequest
                 * @return AddCLSTopicDomainsOutcome
                 */
                AddCLSTopicDomainsOutcome AddCLSTopicDomains(const Model::AddCLSTopicDomainsRequest &request);
                void AddCLSTopicDomainsAsync(const Model::AddCLSTopicDomainsRequest& request, const AddCLSTopicDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCLSTopicDomainsOutcomeCallable AddCLSTopicDomainsCallable(const Model::AddCLSTopicDomainsRequest& request);

                /**
                 *This API is used to add a CDN acceleration domain name. Up to 100 domain names can be added per minute.
                 * @param req AddCdnDomainRequest
                 * @return AddCdnDomainOutcome
                 */
                AddCdnDomainOutcome AddCdnDomain(const Model::AddCdnDomainRequest &request);
                void AddCdnDomainAsync(const Model::AddCdnDomainRequest& request, const AddCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCdnDomainOutcomeCallable AddCdnDomainCallable(const Model::AddCdnDomainRequest& request);

                /**
                 *This API is used to create a log topic. Up to 10 log topics can be created under one logset.
                 * @param req CreateClsLogTopicRequest
                 * @return CreateClsLogTopicOutcome
                 */
                CreateClsLogTopicOutcome CreateClsLogTopic(const Model::CreateClsLogTopicRequest &request);
                void CreateClsLogTopicAsync(const Model::CreateClsLogTopicRequest& request, const CreateClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClsLogTopicOutcomeCallable CreateClsLogTopicCallable(const Model::CreateClsLogTopicRequest& request);

                /**
                 *This API is used to recreate a failed event log task.
                 * @param req CreateScdnFailedLogTaskRequest
                 * @return CreateScdnFailedLogTaskOutcome
                 */
                CreateScdnFailedLogTaskOutcome CreateScdnFailedLogTask(const Model::CreateScdnFailedLogTaskRequest &request);
                void CreateScdnFailedLogTaskAsync(const Model::CreateScdnFailedLogTaskRequest& request, const CreateScdnFailedLogTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScdnFailedLogTaskOutcomeCallable CreateScdnFailedLogTaskCallable(const Model::CreateScdnFailedLogTaskRequest& request);

                /**
                 *This API is used to delete a specified acceleration domain name.
                 * @param req DeleteCdnDomainRequest
                 * @return DeleteCdnDomainOutcome
                 */
                DeleteCdnDomainOutcome DeleteCdnDomain(const Model::DeleteCdnDomainRequest &request);
                void DeleteCdnDomainAsync(const Model::DeleteCdnDomainRequest& request, const DeleteCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCdnDomainOutcomeCallable DeleteCdnDomainCallable(const Model::DeleteCdnDomainRequest& request);

                /**
                 *This API is used to delete a log topic. Note: when a log topic is deleted, all logs of the domain names bound to it will no longer be published to the topic, and the logs previously published to the topic will be deleted. This action will take effect within 5–15 minutes.
                 * @param req DeleteClsLogTopicRequest
                 * @return DeleteClsLogTopicOutcome
                 */
                DeleteClsLogTopicOutcome DeleteClsLogTopic(const Model::DeleteClsLogTopicRequest &request);
                void DeleteClsLogTopicAsync(const Model::DeleteClsLogTopicRequest& request, const DeleteClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClsLogTopicOutcomeCallable DeleteClsLogTopicCallable(const Model::DeleteClsLogTopicRequest& request);

                /**
                 *This API is used to query billing data details.
                 * @param req DescribeBillingDataRequest
                 * @return DescribeBillingDataOutcome
                 */
                DescribeBillingDataOutcome DescribeBillingData(const Model::DescribeBillingDataRequest &request);
                void DescribeBillingDataAsync(const Model::DescribeBillingDataRequest& request, const DescribeBillingDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillingDataOutcomeCallable DescribeBillingDataCallable(const Model::DescribeBillingDataRequest& request);

                /**
                 *This API is used to query CDN real-time access monitoring data and supports the following metrics:

+ Traffic (in bytes)
+ Bandwidth (in bps)
+ Number of requests
+ Number of hit requests
+ Request hit rate (in %)
+ Hit traffic (in bytes)
+ Traffic hit rate (in %)
+ Aggregate list of 2xx status codes and the details of status codes starting with 2 (in entries)
+ Aggregate list of 3xx status codes and the details of status codes starting with 3 (in entries)
+ Aggregate list of 4xx status codes and the details of status codes starting with 4 (in entries)
+ Aggregate list of 5xx status codes and the details of status codes starting with 5 (in entries)
                 * @param req DescribeCdnDataRequest
                 * @return DescribeCdnDataOutcome
                 */
                DescribeCdnDataOutcome DescribeCdnData(const Model::DescribeCdnDataRequest &request);
                void DescribeCdnDataAsync(const Model::DescribeCdnDataRequest& request, const DescribeCdnDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdnDataOutcomeCallable DescribeCdnDataCallable(const Model::DescribeCdnDataRequest& request);

                /**
                 *This API is used to query the download link of an access log. You can use this API for access logs in the last 30 days either within or outside Mainland China.
                 * @param req DescribeCdnDomainLogsRequest
                 * @return DescribeCdnDomainLogsOutcome
                 */
                DescribeCdnDomainLogsOutcome DescribeCdnDomainLogs(const Model::DescribeCdnDomainLogsRequest &request);
                void DescribeCdnDomainLogsAsync(const Model::DescribeCdnDomainLogsRequest& request, const DescribeCdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdnDomainLogsOutcomeCallable DescribeCdnDomainLogsCallable(const Model::DescribeCdnDomainLogsRequest& request);

                /**
                 *This API is used to query CDN IP ownership.
                 * @param req DescribeCdnIpRequest
                 * @return DescribeCdnIpOutcome
                 */
                DescribeCdnIpOutcome DescribeCdnIp(const Model::DescribeCdnIpRequest &request);
                void DescribeCdnIpAsync(const Model::DescribeCdnIpRequest& request, const DescribeCdnIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdnIpOutcomeCallable DescribeCdnIpCallable(const Model::DescribeCdnIpRequest& request);

                /**
                 *This API is used to query the IP information of CDN intermediate nodes. Note: this API will be deactivated soon and no longer be maintained. Please call `DescribeIpStatus` instead.
                 * @param req DescribeCdnOriginIpRequest
                 * @return DescribeCdnOriginIpOutcome
                 */
                DescribeCdnOriginIpOutcome DescribeCdnOriginIp(const Model::DescribeCdnOriginIpRequest &request);
                void DescribeCdnOriginIpAsync(const Model::DescribeCdnOriginIpRequest& request, const DescribeCdnOriginIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdnOriginIpOutcomeCallable DescribeCdnOriginIpCallable(const Model::DescribeCdnOriginIpRequest& request);

                /**
                 *This API is used to verify a SSL certificate and obtain its domain names.
                 * @param req DescribeCertDomainsRequest
                 * @return DescribeCertDomainsOutcome
                 */
                DescribeCertDomainsOutcome DescribeCertDomains(const Model::DescribeCertDomainsRequest &request);
                void DescribeCertDomainsAsync(const Model::DescribeCertDomainsRequest& request, const DescribeCertDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertDomainsOutcomeCallable DescribeCertDomainsCallable(const Model::DescribeCertDomainsRequest& request);

                /**
                 *This API is used to query the basic configuration information of CDN acceleration domain names (inside and outside mainland China), including the project ID, service status, service type, creation time, and update time, etc.
                 * @param req DescribeDomainsRequest
                 * @return DescribeDomainsOutcome
                 */
                DescribeDomainsOutcome DescribeDomains(const Model::DescribeDomainsRequest &request);
                void DescribeDomainsAsync(const Model::DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainsOutcomeCallable DescribeDomainsCallable(const Model::DescribeDomainsRequest& request);

                /**
                 *This API is used to query the complete configuration information of CDN acceleration domain names (inside and outside mainland China).
                 * @param req DescribeDomainsConfigRequest
                 * @return DescribeDomainsConfigOutcome
                 */
                DescribeDomainsConfigOutcome DescribeDomainsConfig(const Model::DescribeDomainsConfigRequest &request);
                void DescribeDomainsConfigAsync(const Model::DescribeDomainsConfigRequest& request, const DescribeDomainsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainsConfigOutcomeCallable DescribeDomainsConfigCallable(const Model::DescribeDomainsConfigRequest& request);

                /**
                 *This API is used to query the IP details of edge nodes (available soon) and intermediate nodes. Note that there is a certain delay in data availability.

>? If you have migrated your ECDN service to CDN, you can use the <a href="https://intl.cloud.tencent.com/document/api/228/41954?from_cn_redirect=1">corresponding CDN API</a>.
                 * @param req DescribeIpStatusRequest
                 * @return DescribeIpStatusOutcome
                 */
                DescribeIpStatusOutcome DescribeIpStatus(const Model::DescribeIpStatusRequest &request);
                void DescribeIpStatusAsync(const Model::DescribeIpStatusRequest& request, const DescribeIpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpStatusOutcomeCallable DescribeIpStatusCallable(const Model::DescribeIpStatusRequest& request);

                /**
                 *This API (DescribeIpVisit) is used to query the number of users who remain active for 5 minutes and the detailed number of daily active users.

+ Number of users who remain active for 5 minutes: Collects deduplicated statistics based on client IP addresses in the log with the 5-minute granularity.
+ Number of daily active users: Collects deduplicated statistics based on client IP addresses in the log with the 1-day granularity.
                 * @param req DescribeIpVisitRequest
                 * @return DescribeIpVisitOutcome
                 */
                DescribeIpVisitOutcome DescribeIpVisit(const Model::DescribeIpVisitRequest &request);
                void DescribeIpVisitAsync(const Model::DescribeIpVisitRequest& request, const DescribeIpVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpVisitOutcomeCallable DescribeIpVisitCallable(const Model::DescribeIpVisitRequest& request);

                /**
                 *This API (DescribeMapInfo) is used to query the IDs of districts or ISPs.
                 * @param req DescribeMapInfoRequest
                 * @return DescribeMapInfoOutcome
                 */
                DescribeMapInfoOutcome DescribeMapInfo(const Model::DescribeMapInfoRequest &request);
                void DescribeMapInfoAsync(const Model::DescribeMapInfoRequest& request, const DescribeMapInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMapInfoOutcomeCallable DescribeMapInfoCallable(const Model::DescribeMapInfoRequest& request);

                /**
                 *This API is used to query CDN real-time origin-pull monitoring data and supports the following metrics:

+ Origin-pull traffic (in bytes)
+ Origin-pull bandwidth (in bps)
+ Number of origin-pull requests
+ Number of failed origin-pull requests
+ Origin-pull failure rate (in % with two decimal digits)
+ Aggregate list of 2xx origin-pull status codes and the details of origin-pull status codes starting with 2 (in entries)
+ Aggregate list of 3xx origin-pull status codes and the details of origin-pull status codes starting with 3 (in entries)
+ Aggregate list of 4xx origin-pull status codes and the details of origin-pull status codes starting with 4 (in entries)
+ Aggregate list of 5xx origin-pull status codes and the details of origin-pull status codes starting with 5 (in entries)
                 * @param req DescribeOriginDataRequest
                 * @return DescribeOriginDataOutcome
                 */
                DescribeOriginDataOutcome DescribeOriginData(const Model::DescribeOriginDataRequest &request);
                void DescribeOriginDataAsync(const Model::DescribeOriginDataRequest& request, const DescribeOriginDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOriginDataOutcomeCallable DescribeOriginDataCallable(const Model::DescribeOriginDataRequest& request);

                /**
                 *This API (DescribePayType) is used to query billing information of the current account, such as billing mode and billing cycle.
                 * @param req DescribePayTypeRequest
                 * @return DescribePayTypeOutcome
                 */
                DescribePayTypeOutcome DescribePayType(const Model::DescribePayTypeRequest &request);
                void DescribePayTypeAsync(const Model::DescribePayTypeRequest& request, const DescribePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePayTypeOutcomeCallable DescribePayTypeCallable(const Model::DescribePayTypeRequest& request);

                /**
                 *This API is used to query the purge usage quota and daily available usage for an account.
                 * @param req DescribePurgeQuotaRequest
                 * @return DescribePurgeQuotaOutcome
                 */
                DescribePurgeQuotaOutcome DescribePurgeQuota(const Model::DescribePurgeQuotaRequest &request);
                void DescribePurgeQuotaAsync(const Model::DescribePurgeQuotaRequest& request, const DescribePurgeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurgeQuotaOutcomeCallable DescribePurgeQuotaCallable(const Model::DescribePurgeQuotaRequest& request);

                /**
                 *This API is used to query the record and progress of URL or directory purge tasks submitted via the `PurgePathCache` or `PurgeUrlsCache` APIs.
                 * @param req DescribePurgeTasksRequest
                 * @return DescribePurgeTasksOutcome
                 */
                DescribePurgeTasksOutcome DescribePurgeTasks(const Model::DescribePurgeTasksRequest &request);
                void DescribePurgeTasksAsync(const Model::DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurgeTasksOutcomeCallable DescribePurgeTasksCallable(const Model::DescribePurgeTasksRequest& request);

                /**
                 *This API is used to query the prefetch quota and daily available usage.
                 * @param req DescribePushQuotaRequest
                 * @return DescribePushQuotaOutcome
                 */
                DescribePushQuotaOutcome DescribePushQuota(const Model::DescribePushQuotaRequest &request);
                void DescribePushQuotaAsync(const Model::DescribePushQuotaRequest& request, const DescribePushQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePushQuotaOutcomeCallable DescribePushQuotaCallable(const Model::DescribePushQuotaRequest& request);

                /**
                 *This API is used to query the submission record and progress of prefetch tasks.
                 * @param req DescribePushTasksRequest
                 * @return DescribePushTasksOutcome
                 */
                DescribePushTasksOutcome DescribePushTasks(const Model::DescribePushTasksRequest &request);
                void DescribePushTasksAsync(const Model::DescribePushTasksRequest& request, const DescribePushTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePushTasksOutcomeCallable DescribePushTasksCallable(const Model::DescribePushTasksRequest& request);

                /**
                 *This API is used to query the daily/weekly/monthly report data at domain name/project levels.
                 * @param req DescribeReportDataRequest
                 * @return DescribeReportDataOutcome
                 */
                DescribeReportDataOutcome DescribeReportData(const Model::DescribeReportDataRequest &request);
                void DescribeReportDataAsync(const Model::DescribeReportDataRequest& request, const DescribeReportDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReportDataOutcomeCallable DescribeReportDataCallable(const Model::DescribeReportDataRequest& request);

                /**
                 *This API is used to query the list of domain name URLs containing regulation-violating content scanned and detected by the CDN system, and the current status of the URLs.
It corresponds to the **Pornography Detection** page on the CDN Console.
                 * @param req DescribeUrlViolationsRequest
                 * @return DescribeUrlViolationsOutcome
                 */
                DescribeUrlViolationsOutcome DescribeUrlViolations(const Model::DescribeUrlViolationsRequest &request);
                void DescribeUrlViolationsAsync(const Model::DescribeUrlViolationsRequest& request, const DescribeUrlViolationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUrlViolationsOutcomeCallable DescribeUrlViolationsCallable(const Model::DescribeUrlViolationsRequest& request);

                /**
                 *This API is used to block access to a specific URL on CDN. When a URL is blocked, error 403 will be returned for requests from the Chinese mainland. URL blocking is not permanent. Note that this API is only available to beta users now. 
                 * @param req DisableCachesRequest
                 * @return DisableCachesOutcome
                 */
                DisableCachesOutcome DisableCaches(const Model::DisableCachesRequest &request);
                void DisableCachesAsync(const Model::DisableCachesRequest& request, const DisableCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableCachesOutcomeCallable DisableCachesCallable(const Model::DisableCachesRequest& request);

                /**
                 *This API is used to stop publishing to a log topic. Note: after a log topic is disabled, all logs of the domain names bound to it will no longer be published to the topic, and the logs that have already been published will be retained. This action will take effect within 5–15 minutes.

                 * @param req DisableClsLogTopicRequest
                 * @return DisableClsLogTopicOutcome
                 */
                DisableClsLogTopicOutcome DisableClsLogTopic(const Model::DisableClsLogTopicRequest &request);
                void DisableClsLogTopicAsync(const Model::DisableClsLogTopicRequest& request, const DisableClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableClsLogTopicOutcomeCallable DisableClsLogTopicCallable(const Model::DisableClsLogTopicRequest& request);

                /**
                 *This API (EnableCaches) is used to unblock manually blocked URLs. After a URL is successfully unblocked, it takes about 5 to 10 minutes to take effect across the entire network. (This API is during beta test and not fully available now.)
                 * @param req EnableCachesRequest
                 * @return EnableCachesOutcome
                 */
                EnableCachesOutcome EnableCaches(const Model::EnableCachesRequest &request);
                void EnableCachesAsync(const Model::EnableCachesRequest& request, const EnableCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableCachesOutcomeCallable EnableCachesCallable(const Model::EnableCachesRequest& request);

                /**
                 *This API is used to start publishing to a log topic. Note: after a log topic is enabled, all logs of the domain names bound to the topic will be published to it. This action will take effect within 5–15 minutes.
                 * @param req EnableClsLogTopicRequest
                 * @return EnableClsLogTopicOutcome
                 */
                EnableClsLogTopicOutcome EnableClsLogTopic(const Model::EnableClsLogTopicRequest &request);
                void EnableClsLogTopicAsync(const Model::EnableClsLogTopicRequest& request, const EnableClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableClsLogTopicOutcomeCallable EnableClsLogTopicCallable(const Model::EnableClsLogTopicRequest& request);

                /**
                 *This API is used to query the resource blocking history and the current URL status. (This API is in beta test and not generally available yet.)
                 * @param req GetDisableRecordsRequest
                 * @return GetDisableRecordsOutcome
                 */
                GetDisableRecordsOutcome GetDisableRecords(const Model::GetDisableRecordsRequest &request);
                void GetDisableRecordsAsync(const Model::GetDisableRecordsRequest& request, const GetDisableRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDisableRecordsOutcomeCallable GetDisableRecordsCallable(const Model::GetDisableRecordsRequest& request);

                /**
                 *This API is used to display the list of log topics. Note: a logset can contain up to 10 log topics.
                 * @param req ListClsLogTopicsRequest
                 * @return ListClsLogTopicsOutcome
                 */
                ListClsLogTopicsOutcome ListClsLogTopics(const Model::ListClsLogTopicsRequest &request);
                void ListClsLogTopicsAsync(const Model::ListClsLogTopicsRequest& request, const ListClsLogTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListClsLogTopicsOutcomeCallable ListClsLogTopicsCallable(const Model::ListClsLogTopicsRequest& request);

                /**
                 *This API is used to get the list of domain names bound to a log topic.
                 * @param req ListClsTopicDomainsRequest
                 * @return ListClsTopicDomainsOutcome
                 */
                ListClsTopicDomainsOutcome ListClsTopicDomains(const Model::ListClsTopicDomainsRequest &request);
                void ListClsTopicDomainsAsync(const Model::ListClsTopicDomainsRequest& request, const ListClsTopicDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListClsTopicDomainsOutcomeCallable ListClsTopicDomainsCallable(const Model::ListClsTopicDomainsRequest& request);

                /**
                 *This API is used to list data sorted the following ways by using different combinations of the Metric and Filter input parameters:

+ It sorts access URLs by total traffic and total requests, and returns the top 1,000 URLs in descending order.
+ It sorts client districts by total traffic and total requests, and returns the list of districts in descending order.
+ It sorts client ISPs by total traffic and total requests, and returns the list of ISPs in descending order.
+ It sorts domain names by total traffic, peak bandwidth, total requests, average hit rate, and 2XX/3XX/4XX/5XX status codes, and returns the list of domain names in descending order.
+ It sorts domain names by total origin-pull traffic, peak origin-pull bandwidth, total origin-pull requests, average origin-pull failure rate, and 2XX/3XX/4XX/5XX origin-pull status codes, and returns the list of domain names in descending order.

Note: only data from the last 90 days will be queried.
                 * @param req ListTopDataRequest
                 * @return ListTopDataOutcome
                 */
                ListTopDataOutcome ListTopData(const Model::ListTopDataRequest &request);
                void ListTopDataAsync(const Model::ListTopDataRequest& request, const ListTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTopDataOutcomeCallable ListTopDataCallable(const Model::ListTopDataRequest& request);

                /**
                 *This API is used to manage the list of domain names bound to a log topic.
                 * @param req ManageClsTopicDomainsRequest
                 * @return ManageClsTopicDomainsOutcome
                 */
                ManageClsTopicDomainsOutcome ManageClsTopicDomains(const Model::ManageClsTopicDomainsRequest &request);
                void ManageClsTopicDomainsAsync(const Model::ManageClsTopicDomainsRequest& request, const ManageClsTopicDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageClsTopicDomainsOutcomeCallable ManageClsTopicDomainsCallable(const Model::ManageClsTopicDomainsRequest& request);

                /**
                 *This API is used to submit multiple directory purge tasks, which are carried out according to the acceleration region of the domain names.
By default, a maximum of 100 directories can be purged per day for acceleration regions either within or outside the Chinese mainland, and up to 500 tasks can be submitted at a time.
                 * @param req PurgePathCacheRequest
                 * @return PurgePathCacheOutcome
                 */
                PurgePathCacheOutcome PurgePathCache(const Model::PurgePathCacheRequest &request);
                void PurgePathCacheAsync(const Model::PurgePathCacheRequest& request, const PurgePathCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PurgePathCacheOutcomeCallable PurgePathCacheCallable(const Model::PurgePathCacheRequest& request);

                /**
                 *This API is used to submit multiple URL purge tasks, which are carried out according to the current acceleration region of the domain names in the URLs.
By default, a maximum of 10,000 URLs can be purged per day for acceleration regions either within or outside Mainland China, and up to 1,000 tasks can be submitted at a time.
                 * @param req PurgeUrlsCacheRequest
                 * @return PurgeUrlsCacheOutcome
                 */
                PurgeUrlsCacheOutcome PurgeUrlsCache(const Model::PurgeUrlsCacheRequest &request);
                void PurgeUrlsCacheAsync(const Model::PurgeUrlsCacheRequest& request, const PurgeUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PurgeUrlsCacheOutcomeCallable PurgeUrlsCacheCallable(const Model::PurgeUrlsCacheRequest& request);

                /**
                 *This API is used to cache specified URL resources to CDN nodes. You can specify acceleration regions for the prefetch.
By default, a maximum of 1000 URLs can be prefetched per day for regions either within or outside the Chinese mainland, and up to 500 tasks can be submitted at a time. Note that resources prefetched outside the Chinese mainland will be cached to CDN nodes outside the Chinese mainland and the traffic generated will incur costs.
                 * @param req PushUrlsCacheRequest
                 * @return PushUrlsCacheOutcome
                 */
                PushUrlsCacheOutcome PushUrlsCache(const Model::PushUrlsCacheRequest &request);
                void PushUrlsCacheAsync(const Model::PushUrlsCacheRequest& request, const PushUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PushUrlsCacheOutcomeCallable PushUrlsCacheCallable(const Model::PushUrlsCacheRequest& request);

                /**
                 *This API is used to search for CLS logs. Search filters can be set to today, 24 hours (one of the last 7 days), and the last 7 days.
                 * @param req SearchClsLogRequest
                 * @return SearchClsLogOutcome
                 */
                SearchClsLogOutcome SearchClsLog(const Model::SearchClsLogRequest &request);
                void SearchClsLogAsync(const Model::SearchClsLogRequest& request, const SearchClsLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchClsLogOutcomeCallable SearchClsLogCallable(const Model::SearchClsLogRequest& request);

                /**
                 *This API is used to enable the acceleration service for a disabled domain name.
                 * @param req StartCdnDomainRequest
                 * @return StartCdnDomainOutcome
                 */
                StartCdnDomainOutcome StartCdnDomain(const Model::StartCdnDomainRequest &request);
                void StartCdnDomainAsync(const Model::StartCdnDomainRequest& request, const StartCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartCdnDomainOutcomeCallable StartCdnDomainCallable(const Model::StartCdnDomainRequest& request);

                /**
                 *This API is used to suspend the acceleration service for a domain name.
Note: after the acceleration service has been suspended, requests to the cache node will return a 404 error. In order to avoid impact to your business, please move the domain name to another service before suspending the acceleration service.
                 * @param req StopCdnDomainRequest
                 * @return StopCdnDomainOutcome
                 */
                StopCdnDomainOutcome StopCdnDomain(const Model::StopCdnDomainRequest &request);
                void StopCdnDomainAsync(const Model::StopCdnDomainRequest& request, const StopCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopCdnDomainOutcomeCallable StopCdnDomainCallable(const Model::StopCdnDomainRequest& request);

                /**
                 *This API is used to modify the configuration of CDN acceleration domain names.
Note: if you need to update complex configuration items, you must pass all the attributes of the entire object. The default value will be used for attributes that are not passed. We recommend calling the querying API to obtain the configuration attributes first. You can then modify and pass the attributes to the API. The certificate and key fields do not need to be passed for HTTPS configuration.
                 * @param req UpdateDomainConfigRequest
                 * @return UpdateDomainConfigOutcome
                 */
                UpdateDomainConfigOutcome UpdateDomainConfig(const Model::UpdateDomainConfigRequest &request);
                void UpdateDomainConfigAsync(const Model::UpdateDomainConfigRequest& request, const UpdateDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDomainConfigOutcomeCallable UpdateDomainConfigCallable(const Model::UpdateDomainConfigRequest& request);

                /**
                 *This API is used to modify the billing mode of an account. At present, the billing mode of accounts on a monthly billing cycle and sub-accounts cannot be modified.
                 * @param req UpdatePayTypeRequest
                 * @return UpdatePayTypeOutcome
                 */
                UpdatePayTypeOutcome UpdatePayType(const Model::UpdatePayTypeRequest &request);
                void UpdatePayTypeAsync(const Model::UpdatePayTypeRequest& request, const UpdatePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePayTypeOutcomeCallable UpdatePayTypeCallable(const Model::UpdatePayTypeRequest& request);

                /**
                 *This API is used to modify security configurations of SCDN acceleration domain names.
                 * @param req UpdateScdnDomainRequest
                 * @return UpdateScdnDomainOutcome
                 */
                UpdateScdnDomainOutcome UpdateScdnDomain(const Model::UpdateScdnDomainRequest &request);
                void UpdateScdnDomainAsync(const Model::UpdateScdnDomainRequest& request, const UpdateScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateScdnDomainOutcomeCallable UpdateScdnDomainCallable(const Model::UpdateScdnDomainRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_CDNCLIENT_H_
