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

#ifndef TENCENTCLOUD_TCSAS_V20250106_TCSASCLIENT_H_
#define TENCENTCLOUD_TCSAS_V20250106_TCSASCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tcsas/v20250106/model/AddTeamMemberRequest.h>
#include <tencentcloud/tcsas/v20250106/model/AddTeamMemberResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ConfigureMNPPreviewRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ConfigureMNPPreviewResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateApplicationRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateApplicationResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateApplicationSensitiveAPIRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateApplicationSensitiveAPIResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateGlobalDomainACLRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateGlobalDomainACLResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPApprovalRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPApprovalResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPDomainACLRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPDomainACLResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPSensitiveAPIPermissionApprovalRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPSensitiveAPIPermissionApprovalResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPVersionRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPVersionResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreatePresetKeyRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreatePresetKeyResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateTeamRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateTeamResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateUserRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateUserResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteApplicationRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteApplicationResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteApplicationSensitiveAPIRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteApplicationSensitiveAPIResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteGlobalDomainRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteGlobalDomainResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteMNPRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteMNPResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteTeamRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteTeamResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteTeamMemberRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteTeamMemberResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteUserRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteUserResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationConfigFileRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationConfigFileResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationSensitiveAPIListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationSensitiveAPIListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeGlobalDomainACLRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeGlobalDomainACLResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPAllStageVersionsRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPAllStageVersionsResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPApprovalListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPApprovalListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPCategoryRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPCategoryResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPDomainACLRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPDomainACLResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPOfflinePackageURLRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPOfflinePackageURLResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPPreviewRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPPreviewResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPReleasedVersionHistoryRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPReleasedVersionHistoryResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPSensitiveAPIPermissionApprovalRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPSensitiveAPIPermissionApprovalResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPSensitiveAPIPermissionApprovalListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPSensitiveAPIPermissionApprovalListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPSensitiveAPIPermissionListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPSensitiveAPIPermissionListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPVersionRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPVersionResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeRoleListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeRoleListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeTeamRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeTeamResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeTeamListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeTeamListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeTeamMemberListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeTeamMemberListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeTempSecret4UploadFile2CosRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeTempSecret4UploadFile2CosResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeUserRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeUserResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeUserListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeUserListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DisableApplicationSensitiveAPIRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DisableApplicationSensitiveAPIResponse.h>
#include <tencentcloud/tcsas/v20250106/model/EnableApplicationSensitiveAPIRequest.h>
#include <tencentcloud/tcsas/v20250106/model/EnableApplicationSensitiveAPIResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyApplicationRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyApplicationResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyGlobalDomainRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyGlobalDomainResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyMNPRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyMNPResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyMNPDomainRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyMNPDomainResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyTeamRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyTeamResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyTeamMemberRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyTeamMemberResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyUserRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyUserResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ProcessMNPApprovalRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ProcessMNPApprovalResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ProcessMNPSensitiveAPIPermissionApprovalRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ProcessMNPSensitiveAPIPermissionApprovalResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ReleaseMNPVersionRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ReleaseMNPVersionResponse.h>
#include <tencentcloud/tcsas/v20250106/model/RemoveMNPRequest.h>
#include <tencentcloud/tcsas/v20250106/model/RemoveMNPResponse.h>
#include <tencentcloud/tcsas/v20250106/model/RollbackMNPVersionRequest.h>
#include <tencentcloud/tcsas/v20250106/model/RollbackMNPVersionResponse.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            class TcsasClient : public AbstractClient
            {
            public:
                TcsasClient(const Credential &credential, const std::string &region);
                TcsasClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddTeamMemberResponse> AddTeamMemberOutcome;
                typedef std::future<AddTeamMemberOutcome> AddTeamMemberOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::AddTeamMemberRequest&, AddTeamMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddTeamMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::ConfigureMNPPreviewResponse> ConfigureMNPPreviewOutcome;
                typedef std::future<ConfigureMNPPreviewOutcome> ConfigureMNPPreviewOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ConfigureMNPPreviewRequest&, ConfigureMNPPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureMNPPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationResponse> CreateApplicationOutcome;
                typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateApplicationRequest&, CreateApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationSensitiveAPIResponse> CreateApplicationSensitiveAPIOutcome;
                typedef std::future<CreateApplicationSensitiveAPIOutcome> CreateApplicationSensitiveAPIOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateApplicationSensitiveAPIRequest&, CreateApplicationSensitiveAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationSensitiveAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGlobalDomainACLResponse> CreateGlobalDomainACLOutcome;
                typedef std::future<CreateGlobalDomainACLOutcome> CreateGlobalDomainACLOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateGlobalDomainACLRequest&, CreateGlobalDomainACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalDomainACLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMNPResponse> CreateMNPOutcome;
                typedef std::future<CreateMNPOutcome> CreateMNPOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateMNPRequest&, CreateMNPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMNPAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMNPApprovalResponse> CreateMNPApprovalOutcome;
                typedef std::future<CreateMNPApprovalOutcome> CreateMNPApprovalOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateMNPApprovalRequest&, CreateMNPApprovalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMNPApprovalAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMNPDomainACLResponse> CreateMNPDomainACLOutcome;
                typedef std::future<CreateMNPDomainACLOutcome> CreateMNPDomainACLOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateMNPDomainACLRequest&, CreateMNPDomainACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMNPDomainACLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMNPSensitiveAPIPermissionApprovalResponse> CreateMNPSensitiveAPIPermissionApprovalOutcome;
                typedef std::future<CreateMNPSensitiveAPIPermissionApprovalOutcome> CreateMNPSensitiveAPIPermissionApprovalOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateMNPSensitiveAPIPermissionApprovalRequest&, CreateMNPSensitiveAPIPermissionApprovalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMNPSensitiveAPIPermissionApprovalAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMNPVersionResponse> CreateMNPVersionOutcome;
                typedef std::future<CreateMNPVersionOutcome> CreateMNPVersionOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateMNPVersionRequest&, CreateMNPVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMNPVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePresetKeyResponse> CreatePresetKeyOutcome;
                typedef std::future<CreatePresetKeyOutcome> CreatePresetKeyOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreatePresetKeyRequest&, CreatePresetKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePresetKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTeamResponse> CreateTeamOutcome;
                typedef std::future<CreateTeamOutcome> CreateTeamOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateTeamRequest&, CreateTeamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTeamAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationResponse> DeleteApplicationOutcome;
                typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DeleteApplicationRequest&, DeleteApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationSensitiveAPIResponse> DeleteApplicationSensitiveAPIOutcome;
                typedef std::future<DeleteApplicationSensitiveAPIOutcome> DeleteApplicationSensitiveAPIOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DeleteApplicationSensitiveAPIRequest&, DeleteApplicationSensitiveAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationSensitiveAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGlobalDomainResponse> DeleteGlobalDomainOutcome;
                typedef std::future<DeleteGlobalDomainOutcome> DeleteGlobalDomainOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DeleteGlobalDomainRequest&, DeleteGlobalDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMNPResponse> DeleteMNPOutcome;
                typedef std::future<DeleteMNPOutcome> DeleteMNPOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DeleteMNPRequest&, DeleteMNPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMNPAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTeamResponse> DeleteTeamOutcome;
                typedef std::future<DeleteTeamOutcome> DeleteTeamOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DeleteTeamRequest&, DeleteTeamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTeamAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTeamMemberResponse> DeleteTeamMemberOutcome;
                typedef std::future<DeleteTeamMemberOutcome> DeleteTeamMemberOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DeleteTeamMemberRequest&, DeleteTeamMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTeamMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationResponse> DescribeApplicationOutcome;
                typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeApplicationRequest&, DescribeApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationConfigFileResponse> DescribeApplicationConfigFileOutcome;
                typedef std::future<DescribeApplicationConfigFileOutcome> DescribeApplicationConfigFileOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeApplicationConfigFileRequest&, DescribeApplicationConfigFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationConfigFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationListResponse> DescribeApplicationListOutcome;
                typedef std::future<DescribeApplicationListOutcome> DescribeApplicationListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeApplicationListRequest&, DescribeApplicationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationSensitiveAPIListResponse> DescribeApplicationSensitiveAPIListOutcome;
                typedef std::future<DescribeApplicationSensitiveAPIListOutcome> DescribeApplicationSensitiveAPIListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeApplicationSensitiveAPIListRequest&, DescribeApplicationSensitiveAPIListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationSensitiveAPIListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlobalDomainACLResponse> DescribeGlobalDomainACLOutcome;
                typedef std::future<DescribeGlobalDomainACLOutcome> DescribeGlobalDomainACLOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeGlobalDomainACLRequest&, DescribeGlobalDomainACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalDomainACLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPResponse> DescribeMNPOutcome;
                typedef std::future<DescribeMNPOutcome> DescribeMNPOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPRequest&, DescribeMNPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPAllStageVersionsResponse> DescribeMNPAllStageVersionsOutcome;
                typedef std::future<DescribeMNPAllStageVersionsOutcome> DescribeMNPAllStageVersionsOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPAllStageVersionsRequest&, DescribeMNPAllStageVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPAllStageVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPApprovalListResponse> DescribeMNPApprovalListOutcome;
                typedef std::future<DescribeMNPApprovalListOutcome> DescribeMNPApprovalListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPApprovalListRequest&, DescribeMNPApprovalListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPApprovalListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPCategoryResponse> DescribeMNPCategoryOutcome;
                typedef std::future<DescribeMNPCategoryOutcome> DescribeMNPCategoryOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPCategoryRequest&, DescribeMNPCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPDomainACLResponse> DescribeMNPDomainACLOutcome;
                typedef std::future<DescribeMNPDomainACLOutcome> DescribeMNPDomainACLOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPDomainACLRequest&, DescribeMNPDomainACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPDomainACLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPListResponse> DescribeMNPListOutcome;
                typedef std::future<DescribeMNPListOutcome> DescribeMNPListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPListRequest&, DescribeMNPListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPOfflinePackageURLResponse> DescribeMNPOfflinePackageURLOutcome;
                typedef std::future<DescribeMNPOfflinePackageURLOutcome> DescribeMNPOfflinePackageURLOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPOfflinePackageURLRequest&, DescribeMNPOfflinePackageURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPOfflinePackageURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPPreviewResponse> DescribeMNPPreviewOutcome;
                typedef std::future<DescribeMNPPreviewOutcome> DescribeMNPPreviewOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPPreviewRequest&, DescribeMNPPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPReleasedVersionHistoryResponse> DescribeMNPReleasedVersionHistoryOutcome;
                typedef std::future<DescribeMNPReleasedVersionHistoryOutcome> DescribeMNPReleasedVersionHistoryOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPReleasedVersionHistoryRequest&, DescribeMNPReleasedVersionHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPReleasedVersionHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPSensitiveAPIPermissionApprovalResponse> DescribeMNPSensitiveAPIPermissionApprovalOutcome;
                typedef std::future<DescribeMNPSensitiveAPIPermissionApprovalOutcome> DescribeMNPSensitiveAPIPermissionApprovalOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPSensitiveAPIPermissionApprovalRequest&, DescribeMNPSensitiveAPIPermissionApprovalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPSensitiveAPIPermissionApprovalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPSensitiveAPIPermissionApprovalListResponse> DescribeMNPSensitiveAPIPermissionApprovalListOutcome;
                typedef std::future<DescribeMNPSensitiveAPIPermissionApprovalListOutcome> DescribeMNPSensitiveAPIPermissionApprovalListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPSensitiveAPIPermissionApprovalListRequest&, DescribeMNPSensitiveAPIPermissionApprovalListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPSensitiveAPIPermissionApprovalListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPSensitiveAPIPermissionListResponse> DescribeMNPSensitiveAPIPermissionListOutcome;
                typedef std::future<DescribeMNPSensitiveAPIPermissionListOutcome> DescribeMNPSensitiveAPIPermissionListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPSensitiveAPIPermissionListRequest&, DescribeMNPSensitiveAPIPermissionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPSensitiveAPIPermissionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPVersionResponse> DescribeMNPVersionOutcome;
                typedef std::future<DescribeMNPVersionOutcome> DescribeMNPVersionOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPVersionRequest&, DescribeMNPVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoleListResponse> DescribeRoleListOutcome;
                typedef std::future<DescribeRoleListOutcome> DescribeRoleListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeRoleListRequest&, DescribeRoleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTeamResponse> DescribeTeamOutcome;
                typedef std::future<DescribeTeamOutcome> DescribeTeamOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeTeamRequest&, DescribeTeamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTeamAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTeamListResponse> DescribeTeamListOutcome;
                typedef std::future<DescribeTeamListOutcome> DescribeTeamListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeTeamListRequest&, DescribeTeamListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTeamListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTeamMemberListResponse> DescribeTeamMemberListOutcome;
                typedef std::future<DescribeTeamMemberListOutcome> DescribeTeamMemberListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeTeamMemberListRequest&, DescribeTeamMemberListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTeamMemberListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTempSecret4UploadFile2CosResponse> DescribeTempSecret4UploadFile2CosOutcome;
                typedef std::future<DescribeTempSecret4UploadFile2CosOutcome> DescribeTempSecret4UploadFile2CosOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeTempSecret4UploadFile2CosRequest&, DescribeTempSecret4UploadFile2CosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTempSecret4UploadFile2CosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserResponse> DescribeUserOutcome;
                typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeUserRequest&, DescribeUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserListResponse> DescribeUserListOutcome;
                typedef std::future<DescribeUserListOutcome> DescribeUserListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeUserListRequest&, DescribeUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableApplicationSensitiveAPIResponse> DisableApplicationSensitiveAPIOutcome;
                typedef std::future<DisableApplicationSensitiveAPIOutcome> DisableApplicationSensitiveAPIOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DisableApplicationSensitiveAPIRequest&, DisableApplicationSensitiveAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableApplicationSensitiveAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableApplicationSensitiveAPIResponse> EnableApplicationSensitiveAPIOutcome;
                typedef std::future<EnableApplicationSensitiveAPIOutcome> EnableApplicationSensitiveAPIOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::EnableApplicationSensitiveAPIRequest&, EnableApplicationSensitiveAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableApplicationSensitiveAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationResponse> ModifyApplicationOutcome;
                typedef std::future<ModifyApplicationOutcome> ModifyApplicationOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ModifyApplicationRequest&, ModifyApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGlobalDomainResponse> ModifyGlobalDomainOutcome;
                typedef std::future<ModifyGlobalDomainOutcome> ModifyGlobalDomainOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ModifyGlobalDomainRequest&, ModifyGlobalDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMNPResponse> ModifyMNPOutcome;
                typedef std::future<ModifyMNPOutcome> ModifyMNPOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ModifyMNPRequest&, ModifyMNPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMNPAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMNPDomainResponse> ModifyMNPDomainOutcome;
                typedef std::future<ModifyMNPDomainOutcome> ModifyMNPDomainOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ModifyMNPDomainRequest&, ModifyMNPDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMNPDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTeamResponse> ModifyTeamOutcome;
                typedef std::future<ModifyTeamOutcome> ModifyTeamOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ModifyTeamRequest&, ModifyTeamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTeamAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTeamMemberResponse> ModifyTeamMemberOutcome;
                typedef std::future<ModifyTeamMemberOutcome> ModifyTeamMemberOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ModifyTeamMemberRequest&, ModifyTeamMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTeamMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserResponse> ModifyUserOutcome;
                typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ModifyUserRequest&, ModifyUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessMNPApprovalResponse> ProcessMNPApprovalOutcome;
                typedef std::future<ProcessMNPApprovalOutcome> ProcessMNPApprovalOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ProcessMNPApprovalRequest&, ProcessMNPApprovalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMNPApprovalAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessMNPSensitiveAPIPermissionApprovalResponse> ProcessMNPSensitiveAPIPermissionApprovalOutcome;
                typedef std::future<ProcessMNPSensitiveAPIPermissionApprovalOutcome> ProcessMNPSensitiveAPIPermissionApprovalOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ProcessMNPSensitiveAPIPermissionApprovalRequest&, ProcessMNPSensitiveAPIPermissionApprovalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMNPSensitiveAPIPermissionApprovalAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseMNPVersionResponse> ReleaseMNPVersionOutcome;
                typedef std::future<ReleaseMNPVersionOutcome> ReleaseMNPVersionOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ReleaseMNPVersionRequest&, ReleaseMNPVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseMNPVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveMNPResponse> RemoveMNPOutcome;
                typedef std::future<RemoveMNPOutcome> RemoveMNPOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::RemoveMNPRequest&, RemoveMNPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveMNPAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackMNPVersionResponse> RollbackMNPVersionOutcome;
                typedef std::future<RollbackMNPVersionOutcome> RollbackMNPVersionOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::RollbackMNPVersionRequest&, RollbackMNPVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackMNPVersionAsyncHandler;



                /**
                 *This API is used to add a team member.
                 * @param req AddTeamMemberRequest
                 * @return AddTeamMemberOutcome
                 */
                AddTeamMemberOutcome AddTeamMember(const Model::AddTeamMemberRequest &request);
                void AddTeamMemberAsync(const Model::AddTeamMemberRequest& request, const AddTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddTeamMemberOutcomeCallable AddTeamMemberCallable(const Model::AddTeamMemberRequest& request);

                /**
                 *This API is used to configure the preview of a mini program.
                 * @param req ConfigureMNPPreviewRequest
                 * @return ConfigureMNPPreviewOutcome
                 */
                ConfigureMNPPreviewOutcome ConfigureMNPPreview(const Model::ConfigureMNPPreviewRequest &request);
                void ConfigureMNPPreviewAsync(const Model::ConfigureMNPPreviewRequest& request, const ConfigureMNPPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfigureMNPPreviewOutcomeCallable ConfigureMNPPreviewCallable(const Model::ConfigureMNPPreviewRequest& request);

                /**
                 *This API is used to create an application.
                 * @param req CreateApplicationRequest
                 * @return CreateApplicationOutcome
                 */
                CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest &request);
                void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request);

                /**
                 *This API is used to create a sensitive API of an application.
                 * @param req CreateApplicationSensitiveAPIRequest
                 * @return CreateApplicationSensitiveAPIOutcome
                 */
                CreateApplicationSensitiveAPIOutcome CreateApplicationSensitiveAPI(const Model::CreateApplicationSensitiveAPIRequest &request);
                void CreateApplicationSensitiveAPIAsync(const Model::CreateApplicationSensitiveAPIRequest& request, const CreateApplicationSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationSensitiveAPIOutcomeCallable CreateApplicationSensitiveAPICallable(const Model::CreateApplicationSensitiveAPIRequest& request);

                /**
                 *This API is used to create a global domain allowlist or blocklist.
                 * @param req CreateGlobalDomainACLRequest
                 * @return CreateGlobalDomainACLOutcome
                 */
                CreateGlobalDomainACLOutcome CreateGlobalDomainACL(const Model::CreateGlobalDomainACLRequest &request);
                void CreateGlobalDomainACLAsync(const Model::CreateGlobalDomainACLRequest& request, const CreateGlobalDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGlobalDomainACLOutcomeCallable CreateGlobalDomainACLCallable(const Model::CreateGlobalDomainACLRequest& request);

                /**
                 *This API is used to create a mini program.
                 * @param req CreateMNPRequest
                 * @return CreateMNPOutcome
                 */
                CreateMNPOutcome CreateMNP(const Model::CreateMNPRequest &request);
                void CreateMNPAsync(const Model::CreateMNPRequest& request, const CreateMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMNPOutcomeCallable CreateMNPCallable(const Model::CreateMNPRequest& request);

                /**
                 *This API is used to create a mini program approval request.
                 * @param req CreateMNPApprovalRequest
                 * @return CreateMNPApprovalOutcome
                 */
                CreateMNPApprovalOutcome CreateMNPApproval(const Model::CreateMNPApprovalRequest &request);
                void CreateMNPApprovalAsync(const Model::CreateMNPApprovalRequest& request, const CreateMNPApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMNPApprovalOutcomeCallable CreateMNPApprovalCallable(const Model::CreateMNPApprovalRequest& request);

                /**
                 *This API is used to add a domain name to the allowlist / blocklist of a mini program.
                 * @param req CreateMNPDomainACLRequest
                 * @return CreateMNPDomainACLOutcome
                 */
                CreateMNPDomainACLOutcome CreateMNPDomainACL(const Model::CreateMNPDomainACLRequest &request);
                void CreateMNPDomainACLAsync(const Model::CreateMNPDomainACLRequest& request, const CreateMNPDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMNPDomainACLOutcomeCallable CreateMNPDomainACLCallable(const Model::CreateMNPDomainACLRequest& request);

                /**
                 *This API is used to create a permission request to allow a mini program to call sensitive APIs.
                 * @param req CreateMNPSensitiveAPIPermissionApprovalRequest
                 * @return CreateMNPSensitiveAPIPermissionApprovalOutcome
                 */
                CreateMNPSensitiveAPIPermissionApprovalOutcome CreateMNPSensitiveAPIPermissionApproval(const Model::CreateMNPSensitiveAPIPermissionApprovalRequest &request);
                void CreateMNPSensitiveAPIPermissionApprovalAsync(const Model::CreateMNPSensitiveAPIPermissionApprovalRequest& request, const CreateMNPSensitiveAPIPermissionApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMNPSensitiveAPIPermissionApprovalOutcomeCallable CreateMNPSensitiveAPIPermissionApprovalCallable(const Model::CreateMNPSensitiveAPIPermissionApprovalRequest& request);

                /**
                 *This API is used to create a mini program version.
                 * @param req CreateMNPVersionRequest
                 * @return CreateMNPVersionOutcome
                 */
                CreateMNPVersionOutcome CreateMNPVersion(const Model::CreateMNPVersionRequest &request);
                void CreateMNPVersionAsync(const Model::CreateMNPVersionRequest& request, const CreateMNPVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMNPVersionOutcomeCallable CreateMNPVersionCallable(const Model::CreateMNPVersionRequest& request);

                /**
                 *This API is used to obtain the encryption key.
                 * @param req CreatePresetKeyRequest
                 * @return CreatePresetKeyOutcome
                 */
                CreatePresetKeyOutcome CreatePresetKey(const Model::CreatePresetKeyRequest &request);
                void CreatePresetKeyAsync(const Model::CreatePresetKeyRequest& request, const CreatePresetKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePresetKeyOutcomeCallable CreatePresetKeyCallable(const Model::CreatePresetKeyRequest& request);

                /**
                 *This API is used to create a team.
                 * @param req CreateTeamRequest
                 * @return CreateTeamOutcome
                 */
                CreateTeamOutcome CreateTeam(const Model::CreateTeamRequest &request);
                void CreateTeamAsync(const Model::CreateTeamRequest& request, const CreateTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTeamOutcomeCallable CreateTeamCallable(const Model::CreateTeamRequest& request);

                /**
                 *This API is used to create a user.
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *This API is used to delete the applications.
                 * @param req DeleteApplicationRequest
                 * @return DeleteApplicationOutcome
                 */
                DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest &request);
                void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request);

                /**
                 *This API is used to delete a sensitive API.
                 * @param req DeleteApplicationSensitiveAPIRequest
                 * @return DeleteApplicationSensitiveAPIOutcome
                 */
                DeleteApplicationSensitiveAPIOutcome DeleteApplicationSensitiveAPI(const Model::DeleteApplicationSensitiveAPIRequest &request);
                void DeleteApplicationSensitiveAPIAsync(const Model::DeleteApplicationSensitiveAPIRequest& request, const DeleteApplicationSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationSensitiveAPIOutcomeCallable DeleteApplicationSensitiveAPICallable(const Model::DeleteApplicationSensitiveAPIRequest& request);

                /**
                 *This API is used to delete domains from the allowlist or blocklist.
                 * @param req DeleteGlobalDomainRequest
                 * @return DeleteGlobalDomainOutcome
                 */
                DeleteGlobalDomainOutcome DeleteGlobalDomain(const Model::DeleteGlobalDomainRequest &request);
                void DeleteGlobalDomainAsync(const Model::DeleteGlobalDomainRequest& request, const DeleteGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGlobalDomainOutcomeCallable DeleteGlobalDomainCallable(const Model::DeleteGlobalDomainRequest& request);

                /**
                 *This API is used to delete a mini program.
                 * @param req DeleteMNPRequest
                 * @return DeleteMNPOutcome
                 */
                DeleteMNPOutcome DeleteMNP(const Model::DeleteMNPRequest &request);
                void DeleteMNPAsync(const Model::DeleteMNPRequest& request, const DeleteMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMNPOutcomeCallable DeleteMNPCallable(const Model::DeleteMNPRequest& request);

                /**
                 *This API is used to deletes a team.
                 * @param req DeleteTeamRequest
                 * @return DeleteTeamOutcome
                 */
                DeleteTeamOutcome DeleteTeam(const Model::DeleteTeamRequest &request);
                void DeleteTeamAsync(const Model::DeleteTeamRequest& request, const DeleteTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTeamOutcomeCallable DeleteTeamCallable(const Model::DeleteTeamRequest& request);

                /**
                 *This API is used to delete a team member.
                 * @param req DeleteTeamMemberRequest
                 * @return DeleteTeamMemberOutcome
                 */
                DeleteTeamMemberOutcome DeleteTeamMember(const Model::DeleteTeamMemberRequest &request);
                void DeleteTeamMemberAsync(const Model::DeleteTeamMemberRequest& request, const DeleteTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTeamMemberOutcomeCallable DeleteTeamMemberCallable(const Model::DeleteTeamMemberRequest& request);

                /**
                 *This API is used to delete a user.
                 * @param req DeleteUserRequest
                 * @return DeleteUserOutcome
                 */
                DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest &request);
                void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request);

                /**
                 *This API is used to query the application details.
                 * @param req DescribeApplicationRequest
                 * @return DescribeApplicationOutcome
                 */
                DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest &request);
                void DescribeApplicationAsync(const Model::DescribeApplicationRequest& request, const DescribeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationOutcomeCallable DescribeApplicationCallable(const Model::DescribeApplicationRequest& request);

                /**
                 *This API is used to query the configuration files of an application.
                 * @param req DescribeApplicationConfigFileRequest
                 * @return DescribeApplicationConfigFileOutcome
                 */
                DescribeApplicationConfigFileOutcome DescribeApplicationConfigFile(const Model::DescribeApplicationConfigFileRequest &request);
                void DescribeApplicationConfigFileAsync(const Model::DescribeApplicationConfigFileRequest& request, const DescribeApplicationConfigFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationConfigFileOutcomeCallable DescribeApplicationConfigFileCallable(const Model::DescribeApplicationConfigFileRequest& request);

                /**
                 *This API is used to query the applications.
                 * @param req DescribeApplicationListRequest
                 * @return DescribeApplicationListOutcome
                 */
                DescribeApplicationListOutcome DescribeApplicationList(const Model::DescribeApplicationListRequest &request);
                void DescribeApplicationListAsync(const Model::DescribeApplicationListRequest& request, const DescribeApplicationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationListOutcomeCallable DescribeApplicationListCallable(const Model::DescribeApplicationListRequest& request);

                /**
                 *This API is used to list sensitive APIs of an application.
                 * @param req DescribeApplicationSensitiveAPIListRequest
                 * @return DescribeApplicationSensitiveAPIListOutcome
                 */
                DescribeApplicationSensitiveAPIListOutcome DescribeApplicationSensitiveAPIList(const Model::DescribeApplicationSensitiveAPIListRequest &request);
                void DescribeApplicationSensitiveAPIListAsync(const Model::DescribeApplicationSensitiveAPIListRequest& request, const DescribeApplicationSensitiveAPIListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationSensitiveAPIListOutcomeCallable DescribeApplicationSensitiveAPIListCallable(const Model::DescribeApplicationSensitiveAPIListRequest& request);

                /**
                 *This API is used to query the global domain allowlist and blocklist.
                 * @param req DescribeGlobalDomainACLRequest
                 * @return DescribeGlobalDomainACLOutcome
                 */
                DescribeGlobalDomainACLOutcome DescribeGlobalDomainACL(const Model::DescribeGlobalDomainACLRequest &request);
                void DescribeGlobalDomainACLAsync(const Model::DescribeGlobalDomainACLRequest& request, const DescribeGlobalDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGlobalDomainACLOutcomeCallable DescribeGlobalDomainACLCallable(const Model::DescribeGlobalDomainACLRequest& request);

                /**
                 *This API is used to query the mini program details.
                 * @param req DescribeMNPRequest
                 * @return DescribeMNPOutcome
                 */
                DescribeMNPOutcome DescribeMNP(const Model::DescribeMNPRequest &request);
                void DescribeMNPAsync(const Model::DescribeMNPRequest& request, const DescribeMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPOutcomeCallable DescribeMNPCallable(const Model::DescribeMNPRequest& request);

                /**
                 *This API is used to query the mini program version management information.
                 * @param req DescribeMNPAllStageVersionsRequest
                 * @return DescribeMNPAllStageVersionsOutcome
                 */
                DescribeMNPAllStageVersionsOutcome DescribeMNPAllStageVersions(const Model::DescribeMNPAllStageVersionsRequest &request);
                void DescribeMNPAllStageVersionsAsync(const Model::DescribeMNPAllStageVersionsRequest& request, const DescribeMNPAllStageVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPAllStageVersionsOutcomeCallable DescribeMNPAllStageVersionsCallable(const Model::DescribeMNPAllStageVersionsRequest& request);

                /**
                 *This API is used to list the approval requests related with a mini program version.
                 * @param req DescribeMNPApprovalListRequest
                 * @return DescribeMNPApprovalListOutcome
                 */
                DescribeMNPApprovalListOutcome DescribeMNPApprovalList(const Model::DescribeMNPApprovalListRequest &request);
                void DescribeMNPApprovalListAsync(const Model::DescribeMNPApprovalListRequest& request, const DescribeMNPApprovalListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPApprovalListOutcomeCallable DescribeMNPApprovalListCallable(const Model::DescribeMNPApprovalListRequest& request);

                /**
                 *This API is used to query the mini program types.
                 * @param req DescribeMNPCategoryRequest
                 * @return DescribeMNPCategoryOutcome
                 */
                DescribeMNPCategoryOutcome DescribeMNPCategory(const Model::DescribeMNPCategoryRequest &request);
                void DescribeMNPCategoryAsync(const Model::DescribeMNPCategoryRequest& request, const DescribeMNPCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPCategoryOutcomeCallable DescribeMNPCategoryCallable(const Model::DescribeMNPCategoryRequest& request);

                /**
                 *This API is used to query the domain allowlist / blocklist of a mini program.
                 * @param req DescribeMNPDomainACLRequest
                 * @return DescribeMNPDomainACLOutcome
                 */
                DescribeMNPDomainACLOutcome DescribeMNPDomainACL(const Model::DescribeMNPDomainACLRequest &request);
                void DescribeMNPDomainACLAsync(const Model::DescribeMNPDomainACLRequest& request, const DescribeMNPDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPDomainACLOutcomeCallable DescribeMNPDomainACLCallable(const Model::DescribeMNPDomainACLRequest& request);

                /**
                 *This API is used to query the mini programs.
                 * @param req DescribeMNPListRequest
                 * @return DescribeMNPListOutcome
                 */
                DescribeMNPListOutcome DescribeMNPList(const Model::DescribeMNPListRequest &request);
                void DescribeMNPListAsync(const Model::DescribeMNPListRequest& request, const DescribeMNPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPListOutcomeCallable DescribeMNPListCallable(const Model::DescribeMNPListRequest& request);

                /**
                 *DescribeMNPOfflinePackageURL
                 * @param req DescribeMNPOfflinePackageURLRequest
                 * @return DescribeMNPOfflinePackageURLOutcome
                 */
                DescribeMNPOfflinePackageURLOutcome DescribeMNPOfflinePackageURL(const Model::DescribeMNPOfflinePackageURLRequest &request);
                void DescribeMNPOfflinePackageURLAsync(const Model::DescribeMNPOfflinePackageURLRequest& request, const DescribeMNPOfflinePackageURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPOfflinePackageURLOutcomeCallable DescribeMNPOfflinePackageURLCallable(const Model::DescribeMNPOfflinePackageURLRequest& request);

                /**
                 *This API is used to query the mini program preview details.
                 * @param req DescribeMNPPreviewRequest
                 * @return DescribeMNPPreviewOutcome
                 */
                DescribeMNPPreviewOutcome DescribeMNPPreview(const Model::DescribeMNPPreviewRequest &request);
                void DescribeMNPPreviewAsync(const Model::DescribeMNPPreviewRequest& request, const DescribeMNPPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPPreviewOutcomeCallable DescribeMNPPreviewCallable(const Model::DescribeMNPPreviewRequest& request);

                /**
                 *This API is used to list all released versions of a mini program.
                 * @param req DescribeMNPReleasedVersionHistoryRequest
                 * @return DescribeMNPReleasedVersionHistoryOutcome
                 */
                DescribeMNPReleasedVersionHistoryOutcome DescribeMNPReleasedVersionHistory(const Model::DescribeMNPReleasedVersionHistoryRequest &request);
                void DescribeMNPReleasedVersionHistoryAsync(const Model::DescribeMNPReleasedVersionHistoryRequest& request, const DescribeMNPReleasedVersionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPReleasedVersionHistoryOutcomeCallable DescribeMNPReleasedVersionHistoryCallable(const Model::DescribeMNPReleasedVersionHistoryRequest& request);

                /**
                 *This API is used to query details of a specific permission request to call sensitive APIs.
                 * @param req DescribeMNPSensitiveAPIPermissionApprovalRequest
                 * @return DescribeMNPSensitiveAPIPermissionApprovalOutcome
                 */
                DescribeMNPSensitiveAPIPermissionApprovalOutcome DescribeMNPSensitiveAPIPermissionApproval(const Model::DescribeMNPSensitiveAPIPermissionApprovalRequest &request);
                void DescribeMNPSensitiveAPIPermissionApprovalAsync(const Model::DescribeMNPSensitiveAPIPermissionApprovalRequest& request, const DescribeMNPSensitiveAPIPermissionApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPSensitiveAPIPermissionApprovalOutcomeCallable DescribeMNPSensitiveAPIPermissionApprovalCallable(const Model::DescribeMNPSensitiveAPIPermissionApprovalRequest& request);

                /**
                 *This API is used to query permission requests to allow a mini program calling sensitive APIs.
                 * @param req DescribeMNPSensitiveAPIPermissionApprovalListRequest
                 * @return DescribeMNPSensitiveAPIPermissionApprovalListOutcome
                 */
                DescribeMNPSensitiveAPIPermissionApprovalListOutcome DescribeMNPSensitiveAPIPermissionApprovalList(const Model::DescribeMNPSensitiveAPIPermissionApprovalListRequest &request);
                void DescribeMNPSensitiveAPIPermissionApprovalListAsync(const Model::DescribeMNPSensitiveAPIPermissionApprovalListRequest& request, const DescribeMNPSensitiveAPIPermissionApprovalListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPSensitiveAPIPermissionApprovalListOutcomeCallable DescribeMNPSensitiveAPIPermissionApprovalListCallable(const Model::DescribeMNPSensitiveAPIPermissionApprovalListRequest& request);

                /**
                 *This API is used to query the list of sensitive APIs that available to a mini program.
                 * @param req DescribeMNPSensitiveAPIPermissionListRequest
                 * @return DescribeMNPSensitiveAPIPermissionListOutcome
                 */
                DescribeMNPSensitiveAPIPermissionListOutcome DescribeMNPSensitiveAPIPermissionList(const Model::DescribeMNPSensitiveAPIPermissionListRequest &request);
                void DescribeMNPSensitiveAPIPermissionListAsync(const Model::DescribeMNPSensitiveAPIPermissionListRequest& request, const DescribeMNPSensitiveAPIPermissionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPSensitiveAPIPermissionListOutcomeCallable DescribeMNPSensitiveAPIPermissionListCallable(const Model::DescribeMNPSensitiveAPIPermissionListRequest& request);

                /**
                 *This API is used to query the mini program version creation results.
                 * @param req DescribeMNPVersionRequest
                 * @return DescribeMNPVersionOutcome
                 */
                DescribeMNPVersionOutcome DescribeMNPVersion(const Model::DescribeMNPVersionRequest &request);
                void DescribeMNPVersionAsync(const Model::DescribeMNPVersionRequest& request, const DescribeMNPVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPVersionOutcomeCallable DescribeMNPVersionCallable(const Model::DescribeMNPVersionRequest& request);

                /**
                 *This API is used to query the roles.
                 * @param req DescribeRoleListRequest
                 * @return DescribeRoleListOutcome
                 */
                DescribeRoleListOutcome DescribeRoleList(const Model::DescribeRoleListRequest &request);
                void DescribeRoleListAsync(const Model::DescribeRoleListRequest& request, const DescribeRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoleListOutcomeCallable DescribeRoleListCallable(const Model::DescribeRoleListRequest& request);

                /**
                 *This API is used to query the team details.
                 * @param req DescribeTeamRequest
                 * @return DescribeTeamOutcome
                 */
                DescribeTeamOutcome DescribeTeam(const Model::DescribeTeamRequest &request);
                void DescribeTeamAsync(const Model::DescribeTeamRequest& request, const DescribeTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTeamOutcomeCallable DescribeTeamCallable(const Model::DescribeTeamRequest& request);

                /**
                 *This API is used to query the teams.
                 * @param req DescribeTeamListRequest
                 * @return DescribeTeamListOutcome
                 */
                DescribeTeamListOutcome DescribeTeamList(const Model::DescribeTeamListRequest &request);
                void DescribeTeamListAsync(const Model::DescribeTeamListRequest& request, const DescribeTeamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTeamListOutcomeCallable DescribeTeamListCallable(const Model::DescribeTeamListRequest& request);

                /**
                 *This API is used to query the team members.
                 * @param req DescribeTeamMemberListRequest
                 * @return DescribeTeamMemberListOutcome
                 */
                DescribeTeamMemberListOutcome DescribeTeamMemberList(const Model::DescribeTeamMemberListRequest &request);
                void DescribeTeamMemberListAsync(const Model::DescribeTeamMemberListRequest& request, const DescribeTeamMemberListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTeamMemberListOutcomeCallable DescribeTeamMemberListCallable(const Model::DescribeTeamMemberListRequest& request);

                /**
                 *This API is used to obtain a temporary key for file uploads.
                 * @param req DescribeTempSecret4UploadFile2CosRequest
                 * @return DescribeTempSecret4UploadFile2CosOutcome
                 */
                DescribeTempSecret4UploadFile2CosOutcome DescribeTempSecret4UploadFile2Cos(const Model::DescribeTempSecret4UploadFile2CosRequest &request);
                void DescribeTempSecret4UploadFile2CosAsync(const Model::DescribeTempSecret4UploadFile2CosRequest& request, const DescribeTempSecret4UploadFile2CosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTempSecret4UploadFile2CosOutcomeCallable DescribeTempSecret4UploadFile2CosCallable(const Model::DescribeTempSecret4UploadFile2CosRequest& request);

                /**
                 *This API is used to query the user details.
                 * @param req DescribeUserRequest
                 * @return DescribeUserOutcome
                 */
                DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest &request);
                void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request);

                /**
                 *This API is used to query the users.
                 * @param req DescribeUserListRequest
                 * @return DescribeUserListOutcome
                 */
                DescribeUserListOutcome DescribeUserList(const Model::DescribeUserListRequest &request);
                void DescribeUserListAsync(const Model::DescribeUserListRequest& request, const DescribeUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserListOutcomeCallable DescribeUserListCallable(const Model::DescribeUserListRequest& request);

                /**
                 *This API is used to set a sensitive API to restricted.
                 * @param req DisableApplicationSensitiveAPIRequest
                 * @return DisableApplicationSensitiveAPIOutcome
                 */
                DisableApplicationSensitiveAPIOutcome DisableApplicationSensitiveAPI(const Model::DisableApplicationSensitiveAPIRequest &request);
                void DisableApplicationSensitiveAPIAsync(const Model::DisableApplicationSensitiveAPIRequest& request, const DisableApplicationSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableApplicationSensitiveAPIOutcomeCallable DisableApplicationSensitiveAPICallable(const Model::DisableApplicationSensitiveAPIRequest& request);

                /**
                 *This API is used to set an application sensitive API to public.
                 * @param req EnableApplicationSensitiveAPIRequest
                 * @return EnableApplicationSensitiveAPIOutcome
                 */
                EnableApplicationSensitiveAPIOutcome EnableApplicationSensitiveAPI(const Model::EnableApplicationSensitiveAPIRequest &request);
                void EnableApplicationSensitiveAPIAsync(const Model::EnableApplicationSensitiveAPIRequest& request, const EnableApplicationSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableApplicationSensitiveAPIOutcomeCallable EnableApplicationSensitiveAPICallable(const Model::EnableApplicationSensitiveAPIRequest& request);

                /**
                 *This API is used to change the application information.
                 * @param req ModifyApplicationRequest
                 * @return ModifyApplicationOutcome
                 */
                ModifyApplicationOutcome ModifyApplication(const Model::ModifyApplicationRequest &request);
                void ModifyApplicationAsync(const Model::ModifyApplicationRequest& request, const ModifyApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationOutcomeCallable ModifyApplicationCallable(const Model::ModifyApplicationRequest& request);

                /**
                 *This API is used to modify the domain allowlist or blocklist.
                 * @param req ModifyGlobalDomainRequest
                 * @return ModifyGlobalDomainOutcome
                 */
                ModifyGlobalDomainOutcome ModifyGlobalDomain(const Model::ModifyGlobalDomainRequest &request);
                void ModifyGlobalDomainAsync(const Model::ModifyGlobalDomainRequest& request, const ModifyGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGlobalDomainOutcomeCallable ModifyGlobalDomainCallable(const Model::ModifyGlobalDomainRequest& request);

                /**
                 *This API is used to modify the mini program information.
                 * @param req ModifyMNPRequest
                 * @return ModifyMNPOutcome
                 */
                ModifyMNPOutcome ModifyMNP(const Model::ModifyMNPRequest &request);
                void ModifyMNPAsync(const Model::ModifyMNPRequest& request, const ModifyMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMNPOutcomeCallable ModifyMNPCallable(const Model::ModifyMNPRequest& request);

                /**
                 *This API is used to edit the mini program domain information.
                 * @param req ModifyMNPDomainRequest
                 * @return ModifyMNPDomainOutcome
                 */
                ModifyMNPDomainOutcome ModifyMNPDomain(const Model::ModifyMNPDomainRequest &request);
                void ModifyMNPDomainAsync(const Model::ModifyMNPDomainRequest& request, const ModifyMNPDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMNPDomainOutcomeCallable ModifyMNPDomainCallable(const Model::ModifyMNPDomainRequest& request);

                /**
                 *This API is used to change the team information.
                 * @param req ModifyTeamRequest
                 * @return ModifyTeamOutcome
                 */
                ModifyTeamOutcome ModifyTeam(const Model::ModifyTeamRequest &request);
                void ModifyTeamAsync(const Model::ModifyTeamRequest& request, const ModifyTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTeamOutcomeCallable ModifyTeamCallable(const Model::ModifyTeamRequest& request);

                /**
                 *This API is used to modify the team member information.
                 * @param req ModifyTeamMemberRequest
                 * @return ModifyTeamMemberOutcome
                 */
                ModifyTeamMemberOutcome ModifyTeamMember(const Model::ModifyTeamMemberRequest &request);
                void ModifyTeamMemberAsync(const Model::ModifyTeamMemberRequest& request, const ModifyTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTeamMemberOutcomeCallable ModifyTeamMemberCallable(const Model::ModifyTeamMemberRequest& request);

                /**
                 *This API is used to modify the user information.
                 * @param req ModifyUserRequest
                 * @return ModifyUserOutcome
                 */
                ModifyUserOutcome ModifyUser(const Model::ModifyUserRequest &request);
                void ModifyUserAsync(const Model::ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserOutcomeCallable ModifyUserCallable(const Model::ModifyUserRequest& request);

                /**
                 *This API is used to approve or reject the release of a mini program version.
                 * @param req ProcessMNPApprovalRequest
                 * @return ProcessMNPApprovalOutcome
                 */
                ProcessMNPApprovalOutcome ProcessMNPApproval(const Model::ProcessMNPApprovalRequest &request);
                void ProcessMNPApprovalAsync(const Model::ProcessMNPApprovalRequest& request, const ProcessMNPApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMNPApprovalOutcomeCallable ProcessMNPApprovalCallable(const Model::ProcessMNPApprovalRequest& request);

                /**
                 *This API is used to approve or reject the sensitive API permission requests.
                 * @param req ProcessMNPSensitiveAPIPermissionApprovalRequest
                 * @return ProcessMNPSensitiveAPIPermissionApprovalOutcome
                 */
                ProcessMNPSensitiveAPIPermissionApprovalOutcome ProcessMNPSensitiveAPIPermissionApproval(const Model::ProcessMNPSensitiveAPIPermissionApprovalRequest &request);
                void ProcessMNPSensitiveAPIPermissionApprovalAsync(const Model::ProcessMNPSensitiveAPIPermissionApprovalRequest& request, const ProcessMNPSensitiveAPIPermissionApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMNPSensitiveAPIPermissionApprovalOutcomeCallable ProcessMNPSensitiveAPIPermissionApprovalCallable(const Model::ProcessMNPSensitiveAPIPermissionApprovalRequest& request);

                /**
                 *This API is used to release a mini program version.
                 * @param req ReleaseMNPVersionRequest
                 * @return ReleaseMNPVersionOutcome
                 */
                ReleaseMNPVersionOutcome ReleaseMNPVersion(const Model::ReleaseMNPVersionRequest &request);
                void ReleaseMNPVersionAsync(const Model::ReleaseMNPVersionRequest& request, const ReleaseMNPVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseMNPVersionOutcomeCallable ReleaseMNPVersionCallable(const Model::ReleaseMNPVersionRequest& request);

                /**
                 *This API is used to remove a mini program.
                 * @param req RemoveMNPRequest
                 * @return RemoveMNPOutcome
                 */
                RemoveMNPOutcome RemoveMNP(const Model::RemoveMNPRequest &request);
                void RemoveMNPAsync(const Model::RemoveMNPRequest& request, const RemoveMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveMNPOutcomeCallable RemoveMNPCallable(const Model::RemoveMNPRequest& request);

                /**
                 *This API is used to rollback a mini program online version.
                 * @param req RollbackMNPVersionRequest
                 * @return RollbackMNPVersionOutcome
                 */
                RollbackMNPVersionOutcome RollbackMNPVersion(const Model::RollbackMNPVersionRequest &request);
                void RollbackMNPVersionAsync(const Model::RollbackMNPVersionRequest& request, const RollbackMNPVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackMNPVersionOutcomeCallable RollbackMNPVersionCallable(const Model::RollbackMNPVersionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_TCSASCLIENT_H_
