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

#ifndef TENCENTCLOUD_TCMPP_V20240801_TCMPPCLIENT_H_
#define TENCENTCLOUD_TCMPP_V20240801_TCMPPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tcmpp/v20240801/model/AddTeamMemberRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/AddTeamMemberResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CheckGlobalDomainRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CheckGlobalDomainResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ConfigureMNPPreviewRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ConfigureMNPPreviewResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateApplicationRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateApplicationResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateApplicationSensitiveAPIRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateApplicationSensitiveAPIResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateConsoleMNPVersionCompileTaskRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateConsoleMNPVersionCompileTaskResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateDomainRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateDomainResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateGlobalDomainRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateGlobalDomainResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateGlobalDomainACLRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateGlobalDomainACLResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateMNPRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateMNPResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateMNPApprovalRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateMNPApprovalResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateMNPDomainACLRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateMNPDomainACLResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateMNPSensitiveAPIPermissionApprovalRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateMNPSensitiveAPIPermissionApprovalResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateMNPVersionRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateMNPVersionResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateOnlineApplyRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateOnlineApplyResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreatePlatformAuditRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreatePlatformAuditResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreatePresetKeyRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreatePresetKeyResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateSensitiveAPIRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateSensitiveAPIResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateSensitiveApiApplyRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateSensitiveApiApplyResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateTeamRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateTeamResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateTeamMemberRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateTeamMemberResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateUserRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateUserResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DeleteApplicationRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DeleteApplicationResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DeleteApplicationSensitiveAPIRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DeleteApplicationSensitiveAPIResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DeleteGlobalDomainRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DeleteGlobalDomainResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DeleteMNPRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DeleteMNPResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DeleteSensitiveAPIRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DeleteSensitiveAPIResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DeleteTeamRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DeleteTeamResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DeleteTeamMemberRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DeleteTeamMemberResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DeleteUserRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DeleteUserResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeApplicationRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeApplicationResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeApplicationConfigRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeApplicationConfigResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeApplicationConfigFileRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeApplicationConfigFileResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeApplicationListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeApplicationListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeApplicationMNPVersionAuditListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeApplicationMNPVersionAuditListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeApplicationSensitiveAPIListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeApplicationSensitiveAPIListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeConsoleMNPVersionCompileTaskRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeConsoleMNPVersionCompileTaskResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeDomainInfoRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeDomainInfoResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeDomainTeamListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeDomainTeamListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeGlobalDomainACLRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeGlobalDomainACLResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeGlobalDomainListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeGlobalDomainListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPAllStageVersionsRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPAllStageVersionsResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPApprovalListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPApprovalListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPBoardRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPBoardResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPCategoryRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPCategoryResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPDetailRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPDetailResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPDomainACLRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPDomainACLResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPManagerDetailRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPManagerDetailResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPManagerListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPManagerListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPOfflinePackageURLRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPOfflinePackageURLResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPPreviewRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPPreviewResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPPrivacyRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPPrivacyResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPReleasedVersionHistoryRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPReleasedVersionHistoryResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPSensitiveAPIPermissionApprovalRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPSensitiveAPIPermissionApprovalResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPSensitiveAPIPermissionApprovalListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPSensitiveAPIPermissionApprovalListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPSensitiveAPIPermissionListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPSensitiveAPIPermissionListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPTypeRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPTypeResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPVersionRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPVersionResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPVersionPreviewRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPVersionPreviewResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeOfflineMNPPackageRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeOfflineMNPPackageResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeOnlineVersionRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeOnlineVersionResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeRoleDetailRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeRoleDetailResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeRoleListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeRoleListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeSensitiveAPIAuditListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeSensitiveAPIAuditListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeSensitiveAPIListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeSensitiveAPIListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeSensitiveApiApplyDetailRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeSensitiveApiApplyDetailResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeSensitiveApiAuthListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeSensitiveApiAuthListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeSimpleApplicationInfoListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeSimpleApplicationInfoListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeSimpleTeamListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeSimpleTeamListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeTeamRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeTeamResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeTeamDomainListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeTeamDomainListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeTeamListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeTeamListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeTeamMemberListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeTeamMemberListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeTeamMembersRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeTeamMembersResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeTempSecret4UploadFile2CosRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeTempSecret4UploadFile2CosResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeUserRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeUserResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeUserDetailRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeUserDetailResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeUserListRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeUserListResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DisableApplicationSensitiveAPIRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DisableApplicationSensitiveAPIResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/DisableTeamDomainRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/DisableTeamDomainResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/EnableApplicationSensitiveAPIRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/EnableApplicationSensitiveAPIResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyApplicationRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyApplicationResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyApplicationAppKeyRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyApplicationAppKeyResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyApplicationAppUrlRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyApplicationAppUrlResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyDomainRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyDomainResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyGlobalDomainRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyGlobalDomainResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyMNPRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyMNPResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyMNPDomainRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyMNPDomainResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyMNPStatusOfflineRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyMNPStatusOfflineResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyMNPVersionPreviewRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyMNPVersionPreviewResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyOnlineVersionRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyOnlineVersionResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyPlatformAuditStatusRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyPlatformAuditStatusResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifySensitiveAPIAuditStatusRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifySensitiveAPIAuditStatusResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyTeamRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyTeamResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyTeamMemberRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyTeamMemberResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyUserRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyUserResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyUserPasswordRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ModifyUserPasswordResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ProcessMNPApprovalRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ProcessMNPApprovalResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ProcessMNPSensitiveAPIPermissionApprovalRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ProcessMNPSensitiveAPIPermissionApprovalResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/ReleaseMNPVersionRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/ReleaseMNPVersionResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/RemoveMNPRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/RemoveMNPResponse.h>
#include <tencentcloud/tcmpp/v20240801/model/RollbackMNPVersionRequest.h>
#include <tencentcloud/tcmpp/v20240801/model/RollbackMNPVersionResponse.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            class TcmppClient : public AbstractClient
            {
            public:
                TcmppClient(const Credential &credential, const std::string &region);
                TcmppClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddTeamMemberResponse> AddTeamMemberOutcome;
                typedef std::future<AddTeamMemberOutcome> AddTeamMemberOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::AddTeamMemberRequest&, AddTeamMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddTeamMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckGlobalDomainResponse> CheckGlobalDomainOutcome;
                typedef std::future<CheckGlobalDomainOutcome> CheckGlobalDomainOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CheckGlobalDomainRequest&, CheckGlobalDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckGlobalDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ConfigureMNPPreviewResponse> ConfigureMNPPreviewOutcome;
                typedef std::future<ConfigureMNPPreviewOutcome> ConfigureMNPPreviewOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ConfigureMNPPreviewRequest&, ConfigureMNPPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureMNPPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationResponse> CreateApplicationOutcome;
                typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreateApplicationRequest&, CreateApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationSensitiveAPIResponse> CreateApplicationSensitiveAPIOutcome;
                typedef std::future<CreateApplicationSensitiveAPIOutcome> CreateApplicationSensitiveAPIOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreateApplicationSensitiveAPIRequest&, CreateApplicationSensitiveAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationSensitiveAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConsoleMNPVersionCompileTaskResponse> CreateConsoleMNPVersionCompileTaskOutcome;
                typedef std::future<CreateConsoleMNPVersionCompileTaskOutcome> CreateConsoleMNPVersionCompileTaskOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreateConsoleMNPVersionCompileTaskRequest&, CreateConsoleMNPVersionCompileTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsoleMNPVersionCompileTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainResponse> CreateDomainOutcome;
                typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreateDomainRequest&, CreateDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGlobalDomainResponse> CreateGlobalDomainOutcome;
                typedef std::future<CreateGlobalDomainOutcome> CreateGlobalDomainOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreateGlobalDomainRequest&, CreateGlobalDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGlobalDomainACLResponse> CreateGlobalDomainACLOutcome;
                typedef std::future<CreateGlobalDomainACLOutcome> CreateGlobalDomainACLOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreateGlobalDomainACLRequest&, CreateGlobalDomainACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalDomainACLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMNPResponse> CreateMNPOutcome;
                typedef std::future<CreateMNPOutcome> CreateMNPOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreateMNPRequest&, CreateMNPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMNPAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMNPApprovalResponse> CreateMNPApprovalOutcome;
                typedef std::future<CreateMNPApprovalOutcome> CreateMNPApprovalOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreateMNPApprovalRequest&, CreateMNPApprovalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMNPApprovalAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMNPDomainACLResponse> CreateMNPDomainACLOutcome;
                typedef std::future<CreateMNPDomainACLOutcome> CreateMNPDomainACLOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreateMNPDomainACLRequest&, CreateMNPDomainACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMNPDomainACLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMNPSensitiveAPIPermissionApprovalResponse> CreateMNPSensitiveAPIPermissionApprovalOutcome;
                typedef std::future<CreateMNPSensitiveAPIPermissionApprovalOutcome> CreateMNPSensitiveAPIPermissionApprovalOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreateMNPSensitiveAPIPermissionApprovalRequest&, CreateMNPSensitiveAPIPermissionApprovalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMNPSensitiveAPIPermissionApprovalAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMNPVersionResponse> CreateMNPVersionOutcome;
                typedef std::future<CreateMNPVersionOutcome> CreateMNPVersionOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreateMNPVersionRequest&, CreateMNPVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMNPVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOnlineApplyResponse> CreateOnlineApplyOutcome;
                typedef std::future<CreateOnlineApplyOutcome> CreateOnlineApplyOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreateOnlineApplyRequest&, CreateOnlineApplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOnlineApplyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePlatformAuditResponse> CreatePlatformAuditOutcome;
                typedef std::future<CreatePlatformAuditOutcome> CreatePlatformAuditOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreatePlatformAuditRequest&, CreatePlatformAuditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePlatformAuditAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePresetKeyResponse> CreatePresetKeyOutcome;
                typedef std::future<CreatePresetKeyOutcome> CreatePresetKeyOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreatePresetKeyRequest&, CreatePresetKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePresetKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSensitiveAPIResponse> CreateSensitiveAPIOutcome;
                typedef std::future<CreateSensitiveAPIOutcome> CreateSensitiveAPIOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreateSensitiveAPIRequest&, CreateSensitiveAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSensitiveAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSensitiveApiApplyResponse> CreateSensitiveApiApplyOutcome;
                typedef std::future<CreateSensitiveApiApplyOutcome> CreateSensitiveApiApplyOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreateSensitiveApiApplyRequest&, CreateSensitiveApiApplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSensitiveApiApplyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTeamResponse> CreateTeamOutcome;
                typedef std::future<CreateTeamOutcome> CreateTeamOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreateTeamRequest&, CreateTeamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTeamAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTeamMemberResponse> CreateTeamMemberOutcome;
                typedef std::future<CreateTeamMemberOutcome> CreateTeamMemberOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreateTeamMemberRequest&, CreateTeamMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTeamMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationResponse> DeleteApplicationOutcome;
                typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DeleteApplicationRequest&, DeleteApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationSensitiveAPIResponse> DeleteApplicationSensitiveAPIOutcome;
                typedef std::future<DeleteApplicationSensitiveAPIOutcome> DeleteApplicationSensitiveAPIOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DeleteApplicationSensitiveAPIRequest&, DeleteApplicationSensitiveAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationSensitiveAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGlobalDomainResponse> DeleteGlobalDomainOutcome;
                typedef std::future<DeleteGlobalDomainOutcome> DeleteGlobalDomainOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DeleteGlobalDomainRequest&, DeleteGlobalDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMNPResponse> DeleteMNPOutcome;
                typedef std::future<DeleteMNPOutcome> DeleteMNPOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DeleteMNPRequest&, DeleteMNPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMNPAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSensitiveAPIResponse> DeleteSensitiveAPIOutcome;
                typedef std::future<DeleteSensitiveAPIOutcome> DeleteSensitiveAPIOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DeleteSensitiveAPIRequest&, DeleteSensitiveAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSensitiveAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTeamResponse> DeleteTeamOutcome;
                typedef std::future<DeleteTeamOutcome> DeleteTeamOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DeleteTeamRequest&, DeleteTeamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTeamAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTeamMemberResponse> DeleteTeamMemberOutcome;
                typedef std::future<DeleteTeamMemberOutcome> DeleteTeamMemberOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DeleteTeamMemberRequest&, DeleteTeamMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTeamMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationResponse> DescribeApplicationOutcome;
                typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeApplicationRequest&, DescribeApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationConfigResponse> DescribeApplicationConfigOutcome;
                typedef std::future<DescribeApplicationConfigOutcome> DescribeApplicationConfigOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeApplicationConfigRequest&, DescribeApplicationConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationConfigFileResponse> DescribeApplicationConfigFileOutcome;
                typedef std::future<DescribeApplicationConfigFileOutcome> DescribeApplicationConfigFileOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeApplicationConfigFileRequest&, DescribeApplicationConfigFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationConfigFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationListResponse> DescribeApplicationListOutcome;
                typedef std::future<DescribeApplicationListOutcome> DescribeApplicationListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeApplicationListRequest&, DescribeApplicationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationMNPVersionAuditListResponse> DescribeApplicationMNPVersionAuditListOutcome;
                typedef std::future<DescribeApplicationMNPVersionAuditListOutcome> DescribeApplicationMNPVersionAuditListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeApplicationMNPVersionAuditListRequest&, DescribeApplicationMNPVersionAuditListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationMNPVersionAuditListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationSensitiveAPIListResponse> DescribeApplicationSensitiveAPIListOutcome;
                typedef std::future<DescribeApplicationSensitiveAPIListOutcome> DescribeApplicationSensitiveAPIListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeApplicationSensitiveAPIListRequest&, DescribeApplicationSensitiveAPIListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationSensitiveAPIListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsoleMNPVersionCompileTaskResponse> DescribeConsoleMNPVersionCompileTaskOutcome;
                typedef std::future<DescribeConsoleMNPVersionCompileTaskOutcome> DescribeConsoleMNPVersionCompileTaskOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeConsoleMNPVersionCompileTaskRequest&, DescribeConsoleMNPVersionCompileTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsoleMNPVersionCompileTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainInfoResponse> DescribeDomainInfoOutcome;
                typedef std::future<DescribeDomainInfoOutcome> DescribeDomainInfoOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeDomainInfoRequest&, DescribeDomainInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainTeamListResponse> DescribeDomainTeamListOutcome;
                typedef std::future<DescribeDomainTeamListOutcome> DescribeDomainTeamListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeDomainTeamListRequest&, DescribeDomainTeamListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainTeamListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlobalDomainACLResponse> DescribeGlobalDomainACLOutcome;
                typedef std::future<DescribeGlobalDomainACLOutcome> DescribeGlobalDomainACLOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeGlobalDomainACLRequest&, DescribeGlobalDomainACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalDomainACLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlobalDomainListResponse> DescribeGlobalDomainListOutcome;
                typedef std::future<DescribeGlobalDomainListOutcome> DescribeGlobalDomainListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeGlobalDomainListRequest&, DescribeGlobalDomainListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalDomainListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPResponse> DescribeMNPOutcome;
                typedef std::future<DescribeMNPOutcome> DescribeMNPOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPRequest&, DescribeMNPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPAllStageVersionsResponse> DescribeMNPAllStageVersionsOutcome;
                typedef std::future<DescribeMNPAllStageVersionsOutcome> DescribeMNPAllStageVersionsOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPAllStageVersionsRequest&, DescribeMNPAllStageVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPAllStageVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPApprovalListResponse> DescribeMNPApprovalListOutcome;
                typedef std::future<DescribeMNPApprovalListOutcome> DescribeMNPApprovalListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPApprovalListRequest&, DescribeMNPApprovalListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPApprovalListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPBoardResponse> DescribeMNPBoardOutcome;
                typedef std::future<DescribeMNPBoardOutcome> DescribeMNPBoardOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPBoardRequest&, DescribeMNPBoardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPBoardAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPCategoryResponse> DescribeMNPCategoryOutcome;
                typedef std::future<DescribeMNPCategoryOutcome> DescribeMNPCategoryOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPCategoryRequest&, DescribeMNPCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPDetailResponse> DescribeMNPDetailOutcome;
                typedef std::future<DescribeMNPDetailOutcome> DescribeMNPDetailOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPDetailRequest&, DescribeMNPDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPDomainACLResponse> DescribeMNPDomainACLOutcome;
                typedef std::future<DescribeMNPDomainACLOutcome> DescribeMNPDomainACLOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPDomainACLRequest&, DescribeMNPDomainACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPDomainACLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPListResponse> DescribeMNPListOutcome;
                typedef std::future<DescribeMNPListOutcome> DescribeMNPListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPListRequest&, DescribeMNPListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPManagerDetailResponse> DescribeMNPManagerDetailOutcome;
                typedef std::future<DescribeMNPManagerDetailOutcome> DescribeMNPManagerDetailOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPManagerDetailRequest&, DescribeMNPManagerDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPManagerDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPManagerListResponse> DescribeMNPManagerListOutcome;
                typedef std::future<DescribeMNPManagerListOutcome> DescribeMNPManagerListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPManagerListRequest&, DescribeMNPManagerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPManagerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPOfflinePackageURLResponse> DescribeMNPOfflinePackageURLOutcome;
                typedef std::future<DescribeMNPOfflinePackageURLOutcome> DescribeMNPOfflinePackageURLOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPOfflinePackageURLRequest&, DescribeMNPOfflinePackageURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPOfflinePackageURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPPreviewResponse> DescribeMNPPreviewOutcome;
                typedef std::future<DescribeMNPPreviewOutcome> DescribeMNPPreviewOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPPreviewRequest&, DescribeMNPPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPPrivacyResponse> DescribeMNPPrivacyOutcome;
                typedef std::future<DescribeMNPPrivacyOutcome> DescribeMNPPrivacyOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPPrivacyRequest&, DescribeMNPPrivacyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPPrivacyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPReleasedVersionHistoryResponse> DescribeMNPReleasedVersionHistoryOutcome;
                typedef std::future<DescribeMNPReleasedVersionHistoryOutcome> DescribeMNPReleasedVersionHistoryOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPReleasedVersionHistoryRequest&, DescribeMNPReleasedVersionHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPReleasedVersionHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPSensitiveAPIPermissionApprovalResponse> DescribeMNPSensitiveAPIPermissionApprovalOutcome;
                typedef std::future<DescribeMNPSensitiveAPIPermissionApprovalOutcome> DescribeMNPSensitiveAPIPermissionApprovalOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPSensitiveAPIPermissionApprovalRequest&, DescribeMNPSensitiveAPIPermissionApprovalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPSensitiveAPIPermissionApprovalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPSensitiveAPIPermissionApprovalListResponse> DescribeMNPSensitiveAPIPermissionApprovalListOutcome;
                typedef std::future<DescribeMNPSensitiveAPIPermissionApprovalListOutcome> DescribeMNPSensitiveAPIPermissionApprovalListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPSensitiveAPIPermissionApprovalListRequest&, DescribeMNPSensitiveAPIPermissionApprovalListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPSensitiveAPIPermissionApprovalListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPSensitiveAPIPermissionListResponse> DescribeMNPSensitiveAPIPermissionListOutcome;
                typedef std::future<DescribeMNPSensitiveAPIPermissionListOutcome> DescribeMNPSensitiveAPIPermissionListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPSensitiveAPIPermissionListRequest&, DescribeMNPSensitiveAPIPermissionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPSensitiveAPIPermissionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPTypeResponse> DescribeMNPTypeOutcome;
                typedef std::future<DescribeMNPTypeOutcome> DescribeMNPTypeOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPTypeRequest&, DescribeMNPTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPVersionResponse> DescribeMNPVersionOutcome;
                typedef std::future<DescribeMNPVersionOutcome> DescribeMNPVersionOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPVersionRequest&, DescribeMNPVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPVersionPreviewResponse> DescribeMNPVersionPreviewOutcome;
                typedef std::future<DescribeMNPVersionPreviewOutcome> DescribeMNPVersionPreviewOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeMNPVersionPreviewRequest&, DescribeMNPVersionPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPVersionPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOfflineMNPPackageResponse> DescribeOfflineMNPPackageOutcome;
                typedef std::future<DescribeOfflineMNPPackageOutcome> DescribeOfflineMNPPackageOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeOfflineMNPPackageRequest&, DescribeOfflineMNPPackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOfflineMNPPackageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOnlineVersionResponse> DescribeOnlineVersionOutcome;
                typedef std::future<DescribeOnlineVersionOutcome> DescribeOnlineVersionOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeOnlineVersionRequest&, DescribeOnlineVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOnlineVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoleDetailResponse> DescribeRoleDetailOutcome;
                typedef std::future<DescribeRoleDetailOutcome> DescribeRoleDetailOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeRoleDetailRequest&, DescribeRoleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoleListResponse> DescribeRoleListOutcome;
                typedef std::future<DescribeRoleListOutcome> DescribeRoleListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeRoleListRequest&, DescribeRoleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSensitiveAPIAuditListResponse> DescribeSensitiveAPIAuditListOutcome;
                typedef std::future<DescribeSensitiveAPIAuditListOutcome> DescribeSensitiveAPIAuditListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeSensitiveAPIAuditListRequest&, DescribeSensitiveAPIAuditListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSensitiveAPIAuditListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSensitiveAPIListResponse> DescribeSensitiveAPIListOutcome;
                typedef std::future<DescribeSensitiveAPIListOutcome> DescribeSensitiveAPIListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeSensitiveAPIListRequest&, DescribeSensitiveAPIListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSensitiveAPIListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSensitiveApiApplyDetailResponse> DescribeSensitiveApiApplyDetailOutcome;
                typedef std::future<DescribeSensitiveApiApplyDetailOutcome> DescribeSensitiveApiApplyDetailOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeSensitiveApiApplyDetailRequest&, DescribeSensitiveApiApplyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSensitiveApiApplyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSensitiveApiAuthListResponse> DescribeSensitiveApiAuthListOutcome;
                typedef std::future<DescribeSensitiveApiAuthListOutcome> DescribeSensitiveApiAuthListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeSensitiveApiAuthListRequest&, DescribeSensitiveApiAuthListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSensitiveApiAuthListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSimpleApplicationInfoListResponse> DescribeSimpleApplicationInfoListOutcome;
                typedef std::future<DescribeSimpleApplicationInfoListOutcome> DescribeSimpleApplicationInfoListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeSimpleApplicationInfoListRequest&, DescribeSimpleApplicationInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSimpleApplicationInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSimpleTeamListResponse> DescribeSimpleTeamListOutcome;
                typedef std::future<DescribeSimpleTeamListOutcome> DescribeSimpleTeamListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeSimpleTeamListRequest&, DescribeSimpleTeamListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSimpleTeamListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTeamResponse> DescribeTeamOutcome;
                typedef std::future<DescribeTeamOutcome> DescribeTeamOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeTeamRequest&, DescribeTeamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTeamAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTeamDomainListResponse> DescribeTeamDomainListOutcome;
                typedef std::future<DescribeTeamDomainListOutcome> DescribeTeamDomainListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeTeamDomainListRequest&, DescribeTeamDomainListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTeamDomainListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTeamListResponse> DescribeTeamListOutcome;
                typedef std::future<DescribeTeamListOutcome> DescribeTeamListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeTeamListRequest&, DescribeTeamListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTeamListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTeamMemberListResponse> DescribeTeamMemberListOutcome;
                typedef std::future<DescribeTeamMemberListOutcome> DescribeTeamMemberListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeTeamMemberListRequest&, DescribeTeamMemberListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTeamMemberListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTeamMembersResponse> DescribeTeamMembersOutcome;
                typedef std::future<DescribeTeamMembersOutcome> DescribeTeamMembersOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeTeamMembersRequest&, DescribeTeamMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTeamMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTempSecret4UploadFile2CosResponse> DescribeTempSecret4UploadFile2CosOutcome;
                typedef std::future<DescribeTempSecret4UploadFile2CosOutcome> DescribeTempSecret4UploadFile2CosOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeTempSecret4UploadFile2CosRequest&, DescribeTempSecret4UploadFile2CosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTempSecret4UploadFile2CosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserResponse> DescribeUserOutcome;
                typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeUserRequest&, DescribeUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserDetailResponse> DescribeUserDetailOutcome;
                typedef std::future<DescribeUserDetailOutcome> DescribeUserDetailOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeUserDetailRequest&, DescribeUserDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserListResponse> DescribeUserListOutcome;
                typedef std::future<DescribeUserListOutcome> DescribeUserListOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DescribeUserListRequest&, DescribeUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableApplicationSensitiveAPIResponse> DisableApplicationSensitiveAPIOutcome;
                typedef std::future<DisableApplicationSensitiveAPIOutcome> DisableApplicationSensitiveAPIOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DisableApplicationSensitiveAPIRequest&, DisableApplicationSensitiveAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableApplicationSensitiveAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableTeamDomainResponse> DisableTeamDomainOutcome;
                typedef std::future<DisableTeamDomainOutcome> DisableTeamDomainOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::DisableTeamDomainRequest&, DisableTeamDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableTeamDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableApplicationSensitiveAPIResponse> EnableApplicationSensitiveAPIOutcome;
                typedef std::future<EnableApplicationSensitiveAPIOutcome> EnableApplicationSensitiveAPIOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::EnableApplicationSensitiveAPIRequest&, EnableApplicationSensitiveAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableApplicationSensitiveAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationResponse> ModifyApplicationOutcome;
                typedef std::future<ModifyApplicationOutcome> ModifyApplicationOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ModifyApplicationRequest&, ModifyApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationAppKeyResponse> ModifyApplicationAppKeyOutcome;
                typedef std::future<ModifyApplicationAppKeyOutcome> ModifyApplicationAppKeyOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ModifyApplicationAppKeyRequest&, ModifyApplicationAppKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationAppKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationAppUrlResponse> ModifyApplicationAppUrlOutcome;
                typedef std::future<ModifyApplicationAppUrlOutcome> ModifyApplicationAppUrlOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ModifyApplicationAppUrlRequest&, ModifyApplicationAppUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationAppUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainResponse> ModifyDomainOutcome;
                typedef std::future<ModifyDomainOutcome> ModifyDomainOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ModifyDomainRequest&, ModifyDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGlobalDomainResponse> ModifyGlobalDomainOutcome;
                typedef std::future<ModifyGlobalDomainOutcome> ModifyGlobalDomainOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ModifyGlobalDomainRequest&, ModifyGlobalDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMNPResponse> ModifyMNPOutcome;
                typedef std::future<ModifyMNPOutcome> ModifyMNPOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ModifyMNPRequest&, ModifyMNPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMNPAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMNPDomainResponse> ModifyMNPDomainOutcome;
                typedef std::future<ModifyMNPDomainOutcome> ModifyMNPDomainOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ModifyMNPDomainRequest&, ModifyMNPDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMNPDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMNPStatusOfflineResponse> ModifyMNPStatusOfflineOutcome;
                typedef std::future<ModifyMNPStatusOfflineOutcome> ModifyMNPStatusOfflineOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ModifyMNPStatusOfflineRequest&, ModifyMNPStatusOfflineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMNPStatusOfflineAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMNPVersionPreviewResponse> ModifyMNPVersionPreviewOutcome;
                typedef std::future<ModifyMNPVersionPreviewOutcome> ModifyMNPVersionPreviewOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ModifyMNPVersionPreviewRequest&, ModifyMNPVersionPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMNPVersionPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOnlineVersionResponse> ModifyOnlineVersionOutcome;
                typedef std::future<ModifyOnlineVersionOutcome> ModifyOnlineVersionOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ModifyOnlineVersionRequest&, ModifyOnlineVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOnlineVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPlatformAuditStatusResponse> ModifyPlatformAuditStatusOutcome;
                typedef std::future<ModifyPlatformAuditStatusOutcome> ModifyPlatformAuditStatusOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ModifyPlatformAuditStatusRequest&, ModifyPlatformAuditStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPlatformAuditStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySensitiveAPIAuditStatusResponse> ModifySensitiveAPIAuditStatusOutcome;
                typedef std::future<ModifySensitiveAPIAuditStatusOutcome> ModifySensitiveAPIAuditStatusOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ModifySensitiveAPIAuditStatusRequest&, ModifySensitiveAPIAuditStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySensitiveAPIAuditStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTeamResponse> ModifyTeamOutcome;
                typedef std::future<ModifyTeamOutcome> ModifyTeamOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ModifyTeamRequest&, ModifyTeamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTeamAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTeamMemberResponse> ModifyTeamMemberOutcome;
                typedef std::future<ModifyTeamMemberOutcome> ModifyTeamMemberOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ModifyTeamMemberRequest&, ModifyTeamMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTeamMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserResponse> ModifyUserOutcome;
                typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ModifyUserRequest&, ModifyUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserPasswordResponse> ModifyUserPasswordOutcome;
                typedef std::future<ModifyUserPasswordOutcome> ModifyUserPasswordOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ModifyUserPasswordRequest&, ModifyUserPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessMNPApprovalResponse> ProcessMNPApprovalOutcome;
                typedef std::future<ProcessMNPApprovalOutcome> ProcessMNPApprovalOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ProcessMNPApprovalRequest&, ProcessMNPApprovalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMNPApprovalAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessMNPSensitiveAPIPermissionApprovalResponse> ProcessMNPSensitiveAPIPermissionApprovalOutcome;
                typedef std::future<ProcessMNPSensitiveAPIPermissionApprovalOutcome> ProcessMNPSensitiveAPIPermissionApprovalOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ProcessMNPSensitiveAPIPermissionApprovalRequest&, ProcessMNPSensitiveAPIPermissionApprovalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMNPSensitiveAPIPermissionApprovalAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseMNPVersionResponse> ReleaseMNPVersionOutcome;
                typedef std::future<ReleaseMNPVersionOutcome> ReleaseMNPVersionOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::ReleaseMNPVersionRequest&, ReleaseMNPVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseMNPVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveMNPResponse> RemoveMNPOutcome;
                typedef std::future<RemoveMNPOutcome> RemoveMNPOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::RemoveMNPRequest&, RemoveMNPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveMNPAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackMNPVersionResponse> RollbackMNPVersionOutcome;
                typedef std::future<RollbackMNPVersionOutcome> RollbackMNPVersionOutcomeCallable;
                typedef std::function<void(const TcmppClient*, const Model::RollbackMNPVersionRequest&, RollbackMNPVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackMNPVersionAsyncHandler;



                /**
                 *This API is used to add a team member.
                 * @param req AddTeamMemberRequest
                 * @return AddTeamMemberOutcome
                 */
                AddTeamMemberOutcome AddTeamMember(const Model::AddTeamMemberRequest &request);
                void AddTeamMemberAsync(const Model::AddTeamMemberRequest& request, const AddTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddTeamMemberOutcomeCallable AddTeamMemberCallable(const Model::AddTeamMemberRequest& request);

                /**
                 *This API is used to query if the domain is in the allowlist or blocklist
                 * @param req CheckGlobalDomainRequest
                 * @return CheckGlobalDomainOutcome
                 */
                CheckGlobalDomainOutcome CheckGlobalDomain(const Model::CheckGlobalDomainRequest &request);
                void CheckGlobalDomainAsync(const Model::CheckGlobalDomainRequest& request, const CheckGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckGlobalDomainOutcomeCallable CheckGlobalDomainCallable(const Model::CheckGlobalDomainRequest& request);

                /**
                 *This API is used to configure the preview version of a mini program.
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
                 *This API is used to add a new mini program version
                 * @param req CreateConsoleMNPVersionCompileTaskRequest
                 * @return CreateConsoleMNPVersionCompileTaskOutcome
                 */
                CreateConsoleMNPVersionCompileTaskOutcome CreateConsoleMNPVersionCompileTask(const Model::CreateConsoleMNPVersionCompileTaskRequest &request);
                void CreateConsoleMNPVersionCompileTaskAsync(const Model::CreateConsoleMNPVersionCompileTaskRequest& request, const CreateConsoleMNPVersionCompileTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsoleMNPVersionCompileTaskOutcomeCallable CreateConsoleMNPVersionCompileTaskCallable(const Model::CreateConsoleMNPVersionCompileTaskRequest& request);

                /**
                 *This API is used to create a mini program service domain
                 * @param req CreateDomainRequest
                 * @return CreateDomainOutcome
                 */
                CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest &request);
                void CreateDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainOutcomeCallable CreateDomainCallable(const Model::CreateDomainRequest& request);

                /**
                 *This API is used to add domains to allowlist or blocklist
                 * @param req CreateGlobalDomainRequest
                 * @return CreateGlobalDomainOutcome
                 */
                CreateGlobalDomainOutcome CreateGlobalDomain(const Model::CreateGlobalDomainRequest &request);
                void CreateGlobalDomainAsync(const Model::CreateGlobalDomainRequest& request, const CreateGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGlobalDomainOutcomeCallable CreateGlobalDomainCallable(const Model::CreateGlobalDomainRequest& request);

                /**
                 *This API is used to create a global domain allowlist or blocklist.
                 * @param req CreateGlobalDomainACLRequest
                 * @return CreateGlobalDomainACLOutcome
                 */
                CreateGlobalDomainACLOutcome CreateGlobalDomainACL(const Model::CreateGlobalDomainACLRequest &request);
                void CreateGlobalDomainACLAsync(const Model::CreateGlobalDomainACLRequest& request, const CreateGlobalDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGlobalDomainACLOutcomeCallable CreateGlobalDomainACLCallable(const Model::CreateGlobalDomainACLRequest& request);

                /**
                 *This API is used to create a mini program
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
                 *This API is used to add a domain name to the allowlist/blocklist of a mini program.
                 * @param req CreateMNPDomainACLRequest
                 * @return CreateMNPDomainACLOutcome
                 */
                CreateMNPDomainACLOutcome CreateMNPDomainACL(const Model::CreateMNPDomainACLRequest &request);
                void CreateMNPDomainACLAsync(const Model::CreateMNPDomainACLRequest& request, const CreateMNPDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMNPDomainACLOutcomeCallable CreateMNPDomainACLCallable(const Model::CreateMNPDomainACLRequest& request);

                /**
                 *This API is used to create a permission request to allow a mini program calling sensitive APIs.
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
                 *This API is used to release the mini program
                 * @param req CreateOnlineApplyRequest
                 * @return CreateOnlineApplyOutcome
                 */
                CreateOnlineApplyOutcome CreateOnlineApply(const Model::CreateOnlineApplyRequest &request);
                void CreateOnlineApplyAsync(const Model::CreateOnlineApplyRequest& request, const CreateOnlineApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOnlineApplyOutcomeCallable CreateOnlineApplyCallable(const Model::CreateOnlineApplyRequest& request);

                /**
                 *This API is used to submit mini program version for approval
                 * @param req CreatePlatformAuditRequest
                 * @return CreatePlatformAuditOutcome
                 */
                CreatePlatformAuditOutcome CreatePlatformAudit(const Model::CreatePlatformAuditRequest &request);
                void CreatePlatformAuditAsync(const Model::CreatePlatformAuditRequest& request, const CreatePlatformAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePlatformAuditOutcomeCallable CreatePlatformAuditCallable(const Model::CreatePlatformAuditRequest& request);

                /**
                 *This API is used to obtain the encryption key
                 * @param req CreatePresetKeyRequest
                 * @return CreatePresetKeyOutcome
                 */
                CreatePresetKeyOutcome CreatePresetKey(const Model::CreatePresetKeyRequest &request);
                void CreatePresetKeyAsync(const Model::CreatePresetKeyRequest& request, const CreatePresetKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePresetKeyOutcomeCallable CreatePresetKeyCallable(const Model::CreatePresetKeyRequest& request);

                /**
                 *This API is used to add a sensitive API
                 * @param req CreateSensitiveAPIRequest
                 * @return CreateSensitiveAPIOutcome
                 */
                CreateSensitiveAPIOutcome CreateSensitiveAPI(const Model::CreateSensitiveAPIRequest &request);
                void CreateSensitiveAPIAsync(const Model::CreateSensitiveAPIRequest& request, const CreateSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSensitiveAPIOutcomeCallable CreateSensitiveAPICallable(const Model::CreateSensitiveAPIRequest& request);

                /**
                 *This API is used to apply for sensitive API permissions
                 * @param req CreateSensitiveApiApplyRequest
                 * @return CreateSensitiveApiApplyOutcome
                 */
                CreateSensitiveApiApplyOutcome CreateSensitiveApiApply(const Model::CreateSensitiveApiApplyRequest &request);
                void CreateSensitiveApiApplyAsync(const Model::CreateSensitiveApiApplyRequest& request, const CreateSensitiveApiApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSensitiveApiApplyOutcomeCallable CreateSensitiveApiApplyCallable(const Model::CreateSensitiveApiApplyRequest& request);

                /**
                 *This API is used to create a team.
                 * @param req CreateTeamRequest
                 * @return CreateTeamOutcome
                 */
                CreateTeamOutcome CreateTeam(const Model::CreateTeamRequest &request);
                void CreateTeamAsync(const Model::CreateTeamRequest& request, const CreateTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTeamOutcomeCallable CreateTeamCallable(const Model::CreateTeamRequest& request);

                /**
                 *This API is used to add team members
                 * @param req CreateTeamMemberRequest
                 * @return CreateTeamMemberOutcome
                 */
                CreateTeamMemberOutcome CreateTeamMember(const Model::CreateTeamMemberRequest &request);
                void CreateTeamMemberAsync(const Model::CreateTeamMemberRequest& request, const CreateTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTeamMemberOutcomeCallable CreateTeamMemberCallable(const Model::CreateTeamMemberRequest& request);

                /**
                 *This API is used to create a user
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *This API is used to delete applications
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
                 *This API is used to delete domains from allowlist or blocklist
                 * @param req DeleteGlobalDomainRequest
                 * @return DeleteGlobalDomainOutcome
                 */
                DeleteGlobalDomainOutcome DeleteGlobalDomain(const Model::DeleteGlobalDomainRequest &request);
                void DeleteGlobalDomainAsync(const Model::DeleteGlobalDomainRequest& request, const DeleteGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGlobalDomainOutcomeCallable DeleteGlobalDomainCallable(const Model::DeleteGlobalDomainRequest& request);

                /**
                 *This API is used to delete the mini program
                 * @param req DeleteMNPRequest
                 * @return DeleteMNPOutcome
                 */
                DeleteMNPOutcome DeleteMNP(const Model::DeleteMNPRequest &request);
                void DeleteMNPAsync(const Model::DeleteMNPRequest& request, const DeleteMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMNPOutcomeCallable DeleteMNPCallable(const Model::DeleteMNPRequest& request);

                /**
                 *This API is used to delete sensitive API
                 * @param req DeleteSensitiveAPIRequest
                 * @return DeleteSensitiveAPIOutcome
                 */
                DeleteSensitiveAPIOutcome DeleteSensitiveAPI(const Model::DeleteSensitiveAPIRequest &request);
                void DeleteSensitiveAPIAsync(const Model::DeleteSensitiveAPIRequest& request, const DeleteSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSensitiveAPIOutcomeCallable DeleteSensitiveAPICallable(const Model::DeleteSensitiveAPIRequest& request);

                /**
                 *This API is used to delete a team
                 * @param req DeleteTeamRequest
                 * @return DeleteTeamOutcome
                 */
                DeleteTeamOutcome DeleteTeam(const Model::DeleteTeamRequest &request);
                void DeleteTeamAsync(const Model::DeleteTeamRequest& request, const DeleteTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTeamOutcomeCallable DeleteTeamCallable(const Model::DeleteTeamRequest& request);

                /**
                 *This API is used to delete a team member
                 * @param req DeleteTeamMemberRequest
                 * @return DeleteTeamMemberOutcome
                 */
                DeleteTeamMemberOutcome DeleteTeamMember(const Model::DeleteTeamMemberRequest &request);
                void DeleteTeamMemberAsync(const Model::DeleteTeamMemberRequest& request, const DeleteTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTeamMemberOutcomeCallable DeleteTeamMemberCallable(const Model::DeleteTeamMemberRequest& request);

                /**
                 *This API is used to delete a user
                 * @param req DeleteUserRequest
                 * @return DeleteUserOutcome
                 */
                DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest &request);
                void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request);

                /**
                 *This API is used to query details of an application. 
                 * @param req DescribeApplicationRequest
                 * @return DescribeApplicationOutcome
                 */
                DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest &request);
                void DescribeApplicationAsync(const Model::DescribeApplicationRequest& request, const DescribeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationOutcomeCallable DescribeApplicationCallable(const Model::DescribeApplicationRequest& request);

                /**
                 *This API is used to query application configuration information
                 * @param req DescribeApplicationConfigRequest
                 * @return DescribeApplicationConfigOutcome
                 */
                DescribeApplicationConfigOutcome DescribeApplicationConfig(const Model::DescribeApplicationConfigRequest &request);
                void DescribeApplicationConfigAsync(const Model::DescribeApplicationConfigRequest& request, const DescribeApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationConfigOutcomeCallable DescribeApplicationConfigCallable(const Model::DescribeApplicationConfigRequest& request);

                /**
                 *This API is used to query the configuration files of an application.
                 * @param req DescribeApplicationConfigFileRequest
                 * @return DescribeApplicationConfigFileOutcome
                 */
                DescribeApplicationConfigFileOutcome DescribeApplicationConfigFile(const Model::DescribeApplicationConfigFileRequest &request);
                void DescribeApplicationConfigFileAsync(const Model::DescribeApplicationConfigFileRequest& request, const DescribeApplicationConfigFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationConfigFileOutcomeCallable DescribeApplicationConfigFileCallable(const Model::DescribeApplicationConfigFileRequest& request);

                /**
                 *This API is used to query the list of application. 
                 * @param req DescribeApplicationListRequest
                 * @return DescribeApplicationListOutcome
                 */
                DescribeApplicationListOutcome DescribeApplicationList(const Model::DescribeApplicationListRequest &request);
                void DescribeApplicationListAsync(const Model::DescribeApplicationListRequest& request, const DescribeApplicationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationListOutcomeCallable DescribeApplicationListCallable(const Model::DescribeApplicationListRequest& request);

                /**
                 *This API is used to query the approval list of the mini program versions
                 * @param req DescribeApplicationMNPVersionAuditListRequest
                 * @return DescribeApplicationMNPVersionAuditListOutcome
                 */
                DescribeApplicationMNPVersionAuditListOutcome DescribeApplicationMNPVersionAuditList(const Model::DescribeApplicationMNPVersionAuditListRequest &request);
                void DescribeApplicationMNPVersionAuditListAsync(const Model::DescribeApplicationMNPVersionAuditListRequest& request, const DescribeApplicationMNPVersionAuditListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationMNPVersionAuditListOutcomeCallable DescribeApplicationMNPVersionAuditListCallable(const Model::DescribeApplicationMNPVersionAuditListRequest& request);

                /**
                 *This API is used to list sensitive APIs of an application. 
                 * @param req DescribeApplicationSensitiveAPIListRequest
                 * @return DescribeApplicationSensitiveAPIListOutcome
                 */
                DescribeApplicationSensitiveAPIListOutcome DescribeApplicationSensitiveAPIList(const Model::DescribeApplicationSensitiveAPIListRequest &request);
                void DescribeApplicationSensitiveAPIListAsync(const Model::DescribeApplicationSensitiveAPIListRequest& request, const DescribeApplicationSensitiveAPIListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationSensitiveAPIListOutcomeCallable DescribeApplicationSensitiveAPIListCallable(const Model::DescribeApplicationSensitiveAPIListRequest& request);

                /**
                 *This API is used to query if the mini program version is created successfully
                 * @param req DescribeConsoleMNPVersionCompileTaskRequest
                 * @return DescribeConsoleMNPVersionCompileTaskOutcome
                 */
                DescribeConsoleMNPVersionCompileTaskOutcome DescribeConsoleMNPVersionCompileTask(const Model::DescribeConsoleMNPVersionCompileTaskRequest &request);
                void DescribeConsoleMNPVersionCompileTaskAsync(const Model::DescribeConsoleMNPVersionCompileTaskRequest& request, const DescribeConsoleMNPVersionCompileTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsoleMNPVersionCompileTaskOutcomeCallable DescribeConsoleMNPVersionCompileTaskCallable(const Model::DescribeConsoleMNPVersionCompileTaskRequest& request);

                /**
                 *This API is used to query the domain name list configured for the mini program
                 * @param req DescribeDomainInfoRequest
                 * @return DescribeDomainInfoOutcome
                 */
                DescribeDomainInfoOutcome DescribeDomainInfo(const Model::DescribeDomainInfoRequest &request);
                void DescribeDomainInfoAsync(const Model::DescribeDomainInfoRequest& request, const DescribeDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainInfoOutcomeCallable DescribeDomainInfoCallable(const Model::DescribeDomainInfoRequest& request);

                /**
                 *This API is used to query the list of teams with domains that obtained the ICP filing
                 * @param req DescribeDomainTeamListRequest
                 * @return DescribeDomainTeamListOutcome
                 */
                DescribeDomainTeamListOutcome DescribeDomainTeamList(const Model::DescribeDomainTeamListRequest &request);
                void DescribeDomainTeamListAsync(const Model::DescribeDomainTeamListRequest& request, const DescribeDomainTeamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainTeamListOutcomeCallable DescribeDomainTeamListCallable(const Model::DescribeDomainTeamListRequest& request);

                /**
                 *This API is used to query the global domain allowlist and blocklist.
                 * @param req DescribeGlobalDomainACLRequest
                 * @return DescribeGlobalDomainACLOutcome
                 */
                DescribeGlobalDomainACLOutcome DescribeGlobalDomainACL(const Model::DescribeGlobalDomainACLRequest &request);
                void DescribeGlobalDomainACLAsync(const Model::DescribeGlobalDomainACLRequest& request, const DescribeGlobalDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGlobalDomainACLOutcomeCallable DescribeGlobalDomainACLCallable(const Model::DescribeGlobalDomainACLRequest& request);

                /**
                 *This API is used to query domain allowlist and blocklist
                 * @param req DescribeGlobalDomainListRequest
                 * @return DescribeGlobalDomainListOutcome
                 */
                DescribeGlobalDomainListOutcome DescribeGlobalDomainList(const Model::DescribeGlobalDomainListRequest &request);
                void DescribeGlobalDomainListAsync(const Model::DescribeGlobalDomainListRequest& request, const DescribeGlobalDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGlobalDomainListOutcomeCallable DescribeGlobalDomainListCallable(const Model::DescribeGlobalDomainListRequest& request);

                /**
                 *This API is used to query details of a mini program. 
                 * @param req DescribeMNPRequest
                 * @return DescribeMNPOutcome
                 */
                DescribeMNPOutcome DescribeMNP(const Model::DescribeMNPRequest &request);
                void DescribeMNPAsync(const Model::DescribeMNPRequest& request, const DescribeMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPOutcomeCallable DescribeMNPCallable(const Model::DescribeMNPRequest& request);

                /**
                 *This API is used to query the mini program version management information
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
                 *This API is used to query the mini program version management information
                 * @param req DescribeMNPBoardRequest
                 * @return DescribeMNPBoardOutcome
                 */
                DescribeMNPBoardOutcome DescribeMNPBoard(const Model::DescribeMNPBoardRequest &request);
                void DescribeMNPBoardAsync(const Model::DescribeMNPBoardRequest& request, const DescribeMNPBoardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPBoardOutcomeCallable DescribeMNPBoardCallable(const Model::DescribeMNPBoardRequest& request);

                /**
                 *This API is used to query the list of mini program types.
                 * @param req DescribeMNPCategoryRequest
                 * @return DescribeMNPCategoryOutcome
                 */
                DescribeMNPCategoryOutcome DescribeMNPCategory(const Model::DescribeMNPCategoryRequest &request);
                void DescribeMNPCategoryAsync(const Model::DescribeMNPCategoryRequest& request, const DescribeMNPCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPCategoryOutcomeCallable DescribeMNPCategoryCallable(const Model::DescribeMNPCategoryRequest& request);

                /**
                 *This API is used to query mini program details
                 * @param req DescribeMNPDetailRequest
                 * @return DescribeMNPDetailOutcome
                 */
                DescribeMNPDetailOutcome DescribeMNPDetail(const Model::DescribeMNPDetailRequest &request);
                void DescribeMNPDetailAsync(const Model::DescribeMNPDetailRequest& request, const DescribeMNPDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPDetailOutcomeCallable DescribeMNPDetailCallable(const Model::DescribeMNPDetailRequest& request);

                /**
                 *This API is used to query the domain name allowlist / blocklist of a mini program. 
                 * @param req DescribeMNPDomainACLRequest
                 * @return DescribeMNPDomainACLOutcome
                 */
                DescribeMNPDomainACLOutcome DescribeMNPDomainACL(const Model::DescribeMNPDomainACLRequest &request);
                void DescribeMNPDomainACLAsync(const Model::DescribeMNPDomainACLRequest& request, const DescribeMNPDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPDomainACLOutcomeCallable DescribeMNPDomainACLCallable(const Model::DescribeMNPDomainACLRequest& request);

                /**
                 *This API is used to query the list of mini programs.
                 * @param req DescribeMNPListRequest
                 * @return DescribeMNPListOutcome
                 */
                DescribeMNPListOutcome DescribeMNPList(const Model::DescribeMNPListRequest &request);
                void DescribeMNPListAsync(const Model::DescribeMNPListRequest& request, const DescribeMNPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPListOutcomeCallable DescribeMNPListCallable(const Model::DescribeMNPListRequest& request);

                /**
                 *This API is used to query mini program details in the mini program list
                 * @param req DescribeMNPManagerDetailRequest
                 * @return DescribeMNPManagerDetailOutcome
                 */
                DescribeMNPManagerDetailOutcome DescribeMNPManagerDetail(const Model::DescribeMNPManagerDetailRequest &request);
                void DescribeMNPManagerDetailAsync(const Model::DescribeMNPManagerDetailRequest& request, const DescribeMNPManagerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPManagerDetailOutcomeCallable DescribeMNPManagerDetailCallable(const Model::DescribeMNPManagerDetailRequest& request);

                /**
                 *This API is used to query the mini program list
                 * @param req DescribeMNPManagerListRequest
                 * @return DescribeMNPManagerListOutcome
                 */
                DescribeMNPManagerListOutcome DescribeMNPManagerList(const Model::DescribeMNPManagerListRequest &request);
                void DescribeMNPManagerListAsync(const Model::DescribeMNPManagerListRequest& request, const DescribeMNPManagerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPManagerListOutcomeCallable DescribeMNPManagerListCallable(const Model::DescribeMNPManagerListRequest& request);

                /**
                 *DescribeMNPOfflinePackageURL
                 * @param req DescribeMNPOfflinePackageURLRequest
                 * @return DescribeMNPOfflinePackageURLOutcome
                 */
                DescribeMNPOfflinePackageURLOutcome DescribeMNPOfflinePackageURL(const Model::DescribeMNPOfflinePackageURLRequest &request);
                void DescribeMNPOfflinePackageURLAsync(const Model::DescribeMNPOfflinePackageURLRequest& request, const DescribeMNPOfflinePackageURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPOfflinePackageURLOutcomeCallable DescribeMNPOfflinePackageURLCallable(const Model::DescribeMNPOfflinePackageURLRequest& request);

                /**
                 *This API is used to query the details of a mini program preview version.
                 * @param req DescribeMNPPreviewRequest
                 * @return DescribeMNPPreviewOutcome
                 */
                DescribeMNPPreviewOutcome DescribeMNPPreview(const Model::DescribeMNPPreviewRequest &request);
                void DescribeMNPPreviewAsync(const Model::DescribeMNPPreviewRequest& request, const DescribeMNPPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPPreviewOutcomeCallable DescribeMNPPreviewCallable(const Model::DescribeMNPPreviewRequest& request);

                /**
                 *This API is used to query the details filled in the service description
                 * @param req DescribeMNPPrivacyRequest
                 * @return DescribeMNPPrivacyOutcome
                 */
                DescribeMNPPrivacyOutcome DescribeMNPPrivacy(const Model::DescribeMNPPrivacyRequest &request);
                void DescribeMNPPrivacyAsync(const Model::DescribeMNPPrivacyRequest& request, const DescribeMNPPrivacyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPPrivacyOutcomeCallable DescribeMNPPrivacyCallable(const Model::DescribeMNPPrivacyRequest& request);

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
                 *This API is used to query the mini program type list
                 * @param req DescribeMNPTypeRequest
                 * @return DescribeMNPTypeOutcome
                 */
                DescribeMNPTypeOutcome DescribeMNPType(const Model::DescribeMNPTypeRequest &request);
                void DescribeMNPTypeAsync(const Model::DescribeMNPTypeRequest& request, const DescribeMNPTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPTypeOutcomeCallable DescribeMNPTypeCallable(const Model::DescribeMNPTypeRequest& request);

                /**
                 *This API is used to query the result of the task to create a mini program version.
                 * @param req DescribeMNPVersionRequest
                 * @return DescribeMNPVersionOutcome
                 */
                DescribeMNPVersionOutcome DescribeMNPVersion(const Model::DescribeMNPVersionRequest &request);
                void DescribeMNPVersionAsync(const Model::DescribeMNPVersionRequest& request, const DescribeMNPVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPVersionOutcomeCallable DescribeMNPVersionCallable(const Model::DescribeMNPVersionRequest& request);

                /**
                 *This API is used to query the details of the mini program preview version
                 * @param req DescribeMNPVersionPreviewRequest
                 * @return DescribeMNPVersionPreviewOutcome
                 */
                DescribeMNPVersionPreviewOutcome DescribeMNPVersionPreview(const Model::DescribeMNPVersionPreviewRequest &request);
                void DescribeMNPVersionPreviewAsync(const Model::DescribeMNPVersionPreviewRequest& request, const DescribeMNPVersionPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPVersionPreviewOutcomeCallable DescribeMNPVersionPreviewCallable(const Model::DescribeMNPVersionPreviewRequest& request);

                /**
                 *This API is used to query offline mini program packages
                 * @param req DescribeOfflineMNPPackageRequest
                 * @return DescribeOfflineMNPPackageOutcome
                 */
                DescribeOfflineMNPPackageOutcome DescribeOfflineMNPPackage(const Model::DescribeOfflineMNPPackageRequest &request);
                void DescribeOfflineMNPPackageAsync(const Model::DescribeOfflineMNPPackageRequest& request, const DescribeOfflineMNPPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOfflineMNPPackageOutcomeCallable DescribeOfflineMNPPackageCallable(const Model::DescribeOfflineMNPPackageRequest& request);

                /**
                 *This API is used to query the release version history
                 * @param req DescribeOnlineVersionRequest
                 * @return DescribeOnlineVersionOutcome
                 */
                DescribeOnlineVersionOutcome DescribeOnlineVersion(const Model::DescribeOnlineVersionRequest &request);
                void DescribeOnlineVersionAsync(const Model::DescribeOnlineVersionRequest& request, const DescribeOnlineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOnlineVersionOutcomeCallable DescribeOnlineVersionCallable(const Model::DescribeOnlineVersionRequest& request);

                /**
                 *This API is used to query role permission information
                 * @param req DescribeRoleDetailRequest
                 * @return DescribeRoleDetailOutcome
                 */
                DescribeRoleDetailOutcome DescribeRoleDetail(const Model::DescribeRoleDetailRequest &request);
                void DescribeRoleDetailAsync(const Model::DescribeRoleDetailRequest& request, const DescribeRoleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoleDetailOutcomeCallable DescribeRoleDetailCallable(const Model::DescribeRoleDetailRequest& request);

                /**
                 *This API is used to query the list of roles. 
                 * @param req DescribeRoleListRequest
                 * @return DescribeRoleListOutcome
                 */
                DescribeRoleListOutcome DescribeRoleList(const Model::DescribeRoleListRequest &request);
                void DescribeRoleListAsync(const Model::DescribeRoleListRequest& request, const DescribeRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoleListOutcomeCallable DescribeRoleListCallable(const Model::DescribeRoleListRequest& request);

                /**
                 *This API is used to query sensitive API approval list
                 * @param req DescribeSensitiveAPIAuditListRequest
                 * @return DescribeSensitiveAPIAuditListOutcome
                 */
                DescribeSensitiveAPIAuditListOutcome DescribeSensitiveAPIAuditList(const Model::DescribeSensitiveAPIAuditListRequest &request);
                void DescribeSensitiveAPIAuditListAsync(const Model::DescribeSensitiveAPIAuditListRequest& request, const DescribeSensitiveAPIAuditListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSensitiveAPIAuditListOutcomeCallable DescribeSensitiveAPIAuditListCallable(const Model::DescribeSensitiveAPIAuditListRequest& request);

                /**
                 *This API is used to query all sensitive APIs list
                 * @param req DescribeSensitiveAPIListRequest
                 * @return DescribeSensitiveAPIListOutcome
                 */
                DescribeSensitiveAPIListOutcome DescribeSensitiveAPIList(const Model::DescribeSensitiveAPIListRequest &request);
                void DescribeSensitiveAPIListAsync(const Model::DescribeSensitiveAPIListRequest& request, const DescribeSensitiveAPIListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSensitiveAPIListOutcomeCallable DescribeSensitiveAPIListCallable(const Model::DescribeSensitiveAPIListRequest& request);

                /**
                 *This API is used to query sensitive API permission approval details
                 * @param req DescribeSensitiveApiApplyDetailRequest
                 * @return DescribeSensitiveApiApplyDetailOutcome
                 */
                DescribeSensitiveApiApplyDetailOutcome DescribeSensitiveApiApplyDetail(const Model::DescribeSensitiveApiApplyDetailRequest &request);
                void DescribeSensitiveApiApplyDetailAsync(const Model::DescribeSensitiveApiApplyDetailRequest& request, const DescribeSensitiveApiApplyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSensitiveApiApplyDetailOutcomeCallable DescribeSensitiveApiApplyDetailCallable(const Model::DescribeSensitiveApiApplyDetailRequest& request);

                /**
                 *This API is used to query the sensitive API permission list
                 * @param req DescribeSensitiveApiAuthListRequest
                 * @return DescribeSensitiveApiAuthListOutcome
                 */
                DescribeSensitiveApiAuthListOutcome DescribeSensitiveApiAuthList(const Model::DescribeSensitiveApiAuthListRequest &request);
                void DescribeSensitiveApiAuthListAsync(const Model::DescribeSensitiveApiAuthListRequest& request, const DescribeSensitiveApiAuthListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSensitiveApiAuthListOutcomeCallable DescribeSensitiveApiAuthListCallable(const Model::DescribeSensitiveApiAuthListRequest& request);

                /**
                 *This API is used to query application list information
                 * @param req DescribeSimpleApplicationInfoListRequest
                 * @return DescribeSimpleApplicationInfoListOutcome
                 */
                DescribeSimpleApplicationInfoListOutcome DescribeSimpleApplicationInfoList(const Model::DescribeSimpleApplicationInfoListRequest &request);
                void DescribeSimpleApplicationInfoListAsync(const Model::DescribeSimpleApplicationInfoListRequest& request, const DescribeSimpleApplicationInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSimpleApplicationInfoListOutcomeCallable DescribeSimpleApplicationInfoListCallable(const Model::DescribeSimpleApplicationInfoListRequest& request);

                /**
                 *This API is used to query the team information list
                 * @param req DescribeSimpleTeamListRequest
                 * @return DescribeSimpleTeamListOutcome
                 */
                DescribeSimpleTeamListOutcome DescribeSimpleTeamList(const Model::DescribeSimpleTeamListRequest &request);
                void DescribeSimpleTeamListAsync(const Model::DescribeSimpleTeamListRequest& request, const DescribeSimpleTeamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSimpleTeamListOutcomeCallable DescribeSimpleTeamListCallable(const Model::DescribeSimpleTeamListRequest& request);

                /**
                 *This API is used to query details of a team. 
                 * @param req DescribeTeamRequest
                 * @return DescribeTeamOutcome
                 */
                DescribeTeamOutcome DescribeTeam(const Model::DescribeTeamRequest &request);
                void DescribeTeamAsync(const Model::DescribeTeamRequest& request, const DescribeTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTeamOutcomeCallable DescribeTeamCallable(const Model::DescribeTeamRequest& request);

                /**
                 *This API is used to query a specified team’s domains that obtained ICP filing
                 * @param req DescribeTeamDomainListRequest
                 * @return DescribeTeamDomainListOutcome
                 */
                DescribeTeamDomainListOutcome DescribeTeamDomainList(const Model::DescribeTeamDomainListRequest &request);
                void DescribeTeamDomainListAsync(const Model::DescribeTeamDomainListRequest& request, const DescribeTeamDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTeamDomainListOutcomeCallable DescribeTeamDomainListCallable(const Model::DescribeTeamDomainListRequest& request);

                /**
                 *This API is used to query the list of teams. 
                 * @param req DescribeTeamListRequest
                 * @return DescribeTeamListOutcome
                 */
                DescribeTeamListOutcome DescribeTeamList(const Model::DescribeTeamListRequest &request);
                void DescribeTeamListAsync(const Model::DescribeTeamListRequest& request, const DescribeTeamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTeamListOutcomeCallable DescribeTeamListCallable(const Model::DescribeTeamListRequest& request);

                /**
                 *This API is used to query team member list
                 * @param req DescribeTeamMemberListRequest
                 * @return DescribeTeamMemberListOutcome
                 */
                DescribeTeamMemberListOutcome DescribeTeamMemberList(const Model::DescribeTeamMemberListRequest &request);
                void DescribeTeamMemberListAsync(const Model::DescribeTeamMemberListRequest& request, const DescribeTeamMemberListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTeamMemberListOutcomeCallable DescribeTeamMemberListCallable(const Model::DescribeTeamMemberListRequest& request);

                /**
                 *This API is used to query the member list of a specified team
                 * @param req DescribeTeamMembersRequest
                 * @return DescribeTeamMembersOutcome
                 */
                DescribeTeamMembersOutcome DescribeTeamMembers(const Model::DescribeTeamMembersRequest &request);
                void DescribeTeamMembersAsync(const Model::DescribeTeamMembersRequest& request, const DescribeTeamMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTeamMembersOutcomeCallable DescribeTeamMembersCallable(const Model::DescribeTeamMembersRequest& request);

                /**
                 *This API is used to obtain a temporary key for file uploads
                 * @param req DescribeTempSecret4UploadFile2CosRequest
                 * @return DescribeTempSecret4UploadFile2CosOutcome
                 */
                DescribeTempSecret4UploadFile2CosOutcome DescribeTempSecret4UploadFile2Cos(const Model::DescribeTempSecret4UploadFile2CosRequest &request);
                void DescribeTempSecret4UploadFile2CosAsync(const Model::DescribeTempSecret4UploadFile2CosRequest& request, const DescribeTempSecret4UploadFile2CosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTempSecret4UploadFile2CosOutcomeCallable DescribeTempSecret4UploadFile2CosCallable(const Model::DescribeTempSecret4UploadFile2CosRequest& request);

                /**
                 *This API is used to query details of a user. 
                 * @param req DescribeUserRequest
                 * @return DescribeUserOutcome
                 */
                DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest &request);
                void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request);

                /**
                 *This API is used to query user details
                 * @param req DescribeUserDetailRequest
                 * @return DescribeUserDetailOutcome
                 */
                DescribeUserDetailOutcome DescribeUserDetail(const Model::DescribeUserDetailRequest &request);
                void DescribeUserDetailAsync(const Model::DescribeUserDetailRequest& request, const DescribeUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserDetailOutcomeCallable DescribeUserDetailCallable(const Model::DescribeUserDetailRequest& request);

                /**
                 *This API is used to query the user list
                 * @param req DescribeUserListRequest
                 * @return DescribeUserListOutcome
                 */
                DescribeUserListOutcome DescribeUserList(const Model::DescribeUserListRequest &request);
                void DescribeUserListAsync(const Model::DescribeUserListRequest& request, const DescribeUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserListOutcomeCallable DescribeUserListCallable(const Model::DescribeUserListRequest& request);

                /**
                 *This API is used to set a sensitive API to Restricted.
                 * @param req DisableApplicationSensitiveAPIRequest
                 * @return DisableApplicationSensitiveAPIOutcome
                 */
                DisableApplicationSensitiveAPIOutcome DisableApplicationSensitiveAPI(const Model::DisableApplicationSensitiveAPIRequest &request);
                void DisableApplicationSensitiveAPIAsync(const Model::DisableApplicationSensitiveAPIRequest& request, const DisableApplicationSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableApplicationSensitiveAPIOutcomeCallable DisableApplicationSensitiveAPICallable(const Model::DisableApplicationSensitiveAPIRequest& request);

                /**
                 *This API is used to disable the company’s domain name that obtained the ICP filing
                 * @param req DisableTeamDomainRequest
                 * @return DisableTeamDomainOutcome
                 */
                DisableTeamDomainOutcome DisableTeamDomain(const Model::DisableTeamDomainRequest &request);
                void DisableTeamDomainAsync(const Model::DisableTeamDomainRequest& request, const DisableTeamDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableTeamDomainOutcomeCallable DisableTeamDomainCallable(const Model::DisableTeamDomainRequest& request);

                /**
                 *This API is used to set an application sensitive API to public.
                 * @param req EnableApplicationSensitiveAPIRequest
                 * @return EnableApplicationSensitiveAPIOutcome
                 */
                EnableApplicationSensitiveAPIOutcome EnableApplicationSensitiveAPI(const Model::EnableApplicationSensitiveAPIRequest &request);
                void EnableApplicationSensitiveAPIAsync(const Model::EnableApplicationSensitiveAPIRequest& request, const EnableApplicationSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableApplicationSensitiveAPIOutcomeCallable EnableApplicationSensitiveAPICallable(const Model::EnableApplicationSensitiveAPIRequest& request);

                /**
                 *This API is used to change application information
                 * @param req ModifyApplicationRequest
                 * @return ModifyApplicationOutcome
                 */
                ModifyApplicationOutcome ModifyApplication(const Model::ModifyApplicationRequest &request);
                void ModifyApplicationAsync(const Model::ModifyApplicationRequest& request, const ModifyApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationOutcomeCallable ModifyApplicationCallable(const Model::ModifyApplicationRequest& request);

                /**
                 *This API is used to modify the application package name
                 * @param req ModifyApplicationAppKeyRequest
                 * @return ModifyApplicationAppKeyOutcome
                 */
                ModifyApplicationAppKeyOutcome ModifyApplicationAppKey(const Model::ModifyApplicationAppKeyRequest &request);
                void ModifyApplicationAppKeyAsync(const Model::ModifyApplicationAppKeyRequest& request, const ModifyApplicationAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationAppKeyOutcomeCallable ModifyApplicationAppKeyCallable(const Model::ModifyApplicationAppKeyRequest& request);

                /**
                 *This API is used to change the app download address
                 * @param req ModifyApplicationAppUrlRequest
                 * @return ModifyApplicationAppUrlOutcome
                 */
                ModifyApplicationAppUrlOutcome ModifyApplicationAppUrl(const Model::ModifyApplicationAppUrlRequest &request);
                void ModifyApplicationAppUrlAsync(const Model::ModifyApplicationAppUrlRequest& request, const ModifyApplicationAppUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationAppUrlOutcomeCallable ModifyApplicationAppUrlCallable(const Model::ModifyApplicationAppUrlRequest& request);

                /**
                 *This API is used to edit the mini program domain information
                 * @param req ModifyDomainRequest
                 * @return ModifyDomainOutcome
                 */
                ModifyDomainOutcome ModifyDomain(const Model::ModifyDomainRequest &request);
                void ModifyDomainAsync(const Model::ModifyDomainRequest& request, const ModifyDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainOutcomeCallable ModifyDomainCallable(const Model::ModifyDomainRequest& request);

                /**
                 *This API is used to modify domain allowlist or blocklist
                 * @param req ModifyGlobalDomainRequest
                 * @return ModifyGlobalDomainOutcome
                 */
                ModifyGlobalDomainOutcome ModifyGlobalDomain(const Model::ModifyGlobalDomainRequest &request);
                void ModifyGlobalDomainAsync(const Model::ModifyGlobalDomainRequest& request, const ModifyGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGlobalDomainOutcomeCallable ModifyGlobalDomainCallable(const Model::ModifyGlobalDomainRequest& request);

                /**
                 *This API is used to modify mini program information
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
                 *This API is used to remove the mini program
                 * @param req ModifyMNPStatusOfflineRequest
                 * @return ModifyMNPStatusOfflineOutcome
                 */
                ModifyMNPStatusOfflineOutcome ModifyMNPStatusOffline(const Model::ModifyMNPStatusOfflineRequest &request);
                void ModifyMNPStatusOfflineAsync(const Model::ModifyMNPStatusOfflineRequest& request, const ModifyMNPStatusOfflineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMNPStatusOfflineOutcomeCallable ModifyMNPStatusOfflineCallable(const Model::ModifyMNPStatusOfflineRequest& request);

                /**
                 *This API is used to configure the mini program preview version
                 * @param req ModifyMNPVersionPreviewRequest
                 * @return ModifyMNPVersionPreviewOutcome
                 */
                ModifyMNPVersionPreviewOutcome ModifyMNPVersionPreview(const Model::ModifyMNPVersionPreviewRequest &request);
                void ModifyMNPVersionPreviewAsync(const Model::ModifyMNPVersionPreviewRequest& request, const ModifyMNPVersionPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMNPVersionPreviewOutcomeCallable ModifyMNPVersionPreviewCallable(const Model::ModifyMNPVersionPreviewRequest& request);

                /**
                 *This API is used to rollback a mini program release version
                 * @param req ModifyOnlineVersionRequest
                 * @return ModifyOnlineVersionOutcome
                 */
                ModifyOnlineVersionOutcome ModifyOnlineVersion(const Model::ModifyOnlineVersionRequest &request);
                void ModifyOnlineVersionAsync(const Model::ModifyOnlineVersionRequest& request, const ModifyOnlineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOnlineVersionOutcomeCallable ModifyOnlineVersionCallable(const Model::ModifyOnlineVersionRequest& request);

                /**
                 *This API is used to approve or reject the release of the mini program version
                 * @param req ModifyPlatformAuditStatusRequest
                 * @return ModifyPlatformAuditStatusOutcome
                 */
                ModifyPlatformAuditStatusOutcome ModifyPlatformAuditStatus(const Model::ModifyPlatformAuditStatusRequest &request);
                void ModifyPlatformAuditStatusAsync(const Model::ModifyPlatformAuditStatusRequest& request, const ModifyPlatformAuditStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPlatformAuditStatusOutcomeCallable ModifyPlatformAuditStatusCallable(const Model::ModifyPlatformAuditStatusRequest& request);

                /**
                 *This API is used to approve or reject the sensitive API permission application
                 * @param req ModifySensitiveAPIAuditStatusRequest
                 * @return ModifySensitiveAPIAuditStatusOutcome
                 */
                ModifySensitiveAPIAuditStatusOutcome ModifySensitiveAPIAuditStatus(const Model::ModifySensitiveAPIAuditStatusRequest &request);
                void ModifySensitiveAPIAuditStatusAsync(const Model::ModifySensitiveAPIAuditStatusRequest& request, const ModifySensitiveAPIAuditStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySensitiveAPIAuditStatusOutcomeCallable ModifySensitiveAPIAuditStatusCallable(const Model::ModifySensitiveAPIAuditStatusRequest& request);

                /**
                 *This API is used to change team information
                 * @param req ModifyTeamRequest
                 * @return ModifyTeamOutcome
                 */
                ModifyTeamOutcome ModifyTeam(const Model::ModifyTeamRequest &request);
                void ModifyTeamAsync(const Model::ModifyTeamRequest& request, const ModifyTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTeamOutcomeCallable ModifyTeamCallable(const Model::ModifyTeamRequest& request);

                /**
                 *This API is used to modify team member information.
                 * @param req ModifyTeamMemberRequest
                 * @return ModifyTeamMemberOutcome
                 */
                ModifyTeamMemberOutcome ModifyTeamMember(const Model::ModifyTeamMemberRequest &request);
                void ModifyTeamMemberAsync(const Model::ModifyTeamMemberRequest& request, const ModifyTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTeamMemberOutcomeCallable ModifyTeamMemberCallable(const Model::ModifyTeamMemberRequest& request);

                /**
                 *This API is used to modify user information.
                 * @param req ModifyUserRequest
                 * @return ModifyUserOutcome
                 */
                ModifyUserOutcome ModifyUser(const Model::ModifyUserRequest &request);
                void ModifyUserAsync(const Model::ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserOutcomeCallable ModifyUserCallable(const Model::ModifyUserRequest& request);

                /**
                 *This API is used to reset user password
                 * @param req ModifyUserPasswordRequest
                 * @return ModifyUserPasswordOutcome
                 */
                ModifyUserPasswordOutcome ModifyUserPassword(const Model::ModifyUserPasswordRequest &request);
                void ModifyUserPasswordAsync(const Model::ModifyUserPasswordRequest& request, const ModifyUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserPasswordOutcomeCallable ModifyUserPasswordCallable(const Model::ModifyUserPasswordRequest& request);

                /**
                 *This API is used to approve or reject the release of a mini program version.
                 * @param req ProcessMNPApprovalRequest
                 * @return ProcessMNPApprovalOutcome
                 */
                ProcessMNPApprovalOutcome ProcessMNPApproval(const Model::ProcessMNPApprovalRequest &request);
                void ProcessMNPApprovalAsync(const Model::ProcessMNPApprovalRequest& request, const ProcessMNPApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMNPApprovalOutcomeCallable ProcessMNPApprovalCallable(const Model::ProcessMNPApprovalRequest& request);

                /**
                 *This API is used to approve or reject the sensitive API permission application. 
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

#endif // !TENCENTCLOUD_TCMPP_V20240801_TCMPPCLIENT_H_
