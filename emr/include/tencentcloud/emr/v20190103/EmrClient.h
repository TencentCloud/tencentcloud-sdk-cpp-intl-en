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

#ifndef TENCENTCLOUD_EMR_V20190103_EMRCLIENT_H_
#define TENCENTCLOUD_EMR_V20190103_EMRCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/emr/v20190103/model/AddUsersForUserManagerRequest.h>
#include <tencentcloud/emr/v20190103/model/AddUsersForUserManagerResponse.h>
#include <tencentcloud/emr/v20190103/model/CreateInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/CreateInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeClusterNodesRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeClusterNodesResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeEmrApplicationStaticsRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeEmrApplicationStaticsResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeInstancesRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeInstancesResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeInstancesListRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeInstancesListResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeResourceScheduleRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeResourceScheduleResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeUsersForUserManagerRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeUsersForUserManagerResponse.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceCreateInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceCreateInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceRenewInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceRenewInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceScaleOutInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceScaleOutInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceUpdateInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceUpdateInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourceScheduleConfigRequest.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourceScheduleConfigResponse.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourceSchedulerRequest.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourceSchedulerResponse.h>
#include <tencentcloud/emr/v20190103/model/ScaleOutInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/ScaleOutInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/TerminateInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/TerminateInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/TerminateTasksRequest.h>
#include <tencentcloud/emr/v20190103/model/TerminateTasksResponse.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            class EmrClient : public AbstractClient
            {
            public:
                EmrClient(const Credential &credential, const std::string &region);
                EmrClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddUsersForUserManagerResponse> AddUsersForUserManagerOutcome;
                typedef std::future<AddUsersForUserManagerOutcome> AddUsersForUserManagerOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::AddUsersForUserManagerRequest&, AddUsersForUserManagerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUsersForUserManagerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceResponse> CreateInstanceOutcome;
                typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::CreateInstanceRequest&, CreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterNodesResponse> DescribeClusterNodesOutcome;
                typedef std::future<DescribeClusterNodesOutcome> DescribeClusterNodesOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeClusterNodesRequest&, DescribeClusterNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEmrApplicationStaticsResponse> DescribeEmrApplicationStaticsOutcome;
                typedef std::future<DescribeEmrApplicationStaticsOutcome> DescribeEmrApplicationStaticsOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeEmrApplicationStaticsRequest&, DescribeEmrApplicationStaticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmrApplicationStaticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesListResponse> DescribeInstancesListOutcome;
                typedef std::future<DescribeInstancesListOutcome> DescribeInstancesListOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeInstancesListRequest&, DescribeInstancesListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceScheduleResponse> DescribeResourceScheduleOutcome;
                typedef std::future<DescribeResourceScheduleOutcome> DescribeResourceScheduleOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeResourceScheduleRequest&, DescribeResourceScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsersForUserManagerResponse> DescribeUsersForUserManagerOutcome;
                typedef std::future<DescribeUsersForUserManagerOutcome> DescribeUsersForUserManagerOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeUsersForUserManagerRequest&, DescribeUsersForUserManagerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersForUserManagerAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceCreateInstanceResponse> InquiryPriceCreateInstanceOutcome;
                typedef std::future<InquiryPriceCreateInstanceOutcome> InquiryPriceCreateInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::InquiryPriceCreateInstanceRequest&, InquiryPriceCreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceRenewInstanceResponse> InquiryPriceRenewInstanceOutcome;
                typedef std::future<InquiryPriceRenewInstanceOutcome> InquiryPriceRenewInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::InquiryPriceRenewInstanceRequest&, InquiryPriceRenewInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceScaleOutInstanceResponse> InquiryPriceScaleOutInstanceOutcome;
                typedef std::future<InquiryPriceScaleOutInstanceOutcome> InquiryPriceScaleOutInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::InquiryPriceScaleOutInstanceRequest&, InquiryPriceScaleOutInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceScaleOutInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceUpdateInstanceResponse> InquiryPriceUpdateInstanceOutcome;
                typedef std::future<InquiryPriceUpdateInstanceOutcome> InquiryPriceUpdateInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::InquiryPriceUpdateInstanceRequest&, InquiryPriceUpdateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceUpdateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourceScheduleConfigResponse> ModifyResourceScheduleConfigOutcome;
                typedef std::future<ModifyResourceScheduleConfigOutcome> ModifyResourceScheduleConfigOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ModifyResourceScheduleConfigRequest&, ModifyResourceScheduleConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceScheduleConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourceSchedulerResponse> ModifyResourceSchedulerOutcome;
                typedef std::future<ModifyResourceSchedulerOutcome> ModifyResourceSchedulerOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ModifyResourceSchedulerRequest&, ModifyResourceSchedulerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceSchedulerAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleOutInstanceResponse> ScaleOutInstanceOutcome;
                typedef std::future<ScaleOutInstanceOutcome> ScaleOutInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ScaleOutInstanceRequest&, ScaleOutInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateInstanceResponse> TerminateInstanceOutcome;
                typedef std::future<TerminateInstanceOutcome> TerminateInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::TerminateInstanceRequest&, TerminateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateTasksResponse> TerminateTasksOutcome;
                typedef std::future<TerminateTasksOutcome> TerminateTasksOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::TerminateTasksRequest&, TerminateTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateTasksAsyncHandler;



                /**
                 *This API is available for clusters with OpenLDAP components configured.
This API is used to add user lists (user management).
                 * @param req AddUsersForUserManagerRequest
                 * @return AddUsersForUserManagerOutcome
                 */
                AddUsersForUserManagerOutcome AddUsersForUserManager(const Model::AddUsersForUserManagerRequest &request);
                void AddUsersForUserManagerAsync(const Model::AddUsersForUserManagerRequest& request, const AddUsersForUserManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUsersForUserManagerOutcomeCallable AddUsersForUserManagerCallable(const Model::AddUsersForUserManagerRequest& request);

                /**
                 *This API is used to create an EMR cluster instance.
                 * @param req CreateInstanceRequest
                 * @return CreateInstanceOutcome
                 */
                CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest &request);
                void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request);

                /**
                 *This API is used to query the information of a hardware node.
                 * @param req DescribeClusterNodesRequest
                 * @return DescribeClusterNodesOutcome
                 */
                DescribeClusterNodesOutcome DescribeClusterNodes(const Model::DescribeClusterNodesRequest &request);
                void DescribeClusterNodesAsync(const Model::DescribeClusterNodesRequest& request, const DescribeClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterNodesOutcomeCallable DescribeClusterNodesCallable(const Model::DescribeClusterNodesRequest& request);

                /**
                 * This API is used to query the Yarn application statistics.
                 * @param req DescribeEmrApplicationStaticsRequest
                 * @return DescribeEmrApplicationStaticsOutcome
                 */
                DescribeEmrApplicationStaticsOutcome DescribeEmrApplicationStatics(const Model::DescribeEmrApplicationStaticsRequest &request);
                void DescribeEmrApplicationStaticsAsync(const Model::DescribeEmrApplicationStaticsRequest& request, const DescribeEmrApplicationStaticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEmrApplicationStaticsOutcomeCallable DescribeEmrApplicationStaticsCallable(const Model::DescribeEmrApplicationStaticsRequest& request);

                /**
                 *This API is used to query EMR instances.
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *This API is used to query EMR cluster instances.
                 * @param req DescribeInstancesListRequest
                 * @return DescribeInstancesListOutcome
                 */
                DescribeInstancesListOutcome DescribeInstancesList(const Model::DescribeInstancesListRequest &request);
                void DescribeInstancesListAsync(const Model::DescribeInstancesListRequest& request, const DescribeInstancesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesListOutcomeCallable DescribeInstancesListCallable(const Model::DescribeInstancesListRequest& request);

                /**
                 *This API is used to get data from the YARN Resource Scheduling page.
                 * @param req DescribeResourceScheduleRequest
                 * @return DescribeResourceScheduleOutcome
                 */
                DescribeResourceScheduleOutcome DescribeResourceSchedule(const Model::DescribeResourceScheduleRequest &request);
                void DescribeResourceScheduleAsync(const Model::DescribeResourceScheduleRequest& request, const DescribeResourceScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceScheduleOutcomeCallable DescribeResourceScheduleCallable(const Model::DescribeResourceScheduleRequest& request);

                /**
                 *This API is available for clusters with OpenLDAP components configured.
This API is used to export users in batches. For a Kerberos cluster, set `NeedKeytabInfo` to `true` to obtain the download link of the Keytab file. If `SupportDownLoadKeyTab` is `true`, but `DownLoadKeyTabUrl` is null, the Keytab file is not ready yet (being generated) in the backend.
                 * @param req DescribeUsersForUserManagerRequest
                 * @return DescribeUsersForUserManagerOutcome
                 */
                DescribeUsersForUserManagerOutcome DescribeUsersForUserManager(const Model::DescribeUsersForUserManagerRequest &request);
                void DescribeUsersForUserManagerAsync(const Model::DescribeUsersForUserManagerRequest& request, const DescribeUsersForUserManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsersForUserManagerOutcomeCallable DescribeUsersForUserManagerCallable(const Model::DescribeUsersForUserManagerRequest& request);

                /**
                 *This API is used to query price of instance creation.
                 * @param req InquiryPriceCreateInstanceRequest
                 * @return InquiryPriceCreateInstanceOutcome
                 */
                InquiryPriceCreateInstanceOutcome InquiryPriceCreateInstance(const Model::InquiryPriceCreateInstanceRequest &request);
                void InquiryPriceCreateInstanceAsync(const Model::InquiryPriceCreateInstanceRequest& request, const InquiryPriceCreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateInstanceOutcomeCallable InquiryPriceCreateInstanceCallable(const Model::InquiryPriceCreateInstanceRequest& request);

                /**
                 *This API is used to query the price for renewal.
                 * @param req InquiryPriceRenewInstanceRequest
                 * @return InquiryPriceRenewInstanceOutcome
                 */
                InquiryPriceRenewInstanceOutcome InquiryPriceRenewInstance(const Model::InquiryPriceRenewInstanceRequest &request);
                void InquiryPriceRenewInstanceAsync(const Model::InquiryPriceRenewInstanceRequest& request, const InquiryPriceRenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRenewInstanceOutcomeCallable InquiryPriceRenewInstanceCallable(const Model::InquiryPriceRenewInstanceRequest& request);

                /**
                 *This API is used to query price of scale-out.
                 * @param req InquiryPriceScaleOutInstanceRequest
                 * @return InquiryPriceScaleOutInstanceOutcome
                 */
                InquiryPriceScaleOutInstanceOutcome InquiryPriceScaleOutInstance(const Model::InquiryPriceScaleOutInstanceRequest &request);
                void InquiryPriceScaleOutInstanceAsync(const Model::InquiryPriceScaleOutInstanceRequest& request, const InquiryPriceScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceScaleOutInstanceOutcomeCallable InquiryPriceScaleOutInstanceCallable(const Model::InquiryPriceScaleOutInstanceRequest& request);

                /**
                 *This API is used to query price of scaling.
                 * @param req InquiryPriceUpdateInstanceRequest
                 * @return InquiryPriceUpdateInstanceOutcome
                 */
                InquiryPriceUpdateInstanceOutcome InquiryPriceUpdateInstance(const Model::InquiryPriceUpdateInstanceRequest &request);
                void InquiryPriceUpdateInstanceAsync(const Model::InquiryPriceUpdateInstanceRequest& request, const InquiryPriceUpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceUpdateInstanceOutcomeCallable InquiryPriceUpdateInstanceCallable(const Model::InquiryPriceUpdateInstanceRequest& request);

                /**
                 *This API is used to modify the resource configuration of YARN Resource Scheduling.
                 * @param req ModifyResourceScheduleConfigRequest
                 * @return ModifyResourceScheduleConfigOutcome
                 */
                ModifyResourceScheduleConfigOutcome ModifyResourceScheduleConfig(const Model::ModifyResourceScheduleConfigRequest &request);
                void ModifyResourceScheduleConfigAsync(const Model::ModifyResourceScheduleConfigRequest& request, const ModifyResourceScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourceScheduleConfigOutcomeCallable ModifyResourceScheduleConfigCallable(const Model::ModifyResourceScheduleConfigRequest& request);

                /**
                 *This API is used to modify the YARN resource scheduler (the change will take effect after you click Apply).
                 * @param req ModifyResourceSchedulerRequest
                 * @return ModifyResourceSchedulerOutcome
                 */
                ModifyResourceSchedulerOutcome ModifyResourceScheduler(const Model::ModifyResourceSchedulerRequest &request);
                void ModifyResourceSchedulerAsync(const Model::ModifyResourceSchedulerRequest& request, const ModifyResourceSchedulerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourceSchedulerOutcomeCallable ModifyResourceSchedulerCallable(const Model::ModifyResourceSchedulerRequest& request);

                /**
                 *This API is used to scale out instances.
                 * @param req ScaleOutInstanceRequest
                 * @return ScaleOutInstanceOutcome
                 */
                ScaleOutInstanceOutcome ScaleOutInstance(const Model::ScaleOutInstanceRequest &request);
                void ScaleOutInstanceAsync(const Model::ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleOutInstanceOutcomeCallable ScaleOutInstanceCallable(const Model::ScaleOutInstanceRequest& request);

                /**
                 *This API is used to terminate EMR instances. It is only supported in the official paid edition of EMR.
                 * @param req TerminateInstanceRequest
                 * @return TerminateInstanceOutcome
                 */
                TerminateInstanceOutcome TerminateInstance(const Model::TerminateInstanceRequest &request);
                void TerminateInstanceAsync(const Model::TerminateInstanceRequest& request, const TerminateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateInstanceOutcomeCallable TerminateInstanceCallable(const Model::TerminateInstanceRequest& request);

                /**
                 *This API is used to terminate a task node.
                 * @param req TerminateTasksRequest
                 * @return TerminateTasksOutcome
                 */
                TerminateTasksOutcome TerminateTasks(const Model::TerminateTasksRequest &request);
                void TerminateTasksAsync(const Model::TerminateTasksRequest& request, const TerminateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateTasksOutcomeCallable TerminateTasksCallable(const Model::TerminateTasksRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_EMRCLIENT_H_
