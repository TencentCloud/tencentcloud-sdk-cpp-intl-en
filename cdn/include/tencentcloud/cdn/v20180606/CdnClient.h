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
#include <tencentcloud/cdn/v20180606/model/CreateScdnFailedLogTaskRequest.h>
#include <tencentcloud/cdn/v20180606/model/CreateScdnFailedLogTaskResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeBillingDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeBillingDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeOriginDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeOriginDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/PurgePathCacheRequest.h>
#include <tencentcloud/cdn/v20180606/model/PurgePathCacheResponse.h>
#include <tencentcloud/cdn/v20180606/model/PushUrlsCacheRequest.h>
#include <tencentcloud/cdn/v20180606/model/PushUrlsCacheResponse.h>


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

                typedef Outcome<Core::Error, Model::CreateScdnFailedLogTaskResponse> CreateScdnFailedLogTaskOutcome;
                typedef std::future<CreateScdnFailedLogTaskOutcome> CreateScdnFailedLogTaskOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::CreateScdnFailedLogTaskRequest&, CreateScdnFailedLogTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScdnFailedLogTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillingDataResponse> DescribeBillingDataOutcome;
                typedef std::future<DescribeBillingDataOutcome> DescribeBillingDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeBillingDataRequest&, DescribeBillingDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillingDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCdnDataResponse> DescribeCdnDataOutcome;
                typedef std::future<DescribeCdnDataOutcome> DescribeCdnDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCdnDataRequest&, DescribeCdnDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOriginDataResponse> DescribeOriginDataOutcome;
                typedef std::future<DescribeOriginDataOutcome> DescribeOriginDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeOriginDataRequest&, DescribeOriginDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOriginDataAsyncHandler;
                typedef Outcome<Core::Error, Model::PurgePathCacheResponse> PurgePathCacheOutcome;
                typedef std::future<PurgePathCacheOutcome> PurgePathCacheOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::PurgePathCacheRequest&, PurgePathCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PurgePathCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::PushUrlsCacheResponse> PushUrlsCacheOutcome;
                typedef std::future<PushUrlsCacheOutcome> PushUrlsCacheOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::PushUrlsCacheRequest&, PushUrlsCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PushUrlsCacheAsyncHandler;



                /**
                 *This API is used to recreate a failed event log task.
                 * @param req CreateScdnFailedLogTaskRequest
                 * @return CreateScdnFailedLogTaskOutcome
                 */
                CreateScdnFailedLogTaskOutcome CreateScdnFailedLogTask(const Model::CreateScdnFailedLogTaskRequest &request);
                void CreateScdnFailedLogTaskAsync(const Model::CreateScdnFailedLogTaskRequest& request, const CreateScdnFailedLogTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScdnFailedLogTaskOutcomeCallable CreateScdnFailedLogTaskCallable(const Model::CreateScdnFailedLogTaskRequest& request);

                /**
                 *This API is used to query billing data details.
                 * @param req DescribeBillingDataRequest
                 * @return DescribeBillingDataOutcome
                 */
                DescribeBillingDataOutcome DescribeBillingData(const Model::DescribeBillingDataRequest &request);
                void DescribeBillingDataAsync(const Model::DescribeBillingDataRequest& request, const DescribeBillingDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillingDataOutcomeCallable DescribeBillingDataCallable(const Model::DescribeBillingDataRequest& request);

                /**
                 *This API (DescribeCdnData) is used to query CDN real-time access monitoring data and supports the following metrics:

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
                 *This API (DescribeOriginData) is used to query CDN real-time origin-pull monitoring data and supports the following metrics:

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
                 *This API is used to submit multiple directory purge tasks, which are carried out according to the acceleration region of the domain names.
By default, a maximum of 100 directories can be purged per day for acceleration regions either within or outside the Chinese mainland, and up to 500 tasks can be submitted at a time.
                 * @param req PurgePathCacheRequest
                 * @return PurgePathCacheOutcome
                 */
                PurgePathCacheOutcome PurgePathCache(const Model::PurgePathCacheRequest &request);
                void PurgePathCacheAsync(const Model::PurgePathCacheRequest& request, const PurgePathCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PurgePathCacheOutcomeCallable PurgePathCacheCallable(const Model::PurgePathCacheRequest& request);

                /**
                 *This API is used to cache specified URL resources to CDN nodes. You can specify acceleration regions for the prefetch.
By default, a maximum of 1000 URLs can be prefetched per day for regions either within or outside the Chinese mainland, and up to 500 tasks can be submitted at a time. Note that resources prefetched outside the Chinese mainland will be cached to CDN nodes outside the Chinese mainland and the traffic generated will incur costs.
                 * @param req PushUrlsCacheRequest
                 * @return PushUrlsCacheOutcome
                 */
                PushUrlsCacheOutcome PushUrlsCache(const Model::PushUrlsCacheRequest &request);
                void PushUrlsCacheAsync(const Model::PushUrlsCacheRequest& request, const PushUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PushUrlsCacheOutcomeCallable PushUrlsCacheCallable(const Model::PushUrlsCacheRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_CDNCLIENT_H_
