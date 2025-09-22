/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CDZ_V20221123_CDZCLIENT_H_
#define TENCENTCLOUD_CDZ_V20221123_CDZCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cdz/v20221123/model/DescribeCloudDedicatedZoneResourceSummaryRequest.h>
#include <tencentcloud/cdz/v20221123/model/DescribeCloudDedicatedZoneResourceSummaryResponse.h>


namespace TencentCloud
{
    namespace Cdz
    {
        namespace V20221123
        {
            class CdzClient : public AbstractClient
            {
            public:
                CdzClient(const Credential &credential, const std::string &region);
                CdzClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeCloudDedicatedZoneResourceSummaryResponse> DescribeCloudDedicatedZoneResourceSummaryOutcome;
                typedef std::future<DescribeCloudDedicatedZoneResourceSummaryOutcome> DescribeCloudDedicatedZoneResourceSummaryOutcomeCallable;
                typedef std::function<void(const CdzClient*, const Model::DescribeCloudDedicatedZoneResourceSummaryRequest&, DescribeCloudDedicatedZoneResourceSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudDedicatedZoneResourceSummaryAsyncHandler;



                /**
                 *This API is used to query resource usage of each vertical product in Cloud Dedicated Zone.
                 * @param req DescribeCloudDedicatedZoneResourceSummaryRequest
                 * @return DescribeCloudDedicatedZoneResourceSummaryOutcome
                 */
                DescribeCloudDedicatedZoneResourceSummaryOutcome DescribeCloudDedicatedZoneResourceSummary(const Model::DescribeCloudDedicatedZoneResourceSummaryRequest &request);
                void DescribeCloudDedicatedZoneResourceSummaryAsync(const Model::DescribeCloudDedicatedZoneResourceSummaryRequest& request, const DescribeCloudDedicatedZoneResourceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudDedicatedZoneResourceSummaryOutcomeCallable DescribeCloudDedicatedZoneResourceSummaryCallable(const Model::DescribeCloudDedicatedZoneResourceSummaryRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDZ_V20221123_CDZCLIENT_H_
