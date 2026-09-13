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

#ifndef TENCENTCLOUD_GA2_V20250115_GA2CLIENT_H_
#define TENCENTCLOUD_GA2_V20250115_GA2CLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ga2/v20250115/model/DescribeTaskResultRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeTaskResultResponse.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            class Ga2Client : public AbstractClient
            {
            public:
                Ga2Client(const Credential &credential, const std::string &region);
                Ga2Client(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeTaskResultResponse> DescribeTaskResultOutcome;
                typedef std::future<DescribeTaskResultOutcome> DescribeTaskResultOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeTaskResultRequest&, DescribeTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskResultAsyncHandler;



                /**
                 *Query asynchronous task result
                 * @param req DescribeTaskResultRequest
                 * @return DescribeTaskResultOutcome
                 */
                DescribeTaskResultOutcome DescribeTaskResult(const Model::DescribeTaskResultRequest &request);
                void DescribeTaskResultAsync(const Model::DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskResultOutcomeCallable DescribeTaskResultCallable(const Model::DescribeTaskResultRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_GA2CLIENT_H_
