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

#ifndef TENCENTCLOUD_CFS_V20190719_CFSCLIENT_H_
#define TENCENTCLOUD_CFS_V20190719_CFSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cfs/v20190719/model/BindAutoSnapshotPolicyRequest.h>
#include <tencentcloud/cfs/v20190719/model/BindAutoSnapshotPolicyResponse.h>
#include <tencentcloud/cfs/v20190719/model/CreateAutoSnapshotPolicyRequest.h>
#include <tencentcloud/cfs/v20190719/model/CreateAutoSnapshotPolicyResponse.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsFileSystemRequest.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsFileSystemResponse.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsPGroupRequest.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsPGroupResponse.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsRuleRequest.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsRuleResponse.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsSnapshotRequest.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsSnapshotResponse.h>
#include <tencentcloud/cfs/v20190719/model/CreateMigrationTaskRequest.h>
#include <tencentcloud/cfs/v20190719/model/CreateMigrationTaskResponse.h>
#include <tencentcloud/cfs/v20190719/model/DeleteAutoSnapshotPolicyRequest.h>
#include <tencentcloud/cfs/v20190719/model/DeleteAutoSnapshotPolicyResponse.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsFileSystemRequest.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsFileSystemResponse.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsPGroupRequest.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsPGroupResponse.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsRuleRequest.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsRuleResponse.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsSnapshotRequest.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsSnapshotResponse.h>
#include <tencentcloud/cfs/v20190719/model/DeleteMigrationTaskRequest.h>
#include <tencentcloud/cfs/v20190719/model/DeleteMigrationTaskResponse.h>
#include <tencentcloud/cfs/v20190719/model/DeleteMountTargetRequest.h>
#include <tencentcloud/cfs/v20190719/model/DeleteMountTargetResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeAutoSnapshotPoliciesRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeAutoSnapshotPoliciesResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeAvailableZoneInfoRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeAvailableZoneInfoResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeBucketListRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeBucketListResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemClientsRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemClientsResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemsRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemsResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsPGroupsRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsPGroupsResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsRulesRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsRulesResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsServiceStatusRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsServiceStatusResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsSnapshotOverviewRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsSnapshotOverviewResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsSnapshotsRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsSnapshotsResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeMigrationTasksRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeMigrationTasksResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeMountTargetsRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeMountTargetsResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeSnapshotOperationLogsRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeSnapshotOperationLogsResponse.h>
#include <tencentcloud/cfs/v20190719/model/ModifyFileSystemAutoScaleUpRuleRequest.h>
#include <tencentcloud/cfs/v20190719/model/ModifyFileSystemAutoScaleUpRuleResponse.h>
#include <tencentcloud/cfs/v20190719/model/ScaleUpFileSystemRequest.h>
#include <tencentcloud/cfs/v20190719/model/ScaleUpFileSystemResponse.h>
#include <tencentcloud/cfs/v20190719/model/SignUpCfsServiceRequest.h>
#include <tencentcloud/cfs/v20190719/model/SignUpCfsServiceResponse.h>
#include <tencentcloud/cfs/v20190719/model/StopMigrationTaskRequest.h>
#include <tencentcloud/cfs/v20190719/model/StopMigrationTaskResponse.h>
#include <tencentcloud/cfs/v20190719/model/UnbindAutoSnapshotPolicyRequest.h>
#include <tencentcloud/cfs/v20190719/model/UnbindAutoSnapshotPolicyResponse.h>
#include <tencentcloud/cfs/v20190719/model/UpdateAutoSnapshotPolicyRequest.h>
#include <tencentcloud/cfs/v20190719/model/UpdateAutoSnapshotPolicyResponse.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemNameRequest.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemNameResponse.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemPGroupRequest.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemPGroupResponse.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemSizeLimitRequest.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemSizeLimitResponse.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsPGroupRequest.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsPGroupResponse.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsRuleRequest.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsRuleResponse.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsSnapshotAttributeRequest.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsSnapshotAttributeResponse.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            class CfsClient : public AbstractClient
            {
            public:
                CfsClient(const Credential &credential, const std::string &region);
                CfsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindAutoSnapshotPolicyResponse> BindAutoSnapshotPolicyOutcome;
                typedef std::future<BindAutoSnapshotPolicyOutcome> BindAutoSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::BindAutoSnapshotPolicyRequest&, BindAutoSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindAutoSnapshotPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAutoSnapshotPolicyResponse> CreateAutoSnapshotPolicyOutcome;
                typedef std::future<CreateAutoSnapshotPolicyOutcome> CreateAutoSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::CreateAutoSnapshotPolicyRequest&, CreateAutoSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoSnapshotPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCfsFileSystemResponse> CreateCfsFileSystemOutcome;
                typedef std::future<CreateCfsFileSystemOutcome> CreateCfsFileSystemOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::CreateCfsFileSystemRequest&, CreateCfsFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCfsFileSystemAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCfsPGroupResponse> CreateCfsPGroupOutcome;
                typedef std::future<CreateCfsPGroupOutcome> CreateCfsPGroupOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::CreateCfsPGroupRequest&, CreateCfsPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCfsPGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCfsRuleResponse> CreateCfsRuleOutcome;
                typedef std::future<CreateCfsRuleOutcome> CreateCfsRuleOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::CreateCfsRuleRequest&, CreateCfsRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCfsRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCfsSnapshotResponse> CreateCfsSnapshotOutcome;
                typedef std::future<CreateCfsSnapshotOutcome> CreateCfsSnapshotOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::CreateCfsSnapshotRequest&, CreateCfsSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCfsSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMigrationTaskResponse> CreateMigrationTaskOutcome;
                typedef std::future<CreateMigrationTaskOutcome> CreateMigrationTaskOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::CreateMigrationTaskRequest&, CreateMigrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAutoSnapshotPolicyResponse> DeleteAutoSnapshotPolicyOutcome;
                typedef std::future<DeleteAutoSnapshotPolicyOutcome> DeleteAutoSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DeleteAutoSnapshotPolicyRequest&, DeleteAutoSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoSnapshotPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCfsFileSystemResponse> DeleteCfsFileSystemOutcome;
                typedef std::future<DeleteCfsFileSystemOutcome> DeleteCfsFileSystemOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DeleteCfsFileSystemRequest&, DeleteCfsFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCfsFileSystemAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCfsPGroupResponse> DeleteCfsPGroupOutcome;
                typedef std::future<DeleteCfsPGroupOutcome> DeleteCfsPGroupOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DeleteCfsPGroupRequest&, DeleteCfsPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCfsPGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCfsRuleResponse> DeleteCfsRuleOutcome;
                typedef std::future<DeleteCfsRuleOutcome> DeleteCfsRuleOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DeleteCfsRuleRequest&, DeleteCfsRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCfsRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCfsSnapshotResponse> DeleteCfsSnapshotOutcome;
                typedef std::future<DeleteCfsSnapshotOutcome> DeleteCfsSnapshotOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DeleteCfsSnapshotRequest&, DeleteCfsSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCfsSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMigrationTaskResponse> DeleteMigrationTaskOutcome;
                typedef std::future<DeleteMigrationTaskOutcome> DeleteMigrationTaskOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DeleteMigrationTaskRequest&, DeleteMigrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMigrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMountTargetResponse> DeleteMountTargetOutcome;
                typedef std::future<DeleteMountTargetOutcome> DeleteMountTargetOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DeleteMountTargetRequest&, DeleteMountTargetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMountTargetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoSnapshotPoliciesResponse> DescribeAutoSnapshotPoliciesOutcome;
                typedef std::future<DescribeAutoSnapshotPoliciesOutcome> DescribeAutoSnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeAutoSnapshotPoliciesRequest&, DescribeAutoSnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoSnapshotPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAvailableZoneInfoResponse> DescribeAvailableZoneInfoOutcome;
                typedef std::future<DescribeAvailableZoneInfoOutcome> DescribeAvailableZoneInfoOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeAvailableZoneInfoRequest&, DescribeAvailableZoneInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableZoneInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBucketListResponse> DescribeBucketListOutcome;
                typedef std::future<DescribeBucketListOutcome> DescribeBucketListOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeBucketListRequest&, DescribeBucketListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBucketListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCfsFileSystemClientsResponse> DescribeCfsFileSystemClientsOutcome;
                typedef std::future<DescribeCfsFileSystemClientsOutcome> DescribeCfsFileSystemClientsOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeCfsFileSystemClientsRequest&, DescribeCfsFileSystemClientsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfsFileSystemClientsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCfsFileSystemsResponse> DescribeCfsFileSystemsOutcome;
                typedef std::future<DescribeCfsFileSystemsOutcome> DescribeCfsFileSystemsOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeCfsFileSystemsRequest&, DescribeCfsFileSystemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfsFileSystemsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCfsPGroupsResponse> DescribeCfsPGroupsOutcome;
                typedef std::future<DescribeCfsPGroupsOutcome> DescribeCfsPGroupsOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeCfsPGroupsRequest&, DescribeCfsPGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfsPGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCfsRulesResponse> DescribeCfsRulesOutcome;
                typedef std::future<DescribeCfsRulesOutcome> DescribeCfsRulesOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeCfsRulesRequest&, DescribeCfsRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfsRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCfsServiceStatusResponse> DescribeCfsServiceStatusOutcome;
                typedef std::future<DescribeCfsServiceStatusOutcome> DescribeCfsServiceStatusOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeCfsServiceStatusRequest&, DescribeCfsServiceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfsServiceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCfsSnapshotOverviewResponse> DescribeCfsSnapshotOverviewOutcome;
                typedef std::future<DescribeCfsSnapshotOverviewOutcome> DescribeCfsSnapshotOverviewOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeCfsSnapshotOverviewRequest&, DescribeCfsSnapshotOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfsSnapshotOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCfsSnapshotsResponse> DescribeCfsSnapshotsOutcome;
                typedef std::future<DescribeCfsSnapshotsOutcome> DescribeCfsSnapshotsOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeCfsSnapshotsRequest&, DescribeCfsSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfsSnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrationTasksResponse> DescribeMigrationTasksOutcome;
                typedef std::future<DescribeMigrationTasksOutcome> DescribeMigrationTasksOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeMigrationTasksRequest&, DescribeMigrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMountTargetsResponse> DescribeMountTargetsOutcome;
                typedef std::future<DescribeMountTargetsOutcome> DescribeMountTargetsOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeMountTargetsRequest&, DescribeMountTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMountTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotOperationLogsResponse> DescribeSnapshotOperationLogsOutcome;
                typedef std::future<DescribeSnapshotOperationLogsOutcome> DescribeSnapshotOperationLogsOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeSnapshotOperationLogsRequest&, DescribeSnapshotOperationLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotOperationLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFileSystemAutoScaleUpRuleResponse> ModifyFileSystemAutoScaleUpRuleOutcome;
                typedef std::future<ModifyFileSystemAutoScaleUpRuleOutcome> ModifyFileSystemAutoScaleUpRuleOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::ModifyFileSystemAutoScaleUpRuleRequest&, ModifyFileSystemAutoScaleUpRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFileSystemAutoScaleUpRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleUpFileSystemResponse> ScaleUpFileSystemOutcome;
                typedef std::future<ScaleUpFileSystemOutcome> ScaleUpFileSystemOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::ScaleUpFileSystemRequest&, ScaleUpFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleUpFileSystemAsyncHandler;
                typedef Outcome<Core::Error, Model::SignUpCfsServiceResponse> SignUpCfsServiceOutcome;
                typedef std::future<SignUpCfsServiceOutcome> SignUpCfsServiceOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::SignUpCfsServiceRequest&, SignUpCfsServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SignUpCfsServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::StopMigrationTaskResponse> StopMigrationTaskOutcome;
                typedef std::future<StopMigrationTaskOutcome> StopMigrationTaskOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::StopMigrationTaskRequest&, StopMigrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMigrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindAutoSnapshotPolicyResponse> UnbindAutoSnapshotPolicyOutcome;
                typedef std::future<UnbindAutoSnapshotPolicyOutcome> UnbindAutoSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::UnbindAutoSnapshotPolicyRequest&, UnbindAutoSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindAutoSnapshotPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAutoSnapshotPolicyResponse> UpdateAutoSnapshotPolicyOutcome;
                typedef std::future<UpdateAutoSnapshotPolicyOutcome> UpdateAutoSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::UpdateAutoSnapshotPolicyRequest&, UpdateAutoSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAutoSnapshotPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCfsFileSystemNameResponse> UpdateCfsFileSystemNameOutcome;
                typedef std::future<UpdateCfsFileSystemNameOutcome> UpdateCfsFileSystemNameOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::UpdateCfsFileSystemNameRequest&, UpdateCfsFileSystemNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCfsFileSystemNameAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCfsFileSystemPGroupResponse> UpdateCfsFileSystemPGroupOutcome;
                typedef std::future<UpdateCfsFileSystemPGroupOutcome> UpdateCfsFileSystemPGroupOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::UpdateCfsFileSystemPGroupRequest&, UpdateCfsFileSystemPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCfsFileSystemPGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCfsFileSystemSizeLimitResponse> UpdateCfsFileSystemSizeLimitOutcome;
                typedef std::future<UpdateCfsFileSystemSizeLimitOutcome> UpdateCfsFileSystemSizeLimitOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::UpdateCfsFileSystemSizeLimitRequest&, UpdateCfsFileSystemSizeLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCfsFileSystemSizeLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCfsPGroupResponse> UpdateCfsPGroupOutcome;
                typedef std::future<UpdateCfsPGroupOutcome> UpdateCfsPGroupOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::UpdateCfsPGroupRequest&, UpdateCfsPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCfsPGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCfsRuleResponse> UpdateCfsRuleOutcome;
                typedef std::future<UpdateCfsRuleOutcome> UpdateCfsRuleOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::UpdateCfsRuleRequest&, UpdateCfsRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCfsRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCfsSnapshotAttributeResponse> UpdateCfsSnapshotAttributeOutcome;
                typedef std::future<UpdateCfsSnapshotAttributeOutcome> UpdateCfsSnapshotAttributeOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::UpdateCfsSnapshotAttributeRequest&, UpdateCfsSnapshotAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCfsSnapshotAttributeAsyncHandler;



                /**
                 *This API is used to bind one or multiple file systems to a snapshot policy. A file system can be bound to only one policy.
                 * @param req BindAutoSnapshotPolicyRequest
                 * @return BindAutoSnapshotPolicyOutcome
                 */
                BindAutoSnapshotPolicyOutcome BindAutoSnapshotPolicy(const Model::BindAutoSnapshotPolicyRequest &request);
                void BindAutoSnapshotPolicyAsync(const Model::BindAutoSnapshotPolicyRequest& request, const BindAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindAutoSnapshotPolicyOutcomeCallable BindAutoSnapshotPolicyCallable(const Model::BindAutoSnapshotPolicyRequest& request);

                /**
                 *This API is used to create a scheduled snapshot policy.
                 * @param req CreateAutoSnapshotPolicyRequest
                 * @return CreateAutoSnapshotPolicyOutcome
                 */
                CreateAutoSnapshotPolicyOutcome CreateAutoSnapshotPolicy(const Model::CreateAutoSnapshotPolicyRequest &request);
                void CreateAutoSnapshotPolicyAsync(const Model::CreateAutoSnapshotPolicyRequest& request, const CreateAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAutoSnapshotPolicyOutcomeCallable CreateAutoSnapshotPolicyCallable(const Model::CreateAutoSnapshotPolicyRequest& request);

                /**
                 *This API is used to create a file system.
                 * @param req CreateCfsFileSystemRequest
                 * @return CreateCfsFileSystemOutcome
                 */
                CreateCfsFileSystemOutcome CreateCfsFileSystem(const Model::CreateCfsFileSystemRequest &request);
                void CreateCfsFileSystemAsync(const Model::CreateCfsFileSystemRequest& request, const CreateCfsFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCfsFileSystemOutcomeCallable CreateCfsFileSystemCallable(const Model::CreateCfsFileSystemRequest& request);

                /**
                 *This API is used to create a permission group.
                 * @param req CreateCfsPGroupRequest
                 * @return CreateCfsPGroupOutcome
                 */
                CreateCfsPGroupOutcome CreateCfsPGroup(const Model::CreateCfsPGroupRequest &request);
                void CreateCfsPGroupAsync(const Model::CreateCfsPGroupRequest& request, const CreateCfsPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCfsPGroupOutcomeCallable CreateCfsPGroupCallable(const Model::CreateCfsPGroupRequest& request);

                /**
                 *This API is used to create a permission group rule.
                 * @param req CreateCfsRuleRequest
                 * @return CreateCfsRuleOutcome
                 */
                CreateCfsRuleOutcome CreateCfsRule(const Model::CreateCfsRuleRequest &request);
                void CreateCfsRuleAsync(const Model::CreateCfsRuleRequest& request, const CreateCfsRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCfsRuleOutcomeCallable CreateCfsRuleCallable(const Model::CreateCfsRuleRequest& request);

                /**
                 *This API is used to create a file system snapshot.
                 * @param req CreateCfsSnapshotRequest
                 * @return CreateCfsSnapshotOutcome
                 */
                CreateCfsSnapshotOutcome CreateCfsSnapshot(const Model::CreateCfsSnapshotRequest &request);
                void CreateCfsSnapshotAsync(const Model::CreateCfsSnapshotRequest& request, const CreateCfsSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCfsSnapshotOutcomeCallable CreateCfsSnapshotCallable(const Model::CreateCfsSnapshotRequest& request);

                /**
                 *This API is used to create a migration task.
To use this API, submit a ticket for us to add you to the allowlist.
                 * @param req CreateMigrationTaskRequest
                 * @return CreateMigrationTaskOutcome
                 */
                CreateMigrationTaskOutcome CreateMigrationTask(const Model::CreateMigrationTaskRequest &request);
                void CreateMigrationTaskAsync(const Model::CreateMigrationTaskRequest& request, const CreateMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMigrationTaskOutcomeCallable CreateMigrationTaskCallable(const Model::CreateMigrationTaskRequest& request);

                /**
                 *This API is used to delete a scheduled snapshot policy.
                 * @param req DeleteAutoSnapshotPolicyRequest
                 * @return DeleteAutoSnapshotPolicyOutcome
                 */
                DeleteAutoSnapshotPolicyOutcome DeleteAutoSnapshotPolicy(const Model::DeleteAutoSnapshotPolicyRequest &request);
                void DeleteAutoSnapshotPolicyAsync(const Model::DeleteAutoSnapshotPolicyRequest& request, const DeleteAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAutoSnapshotPolicyOutcomeCallable DeleteAutoSnapshotPolicyCallable(const Model::DeleteAutoSnapshotPolicyRequest& request);

                /**
                 *This API is used to delete a file system.
                 * @param req DeleteCfsFileSystemRequest
                 * @return DeleteCfsFileSystemOutcome
                 */
                DeleteCfsFileSystemOutcome DeleteCfsFileSystem(const Model::DeleteCfsFileSystemRequest &request);
                void DeleteCfsFileSystemAsync(const Model::DeleteCfsFileSystemRequest& request, const DeleteCfsFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCfsFileSystemOutcomeCallable DeleteCfsFileSystemCallable(const Model::DeleteCfsFileSystemRequest& request);

                /**
                 *This API is used to delete a permission group.
                 * @param req DeleteCfsPGroupRequest
                 * @return DeleteCfsPGroupOutcome
                 */
                DeleteCfsPGroupOutcome DeleteCfsPGroup(const Model::DeleteCfsPGroupRequest &request);
                void DeleteCfsPGroupAsync(const Model::DeleteCfsPGroupRequest& request, const DeleteCfsPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCfsPGroupOutcomeCallable DeleteCfsPGroupCallable(const Model::DeleteCfsPGroupRequest& request);

                /**
                 *This API is used to delete a permission group rule.
                 * @param req DeleteCfsRuleRequest
                 * @return DeleteCfsRuleOutcome
                 */
                DeleteCfsRuleOutcome DeleteCfsRule(const Model::DeleteCfsRuleRequest &request);
                void DeleteCfsRuleAsync(const Model::DeleteCfsRuleRequest& request, const DeleteCfsRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCfsRuleOutcomeCallable DeleteCfsRuleCallable(const Model::DeleteCfsRuleRequest& request);

                /**
                 *This API is used to delete a file system snapshot.
                 * @param req DeleteCfsSnapshotRequest
                 * @return DeleteCfsSnapshotOutcome
                 */
                DeleteCfsSnapshotOutcome DeleteCfsSnapshot(const Model::DeleteCfsSnapshotRequest &request);
                void DeleteCfsSnapshotAsync(const Model::DeleteCfsSnapshotRequest& request, const DeleteCfsSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCfsSnapshotOutcomeCallable DeleteCfsSnapshotCallable(const Model::DeleteCfsSnapshotRequest& request);

                /**
                 *This API is used to delete a migration task.
To use this API, submit a ticket for us to add you to the allowlist.
                 * @param req DeleteMigrationTaskRequest
                 * @return DeleteMigrationTaskOutcome
                 */
                DeleteMigrationTaskOutcome DeleteMigrationTask(const Model::DeleteMigrationTaskRequest &request);
                void DeleteMigrationTaskAsync(const Model::DeleteMigrationTaskRequest& request, const DeleteMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMigrationTaskOutcomeCallable DeleteMigrationTaskCallable(const Model::DeleteMigrationTaskRequest& request);

                /**
                 *This API is used to delete a mount target.
                 * @param req DeleteMountTargetRequest
                 * @return DeleteMountTargetOutcome
                 */
                DeleteMountTargetOutcome DeleteMountTarget(const Model::DeleteMountTargetRequest &request);
                void DeleteMountTargetAsync(const Model::DeleteMountTargetRequest& request, const DeleteMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMountTargetOutcomeCallable DeleteMountTargetCallable(const Model::DeleteMountTargetRequest& request);

                /**
                 *This API is used to query the list of scheduled snapshot policies of a file system.
                 * @param req DescribeAutoSnapshotPoliciesRequest
                 * @return DescribeAutoSnapshotPoliciesOutcome
                 */
                DescribeAutoSnapshotPoliciesOutcome DescribeAutoSnapshotPolicies(const Model::DescribeAutoSnapshotPoliciesRequest &request);
                void DescribeAutoSnapshotPoliciesAsync(const Model::DescribeAutoSnapshotPoliciesRequest& request, const DescribeAutoSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoSnapshotPoliciesOutcomeCallable DescribeAutoSnapshotPoliciesCallable(const Model::DescribeAutoSnapshotPoliciesRequest& request);

                /**
                 *This API is used to query the availability of a region.
                 * @param req DescribeAvailableZoneInfoRequest
                 * @return DescribeAvailableZoneInfoOutcome
                 */
                DescribeAvailableZoneInfoOutcome DescribeAvailableZoneInfo(const Model::DescribeAvailableZoneInfoRequest &request);
                void DescribeAvailableZoneInfoAsync(const Model::DescribeAvailableZoneInfoRequest& request, const DescribeAvailableZoneInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableZoneInfoOutcomeCallable DescribeAvailableZoneInfoCallable(const Model::DescribeAvailableZoneInfoRequest& request);

                /**
                 *This API is used to get the list of data source buckets.
To use this API, submit a ticket for us to add you to the allowlist.
                 * @param req DescribeBucketListRequest
                 * @return DescribeBucketListOutcome
                 */
                DescribeBucketListOutcome DescribeBucketList(const Model::DescribeBucketListRequest &request);
                void DescribeBucketListAsync(const Model::DescribeBucketListRequest& request, const DescribeBucketListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBucketListOutcomeCallable DescribeBucketListCallable(const Model::DescribeBucketListRequest& request);

                /**
                 *This API is used to query clients on which this file system is mounted. To do so, the client needs to have the CFS monitoring plugin installed.
                 * @param req DescribeCfsFileSystemClientsRequest
                 * @return DescribeCfsFileSystemClientsOutcome
                 */
                DescribeCfsFileSystemClientsOutcome DescribeCfsFileSystemClients(const Model::DescribeCfsFileSystemClientsRequest &request);
                void DescribeCfsFileSystemClientsAsync(const Model::DescribeCfsFileSystemClientsRequest& request, const DescribeCfsFileSystemClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCfsFileSystemClientsOutcomeCallable DescribeCfsFileSystemClientsCallable(const Model::DescribeCfsFileSystemClientsRequest& request);

                /**
                 *This API is used to query file systems.
                 * @param req DescribeCfsFileSystemsRequest
                 * @return DescribeCfsFileSystemsOutcome
                 */
                DescribeCfsFileSystemsOutcome DescribeCfsFileSystems(const Model::DescribeCfsFileSystemsRequest &request);
                void DescribeCfsFileSystemsAsync(const Model::DescribeCfsFileSystemsRequest& request, const DescribeCfsFileSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCfsFileSystemsOutcomeCallable DescribeCfsFileSystemsCallable(const Model::DescribeCfsFileSystemsRequest& request);

                /**
                 *This API is used to query the list of permission groups.
                 * @param req DescribeCfsPGroupsRequest
                 * @return DescribeCfsPGroupsOutcome
                 */
                DescribeCfsPGroupsOutcome DescribeCfsPGroups(const Model::DescribeCfsPGroupsRequest &request);
                void DescribeCfsPGroupsAsync(const Model::DescribeCfsPGroupsRequest& request, const DescribeCfsPGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCfsPGroupsOutcomeCallable DescribeCfsPGroupsCallable(const Model::DescribeCfsPGroupsRequest& request);

                /**
                 *This API is used to query the list of permission group rules.
                 * @param req DescribeCfsRulesRequest
                 * @return DescribeCfsRulesOutcome
                 */
                DescribeCfsRulesOutcome DescribeCfsRules(const Model::DescribeCfsRulesRequest &request);
                void DescribeCfsRulesAsync(const Model::DescribeCfsRulesRequest& request, const DescribeCfsRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCfsRulesOutcomeCallable DescribeCfsRulesCallable(const Model::DescribeCfsRulesRequest& request);

                /**
                 *This API is used to query the status of the CFS service.
                 * @param req DescribeCfsServiceStatusRequest
                 * @return DescribeCfsServiceStatusOutcome
                 */
                DescribeCfsServiceStatusOutcome DescribeCfsServiceStatus(const Model::DescribeCfsServiceStatusRequest &request);
                void DescribeCfsServiceStatusAsync(const Model::DescribeCfsServiceStatusRequest& request, const DescribeCfsServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCfsServiceStatusOutcomeCallable DescribeCfsServiceStatusCallable(const Model::DescribeCfsServiceStatusRequest& request);

                /**
                 *This API is used to get the snapshot overview of a file system.
                 * @param req DescribeCfsSnapshotOverviewRequest
                 * @return DescribeCfsSnapshotOverviewOutcome
                 */
                DescribeCfsSnapshotOverviewOutcome DescribeCfsSnapshotOverview(const Model::DescribeCfsSnapshotOverviewRequest &request);
                void DescribeCfsSnapshotOverviewAsync(const Model::DescribeCfsSnapshotOverviewRequest& request, const DescribeCfsSnapshotOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCfsSnapshotOverviewOutcomeCallable DescribeCfsSnapshotOverviewCallable(const Model::DescribeCfsSnapshotOverviewRequest& request);

                /**
                 *This API is used to query the list of snapshots of a file system.
                 * @param req DescribeCfsSnapshotsRequest
                 * @return DescribeCfsSnapshotsOutcome
                 */
                DescribeCfsSnapshotsOutcome DescribeCfsSnapshots(const Model::DescribeCfsSnapshotsRequest &request);
                void DescribeCfsSnapshotsAsync(const Model::DescribeCfsSnapshotsRequest& request, const DescribeCfsSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCfsSnapshotsOutcomeCallable DescribeCfsSnapshotsCallable(const Model::DescribeCfsSnapshotsRequest& request);

                /**
                 *This API is used to get the list of migration tasks.
To use this API, submit a ticket for us to add you to the allowlist.
                 * @param req DescribeMigrationTasksRequest
                 * @return DescribeMigrationTasksOutcome
                 */
                DescribeMigrationTasksOutcome DescribeMigrationTasks(const Model::DescribeMigrationTasksRequest &request);
                void DescribeMigrationTasksAsync(const Model::DescribeMigrationTasksRequest& request, const DescribeMigrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrationTasksOutcomeCallable DescribeMigrationTasksCallable(const Model::DescribeMigrationTasksRequest& request);

                /**
                 *This API is used to query the mount targets of a file system.
                 * @param req DescribeMountTargetsRequest
                 * @return DescribeMountTargetsOutcome
                 */
                DescribeMountTargetsOutcome DescribeMountTargets(const Model::DescribeMountTargetsRequest &request);
                void DescribeMountTargetsAsync(const Model::DescribeMountTargetsRequest& request, const DescribeMountTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMountTargetsOutcomeCallable DescribeMountTargetsCallable(const Model::DescribeMountTargetsRequest& request);

                /**
                 *This API is used to query the operation logs of a snapshot.
                 * @param req DescribeSnapshotOperationLogsRequest
                 * @return DescribeSnapshotOperationLogsOutcome
                 */
                DescribeSnapshotOperationLogsOutcome DescribeSnapshotOperationLogs(const Model::DescribeSnapshotOperationLogsRequest &request);
                void DescribeSnapshotOperationLogsAsync(const Model::DescribeSnapshotOperationLogsRequest& request, const DescribeSnapshotOperationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotOperationLogsOutcomeCallable DescribeSnapshotOperationLogsCallable(const Model::DescribeSnapshotOperationLogsRequest& request);

                /**
                 *This API is used to modify the scaling policy of a file system.
                 * @param req ModifyFileSystemAutoScaleUpRuleRequest
                 * @return ModifyFileSystemAutoScaleUpRuleOutcome
                 */
                ModifyFileSystemAutoScaleUpRuleOutcome ModifyFileSystemAutoScaleUpRule(const Model::ModifyFileSystemAutoScaleUpRuleRequest &request);
                void ModifyFileSystemAutoScaleUpRuleAsync(const Model::ModifyFileSystemAutoScaleUpRuleRequest& request, const ModifyFileSystemAutoScaleUpRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFileSystemAutoScaleUpRuleOutcomeCallable ModifyFileSystemAutoScaleUpRuleCallable(const Model::ModifyFileSystemAutoScaleUpRuleRequest& request);

                /**
                 *This API is used to scale up a Turbo file system.
                 * @param req ScaleUpFileSystemRequest
                 * @return ScaleUpFileSystemOutcome
                 */
                ScaleUpFileSystemOutcome ScaleUpFileSystem(const Model::ScaleUpFileSystemRequest &request);
                void ScaleUpFileSystemAsync(const Model::ScaleUpFileSystemRequest& request, const ScaleUpFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleUpFileSystemOutcomeCallable ScaleUpFileSystemCallable(const Model::ScaleUpFileSystemRequest& request);

                /**
                 *This API is used to activate the CFS service.
                 * @param req SignUpCfsServiceRequest
                 * @return SignUpCfsServiceOutcome
                 */
                SignUpCfsServiceOutcome SignUpCfsService(const Model::SignUpCfsServiceRequest &request);
                void SignUpCfsServiceAsync(const Model::SignUpCfsServiceRequest& request, const SignUpCfsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SignUpCfsServiceOutcomeCallable SignUpCfsServiceCallable(const Model::SignUpCfsServiceRequest& request);

                /**
                 *This API is used to stop a migration task.
To use this API, submit a ticket for us to add you to the allowlist.
                 * @param req StopMigrationTaskRequest
                 * @return StopMigrationTaskOutcome
                 */
                StopMigrationTaskOutcome StopMigrationTask(const Model::StopMigrationTaskRequest &request);
                void StopMigrationTaskAsync(const Model::StopMigrationTaskRequest& request, const StopMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopMigrationTaskOutcomeCallable StopMigrationTaskCallable(const Model::StopMigrationTaskRequest& request);

                /**
                 *This API is used to unbind a snapshot policy from a file system.
                 * @param req UnbindAutoSnapshotPolicyRequest
                 * @return UnbindAutoSnapshotPolicyOutcome
                 */
                UnbindAutoSnapshotPolicyOutcome UnbindAutoSnapshotPolicy(const Model::UnbindAutoSnapshotPolicyRequest &request);
                void UnbindAutoSnapshotPolicyAsync(const Model::UnbindAutoSnapshotPolicyRequest& request, const UnbindAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindAutoSnapshotPolicyOutcomeCallable UnbindAutoSnapshotPolicyCallable(const Model::UnbindAutoSnapshotPolicyRequest& request);

                /**
                 *This API is used to update a scheduled snapshot policy.
                 * @param req UpdateAutoSnapshotPolicyRequest
                 * @return UpdateAutoSnapshotPolicyOutcome
                 */
                UpdateAutoSnapshotPolicyOutcome UpdateAutoSnapshotPolicy(const Model::UpdateAutoSnapshotPolicyRequest &request);
                void UpdateAutoSnapshotPolicyAsync(const Model::UpdateAutoSnapshotPolicyRequest& request, const UpdateAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAutoSnapshotPolicyOutcomeCallable UpdateAutoSnapshotPolicyCallable(const Model::UpdateAutoSnapshotPolicyRequest& request);

                /**
                 *This API is used to update a file system name.
                 * @param req UpdateCfsFileSystemNameRequest
                 * @return UpdateCfsFileSystemNameOutcome
                 */
                UpdateCfsFileSystemNameOutcome UpdateCfsFileSystemName(const Model::UpdateCfsFileSystemNameRequest &request);
                void UpdateCfsFileSystemNameAsync(const Model::UpdateCfsFileSystemNameRequest& request, const UpdateCfsFileSystemNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCfsFileSystemNameOutcomeCallable UpdateCfsFileSystemNameCallable(const Model::UpdateCfsFileSystemNameRequest& request);

                /**
                 *This API is used to update the permission group used by a file system.
                 * @param req UpdateCfsFileSystemPGroupRequest
                 * @return UpdateCfsFileSystemPGroupOutcome
                 */
                UpdateCfsFileSystemPGroupOutcome UpdateCfsFileSystemPGroup(const Model::UpdateCfsFileSystemPGroupRequest &request);
                void UpdateCfsFileSystemPGroupAsync(const Model::UpdateCfsFileSystemPGroupRequest& request, const UpdateCfsFileSystemPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCfsFileSystemPGroupOutcomeCallable UpdateCfsFileSystemPGroupCallable(const Model::UpdateCfsFileSystemPGroupRequest& request);

                /**
                 *This API is used to update the capacity limit of a file system.
                 * @param req UpdateCfsFileSystemSizeLimitRequest
                 * @return UpdateCfsFileSystemSizeLimitOutcome
                 */
                UpdateCfsFileSystemSizeLimitOutcome UpdateCfsFileSystemSizeLimit(const Model::UpdateCfsFileSystemSizeLimitRequest &request);
                void UpdateCfsFileSystemSizeLimitAsync(const Model::UpdateCfsFileSystemSizeLimitRequest& request, const UpdateCfsFileSystemSizeLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCfsFileSystemSizeLimitOutcomeCallable UpdateCfsFileSystemSizeLimitCallable(const Model::UpdateCfsFileSystemSizeLimitRequest& request);

                /**
                 *This API is used to update the information of a permission group.
                 * @param req UpdateCfsPGroupRequest
                 * @return UpdateCfsPGroupOutcome
                 */
                UpdateCfsPGroupOutcome UpdateCfsPGroup(const Model::UpdateCfsPGroupRequest &request);
                void UpdateCfsPGroupAsync(const Model::UpdateCfsPGroupRequest& request, const UpdateCfsPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCfsPGroupOutcomeCallable UpdateCfsPGroupCallable(const Model::UpdateCfsPGroupRequest& request);

                /**
                 *This API is used to update a permission rule.
                 * @param req UpdateCfsRuleRequest
                 * @return UpdateCfsRuleOutcome
                 */
                UpdateCfsRuleOutcome UpdateCfsRule(const Model::UpdateCfsRuleRequest &request);
                void UpdateCfsRuleAsync(const Model::UpdateCfsRuleRequest& request, const UpdateCfsRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCfsRuleOutcomeCallable UpdateCfsRuleCallable(const Model::UpdateCfsRuleRequest& request);

                /**
                 *This API is used to update the name and retention period of a file system snapshot.
                 * @param req UpdateCfsSnapshotAttributeRequest
                 * @return UpdateCfsSnapshotAttributeOutcome
                 */
                UpdateCfsSnapshotAttributeOutcome UpdateCfsSnapshotAttribute(const Model::UpdateCfsSnapshotAttributeRequest &request);
                void UpdateCfsSnapshotAttributeAsync(const Model::UpdateCfsSnapshotAttributeRequest& request, const UpdateCfsSnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCfsSnapshotAttributeOutcomeCallable UpdateCfsSnapshotAttributeCallable(const Model::UpdateCfsSnapshotAttributeRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_CFSCLIENT_H_
