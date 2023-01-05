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

#ifndef TENCENTCLOUD_CAM_V20190116_CAMCLIENT_H_
#define TENCENTCLOUD_CAM_V20190116_CAMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cam/v20190116/model/AddUserRequest.h>
#include <tencentcloud/cam/v20190116/model/AddUserResponse.h>
#include <tencentcloud/cam/v20190116/model/AddUserToGroupRequest.h>
#include <tencentcloud/cam/v20190116/model/AddUserToGroupResponse.h>
#include <tencentcloud/cam/v20190116/model/AttachGroupPolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/AttachGroupPolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/AttachRolePolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/AttachRolePolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/AttachUserPolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/AttachUserPolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/ConsumeCustomMFATokenRequest.h>
#include <tencentcloud/cam/v20190116/model/ConsumeCustomMFATokenResponse.h>
#include <tencentcloud/cam/v20190116/model/CreateAccessKeyRequest.h>
#include <tencentcloud/cam/v20190116/model/CreateAccessKeyResponse.h>
#include <tencentcloud/cam/v20190116/model/CreateGroupRequest.h>
#include <tencentcloud/cam/v20190116/model/CreateGroupResponse.h>
#include <tencentcloud/cam/v20190116/model/CreateOIDCConfigRequest.h>
#include <tencentcloud/cam/v20190116/model/CreateOIDCConfigResponse.h>
#include <tencentcloud/cam/v20190116/model/CreatePolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/CreatePolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/CreatePolicyVersionRequest.h>
#include <tencentcloud/cam/v20190116/model/CreatePolicyVersionResponse.h>
#include <tencentcloud/cam/v20190116/model/CreateRoleRequest.h>
#include <tencentcloud/cam/v20190116/model/CreateRoleResponse.h>
#include <tencentcloud/cam/v20190116/model/CreateSAMLProviderRequest.h>
#include <tencentcloud/cam/v20190116/model/CreateSAMLProviderResponse.h>
#include <tencentcloud/cam/v20190116/model/CreateServiceLinkedRoleRequest.h>
#include <tencentcloud/cam/v20190116/model/CreateServiceLinkedRoleResponse.h>
#include <tencentcloud/cam/v20190116/model/CreateUserOIDCConfigRequest.h>
#include <tencentcloud/cam/v20190116/model/CreateUserOIDCConfigResponse.h>
#include <tencentcloud/cam/v20190116/model/CreateUserSAMLConfigRequest.h>
#include <tencentcloud/cam/v20190116/model/CreateUserSAMLConfigResponse.h>
#include <tencentcloud/cam/v20190116/model/DeleteAccessKeyRequest.h>
#include <tencentcloud/cam/v20190116/model/DeleteAccessKeyResponse.h>
#include <tencentcloud/cam/v20190116/model/DeleteGroupRequest.h>
#include <tencentcloud/cam/v20190116/model/DeleteGroupResponse.h>
#include <tencentcloud/cam/v20190116/model/DeleteOIDCConfigRequest.h>
#include <tencentcloud/cam/v20190116/model/DeleteOIDCConfigResponse.h>
#include <tencentcloud/cam/v20190116/model/DeletePolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/DeletePolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/DeletePolicyVersionRequest.h>
#include <tencentcloud/cam/v20190116/model/DeletePolicyVersionResponse.h>
#include <tencentcloud/cam/v20190116/model/DeleteRoleRequest.h>
#include <tencentcloud/cam/v20190116/model/DeleteRoleResponse.h>
#include <tencentcloud/cam/v20190116/model/DeleteRolePermissionsBoundaryRequest.h>
#include <tencentcloud/cam/v20190116/model/DeleteRolePermissionsBoundaryResponse.h>
#include <tencentcloud/cam/v20190116/model/DeleteSAMLProviderRequest.h>
#include <tencentcloud/cam/v20190116/model/DeleteSAMLProviderResponse.h>
#include <tencentcloud/cam/v20190116/model/DeleteServiceLinkedRoleRequest.h>
#include <tencentcloud/cam/v20190116/model/DeleteServiceLinkedRoleResponse.h>
#include <tencentcloud/cam/v20190116/model/DeleteUserRequest.h>
#include <tencentcloud/cam/v20190116/model/DeleteUserResponse.h>
#include <tencentcloud/cam/v20190116/model/DeleteUserPermissionsBoundaryRequest.h>
#include <tencentcloud/cam/v20190116/model/DeleteUserPermissionsBoundaryResponse.h>
#include <tencentcloud/cam/v20190116/model/DescribeOIDCConfigRequest.h>
#include <tencentcloud/cam/v20190116/model/DescribeOIDCConfigResponse.h>
#include <tencentcloud/cam/v20190116/model/DescribeRoleListRequest.h>
#include <tencentcloud/cam/v20190116/model/DescribeRoleListResponse.h>
#include <tencentcloud/cam/v20190116/model/DescribeSafeAuthFlagCollRequest.h>
#include <tencentcloud/cam/v20190116/model/DescribeSafeAuthFlagCollResponse.h>
#include <tencentcloud/cam/v20190116/model/DescribeSafeAuthFlagIntlRequest.h>
#include <tencentcloud/cam/v20190116/model/DescribeSafeAuthFlagIntlResponse.h>
#include <tencentcloud/cam/v20190116/model/DescribeSubAccountsRequest.h>
#include <tencentcloud/cam/v20190116/model/DescribeSubAccountsResponse.h>
#include <tencentcloud/cam/v20190116/model/DescribeUserOIDCConfigRequest.h>
#include <tencentcloud/cam/v20190116/model/DescribeUserOIDCConfigResponse.h>
#include <tencentcloud/cam/v20190116/model/DescribeUserSAMLConfigRequest.h>
#include <tencentcloud/cam/v20190116/model/DescribeUserSAMLConfigResponse.h>
#include <tencentcloud/cam/v20190116/model/DetachGroupPolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/DetachGroupPolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/DetachRolePolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/DetachRolePolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/DetachUserPolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/DetachUserPolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/DisableUserSSORequest.h>
#include <tencentcloud/cam/v20190116/model/DisableUserSSOResponse.h>
#include <tencentcloud/cam/v20190116/model/GetAccountSummaryRequest.h>
#include <tencentcloud/cam/v20190116/model/GetAccountSummaryResponse.h>
#include <tencentcloud/cam/v20190116/model/GetCustomMFATokenInfoRequest.h>
#include <tencentcloud/cam/v20190116/model/GetCustomMFATokenInfoResponse.h>
#include <tencentcloud/cam/v20190116/model/GetGroupRequest.h>
#include <tencentcloud/cam/v20190116/model/GetGroupResponse.h>
#include <tencentcloud/cam/v20190116/model/GetPolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/GetPolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/GetPolicyVersionRequest.h>
#include <tencentcloud/cam/v20190116/model/GetPolicyVersionResponse.h>
#include <tencentcloud/cam/v20190116/model/GetRoleRequest.h>
#include <tencentcloud/cam/v20190116/model/GetRoleResponse.h>
#include <tencentcloud/cam/v20190116/model/GetSAMLProviderRequest.h>
#include <tencentcloud/cam/v20190116/model/GetSAMLProviderResponse.h>
#include <tencentcloud/cam/v20190116/model/GetSecurityLastUsedRequest.h>
#include <tencentcloud/cam/v20190116/model/GetSecurityLastUsedResponse.h>
#include <tencentcloud/cam/v20190116/model/GetServiceLinkedRoleDeletionStatusRequest.h>
#include <tencentcloud/cam/v20190116/model/GetServiceLinkedRoleDeletionStatusResponse.h>
#include <tencentcloud/cam/v20190116/model/GetUserRequest.h>
#include <tencentcloud/cam/v20190116/model/GetUserResponse.h>
#include <tencentcloud/cam/v20190116/model/GetUserAppIdRequest.h>
#include <tencentcloud/cam/v20190116/model/GetUserAppIdResponse.h>
#include <tencentcloud/cam/v20190116/model/ListAccessKeysRequest.h>
#include <tencentcloud/cam/v20190116/model/ListAccessKeysResponse.h>
#include <tencentcloud/cam/v20190116/model/ListAttachedGroupPoliciesRequest.h>
#include <tencentcloud/cam/v20190116/model/ListAttachedGroupPoliciesResponse.h>
#include <tencentcloud/cam/v20190116/model/ListAttachedRolePoliciesRequest.h>
#include <tencentcloud/cam/v20190116/model/ListAttachedRolePoliciesResponse.h>
#include <tencentcloud/cam/v20190116/model/ListAttachedUserAllPoliciesRequest.h>
#include <tencentcloud/cam/v20190116/model/ListAttachedUserAllPoliciesResponse.h>
#include <tencentcloud/cam/v20190116/model/ListAttachedUserPoliciesRequest.h>
#include <tencentcloud/cam/v20190116/model/ListAttachedUserPoliciesResponse.h>
#include <tencentcloud/cam/v20190116/model/ListCollaboratorsRequest.h>
#include <tencentcloud/cam/v20190116/model/ListCollaboratorsResponse.h>
#include <tencentcloud/cam/v20190116/model/ListEntitiesForPolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/ListEntitiesForPolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/ListGroupsRequest.h>
#include <tencentcloud/cam/v20190116/model/ListGroupsResponse.h>
#include <tencentcloud/cam/v20190116/model/ListGroupsForUserRequest.h>
#include <tencentcloud/cam/v20190116/model/ListGroupsForUserResponse.h>
#include <tencentcloud/cam/v20190116/model/ListPoliciesRequest.h>
#include <tencentcloud/cam/v20190116/model/ListPoliciesResponse.h>
#include <tencentcloud/cam/v20190116/model/ListPolicyVersionsRequest.h>
#include <tencentcloud/cam/v20190116/model/ListPolicyVersionsResponse.h>
#include <tencentcloud/cam/v20190116/model/ListSAMLProvidersRequest.h>
#include <tencentcloud/cam/v20190116/model/ListSAMLProvidersResponse.h>
#include <tencentcloud/cam/v20190116/model/ListUsersRequest.h>
#include <tencentcloud/cam/v20190116/model/ListUsersResponse.h>
#include <tencentcloud/cam/v20190116/model/ListUsersForGroupRequest.h>
#include <tencentcloud/cam/v20190116/model/ListUsersForGroupResponse.h>
#include <tencentcloud/cam/v20190116/model/PutRolePermissionsBoundaryRequest.h>
#include <tencentcloud/cam/v20190116/model/PutRolePermissionsBoundaryResponse.h>
#include <tencentcloud/cam/v20190116/model/PutUserPermissionsBoundaryRequest.h>
#include <tencentcloud/cam/v20190116/model/PutUserPermissionsBoundaryResponse.h>
#include <tencentcloud/cam/v20190116/model/RemoveUserFromGroupRequest.h>
#include <tencentcloud/cam/v20190116/model/RemoveUserFromGroupResponse.h>
#include <tencentcloud/cam/v20190116/model/SetDefaultPolicyVersionRequest.h>
#include <tencentcloud/cam/v20190116/model/SetDefaultPolicyVersionResponse.h>
#include <tencentcloud/cam/v20190116/model/SetMfaFlagRequest.h>
#include <tencentcloud/cam/v20190116/model/SetMfaFlagResponse.h>
#include <tencentcloud/cam/v20190116/model/TagRoleRequest.h>
#include <tencentcloud/cam/v20190116/model/TagRoleResponse.h>
#include <tencentcloud/cam/v20190116/model/UntagRoleRequest.h>
#include <tencentcloud/cam/v20190116/model/UntagRoleResponse.h>
#include <tencentcloud/cam/v20190116/model/UpdateAccessKeyRequest.h>
#include <tencentcloud/cam/v20190116/model/UpdateAccessKeyResponse.h>
#include <tencentcloud/cam/v20190116/model/UpdateAssumeRolePolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/UpdateAssumeRolePolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/UpdateGroupRequest.h>
#include <tencentcloud/cam/v20190116/model/UpdateGroupResponse.h>
#include <tencentcloud/cam/v20190116/model/UpdateOIDCConfigRequest.h>
#include <tencentcloud/cam/v20190116/model/UpdateOIDCConfigResponse.h>
#include <tencentcloud/cam/v20190116/model/UpdatePolicyRequest.h>
#include <tencentcloud/cam/v20190116/model/UpdatePolicyResponse.h>
#include <tencentcloud/cam/v20190116/model/UpdateRoleConsoleLoginRequest.h>
#include <tencentcloud/cam/v20190116/model/UpdateRoleConsoleLoginResponse.h>
#include <tencentcloud/cam/v20190116/model/UpdateRoleDescriptionRequest.h>
#include <tencentcloud/cam/v20190116/model/UpdateRoleDescriptionResponse.h>
#include <tencentcloud/cam/v20190116/model/UpdateSAMLProviderRequest.h>
#include <tencentcloud/cam/v20190116/model/UpdateSAMLProviderResponse.h>
#include <tencentcloud/cam/v20190116/model/UpdateUserRequest.h>
#include <tencentcloud/cam/v20190116/model/UpdateUserResponse.h>
#include <tencentcloud/cam/v20190116/model/UpdateUserOIDCConfigRequest.h>
#include <tencentcloud/cam/v20190116/model/UpdateUserOIDCConfigResponse.h>
#include <tencentcloud/cam/v20190116/model/UpdateUserSAMLConfigRequest.h>
#include <tencentcloud/cam/v20190116/model/UpdateUserSAMLConfigResponse.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            class CamClient : public AbstractClient
            {
            public:
                CamClient(const Credential &credential, const std::string &region);
                CamClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddUserResponse> AddUserOutcome;
                typedef std::future<AddUserOutcome> AddUserOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::AddUserRequest&, AddUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUserAsyncHandler;
                typedef Outcome<Core::Error, Model::AddUserToGroupResponse> AddUserToGroupOutcome;
                typedef std::future<AddUserToGroupOutcome> AddUserToGroupOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::AddUserToGroupRequest&, AddUserToGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUserToGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachGroupPolicyResponse> AttachGroupPolicyOutcome;
                typedef std::future<AttachGroupPolicyOutcome> AttachGroupPolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::AttachGroupPolicyRequest&, AttachGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachGroupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachRolePolicyResponse> AttachRolePolicyOutcome;
                typedef std::future<AttachRolePolicyOutcome> AttachRolePolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::AttachRolePolicyRequest&, AttachRolePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachRolePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachUserPolicyResponse> AttachUserPolicyOutcome;
                typedef std::future<AttachUserPolicyOutcome> AttachUserPolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::AttachUserPolicyRequest&, AttachUserPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachUserPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ConsumeCustomMFATokenResponse> ConsumeCustomMFATokenOutcome;
                typedef std::future<ConsumeCustomMFATokenOutcome> ConsumeCustomMFATokenOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ConsumeCustomMFATokenRequest&, ConsumeCustomMFATokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConsumeCustomMFATokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccessKeyResponse> CreateAccessKeyOutcome;
                typedef std::future<CreateAccessKeyOutcome> CreateAccessKeyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::CreateAccessKeyRequest&, CreateAccessKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGroupResponse> CreateGroupOutcome;
                typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::CreateGroupRequest&, CreateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOIDCConfigResponse> CreateOIDCConfigOutcome;
                typedef std::future<CreateOIDCConfigOutcome> CreateOIDCConfigOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::CreateOIDCConfigRequest&, CreateOIDCConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOIDCConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePolicyResponse> CreatePolicyOutcome;
                typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::CreatePolicyRequest&, CreatePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePolicyVersionResponse> CreatePolicyVersionOutcome;
                typedef std::future<CreatePolicyVersionOutcome> CreatePolicyVersionOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::CreatePolicyVersionRequest&, CreatePolicyVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoleResponse> CreateRoleOutcome;
                typedef std::future<CreateRoleOutcome> CreateRoleOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::CreateRoleRequest&, CreateRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSAMLProviderResponse> CreateSAMLProviderOutcome;
                typedef std::future<CreateSAMLProviderOutcome> CreateSAMLProviderOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::CreateSAMLProviderRequest&, CreateSAMLProviderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSAMLProviderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServiceLinkedRoleResponse> CreateServiceLinkedRoleOutcome;
                typedef std::future<CreateServiceLinkedRoleOutcome> CreateServiceLinkedRoleOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::CreateServiceLinkedRoleRequest&, CreateServiceLinkedRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceLinkedRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserOIDCConfigResponse> CreateUserOIDCConfigOutcome;
                typedef std::future<CreateUserOIDCConfigOutcome> CreateUserOIDCConfigOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::CreateUserOIDCConfigRequest&, CreateUserOIDCConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserOIDCConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserSAMLConfigResponse> CreateUserSAMLConfigOutcome;
                typedef std::future<CreateUserSAMLConfigOutcome> CreateUserSAMLConfigOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::CreateUserSAMLConfigRequest&, CreateUserSAMLConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserSAMLConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccessKeyResponse> DeleteAccessKeyOutcome;
                typedef std::future<DeleteAccessKeyOutcome> DeleteAccessKeyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeleteAccessKeyRequest&, DeleteAccessKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGroupResponse> DeleteGroupOutcome;
                typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeleteGroupRequest&, DeleteGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOIDCConfigResponse> DeleteOIDCConfigOutcome;
                typedef std::future<DeleteOIDCConfigOutcome> DeleteOIDCConfigOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeleteOIDCConfigRequest&, DeleteOIDCConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOIDCConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePolicyResponse> DeletePolicyOutcome;
                typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeletePolicyRequest&, DeletePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePolicyVersionResponse> DeletePolicyVersionOutcome;
                typedef std::future<DeletePolicyVersionOutcome> DeletePolicyVersionOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeletePolicyVersionRequest&, DeletePolicyVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoleResponse> DeleteRoleOutcome;
                typedef std::future<DeleteRoleOutcome> DeleteRoleOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeleteRoleRequest&, DeleteRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRolePermissionsBoundaryResponse> DeleteRolePermissionsBoundaryOutcome;
                typedef std::future<DeleteRolePermissionsBoundaryOutcome> DeleteRolePermissionsBoundaryOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeleteRolePermissionsBoundaryRequest&, DeleteRolePermissionsBoundaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRolePermissionsBoundaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSAMLProviderResponse> DeleteSAMLProviderOutcome;
                typedef std::future<DeleteSAMLProviderOutcome> DeleteSAMLProviderOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeleteSAMLProviderRequest&, DeleteSAMLProviderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSAMLProviderAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteServiceLinkedRoleResponse> DeleteServiceLinkedRoleOutcome;
                typedef std::future<DeleteServiceLinkedRoleOutcome> DeleteServiceLinkedRoleOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeleteServiceLinkedRoleRequest&, DeleteServiceLinkedRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceLinkedRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserPermissionsBoundaryResponse> DeleteUserPermissionsBoundaryOutcome;
                typedef std::future<DeleteUserPermissionsBoundaryOutcome> DeleteUserPermissionsBoundaryOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DeleteUserPermissionsBoundaryRequest&, DeleteUserPermissionsBoundaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserPermissionsBoundaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOIDCConfigResponse> DescribeOIDCConfigOutcome;
                typedef std::future<DescribeOIDCConfigOutcome> DescribeOIDCConfigOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DescribeOIDCConfigRequest&, DescribeOIDCConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOIDCConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoleListResponse> DescribeRoleListOutcome;
                typedef std::future<DescribeRoleListOutcome> DescribeRoleListOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DescribeRoleListRequest&, DescribeRoleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSafeAuthFlagCollResponse> DescribeSafeAuthFlagCollOutcome;
                typedef std::future<DescribeSafeAuthFlagCollOutcome> DescribeSafeAuthFlagCollOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DescribeSafeAuthFlagCollRequest&, DescribeSafeAuthFlagCollOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSafeAuthFlagCollAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSafeAuthFlagIntlResponse> DescribeSafeAuthFlagIntlOutcome;
                typedef std::future<DescribeSafeAuthFlagIntlOutcome> DescribeSafeAuthFlagIntlOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DescribeSafeAuthFlagIntlRequest&, DescribeSafeAuthFlagIntlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSafeAuthFlagIntlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubAccountsResponse> DescribeSubAccountsOutcome;
                typedef std::future<DescribeSubAccountsOutcome> DescribeSubAccountsOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DescribeSubAccountsRequest&, DescribeSubAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserOIDCConfigResponse> DescribeUserOIDCConfigOutcome;
                typedef std::future<DescribeUserOIDCConfigOutcome> DescribeUserOIDCConfigOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DescribeUserOIDCConfigRequest&, DescribeUserOIDCConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserOIDCConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserSAMLConfigResponse> DescribeUserSAMLConfigOutcome;
                typedef std::future<DescribeUserSAMLConfigOutcome> DescribeUserSAMLConfigOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DescribeUserSAMLConfigRequest&, DescribeUserSAMLConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserSAMLConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachGroupPolicyResponse> DetachGroupPolicyOutcome;
                typedef std::future<DetachGroupPolicyOutcome> DetachGroupPolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DetachGroupPolicyRequest&, DetachGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachGroupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachRolePolicyResponse> DetachRolePolicyOutcome;
                typedef std::future<DetachRolePolicyOutcome> DetachRolePolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DetachRolePolicyRequest&, DetachRolePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachRolePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachUserPolicyResponse> DetachUserPolicyOutcome;
                typedef std::future<DetachUserPolicyOutcome> DetachUserPolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DetachUserPolicyRequest&, DetachUserPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachUserPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableUserSSOResponse> DisableUserSSOOutcome;
                typedef std::future<DisableUserSSOOutcome> DisableUserSSOOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::DisableUserSSORequest&, DisableUserSSOOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableUserSSOAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAccountSummaryResponse> GetAccountSummaryOutcome;
                typedef std::future<GetAccountSummaryOutcome> GetAccountSummaryOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetAccountSummaryRequest&, GetAccountSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCustomMFATokenInfoResponse> GetCustomMFATokenInfoOutcome;
                typedef std::future<GetCustomMFATokenInfoOutcome> GetCustomMFATokenInfoOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetCustomMFATokenInfoRequest&, GetCustomMFATokenInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCustomMFATokenInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::GetGroupResponse> GetGroupOutcome;
                typedef std::future<GetGroupOutcome> GetGroupOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetGroupRequest&, GetGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPolicyResponse> GetPolicyOutcome;
                typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetPolicyRequest&, GetPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPolicyVersionResponse> GetPolicyVersionOutcome;
                typedef std::future<GetPolicyVersionOutcome> GetPolicyVersionOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetPolicyVersionRequest&, GetPolicyVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPolicyVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRoleResponse> GetRoleOutcome;
                typedef std::future<GetRoleOutcome> GetRoleOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetRoleRequest&, GetRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSAMLProviderResponse> GetSAMLProviderOutcome;
                typedef std::future<GetSAMLProviderOutcome> GetSAMLProviderOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetSAMLProviderRequest&, GetSAMLProviderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSAMLProviderAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSecurityLastUsedResponse> GetSecurityLastUsedOutcome;
                typedef std::future<GetSecurityLastUsedOutcome> GetSecurityLastUsedOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetSecurityLastUsedRequest&, GetSecurityLastUsedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSecurityLastUsedAsyncHandler;
                typedef Outcome<Core::Error, Model::GetServiceLinkedRoleDeletionStatusResponse> GetServiceLinkedRoleDeletionStatusOutcome;
                typedef std::future<GetServiceLinkedRoleDeletionStatusOutcome> GetServiceLinkedRoleDeletionStatusOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetServiceLinkedRoleDeletionStatusRequest&, GetServiceLinkedRoleDeletionStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceLinkedRoleDeletionStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetUserResponse> GetUserOutcome;
                typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetUserRequest&, GetUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
                typedef Outcome<Core::Error, Model::GetUserAppIdResponse> GetUserAppIdOutcome;
                typedef std::future<GetUserAppIdOutcome> GetUserAppIdOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::GetUserAppIdRequest&, GetUserAppIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAppIdAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAccessKeysResponse> ListAccessKeysOutcome;
                typedef std::future<ListAccessKeysOutcome> ListAccessKeysOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListAccessKeysRequest&, ListAccessKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAccessKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAttachedGroupPoliciesResponse> ListAttachedGroupPoliciesOutcome;
                typedef std::future<ListAttachedGroupPoliciesOutcome> ListAttachedGroupPoliciesOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListAttachedGroupPoliciesRequest&, ListAttachedGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAttachedGroupPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAttachedRolePoliciesResponse> ListAttachedRolePoliciesOutcome;
                typedef std::future<ListAttachedRolePoliciesOutcome> ListAttachedRolePoliciesOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListAttachedRolePoliciesRequest&, ListAttachedRolePoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAttachedRolePoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAttachedUserAllPoliciesResponse> ListAttachedUserAllPoliciesOutcome;
                typedef std::future<ListAttachedUserAllPoliciesOutcome> ListAttachedUserAllPoliciesOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListAttachedUserAllPoliciesRequest&, ListAttachedUserAllPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAttachedUserAllPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAttachedUserPoliciesResponse> ListAttachedUserPoliciesOutcome;
                typedef std::future<ListAttachedUserPoliciesOutcome> ListAttachedUserPoliciesOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListAttachedUserPoliciesRequest&, ListAttachedUserPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAttachedUserPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListCollaboratorsResponse> ListCollaboratorsOutcome;
                typedef std::future<ListCollaboratorsOutcome> ListCollaboratorsOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListCollaboratorsRequest&, ListCollaboratorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListCollaboratorsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListEntitiesForPolicyResponse> ListEntitiesForPolicyOutcome;
                typedef std::future<ListEntitiesForPolicyOutcome> ListEntitiesForPolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListEntitiesForPolicyRequest&, ListEntitiesForPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListEntitiesForPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ListGroupsResponse> ListGroupsOutcome;
                typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListGroupsRequest&, ListGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListGroupsForUserResponse> ListGroupsForUserOutcome;
                typedef std::future<ListGroupsForUserOutcome> ListGroupsForUserOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListGroupsForUserRequest&, ListGroupsForUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupsForUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ListPoliciesResponse> ListPoliciesOutcome;
                typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListPoliciesRequest&, ListPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListPolicyVersionsResponse> ListPolicyVersionsOutcome;
                typedef std::future<ListPolicyVersionsOutcome> ListPolicyVersionsOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListPolicyVersionsRequest&, ListPolicyVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListPolicyVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSAMLProvidersResponse> ListSAMLProvidersOutcome;
                typedef std::future<ListSAMLProvidersOutcome> ListSAMLProvidersOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListSAMLProvidersRequest&, ListSAMLProvidersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSAMLProvidersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUsersResponse> ListUsersOutcome;
                typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListUsersRequest&, ListUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUsersForGroupResponse> ListUsersForGroupOutcome;
                typedef std::future<ListUsersForGroupOutcome> ListUsersForGroupOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::ListUsersForGroupRequest&, ListUsersForGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersForGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::PutRolePermissionsBoundaryResponse> PutRolePermissionsBoundaryOutcome;
                typedef std::future<PutRolePermissionsBoundaryOutcome> PutRolePermissionsBoundaryOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::PutRolePermissionsBoundaryRequest&, PutRolePermissionsBoundaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutRolePermissionsBoundaryAsyncHandler;
                typedef Outcome<Core::Error, Model::PutUserPermissionsBoundaryResponse> PutUserPermissionsBoundaryOutcome;
                typedef std::future<PutUserPermissionsBoundaryOutcome> PutUserPermissionsBoundaryOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::PutUserPermissionsBoundaryRequest&, PutUserPermissionsBoundaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutUserPermissionsBoundaryAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveUserFromGroupResponse> RemoveUserFromGroupOutcome;
                typedef std::future<RemoveUserFromGroupOutcome> RemoveUserFromGroupOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::RemoveUserFromGroupRequest&, RemoveUserFromGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserFromGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::SetDefaultPolicyVersionResponse> SetDefaultPolicyVersionOutcome;
                typedef std::future<SetDefaultPolicyVersionOutcome> SetDefaultPolicyVersionOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::SetDefaultPolicyVersionRequest&, SetDefaultPolicyVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetDefaultPolicyVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::SetMfaFlagResponse> SetMfaFlagOutcome;
                typedef std::future<SetMfaFlagOutcome> SetMfaFlagOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::SetMfaFlagRequest&, SetMfaFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetMfaFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::TagRoleResponse> TagRoleOutcome;
                typedef std::future<TagRoleOutcome> TagRoleOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::TagRoleRequest&, TagRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TagRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::UntagRoleResponse> UntagRoleOutcome;
                typedef std::future<UntagRoleOutcome> UntagRoleOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UntagRoleRequest&, UntagRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UntagRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAccessKeyResponse> UpdateAccessKeyOutcome;
                typedef std::future<UpdateAccessKeyOutcome> UpdateAccessKeyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UpdateAccessKeyRequest&, UpdateAccessKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAccessKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAssumeRolePolicyResponse> UpdateAssumeRolePolicyOutcome;
                typedef std::future<UpdateAssumeRolePolicyOutcome> UpdateAssumeRolePolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UpdateAssumeRolePolicyRequest&, UpdateAssumeRolePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAssumeRolePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGroupResponse> UpdateGroupOutcome;
                typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UpdateGroupRequest&, UpdateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOIDCConfigResponse> UpdateOIDCConfigOutcome;
                typedef std::future<UpdateOIDCConfigOutcome> UpdateOIDCConfigOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UpdateOIDCConfigRequest&, UpdateOIDCConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOIDCConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePolicyResponse> UpdatePolicyOutcome;
                typedef std::future<UpdatePolicyOutcome> UpdatePolicyOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UpdatePolicyRequest&, UpdatePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRoleConsoleLoginResponse> UpdateRoleConsoleLoginOutcome;
                typedef std::future<UpdateRoleConsoleLoginOutcome> UpdateRoleConsoleLoginOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UpdateRoleConsoleLoginRequest&, UpdateRoleConsoleLoginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRoleConsoleLoginAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRoleDescriptionResponse> UpdateRoleDescriptionOutcome;
                typedef std::future<UpdateRoleDescriptionOutcome> UpdateRoleDescriptionOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UpdateRoleDescriptionRequest&, UpdateRoleDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRoleDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSAMLProviderResponse> UpdateSAMLProviderOutcome;
                typedef std::future<UpdateSAMLProviderOutcome> UpdateSAMLProviderOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UpdateSAMLProviderRequest&, UpdateSAMLProviderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSAMLProviderAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateUserResponse> UpdateUserOutcome;
                typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UpdateUserRequest&, UpdateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateUserOIDCConfigResponse> UpdateUserOIDCConfigOutcome;
                typedef std::future<UpdateUserOIDCConfigOutcome> UpdateUserOIDCConfigOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UpdateUserOIDCConfigRequest&, UpdateUserOIDCConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserOIDCConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateUserSAMLConfigResponse> UpdateUserSAMLConfigOutcome;
                typedef std::future<UpdateUserSAMLConfigOutcome> UpdateUserSAMLConfigOutcomeCallable;
                typedef std::function<void(const CamClient*, const Model::UpdateUserSAMLConfigRequest&, UpdateUserSAMLConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserSAMLConfigAsyncHandler;



                /**
                 *This API is used to add sub-users.
                 * @param req AddUserRequest
                 * @return AddUserOutcome
                 */
                AddUserOutcome AddUser(const Model::AddUserRequest &request);
                void AddUserAsync(const Model::AddUserRequest& request, const AddUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUserOutcomeCallable AddUserCallable(const Model::AddUserRequest& request);

                /**
                 *This API is used to add users to a user group.
                 * @param req AddUserToGroupRequest
                 * @return AddUserToGroupOutcome
                 */
                AddUserToGroupOutcome AddUserToGroup(const Model::AddUserToGroupRequest &request);
                void AddUserToGroupAsync(const Model::AddUserToGroupRequest& request, const AddUserToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUserToGroupOutcomeCallable AddUserToGroupCallable(const Model::AddUserToGroupRequest& request);

                /**
                 *This API (AttachGroupPolicy) is used to associate a policy with a user group.
                 * @param req AttachGroupPolicyRequest
                 * @return AttachGroupPolicyOutcome
                 */
                AttachGroupPolicyOutcome AttachGroupPolicy(const Model::AttachGroupPolicyRequest &request);
                void AttachGroupPolicyAsync(const Model::AttachGroupPolicyRequest& request, const AttachGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachGroupPolicyOutcomeCallable AttachGroupPolicyCallable(const Model::AttachGroupPolicyRequest& request);

                /**
                 *This API (AttachRolePolicy) is used to associate a policy with a role.
                 * @param req AttachRolePolicyRequest
                 * @return AttachRolePolicyOutcome
                 */
                AttachRolePolicyOutcome AttachRolePolicy(const Model::AttachRolePolicyRequest &request);
                void AttachRolePolicyAsync(const Model::AttachRolePolicyRequest& request, const AttachRolePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachRolePolicyOutcomeCallable AttachRolePolicyCallable(const Model::AttachRolePolicyRequest& request);

                /**
                 *This API (AttachUserPolicy) is used to associates a policy with a user.
                 * @param req AttachUserPolicyRequest
                 * @return AttachUserPolicyOutcome
                 */
                AttachUserPolicyOutcome AttachUserPolicy(const Model::AttachUserPolicyRequest &request);
                void AttachUserPolicyAsync(const Model::AttachUserPolicyRequest& request, const AttachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachUserPolicyOutcomeCallable AttachUserPolicyCallable(const Model::AttachUserPolicyRequest& request);

                /**
                 *This API is used to verify a custom multi-factor Token.
                 * @param req ConsumeCustomMFATokenRequest
                 * @return ConsumeCustomMFATokenOutcome
                 */
                ConsumeCustomMFATokenOutcome ConsumeCustomMFAToken(const Model::ConsumeCustomMFATokenRequest &request);
                void ConsumeCustomMFATokenAsync(const Model::ConsumeCustomMFATokenRequest& request, const ConsumeCustomMFATokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConsumeCustomMFATokenOutcomeCallable ConsumeCustomMFATokenCallable(const Model::ConsumeCustomMFATokenRequest& request);

                /**
                 *This API is used to create an access key for a CAM user.
                 * @param req CreateAccessKeyRequest
                 * @return CreateAccessKeyOutcome
                 */
                CreateAccessKeyOutcome CreateAccessKey(const Model::CreateAccessKeyRequest &request);
                void CreateAccessKeyAsync(const Model::CreateAccessKeyRequest& request, const CreateAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccessKeyOutcomeCallable CreateAccessKeyCallable(const Model::CreateAccessKeyRequest& request);

                /**
                 *This API is used to create a user group.
                 * @param req CreateGroupRequest
                 * @return CreateGroupOutcome
                 */
                CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest &request);
                void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request);

                /**
                 *This API is used to create role OIDC configurations.
                 * @param req CreateOIDCConfigRequest
                 * @return CreateOIDCConfigOutcome
                 */
                CreateOIDCConfigOutcome CreateOIDCConfig(const Model::CreateOIDCConfigRequest &request);
                void CreateOIDCConfigAsync(const Model::CreateOIDCConfigRequest& request, const CreateOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOIDCConfigOutcomeCallable CreateOIDCConfigCallable(const Model::CreateOIDCConfigRequest& request);

                /**
                 *This API (CreatePolicy) is used to create a policy.
                 * @param req CreatePolicyRequest
                 * @return CreatePolicyOutcome
                 */
                CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest &request);
                void CreatePolicyAsync(const Model::CreatePolicyRequest& request, const CreatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePolicyOutcomeCallable CreatePolicyCallable(const Model::CreatePolicyRequest& request);

                /**
                 *This API is used to add a policy version. After creating a policy version, you can easily change the policy by changing the policy version.
                 * @param req CreatePolicyVersionRequest
                 * @return CreatePolicyVersionOutcome
                 */
                CreatePolicyVersionOutcome CreatePolicyVersion(const Model::CreatePolicyVersionRequest &request);
                void CreatePolicyVersionAsync(const Model::CreatePolicyVersionRequest& request, const CreatePolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePolicyVersionOutcomeCallable CreatePolicyVersionCallable(const Model::CreatePolicyVersionRequest& request);

                /**
                 *This API (CreateRole) is used to create a role.
                 * @param req CreateRoleRequest
                 * @return CreateRoleOutcome
                 */
                CreateRoleOutcome CreateRole(const Model::CreateRoleRequest &request);
                void CreateRoleAsync(const Model::CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoleOutcomeCallable CreateRoleCallable(const Model::CreateRoleRequest& request);

                /**
                 *This API is used to create a SAML identity provider.
                 * @param req CreateSAMLProviderRequest
                 * @return CreateSAMLProviderOutcome
                 */
                CreateSAMLProviderOutcome CreateSAMLProvider(const Model::CreateSAMLProviderRequest &request);
                void CreateSAMLProviderAsync(const Model::CreateSAMLProviderRequest& request, const CreateSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSAMLProviderOutcomeCallable CreateSAMLProviderCallable(const Model::CreateSAMLProviderRequest& request);

                /**
                 *This API is used to create a service-linked role.
                 * @param req CreateServiceLinkedRoleRequest
                 * @return CreateServiceLinkedRoleOutcome
                 */
                CreateServiceLinkedRoleOutcome CreateServiceLinkedRole(const Model::CreateServiceLinkedRoleRequest &request);
                void CreateServiceLinkedRoleAsync(const Model::CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceLinkedRoleOutcomeCallable CreateServiceLinkedRoleCallable(const Model::CreateServiceLinkedRoleRequest& request);

                /**
                 *This API is used to create a user OIDC configuration. Only one user OIDC IdP can be created, and the user SAML SSO IdP will be automatically disabled after it is created.
                 * @param req CreateUserOIDCConfigRequest
                 * @return CreateUserOIDCConfigOutcome
                 */
                CreateUserOIDCConfigOutcome CreateUserOIDCConfig(const Model::CreateUserOIDCConfigRequest &request);
                void CreateUserOIDCConfigAsync(const Model::CreateUserOIDCConfigRequest& request, const CreateUserOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOIDCConfigOutcomeCallable CreateUserOIDCConfigCallable(const Model::CreateUserOIDCConfigRequest& request);

                /**
                 *This API is used to create user SAML configurations.
                 * @param req CreateUserSAMLConfigRequest
                 * @return CreateUserSAMLConfigOutcome
                 */
                CreateUserSAMLConfigOutcome CreateUserSAMLConfig(const Model::CreateUserSAMLConfigRequest &request);
                void CreateUserSAMLConfigAsync(const Model::CreateUserSAMLConfigRequest& request, const CreateUserSAMLConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserSAMLConfigOutcomeCallable CreateUserSAMLConfigCallable(const Model::CreateUserSAMLConfigRequest& request);

                /**
                 *This API is used to delete an access key for a CAM user.
Calling this API is a high-risk operation because the key cannot be recovered once deleted and Tencent Cloud will deny all requests that use this key. Proceed with caution.
                 * @param req DeleteAccessKeyRequest
                 * @return DeleteAccessKeyOutcome
                 */
                DeleteAccessKeyOutcome DeleteAccessKey(const Model::DeleteAccessKeyRequest &request);
                void DeleteAccessKeyAsync(const Model::DeleteAccessKeyRequest& request, const DeleteAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccessKeyOutcomeCallable DeleteAccessKeyCallable(const Model::DeleteAccessKeyRequest& request);

                /**
                 *This API is used to delete a user group.
                 * @param req DeleteGroupRequest
                 * @return DeleteGroupOutcome
                 */
                DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest &request);
                void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request);

                /**
                 *This API is used to delete OIDC IdPs.
                 * @param req DeleteOIDCConfigRequest
                 * @return DeleteOIDCConfigOutcome
                 */
                DeleteOIDCConfigOutcome DeleteOIDCConfig(const Model::DeleteOIDCConfigRequest &request);
                void DeleteOIDCConfigAsync(const Model::DeleteOIDCConfigRequest& request, const DeleteOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOIDCConfigOutcomeCallable DeleteOIDCConfigCallable(const Model::DeleteOIDCConfigRequest& request);

                /**
                 *This API (DeletePolicy) is used to delete a policy.
                 * @param req DeletePolicyRequest
                 * @return DeletePolicyOutcome
                 */
                DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest &request);
                void DeletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request);

                /**
                 *This API is used to delete a policy version of a policy.
                 * @param req DeletePolicyVersionRequest
                 * @return DeletePolicyVersionOutcome
                 */
                DeletePolicyVersionOutcome DeletePolicyVersion(const Model::DeletePolicyVersionRequest &request);
                void DeletePolicyVersionAsync(const Model::DeletePolicyVersionRequest& request, const DeletePolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePolicyVersionOutcomeCallable DeletePolicyVersionCallable(const Model::DeletePolicyVersionRequest& request);

                /**
                 *This API (DeleteRole) is used to delete a specified role.
                 * @param req DeleteRoleRequest
                 * @return DeleteRoleOutcome
                 */
                DeleteRoleOutcome DeleteRole(const Model::DeleteRoleRequest &request);
                void DeleteRoleAsync(const Model::DeleteRoleRequest& request, const DeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoleOutcomeCallable DeleteRoleCallable(const Model::DeleteRoleRequest& request);

                /**
                 *This API is used to delete a role permission boundary.
                 * @param req DeleteRolePermissionsBoundaryRequest
                 * @return DeleteRolePermissionsBoundaryOutcome
                 */
                DeleteRolePermissionsBoundaryOutcome DeleteRolePermissionsBoundary(const Model::DeleteRolePermissionsBoundaryRequest &request);
                void DeleteRolePermissionsBoundaryAsync(const Model::DeleteRolePermissionsBoundaryRequest& request, const DeleteRolePermissionsBoundaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRolePermissionsBoundaryOutcomeCallable DeleteRolePermissionsBoundaryCallable(const Model::DeleteRolePermissionsBoundaryRequest& request);

                /**
                 *This API is used to delete a SAML identity provider.
                 * @param req DeleteSAMLProviderRequest
                 * @return DeleteSAMLProviderOutcome
                 */
                DeleteSAMLProviderOutcome DeleteSAMLProvider(const Model::DeleteSAMLProviderRequest &request);
                void DeleteSAMLProviderAsync(const Model::DeleteSAMLProviderRequest& request, const DeleteSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSAMLProviderOutcomeCallable DeleteSAMLProviderCallable(const Model::DeleteSAMLProviderRequest& request);

                /**
                 *This API is used to delete a service-linked role.
                 * @param req DeleteServiceLinkedRoleRequest
                 * @return DeleteServiceLinkedRoleOutcome
                 */
                DeleteServiceLinkedRoleOutcome DeleteServiceLinkedRole(const Model::DeleteServiceLinkedRoleRequest &request);
                void DeleteServiceLinkedRoleAsync(const Model::DeleteServiceLinkedRoleRequest& request, const DeleteServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceLinkedRoleOutcomeCallable DeleteServiceLinkedRoleCallable(const Model::DeleteServiceLinkedRoleRequest& request);

                /**
                 *This API is used to delete a sub-user.
                 * @param req DeleteUserRequest
                 * @return DeleteUserOutcome
                 */
                DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest &request);
                void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request);

                /**
                 *This API is used to delete a user permission boundary.
                 * @param req DeleteUserPermissionsBoundaryRequest
                 * @return DeleteUserPermissionsBoundaryOutcome
                 */
                DeleteUserPermissionsBoundaryOutcome DeleteUserPermissionsBoundary(const Model::DeleteUserPermissionsBoundaryRequest &request);
                void DeleteUserPermissionsBoundaryAsync(const Model::DeleteUserPermissionsBoundaryRequest& request, const DeleteUserPermissionsBoundaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserPermissionsBoundaryOutcomeCallable DeleteUserPermissionsBoundaryCallable(const Model::DeleteUserPermissionsBoundaryRequest& request);

                /**
                 *This API is used to query role OIDC configurations.
                 * @param req DescribeOIDCConfigRequest
                 * @return DescribeOIDCConfigOutcome
                 */
                DescribeOIDCConfigOutcome DescribeOIDCConfig(const Model::DescribeOIDCConfigRequest &request);
                void DescribeOIDCConfigAsync(const Model::DescribeOIDCConfigRequest& request, const DescribeOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOIDCConfigOutcomeCallable DescribeOIDCConfigCallable(const Model::DescribeOIDCConfigRequest& request);

                /**
                 *This API (DescribeRoleList) is used to get the role list under the account.
                 * @param req DescribeRoleListRequest
                 * @return DescribeRoleListOutcome
                 */
                DescribeRoleListOutcome DescribeRoleList(const Model::DescribeRoleListRequest &request);
                void DescribeRoleListAsync(const Model::DescribeRoleListRequest& request, const DescribeRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoleListOutcomeCallable DescribeRoleListCallable(const Model::DescribeRoleListRequest& request);

                /**
                 *This API is used to query security settings.
                 * @param req DescribeSafeAuthFlagCollRequest
                 * @return DescribeSafeAuthFlagCollOutcome
                 */
                DescribeSafeAuthFlagCollOutcome DescribeSafeAuthFlagColl(const Model::DescribeSafeAuthFlagCollRequest &request);
                void DescribeSafeAuthFlagCollAsync(const Model::DescribeSafeAuthFlagCollRequest& request, const DescribeSafeAuthFlagCollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSafeAuthFlagCollOutcomeCallable DescribeSafeAuthFlagCollCallable(const Model::DescribeSafeAuthFlagCollRequest& request);

                /**
                 *This API is used to query security settings.
                 * @param req DescribeSafeAuthFlagIntlRequest
                 * @return DescribeSafeAuthFlagIntlOutcome
                 */
                DescribeSafeAuthFlagIntlOutcome DescribeSafeAuthFlagIntl(const Model::DescribeSafeAuthFlagIntlRequest &request);
                void DescribeSafeAuthFlagIntlAsync(const Model::DescribeSafeAuthFlagIntlRequest& request, const DescribeSafeAuthFlagIntlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSafeAuthFlagIntlOutcomeCallable DescribeSafeAuthFlagIntlCallable(const Model::DescribeSafeAuthFlagIntlRequest& request);

                /**
                 *This API is used to query sub-users through the sub-user UIN list.
                 * @param req DescribeSubAccountsRequest
                 * @return DescribeSubAccountsOutcome
                 */
                DescribeSubAccountsOutcome DescribeSubAccounts(const Model::DescribeSubAccountsRequest &request);
                void DescribeSubAccountsAsync(const Model::DescribeSubAccountsRequest& request, const DescribeSubAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubAccountsOutcomeCallable DescribeSubAccountsCallable(const Model::DescribeSubAccountsRequest& request);

                /**
                 *This API is used to query the user OIDC configuration.
                 * @param req DescribeUserOIDCConfigRequest
                 * @return DescribeUserOIDCConfigOutcome
                 */
                DescribeUserOIDCConfigOutcome DescribeUserOIDCConfig(const Model::DescribeUserOIDCConfigRequest &request);
                void DescribeUserOIDCConfigAsync(const Model::DescribeUserOIDCConfigRequest& request, const DescribeUserOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserOIDCConfigOutcomeCallable DescribeUserOIDCConfigCallable(const Model::DescribeUserOIDCConfigRequest& request);

                /**
                 *This API is used to query user SAML configurations.
                 * @param req DescribeUserSAMLConfigRequest
                 * @return DescribeUserSAMLConfigOutcome
                 */
                DescribeUserSAMLConfigOutcome DescribeUserSAMLConfig(const Model::DescribeUserSAMLConfigRequest &request);
                void DescribeUserSAMLConfigAsync(const Model::DescribeUserSAMLConfigRequest& request, const DescribeUserSAMLConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserSAMLConfigOutcomeCallable DescribeUserSAMLConfigCallable(const Model::DescribeUserSAMLConfigRequest& request);

                /**
                 *This API (DetachGroupPolicy) is used to unassociate a policy and a user group.
                 * @param req DetachGroupPolicyRequest
                 * @return DetachGroupPolicyOutcome
                 */
                DetachGroupPolicyOutcome DetachGroupPolicy(const Model::DetachGroupPolicyRequest &request);
                void DetachGroupPolicyAsync(const Model::DetachGroupPolicyRequest& request, const DetachGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachGroupPolicyOutcomeCallable DetachGroupPolicyCallable(const Model::DetachGroupPolicyRequest& request);

                /**
                 *This API (DetachRolePolicy) is used to unassociate a policy and a role.
                 * @param req DetachRolePolicyRequest
                 * @return DetachRolePolicyOutcome
                 */
                DetachRolePolicyOutcome DetachRolePolicy(const Model::DetachRolePolicyRequest &request);
                void DetachRolePolicyAsync(const Model::DetachRolePolicyRequest& request, const DetachRolePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachRolePolicyOutcomeCallable DetachRolePolicyCallable(const Model::DetachRolePolicyRequest& request);

                /**
                 *This API (DetachUserPolicy) is used to unassociate a policy and a user.
                 * @param req DetachUserPolicyRequest
                 * @return DetachUserPolicyOutcome
                 */
                DetachUserPolicyOutcome DetachUserPolicy(const Model::DetachUserPolicyRequest &request);
                void DetachUserPolicyAsync(const Model::DetachUserPolicyRequest& request, const DetachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachUserPolicyOutcomeCallable DetachUserPolicyCallable(const Model::DetachUserPolicyRequest& request);

                /**
                 *This API is used to disable user SSO.
                 * @param req DisableUserSSORequest
                 * @return DisableUserSSOOutcome
                 */
                DisableUserSSOOutcome DisableUserSSO(const Model::DisableUserSSORequest &request);
                void DisableUserSSOAsync(const Model::DisableUserSSORequest& request, const DisableUserSSOAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableUserSSOOutcomeCallable DisableUserSSOCallable(const Model::DisableUserSSORequest& request);

                /**
                 *This API is used to query account summary. 
                 * @param req GetAccountSummaryRequest
                 * @return GetAccountSummaryOutcome
                 */
                GetAccountSummaryOutcome GetAccountSummary(const Model::GetAccountSummaryRequest &request);
                void GetAccountSummaryAsync(const Model::GetAccountSummaryRequest& request, const GetAccountSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAccountSummaryOutcomeCallable GetAccountSummaryCallable(const Model::GetAccountSummaryRequest& request);

                /**
                 *This API is used to get information associated with a custom multi-factor Token
                 * @param req GetCustomMFATokenInfoRequest
                 * @return GetCustomMFATokenInfoOutcome
                 */
                GetCustomMFATokenInfoOutcome GetCustomMFATokenInfo(const Model::GetCustomMFATokenInfoRequest &request);
                void GetCustomMFATokenInfoAsync(const Model::GetCustomMFATokenInfoRequest& request, const GetCustomMFATokenInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCustomMFATokenInfoOutcomeCallable GetCustomMFATokenInfoCallable(const Model::GetCustomMFATokenInfoRequest& request);

                /**
                 *This API is used to query user group details.
                 * @param req GetGroupRequest
                 * @return GetGroupOutcome
                 */
                GetGroupOutcome GetGroup(const Model::GetGroupRequest &request);
                void GetGroupAsync(const Model::GetGroupRequest& request, const GetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGroupOutcomeCallable GetGroupCallable(const Model::GetGroupRequest& request);

                /**
                 *This API (GetPolicy) is used to query and view policy details.
                 * @param req GetPolicyRequest
                 * @return GetPolicyOutcome
                 */
                GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest &request);
                void GetPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPolicyOutcomeCallable GetPolicyCallable(const Model::GetPolicyRequest& request);

                /**
                 *This API is used to query policy version details.
                 * @param req GetPolicyVersionRequest
                 * @return GetPolicyVersionOutcome
                 */
                GetPolicyVersionOutcome GetPolicyVersion(const Model::GetPolicyVersionRequest &request);
                void GetPolicyVersionAsync(const Model::GetPolicyVersionRequest& request, const GetPolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPolicyVersionOutcomeCallable GetPolicyVersionCallable(const Model::GetPolicyVersionRequest& request);

                /**
                 *This API (GetRole) is used to get the details of a specified role.
                 * @param req GetRoleRequest
                 * @return GetRoleOutcome
                 */
                GetRoleOutcome GetRole(const Model::GetRoleRequest &request);
                void GetRoleAsync(const Model::GetRoleRequest& request, const GetRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRoleOutcomeCallable GetRoleCallable(const Model::GetRoleRequest& request);

                /**
                 *This API is used to query SAML identity provider details.
                 * @param req GetSAMLProviderRequest
                 * @return GetSAMLProviderOutcome
                 */
                GetSAMLProviderOutcome GetSAMLProvider(const Model::GetSAMLProviderRequest &request);
                void GetSAMLProviderAsync(const Model::GetSAMLProviderRequest& request, const GetSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSAMLProviderOutcomeCallable GetSAMLProviderCallable(const Model::GetSAMLProviderRequest& request);

                /**
                 *This API is used to get a key’s recent usage details.
                 * @param req GetSecurityLastUsedRequest
                 * @return GetSecurityLastUsedOutcome
                 */
                GetSecurityLastUsedOutcome GetSecurityLastUsed(const Model::GetSecurityLastUsedRequest &request);
                void GetSecurityLastUsedAsync(const Model::GetSecurityLastUsedRequest& request, const GetSecurityLastUsedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSecurityLastUsedOutcomeCallable GetSecurityLastUsedCallable(const Model::GetSecurityLastUsedRequest& request);

                /**
                 *This API is used to get the status of the service-linked role deletion based on the `TaskId`
                 * @param req GetServiceLinkedRoleDeletionStatusRequest
                 * @return GetServiceLinkedRoleDeletionStatusOutcome
                 */
                GetServiceLinkedRoleDeletionStatusOutcome GetServiceLinkedRoleDeletionStatus(const Model::GetServiceLinkedRoleDeletionStatusRequest &request);
                void GetServiceLinkedRoleDeletionStatusAsync(const Model::GetServiceLinkedRoleDeletionStatusRequest& request, const GetServiceLinkedRoleDeletionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetServiceLinkedRoleDeletionStatusOutcomeCallable GetServiceLinkedRoleDeletionStatusCallable(const Model::GetServiceLinkedRoleDeletionStatusRequest& request);

                /**
                 *This API is used to query sub-users.
                 * @param req GetUserRequest
                 * @return GetUserOutcome
                 */
                GetUserOutcome GetUser(const Model::GetUserRequest &request);
                void GetUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUserOutcomeCallable GetUserCallable(const Model::GetUserRequest& request);

                /**
                 *This API is used to get the user AppId.
                 * @param req GetUserAppIdRequest
                 * @return GetUserAppIdOutcome
                 */
                GetUserAppIdOutcome GetUserAppId(const Model::GetUserAppIdRequest &request);
                void GetUserAppIdAsync(const Model::GetUserAppIdRequest& request, const GetUserAppIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUserAppIdOutcomeCallable GetUserAppIdCallable(const Model::GetUserAppIdRequest& request);

                /**
                 *This API is used to list the access keys associated with a specified CAM user.
                 * @param req ListAccessKeysRequest
                 * @return ListAccessKeysOutcome
                 */
                ListAccessKeysOutcome ListAccessKeys(const Model::ListAccessKeysRequest &request);
                void ListAccessKeysAsync(const Model::ListAccessKeysRequest& request, const ListAccessKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAccessKeysOutcomeCallable ListAccessKeysCallable(const Model::ListAccessKeysRequest& request);

                /**
                 *This API (ListAttachedGroupPolicies) is used to query the list of policies associated with a user group.
                 * @param req ListAttachedGroupPoliciesRequest
                 * @return ListAttachedGroupPoliciesOutcome
                 */
                ListAttachedGroupPoliciesOutcome ListAttachedGroupPolicies(const Model::ListAttachedGroupPoliciesRequest &request);
                void ListAttachedGroupPoliciesAsync(const Model::ListAttachedGroupPoliciesRequest& request, const ListAttachedGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAttachedGroupPoliciesOutcomeCallable ListAttachedGroupPoliciesCallable(const Model::ListAttachedGroupPoliciesRequest& request);

                /**
                 *This API (ListAttachedRolePolicies) is used to obtain the list of the policies associated with a role.
                 * @param req ListAttachedRolePoliciesRequest
                 * @return ListAttachedRolePoliciesOutcome
                 */
                ListAttachedRolePoliciesOutcome ListAttachedRolePolicies(const Model::ListAttachedRolePoliciesRequest &request);
                void ListAttachedRolePoliciesAsync(const Model::ListAttachedRolePoliciesRequest& request, const ListAttachedRolePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAttachedRolePoliciesOutcomeCallable ListAttachedRolePoliciesCallable(const Model::ListAttachedRolePoliciesRequest& request);

                /**
                 *This API is used to list policies associated with the user (including those inherited from the user group).
                 * @param req ListAttachedUserAllPoliciesRequest
                 * @return ListAttachedUserAllPoliciesOutcome
                 */
                ListAttachedUserAllPoliciesOutcome ListAttachedUserAllPolicies(const Model::ListAttachedUserAllPoliciesRequest &request);
                void ListAttachedUserAllPoliciesAsync(const Model::ListAttachedUserAllPoliciesRequest& request, const ListAttachedUserAllPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAttachedUserAllPoliciesOutcomeCallable ListAttachedUserAllPoliciesCallable(const Model::ListAttachedUserAllPoliciesRequest& request);

                /**
                 *This API (ListAttachedUserPolicies) is used to query the list of policies associated with a sub-account.
                 * @param req ListAttachedUserPoliciesRequest
                 * @return ListAttachedUserPoliciesOutcome
                 */
                ListAttachedUserPoliciesOutcome ListAttachedUserPolicies(const Model::ListAttachedUserPoliciesRequest &request);
                void ListAttachedUserPoliciesAsync(const Model::ListAttachedUserPoliciesRequest& request, const ListAttachedUserPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAttachedUserPoliciesOutcomeCallable ListAttachedUserPoliciesCallable(const Model::ListAttachedUserPoliciesRequest& request);

                /**
                 *This API is used to get the collaborator list.
                 * @param req ListCollaboratorsRequest
                 * @return ListCollaboratorsOutcome
                 */
                ListCollaboratorsOutcome ListCollaborators(const Model::ListCollaboratorsRequest &request);
                void ListCollaboratorsAsync(const Model::ListCollaboratorsRequest& request, const ListCollaboratorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListCollaboratorsOutcomeCallable ListCollaboratorsCallable(const Model::ListCollaboratorsRequest& request);

                /**
                 *This API (ListEntitiesForPolicy) is used to query the list of entities associated with a policy.
                 * @param req ListEntitiesForPolicyRequest
                 * @return ListEntitiesForPolicyOutcome
                 */
                ListEntitiesForPolicyOutcome ListEntitiesForPolicy(const Model::ListEntitiesForPolicyRequest &request);
                void ListEntitiesForPolicyAsync(const Model::ListEntitiesForPolicyRequest& request, const ListEntitiesForPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListEntitiesForPolicyOutcomeCallable ListEntitiesForPolicyCallable(const Model::ListEntitiesForPolicyRequest& request);

                /**
                 *This API is used to query the list of user groups.
                 * @param req ListGroupsRequest
                 * @return ListGroupsOutcome
                 */
                ListGroupsOutcome ListGroups(const Model::ListGroupsRequest &request);
                void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request);

                /**
                 *This API is used to list user groups associated with a user.
                 * @param req ListGroupsForUserRequest
                 * @return ListGroupsForUserOutcome
                 */
                ListGroupsForUserOutcome ListGroupsForUser(const Model::ListGroupsForUserRequest &request);
                void ListGroupsForUserAsync(const Model::ListGroupsForUserRequest& request, const ListGroupsForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListGroupsForUserOutcomeCallable ListGroupsForUserCallable(const Model::ListGroupsForUserRequest& request);

                /**
                 *This API is used to query the policy list.
                 * @param req ListPoliciesRequest
                 * @return ListPoliciesOutcome
                 */
                ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest &request);
                void ListPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListPoliciesOutcomeCallable ListPoliciesCallable(const Model::ListPoliciesRequest& request);

                /**
                 *This API is used to get the list of policy versions.
                 * @param req ListPolicyVersionsRequest
                 * @return ListPolicyVersionsOutcome
                 */
                ListPolicyVersionsOutcome ListPolicyVersions(const Model::ListPolicyVersionsRequest &request);
                void ListPolicyVersionsAsync(const Model::ListPolicyVersionsRequest& request, const ListPolicyVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListPolicyVersionsOutcomeCallable ListPolicyVersionsCallable(const Model::ListPolicyVersionsRequest& request);

                /**
                 *This API is used to query the list of SAML identity providers.
                 * @param req ListSAMLProvidersRequest
                 * @return ListSAMLProvidersOutcome
                 */
                ListSAMLProvidersOutcome ListSAMLProviders(const Model::ListSAMLProvidersRequest &request);
                void ListSAMLProvidersAsync(const Model::ListSAMLProvidersRequest& request, const ListSAMLProvidersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSAMLProvidersOutcomeCallable ListSAMLProvidersCallable(const Model::ListSAMLProvidersRequest& request);

                /**
                 *This API is used to pull sub-users.
                 * @param req ListUsersRequest
                 * @return ListUsersOutcome
                 */
                ListUsersOutcome ListUsers(const Model::ListUsersRequest &request);
                void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request);

                /**
                 *This API is used to query the list of users associated with a user group.
                 * @param req ListUsersForGroupRequest
                 * @return ListUsersForGroupOutcome
                 */
                ListUsersForGroupOutcome ListUsersForGroup(const Model::ListUsersForGroupRequest &request);
                void ListUsersForGroupAsync(const Model::ListUsersForGroupRequest& request, const ListUsersForGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUsersForGroupOutcomeCallable ListUsersForGroupCallable(const Model::ListUsersForGroupRequest& request);

                /**
                 *This API is used to set a role permission boundary.
                 * @param req PutRolePermissionsBoundaryRequest
                 * @return PutRolePermissionsBoundaryOutcome
                 */
                PutRolePermissionsBoundaryOutcome PutRolePermissionsBoundary(const Model::PutRolePermissionsBoundaryRequest &request);
                void PutRolePermissionsBoundaryAsync(const Model::PutRolePermissionsBoundaryRequest& request, const PutRolePermissionsBoundaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutRolePermissionsBoundaryOutcomeCallable PutRolePermissionsBoundaryCallable(const Model::PutRolePermissionsBoundaryRequest& request);

                /**
                 *This API is used to set a user permission boundary.
                 * @param req PutUserPermissionsBoundaryRequest
                 * @return PutUserPermissionsBoundaryOutcome
                 */
                PutUserPermissionsBoundaryOutcome PutUserPermissionsBoundary(const Model::PutUserPermissionsBoundaryRequest &request);
                void PutUserPermissionsBoundaryAsync(const Model::PutUserPermissionsBoundaryRequest& request, const PutUserPermissionsBoundaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutUserPermissionsBoundaryOutcomeCallable PutUserPermissionsBoundaryCallable(const Model::PutUserPermissionsBoundaryRequest& request);

                /**
                 *This API is used to delete users from a user group.
                 * @param req RemoveUserFromGroupRequest
                 * @return RemoveUserFromGroupOutcome
                 */
                RemoveUserFromGroupOutcome RemoveUserFromGroup(const Model::RemoveUserFromGroupRequest &request);
                void RemoveUserFromGroupAsync(const Model::RemoveUserFromGroupRequest& request, const RemoveUserFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveUserFromGroupOutcomeCallable RemoveUserFromGroupCallable(const Model::RemoveUserFromGroupRequest& request);

                /**
                 *This API is used to set the operative policy version.
                 * @param req SetDefaultPolicyVersionRequest
                 * @return SetDefaultPolicyVersionOutcome
                 */
                SetDefaultPolicyVersionOutcome SetDefaultPolicyVersion(const Model::SetDefaultPolicyVersionRequest &request);
                void SetDefaultPolicyVersionAsync(const Model::SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetDefaultPolicyVersionOutcomeCallable SetDefaultPolicyVersionCallable(const Model::SetDefaultPolicyVersionRequest& request);

                /**
                 *This API is used to set account verification for login and sensitive operations for sub-users.
                 * @param req SetMfaFlagRequest
                 * @return SetMfaFlagOutcome
                 */
                SetMfaFlagOutcome SetMfaFlag(const Model::SetMfaFlagRequest &request);
                void SetMfaFlagAsync(const Model::SetMfaFlagRequest& request, const SetMfaFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetMfaFlagOutcomeCallable SetMfaFlagCallable(const Model::SetMfaFlagRequest& request);

                /**
                 *This API is used to bind tags to a role.
                 * @param req TagRoleRequest
                 * @return TagRoleOutcome
                 */
                TagRoleOutcome TagRole(const Model::TagRoleRequest &request);
                void TagRoleAsync(const Model::TagRoleRequest& request, const TagRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TagRoleOutcomeCallable TagRoleCallable(const Model::TagRoleRequest& request);

                /**
                 *This API is used to unbind tags from a role.
                 * @param req UntagRoleRequest
                 * @return UntagRoleOutcome
                 */
                UntagRoleOutcome UntagRole(const Model::UntagRoleRequest &request);
                void UntagRoleAsync(const Model::UntagRoleRequest& request, const UntagRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UntagRoleOutcomeCallable UntagRoleCallable(const Model::UntagRoleRequest& request);

                /**
                 *This API is used to update an access key for a CAM user.
                 * @param req UpdateAccessKeyRequest
                 * @return UpdateAccessKeyOutcome
                 */
                UpdateAccessKeyOutcome UpdateAccessKey(const Model::UpdateAccessKeyRequest &request);
                void UpdateAccessKeyAsync(const Model::UpdateAccessKeyRequest& request, const UpdateAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAccessKeyOutcomeCallable UpdateAccessKeyCallable(const Model::UpdateAccessKeyRequest& request);

                /**
                 *This API (UpdateAssumeRolePolicy) is used to modify the trust policy of a role.
                 * @param req UpdateAssumeRolePolicyRequest
                 * @return UpdateAssumeRolePolicyOutcome
                 */
                UpdateAssumeRolePolicyOutcome UpdateAssumeRolePolicy(const Model::UpdateAssumeRolePolicyRequest &request);
                void UpdateAssumeRolePolicyAsync(const Model::UpdateAssumeRolePolicyRequest& request, const UpdateAssumeRolePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAssumeRolePolicyOutcomeCallable UpdateAssumeRolePolicyCallable(const Model::UpdateAssumeRolePolicyRequest& request);

                /**
                 *This API is used to update a user group.
                 * @param req UpdateGroupRequest
                 * @return UpdateGroupOutcome
                 */
                UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest &request);
                void UpdateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request);

                /**
                 *This API is used to modify role OIDC configurations.
                 * @param req UpdateOIDCConfigRequest
                 * @return UpdateOIDCConfigOutcome
                 */
                UpdateOIDCConfigOutcome UpdateOIDCConfig(const Model::UpdateOIDCConfigRequest &request);
                void UpdateOIDCConfigAsync(const Model::UpdateOIDCConfigRequest& request, const UpdateOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOIDCConfigOutcomeCallable UpdateOIDCConfigCallable(const Model::UpdateOIDCConfigRequest& request);

                /**
                 *This API is used to update a policy.
This API will update the default version of an existing policy instead of creating a new one. If no policy exists, a default version will be created.
                 * @param req UpdatePolicyRequest
                 * @return UpdatePolicyOutcome
                 */
                UpdatePolicyOutcome UpdatePolicy(const Model::UpdatePolicyRequest &request);
                void UpdatePolicyAsync(const Model::UpdatePolicyRequest& request, const UpdatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePolicyOutcomeCallable UpdatePolicyCallable(const Model::UpdatePolicyRequest& request);

                /**
                 *This API is used to modify a role's login permissions.
                 * @param req UpdateRoleConsoleLoginRequest
                 * @return UpdateRoleConsoleLoginOutcome
                 */
                UpdateRoleConsoleLoginOutcome UpdateRoleConsoleLogin(const Model::UpdateRoleConsoleLoginRequest &request);
                void UpdateRoleConsoleLoginAsync(const Model::UpdateRoleConsoleLoginRequest& request, const UpdateRoleConsoleLoginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRoleConsoleLoginOutcomeCallable UpdateRoleConsoleLoginCallable(const Model::UpdateRoleConsoleLoginRequest& request);

                /**
                 *This API (UpdateRoleDescription) is used to modify the description of a role.
                 * @param req UpdateRoleDescriptionRequest
                 * @return UpdateRoleDescriptionOutcome
                 */
                UpdateRoleDescriptionOutcome UpdateRoleDescription(const Model::UpdateRoleDescriptionRequest &request);
                void UpdateRoleDescriptionAsync(const Model::UpdateRoleDescriptionRequest& request, const UpdateRoleDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRoleDescriptionOutcomeCallable UpdateRoleDescriptionCallable(const Model::UpdateRoleDescriptionRequest& request);

                /**
                 *This API is used to update SAML identity provider information.
                 * @param req UpdateSAMLProviderRequest
                 * @return UpdateSAMLProviderOutcome
                 */
                UpdateSAMLProviderOutcome UpdateSAMLProvider(const Model::UpdateSAMLProviderRequest &request);
                void UpdateSAMLProviderAsync(const Model::UpdateSAMLProviderRequest& request, const UpdateSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSAMLProviderOutcomeCallable UpdateSAMLProviderCallable(const Model::UpdateSAMLProviderRequest& request);

                /**
                 *This API is used to update a sub-user.
                 * @param req UpdateUserRequest
                 * @return UpdateUserOutcome
                 */
                UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest &request);
                void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request);

                /**
                 *This API is used to modify the user OIDC configuration.
                 * @param req UpdateUserOIDCConfigRequest
                 * @return UpdateUserOIDCConfigOutcome
                 */
                UpdateUserOIDCConfigOutcome UpdateUserOIDCConfig(const Model::UpdateUserOIDCConfigRequest &request);
                void UpdateUserOIDCConfigAsync(const Model::UpdateUserOIDCConfigRequest& request, const UpdateUserOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateUserOIDCConfigOutcomeCallable UpdateUserOIDCConfigCallable(const Model::UpdateUserOIDCConfigRequest& request);

                /**
                 *This API is used to modify user SAML configurations.
                 * @param req UpdateUserSAMLConfigRequest
                 * @return UpdateUserSAMLConfigOutcome
                 */
                UpdateUserSAMLConfigOutcome UpdateUserSAMLConfig(const Model::UpdateUserSAMLConfigRequest &request);
                void UpdateUserSAMLConfigAsync(const Model::UpdateUserSAMLConfigRequest& request, const UpdateUserSAMLConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateUserSAMLConfigOutcomeCallable UpdateUserSAMLConfigCallable(const Model::UpdateUserSAMLConfigRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_CAMCLIENT_H_
