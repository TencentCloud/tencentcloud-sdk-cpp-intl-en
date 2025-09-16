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

#ifndef TENCENTCLOUD_TIONE_V20211111_TIONECLIENT_H_
#define TENCENTCLOUD_TIONE_V20211111_TIONECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelServiceGroupsRequest.h>
#include <tencentcloud/tione/v20211111/model/DescribeModelServiceGroupsResponse.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            class TioneClient : public AbstractClient
            {
            public:
                TioneClient(const Credential &credential, const std::string &region);
                TioneClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeModelServiceGroupsResponse> DescribeModelServiceGroupsOutcome;
                typedef std::future<DescribeModelServiceGroupsOutcome> DescribeModelServiceGroupsOutcomeCallable;
                typedef std::function<void(const TioneClient*, const Model::DescribeModelServiceGroupsRequest&, DescribeModelServiceGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelServiceGroupsAsyncHandler;



                /**
                 *This API is used to list online inference service groups.
                 * @param req DescribeModelServiceGroupsRequest
                 * @return DescribeModelServiceGroupsOutcome
                 */
                DescribeModelServiceGroupsOutcome DescribeModelServiceGroups(const Model::DescribeModelServiceGroupsRequest &request);
                void DescribeModelServiceGroupsAsync(const Model::DescribeModelServiceGroupsRequest& request, const DescribeModelServiceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelServiceGroupsOutcomeCallable DescribeModelServiceGroupsCallable(const Model::DescribeModelServiceGroupsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_TIONECLIENT_H_
