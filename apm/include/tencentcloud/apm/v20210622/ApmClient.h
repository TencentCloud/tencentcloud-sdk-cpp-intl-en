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

#ifndef TENCENTCLOUD_APM_V20210622_APMCLIENT_H_
#define TENCENTCLOUD_APM_V20210622_APMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/apm/v20210622/model/CreateApmInstanceRequest.h>
#include <tencentcloud/apm/v20210622/model/CreateApmInstanceResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmAgentRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmAgentResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmInstancesRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeApmInstancesResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeGeneralApmApplicationConfigRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeGeneralApmApplicationConfigResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeGeneralMetricDataRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeGeneralMetricDataResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeGeneralOTSpanListRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeGeneralOTSpanListResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeGeneralSpanListRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeGeneralSpanListResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeMetricRecordsRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeMetricRecordsResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeServiceOverviewRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeServiceOverviewResponse.h>
#include <tencentcloud/apm/v20210622/model/DescribeTagValuesRequest.h>
#include <tencentcloud/apm/v20210622/model/DescribeTagValuesResponse.h>
#include <tencentcloud/apm/v20210622/model/ModifyApmInstanceRequest.h>
#include <tencentcloud/apm/v20210622/model/ModifyApmInstanceResponse.h>
#include <tencentcloud/apm/v20210622/model/ModifyGeneralApmApplicationConfigRequest.h>
#include <tencentcloud/apm/v20210622/model/ModifyGeneralApmApplicationConfigResponse.h>
#include <tencentcloud/apm/v20210622/model/TerminateApmInstanceRequest.h>
#include <tencentcloud/apm/v20210622/model/TerminateApmInstanceResponse.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            class ApmClient : public AbstractClient
            {
            public:
                ApmClient(const Credential &credential, const std::string &region);
                ApmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateApmInstanceResponse> CreateApmInstanceOutcome;
                typedef std::future<CreateApmInstanceOutcome> CreateApmInstanceOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::CreateApmInstanceRequest&, CreateApmInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApmInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApmAgentResponse> DescribeApmAgentOutcome;
                typedef std::future<DescribeApmAgentOutcome> DescribeApmAgentOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeApmAgentRequest&, DescribeApmAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApmAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApmInstancesResponse> DescribeApmInstancesOutcome;
                typedef std::future<DescribeApmInstancesOutcome> DescribeApmInstancesOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeApmInstancesRequest&, DescribeApmInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApmInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGeneralApmApplicationConfigResponse> DescribeGeneralApmApplicationConfigOutcome;
                typedef std::future<DescribeGeneralApmApplicationConfigOutcome> DescribeGeneralApmApplicationConfigOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeGeneralApmApplicationConfigRequest&, DescribeGeneralApmApplicationConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGeneralApmApplicationConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGeneralMetricDataResponse> DescribeGeneralMetricDataOutcome;
                typedef std::future<DescribeGeneralMetricDataOutcome> DescribeGeneralMetricDataOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeGeneralMetricDataRequest&, DescribeGeneralMetricDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGeneralMetricDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGeneralOTSpanListResponse> DescribeGeneralOTSpanListOutcome;
                typedef std::future<DescribeGeneralOTSpanListOutcome> DescribeGeneralOTSpanListOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeGeneralOTSpanListRequest&, DescribeGeneralOTSpanListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGeneralOTSpanListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGeneralSpanListResponse> DescribeGeneralSpanListOutcome;
                typedef std::future<DescribeGeneralSpanListOutcome> DescribeGeneralSpanListOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeGeneralSpanListRequest&, DescribeGeneralSpanListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGeneralSpanListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMetricRecordsResponse> DescribeMetricRecordsOutcome;
                typedef std::future<DescribeMetricRecordsOutcome> DescribeMetricRecordsOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeMetricRecordsRequest&, DescribeMetricRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceOverviewResponse> DescribeServiceOverviewOutcome;
                typedef std::future<DescribeServiceOverviewOutcome> DescribeServiceOverviewOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeServiceOverviewRequest&, DescribeServiceOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagValuesResponse> DescribeTagValuesOutcome;
                typedef std::future<DescribeTagValuesOutcome> DescribeTagValuesOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::DescribeTagValuesRequest&, DescribeTagValuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagValuesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApmInstanceResponse> ModifyApmInstanceOutcome;
                typedef std::future<ModifyApmInstanceOutcome> ModifyApmInstanceOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::ModifyApmInstanceRequest&, ModifyApmInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApmInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGeneralApmApplicationConfigResponse> ModifyGeneralApmApplicationConfigOutcome;
                typedef std::future<ModifyGeneralApmApplicationConfigOutcome> ModifyGeneralApmApplicationConfigOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::ModifyGeneralApmApplicationConfigRequest&, ModifyGeneralApmApplicationConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGeneralApmApplicationConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateApmInstanceResponse> TerminateApmInstanceOutcome;
                typedef std::future<TerminateApmInstanceOutcome> TerminateApmInstanceOutcomeCallable;
                typedef std::function<void(const ApmClient*, const Model::TerminateApmInstanceRequest&, TerminateApmInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateApmInstanceAsyncHandler;



                /**
                 *This API is used to create a business purchase in the APM business system.
                 * @param req CreateApmInstanceRequest
                 * @return CreateApmInstanceOutcome
                 */
                CreateApmInstanceOutcome CreateApmInstance(const Model::CreateApmInstanceRequest &request);
                void CreateApmInstanceAsync(const Model::CreateApmInstanceRequest& request, const CreateApmInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApmInstanceOutcomeCallable CreateApmInstanceCallable(const Model::CreateApmInstanceRequest& request);

                /**
                 *Obtaining APM Access Point.
                 * @param req DescribeApmAgentRequest
                 * @return DescribeApmAgentOutcome
                 */
                DescribeApmAgentOutcome DescribeApmAgent(const Model::DescribeApmAgentRequest &request);
                void DescribeApmAgentAsync(const Model::DescribeApmAgentRequest& request, const DescribeApmAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApmAgentOutcomeCallable DescribeApmAgentCallable(const Model::DescribeApmAgentRequest& request);

                /**
                 *This API is used to obtain the list of APM business systems.
                 * @param req DescribeApmInstancesRequest
                 * @return DescribeApmInstancesOutcome
                 */
                DescribeApmInstancesOutcome DescribeApmInstances(const Model::DescribeApmInstancesRequest &request);
                void DescribeApmInstancesAsync(const Model::DescribeApmInstancesRequest& request, const DescribeApmInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApmInstancesOutcomeCallable DescribeApmInstancesCallable(const Model::DescribeApmInstancesRequest& request);

                /**
                 *This API is used to query the application configuration information.
                 * @param req DescribeGeneralApmApplicationConfigRequest
                 * @return DescribeGeneralApmApplicationConfigOutcome
                 */
                DescribeGeneralApmApplicationConfigOutcome DescribeGeneralApmApplicationConfig(const Model::DescribeGeneralApmApplicationConfigRequest &request);
                void DescribeGeneralApmApplicationConfigAsync(const Model::DescribeGeneralApmApplicationConfigRequest& request, const DescribeGeneralApmApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGeneralApmApplicationConfigOutcomeCallable DescribeGeneralApmApplicationConfigCallable(const Model::DescribeGeneralApmApplicationConfigRequest& request);

                /**
                 *This API is a general API used to obtain metric data. Users submit request parameters as needed and receive the corresponding metric data.
The API call frequency is limited to 20 requests per second and 1200 requests per minute. The number of data points per request is limited to 1440.
                 * @param req DescribeGeneralMetricDataRequest
                 * @return DescribeGeneralMetricDataOutcome
                 */
                DescribeGeneralMetricDataOutcome DescribeGeneralMetricData(const Model::DescribeGeneralMetricDataRequest &request);
                void DescribeGeneralMetricDataAsync(const Model::DescribeGeneralMetricDataRequest& request, const DescribeGeneralMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGeneralMetricDataOutcomeCallable DescribeGeneralMetricDataCallable(const Model::DescribeGeneralMetricDataRequest& request);

                /**
                 *General Query OpenTelemetry Call Chain List.
                 * @param req DescribeGeneralOTSpanListRequest
                 * @return DescribeGeneralOTSpanListOutcome
                 */
                DescribeGeneralOTSpanListOutcome DescribeGeneralOTSpanList(const Model::DescribeGeneralOTSpanListRequest &request);
                void DescribeGeneralOTSpanListAsync(const Model::DescribeGeneralOTSpanListRequest& request, const DescribeGeneralOTSpanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGeneralOTSpanListOutcomeCallable DescribeGeneralOTSpanListCallable(const Model::DescribeGeneralOTSpanListRequest& request);

                /**
                 *General Query Call Chain List.
                 * @param req DescribeGeneralSpanListRequest
                 * @return DescribeGeneralSpanListOutcome
                 */
                DescribeGeneralSpanListOutcome DescribeGeneralSpanList(const Model::DescribeGeneralSpanListRequest &request);
                void DescribeGeneralSpanListAsync(const Model::DescribeGeneralSpanListRequest& request, const DescribeGeneralSpanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGeneralSpanListOutcomeCallable DescribeGeneralSpanListCallable(const Model::DescribeGeneralSpanListRequest& request);

                /**
                 *This API is used to query metric list. To query metrics, it is recommended to use the DescribeGeneralMetricData API.
                 * @param req DescribeMetricRecordsRequest
                 * @return DescribeMetricRecordsOutcome
                 */
                DescribeMetricRecordsOutcome DescribeMetricRecords(const Model::DescribeMetricRecordsRequest &request);
                void DescribeMetricRecordsAsync(const Model::DescribeMetricRecordsRequest& request, const DescribeMetricRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMetricRecordsOutcomeCallable DescribeMetricRecordsCallable(const Model::DescribeMetricRecordsRequest& request);

                /**
                 *This API is used to pull application overview data.
                 * @param req DescribeServiceOverviewRequest
                 * @return DescribeServiceOverviewOutcome
                 */
                DescribeServiceOverviewOutcome DescribeServiceOverview(const Model::DescribeServiceOverviewRequest &request);
                void DescribeServiceOverviewAsync(const Model::DescribeServiceOverviewRequest& request, const DescribeServiceOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceOverviewOutcomeCallable DescribeServiceOverviewCallable(const Model::DescribeServiceOverviewRequest& request);

                /**
                 *This API is used to query dimensional data by dimension name and filter condition.
                 * @param req DescribeTagValuesRequest
                 * @return DescribeTagValuesOutcome
                 */
                DescribeTagValuesOutcome DescribeTagValues(const Model::DescribeTagValuesRequest &request);
                void DescribeTagValuesAsync(const Model::DescribeTagValuesRequest& request, const DescribeTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagValuesOutcomeCallable DescribeTagValuesCallable(const Model::DescribeTagValuesRequest& request);

                /**
                 *This API is used to modify the APM business system.
                 * @param req ModifyApmInstanceRequest
                 * @return ModifyApmInstanceOutcome
                 */
                ModifyApmInstanceOutcome ModifyApmInstance(const Model::ModifyApmInstanceRequest &request);
                void ModifyApmInstanceAsync(const Model::ModifyApmInstanceRequest& request, const ModifyApmInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApmInstanceOutcomeCallable ModifyApmInstanceCallable(const Model::ModifyApmInstanceRequest& request);

                /**
                 *OpenAPI available for external use. Customers can flexibly specify the fields to be modified, and then add the list of services to be modified.
                 * @param req ModifyGeneralApmApplicationConfigRequest
                 * @return ModifyGeneralApmApplicationConfigOutcome
                 */
                ModifyGeneralApmApplicationConfigOutcome ModifyGeneralApmApplicationConfig(const Model::ModifyGeneralApmApplicationConfigRequest &request);
                void ModifyGeneralApmApplicationConfigAsync(const Model::ModifyGeneralApmApplicationConfigRequest& request, const ModifyGeneralApmApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGeneralApmApplicationConfigOutcomeCallable ModifyGeneralApmApplicationConfigCallable(const Model::ModifyGeneralApmApplicationConfigRequest& request);

                /**
                 *Termination of APM business system.
                 * @param req TerminateApmInstanceRequest
                 * @return TerminateApmInstanceOutcome
                 */
                TerminateApmInstanceOutcome TerminateApmInstance(const Model::TerminateApmInstanceRequest &request);
                void TerminateApmInstanceAsync(const Model::TerminateApmInstanceRequest& request, const TerminateApmInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateApmInstanceOutcomeCallable TerminateApmInstanceCallable(const Model::TerminateApmInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_APMCLIENT_H_
