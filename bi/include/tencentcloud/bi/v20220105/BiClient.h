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

#ifndef TENCENTCLOUD_BI_V20220105_BICLIENT_H_
#define TENCENTCLOUD_BI_V20220105_BICLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bi/v20220105/model/ApplyEmbedIntervalRequest.h>
#include <tencentcloud/bi/v20220105/model/ApplyEmbedIntervalResponse.h>
#include <tencentcloud/bi/v20220105/model/CreateDatasourceRequest.h>
#include <tencentcloud/bi/v20220105/model/CreateDatasourceResponse.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            class BiClient : public AbstractClient
            {
            public:
                BiClient(const Credential &credential, const std::string &region);
                BiClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyEmbedIntervalResponse> ApplyEmbedIntervalOutcome;
                typedef std::future<ApplyEmbedIntervalOutcome> ApplyEmbedIntervalOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ApplyEmbedIntervalRequest&, ApplyEmbedIntervalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyEmbedIntervalAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDatasourceResponse> CreateDatasourceOutcome;
                typedef std::future<CreateDatasourceOutcome> CreateDatasourceOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::CreateDatasourceRequest&, CreateDatasourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatasourceAsyncHandler;



                /**
                 *This API is used to extend the available time of a token with strong authentication.
                 * @param req ApplyEmbedIntervalRequest
                 * @return ApplyEmbedIntervalOutcome
                 */
                ApplyEmbedIntervalOutcome ApplyEmbedInterval(const Model::ApplyEmbedIntervalRequest &request);
                void ApplyEmbedIntervalAsync(const Model::ApplyEmbedIntervalRequest& request, const ApplyEmbedIntervalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyEmbedIntervalOutcomeCallable ApplyEmbedIntervalCallable(const Model::ApplyEmbedIntervalRequest& request);

                /**
                 *This API is used to create a data source.
                 * @param req CreateDatasourceRequest
                 * @return CreateDatasourceOutcome
                 */
                CreateDatasourceOutcome CreateDatasource(const Model::CreateDatasourceRequest &request);
                void CreateDatasourceAsync(const Model::CreateDatasourceRequest& request, const CreateDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDatasourceOutcomeCallable CreateDatasourceCallable(const Model::CreateDatasourceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_BICLIENT_H_
