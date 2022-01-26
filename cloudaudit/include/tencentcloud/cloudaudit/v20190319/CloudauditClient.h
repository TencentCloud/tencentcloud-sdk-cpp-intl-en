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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_CLOUDAUDITCLIENT_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_CLOUDAUDITCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cloudaudit/v20190319/model/DescribeEventsRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/DescribeEventsResponse.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            class CloudauditClient : public AbstractClient
            {
            public:
                CloudauditClient(const Credential &credential, const std::string &region);
                CloudauditClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeEventsResponse> DescribeEventsOutcome;
                typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::DescribeEventsRequest&, DescribeEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventsAsyncHandler;



                /**
                 *This API is used to query CloudAudit logs.
                 * @param req DescribeEventsRequest
                 * @return DescribeEventsOutcome
                 */
                DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest &request);
                void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_CLOUDAUDITCLIENT_H_
