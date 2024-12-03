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

#ifndef TENCENTCLOUD_CONFIG_V20220802_CONFIGCLIENT_H_
#define TENCENTCLOUD_CONFIG_V20220802_CONFIGCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/config/v20220802/model/DescribeDiscoveredResourceRequest.h>
#include <tencentcloud/config/v20220802/model/DescribeDiscoveredResourceResponse.h>
#include <tencentcloud/config/v20220802/model/ListAggregateConfigRulesRequest.h>
#include <tencentcloud/config/v20220802/model/ListAggregateConfigRulesResponse.h>
#include <tencentcloud/config/v20220802/model/ListConfigRulesRequest.h>
#include <tencentcloud/config/v20220802/model/ListConfigRulesResponse.h>
#include <tencentcloud/config/v20220802/model/ListDiscoveredResourcesRequest.h>
#include <tencentcloud/config/v20220802/model/ListDiscoveredResourcesResponse.h>
#include <tencentcloud/config/v20220802/model/PutEvaluationsRequest.h>
#include <tencentcloud/config/v20220802/model/PutEvaluationsResponse.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            class ConfigClient : public AbstractClient
            {
            public:
                ConfigClient(const Credential &credential, const std::string &region);
                ConfigClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeDiscoveredResourceResponse> DescribeDiscoveredResourceOutcome;
                typedef std::future<DescribeDiscoveredResourceOutcome> DescribeDiscoveredResourceOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::DescribeDiscoveredResourceRequest&, DescribeDiscoveredResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiscoveredResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAggregateConfigRulesResponse> ListAggregateConfigRulesOutcome;
                typedef std::future<ListAggregateConfigRulesOutcome> ListAggregateConfigRulesOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::ListAggregateConfigRulesRequest&, ListAggregateConfigRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAggregateConfigRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListConfigRulesResponse> ListConfigRulesOutcome;
                typedef std::future<ListConfigRulesOutcome> ListConfigRulesOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::ListConfigRulesRequest&, ListConfigRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListConfigRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDiscoveredResourcesResponse> ListDiscoveredResourcesOutcome;
                typedef std::future<ListDiscoveredResourcesOutcome> ListDiscoveredResourcesOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::ListDiscoveredResourcesRequest&, ListDiscoveredResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDiscoveredResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::PutEvaluationsResponse> PutEvaluationsOutcome;
                typedef std::future<PutEvaluationsOutcome> PutEvaluationsOutcomeCallable;
                typedef std::function<void(const ConfigClient*, const Model::PutEvaluationsRequest&, PutEvaluationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutEvaluationsAsyncHandler;



                /**
                 *Resource details.
                 * @param req DescribeDiscoveredResourceRequest
                 * @return DescribeDiscoveredResourceOutcome
                 */
                DescribeDiscoveredResourceOutcome DescribeDiscoveredResource(const Model::DescribeDiscoveredResourceRequest &request);
                void DescribeDiscoveredResourceAsync(const Model::DescribeDiscoveredResourceRequest& request, const DescribeDiscoveredResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiscoveredResourceOutcomeCallable DescribeDiscoveredResourceCallable(const Model::DescribeDiscoveredResourceRequest& request);

                /**
                 *This API is used to get the account group rule list.
                 * @param req ListAggregateConfigRulesRequest
                 * @return ListAggregateConfigRulesOutcome
                 */
                ListAggregateConfigRulesOutcome ListAggregateConfigRules(const Model::ListAggregateConfigRulesRequest &request);
                void ListAggregateConfigRulesAsync(const Model::ListAggregateConfigRulesRequest& request, const ListAggregateConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAggregateConfigRulesOutcomeCallable ListAggregateConfigRulesCallable(const Model::ListAggregateConfigRulesRequest& request);

                /**
                 *This API is used to get the rule list.
                 * @param req ListConfigRulesRequest
                 * @return ListConfigRulesOutcome
                 */
                ListConfigRulesOutcome ListConfigRules(const Model::ListConfigRulesRequest &request);
                void ListConfigRulesAsync(const Model::ListConfigRulesRequest& request, const ListConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListConfigRulesOutcomeCallable ListConfigRulesCallable(const Model::ListConfigRulesRequest& request);

                /**
                 *This API is used to get the resource list.
                 * @param req ListDiscoveredResourcesRequest
                 * @return ListDiscoveredResourcesOutcome
                 */
                ListDiscoveredResourcesOutcome ListDiscoveredResources(const Model::ListDiscoveredResourcesRequest &request);
                void ListDiscoveredResourcesAsync(const Model::ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDiscoveredResourcesOutcomeCallable ListDiscoveredResourcesCallable(const Model::ListDiscoveredResourcesRequest& request);

                /**
                 *This API is used to report custom rule evaluation results.
                 * @param req PutEvaluationsRequest
                 * @return PutEvaluationsOutcome
                 */
                PutEvaluationsOutcome PutEvaluations(const Model::PutEvaluationsRequest &request);
                void PutEvaluationsAsync(const Model::PutEvaluationsRequest& request, const PutEvaluationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutEvaluationsOutcomeCallable PutEvaluationsCallable(const Model::PutEvaluationsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_CONFIGCLIENT_H_
