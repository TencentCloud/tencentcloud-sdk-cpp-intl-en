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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MONITORCLIENT_H_
#define TENCENTCLOUD_MONITOR_V20180724_MONITORCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/monitor/v20180724/model/BindingPolicyObjectRequest.h>
#include <tencentcloud/monitor/v20180724/model/BindingPolicyObjectResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlarmNoticeRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlarmNoticeResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlarmPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlarmPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePolicyGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePolicyGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlarmNoticesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlarmNoticesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlarmPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlarmPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePolicyGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePolicyGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAccidentEventListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAccidentEventListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmEventsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmEventsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmHistoriesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmHistoriesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmMetricsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmMetricsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticeRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticeResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticeCallbacksRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticeCallbacksResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmPoliciesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmPoliciesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAllNamespacesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAllNamespacesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBaseMetricsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBaseMetricsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBasicAlarmListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBasicAlarmListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeConditionsTemplateListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeConditionsTemplateListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeMonitorTypesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeMonitorTypesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeStatisticDataRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeStatisticDataResponse.h>
#include <tencentcloud/monitor/v20180724/model/GetMonitorDataRequest.h>
#include <tencentcloud/monitor/v20180724/model/GetMonitorDataResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmNoticeRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmNoticeResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyConditionRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyConditionResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyInfoRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyInfoResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyNoticeRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyNoticeResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyStatusRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyStatusResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyTasksRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyTasksResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmReceiversRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmReceiversResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPolicyGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPolicyGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/PutMonitorDataRequest.h>
#include <tencentcloud/monitor/v20180724/model/PutMonitorDataResponse.h>
#include <tencentcloud/monitor/v20180724/model/SendCustomAlarmMsgRequest.h>
#include <tencentcloud/monitor/v20180724/model/SendCustomAlarmMsgResponse.h>
#include <tencentcloud/monitor/v20180724/model/SetDefaultAlarmPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/SetDefaultAlarmPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingAllPolicyObjectRequest.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingAllPolicyObjectResponse.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingPolicyObjectRequest.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingPolicyObjectResponse.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            class MonitorClient : public AbstractClient
            {
            public:
                MonitorClient(const Credential &credential, const std::string &region);
                MonitorClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindingPolicyObjectResponse> BindingPolicyObjectOutcome;
                typedef std::future<BindingPolicyObjectOutcome> BindingPolicyObjectOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::BindingPolicyObjectRequest&, BindingPolicyObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindingPolicyObjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlarmNoticeResponse> CreateAlarmNoticeOutcome;
                typedef std::future<CreateAlarmNoticeOutcome> CreateAlarmNoticeOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateAlarmNoticeRequest&, CreateAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlarmPolicyResponse> CreateAlarmPolicyOutcome;
                typedef std::future<CreateAlarmPolicyOutcome> CreateAlarmPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateAlarmPolicyRequest&, CreateAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePolicyGroupResponse> CreatePolicyGroupOutcome;
                typedef std::future<CreatePolicyGroupOutcome> CreatePolicyGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePolicyGroupRequest&, CreatePolicyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlarmNoticesResponse> DeleteAlarmNoticesOutcome;
                typedef std::future<DeleteAlarmNoticesOutcome> DeleteAlarmNoticesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteAlarmNoticesRequest&, DeleteAlarmNoticesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmNoticesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlarmPolicyResponse> DeleteAlarmPolicyOutcome;
                typedef std::future<DeleteAlarmPolicyOutcome> DeleteAlarmPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteAlarmPolicyRequest&, DeleteAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePolicyGroupResponse> DeletePolicyGroupOutcome;
                typedef std::future<DeletePolicyGroupOutcome> DeletePolicyGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePolicyGroupRequest&, DeletePolicyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccidentEventListResponse> DescribeAccidentEventListOutcome;
                typedef std::future<DescribeAccidentEventListOutcome> DescribeAccidentEventListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAccidentEventListRequest&, DescribeAccidentEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccidentEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmEventsResponse> DescribeAlarmEventsOutcome;
                typedef std::future<DescribeAlarmEventsOutcome> DescribeAlarmEventsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmEventsRequest&, DescribeAlarmEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmHistoriesResponse> DescribeAlarmHistoriesOutcome;
                typedef std::future<DescribeAlarmHistoriesOutcome> DescribeAlarmHistoriesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmHistoriesRequest&, DescribeAlarmHistoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmHistoriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmMetricsResponse> DescribeAlarmMetricsOutcome;
                typedef std::future<DescribeAlarmMetricsOutcome> DescribeAlarmMetricsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmMetricsRequest&, DescribeAlarmMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmNoticeResponse> DescribeAlarmNoticeOutcome;
                typedef std::future<DescribeAlarmNoticeOutcome> DescribeAlarmNoticeOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmNoticeRequest&, DescribeAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmNoticeCallbacksResponse> DescribeAlarmNoticeCallbacksOutcome;
                typedef std::future<DescribeAlarmNoticeCallbacksOutcome> DescribeAlarmNoticeCallbacksOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmNoticeCallbacksRequest&, DescribeAlarmNoticeCallbacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmNoticeCallbacksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmNoticesResponse> DescribeAlarmNoticesOutcome;
                typedef std::future<DescribeAlarmNoticesOutcome> DescribeAlarmNoticesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmNoticesRequest&, DescribeAlarmNoticesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmNoticesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmPoliciesResponse> DescribeAlarmPoliciesOutcome;
                typedef std::future<DescribeAlarmPoliciesOutcome> DescribeAlarmPoliciesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmPoliciesRequest&, DescribeAlarmPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmPolicyResponse> DescribeAlarmPolicyOutcome;
                typedef std::future<DescribeAlarmPolicyOutcome> DescribeAlarmPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmPolicyRequest&, DescribeAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllNamespacesResponse> DescribeAllNamespacesOutcome;
                typedef std::future<DescribeAllNamespacesOutcome> DescribeAllNamespacesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAllNamespacesRequest&, DescribeAllNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaseMetricsResponse> DescribeBaseMetricsOutcome;
                typedef std::future<DescribeBaseMetricsOutcome> DescribeBaseMetricsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeBaseMetricsRequest&, DescribeBaseMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaseMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBasicAlarmListResponse> DescribeBasicAlarmListOutcome;
                typedef std::future<DescribeBasicAlarmListOutcome> DescribeBasicAlarmListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeBasicAlarmListRequest&, DescribeBasicAlarmListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBasicAlarmListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBindingPolicyObjectListResponse> DescribeBindingPolicyObjectListOutcome;
                typedef std::future<DescribeBindingPolicyObjectListOutcome> DescribeBindingPolicyObjectListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeBindingPolicyObjectListRequest&, DescribeBindingPolicyObjectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBindingPolicyObjectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConditionsTemplateListResponse> DescribeConditionsTemplateListOutcome;
                typedef std::future<DescribeConditionsTemplateListOutcome> DescribeConditionsTemplateListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeConditionsTemplateListRequest&, DescribeConditionsTemplateListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConditionsTemplateListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMonitorTypesResponse> DescribeMonitorTypesOutcome;
                typedef std::future<DescribeMonitorTypesOutcome> DescribeMonitorTypesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeMonitorTypesRequest&, DescribeMonitorTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyConditionListResponse> DescribePolicyConditionListOutcome;
                typedef std::future<DescribePolicyConditionListOutcome> DescribePolicyConditionListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePolicyConditionListRequest&, DescribePolicyConditionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyConditionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyGroupInfoResponse> DescribePolicyGroupInfoOutcome;
                typedef std::future<DescribePolicyGroupInfoOutcome> DescribePolicyGroupInfoOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePolicyGroupInfoRequest&, DescribePolicyGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyGroupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyGroupListResponse> DescribePolicyGroupListOutcome;
                typedef std::future<DescribePolicyGroupListOutcome> DescribePolicyGroupListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePolicyGroupListRequest&, DescribePolicyGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductEventListResponse> DescribeProductEventListOutcome;
                typedef std::future<DescribeProductEventListOutcome> DescribeProductEventListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeProductEventListRequest&, DescribeProductEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStatisticDataResponse> DescribeStatisticDataOutcome;
                typedef std::future<DescribeStatisticDataOutcome> DescribeStatisticDataOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeStatisticDataRequest&, DescribeStatisticDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStatisticDataAsyncHandler;
                typedef Outcome<Core::Error, Model::GetMonitorDataResponse> GetMonitorDataOutcome;
                typedef std::future<GetMonitorDataOutcome> GetMonitorDataOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::GetMonitorDataRequest&, GetMonitorDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetMonitorDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmNoticeResponse> ModifyAlarmNoticeOutcome;
                typedef std::future<ModifyAlarmNoticeOutcome> ModifyAlarmNoticeOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmNoticeRequest&, ModifyAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmPolicyConditionResponse> ModifyAlarmPolicyConditionOutcome;
                typedef std::future<ModifyAlarmPolicyConditionOutcome> ModifyAlarmPolicyConditionOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyConditionRequest&, ModifyAlarmPolicyConditionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyConditionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmPolicyInfoResponse> ModifyAlarmPolicyInfoOutcome;
                typedef std::future<ModifyAlarmPolicyInfoOutcome> ModifyAlarmPolicyInfoOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyInfoRequest&, ModifyAlarmPolicyInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmPolicyNoticeResponse> ModifyAlarmPolicyNoticeOutcome;
                typedef std::future<ModifyAlarmPolicyNoticeOutcome> ModifyAlarmPolicyNoticeOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyNoticeRequest&, ModifyAlarmPolicyNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmPolicyStatusResponse> ModifyAlarmPolicyStatusOutcome;
                typedef std::future<ModifyAlarmPolicyStatusOutcome> ModifyAlarmPolicyStatusOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyStatusRequest&, ModifyAlarmPolicyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmPolicyTasksResponse> ModifyAlarmPolicyTasksOutcome;
                typedef std::future<ModifyAlarmPolicyTasksOutcome> ModifyAlarmPolicyTasksOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyTasksRequest&, ModifyAlarmPolicyTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmReceiversResponse> ModifyAlarmReceiversOutcome;
                typedef std::future<ModifyAlarmReceiversOutcome> ModifyAlarmReceiversOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmReceiversRequest&, ModifyAlarmReceiversOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmReceiversAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPolicyGroupResponse> ModifyPolicyGroupOutcome;
                typedef std::future<ModifyPolicyGroupOutcome> ModifyPolicyGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPolicyGroupRequest&, ModifyPolicyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPolicyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::PutMonitorDataResponse> PutMonitorDataOutcome;
                typedef std::future<PutMonitorDataOutcome> PutMonitorDataOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::PutMonitorDataRequest&, PutMonitorDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutMonitorDataAsyncHandler;
                typedef Outcome<Core::Error, Model::SendCustomAlarmMsgResponse> SendCustomAlarmMsgOutcome;
                typedef std::future<SendCustomAlarmMsgOutcome> SendCustomAlarmMsgOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::SendCustomAlarmMsgRequest&, SendCustomAlarmMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendCustomAlarmMsgAsyncHandler;
                typedef Outcome<Core::Error, Model::SetDefaultAlarmPolicyResponse> SetDefaultAlarmPolicyOutcome;
                typedef std::future<SetDefaultAlarmPolicyOutcome> SetDefaultAlarmPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::SetDefaultAlarmPolicyRequest&, SetDefaultAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetDefaultAlarmPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::UnBindingAllPolicyObjectResponse> UnBindingAllPolicyObjectOutcome;
                typedef std::future<UnBindingAllPolicyObjectOutcome> UnBindingAllPolicyObjectOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UnBindingAllPolicyObjectRequest&, UnBindingAllPolicyObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindingAllPolicyObjectAsyncHandler;
                typedef Outcome<Core::Error, Model::UnBindingPolicyObjectResponse> UnBindingPolicyObjectOutcome;
                typedef std::future<UnBindingPolicyObjectOutcome> UnBindingPolicyObjectOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UnBindingPolicyObjectRequest&, UnBindingPolicyObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindingPolicyObjectAsyncHandler;



                /**
                 *This API is used to bind an alarm policy to a specific object.
                 * @param req BindingPolicyObjectRequest
                 * @return BindingPolicyObjectOutcome
                 */
                BindingPolicyObjectOutcome BindingPolicyObject(const Model::BindingPolicyObjectRequest &request);
                void BindingPolicyObjectAsync(const Model::BindingPolicyObjectRequest& request, const BindingPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindingPolicyObjectOutcomeCallable BindingPolicyObjectCallable(const Model::BindingPolicyObjectRequest& request);

                /**
                 *This API is used to create a notification template.
                 * @param req CreateAlarmNoticeRequest
                 * @return CreateAlarmNoticeOutcome
                 */
                CreateAlarmNoticeOutcome CreateAlarmNotice(const Model::CreateAlarmNoticeRequest &request);
                void CreateAlarmNoticeAsync(const Model::CreateAlarmNoticeRequest& request, const CreateAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmNoticeOutcomeCallable CreateAlarmNoticeCallable(const Model::CreateAlarmNoticeRequest& request);

                /**
                 *This API is used to create a Cloud Monitor alarm policy.
                 * @param req CreateAlarmPolicyRequest
                 * @return CreateAlarmPolicyOutcome
                 */
                CreateAlarmPolicyOutcome CreateAlarmPolicy(const Model::CreateAlarmPolicyRequest &request);
                void CreateAlarmPolicyAsync(const Model::CreateAlarmPolicyRequest& request, const CreateAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmPolicyOutcomeCallable CreateAlarmPolicyCallable(const Model::CreateAlarmPolicyRequest& request);

                /**
                 *This API is used to add a policy group.
                 * @param req CreatePolicyGroupRequest
                 * @return CreatePolicyGroupOutcome
                 */
                CreatePolicyGroupOutcome CreatePolicyGroup(const Model::CreatePolicyGroupRequest &request);
                void CreatePolicyGroupAsync(const Model::CreatePolicyGroupRequest& request, const CreatePolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePolicyGroupOutcomeCallable CreatePolicyGroupCallable(const Model::CreatePolicyGroupRequest& request);

                /**
                 *This API is used to delete alarm notification templates.
                 * @param req DeleteAlarmNoticesRequest
                 * @return DeleteAlarmNoticesOutcome
                 */
                DeleteAlarmNoticesOutcome DeleteAlarmNotices(const Model::DeleteAlarmNoticesRequest &request);
                void DeleteAlarmNoticesAsync(const Model::DeleteAlarmNoticesRequest& request, const DeleteAlarmNoticesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmNoticesOutcomeCallable DeleteAlarmNoticesCallable(const Model::DeleteAlarmNoticesRequest& request);

                /**
                 *This API is used to delete an alarm policy.
                 * @param req DeleteAlarmPolicyRequest
                 * @return DeleteAlarmPolicyOutcome
                 */
                DeleteAlarmPolicyOutcome DeleteAlarmPolicy(const Model::DeleteAlarmPolicyRequest &request);
                void DeleteAlarmPolicyAsync(const Model::DeleteAlarmPolicyRequest& request, const DeleteAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmPolicyOutcomeCallable DeleteAlarmPolicyCallable(const Model::DeleteAlarmPolicyRequest& request);

                /**
                 *This API is used to delete an alarm policy group.
                 * @param req DeletePolicyGroupRequest
                 * @return DeletePolicyGroupOutcome
                 */
                DeletePolicyGroupOutcome DeletePolicyGroup(const Model::DeletePolicyGroupRequest &request);
                void DeletePolicyGroupAsync(const Model::DeletePolicyGroupRequest& request, const DeletePolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePolicyGroupOutcomeCallable DeletePolicyGroupCallable(const Model::DeletePolicyGroupRequest& request);

                /**
                 *This API is used to get the platform event list.
                 * @param req DescribeAccidentEventListRequest
                 * @return DescribeAccidentEventListOutcome
                 */
                DescribeAccidentEventListOutcome DescribeAccidentEventList(const Model::DescribeAccidentEventListRequest &request);
                void DescribeAccidentEventListAsync(const Model::DescribeAccidentEventListRequest& request, const DescribeAccidentEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccidentEventListOutcomeCallable DescribeAccidentEventListCallable(const Model::DescribeAccidentEventListRequest& request);

                /**
                 *This API is used to query the list of alarm events.
                 * @param req DescribeAlarmEventsRequest
                 * @return DescribeAlarmEventsOutcome
                 */
                DescribeAlarmEventsOutcome DescribeAlarmEvents(const Model::DescribeAlarmEventsRequest &request);
                void DescribeAlarmEventsAsync(const Model::DescribeAlarmEventsRequest& request, const DescribeAlarmEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmEventsOutcomeCallable DescribeAlarmEventsCallable(const Model::DescribeAlarmEventsRequest& request);

                /**
                 *This API is used to query the alarm records.

Note: **If you query the alarm records as a sub-user, you can only query those of authorized projects** or those of products which are not categorized by projects. For information on how to grant a sub-account the project permission, see [Project & Tag](https://intl.cloud.tencent.com/document/product/598/32738?from_cn_redirect=1).
                 * @param req DescribeAlarmHistoriesRequest
                 * @return DescribeAlarmHistoriesOutcome
                 */
                DescribeAlarmHistoriesOutcome DescribeAlarmHistories(const Model::DescribeAlarmHistoriesRequest &request);
                void DescribeAlarmHistoriesAsync(const Model::DescribeAlarmHistoriesRequest& request, const DescribeAlarmHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmHistoriesOutcomeCallable DescribeAlarmHistoriesCallable(const Model::DescribeAlarmHistoriesRequest& request);

                /**
                 *This API is used to query the list of alarm metrics.
                 * @param req DescribeAlarmMetricsRequest
                 * @return DescribeAlarmMetricsOutcome
                 */
                DescribeAlarmMetricsOutcome DescribeAlarmMetrics(const Model::DescribeAlarmMetricsRequest &request);
                void DescribeAlarmMetricsAsync(const Model::DescribeAlarmMetricsRequest& request, const DescribeAlarmMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmMetricsOutcomeCallable DescribeAlarmMetricsCallable(const Model::DescribeAlarmMetricsRequest& request);

                /**
                 *This API is used to query the details of a single notification template.
                 * @param req DescribeAlarmNoticeRequest
                 * @return DescribeAlarmNoticeOutcome
                 */
                DescribeAlarmNoticeOutcome DescribeAlarmNotice(const Model::DescribeAlarmNoticeRequest &request);
                void DescribeAlarmNoticeAsync(const Model::DescribeAlarmNoticeRequest& request, const DescribeAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmNoticeOutcomeCallable DescribeAlarmNoticeCallable(const Model::DescribeAlarmNoticeRequest& request);

                /**
                 *This API is used to get all the callback URLs of an alarm notification template.
                 * @param req DescribeAlarmNoticeCallbacksRequest
                 * @return DescribeAlarmNoticeCallbacksOutcome
                 */
                DescribeAlarmNoticeCallbacksOutcome DescribeAlarmNoticeCallbacks(const Model::DescribeAlarmNoticeCallbacksRequest &request);
                void DescribeAlarmNoticeCallbacksAsync(const Model::DescribeAlarmNoticeCallbacksRequest& request, const DescribeAlarmNoticeCallbacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmNoticeCallbacksOutcomeCallable DescribeAlarmNoticeCallbacksCallable(const Model::DescribeAlarmNoticeCallbacksRequest& request);

                /**
                 *This API is used to query the list of notification templates.
                 * @param req DescribeAlarmNoticesRequest
                 * @return DescribeAlarmNoticesOutcome
                 */
                DescribeAlarmNoticesOutcome DescribeAlarmNotices(const Model::DescribeAlarmNoticesRequest &request);
                void DescribeAlarmNoticesAsync(const Model::DescribeAlarmNoticesRequest& request, const DescribeAlarmNoticesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmNoticesOutcomeCallable DescribeAlarmNoticesCallable(const Model::DescribeAlarmNoticesRequest& request);

                /**
                 *This API is used to query the list of alarm policies.
                 * @param req DescribeAlarmPoliciesRequest
                 * @return DescribeAlarmPoliciesOutcome
                 */
                DescribeAlarmPoliciesOutcome DescribeAlarmPolicies(const Model::DescribeAlarmPoliciesRequest &request);
                void DescribeAlarmPoliciesAsync(const Model::DescribeAlarmPoliciesRequest& request, const DescribeAlarmPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmPoliciesOutcomeCallable DescribeAlarmPoliciesCallable(const Model::DescribeAlarmPoliciesRequest& request);

                /**
                 *This API is used to get the details of a single alarm policy.
                 * @param req DescribeAlarmPolicyRequest
                 * @return DescribeAlarmPolicyOutcome
                 */
                DescribeAlarmPolicyOutcome DescribeAlarmPolicy(const Model::DescribeAlarmPolicyRequest &request);
                void DescribeAlarmPolicyAsync(const Model::DescribeAlarmPolicyRequest& request, const DescribeAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmPolicyOutcomeCallable DescribeAlarmPolicyCallable(const Model::DescribeAlarmPolicyRequest& request);

                /**
                 *This API is used to query all namespaces.
                 * @param req DescribeAllNamespacesRequest
                 * @return DescribeAllNamespacesOutcome
                 */
                DescribeAllNamespacesOutcome DescribeAllNamespaces(const Model::DescribeAllNamespacesRequest &request);
                void DescribeAllNamespacesAsync(const Model::DescribeAllNamespacesRequest& request, const DescribeAllNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllNamespacesOutcomeCallable DescribeAllNamespacesCallable(const Model::DescribeAllNamespacesRequest& request);

                /**
                 *This API is used to get the attributes of basic metrics.
                 * @param req DescribeBaseMetricsRequest
                 * @return DescribeBaseMetricsOutcome
                 */
                DescribeBaseMetricsOutcome DescribeBaseMetrics(const Model::DescribeBaseMetricsRequest &request);
                void DescribeBaseMetricsAsync(const Model::DescribeBaseMetricsRequest& request, const DescribeBaseMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaseMetricsOutcomeCallable DescribeBaseMetricsCallable(const Model::DescribeBaseMetricsRequest& request);

                /**
                 *This API is used to get the basic alarm list.
                 * @param req DescribeBasicAlarmListRequest
                 * @return DescribeBasicAlarmListOutcome
                 */
                DescribeBasicAlarmListOutcome DescribeBasicAlarmList(const Model::DescribeBasicAlarmListRequest &request);
                void DescribeBasicAlarmListAsync(const Model::DescribeBasicAlarmListRequest& request, const DescribeBasicAlarmListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBasicAlarmListOutcomeCallable DescribeBasicAlarmListCallable(const Model::DescribeBasicAlarmListRequest& request);

                /**
                 *This API is used to get the bound object list.
                 * @param req DescribeBindingPolicyObjectListRequest
                 * @return DescribeBindingPolicyObjectListOutcome
                 */
                DescribeBindingPolicyObjectListOutcome DescribeBindingPolicyObjectList(const Model::DescribeBindingPolicyObjectListRequest &request);
                void DescribeBindingPolicyObjectListAsync(const Model::DescribeBindingPolicyObjectListRequest& request, const DescribeBindingPolicyObjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBindingPolicyObjectListOutcomeCallable DescribeBindingPolicyObjectListCallable(const Model::DescribeBindingPolicyObjectListRequest& request);

                /**
                 *This API is used to get the trigger condition template.
                 * @param req DescribeConditionsTemplateListRequest
                 * @return DescribeConditionsTemplateListOutcome
                 */
                DescribeConditionsTemplateListOutcome DescribeConditionsTemplateList(const Model::DescribeConditionsTemplateListRequest &request);
                void DescribeConditionsTemplateListAsync(const Model::DescribeConditionsTemplateListRequest& request, const DescribeConditionsTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConditionsTemplateListOutcomeCallable DescribeConditionsTemplateListCallable(const Model::DescribeConditionsTemplateListRequest& request);

                /**
                 *This API is used to list all the monitor types supported by CM.
                 * @param req DescribeMonitorTypesRequest
                 * @return DescribeMonitorTypesOutcome
                 */
                DescribeMonitorTypesOutcome DescribeMonitorTypes(const Model::DescribeMonitorTypesRequest &request);
                void DescribeMonitorTypesAsync(const Model::DescribeMonitorTypesRequest& request, const DescribeMonitorTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMonitorTypesOutcomeCallable DescribeMonitorTypesCallable(const Model::DescribeMonitorTypesRequest& request);

                /**
                 *This API is used to get basic alarm policy conditions.
                 * @param req DescribePolicyConditionListRequest
                 * @return DescribePolicyConditionListOutcome
                 */
                DescribePolicyConditionListOutcome DescribePolicyConditionList(const Model::DescribePolicyConditionListRequest &request);
                void DescribePolicyConditionListAsync(const Model::DescribePolicyConditionListRequest& request, const DescribePolicyConditionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyConditionListOutcomeCallable DescribePolicyConditionListCallable(const Model::DescribePolicyConditionListRequest& request);

                /**
                 *This API is used to get details of a basic policy group.
                 * @param req DescribePolicyGroupInfoRequest
                 * @return DescribePolicyGroupInfoOutcome
                 */
                DescribePolicyGroupInfoOutcome DescribePolicyGroupInfo(const Model::DescribePolicyGroupInfoRequest &request);
                void DescribePolicyGroupInfoAsync(const Model::DescribePolicyGroupInfoRequest& request, const DescribePolicyGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyGroupInfoOutcomeCallable DescribePolicyGroupInfoCallable(const Model::DescribePolicyGroupInfoRequest& request);

                /**
                 *This API is used to get the list of basic policy alarm groups.
                 * @param req DescribePolicyGroupListRequest
                 * @return DescribePolicyGroupListOutcome
                 */
                DescribePolicyGroupListOutcome DescribePolicyGroupList(const Model::DescribePolicyGroupListRequest &request);
                void DescribePolicyGroupListAsync(const Model::DescribePolicyGroupListRequest& request, const DescribePolicyGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyGroupListOutcomeCallable DescribePolicyGroupListCallable(const Model::DescribePolicyGroupListRequest& request);

                /**
                 *This API is used to get the list of product events by page.
                 * @param req DescribeProductEventListRequest
                 * @return DescribeProductEventListOutcome
                 */
                DescribeProductEventListOutcome DescribeProductEventList(const Model::DescribeProductEventListRequest &request);
                void DescribeProductEventListAsync(const Model::DescribeProductEventListRequest& request, const DescribeProductEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductEventListOutcomeCallable DescribeProductEventListCallable(const Model::DescribeProductEventListRequest& request);

                /**
                 *This API is used to query monitoring data by dimension conditions.
                 * @param req DescribeStatisticDataRequest
                 * @return DescribeStatisticDataOutcome
                 */
                DescribeStatisticDataOutcome DescribeStatisticData(const Model::DescribeStatisticDataRequest &request);
                void DescribeStatisticDataAsync(const Model::DescribeStatisticDataRequest& request, const DescribeStatisticDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStatisticDataOutcomeCallable DescribeStatisticDataCallable(const Model::DescribeStatisticDataRequest& request);

                /**
                 *This API is used to get the monitoring data of Tencent Cloud services except TKE. To pull TKE’s monitoring data, please use the API [DescribeStatisticData](https://intl.cloud.tencent.com/document/product/248/51845?from_cn_redirect=1).
You can get the monitoring data of a Tencent Cloud service by passing in its namespace, object dimension description, and monitoring metrics.
API call rate limit: 20 calls/second (1,200 calls/minute). A single request can get the data of up to 10 instances for up to 1,440 data points.
If you need to call a large number of APIs to pull metrics or objects at a time, some APIs may fail to be called due to the rate limit. We suggest you evenly arrange API calls at a time granularity.
                 * @param req GetMonitorDataRequest
                 * @return GetMonitorDataOutcome
                 */
                GetMonitorDataOutcome GetMonitorData(const Model::GetMonitorDataRequest &request);
                void GetMonitorDataAsync(const Model::GetMonitorDataRequest& request, const GetMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetMonitorDataOutcomeCallable GetMonitorDataCallable(const Model::GetMonitorDataRequest& request);

                /**
                 *This API is used to edit an alarm notification template.
                 * @param req ModifyAlarmNoticeRequest
                 * @return ModifyAlarmNoticeOutcome
                 */
                ModifyAlarmNoticeOutcome ModifyAlarmNotice(const Model::ModifyAlarmNoticeRequest &request);
                void ModifyAlarmNoticeAsync(const Model::ModifyAlarmNoticeRequest& request, const ModifyAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmNoticeOutcomeCallable ModifyAlarmNoticeCallable(const Model::ModifyAlarmNoticeRequest& request);

                /**
                 *This API is used to modify the trigger condition of an alarm policy.
                 * @param req ModifyAlarmPolicyConditionRequest
                 * @return ModifyAlarmPolicyConditionOutcome
                 */
                ModifyAlarmPolicyConditionOutcome ModifyAlarmPolicyCondition(const Model::ModifyAlarmPolicyConditionRequest &request);
                void ModifyAlarmPolicyConditionAsync(const Model::ModifyAlarmPolicyConditionRequest& request, const ModifyAlarmPolicyConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyConditionOutcomeCallable ModifyAlarmPolicyConditionCallable(const Model::ModifyAlarmPolicyConditionRequest& request);

                /**
                 *This API is used to edit the basic information of a v2.0 alarm policy, including policy name and remarks.
                 * @param req ModifyAlarmPolicyInfoRequest
                 * @return ModifyAlarmPolicyInfoOutcome
                 */
                ModifyAlarmPolicyInfoOutcome ModifyAlarmPolicyInfo(const Model::ModifyAlarmPolicyInfoRequest &request);
                void ModifyAlarmPolicyInfoAsync(const Model::ModifyAlarmPolicyInfoRequest& request, const ModifyAlarmPolicyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyInfoOutcomeCallable ModifyAlarmPolicyInfoCallable(const Model::ModifyAlarmPolicyInfoRequest& request);

                /**
                 *This API is used to modify the alarm notification template bound to an alarm policy.
                 * @param req ModifyAlarmPolicyNoticeRequest
                 * @return ModifyAlarmPolicyNoticeOutcome
                 */
                ModifyAlarmPolicyNoticeOutcome ModifyAlarmPolicyNotice(const Model::ModifyAlarmPolicyNoticeRequest &request);
                void ModifyAlarmPolicyNoticeAsync(const Model::ModifyAlarmPolicyNoticeRequest& request, const ModifyAlarmPolicyNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyNoticeOutcomeCallable ModifyAlarmPolicyNoticeCallable(const Model::ModifyAlarmPolicyNoticeRequest& request);

                /**
                 *This API is used to enable/disable an alarm policy.
                 * @param req ModifyAlarmPolicyStatusRequest
                 * @return ModifyAlarmPolicyStatusOutcome
                 */
                ModifyAlarmPolicyStatusOutcome ModifyAlarmPolicyStatus(const Model::ModifyAlarmPolicyStatusRequest &request);
                void ModifyAlarmPolicyStatusAsync(const Model::ModifyAlarmPolicyStatusRequest& request, const ModifyAlarmPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyStatusOutcomeCallable ModifyAlarmPolicyStatusCallable(const Model::ModifyAlarmPolicyStatusRequest& request);

                /**
                 *This API is used to modify the task triggered by an alarm policy. The `TriggerTasks` field contains the list of triggered tasks. If an empty array is passed in for `TriggerTasks`, it indicates to unbind all the triggered tasks from this policy.
                 * @param req ModifyAlarmPolicyTasksRequest
                 * @return ModifyAlarmPolicyTasksOutcome
                 */
                ModifyAlarmPolicyTasksOutcome ModifyAlarmPolicyTasks(const Model::ModifyAlarmPolicyTasksRequest &request);
                void ModifyAlarmPolicyTasksAsync(const Model::ModifyAlarmPolicyTasksRequest& request, const ModifyAlarmPolicyTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyTasksOutcomeCallable ModifyAlarmPolicyTasksCallable(const Model::ModifyAlarmPolicyTasksRequest& request);

                /**
                 *This API is used to modify alarm recipients.
                 * @param req ModifyAlarmReceiversRequest
                 * @return ModifyAlarmReceiversOutcome
                 */
                ModifyAlarmReceiversOutcome ModifyAlarmReceivers(const Model::ModifyAlarmReceiversRequest &request);
                void ModifyAlarmReceiversAsync(const Model::ModifyAlarmReceiversRequest& request, const ModifyAlarmReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmReceiversOutcomeCallable ModifyAlarmReceiversCallable(const Model::ModifyAlarmReceiversRequest& request);

                /**
                 *This API is used to update policy group.
                 * @param req ModifyPolicyGroupRequest
                 * @return ModifyPolicyGroupOutcome
                 */
                ModifyPolicyGroupOutcome ModifyPolicyGroup(const Model::ModifyPolicyGroupRequest &request);
                void ModifyPolicyGroupAsync(const Model::ModifyPolicyGroupRequest& request, const ModifyPolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPolicyGroupOutcomeCallable ModifyPolicyGroupCallable(const Model::ModifyPolicyGroupRequest& request);

                /**
                 *The default API request rate limit is 50 requests/sec.
The default upper limit on metrics of a single tenant is 100.
A maximum of 30 metric/value pairs can be reported at a time. When an error is returned for a request, no metrics/values in the request will be saved.

The reporting timestamp is the timestamp when you want to save the data. We recommend that you construct a timestamp at integer minutes.
The time range of a timestamp is from 300 seconds before the current time to the current time.
The data of the same IP metric/value pair must be reported by minute in chronological order.
                 * @param req PutMonitorDataRequest
                 * @return PutMonitorDataOutcome
                 */
                PutMonitorDataOutcome PutMonitorData(const Model::PutMonitorDataRequest &request);
                void PutMonitorDataAsync(const Model::PutMonitorDataRequest& request, const PutMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutMonitorDataOutcomeCallable PutMonitorDataCallable(const Model::PutMonitorDataRequest& request);

                /**
                 *This API is used to send a custom alarm notification.
                 * @param req SendCustomAlarmMsgRequest
                 * @return SendCustomAlarmMsgOutcome
                 */
                SendCustomAlarmMsgOutcome SendCustomAlarmMsg(const Model::SendCustomAlarmMsgRequest &request);
                void SendCustomAlarmMsgAsync(const Model::SendCustomAlarmMsgRequest& request, const SendCustomAlarmMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendCustomAlarmMsgOutcomeCallable SendCustomAlarmMsgCallable(const Model::SendCustomAlarmMsgRequest& request);

                /**
                 *This API is used to set an alarm policy as the default policy in the current policy type under the current project.
Alarm policies in the same type under the project will be set as non-default.
                 * @param req SetDefaultAlarmPolicyRequest
                 * @return SetDefaultAlarmPolicyOutcome
                 */
                SetDefaultAlarmPolicyOutcome SetDefaultAlarmPolicy(const Model::SetDefaultAlarmPolicyRequest &request);
                void SetDefaultAlarmPolicyAsync(const Model::SetDefaultAlarmPolicyRequest& request, const SetDefaultAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetDefaultAlarmPolicyOutcomeCallable SetDefaultAlarmPolicyCallable(const Model::SetDefaultAlarmPolicyRequest& request);

                /**
                 *This API is used to delete all bound objects.
                 * @param req UnBindingAllPolicyObjectRequest
                 * @return UnBindingAllPolicyObjectOutcome
                 */
                UnBindingAllPolicyObjectOutcome UnBindingAllPolicyObject(const Model::UnBindingAllPolicyObjectRequest &request);
                void UnBindingAllPolicyObjectAsync(const Model::UnBindingAllPolicyObjectRequest& request, const UnBindingAllPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindingAllPolicyObjectOutcomeCallable UnBindingAllPolicyObjectCallable(const Model::UnBindingAllPolicyObjectRequest& request);

                /**
                 *This API is used to delete an object that is bound to a policy.
                 * @param req UnBindingPolicyObjectRequest
                 * @return UnBindingPolicyObjectOutcome
                 */
                UnBindingPolicyObjectOutcome UnBindingPolicyObject(const Model::UnBindingPolicyObjectRequest &request);
                void UnBindingPolicyObjectAsync(const Model::UnBindingPolicyObjectRequest& request, const UnBindingPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindingPolicyObjectOutcomeCallable UnBindingPolicyObjectCallable(const Model::UnBindingPolicyObjectRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MONITORCLIENT_H_
