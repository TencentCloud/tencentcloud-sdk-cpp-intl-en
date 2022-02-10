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

#ifndef TENCENTCLOUD_TCR_V20190924_TCRCLIENT_H_
#define TENCENTCLOUD_TCR_V20190924_TCRCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tcr/v20190924/model/CheckInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/CheckInstanceResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateImmutableTagRulesRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateImmutableTagRulesResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateInstanceTokenRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateInstanceTokenResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateMultipleSecurityPolicyRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateMultipleSecurityPolicyResponse.h>
#include <tencentcloud/tcr/v20190924/model/CreateReplicationInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/CreateReplicationInstanceResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImmutableTagRulesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteImmutableTagRulesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DeleteMultipleSecurityPolicyRequest.h>
#include <tencentcloud/tcr/v20190924/model/DeleteMultipleSecurityPolicyResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImmutableTagRulesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeImmutableTagRulesResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceCreateTasksRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceCreateTasksResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceSyncStatusRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceSyncStatusResponse.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstancesRequest.h>
#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstancesResponse.h>
#include <tencentcloud/tcr/v20190924/model/ManageReplicationRequest.h>
#include <tencentcloud/tcr/v20190924/model/ManageReplicationResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyImmutableTagRulesRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyImmutableTagRulesResponse.h>
#include <tencentcloud/tcr/v20190924/model/ModifyInstanceRequest.h>
#include <tencentcloud/tcr/v20190924/model/ModifyInstanceResponse.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            class TcrClient : public AbstractClient
            {
            public:
                TcrClient(const Credential &credential, const std::string &region);
                TcrClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CheckInstanceResponse> CheckInstanceOutcome;
                typedef std::future<CheckInstanceOutcome> CheckInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CheckInstanceRequest&, CheckInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImmutableTagRulesResponse> CreateImmutableTagRulesOutcome;
                typedef std::future<CreateImmutableTagRulesOutcome> CreateImmutableTagRulesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateImmutableTagRulesRequest&, CreateImmutableTagRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImmutableTagRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceTokenResponse> CreateInstanceTokenOutcome;
                typedef std::future<CreateInstanceTokenOutcome> CreateInstanceTokenOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateInstanceTokenRequest&, CreateInstanceTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMultipleSecurityPolicyResponse> CreateMultipleSecurityPolicyOutcome;
                typedef std::future<CreateMultipleSecurityPolicyOutcome> CreateMultipleSecurityPolicyOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateMultipleSecurityPolicyRequest&, CreateMultipleSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMultipleSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReplicationInstanceResponse> CreateReplicationInstanceOutcome;
                typedef std::future<CreateReplicationInstanceOutcome> CreateReplicationInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::CreateReplicationInstanceRequest&, CreateReplicationInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReplicationInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImmutableTagRulesResponse> DeleteImmutableTagRulesOutcome;
                typedef std::future<DeleteImmutableTagRulesOutcome> DeleteImmutableTagRulesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteImmutableTagRulesRequest&, DeleteImmutableTagRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImmutableTagRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMultipleSecurityPolicyResponse> DeleteMultipleSecurityPolicyOutcome;
                typedef std::future<DeleteMultipleSecurityPolicyOutcome> DeleteMultipleSecurityPolicyOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DeleteMultipleSecurityPolicyRequest&, DeleteMultipleSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMultipleSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImmutableTagRulesResponse> DescribeImmutableTagRulesOutcome;
                typedef std::future<DescribeImmutableTagRulesOutcome> DescribeImmutableTagRulesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeImmutableTagRulesRequest&, DescribeImmutableTagRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImmutableTagRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReplicationInstanceCreateTasksResponse> DescribeReplicationInstanceCreateTasksOutcome;
                typedef std::future<DescribeReplicationInstanceCreateTasksOutcome> DescribeReplicationInstanceCreateTasksOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeReplicationInstanceCreateTasksRequest&, DescribeReplicationInstanceCreateTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicationInstanceCreateTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReplicationInstanceSyncStatusResponse> DescribeReplicationInstanceSyncStatusOutcome;
                typedef std::future<DescribeReplicationInstanceSyncStatusOutcome> DescribeReplicationInstanceSyncStatusOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeReplicationInstanceSyncStatusRequest&, DescribeReplicationInstanceSyncStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicationInstanceSyncStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReplicationInstancesResponse> DescribeReplicationInstancesOutcome;
                typedef std::future<DescribeReplicationInstancesOutcome> DescribeReplicationInstancesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::DescribeReplicationInstancesRequest&, DescribeReplicationInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicationInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ManageReplicationResponse> ManageReplicationOutcome;
                typedef std::future<ManageReplicationOutcome> ManageReplicationOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ManageReplicationRequest&, ManageReplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageReplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImmutableTagRulesResponse> ModifyImmutableTagRulesOutcome;
                typedef std::future<ModifyImmutableTagRulesOutcome> ModifyImmutableTagRulesOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyImmutableTagRulesRequest&, ModifyImmutableTagRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImmutableTagRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceResponse> ModifyInstanceOutcome;
                typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
                typedef std::function<void(const TcrClient*, const Model::ModifyInstanceRequest&, ModifyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;



                /**
                 *This API is used to verify the information of the Enterprise Edition instance.
                 * @param req CheckInstanceRequest
                 * @return CheckInstanceOutcome
                 */
                CheckInstanceOutcome CheckInstance(const Model::CheckInstanceRequest &request);
                void CheckInstanceAsync(const Model::CheckInstanceRequest& request, const CheckInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckInstanceOutcomeCallable CheckInstanceCallable(const Model::CheckInstanceRequest& request);

                /**
                 *This API is used to create the tag immutability rule.
                 * @param req CreateImmutableTagRulesRequest
                 * @return CreateImmutableTagRulesOutcome
                 */
                CreateImmutableTagRulesOutcome CreateImmutableTagRules(const Model::CreateImmutableTagRulesRequest &request);
                void CreateImmutableTagRulesAsync(const Model::CreateImmutableTagRulesRequest& request, const CreateImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImmutableTagRulesOutcomeCallable CreateImmutableTagRulesCallable(const Model::CreateImmutableTagRulesRequest& request);

                /**
                 *This API is used to create a temporary or long-term instance access credential.
                 * @param req CreateInstanceTokenRequest
                 * @return CreateInstanceTokenOutcome
                 */
                CreateInstanceTokenOutcome CreateInstanceToken(const Model::CreateInstanceTokenRequest &request);
                void CreateInstanceTokenAsync(const Model::CreateInstanceTokenRequest& request, const CreateInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceTokenOutcomeCallable CreateInstanceTokenCallable(const Model::CreateInstanceTokenRequest& request);

                /**
                 *This API is used to create multiple public network access allowlist policies of the TCR instance.
                 * @param req CreateMultipleSecurityPolicyRequest
                 * @return CreateMultipleSecurityPolicyOutcome
                 */
                CreateMultipleSecurityPolicyOutcome CreateMultipleSecurityPolicy(const Model::CreateMultipleSecurityPolicyRequest &request);
                void CreateMultipleSecurityPolicyAsync(const Model::CreateMultipleSecurityPolicyRequest& request, const CreateMultipleSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMultipleSecurityPolicyOutcomeCallable CreateMultipleSecurityPolicyCallable(const Model::CreateMultipleSecurityPolicyRequest& request);

                /**
                 *This API is used to create a replication instance.
                 * @param req CreateReplicationInstanceRequest
                 * @return CreateReplicationInstanceOutcome
                 */
                CreateReplicationInstanceOutcome CreateReplicationInstance(const Model::CreateReplicationInstanceRequest &request);
                void CreateReplicationInstanceAsync(const Model::CreateReplicationInstanceRequest& request, const CreateReplicationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReplicationInstanceOutcomeCallable CreateReplicationInstanceCallable(const Model::CreateReplicationInstanceRequest& request);

                /**
                 * This API is used to delete the tag immutability rule.
                 * @param req DeleteImmutableTagRulesRequest
                 * @return DeleteImmutableTagRulesOutcome
                 */
                DeleteImmutableTagRulesOutcome DeleteImmutableTagRules(const Model::DeleteImmutableTagRulesRequest &request);
                void DeleteImmutableTagRulesAsync(const Model::DeleteImmutableTagRulesRequest& request, const DeleteImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImmutableTagRulesOutcomeCallable DeleteImmutableTagRulesCallable(const Model::DeleteImmutableTagRulesRequest& request);

                /**
                 *This API is used to delete multiple public network access allowlist policies of the instance.
                 * @param req DeleteMultipleSecurityPolicyRequest
                 * @return DeleteMultipleSecurityPolicyOutcome
                 */
                DeleteMultipleSecurityPolicyOutcome DeleteMultipleSecurityPolicy(const Model::DeleteMultipleSecurityPolicyRequest &request);
                void DeleteMultipleSecurityPolicyAsync(const Model::DeleteMultipleSecurityPolicyRequest& request, const DeleteMultipleSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMultipleSecurityPolicyOutcomeCallable DeleteMultipleSecurityPolicyCallable(const Model::DeleteMultipleSecurityPolicyRequest& request);

                /**
                 *This API is used to list the tag immutability rule.
                 * @param req DescribeImmutableTagRulesRequest
                 * @return DescribeImmutableTagRulesOutcome
                 */
                DescribeImmutableTagRulesOutcome DescribeImmutableTagRules(const Model::DescribeImmutableTagRulesRequest &request);
                void DescribeImmutableTagRulesAsync(const Model::DescribeImmutableTagRulesRequest& request, const DescribeImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImmutableTagRulesOutcomeCallable DescribeImmutableTagRulesCallable(const Model::DescribeImmutableTagRulesRequest& request);

                /**
                 *This API is used to query the task status of creating a replication instance.
                 * @param req DescribeReplicationInstanceCreateTasksRequest
                 * @return DescribeReplicationInstanceCreateTasksOutcome
                 */
                DescribeReplicationInstanceCreateTasksOutcome DescribeReplicationInstanceCreateTasks(const Model::DescribeReplicationInstanceCreateTasksRequest &request);
                void DescribeReplicationInstanceCreateTasksAsync(const Model::DescribeReplicationInstanceCreateTasksRequest& request, const DescribeReplicationInstanceCreateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReplicationInstanceCreateTasksOutcomeCallable DescribeReplicationInstanceCreateTasksCallable(const Model::DescribeReplicationInstanceCreateTasksRequest& request);

                /**
                 *This API is used to query the synchronization status of a replication instance.
                 * @param req DescribeReplicationInstanceSyncStatusRequest
                 * @return DescribeReplicationInstanceSyncStatusOutcome
                 */
                DescribeReplicationInstanceSyncStatusOutcome DescribeReplicationInstanceSyncStatus(const Model::DescribeReplicationInstanceSyncStatusRequest &request);
                void DescribeReplicationInstanceSyncStatusAsync(const Model::DescribeReplicationInstanceSyncStatusRequest& request, const DescribeReplicationInstanceSyncStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReplicationInstanceSyncStatusOutcomeCallable DescribeReplicationInstanceSyncStatusCallable(const Model::DescribeReplicationInstanceSyncStatusRequest& request);

                /**
                 *This API is used to query the list of replication instances.
                 * @param req DescribeReplicationInstancesRequest
                 * @return DescribeReplicationInstancesOutcome
                 */
                DescribeReplicationInstancesOutcome DescribeReplicationInstances(const Model::DescribeReplicationInstancesRequest &request);
                void DescribeReplicationInstancesAsync(const Model::DescribeReplicationInstancesRequest& request, const DescribeReplicationInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReplicationInstancesOutcomeCallable DescribeReplicationInstancesCallable(const Model::DescribeReplicationInstancesRequest& request);

                /**
                 *This API is used to manage the instance synchronization rule.
                 * @param req ManageReplicationRequest
                 * @return ManageReplicationOutcome
                 */
                ManageReplicationOutcome ManageReplication(const Model::ManageReplicationRequest &request);
                void ManageReplicationAsync(const Model::ManageReplicationRequest& request, const ManageReplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageReplicationOutcomeCallable ManageReplicationCallable(const Model::ManageReplicationRequest& request);

                /**
                 *This API is used to update the tag immutability rule.
                 * @param req ModifyImmutableTagRulesRequest
                 * @return ModifyImmutableTagRulesOutcome
                 */
                ModifyImmutableTagRulesOutcome ModifyImmutableTagRules(const Model::ModifyImmutableTagRulesRequest &request);
                void ModifyImmutableTagRulesAsync(const Model::ModifyImmutableTagRulesRequest& request, const ModifyImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImmutableTagRulesOutcomeCallable ModifyImmutableTagRulesCallable(const Model::ModifyImmutableTagRulesRequest& request);

                /**
                 *This API is used to update instance information.
                 * @param req ModifyInstanceRequest
                 * @return ModifyInstanceOutcome
                 */
                ModifyInstanceOutcome ModifyInstance(const Model::ModifyInstanceRequest &request);
                void ModifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceOutcomeCallable ModifyInstanceCallable(const Model::ModifyInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_TCRCLIENT_H_
