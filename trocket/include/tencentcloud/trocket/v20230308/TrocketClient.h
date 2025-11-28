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

#ifndef TENCENTCLOUD_TROCKET_V20230308_TROCKETCLIENT_H_
#define TENCENTCLOUD_TROCKET_V20230308_TROCKETCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/trocket/v20230308/model/ChangeMigratingTopicToNextStageRequest.h>
#include <tencentcloud/trocket/v20230308/model/ChangeMigratingTopicToNextStageResponse.h>
#include <tencentcloud/trocket/v20230308/model/CreateConsumerGroupRequest.h>
#include <tencentcloud/trocket/v20230308/model/CreateConsumerGroupResponse.h>
#include <tencentcloud/trocket/v20230308/model/CreateInstanceRequest.h>
#include <tencentcloud/trocket/v20230308/model/CreateInstanceResponse.h>
#include <tencentcloud/trocket/v20230308/model/CreateRoleRequest.h>
#include <tencentcloud/trocket/v20230308/model/CreateRoleResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteConsumerGroupRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteConsumerGroupResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteInstanceRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteInstanceResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteRoleRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteRoleResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteSmoothMigrationTaskRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteSmoothMigrationTaskResponse.h>
#include <tencentcloud/trocket/v20230308/model/DeleteTopicRequest.h>
#include <tencentcloud/trocket/v20230308/model/DeleteTopicResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerClientRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerClientResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerClientListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerClientListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerGroupRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerGroupResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerLagRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeConsumerLagResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeFusionInstanceListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeFusionInstanceListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeInstanceRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeInstanceResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeInstanceListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeInstanceListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMessageRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMessageResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMessageListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMessageListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMessageTraceRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMessageTraceResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMigratingGroupStatsRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMigratingGroupStatsResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMigratingTopicListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMigratingTopicListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMigratingTopicStatsRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMigratingTopicStatsResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMigrationTaskListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeMigrationTaskListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeProducerListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeProducerListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeProductSKUsRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeProductSKUsResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeRoleListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeRoleListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeSmoothMigrationTaskListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeSmoothMigrationTaskListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeSourceClusterGroupListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeSourceClusterGroupListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeTopicRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeTopicResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeTopicListRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeTopicListResponse.h>
#include <tencentcloud/trocket/v20230308/model/DescribeTopicListByGroupRequest.h>
#include <tencentcloud/trocket/v20230308/model/DescribeTopicListByGroupResponse.h>
#include <tencentcloud/trocket/v20230308/model/DoHealthCheckOnMigratingTopicRequest.h>
#include <tencentcloud/trocket/v20230308/model/DoHealthCheckOnMigratingTopicResponse.h>
#include <tencentcloud/trocket/v20230308/model/ModifyConsumerGroupRequest.h>
#include <tencentcloud/trocket/v20230308/model/ModifyConsumerGroupResponse.h>
#include <tencentcloud/trocket/v20230308/model/ModifyInstanceRequest.h>
#include <tencentcloud/trocket/v20230308/model/ModifyInstanceResponse.h>
#include <tencentcloud/trocket/v20230308/model/ModifyInstanceEndpointRequest.h>
#include <tencentcloud/trocket/v20230308/model/ModifyInstanceEndpointResponse.h>
#include <tencentcloud/trocket/v20230308/model/ModifyRoleRequest.h>
#include <tencentcloud/trocket/v20230308/model/ModifyRoleResponse.h>
#include <tencentcloud/trocket/v20230308/model/ModifyTopicRequest.h>
#include <tencentcloud/trocket/v20230308/model/ModifyTopicResponse.h>
#include <tencentcloud/trocket/v20230308/model/RemoveMigratingTopicRequest.h>
#include <tencentcloud/trocket/v20230308/model/RemoveMigratingTopicResponse.h>
#include <tencentcloud/trocket/v20230308/model/ResendDeadLetterMessageRequest.h>
#include <tencentcloud/trocket/v20230308/model/ResendDeadLetterMessageResponse.h>
#include <tencentcloud/trocket/v20230308/model/ResetConsumerGroupOffsetRequest.h>
#include <tencentcloud/trocket/v20230308/model/ResetConsumerGroupOffsetResponse.h>
#include <tencentcloud/trocket/v20230308/model/RollbackMigratingTopicStageRequest.h>
#include <tencentcloud/trocket/v20230308/model/RollbackMigratingTopicStageResponse.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            class TrocketClient : public AbstractClient
            {
            public:
                TrocketClient(const Credential &credential, const std::string &region);
                TrocketClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ChangeMigratingTopicToNextStageResponse> ChangeMigratingTopicToNextStageOutcome;
                typedef std::future<ChangeMigratingTopicToNextStageOutcome> ChangeMigratingTopicToNextStageOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ChangeMigratingTopicToNextStageRequest&, ChangeMigratingTopicToNextStageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeMigratingTopicToNextStageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConsumerGroupResponse> CreateConsumerGroupOutcome;
                typedef std::future<CreateConsumerGroupOutcome> CreateConsumerGroupOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::CreateConsumerGroupRequest&, CreateConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceResponse> CreateInstanceOutcome;
                typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::CreateInstanceRequest&, CreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoleResponse> CreateRoleOutcome;
                typedef std::future<CreateRoleOutcome> CreateRoleOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::CreateRoleRequest&, CreateRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConsumerGroupResponse> DeleteConsumerGroupOutcome;
                typedef std::future<DeleteConsumerGroupOutcome> DeleteConsumerGroupOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DeleteConsumerGroupRequest&, DeleteConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstanceResponse> DeleteInstanceOutcome;
                typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DeleteInstanceRequest&, DeleteInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoleResponse> DeleteRoleOutcome;
                typedef std::future<DeleteRoleOutcome> DeleteRoleOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DeleteRoleRequest&, DeleteRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSmoothMigrationTaskResponse> DeleteSmoothMigrationTaskOutcome;
                typedef std::future<DeleteSmoothMigrationTaskOutcome> DeleteSmoothMigrationTaskOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DeleteSmoothMigrationTaskRequest&, DeleteSmoothMigrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmoothMigrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicResponse> DeleteTopicOutcome;
                typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DeleteTopicRequest&, DeleteTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumerClientResponse> DescribeConsumerClientOutcome;
                typedef std::future<DescribeConsumerClientOutcome> DescribeConsumerClientOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeConsumerClientRequest&, DescribeConsumerClientOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerClientAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumerClientListResponse> DescribeConsumerClientListOutcome;
                typedef std::future<DescribeConsumerClientListOutcome> DescribeConsumerClientListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeConsumerClientListRequest&, DescribeConsumerClientListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerClientListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumerGroupResponse> DescribeConsumerGroupOutcome;
                typedef std::future<DescribeConsumerGroupOutcome> DescribeConsumerGroupOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeConsumerGroupRequest&, DescribeConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumerLagResponse> DescribeConsumerLagOutcome;
                typedef std::future<DescribeConsumerLagOutcome> DescribeConsumerLagOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeConsumerLagRequest&, DescribeConsumerLagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerLagAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFusionInstanceListResponse> DescribeFusionInstanceListOutcome;
                typedef std::future<DescribeFusionInstanceListOutcome> DescribeFusionInstanceListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeFusionInstanceListRequest&, DescribeFusionInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFusionInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceResponse> DescribeInstanceOutcome;
                typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeInstanceRequest&, DescribeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceListResponse> DescribeInstanceListOutcome;
                typedef std::future<DescribeInstanceListOutcome> DescribeInstanceListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeInstanceListRequest&, DescribeInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMessageResponse> DescribeMessageOutcome;
                typedef std::future<DescribeMessageOutcome> DescribeMessageOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMessageRequest&, DescribeMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMessageListResponse> DescribeMessageListOutcome;
                typedef std::future<DescribeMessageListOutcome> DescribeMessageListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMessageListRequest&, DescribeMessageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMessageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMessageTraceResponse> DescribeMessageTraceOutcome;
                typedef std::future<DescribeMessageTraceOutcome> DescribeMessageTraceOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMessageTraceRequest&, DescribeMessageTraceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMessageTraceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigratingGroupStatsResponse> DescribeMigratingGroupStatsOutcome;
                typedef std::future<DescribeMigratingGroupStatsOutcome> DescribeMigratingGroupStatsOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMigratingGroupStatsRequest&, DescribeMigratingGroupStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigratingGroupStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigratingTopicListResponse> DescribeMigratingTopicListOutcome;
                typedef std::future<DescribeMigratingTopicListOutcome> DescribeMigratingTopicListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMigratingTopicListRequest&, DescribeMigratingTopicListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigratingTopicListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigratingTopicStatsResponse> DescribeMigratingTopicStatsOutcome;
                typedef std::future<DescribeMigratingTopicStatsOutcome> DescribeMigratingTopicStatsOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMigratingTopicStatsRequest&, DescribeMigratingTopicStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigratingTopicStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrationTaskListResponse> DescribeMigrationTaskListOutcome;
                typedef std::future<DescribeMigrationTaskListOutcome> DescribeMigrationTaskListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeMigrationTaskListRequest&, DescribeMigrationTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProducerListResponse> DescribeProducerListOutcome;
                typedef std::future<DescribeProducerListOutcome> DescribeProducerListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeProducerListRequest&, DescribeProducerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProducerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductSKUsResponse> DescribeProductSKUsOutcome;
                typedef std::future<DescribeProductSKUsOutcome> DescribeProductSKUsOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeProductSKUsRequest&, DescribeProductSKUsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductSKUsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoleListResponse> DescribeRoleListOutcome;
                typedef std::future<DescribeRoleListOutcome> DescribeRoleListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeRoleListRequest&, DescribeRoleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSmoothMigrationTaskListResponse> DescribeSmoothMigrationTaskListOutcome;
                typedef std::future<DescribeSmoothMigrationTaskListOutcome> DescribeSmoothMigrationTaskListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeSmoothMigrationTaskListRequest&, DescribeSmoothMigrationTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmoothMigrationTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSourceClusterGroupListResponse> DescribeSourceClusterGroupListOutcome;
                typedef std::future<DescribeSourceClusterGroupListOutcome> DescribeSourceClusterGroupListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeSourceClusterGroupListRequest&, DescribeSourceClusterGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSourceClusterGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicResponse> DescribeTopicOutcome;
                typedef std::future<DescribeTopicOutcome> DescribeTopicOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeTopicRequest&, DescribeTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicListResponse> DescribeTopicListOutcome;
                typedef std::future<DescribeTopicListOutcome> DescribeTopicListOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeTopicListRequest&, DescribeTopicListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicListByGroupResponse> DescribeTopicListByGroupOutcome;
                typedef std::future<DescribeTopicListByGroupOutcome> DescribeTopicListByGroupOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DescribeTopicListByGroupRequest&, DescribeTopicListByGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicListByGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DoHealthCheckOnMigratingTopicResponse> DoHealthCheckOnMigratingTopicOutcome;
                typedef std::future<DoHealthCheckOnMigratingTopicOutcome> DoHealthCheckOnMigratingTopicOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::DoHealthCheckOnMigratingTopicRequest&, DoHealthCheckOnMigratingTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DoHealthCheckOnMigratingTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConsumerGroupResponse> ModifyConsumerGroupOutcome;
                typedef std::future<ModifyConsumerGroupOutcome> ModifyConsumerGroupOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ModifyConsumerGroupRequest&, ModifyConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceResponse> ModifyInstanceOutcome;
                typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ModifyInstanceRequest&, ModifyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceEndpointResponse> ModifyInstanceEndpointOutcome;
                typedef std::future<ModifyInstanceEndpointOutcome> ModifyInstanceEndpointOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ModifyInstanceEndpointRequest&, ModifyInstanceEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRoleResponse> ModifyRoleOutcome;
                typedef std::future<ModifyRoleOutcome> ModifyRoleOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ModifyRoleRequest&, ModifyRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTopicResponse> ModifyTopicOutcome;
                typedef std::future<ModifyTopicOutcome> ModifyTopicOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ModifyTopicRequest&, ModifyTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveMigratingTopicResponse> RemoveMigratingTopicOutcome;
                typedef std::future<RemoveMigratingTopicOutcome> RemoveMigratingTopicOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::RemoveMigratingTopicRequest&, RemoveMigratingTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveMigratingTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::ResendDeadLetterMessageResponse> ResendDeadLetterMessageOutcome;
                typedef std::future<ResendDeadLetterMessageOutcome> ResendDeadLetterMessageOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ResendDeadLetterMessageRequest&, ResendDeadLetterMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResendDeadLetterMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetConsumerGroupOffsetResponse> ResetConsumerGroupOffsetOutcome;
                typedef std::future<ResetConsumerGroupOffsetOutcome> ResetConsumerGroupOffsetOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::ResetConsumerGroupOffsetRequest&, ResetConsumerGroupOffsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetConsumerGroupOffsetAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackMigratingTopicStageResponse> RollbackMigratingTopicStageOutcome;
                typedef std::future<RollbackMigratingTopicStageOutcome> RollbackMigratingTopicStageOutcomeCallable;
                typedef std::function<void(const TrocketClient*, const Model::RollbackMigratingTopicStageRequest&, RollbackMigratingTopicStageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackMigratingTopicStageAsyncHandler;



                /**
                 *This API is used to modify the Topic status during migration and go to next step.
                 * @param req ChangeMigratingTopicToNextStageRequest
                 * @return ChangeMigratingTopicToNextStageOutcome
                 */
                ChangeMigratingTopicToNextStageOutcome ChangeMigratingTopicToNextStage(const Model::ChangeMigratingTopicToNextStageRequest &request);
                void ChangeMigratingTopicToNextStageAsync(const Model::ChangeMigratingTopicToNextStageRequest& request, const ChangeMigratingTopicToNextStageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeMigratingTopicToNextStageOutcomeCallable ChangeMigratingTopicToNextStageCallable(const Model::ChangeMigratingTopicToNextStageRequest& request);

                /**
                 *Create consumer groups.
                 * @param req CreateConsumerGroupRequest
                 * @return CreateConsumerGroupOutcome
                 */
                CreateConsumerGroupOutcome CreateConsumerGroup(const Model::CreateConsumerGroupRequest &request);
                void CreateConsumerGroupAsync(const Model::CreateConsumerGroupRequest& request, const CreateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsumerGroupOutcomeCallable CreateConsumerGroupCallable(const Model::CreateConsumerGroupRequest& request);

                /**
                 *This API is used to create a RocketMQ 5.x cluster.
                 * @param req CreateInstanceRequest
                 * @return CreateInstanceOutcome
                 */
                CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest &request);
                void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request);

                /**
                 *This API is used to add a role.
                 * @param req CreateRoleRequest
                 * @return CreateRoleOutcome
                 */
                CreateRoleOutcome CreateRole(const Model::CreateRoleRequest &request);
                void CreateRoleAsync(const Model::CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoleOutcomeCallable CreateRoleCallable(const Model::CreateRoleRequest& request);

                /**
                 *This API is used to delete a consumer group. After a consumer group is deleted, all configurations and related data of the consumer group are cleared and cannot be restored. After deletion, online consumer clients report errors. It is recommended to take clients offline in advance.
                 * @param req DeleteConsumerGroupRequest
                 * @return DeleteConsumerGroupOutcome
                 */
                DeleteConsumerGroupOutcome DeleteConsumerGroup(const Model::DeleteConsumerGroupRequest &request);
                void DeleteConsumerGroupAsync(const Model::DeleteConsumerGroupRequest& request, const DeleteConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConsumerGroupOutcomeCallable DeleteConsumerGroupCallable(const Model::DeleteConsumerGroupRequest& request);

                /**
                 *This API is used to delete a TDMQ RocketMQ 5.x cluster. Topics, consumer groups, and roles in use should be deleted first.
                 * @param req DeleteInstanceRequest
                 * @return DeleteInstanceOutcome
                 */
                DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest &request);
                void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request);

                /**
                 *This API is used to delete a role. Make sure that the related information on this role is not used in the current code. After the role is deleted, the keys (AccessKey and SecretKey) used to produce or consume messages with this role become invalid immediately.
                 * @param req DeleteRoleRequest
                 * @return DeleteRoleOutcome
                 */
                DeleteRoleOutcome DeleteRole(const Model::DeleteRoleRequest &request);
                void DeleteRoleAsync(const Model::DeleteRoleRequest& request, const DeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoleOutcomeCallable DeleteRoleCallable(const Model::DeleteRoleRequest& request);

                /**
                 *This API is used to delete a smooth migration task. Only canceled tasks can be deleted.
                 * @param req DeleteSmoothMigrationTaskRequest
                 * @return DeleteSmoothMigrationTaskOutcome
                 */
                DeleteSmoothMigrationTaskOutcome DeleteSmoothMigrationTask(const Model::DeleteSmoothMigrationTaskRequest &request);
                void DeleteSmoothMigrationTaskAsync(const Model::DeleteSmoothMigrationTaskRequest& request, const DeleteSmoothMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSmoothMigrationTaskOutcomeCallable DeleteSmoothMigrationTaskCallable(const Model::DeleteSmoothMigrationTaskRequest& request);

                /**
                 *This API is used to delete a topic. After deletion, all configurations and related data of the topic will be cleared and cannot be restored.
                 * @param req DeleteTopicRequest
                 * @return DeleteTopicOutcome
                 */
                DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest &request);
                void DeleteTopicAsync(const Model::DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicOutcomeCallable DeleteTopicCallable(const Model::DeleteTopicRequest& request);

                /**
                 *Query consumer client details.
                 * @param req DescribeConsumerClientRequest
                 * @return DescribeConsumerClientOutcome
                 */
                DescribeConsumerClientOutcome DescribeConsumerClient(const Model::DescribeConsumerClientRequest &request);
                void DescribeConsumerClientAsync(const Model::DescribeConsumerClientRequest& request, const DescribeConsumerClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerClientOutcomeCallable DescribeConsumerClientCallable(const Model::DescribeConsumerClientRequest& request);

                /**
                 *This API is used to query the client connection list of a consumer group.
                 * @param req DescribeConsumerClientListRequest
                 * @return DescribeConsumerClientListOutcome
                 */
                DescribeConsumerClientListOutcome DescribeConsumerClientList(const Model::DescribeConsumerClientListRequest &request);
                void DescribeConsumerClientListAsync(const Model::DescribeConsumerClientListRequest& request, const DescribeConsumerClientListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerClientListOutcomeCallable DescribeConsumerClientListCallable(const Model::DescribeConsumerClientListRequest& request);

                /**
                 *Query consumer group details.
                 * @param req DescribeConsumerGroupRequest
                 * @return DescribeConsumerGroupOutcome
                 */
                DescribeConsumerGroupOutcome DescribeConsumerGroup(const Model::DescribeConsumerGroupRequest &request);
                void DescribeConsumerGroupAsync(const Model::DescribeConsumerGroupRequest& request, const DescribeConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerGroupOutcomeCallable DescribeConsumerGroupCallable(const Model::DescribeConsumerGroupRequest& request);

                /**
                 *This API is used to query the number of heaped messages in a specified consumer group.
                 * @param req DescribeConsumerLagRequest
                 * @return DescribeConsumerLagOutcome
                 */
                DescribeConsumerLagOutcome DescribeConsumerLag(const Model::DescribeConsumerLagRequest &request);
                void DescribeConsumerLagAsync(const Model::DescribeConsumerLagRequest& request, const DescribeConsumerLagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerLagOutcomeCallable DescribeConsumerLagCallable(const Model::DescribeConsumerLagRequest& request);

                /**
                 *This API is used to describe clusters, supporting both 4.x and 5.x clusters. Among them, parameter usage of Filters is as follows:.

-InstanceName, the cluster name, supports fuzzy query and can be obtained from the API return value or console.
-InstanceId Cluster ID, exact query, obtain from the current API or console.
- InstanceType cluster type, see [InstanceItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#InstanceItem) data structure, supports multiple selections.
- Version: cluster edition, enumeration values as follows:.
-4 RocketMQ 4.x clusters.
-Deploy a RocketMQ 5.x cluster.

This API is used to demonstrate Filters.
 [{ "Name": "InstanceId", "Values": ["rmq-72mo3a9o"] }]
                 * @param req DescribeFusionInstanceListRequest
                 * @return DescribeFusionInstanceListOutcome
                 */
                DescribeFusionInstanceListOutcome DescribeFusionInstanceList(const Model::DescribeFusionInstanceListRequest &request);
                void DescribeFusionInstanceListAsync(const Model::DescribeFusionInstanceListRequest& request, const DescribeFusionInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFusionInstanceListOutcomeCallable DescribeFusionInstanceListCallable(const Model::DescribeFusionInstanceListRequest& request);

                /**
                 *This API is used to query RocketMQ 5.x cluster information.
                 * @param req DescribeInstanceRequest
                 * @return DescribeInstanceOutcome
                 */
                DescribeInstanceOutcome DescribeInstance(const Model::DescribeInstanceRequest &request);
                void DescribeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOutcomeCallable DescribeInstanceCallable(const Model::DescribeInstanceRequest& request);

                /**
                 *This API is used to describe clusters. It only supports 5.x clusters. Description of the Filters parameter use is as follows:.

-InstanceName Cluster name, supports fuzzy search.
- InstanceId The Tencent Cloud RocketMQ instance ID, obtained from the [DescribeFusionInstanceList](https://www.tencentcloud.comom/document/api/1493/106745?from_cn_redirect=1) API or console.
- InstanceType cluster type, see [InstanceItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#InstanceItem) data structure, supports multiple selections.
-InstanceStatus cluster status, see [InstanceItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#InstanceItem) data structure, supports multiple selections.

This API is used to demonstrate Filters.
[{
    "Name": "InstanceId",
    "Values": ["rmq-72mo3a9o"]
}]
                 * @param req DescribeInstanceListRequest
                 * @return DescribeInstanceListOutcome
                 */
                DescribeInstanceListOutcome DescribeInstanceList(const Model::DescribeInstanceListRequest &request);
                void DescribeInstanceListAsync(const Model::DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceListOutcomeCallable DescribeInstanceListCallable(const Model::DescribeInstanceListRequest& request);

                /**
                 *Query message details.
                 * @param req DescribeMessageRequest
                 * @return DescribeMessageOutcome
                 */
                DescribeMessageOutcome DescribeMessage(const Model::DescribeMessageRequest &request);
                void DescribeMessageAsync(const Model::DescribeMessageRequest& request, const DescribeMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageOutcomeCallable DescribeMessageCallable(const Model::DescribeMessageRequest& request);

                /**
                 *Query the message list. If querying dead letter messages, set the ConsumerGroup parameter.
                 * @param req DescribeMessageListRequest
                 * @return DescribeMessageListOutcome
                 */
                DescribeMessageListOutcome DescribeMessageList(const Model::DescribeMessageListRequest &request);
                void DescribeMessageListAsync(const Model::DescribeMessageListRequest& request, const DescribeMessageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageListOutcomeCallable DescribeMessageListCallable(const Model::DescribeMessageListRequest& request);

                /**
                 *This API is used to query message trace by message ID.
                 * @param req DescribeMessageTraceRequest
                 * @return DescribeMessageTraceOutcome
                 */
                DescribeMessageTraceOutcome DescribeMessageTrace(const Model::DescribeMessageTraceRequest &request);
                void DescribeMessageTraceAsync(const Model::DescribeMessageTraceRequest& request, const DescribeMessageTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageTraceOutcomeCallable DescribeMessageTraceCallable(const Model::DescribeMessageTraceRequest& request);

                /**
                 *This API is used to view real-time information of migration consumption groups.
                 * @param req DescribeMigratingGroupStatsRequest
                 * @return DescribeMigratingGroupStatsOutcome
                 */
                DescribeMigratingGroupStatsOutcome DescribeMigratingGroupStats(const Model::DescribeMigratingGroupStatsRequest &request);
                void DescribeMigratingGroupStatsAsync(const Model::DescribeMigratingGroupStatsRequest& request, const DescribeMigratingGroupStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigratingGroupStatsOutcomeCallable DescribeMigratingGroupStatsCallable(const Model::DescribeMigratingGroupStatsRequest& request);

                /**
                 *This API is used to query the Topic migration status list.

The Filters field is a query filter that supports the following conditions:.
This API is used to get topic names with fuzzy query support.
This api is used to query the migration status. See the data structure in MigratingTopic (https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#MigratingTopic).
This API is used to manage namespaces, valid only for 4.x clusters.

This API is used to demonstrate Filters.
[{
    "Name": "TopicName",
    "Values": ["topic-a"]
}]
                 * @param req DescribeMigratingTopicListRequest
                 * @return DescribeMigratingTopicListOutcome
                 */
                DescribeMigratingTopicListOutcome DescribeMigratingTopicList(const Model::DescribeMigratingTopicListRequest &request);
                void DescribeMigratingTopicListAsync(const Model::DescribeMigratingTopicListRequest& request, const DescribeMigratingTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigratingTopicListOutcomeCallable DescribeMigratingTopicListCallable(const Model::DescribeMigratingTopicListRequest& request);

                /**
                 *This API is used to query real-time data of migration topics.
                 * @param req DescribeMigratingTopicStatsRequest
                 * @return DescribeMigratingTopicStatsOutcome
                 */
                DescribeMigratingTopicStatsOutcome DescribeMigratingTopicStats(const Model::DescribeMigratingTopicStatsRequest &request);
                void DescribeMigratingTopicStatsAsync(const Model::DescribeMigratingTopicStatsRequest& request, const DescribeMigratingTopicStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigratingTopicStatsOutcomeCallable DescribeMigratingTopicStatsCallable(const Model::DescribeMigratingTopicStatsRequest& request);

                /**
                 *This API is used to search the data migration task list. Filter parameter usage instructions are as follows:.

This API is used to search precisely according to task ID.
InstanceId. This API is used to precisely search based on instance ID.
This API is used to search by task Type.
                 * @param req DescribeMigrationTaskListRequest
                 * @return DescribeMigrationTaskListOutcome
                 */
                DescribeMigrationTaskListOutcome DescribeMigrationTaskList(const Model::DescribeMigrationTaskListRequest &request);
                void DescribeMigrationTaskListAsync(const Model::DescribeMigrationTaskListRequest& request, const DescribeMigrationTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrationTaskListOutcomeCallable DescribeMigrationTaskListCallable(const Model::DescribeMigrationTaskListRequest& request);

                /**
                 *This API is used to query producer list information associated with a topic. Filters support the following criteria:.
-client IP.
-client ID.
                 * @param req DescribeProducerListRequest
                 * @return DescribeProducerListOutcome
                 */
                DescribeProducerListOutcome DescribeProducerList(const Model::DescribeProducerListRequest &request);
                void DescribeProducerListAsync(const Model::DescribeProducerListRequest& request, const DescribeProducerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProducerListOutcomeCallable DescribeProducerListCallable(const Model::DescribeProducerListRequest& request);

                /**
                 *This API is used to query product sales specifications against RocketMQ 5.x clusters.
                 * @param req DescribeProductSKUsRequest
                 * @return DescribeProductSKUsOutcome
                 */
                DescribeProductSKUsOutcome DescribeProductSKUs(const Model::DescribeProductSKUsRequest &request);
                void DescribeProductSKUsAsync(const Model::DescribeProductSKUsRequest& request, const DescribeProductSKUsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductSKUsOutcomeCallable DescribeProductSKUsCallable(const Model::DescribeProductSKUsRequest& request);

                /**
                 *This API is used to query the list of roles. Filter parameter usage instructions are as follows:.

-Role name supports fuzzy search and can be obtained from the API return value or console.
-AccessKey, support fuzzy search, obtain from API return value or console.

This API is used to demonstrate Filters. 
[{ "Name": "RoleName", "Values": ["test_role"] }]
                 * @param req DescribeRoleListRequest
                 * @return DescribeRoleListOutcome
                 */
                DescribeRoleListOutcome DescribeRoleList(const Model::DescribeRoleListRequest &request);
                void DescribeRoleListAsync(const Model::DescribeRoleListRequest& request, const DescribeRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoleListOutcomeCallable DescribeRoleListCallable(const Model::DescribeRoleListRequest& request);

                /**
                 *This API is used to query the migration task list smoothly.

This API is used to query the supported fields of the query parameter Filters as follows:.
Task status, supports multiple selections. 
ConnectionType, network connection type, supports multiple selections. See the description of SmoothMigrationTaskItem (https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#SmoothMigrationTaskItem).
This API is used to search for an instance by instance ID with precise matching. 
This API is used to query task names with fuzzy search support.

This API is used to demonstrate Filters.
[{
    "Name": "InstanceId",
    "Values": ["rmq-1gzecldfg"]
}]
                 * @param req DescribeSmoothMigrationTaskListRequest
                 * @return DescribeSmoothMigrationTaskListOutcome
                 */
                DescribeSmoothMigrationTaskListOutcome DescribeSmoothMigrationTaskList(const Model::DescribeSmoothMigrationTaskListRequest &request);
                void DescribeSmoothMigrationTaskListAsync(const Model::DescribeSmoothMigrationTaskListRequest& request, const DescribeSmoothMigrationTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmoothMigrationTaskListOutcomeCallable DescribeSmoothMigrationTaskListCallable(const Model::DescribeSmoothMigrationTaskListRequest& request);

                /**
                 *This API is used to obtain the group list of the source cluster during the smooth migration process.

The Filters field is a query filter that supports the following fields:.
This API is used to query consumer group names with fuzzy search support.
This API is used to check whether the data is Imported.
This api is used to check the import status. See SourceClusterGroupConfig (https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#SourceClusterGroupConfig) for details.
This API is used to manage namespaces, valid only for 4.x clusters.

This API is used to demonstrate Filters.
[{
    "Name": "GroupName",
    "Values": ["group-a"]
}]
                 * @param req DescribeSourceClusterGroupListRequest
                 * @return DescribeSourceClusterGroupListOutcome
                 */
                DescribeSourceClusterGroupListOutcome DescribeSourceClusterGroupList(const Model::DescribeSourceClusterGroupListRequest &request);
                void DescribeSourceClusterGroupListAsync(const Model::DescribeSourceClusterGroupListRequest& request, const DescribeSourceClusterGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSourceClusterGroupListOutcomeCallable DescribeSourceClusterGroupListCallable(const Model::DescribeSourceClusterGroupListRequest& request);

                /**
                 *This API is used to query topic details. The Offset and Limit parameters are pagination parameters for consumer groups subscribing to this topic. The Filter parameter usage instructions are as follows:.

-The ConsumerGroup name can be obtained from the [ConsumeGroupItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#ConsumeGroupItem) in the API response of [DescribeConsumerGroupList](https://www.tencentcloud.comom/document/api/1493/101535?from_cn_redirect=1) or from the console.

This API is used to demonstrate Filters. 
[{ "Name": "ConsumerGroup", "Values": ["test_group"] }]
                 * @param req DescribeTopicRequest
                 * @return DescribeTopicOutcome
                 */
                DescribeTopicOutcome DescribeTopic(const Model::DescribeTopicRequest &request);
                void DescribeTopicAsync(const Model::DescribeTopicRequest& request, const DescribeTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicOutcomeCallable DescribeTopicCallable(const Model::DescribeTopicRequest& request);

                /**
                 *This API is used to search the topic list. Filter parameter usage instructions are as follows:.

-TopicName supports fuzzy search. Obtain it from the [TopicItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#TopicItem) in the [DescribeTopicList](https://www.tencentcloud.comom/document/api/1493/96030?from_cn_redirect=1) API response or the console.
-Search by TopicType, support multiple selections. See the TopicType field in the [DescribeTopic](https://www.tencentcloud.comom/document/api/1493/97945?from_cn_redirect=1) API.

This API is used to demonstrate Filters.
 [{ "Name": "TopicName", "Values": ["test_topic"] }]
                 * @param req DescribeTopicListRequest
                 * @return DescribeTopicListOutcome
                 */
                DescribeTopicListOutcome DescribeTopicList(const Model::DescribeTopicListRequest &request);
                void DescribeTopicListAsync(const Model::DescribeTopicListRequest& request, const DescribeTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicListOutcomeCallable DescribeTopicListCallable(const Model::DescribeTopicListRequest& request);

                /**
                 *This API is used to get topic list by consumer group. Filter parameter usage instructions are as follows:.

-TopicName. It can be obtained from [TopicItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#TopicItem) returned by the API [DescribeTopicList](https://www.tencentcloud.comom/document/api/1493/96030?from_cn_redirect=1) or from the console.

This API is used to demonstrate Filters. 
[{ "Name": "TopicName", "Values": ["test_topic"] }]
                 * @param req DescribeTopicListByGroupRequest
                 * @return DescribeTopicListByGroupOutcome
                 */
                DescribeTopicListByGroupOutcome DescribeTopicListByGroup(const Model::DescribeTopicListByGroupRequest &request);
                void DescribeTopicListByGroupAsync(const Model::DescribeTopicListByGroupRequest& request, const DescribeTopicListByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicListByGroupOutcomeCallable DescribeTopicListByGroupCallable(const Model::DescribeTopicListByGroupRequest& request);

                /**
                 *This API is used to check whether the topics being migrated are in normal status. Only topics in normal status can enter the next migration stage.
                 * @param req DoHealthCheckOnMigratingTopicRequest
                 * @return DoHealthCheckOnMigratingTopicOutcome
                 */
                DoHealthCheckOnMigratingTopicOutcome DoHealthCheckOnMigratingTopic(const Model::DoHealthCheckOnMigratingTopicRequest &request);
                void DoHealthCheckOnMigratingTopicAsync(const Model::DoHealthCheckOnMigratingTopicRequest& request, const DoHealthCheckOnMigratingTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DoHealthCheckOnMigratingTopicOutcomeCallable DoHealthCheckOnMigratingTopicCallable(const Model::DoHealthCheckOnMigratingTopicRequest& request);

                /**
                 *Modify consumer group attributes.
                 * @param req ModifyConsumerGroupRequest
                 * @return ModifyConsumerGroupOutcome
                 */
                ModifyConsumerGroupOutcome ModifyConsumerGroup(const Model::ModifyConsumerGroupRequest &request);
                void ModifyConsumerGroupAsync(const Model::ModifyConsumerGroupRequest& request, const ModifyConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConsumerGroupOutcomeCallable ModifyConsumerGroupCallable(const Model::ModifyConsumerGroupRequest& request);

                /**
                 *This API is used to modify attributes of a TDMQ RocketMQ 5.x cluster. Only running clusters support this operation.
                 * @param req ModifyInstanceRequest
                 * @return ModifyInstanceOutcome
                 */
                ModifyInstanceOutcome ModifyInstance(const Model::ModifyInstanceRequest &request);
                void ModifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceOutcomeCallable ModifyInstanceCallable(const Model::ModifyInstanceRequest& request);

                /**
                 *This API is used to modify access points of a TDMQ RocketMQ 5.x cluster. Make sure that the access points exist before the operation.
                 * @param req ModifyInstanceEndpointRequest
                 * @return ModifyInstanceEndpointOutcome
                 */
                ModifyInstanceEndpointOutcome ModifyInstanceEndpoint(const Model::ModifyInstanceEndpointRequest &request);
                void ModifyInstanceEndpointAsync(const Model::ModifyInstanceEndpointRequest& request, const ModifyInstanceEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceEndpointOutcomeCallable ModifyInstanceEndpointCallable(const Model::ModifyInstanceEndpointRequest& request);

                /**
                 *This API is used to modify a role.
                 * @param req ModifyRoleRequest
                 * @return ModifyRoleOutcome
                 */
                ModifyRoleOutcome ModifyRole(const Model::ModifyRoleRequest &request);
                void ModifyRoleAsync(const Model::ModifyRoleRequest& request, const ModifyRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRoleOutcomeCallable ModifyRoleCallable(const Model::ModifyRoleRequest& request);

                /**
                 *Modify topic attributes.
                 * @param req ModifyTopicRequest
                 * @return ModifyTopicOutcome
                 */
                ModifyTopicOutcome ModifyTopic(const Model::ModifyTopicRequest &request);
                void ModifyTopicAsync(const Model::ModifyTopicRequest& request, const ModifyTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTopicOutcomeCallable ModifyTopicCallable(const Model::ModifyTopicRequest& request);

                /**
                 *This API is used to remove a topic from the migration list. It is valid only when the topic is in the initial state.
                 * @param req RemoveMigratingTopicRequest
                 * @return RemoveMigratingTopicOutcome
                 */
                RemoveMigratingTopicOutcome RemoveMigratingTopic(const Model::RemoveMigratingTopicRequest &request);
                void RemoveMigratingTopicAsync(const Model::RemoveMigratingTopicRequest& request, const RemoveMigratingTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveMigratingTopicOutcomeCallable RemoveMigratingTopicCallable(const Model::RemoveMigratingTopicRequest& request);

                /**
                 *This API is used to resend dead letter messages.
                 * @param req ResendDeadLetterMessageRequest
                 * @return ResendDeadLetterMessageOutcome
                 */
                ResendDeadLetterMessageOutcome ResendDeadLetterMessage(const Model::ResendDeadLetterMessageRequest &request);
                void ResendDeadLetterMessageAsync(const Model::ResendDeadLetterMessageRequest& request, const ResendDeadLetterMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResendDeadLetterMessageOutcomeCallable ResendDeadLetterMessageCallable(const Model::ResendDeadLetterMessageRequest& request);

                /**
                 *Reset the consumption position.
                 * @param req ResetConsumerGroupOffsetRequest
                 * @return ResetConsumerGroupOffsetOutcome
                 */
                ResetConsumerGroupOffsetOutcome ResetConsumerGroupOffset(const Model::ResetConsumerGroupOffsetRequest &request);
                void ResetConsumerGroupOffsetAsync(const Model::ResetConsumerGroupOffsetRequest& request, const ResetConsumerGroupOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetConsumerGroupOffsetOutcomeCallable ResetConsumerGroupOffsetCallable(const Model::ResetConsumerGroupOffsetRequest& request);

                /**
                 *This API is used to roll back the topic that is undergoing migration to the previous stage.
                 * @param req RollbackMigratingTopicStageRequest
                 * @return RollbackMigratingTopicStageOutcome
                 */
                RollbackMigratingTopicStageOutcome RollbackMigratingTopicStage(const Model::RollbackMigratingTopicStageRequest &request);
                void RollbackMigratingTopicStageAsync(const Model::RollbackMigratingTopicStageRequest& request, const RollbackMigratingTopicStageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackMigratingTopicStageOutcomeCallable RollbackMigratingTopicStageCallable(const Model::RollbackMigratingTopicStageRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_TROCKETCLIENT_H_
