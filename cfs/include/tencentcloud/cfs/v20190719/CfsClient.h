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
#include <tencentcloud/cfs/v20190719/model/CreateCfsFileSystemRequest.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsFileSystemResponse.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsPGroupRequest.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsPGroupResponse.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsRuleRequest.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsRuleResponse.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsFileSystemRequest.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsFileSystemResponse.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsPGroupRequest.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsPGroupResponse.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsRuleRequest.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsRuleResponse.h>
#include <tencentcloud/cfs/v20190719/model/DeleteMountTargetRequest.h>
#include <tencentcloud/cfs/v20190719/model/DeleteMountTargetResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeAvailableZoneInfoRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeAvailableZoneInfoResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemsRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemsResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsPGroupsRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsPGroupsResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsRulesRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsRulesResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsServiceStatusRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsServiceStatusResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeMountTargetsRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeMountTargetsResponse.h>
#include <tencentcloud/cfs/v20190719/model/SignUpCfsServiceRequest.h>
#include <tencentcloud/cfs/v20190719/model/SignUpCfsServiceResponse.h>
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

                typedef Outcome<Error, Model::CreateCfsFileSystemResponse> CreateCfsFileSystemOutcome;
                typedef std::future<CreateCfsFileSystemOutcome> CreateCfsFileSystemOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::CreateCfsFileSystemRequest&, CreateCfsFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCfsFileSystemAsyncHandler;
                typedef Outcome<Error, Model::CreateCfsPGroupResponse> CreateCfsPGroupOutcome;
                typedef std::future<CreateCfsPGroupOutcome> CreateCfsPGroupOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::CreateCfsPGroupRequest&, CreateCfsPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCfsPGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateCfsRuleResponse> CreateCfsRuleOutcome;
                typedef std::future<CreateCfsRuleOutcome> CreateCfsRuleOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::CreateCfsRuleRequest&, CreateCfsRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCfsRuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteCfsFileSystemResponse> DeleteCfsFileSystemOutcome;
                typedef std::future<DeleteCfsFileSystemOutcome> DeleteCfsFileSystemOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DeleteCfsFileSystemRequest&, DeleteCfsFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCfsFileSystemAsyncHandler;
                typedef Outcome<Error, Model::DeleteCfsPGroupResponse> DeleteCfsPGroupOutcome;
                typedef std::future<DeleteCfsPGroupOutcome> DeleteCfsPGroupOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DeleteCfsPGroupRequest&, DeleteCfsPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCfsPGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteCfsRuleResponse> DeleteCfsRuleOutcome;
                typedef std::future<DeleteCfsRuleOutcome> DeleteCfsRuleOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DeleteCfsRuleRequest&, DeleteCfsRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCfsRuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteMountTargetResponse> DeleteMountTargetOutcome;
                typedef std::future<DeleteMountTargetOutcome> DeleteMountTargetOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DeleteMountTargetRequest&, DeleteMountTargetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMountTargetAsyncHandler;
                typedef Outcome<Error, Model::DescribeAvailableZoneInfoResponse> DescribeAvailableZoneInfoOutcome;
                typedef std::future<DescribeAvailableZoneInfoOutcome> DescribeAvailableZoneInfoOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeAvailableZoneInfoRequest&, DescribeAvailableZoneInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableZoneInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeCfsFileSystemsResponse> DescribeCfsFileSystemsOutcome;
                typedef std::future<DescribeCfsFileSystemsOutcome> DescribeCfsFileSystemsOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeCfsFileSystemsRequest&, DescribeCfsFileSystemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfsFileSystemsAsyncHandler;
                typedef Outcome<Error, Model::DescribeCfsPGroupsResponse> DescribeCfsPGroupsOutcome;
                typedef std::future<DescribeCfsPGroupsOutcome> DescribeCfsPGroupsOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeCfsPGroupsRequest&, DescribeCfsPGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfsPGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeCfsRulesResponse> DescribeCfsRulesOutcome;
                typedef std::future<DescribeCfsRulesOutcome> DescribeCfsRulesOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeCfsRulesRequest&, DescribeCfsRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfsRulesAsyncHandler;
                typedef Outcome<Error, Model::DescribeCfsServiceStatusResponse> DescribeCfsServiceStatusOutcome;
                typedef std::future<DescribeCfsServiceStatusOutcome> DescribeCfsServiceStatusOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeCfsServiceStatusRequest&, DescribeCfsServiceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfsServiceStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeMountTargetsResponse> DescribeMountTargetsOutcome;
                typedef std::future<DescribeMountTargetsOutcome> DescribeMountTargetsOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeMountTargetsRequest&, DescribeMountTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMountTargetsAsyncHandler;
                typedef Outcome<Error, Model::SignUpCfsServiceResponse> SignUpCfsServiceOutcome;
                typedef std::future<SignUpCfsServiceOutcome> SignUpCfsServiceOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::SignUpCfsServiceRequest&, SignUpCfsServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SignUpCfsServiceAsyncHandler;
                typedef Outcome<Error, Model::UpdateCfsFileSystemNameResponse> UpdateCfsFileSystemNameOutcome;
                typedef std::future<UpdateCfsFileSystemNameOutcome> UpdateCfsFileSystemNameOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::UpdateCfsFileSystemNameRequest&, UpdateCfsFileSystemNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCfsFileSystemNameAsyncHandler;
                typedef Outcome<Error, Model::UpdateCfsFileSystemPGroupResponse> UpdateCfsFileSystemPGroupOutcome;
                typedef std::future<UpdateCfsFileSystemPGroupOutcome> UpdateCfsFileSystemPGroupOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::UpdateCfsFileSystemPGroupRequest&, UpdateCfsFileSystemPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCfsFileSystemPGroupAsyncHandler;
                typedef Outcome<Error, Model::UpdateCfsFileSystemSizeLimitResponse> UpdateCfsFileSystemSizeLimitOutcome;
                typedef std::future<UpdateCfsFileSystemSizeLimitOutcome> UpdateCfsFileSystemSizeLimitOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::UpdateCfsFileSystemSizeLimitRequest&, UpdateCfsFileSystemSizeLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCfsFileSystemSizeLimitAsyncHandler;
                typedef Outcome<Error, Model::UpdateCfsPGroupResponse> UpdateCfsPGroupOutcome;
                typedef std::future<UpdateCfsPGroupOutcome> UpdateCfsPGroupOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::UpdateCfsPGroupRequest&, UpdateCfsPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCfsPGroupAsyncHandler;
                typedef Outcome<Error, Model::UpdateCfsRuleResponse> UpdateCfsRuleOutcome;
                typedef std::future<UpdateCfsRuleOutcome> UpdateCfsRuleOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::UpdateCfsRuleRequest&, UpdateCfsRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCfsRuleAsyncHandler;



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
                 *This API is used to delete a mount target.
                 * @param req DeleteMountTargetRequest
                 * @return DeleteMountTargetOutcome
                 */
                DeleteMountTargetOutcome DeleteMountTarget(const Model::DeleteMountTargetRequest &request);
                void DeleteMountTargetAsync(const Model::DeleteMountTargetRequest& request, const DeleteMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMountTargetOutcomeCallable DeleteMountTargetCallable(const Model::DeleteMountTargetRequest& request);

                /**
                 *This API is used to query the availability of a region.
                 * @param req DescribeAvailableZoneInfoRequest
                 * @return DescribeAvailableZoneInfoOutcome
                 */
                DescribeAvailableZoneInfoOutcome DescribeAvailableZoneInfo(const Model::DescribeAvailableZoneInfoRequest &request);
                void DescribeAvailableZoneInfoAsync(const Model::DescribeAvailableZoneInfoRequest& request, const DescribeAvailableZoneInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableZoneInfoOutcomeCallable DescribeAvailableZoneInfoCallable(const Model::DescribeAvailableZoneInfoRequest& request);

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
                 *This API is used to query the mount targets of a file system.
                 * @param req DescribeMountTargetsRequest
                 * @return DescribeMountTargetsOutcome
                 */
                DescribeMountTargetsOutcome DescribeMountTargets(const Model::DescribeMountTargetsRequest &request);
                void DescribeMountTargetsAsync(const Model::DescribeMountTargetsRequest& request, const DescribeMountTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMountTargetsOutcomeCallable DescribeMountTargetsCallable(const Model::DescribeMountTargetsRequest& request);

                /**
                 *This API is used to activate the CFS service.
                 * @param req SignUpCfsServiceRequest
                 * @return SignUpCfsServiceOutcome
                 */
                SignUpCfsServiceOutcome SignUpCfsService(const Model::SignUpCfsServiceRequest &request);
                void SignUpCfsServiceAsync(const Model::SignUpCfsServiceRequest& request, const SignUpCfsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SignUpCfsServiceOutcomeCallable SignUpCfsServiceCallable(const Model::SignUpCfsServiceRequest& request);

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

            };
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_CFSCLIENT_H_
