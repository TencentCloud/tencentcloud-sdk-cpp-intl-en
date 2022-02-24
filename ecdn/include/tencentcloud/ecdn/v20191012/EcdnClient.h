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

#ifndef TENCENTCLOUD_ECDN_V20191012_ECDNCLIENT_H_
#define TENCENTCLOUD_ECDN_V20191012_ECDNCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ecdn/v20191012/model/AddEcdnDomainRequest.h>
#include <tencentcloud/ecdn/v20191012/model/AddEcdnDomainResponse.h>
#include <tencentcloud/ecdn/v20191012/model/DeleteEcdnDomainRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DeleteEcdnDomainResponse.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeDomainsRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeDomainsResponse.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeDomainsConfigRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeDomainsConfigResponse.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeEcdnDomainLogsRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeEcdnDomainLogsResponse.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeEcdnDomainStatisticsRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeEcdnDomainStatisticsResponse.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeEcdnStatisticsRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeEcdnStatisticsResponse.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeIpStatusRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeIpStatusResponse.h>
#include <tencentcloud/ecdn/v20191012/model/DescribePurgeQuotaRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DescribePurgeQuotaResponse.h>
#include <tencentcloud/ecdn/v20191012/model/DescribePurgeTasksRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DescribePurgeTasksResponse.h>
#include <tencentcloud/ecdn/v20191012/model/PurgePathCacheRequest.h>
#include <tencentcloud/ecdn/v20191012/model/PurgePathCacheResponse.h>
#include <tencentcloud/ecdn/v20191012/model/PurgeUrlsCacheRequest.h>
#include <tencentcloud/ecdn/v20191012/model/PurgeUrlsCacheResponse.h>
#include <tencentcloud/ecdn/v20191012/model/StartEcdnDomainRequest.h>
#include <tencentcloud/ecdn/v20191012/model/StartEcdnDomainResponse.h>
#include <tencentcloud/ecdn/v20191012/model/StopEcdnDomainRequest.h>
#include <tencentcloud/ecdn/v20191012/model/StopEcdnDomainResponse.h>
#include <tencentcloud/ecdn/v20191012/model/UpdateDomainConfigRequest.h>
#include <tencentcloud/ecdn/v20191012/model/UpdateDomainConfigResponse.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            class EcdnClient : public AbstractClient
            {
            public:
                EcdnClient(const Credential &credential, const std::string &region);
                EcdnClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddEcdnDomainResponse> AddEcdnDomainOutcome;
                typedef std::future<AddEcdnDomainOutcome> AddEcdnDomainOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::AddEcdnDomainRequest&, AddEcdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddEcdnDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEcdnDomainResponse> DeleteEcdnDomainOutcome;
                typedef std::future<DeleteEcdnDomainOutcome> DeleteEcdnDomainOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DeleteEcdnDomainRequest&, DeleteEcdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEcdnDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainsResponse> DescribeDomainsOutcome;
                typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribeDomainsRequest&, DescribeDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainsConfigResponse> DescribeDomainsConfigOutcome;
                typedef std::future<DescribeDomainsConfigOutcome> DescribeDomainsConfigOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribeDomainsConfigRequest&, DescribeDomainsConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEcdnDomainLogsResponse> DescribeEcdnDomainLogsOutcome;
                typedef std::future<DescribeEcdnDomainLogsOutcome> DescribeEcdnDomainLogsOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribeEcdnDomainLogsRequest&, DescribeEcdnDomainLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEcdnDomainLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEcdnDomainStatisticsResponse> DescribeEcdnDomainStatisticsOutcome;
                typedef std::future<DescribeEcdnDomainStatisticsOutcome> DescribeEcdnDomainStatisticsOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribeEcdnDomainStatisticsRequest&, DescribeEcdnDomainStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEcdnDomainStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEcdnStatisticsResponse> DescribeEcdnStatisticsOutcome;
                typedef std::future<DescribeEcdnStatisticsOutcome> DescribeEcdnStatisticsOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribeEcdnStatisticsRequest&, DescribeEcdnStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEcdnStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpStatusResponse> DescribeIpStatusOutcome;
                typedef std::future<DescribeIpStatusOutcome> DescribeIpStatusOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribeIpStatusRequest&, DescribeIpStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePurgeQuotaResponse> DescribePurgeQuotaOutcome;
                typedef std::future<DescribePurgeQuotaOutcome> DescribePurgeQuotaOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribePurgeQuotaRequest&, DescribePurgeQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePurgeTasksResponse> DescribePurgeTasksOutcome;
                typedef std::future<DescribePurgeTasksOutcome> DescribePurgeTasksOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribePurgeTasksRequest&, DescribePurgeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::PurgePathCacheResponse> PurgePathCacheOutcome;
                typedef std::future<PurgePathCacheOutcome> PurgePathCacheOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::PurgePathCacheRequest&, PurgePathCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PurgePathCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::PurgeUrlsCacheResponse> PurgeUrlsCacheOutcome;
                typedef std::future<PurgeUrlsCacheOutcome> PurgeUrlsCacheOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::PurgeUrlsCacheRequest&, PurgeUrlsCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PurgeUrlsCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::StartEcdnDomainResponse> StartEcdnDomainOutcome;
                typedef std::future<StartEcdnDomainOutcome> StartEcdnDomainOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::StartEcdnDomainRequest&, StartEcdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartEcdnDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::StopEcdnDomainResponse> StopEcdnDomainOutcome;
                typedef std::future<StopEcdnDomainOutcome> StopEcdnDomainOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::StopEcdnDomainRequest&, StopEcdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopEcdnDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDomainConfigResponse> UpdateDomainConfigOutcome;
                typedef std::future<UpdateDomainConfigOutcome> UpdateDomainConfigOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::UpdateDomainConfigRequest&, UpdateDomainConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDomainConfigAsyncHandler;



                /**
                 *This API is used to create an acceleration domain name.

>? If you have migrated your ECDN service to CDN, you can use the <a href="https://intl.cloud.tencent.com/document/api/228/41123?from_cn_redirect=1">corresponding CDN API</a>.
                 * @param req AddEcdnDomainRequest
                 * @return AddEcdnDomainOutcome
                 */
                AddEcdnDomainOutcome AddEcdnDomain(const Model::AddEcdnDomainRequest &request);
                void AddEcdnDomainAsync(const Model::AddEcdnDomainRequest& request, const AddEcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddEcdnDomainOutcomeCallable AddEcdnDomainCallable(const Model::AddEcdnDomainRequest& request);

                /**
                 *This API is used to delete a specified acceleration domain name. The acceleration domain name to be deleted must be in disabled status.

>? If you have migrated your ECDN service to CDN, you can use the <a href="https://intl.cloud.tencent.com/document/api/570/42471?from_cn_redirect=1">corresponding CDN API</a>.
                 * @param req DeleteEcdnDomainRequest
                 * @return DeleteEcdnDomainOutcome
                 */
                DeleteEcdnDomainOutcome DeleteEcdnDomain(const Model::DeleteEcdnDomainRequest &request);
                void DeleteEcdnDomainAsync(const Model::DeleteEcdnDomainRequest& request, const DeleteEcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEcdnDomainOutcomeCallable DeleteEcdnDomainCallable(const Model::DeleteEcdnDomainRequest& request);

                /**
                 *This API is used to query the basic information of a CDN domain name, including the project ID, status, business type, creation time, update time, etc.

>? If you have migrated your ECDN service to CDN, you can use the <a href="https://intl.cloud.tencent.com/document/api/228/41118?from_cn_redirect=1">corresponding CDN API</a>.
                 * @param req DescribeDomainsRequest
                 * @return DescribeDomainsOutcome
                 */
                DescribeDomainsOutcome DescribeDomains(const Model::DescribeDomainsRequest &request);
                void DescribeDomainsAsync(const Model::DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainsOutcomeCallable DescribeDomainsCallable(const Model::DescribeDomainsRequest& request);

                /**
                 *This API is used to query the detailed configuration information of a CDN acceleration domain name.

>? If you have migrated your ECDN service to CDN, you can use the <a href="https://intl.cloud.tencent.com/document/api/228/41117?from_cn_redirect=1">corresponding CDN API</a>.
                 * @param req DescribeDomainsConfigRequest
                 * @return DescribeDomainsConfigOutcome
                 */
                DescribeDomainsConfigOutcome DescribeDomainsConfig(const Model::DescribeDomainsConfigRequest &request);
                void DescribeDomainsConfigAsync(const Model::DescribeDomainsConfigRequest& request, const DescribeDomainsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainsConfigOutcomeCallable DescribeDomainsConfigCallable(const Model::DescribeDomainsConfigRequest& request);

                /**
                 *This API is used to query the access log download link of a domain name.
                 * @param req DescribeEcdnDomainLogsRequest
                 * @return DescribeEcdnDomainLogsOutcome
                 */
                DescribeEcdnDomainLogsOutcome DescribeEcdnDomainLogs(const Model::DescribeEcdnDomainLogsRequest &request);
                void DescribeEcdnDomainLogsAsync(const Model::DescribeEcdnDomainLogsRequest& request, const DescribeEcdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEcdnDomainLogsOutcomeCallable DescribeEcdnDomainLogsCallable(const Model::DescribeEcdnDomainLogsRequest& request);

                /**
                 *This API is used to query the statistical metrics of domain name access within a specified time period.
                 * @param req DescribeEcdnDomainStatisticsRequest
                 * @return DescribeEcdnDomainStatisticsOutcome
                 */
                DescribeEcdnDomainStatisticsOutcome DescribeEcdnDomainStatistics(const Model::DescribeEcdnDomainStatisticsRequest &request);
                void DescribeEcdnDomainStatisticsAsync(const Model::DescribeEcdnDomainStatisticsRequest& request, const DescribeEcdnDomainStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEcdnDomainStatisticsOutcomeCallable DescribeEcdnDomainStatisticsCallable(const Model::DescribeEcdnDomainStatisticsRequest& request);

                /**
                 *This API is used to query ECDN real-time access monitoring data and supports the following metrics:

+ Traffic (in bytes)
+ Bandwidth (in bps)
+ Number of requests
+ Number of 2xx status codes and details of status codes starting with 2
+ Number of 3xx status codes and details of status codes starting with 3
+ Number of 4xx status codes and details of status codes starting with 4
+ Number of 5xx status codes and details of status codes starting with 5
                 * @param req DescribeEcdnStatisticsRequest
                 * @return DescribeEcdnStatisticsOutcome
                 */
                DescribeEcdnStatisticsOutcome DescribeEcdnStatistics(const Model::DescribeEcdnStatisticsRequest &request);
                void DescribeEcdnStatisticsAsync(const Model::DescribeEcdnStatisticsRequest& request, const DescribeEcdnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEcdnStatisticsOutcomeCallable DescribeEcdnStatisticsCallable(const Model::DescribeEcdnStatisticsRequest& request);

                /**
                 *This API is used to query ECDN node IPs. This API is only available to beta users. Please submit a ticket to use it.

If you need to add the node IPs to your origin allowlist, keep querying the updating the IPs regularly to ensure the success of origin forwarding. 
                 * @param req DescribeIpStatusRequest
                 * @return DescribeIpStatusOutcome
                 */
                DescribeIpStatusOutcome DescribeIpStatus(const Model::DescribeIpStatusRequest &request);
                void DescribeIpStatusAsync(const Model::DescribeIpStatusRequest& request, const DescribeIpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpStatusOutcomeCallable DescribeIpStatusCallable(const Model::DescribeIpStatusRequest& request);

                /**
                 *This API is used to query the usage quota of the purge API.

>? If you have migrated your ECDN service to CDN, you can use the <a href="https://intl.cloud.tencent.com/document/api/228/41956?from_cn_redirect=1">corresponding CDN API</a>.
                 * @param req DescribePurgeQuotaRequest
                 * @return DescribePurgeQuotaOutcome
                 */
                DescribePurgeQuotaOutcome DescribePurgeQuota(const Model::DescribePurgeQuotaRequest &request);
                void DescribePurgeQuotaAsync(const Model::DescribePurgeQuotaRequest& request, const DescribePurgeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurgeQuotaOutcomeCallable DescribePurgeQuotaCallable(const Model::DescribePurgeQuotaRequest& request);

                /**
                 *This API is used to query the submission record and progress of purge tasks.

>? If you have migrated your ECDN service to CDN, you can use the <a href="https://intl.cloud.tencent.com/document/api/228/37873?from_cn_redirect=1">corresponding CDN API</a>.
                 * @param req DescribePurgeTasksRequest
                 * @return DescribePurgeTasksOutcome
                 */
                DescribePurgeTasksOutcome DescribePurgeTasks(const Model::DescribePurgeTasksRequest &request);
                void DescribePurgeTasksAsync(const Model::DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurgeTasksOutcomeCallable DescribePurgeTasksCallable(const Model::DescribePurgeTasksRequest& request);

                /**
                 *This API is used to purge cache directories in batches. One purge task ID will be returned for each submission.

>? If you have migrated your ECDN service to CDN, you can use the <a href="https://intl.cloud.tencent.com/document/api/570/42475?from_cn_redirect=1">corresponding CDN API</a>.
                 * @param req PurgePathCacheRequest
                 * @return PurgePathCacheOutcome
                 */
                PurgePathCacheOutcome PurgePathCache(const Model::PurgePathCacheRequest &request);
                void PurgePathCacheAsync(const Model::PurgePathCacheRequest& request, const PurgePathCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PurgePathCacheOutcomeCallable PurgePathCacheCallable(const Model::PurgePathCacheRequest& request);

                /**
                 *This API is used to batch purge URLs. One purge task ID will be returned for each submission.

>? If you have migrated your ECDN service to CDN, you can use the <a href="https://intl.cloud.tencent.com/document/api/228/37870?from_cn_redirect=1">corresponding CDN API</a>.
                 * @param req PurgeUrlsCacheRequest
                 * @return PurgeUrlsCacheOutcome
                 */
                PurgeUrlsCacheOutcome PurgeUrlsCache(const Model::PurgeUrlsCacheRequest &request);
                void PurgeUrlsCacheAsync(const Model::PurgeUrlsCacheRequest& request, const PurgeUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PurgeUrlsCacheOutcomeCallable PurgeUrlsCacheCallable(const Model::PurgeUrlsCacheRequest& request);

                /**
                 *This API is used to enable an acceleration domain name. The domain name to be enabled must be in deactivated status.

>? If you have migrated your ECDN service to CDN, you can use the <a href="https://intl.cloud.tencent.com/document/product/228/41121?from_cn_redirect=1">corresponding CDN API</a>.
                 * @param req StartEcdnDomainRequest
                 * @return StartEcdnDomainOutcome
                 */
                StartEcdnDomainOutcome StartEcdnDomain(const Model::StartEcdnDomainRequest &request);
                void StartEcdnDomainAsync(const Model::StartEcdnDomainRequest& request, const StartEcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartEcdnDomainOutcomeCallable StartEcdnDomainCallable(const Model::StartEcdnDomainRequest& request);

                /**
                 *This API is used to disable an acceleration domain name. The domain name to be disabled must be in enabled or deploying status.

>? If you have migrated your ECDN service to CDN, you can use the <a href="https://intl.cloud.tencent.com/document/product/228/41120?from_cn_redirect=1">corresponding CDN API</a>.
                 * @param req StopEcdnDomainRequest
                 * @return StopEcdnDomainOutcome
                 */
                StopEcdnDomainOutcome StopEcdnDomain(const Model::StopEcdnDomainRequest &request);
                void StopEcdnDomainAsync(const Model::StopEcdnDomainRequest& request, const StopEcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopEcdnDomainOutcomeCallable StopEcdnDomainCallable(const Model::StopEcdnDomainRequest& request);

                /**
                 *This API is used to update the configuration information of an ECDN acceleration domain name.
Note: if you need to update complex configuration items, you must pass all the attributes of the entire object. The default value will be used for attributes that are not passed. We recommend calling the querying API to obtain the configuration attributes first. You can then modify and pass the attributes to the API. The certificate and key fields do not need to be passed for HTTPS configuration.

>?  If your application has been migrated to Tencent Cloud CDN, you can use <a href="https://intl.cloud.tencent.com/document/product/228/41116?from_cn_redirect=1">CDN APIs</a>.

                 * @param req UpdateDomainConfigRequest
                 * @return UpdateDomainConfigOutcome
                 */
                UpdateDomainConfigOutcome UpdateDomainConfig(const Model::UpdateDomainConfigRequest &request);
                void UpdateDomainConfigAsync(const Model::UpdateDomainConfigRequest& request, const UpdateDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDomainConfigOutcomeCallable UpdateDomainConfigCallable(const Model::UpdateDomainConfigRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_ECDNCLIENT_H_
