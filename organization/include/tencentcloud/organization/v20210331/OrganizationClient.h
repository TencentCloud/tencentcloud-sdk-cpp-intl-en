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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_ORGANIZATIONCLIENT_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_ORGANIZATIONCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/organization/v20210331/model/AddExternalSAMLIdPCertificateRequest.h>
#include <tencentcloud/organization/v20210331/model/AddExternalSAMLIdPCertificateResponse.h>
#include <tencentcloud/organization/v20210331/model/AddOrganizationNodeRequest.h>
#include <tencentcloud/organization/v20210331/model/AddOrganizationNodeResponse.h>
#include <tencentcloud/organization/v20210331/model/AddPermissionPolicyToRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/AddPermissionPolicyToRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/AddUserToGroupRequest.h>
#include <tencentcloud/organization/v20210331/model/AddUserToGroupResponse.h>
#include <tencentcloud/organization/v20210331/model/BindOrganizationMemberAuthAccountRequest.h>
#include <tencentcloud/organization/v20210331/model/BindOrganizationMemberAuthAccountResponse.h>
#include <tencentcloud/organization/v20210331/model/CancelOrganizationMemberAuthAccountRequest.h>
#include <tencentcloud/organization/v20210331/model/CancelOrganizationMemberAuthAccountResponse.h>
#include <tencentcloud/organization/v20210331/model/ClearExternalSAMLIdentityProviderRequest.h>
#include <tencentcloud/organization/v20210331/model/ClearExternalSAMLIdentityProviderResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateGroupRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateGroupResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrgServiceAssignRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrgServiceAssignResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberAuthIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberAuthIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMembersPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMembersPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateRoleAssignmentRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateRoleAssignmentResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateSCIMCredentialRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateSCIMCredentialResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateUserRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateUserResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateUserSyncProvisioningRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateUserSyncProvisioningResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteGroupRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteGroupResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrgServiceAssignRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrgServiceAssignResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMemberAuthIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMemberAuthIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMembersPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMembersPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationNodesRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationNodesResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteRoleAssignmentRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteRoleAssignmentResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteSCIMCredentialRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteSCIMCredentialResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteUserRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteUserResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteUserSyncProvisioningRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteUserSyncProvisioningResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeIdentityCenterRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeIdentityCenterResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberAuthAccountsRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberAuthAccountsResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberAuthIdentitiesRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberAuthIdentitiesResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberPoliciesRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberPoliciesResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationNodesRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationNodesResponse.h>
#include <tencentcloud/organization/v20210331/model/DismantleRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/DismantleRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/GetExternalSAMLIdentityProviderRequest.h>
#include <tencentcloud/organization/v20210331/model/GetExternalSAMLIdentityProviderResponse.h>
#include <tencentcloud/organization/v20210331/model/GetGroupRequest.h>
#include <tencentcloud/organization/v20210331/model/GetGroupResponse.h>
#include <tencentcloud/organization/v20210331/model/GetProvisioningTaskStatusRequest.h>
#include <tencentcloud/organization/v20210331/model/GetProvisioningTaskStatusResponse.h>
#include <tencentcloud/organization/v20210331/model/GetRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/GetRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/GetSCIMSynchronizationStatusRequest.h>
#include <tencentcloud/organization/v20210331/model/GetSCIMSynchronizationStatusResponse.h>
#include <tencentcloud/organization/v20210331/model/GetTaskStatusRequest.h>
#include <tencentcloud/organization/v20210331/model/GetTaskStatusResponse.h>
#include <tencentcloud/organization/v20210331/model/GetUserRequest.h>
#include <tencentcloud/organization/v20210331/model/GetUserResponse.h>
#include <tencentcloud/organization/v20210331/model/GetUserSyncProvisioningRequest.h>
#include <tencentcloud/organization/v20210331/model/GetUserSyncProvisioningResponse.h>
#include <tencentcloud/organization/v20210331/model/GetZoneSAMLServiceProviderInfoRequest.h>
#include <tencentcloud/organization/v20210331/model/GetZoneSAMLServiceProviderInfoResponse.h>
#include <tencentcloud/organization/v20210331/model/GetZoneStatisticsRequest.h>
#include <tencentcloud/organization/v20210331/model/GetZoneStatisticsResponse.h>
#include <tencentcloud/organization/v20210331/model/InviteOrganizationMemberRequest.h>
#include <tencentcloud/organization/v20210331/model/InviteOrganizationMemberResponse.h>
#include <tencentcloud/organization/v20210331/model/ListExternalSAMLIdPCertificatesRequest.h>
#include <tencentcloud/organization/v20210331/model/ListExternalSAMLIdPCertificatesResponse.h>
#include <tencentcloud/organization/v20210331/model/ListGroupMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/ListGroupMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/ListGroupsRequest.h>
#include <tencentcloud/organization/v20210331/model/ListGroupsResponse.h>
#include <tencentcloud/organization/v20210331/model/ListJoinedGroupsForUserRequest.h>
#include <tencentcloud/organization/v20210331/model/ListJoinedGroupsForUserResponse.h>
#include <tencentcloud/organization/v20210331/model/ListOrgServiceAssignMemberRequest.h>
#include <tencentcloud/organization/v20210331/model/ListOrgServiceAssignMemberResponse.h>
#include <tencentcloud/organization/v20210331/model/ListOrganizationIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/ListOrganizationIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/ListOrganizationServiceRequest.h>
#include <tencentcloud/organization/v20210331/model/ListOrganizationServiceResponse.h>
#include <tencentcloud/organization/v20210331/model/ListPermissionPoliciesInRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/ListPermissionPoliciesInRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/ListRoleAssignmentsRequest.h>
#include <tencentcloud/organization/v20210331/model/ListRoleAssignmentsResponse.h>
#include <tencentcloud/organization/v20210331/model/ListRoleConfigurationProvisioningsRequest.h>
#include <tencentcloud/organization/v20210331/model/ListRoleConfigurationProvisioningsResponse.h>
#include <tencentcloud/organization/v20210331/model/ListRoleConfigurationsRequest.h>
#include <tencentcloud/organization/v20210331/model/ListRoleConfigurationsResponse.h>
#include <tencentcloud/organization/v20210331/model/ListSCIMCredentialsRequest.h>
#include <tencentcloud/organization/v20210331/model/ListSCIMCredentialsResponse.h>
#include <tencentcloud/organization/v20210331/model/ListTasksRequest.h>
#include <tencentcloud/organization/v20210331/model/ListTasksResponse.h>
#include <tencentcloud/organization/v20210331/model/ListUserSyncProvisioningsRequest.h>
#include <tencentcloud/organization/v20210331/model/ListUserSyncProvisioningsResponse.h>
#include <tencentcloud/organization/v20210331/model/ListUsersRequest.h>
#include <tencentcloud/organization/v20210331/model/ListUsersResponse.h>
#include <tencentcloud/organization/v20210331/model/MoveOrganizationNodeMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/MoveOrganizationNodeMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/OpenIdentityCenterRequest.h>
#include <tencentcloud/organization/v20210331/model/OpenIdentityCenterResponse.h>
#include <tencentcloud/organization/v20210331/model/ProvisionRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/ProvisionRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/QuitOrganizationRequest.h>
#include <tencentcloud/organization/v20210331/model/QuitOrganizationResponse.h>
#include <tencentcloud/organization/v20210331/model/RemoveExternalSAMLIdPCertificateRequest.h>
#include <tencentcloud/organization/v20210331/model/RemoveExternalSAMLIdPCertificateResponse.h>
#include <tencentcloud/organization/v20210331/model/RemovePermissionPolicyFromRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/RemovePermissionPolicyFromRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/RemoveUserFromGroupRequest.h>
#include <tencentcloud/organization/v20210331/model/RemoveUserFromGroupResponse.h>
#include <tencentcloud/organization/v20210331/model/SetExternalSAMLIdentityProviderRequest.h>
#include <tencentcloud/organization/v20210331/model/SetExternalSAMLIdentityProviderResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateCustomPolicyForRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateCustomPolicyForRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateGroupRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateGroupResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationMemberRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationMemberResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationNodeRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationNodeResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateRoleConfigurationRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateRoleConfigurationResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateSCIMCredentialStatusRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateSCIMCredentialStatusResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateSCIMSynchronizationStatusRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateSCIMSynchronizationStatusResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateUserRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateUserResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateUserStatusRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateUserStatusResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateUserSyncProvisioningRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateUserSyncProvisioningResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateZoneRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateZoneResponse.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            class OrganizationClient : public AbstractClient
            {
            public:
                OrganizationClient(const Credential &credential, const std::string &region);
                OrganizationClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddExternalSAMLIdPCertificateResponse> AddExternalSAMLIdPCertificateOutcome;
                typedef std::future<AddExternalSAMLIdPCertificateOutcome> AddExternalSAMLIdPCertificateOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddExternalSAMLIdPCertificateRequest&, AddExternalSAMLIdPCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddExternalSAMLIdPCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::AddOrganizationNodeResponse> AddOrganizationNodeOutcome;
                typedef std::future<AddOrganizationNodeOutcome> AddOrganizationNodeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddOrganizationNodeRequest&, AddOrganizationNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddOrganizationNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::AddPermissionPolicyToRoleConfigurationResponse> AddPermissionPolicyToRoleConfigurationOutcome;
                typedef std::future<AddPermissionPolicyToRoleConfigurationOutcome> AddPermissionPolicyToRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddPermissionPolicyToRoleConfigurationRequest&, AddPermissionPolicyToRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddPermissionPolicyToRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::AddUserToGroupResponse> AddUserToGroupOutcome;
                typedef std::future<AddUserToGroupOutcome> AddUserToGroupOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddUserToGroupRequest&, AddUserToGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUserToGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::BindOrganizationMemberAuthAccountResponse> BindOrganizationMemberAuthAccountOutcome;
                typedef std::future<BindOrganizationMemberAuthAccountOutcome> BindOrganizationMemberAuthAccountOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::BindOrganizationMemberAuthAccountRequest&, BindOrganizationMemberAuthAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindOrganizationMemberAuthAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelOrganizationMemberAuthAccountResponse> CancelOrganizationMemberAuthAccountOutcome;
                typedef std::future<CancelOrganizationMemberAuthAccountOutcome> CancelOrganizationMemberAuthAccountOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CancelOrganizationMemberAuthAccountRequest&, CancelOrganizationMemberAuthAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelOrganizationMemberAuthAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::ClearExternalSAMLIdentityProviderResponse> ClearExternalSAMLIdentityProviderOutcome;
                typedef std::future<ClearExternalSAMLIdentityProviderOutcome> ClearExternalSAMLIdentityProviderOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ClearExternalSAMLIdentityProviderRequest&, ClearExternalSAMLIdentityProviderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClearExternalSAMLIdentityProviderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGroupResponse> CreateGroupOutcome;
                typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateGroupRequest&, CreateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrgServiceAssignResponse> CreateOrgServiceAssignOutcome;
                typedef std::future<CreateOrgServiceAssignOutcome> CreateOrgServiceAssignOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrgServiceAssignRequest&, CreateOrgServiceAssignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrgServiceAssignAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationResponse> CreateOrganizationOutcome;
                typedef std::future<CreateOrganizationOutcome> CreateOrganizationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationRequest&, CreateOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationIdentityResponse> CreateOrganizationIdentityOutcome;
                typedef std::future<CreateOrganizationIdentityOutcome> CreateOrganizationIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationIdentityRequest&, CreateOrganizationIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationMemberResponse> CreateOrganizationMemberOutcome;
                typedef std::future<CreateOrganizationMemberOutcome> CreateOrganizationMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationMemberRequest&, CreateOrganizationMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationMemberAuthIdentityResponse> CreateOrganizationMemberAuthIdentityOutcome;
                typedef std::future<CreateOrganizationMemberAuthIdentityOutcome> CreateOrganizationMemberAuthIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationMemberAuthIdentityRequest&, CreateOrganizationMemberAuthIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationMemberAuthIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationMemberPolicyResponse> CreateOrganizationMemberPolicyOutcome;
                typedef std::future<CreateOrganizationMemberPolicyOutcome> CreateOrganizationMemberPolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationMemberPolicyRequest&, CreateOrganizationMemberPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationMemberPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationMembersPolicyResponse> CreateOrganizationMembersPolicyOutcome;
                typedef std::future<CreateOrganizationMembersPolicyOutcome> CreateOrganizationMembersPolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationMembersPolicyRequest&, CreateOrganizationMembersPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationMembersPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoleAssignmentResponse> CreateRoleAssignmentOutcome;
                typedef std::future<CreateRoleAssignmentOutcome> CreateRoleAssignmentOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateRoleAssignmentRequest&, CreateRoleAssignmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoleAssignmentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoleConfigurationResponse> CreateRoleConfigurationOutcome;
                typedef std::future<CreateRoleConfigurationOutcome> CreateRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateRoleConfigurationRequest&, CreateRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSCIMCredentialResponse> CreateSCIMCredentialOutcome;
                typedef std::future<CreateSCIMCredentialOutcome> CreateSCIMCredentialOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateSCIMCredentialRequest&, CreateSCIMCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSCIMCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserSyncProvisioningResponse> CreateUserSyncProvisioningOutcome;
                typedef std::future<CreateUserSyncProvisioningOutcome> CreateUserSyncProvisioningOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateUserSyncProvisioningRequest&, CreateUserSyncProvisioningOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserSyncProvisioningAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGroupResponse> DeleteGroupOutcome;
                typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteGroupRequest&, DeleteGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrgServiceAssignResponse> DeleteOrgServiceAssignOutcome;
                typedef std::future<DeleteOrgServiceAssignOutcome> DeleteOrgServiceAssignOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrgServiceAssignRequest&, DeleteOrgServiceAssignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrgServiceAssignAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationResponse> DeleteOrganizationOutcome;
                typedef std::future<DeleteOrganizationOutcome> DeleteOrganizationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationRequest&, DeleteOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationIdentityResponse> DeleteOrganizationIdentityOutcome;
                typedef std::future<DeleteOrganizationIdentityOutcome> DeleteOrganizationIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationIdentityRequest&, DeleteOrganizationIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationMemberAuthIdentityResponse> DeleteOrganizationMemberAuthIdentityOutcome;
                typedef std::future<DeleteOrganizationMemberAuthIdentityOutcome> DeleteOrganizationMemberAuthIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationMemberAuthIdentityRequest&, DeleteOrganizationMemberAuthIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationMemberAuthIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationMembersResponse> DeleteOrganizationMembersOutcome;
                typedef std::future<DeleteOrganizationMembersOutcome> DeleteOrganizationMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationMembersRequest&, DeleteOrganizationMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationMembersPolicyResponse> DeleteOrganizationMembersPolicyOutcome;
                typedef std::future<DeleteOrganizationMembersPolicyOutcome> DeleteOrganizationMembersPolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationMembersPolicyRequest&, DeleteOrganizationMembersPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationMembersPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationNodesResponse> DeleteOrganizationNodesOutcome;
                typedef std::future<DeleteOrganizationNodesOutcome> DeleteOrganizationNodesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationNodesRequest&, DeleteOrganizationNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoleAssignmentResponse> DeleteRoleAssignmentOutcome;
                typedef std::future<DeleteRoleAssignmentOutcome> DeleteRoleAssignmentOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteRoleAssignmentRequest&, DeleteRoleAssignmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoleAssignmentAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoleConfigurationResponse> DeleteRoleConfigurationOutcome;
                typedef std::future<DeleteRoleConfigurationOutcome> DeleteRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteRoleConfigurationRequest&, DeleteRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSCIMCredentialResponse> DeleteSCIMCredentialOutcome;
                typedef std::future<DeleteSCIMCredentialOutcome> DeleteSCIMCredentialOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteSCIMCredentialRequest&, DeleteSCIMCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSCIMCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserSyncProvisioningResponse> DeleteUserSyncProvisioningOutcome;
                typedef std::future<DeleteUserSyncProvisioningOutcome> DeleteUserSyncProvisioningOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteUserSyncProvisioningRequest&, DeleteUserSyncProvisioningOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserSyncProvisioningAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIdentityCenterResponse> DescribeIdentityCenterOutcome;
                typedef std::future<DescribeIdentityCenterOutcome> DescribeIdentityCenterOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeIdentityCenterRequest&, DescribeIdentityCenterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIdentityCenterAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationResponse> DescribeOrganizationOutcome;
                typedef std::future<DescribeOrganizationOutcome> DescribeOrganizationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationRequest&, DescribeOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationMemberAuthAccountsResponse> DescribeOrganizationMemberAuthAccountsOutcome;
                typedef std::future<DescribeOrganizationMemberAuthAccountsOutcome> DescribeOrganizationMemberAuthAccountsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationMemberAuthAccountsRequest&, DescribeOrganizationMemberAuthAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationMemberAuthAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationMemberAuthIdentitiesResponse> DescribeOrganizationMemberAuthIdentitiesOutcome;
                typedef std::future<DescribeOrganizationMemberAuthIdentitiesOutcome> DescribeOrganizationMemberAuthIdentitiesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationMemberAuthIdentitiesRequest&, DescribeOrganizationMemberAuthIdentitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationMemberAuthIdentitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationMemberPoliciesResponse> DescribeOrganizationMemberPoliciesOutcome;
                typedef std::future<DescribeOrganizationMemberPoliciesOutcome> DescribeOrganizationMemberPoliciesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationMemberPoliciesRequest&, DescribeOrganizationMemberPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationMemberPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationMembersResponse> DescribeOrganizationMembersOutcome;
                typedef std::future<DescribeOrganizationMembersOutcome> DescribeOrganizationMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationMembersRequest&, DescribeOrganizationMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationNodesResponse> DescribeOrganizationNodesOutcome;
                typedef std::future<DescribeOrganizationNodesOutcome> DescribeOrganizationNodesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationNodesRequest&, DescribeOrganizationNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DismantleRoleConfigurationResponse> DismantleRoleConfigurationOutcome;
                typedef std::future<DismantleRoleConfigurationOutcome> DismantleRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DismantleRoleConfigurationRequest&, DismantleRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DismantleRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::GetExternalSAMLIdentityProviderResponse> GetExternalSAMLIdentityProviderOutcome;
                typedef std::future<GetExternalSAMLIdentityProviderOutcome> GetExternalSAMLIdentityProviderOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetExternalSAMLIdentityProviderRequest&, GetExternalSAMLIdentityProviderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetExternalSAMLIdentityProviderAsyncHandler;
                typedef Outcome<Core::Error, Model::GetGroupResponse> GetGroupOutcome;
                typedef std::future<GetGroupOutcome> GetGroupOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetGroupRequest&, GetGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::GetProvisioningTaskStatusResponse> GetProvisioningTaskStatusOutcome;
                typedef std::future<GetProvisioningTaskStatusOutcome> GetProvisioningTaskStatusOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetProvisioningTaskStatusRequest&, GetProvisioningTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetProvisioningTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRoleConfigurationResponse> GetRoleConfigurationOutcome;
                typedef std::future<GetRoleConfigurationOutcome> GetRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetRoleConfigurationRequest&, GetRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSCIMSynchronizationStatusResponse> GetSCIMSynchronizationStatusOutcome;
                typedef std::future<GetSCIMSynchronizationStatusOutcome> GetSCIMSynchronizationStatusOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetSCIMSynchronizationStatusRequest&, GetSCIMSynchronizationStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSCIMSynchronizationStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTaskStatusResponse> GetTaskStatusOutcome;
                typedef std::future<GetTaskStatusOutcome> GetTaskStatusOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetTaskStatusRequest&, GetTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetUserResponse> GetUserOutcome;
                typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetUserRequest&, GetUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
                typedef Outcome<Core::Error, Model::GetUserSyncProvisioningResponse> GetUserSyncProvisioningOutcome;
                typedef std::future<GetUserSyncProvisioningOutcome> GetUserSyncProvisioningOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetUserSyncProvisioningRequest&, GetUserSyncProvisioningOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUserSyncProvisioningAsyncHandler;
                typedef Outcome<Core::Error, Model::GetZoneSAMLServiceProviderInfoResponse> GetZoneSAMLServiceProviderInfoOutcome;
                typedef std::future<GetZoneSAMLServiceProviderInfoOutcome> GetZoneSAMLServiceProviderInfoOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetZoneSAMLServiceProviderInfoRequest&, GetZoneSAMLServiceProviderInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetZoneSAMLServiceProviderInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::GetZoneStatisticsResponse> GetZoneStatisticsOutcome;
                typedef std::future<GetZoneStatisticsOutcome> GetZoneStatisticsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetZoneStatisticsRequest&, GetZoneStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetZoneStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::InviteOrganizationMemberResponse> InviteOrganizationMemberOutcome;
                typedef std::future<InviteOrganizationMemberOutcome> InviteOrganizationMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::InviteOrganizationMemberRequest&, InviteOrganizationMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InviteOrganizationMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::ListExternalSAMLIdPCertificatesResponse> ListExternalSAMLIdPCertificatesOutcome;
                typedef std::future<ListExternalSAMLIdPCertificatesOutcome> ListExternalSAMLIdPCertificatesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListExternalSAMLIdPCertificatesRequest&, ListExternalSAMLIdPCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListExternalSAMLIdPCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListGroupMembersResponse> ListGroupMembersOutcome;
                typedef std::future<ListGroupMembersOutcome> ListGroupMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListGroupMembersRequest&, ListGroupMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListGroupsResponse> ListGroupsOutcome;
                typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListGroupsRequest&, ListGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListJoinedGroupsForUserResponse> ListJoinedGroupsForUserOutcome;
                typedef std::future<ListJoinedGroupsForUserOutcome> ListJoinedGroupsForUserOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListJoinedGroupsForUserRequest&, ListJoinedGroupsForUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListJoinedGroupsForUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOrgServiceAssignMemberResponse> ListOrgServiceAssignMemberOutcome;
                typedef std::future<ListOrgServiceAssignMemberOutcome> ListOrgServiceAssignMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListOrgServiceAssignMemberRequest&, ListOrgServiceAssignMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOrgServiceAssignMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOrganizationIdentityResponse> ListOrganizationIdentityOutcome;
                typedef std::future<ListOrganizationIdentityOutcome> ListOrganizationIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListOrganizationIdentityRequest&, ListOrganizationIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOrganizationServiceResponse> ListOrganizationServiceOutcome;
                typedef std::future<ListOrganizationServiceOutcome> ListOrganizationServiceOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListOrganizationServiceRequest&, ListOrganizationServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ListPermissionPoliciesInRoleConfigurationResponse> ListPermissionPoliciesInRoleConfigurationOutcome;
                typedef std::future<ListPermissionPoliciesInRoleConfigurationOutcome> ListPermissionPoliciesInRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListPermissionPoliciesInRoleConfigurationRequest&, ListPermissionPoliciesInRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListPermissionPoliciesInRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRoleAssignmentsResponse> ListRoleAssignmentsOutcome;
                typedef std::future<ListRoleAssignmentsOutcome> ListRoleAssignmentsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListRoleAssignmentsRequest&, ListRoleAssignmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRoleAssignmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRoleConfigurationProvisioningsResponse> ListRoleConfigurationProvisioningsOutcome;
                typedef std::future<ListRoleConfigurationProvisioningsOutcome> ListRoleConfigurationProvisioningsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListRoleConfigurationProvisioningsRequest&, ListRoleConfigurationProvisioningsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRoleConfigurationProvisioningsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRoleConfigurationsResponse> ListRoleConfigurationsOutcome;
                typedef std::future<ListRoleConfigurationsOutcome> ListRoleConfigurationsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListRoleConfigurationsRequest&, ListRoleConfigurationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRoleConfigurationsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSCIMCredentialsResponse> ListSCIMCredentialsOutcome;
                typedef std::future<ListSCIMCredentialsOutcome> ListSCIMCredentialsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListSCIMCredentialsRequest&, ListSCIMCredentialsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSCIMCredentialsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTasksResponse> ListTasksOutcome;
                typedef std::future<ListTasksOutcome> ListTasksOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListTasksRequest&, ListTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUserSyncProvisioningsResponse> ListUserSyncProvisioningsOutcome;
                typedef std::future<ListUserSyncProvisioningsOutcome> ListUserSyncProvisioningsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListUserSyncProvisioningsRequest&, ListUserSyncProvisioningsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUserSyncProvisioningsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUsersResponse> ListUsersOutcome;
                typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListUsersRequest&, ListUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::MoveOrganizationNodeMembersResponse> MoveOrganizationNodeMembersOutcome;
                typedef std::future<MoveOrganizationNodeMembersOutcome> MoveOrganizationNodeMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::MoveOrganizationNodeMembersRequest&, MoveOrganizationNodeMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MoveOrganizationNodeMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenIdentityCenterResponse> OpenIdentityCenterOutcome;
                typedef std::future<OpenIdentityCenterOutcome> OpenIdentityCenterOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::OpenIdentityCenterRequest&, OpenIdentityCenterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenIdentityCenterAsyncHandler;
                typedef Outcome<Core::Error, Model::ProvisionRoleConfigurationResponse> ProvisionRoleConfigurationOutcome;
                typedef std::future<ProvisionRoleConfigurationOutcome> ProvisionRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ProvisionRoleConfigurationRequest&, ProvisionRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProvisionRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::QuitOrganizationResponse> QuitOrganizationOutcome;
                typedef std::future<QuitOrganizationOutcome> QuitOrganizationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::QuitOrganizationRequest&, QuitOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QuitOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveExternalSAMLIdPCertificateResponse> RemoveExternalSAMLIdPCertificateOutcome;
                typedef std::future<RemoveExternalSAMLIdPCertificateOutcome> RemoveExternalSAMLIdPCertificateOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::RemoveExternalSAMLIdPCertificateRequest&, RemoveExternalSAMLIdPCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveExternalSAMLIdPCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::RemovePermissionPolicyFromRoleConfigurationResponse> RemovePermissionPolicyFromRoleConfigurationOutcome;
                typedef std::future<RemovePermissionPolicyFromRoleConfigurationOutcome> RemovePermissionPolicyFromRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::RemovePermissionPolicyFromRoleConfigurationRequest&, RemovePermissionPolicyFromRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemovePermissionPolicyFromRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveUserFromGroupResponse> RemoveUserFromGroupOutcome;
                typedef std::future<RemoveUserFromGroupOutcome> RemoveUserFromGroupOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::RemoveUserFromGroupRequest&, RemoveUserFromGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserFromGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::SetExternalSAMLIdentityProviderResponse> SetExternalSAMLIdentityProviderOutcome;
                typedef std::future<SetExternalSAMLIdentityProviderOutcome> SetExternalSAMLIdentityProviderOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::SetExternalSAMLIdentityProviderRequest&, SetExternalSAMLIdentityProviderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetExternalSAMLIdentityProviderAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCustomPolicyForRoleConfigurationResponse> UpdateCustomPolicyForRoleConfigurationOutcome;
                typedef std::future<UpdateCustomPolicyForRoleConfigurationOutcome> UpdateCustomPolicyForRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateCustomPolicyForRoleConfigurationRequest&, UpdateCustomPolicyForRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCustomPolicyForRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGroupResponse> UpdateGroupOutcome;
                typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateGroupRequest&, UpdateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationIdentityResponse> UpdateOrganizationIdentityOutcome;
                typedef std::future<UpdateOrganizationIdentityOutcome> UpdateOrganizationIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateOrganizationIdentityRequest&, UpdateOrganizationIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationMemberResponse> UpdateOrganizationMemberOutcome;
                typedef std::future<UpdateOrganizationMemberOutcome> UpdateOrganizationMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateOrganizationMemberRequest&, UpdateOrganizationMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationNodeResponse> UpdateOrganizationNodeOutcome;
                typedef std::future<UpdateOrganizationNodeOutcome> UpdateOrganizationNodeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateOrganizationNodeRequest&, UpdateOrganizationNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRoleConfigurationResponse> UpdateRoleConfigurationOutcome;
                typedef std::future<UpdateRoleConfigurationOutcome> UpdateRoleConfigurationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateRoleConfigurationRequest&, UpdateRoleConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRoleConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSCIMCredentialStatusResponse> UpdateSCIMCredentialStatusOutcome;
                typedef std::future<UpdateSCIMCredentialStatusOutcome> UpdateSCIMCredentialStatusOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateSCIMCredentialStatusRequest&, UpdateSCIMCredentialStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSCIMCredentialStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSCIMSynchronizationStatusResponse> UpdateSCIMSynchronizationStatusOutcome;
                typedef std::future<UpdateSCIMSynchronizationStatusOutcome> UpdateSCIMSynchronizationStatusOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateSCIMSynchronizationStatusRequest&, UpdateSCIMSynchronizationStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSCIMSynchronizationStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateUserResponse> UpdateUserOutcome;
                typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateUserRequest&, UpdateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateUserStatusResponse> UpdateUserStatusOutcome;
                typedef std::future<UpdateUserStatusOutcome> UpdateUserStatusOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateUserStatusRequest&, UpdateUserStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateUserSyncProvisioningResponse> UpdateUserSyncProvisioningOutcome;
                typedef std::future<UpdateUserSyncProvisioningOutcome> UpdateUserSyncProvisioningOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateUserSyncProvisioningRequest&, UpdateUserSyncProvisioningOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserSyncProvisioningAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateZoneResponse> UpdateZoneOutcome;
                typedef std::future<UpdateZoneOutcome> UpdateZoneOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateZoneRequest&, UpdateZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateZoneAsyncHandler;



                /**
                 *This API is used to add SAML signing certificates.
                 * @param req AddExternalSAMLIdPCertificateRequest
                 * @return AddExternalSAMLIdPCertificateOutcome
                 */
                AddExternalSAMLIdPCertificateOutcome AddExternalSAMLIdPCertificate(const Model::AddExternalSAMLIdPCertificateRequest &request);
                void AddExternalSAMLIdPCertificateAsync(const Model::AddExternalSAMLIdPCertificateRequest& request, const AddExternalSAMLIdPCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddExternalSAMLIdPCertificateOutcomeCallable AddExternalSAMLIdPCertificateCallable(const Model::AddExternalSAMLIdPCertificateRequest& request);

                /**
                 *This API is used to add an organization node.
                 * @param req AddOrganizationNodeRequest
                 * @return AddOrganizationNodeOutcome
                 */
                AddOrganizationNodeOutcome AddOrganizationNode(const Model::AddOrganizationNodeRequest &request);
                void AddOrganizationNodeAsync(const Model::AddOrganizationNodeRequest& request, const AddOrganizationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddOrganizationNodeOutcomeCallable AddOrganizationNodeCallable(const Model::AddOrganizationNodeRequest& request);

                /**
                 *This API is used to add policies to permission configurations.
                 * @param req AddPermissionPolicyToRoleConfigurationRequest
                 * @return AddPermissionPolicyToRoleConfigurationOutcome
                 */
                AddPermissionPolicyToRoleConfigurationOutcome AddPermissionPolicyToRoleConfiguration(const Model::AddPermissionPolicyToRoleConfigurationRequest &request);
                void AddPermissionPolicyToRoleConfigurationAsync(const Model::AddPermissionPolicyToRoleConfigurationRequest& request, const AddPermissionPolicyToRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddPermissionPolicyToRoleConfigurationOutcomeCallable AddPermissionPolicyToRoleConfigurationCallable(const Model::AddPermissionPolicyToRoleConfigurationRequest& request);

                /**
                 *This API is used to add users to a user group.
                 * @param req AddUserToGroupRequest
                 * @return AddUserToGroupOutcome
                 */
                AddUserToGroupOutcome AddUserToGroup(const Model::AddUserToGroupRequest &request);
                void AddUserToGroupAsync(const Model::AddUserToGroupRequest& request, const AddUserToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUserToGroupOutcomeCallable AddUserToGroupCallable(const Model::AddUserToGroupRequest& request);

                /**
                 *This API is used to bind an organization member to a sub-account of the organization admin.
                 * @param req BindOrganizationMemberAuthAccountRequest
                 * @return BindOrganizationMemberAuthAccountOutcome
                 */
                BindOrganizationMemberAuthAccountOutcome BindOrganizationMemberAuthAccount(const Model::BindOrganizationMemberAuthAccountRequest &request);
                void BindOrganizationMemberAuthAccountAsync(const Model::BindOrganizationMemberAuthAccountRequest& request, const BindOrganizationMemberAuthAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindOrganizationMemberAuthAccountOutcomeCallable BindOrganizationMemberAuthAccountCallable(const Model::BindOrganizationMemberAuthAccountRequest& request);

                /**
                 *This API is used to unbind an organization member from a sub-account of the organization admin.
                 * @param req CancelOrganizationMemberAuthAccountRequest
                 * @return CancelOrganizationMemberAuthAccountOutcome
                 */
                CancelOrganizationMemberAuthAccountOutcome CancelOrganizationMemberAuthAccount(const Model::CancelOrganizationMemberAuthAccountRequest &request);
                void CancelOrganizationMemberAuthAccountAsync(const Model::CancelOrganizationMemberAuthAccountRequest& request, const CancelOrganizationMemberAuthAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelOrganizationMemberAuthAccountOutcomeCallable CancelOrganizationMemberAuthAccountCallable(const Model::CancelOrganizationMemberAuthAccountRequest& request);

                /**
                 *This API is used to clear the SAML identity provider configuration information.
                 * @param req ClearExternalSAMLIdentityProviderRequest
                 * @return ClearExternalSAMLIdentityProviderOutcome
                 */
                ClearExternalSAMLIdentityProviderOutcome ClearExternalSAMLIdentityProvider(const Model::ClearExternalSAMLIdentityProviderRequest &request);
                void ClearExternalSAMLIdentityProviderAsync(const Model::ClearExternalSAMLIdentityProviderRequest& request, const ClearExternalSAMLIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClearExternalSAMLIdentityProviderOutcomeCallable ClearExternalSAMLIdentityProviderCallable(const Model::ClearExternalSAMLIdentityProviderRequest& request);

                /**
                 *This API is used to create user groups.
                 * @param req CreateGroupRequest
                 * @return CreateGroupOutcome
                 */
                CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest &request);
                void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request);

                /**
                 *This API is used to add a delegated admin of the organization service.
                 * @param req CreateOrgServiceAssignRequest
                 * @return CreateOrgServiceAssignOutcome
                 */
                CreateOrgServiceAssignOutcome CreateOrgServiceAssign(const Model::CreateOrgServiceAssignRequest &request);
                void CreateOrgServiceAssignAsync(const Model::CreateOrgServiceAssignRequest& request, const CreateOrgServiceAssignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrgServiceAssignOutcomeCallable CreateOrgServiceAssignCallable(const Model::CreateOrgServiceAssignRequest& request);

                /**
                 *This API is used to create an organization.
                 * @param req CreateOrganizationRequest
                 * @return CreateOrganizationOutcome
                 */
                CreateOrganizationOutcome CreateOrganization(const Model::CreateOrganizationRequest &request);
                void CreateOrganizationAsync(const Model::CreateOrganizationRequest& request, const CreateOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationOutcomeCallable CreateOrganizationCallable(const Model::CreateOrganizationRequest& request);

                /**
                 *This API is used to add an organization identity.
                 * @param req CreateOrganizationIdentityRequest
                 * @return CreateOrganizationIdentityOutcome
                 */
                CreateOrganizationIdentityOutcome CreateOrganizationIdentity(const Model::CreateOrganizationIdentityRequest &request);
                void CreateOrganizationIdentityAsync(const Model::CreateOrganizationIdentityRequest& request, const CreateOrganizationIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationIdentityOutcomeCallable CreateOrganizationIdentityCallable(const Model::CreateOrganizationIdentityRequest& request);

                /**
                 *This API is used to create an organization member.
                 * @param req CreateOrganizationMemberRequest
                 * @return CreateOrganizationMemberOutcome
                 */
                CreateOrganizationMemberOutcome CreateOrganizationMember(const Model::CreateOrganizationMemberRequest &request);
                void CreateOrganizationMemberAsync(const Model::CreateOrganizationMemberRequest& request, const CreateOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationMemberOutcomeCallable CreateOrganizationMemberCallable(const Model::CreateOrganizationMemberRequest& request);

                /**
                 *This API is used to add organization member access authorization.
                 * @param req CreateOrganizationMemberAuthIdentityRequest
                 * @return CreateOrganizationMemberAuthIdentityOutcome
                 */
                CreateOrganizationMemberAuthIdentityOutcome CreateOrganizationMemberAuthIdentity(const Model::CreateOrganizationMemberAuthIdentityRequest &request);
                void CreateOrganizationMemberAuthIdentityAsync(const Model::CreateOrganizationMemberAuthIdentityRequest& request, const CreateOrganizationMemberAuthIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationMemberAuthIdentityOutcomeCallable CreateOrganizationMemberAuthIdentityCallable(const Model::CreateOrganizationMemberAuthIdentityRequest& request);

                /**
                 *This API is used to create an organization member access authorization policy.
                 * @param req CreateOrganizationMemberPolicyRequest
                 * @return CreateOrganizationMemberPolicyOutcome
                 */
                CreateOrganizationMemberPolicyOutcome CreateOrganizationMemberPolicy(const Model::CreateOrganizationMemberPolicyRequest &request);
                void CreateOrganizationMemberPolicyAsync(const Model::CreateOrganizationMemberPolicyRequest& request, const CreateOrganizationMemberPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationMemberPolicyOutcomeCallable CreateOrganizationMemberPolicyCallable(const Model::CreateOrganizationMemberPolicyRequest& request);

                /**
                 *This API is used to create an organization member access policy.
                 * @param req CreateOrganizationMembersPolicyRequest
                 * @return CreateOrganizationMembersPolicyOutcome
                 */
                CreateOrganizationMembersPolicyOutcome CreateOrganizationMembersPolicy(const Model::CreateOrganizationMembersPolicyRequest &request);
                void CreateOrganizationMembersPolicyAsync(const Model::CreateOrganizationMembersPolicyRequest& request, const CreateOrganizationMembersPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationMembersPolicyOutcomeCallable CreateOrganizationMembersPolicyCallable(const Model::CreateOrganizationMembersPolicyRequest& request);

                /**
                 *This API is used to grant authorizations on member accounts.
                 * @param req CreateRoleAssignmentRequest
                 * @return CreateRoleAssignmentOutcome
                 */
                CreateRoleAssignmentOutcome CreateRoleAssignment(const Model::CreateRoleAssignmentRequest &request);
                void CreateRoleAssignmentAsync(const Model::CreateRoleAssignmentRequest& request, const CreateRoleAssignmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoleAssignmentOutcomeCallable CreateRoleAssignmentCallable(const Model::CreateRoleAssignmentRequest& request);

                /**
                 *This API is used to create permission configurations.
                 * @param req CreateRoleConfigurationRequest
                 * @return CreateRoleConfigurationOutcome
                 */
                CreateRoleConfigurationOutcome CreateRoleConfiguration(const Model::CreateRoleConfigurationRequest &request);
                void CreateRoleConfigurationAsync(const Model::CreateRoleConfigurationRequest& request, const CreateRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoleConfigurationOutcomeCallable CreateRoleConfigurationCallable(const Model::CreateRoleConfigurationRequest& request);

                /**
                 *This API is used to create a SCIM key.
                 * @param req CreateSCIMCredentialRequest
                 * @return CreateSCIMCredentialOutcome
                 */
                CreateSCIMCredentialOutcome CreateSCIMCredential(const Model::CreateSCIMCredentialRequest &request);
                void CreateSCIMCredentialAsync(const Model::CreateSCIMCredentialRequest& request, const CreateSCIMCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSCIMCredentialOutcomeCallable CreateSCIMCredentialCallable(const Model::CreateSCIMCredentialRequest& request);

                /**
                 *This API is used to create a user.
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *This API is used to create sub-user synchronization tasks.
                 * @param req CreateUserSyncProvisioningRequest
                 * @return CreateUserSyncProvisioningOutcome
                 */
                CreateUserSyncProvisioningOutcome CreateUserSyncProvisioning(const Model::CreateUserSyncProvisioningRequest &request);
                void CreateUserSyncProvisioningAsync(const Model::CreateUserSyncProvisioningRequest& request, const CreateUserSyncProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserSyncProvisioningOutcomeCallable CreateUserSyncProvisioningCallable(const Model::CreateUserSyncProvisioningRequest& request);

                /**
                 *This API is used to delete user groups.
                 * @param req DeleteGroupRequest
                 * @return DeleteGroupOutcome
                 */
                DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest &request);
                void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request);

                /**
                 *This API is used to delete a delegated admin of the organization service.
                 * @param req DeleteOrgServiceAssignRequest
                 * @return DeleteOrgServiceAssignOutcome
                 */
                DeleteOrgServiceAssignOutcome DeleteOrgServiceAssign(const Model::DeleteOrgServiceAssignRequest &request);
                void DeleteOrgServiceAssignAsync(const Model::DeleteOrgServiceAssignRequest& request, const DeleteOrgServiceAssignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrgServiceAssignOutcomeCallable DeleteOrgServiceAssignCallable(const Model::DeleteOrgServiceAssignRequest& request);

                /**
                 *This API is used to delete an organization.
                 * @param req DeleteOrganizationRequest
                 * @return DeleteOrganizationOutcome
                 */
                DeleteOrganizationOutcome DeleteOrganization(const Model::DeleteOrganizationRequest &request);
                void DeleteOrganizationAsync(const Model::DeleteOrganizationRequest& request, const DeleteOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationOutcomeCallable DeleteOrganizationCallable(const Model::DeleteOrganizationRequest& request);

                /**
                 *This API is used to delete an organization identity.
                 * @param req DeleteOrganizationIdentityRequest
                 * @return DeleteOrganizationIdentityOutcome
                 */
                DeleteOrganizationIdentityOutcome DeleteOrganizationIdentity(const Model::DeleteOrganizationIdentityRequest &request);
                void DeleteOrganizationIdentityAsync(const Model::DeleteOrganizationIdentityRequest& request, const DeleteOrganizationIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationIdentityOutcomeCallable DeleteOrganizationIdentityCallable(const Model::DeleteOrganizationIdentityRequest& request);

                /**
                 *This API is used to delete organization member access authorization.
                 * @param req DeleteOrganizationMemberAuthIdentityRequest
                 * @return DeleteOrganizationMemberAuthIdentityOutcome
                 */
                DeleteOrganizationMemberAuthIdentityOutcome DeleteOrganizationMemberAuthIdentity(const Model::DeleteOrganizationMemberAuthIdentityRequest &request);
                void DeleteOrganizationMemberAuthIdentityAsync(const Model::DeleteOrganizationMemberAuthIdentityRequest& request, const DeleteOrganizationMemberAuthIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationMemberAuthIdentityOutcomeCallable DeleteOrganizationMemberAuthIdentityCallable(const Model::DeleteOrganizationMemberAuthIdentityRequest& request);

                /**
                 *This API is used to remove a member account from the organization, rather than delete the account.
                 * @param req DeleteOrganizationMembersRequest
                 * @return DeleteOrganizationMembersOutcome
                 */
                DeleteOrganizationMembersOutcome DeleteOrganizationMembers(const Model::DeleteOrganizationMembersRequest &request);
                void DeleteOrganizationMembersAsync(const Model::DeleteOrganizationMembersRequest& request, const DeleteOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationMembersOutcomeCallable DeleteOrganizationMembersCallable(const Model::DeleteOrganizationMembersRequest& request);

                /**
                 *This API is used to delete an organization member access policy.
                 * @param req DeleteOrganizationMembersPolicyRequest
                 * @return DeleteOrganizationMembersPolicyOutcome
                 */
                DeleteOrganizationMembersPolicyOutcome DeleteOrganizationMembersPolicy(const Model::DeleteOrganizationMembersPolicyRequest &request);
                void DeleteOrganizationMembersPolicyAsync(const Model::DeleteOrganizationMembersPolicyRequest& request, const DeleteOrganizationMembersPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationMembersPolicyOutcomeCallable DeleteOrganizationMembersPolicyCallable(const Model::DeleteOrganizationMembersPolicyRequest& request);

                /**
                 *This API is used to batch delete organization nodes.
                 * @param req DeleteOrganizationNodesRequest
                 * @return DeleteOrganizationNodesOutcome
                 */
                DeleteOrganizationNodesOutcome DeleteOrganizationNodes(const Model::DeleteOrganizationNodesRequest &request);
                void DeleteOrganizationNodesAsync(const Model::DeleteOrganizationNodesRequest& request, const DeleteOrganizationNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationNodesOutcomeCallable DeleteOrganizationNodesCallable(const Model::DeleteOrganizationNodesRequest& request);

                /**
                 *This API is used to remove authorizations on member accounts.
                 * @param req DeleteRoleAssignmentRequest
                 * @return DeleteRoleAssignmentOutcome
                 */
                DeleteRoleAssignmentOutcome DeleteRoleAssignment(const Model::DeleteRoleAssignmentRequest &request);
                void DeleteRoleAssignmentAsync(const Model::DeleteRoleAssignmentRequest& request, const DeleteRoleAssignmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoleAssignmentOutcomeCallable DeleteRoleAssignmentCallable(const Model::DeleteRoleAssignmentRequest& request);

                /**
                 *This API is used to delete the permission configuration information.
                 * @param req DeleteRoleConfigurationRequest
                 * @return DeleteRoleConfigurationOutcome
                 */
                DeleteRoleConfigurationOutcome DeleteRoleConfiguration(const Model::DeleteRoleConfigurationRequest &request);
                void DeleteRoleConfigurationAsync(const Model::DeleteRoleConfigurationRequest& request, const DeleteRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoleConfigurationOutcomeCallable DeleteRoleConfigurationCallable(const Model::DeleteRoleConfigurationRequest& request);

                /**
                 *This API is used to delete a SCIM key.
                 * @param req DeleteSCIMCredentialRequest
                 * @return DeleteSCIMCredentialOutcome
                 */
                DeleteSCIMCredentialOutcome DeleteSCIMCredential(const Model::DeleteSCIMCredentialRequest &request);
                void DeleteSCIMCredentialAsync(const Model::DeleteSCIMCredentialRequest& request, const DeleteSCIMCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSCIMCredentialOutcomeCallable DeleteSCIMCredentialCallable(const Model::DeleteSCIMCredentialRequest& request);

                /**
                 *This API is used to delete a user.
                 * @param req DeleteUserRequest
                 * @return DeleteUserOutcome
                 */
                DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest &request);
                void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request);

                /**
                 *This API is used to delete sub-user synchronization tasks.
                 * @param req DeleteUserSyncProvisioningRequest
                 * @return DeleteUserSyncProvisioningOutcome
                 */
                DeleteUserSyncProvisioningOutcome DeleteUserSyncProvisioning(const Model::DeleteUserSyncProvisioningRequest &request);
                void DeleteUserSyncProvisioningAsync(const Model::DeleteUserSyncProvisioningRequest& request, const DeleteUserSyncProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserSyncProvisioningOutcomeCallable DeleteUserSyncProvisioningCallable(const Model::DeleteUserSyncProvisioningRequest& request);

                /**
                 *This API is used to obtain TCO Identity Center service information.
                 * @param req DescribeIdentityCenterRequest
                 * @return DescribeIdentityCenterOutcome
                 */
                DescribeIdentityCenterOutcome DescribeIdentityCenter(const Model::DescribeIdentityCenterRequest &request);
                void DescribeIdentityCenterAsync(const Model::DescribeIdentityCenterRequest& request, const DescribeIdentityCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIdentityCenterOutcomeCallable DescribeIdentityCenterCallable(const Model::DescribeIdentityCenterRequest& request);

                /**
                 *This API is used to get the organization information.
                 * @param req DescribeOrganizationRequest
                 * @return DescribeOrganizationOutcome
                 */
                DescribeOrganizationOutcome DescribeOrganization(const Model::DescribeOrganizationRequest &request);
                void DescribeOrganizationAsync(const Model::DescribeOrganizationRequest& request, const DescribeOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationOutcomeCallable DescribeOrganizationCallable(const Model::DescribeOrganizationRequest& request);

                /**
                 *This API is used to get the list of sub-accounts bound to an organization member.
                 * @param req DescribeOrganizationMemberAuthAccountsRequest
                 * @return DescribeOrganizationMemberAuthAccountsOutcome
                 */
                DescribeOrganizationMemberAuthAccountsOutcome DescribeOrganizationMemberAuthAccounts(const Model::DescribeOrganizationMemberAuthAccountsRequest &request);
                void DescribeOrganizationMemberAuthAccountsAsync(const Model::DescribeOrganizationMemberAuthAccountsRequest& request, const DescribeOrganizationMemberAuthAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationMemberAuthAccountsOutcomeCallable DescribeOrganizationMemberAuthAccountsCallable(const Model::DescribeOrganizationMemberAuthAccountsRequest& request);

                /**
                 *This API is used to obtain the list of organization member access authorization.
                 * @param req DescribeOrganizationMemberAuthIdentitiesRequest
                 * @return DescribeOrganizationMemberAuthIdentitiesOutcome
                 */
                DescribeOrganizationMemberAuthIdentitiesOutcome DescribeOrganizationMemberAuthIdentities(const Model::DescribeOrganizationMemberAuthIdentitiesRequest &request);
                void DescribeOrganizationMemberAuthIdentitiesAsync(const Model::DescribeOrganizationMemberAuthIdentitiesRequest& request, const DescribeOrganizationMemberAuthIdentitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationMemberAuthIdentitiesOutcomeCallable DescribeOrganizationMemberAuthIdentitiesCallable(const Model::DescribeOrganizationMemberAuthIdentitiesRequest& request);

                /**
                 *This API is used to get the list of authorization policies of an organization member.
                 * @param req DescribeOrganizationMemberPoliciesRequest
                 * @return DescribeOrganizationMemberPoliciesOutcome
                 */
                DescribeOrganizationMemberPoliciesOutcome DescribeOrganizationMemberPolicies(const Model::DescribeOrganizationMemberPoliciesRequest &request);
                void DescribeOrganizationMemberPoliciesAsync(const Model::DescribeOrganizationMemberPoliciesRequest& request, const DescribeOrganizationMemberPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationMemberPoliciesOutcomeCallable DescribeOrganizationMemberPoliciesCallable(const Model::DescribeOrganizationMemberPoliciesRequest& request);

                /**
                 *This API is used to get the list of organization members.
                 * @param req DescribeOrganizationMembersRequest
                 * @return DescribeOrganizationMembersOutcome
                 */
                DescribeOrganizationMembersOutcome DescribeOrganizationMembers(const Model::DescribeOrganizationMembersRequest &request);
                void DescribeOrganizationMembersAsync(const Model::DescribeOrganizationMembersRequest& request, const DescribeOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationMembersOutcomeCallable DescribeOrganizationMembersCallable(const Model::DescribeOrganizationMembersRequest& request);

                /**
                 *This API is used to get the list of organization nodes.
                 * @param req DescribeOrganizationNodesRequest
                 * @return DescribeOrganizationNodesOutcome
                 */
                DescribeOrganizationNodesOutcome DescribeOrganizationNodes(const Model::DescribeOrganizationNodesRequest &request);
                void DescribeOrganizationNodesAsync(const Model::DescribeOrganizationNodesRequest& request, const DescribeOrganizationNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationNodesOutcomeCallable DescribeOrganizationNodesCallable(const Model::DescribeOrganizationNodesRequest& request);

                /**
                 *This API is used to undeploy permission configurations on member accounts.
                 * @param req DismantleRoleConfigurationRequest
                 * @return DismantleRoleConfigurationOutcome
                 */
                DismantleRoleConfigurationOutcome DismantleRoleConfiguration(const Model::DismantleRoleConfigurationRequest &request);
                void DismantleRoleConfigurationAsync(const Model::DismantleRoleConfigurationRequest& request, const DismantleRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DismantleRoleConfigurationOutcomeCallable DismantleRoleConfigurationCallable(const Model::DismantleRoleConfigurationRequest& request);

                /**
                 *This API is used to query the SAML identity provider configuration information.
                 * @param req GetExternalSAMLIdentityProviderRequest
                 * @return GetExternalSAMLIdentityProviderOutcome
                 */
                GetExternalSAMLIdentityProviderOutcome GetExternalSAMLIdentityProvider(const Model::GetExternalSAMLIdentityProviderRequest &request);
                void GetExternalSAMLIdentityProviderAsync(const Model::GetExternalSAMLIdentityProviderRequest& request, const GetExternalSAMLIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetExternalSAMLIdentityProviderOutcomeCallable GetExternalSAMLIdentityProviderCallable(const Model::GetExternalSAMLIdentityProviderRequest& request);

                /**
                 *This API is used to query the user group information.
                 * @param req GetGroupRequest
                 * @return GetGroupOutcome
                 */
                GetGroupOutcome GetGroup(const Model::GetGroupRequest &request);
                void GetGroupAsync(const Model::GetGroupRequest& request, const GetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGroupOutcomeCallable GetGroupCallable(const Model::GetGroupRequest& request);

                /**
                 *This API is used to query the status of async tasks of user synchronization.
                 * @param req GetProvisioningTaskStatusRequest
                 * @return GetProvisioningTaskStatusOutcome
                 */
                GetProvisioningTaskStatusOutcome GetProvisioningTaskStatus(const Model::GetProvisioningTaskStatusRequest &request);
                void GetProvisioningTaskStatusAsync(const Model::GetProvisioningTaskStatusRequest& request, const GetProvisioningTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetProvisioningTaskStatusOutcomeCallable GetProvisioningTaskStatusCallable(const Model::GetProvisioningTaskStatusRequest& request);

                /**
                 *This API is used to query the permission configuration information.
                 * @param req GetRoleConfigurationRequest
                 * @return GetRoleConfigurationOutcome
                 */
                GetRoleConfigurationOutcome GetRoleConfiguration(const Model::GetRoleConfigurationRequest &request);
                void GetRoleConfigurationAsync(const Model::GetRoleConfigurationRequest& request, const GetRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRoleConfigurationOutcomeCallable GetRoleConfigurationCallable(const Model::GetRoleConfigurationRequest& request);

                /**
                 *This API is used to query SCIM synchronization status.
                 * @param req GetSCIMSynchronizationStatusRequest
                 * @return GetSCIMSynchronizationStatusOutcome
                 */
                GetSCIMSynchronizationStatusOutcome GetSCIMSynchronizationStatus(const Model::GetSCIMSynchronizationStatusRequest &request);
                void GetSCIMSynchronizationStatusAsync(const Model::GetSCIMSynchronizationStatusRequest& request, const GetSCIMSynchronizationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSCIMSynchronizationStatusOutcomeCallable GetSCIMSynchronizationStatusCallable(const Model::GetSCIMSynchronizationStatusRequest& request);

                /**
                 *This API is used to query the status of async tasks.
                 * @param req GetTaskStatusRequest
                 * @return GetTaskStatusOutcome
                 */
                GetTaskStatusOutcome GetTaskStatus(const Model::GetTaskStatusRequest &request);
                void GetTaskStatusAsync(const Model::GetTaskStatusRequest& request, const GetTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTaskStatusOutcomeCallable GetTaskStatusCallable(const Model::GetTaskStatusRequest& request);

                /**
                 *This API is used to query the user information.
                 * @param req GetUserRequest
                 * @return GetUserOutcome
                 */
                GetUserOutcome GetUser(const Model::GetUserRequest &request);
                void GetUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUserOutcomeCallable GetUserCallable(const Model::GetUserRequest& request);

                /**
                 *This API is used to query the CAM user synchronization.
                 * @param req GetUserSyncProvisioningRequest
                 * @return GetUserSyncProvisioningOutcome
                 */
                GetUserSyncProvisioningOutcome GetUserSyncProvisioning(const Model::GetUserSyncProvisioningRequest &request);
                void GetUserSyncProvisioningAsync(const Model::GetUserSyncProvisioningRequest& request, const GetUserSyncProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUserSyncProvisioningOutcomeCallable GetUserSyncProvisioningCallable(const Model::GetUserSyncProvisioningRequest& request);

                /**
                 *This API is used to query the SAML service provider configuration information.
                 * @param req GetZoneSAMLServiceProviderInfoRequest
                 * @return GetZoneSAMLServiceProviderInfoOutcome
                 */
                GetZoneSAMLServiceProviderInfoOutcome GetZoneSAMLServiceProviderInfo(const Model::GetZoneSAMLServiceProviderInfoRequest &request);
                void GetZoneSAMLServiceProviderInfoAsync(const Model::GetZoneSAMLServiceProviderInfoRequest& request, const GetZoneSAMLServiceProviderInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetZoneSAMLServiceProviderInfoOutcomeCallable GetZoneSAMLServiceProviderInfoCallable(const Model::GetZoneSAMLServiceProviderInfoRequest& request);

                /**
                 *This API is used to query space statistics.
                 * @param req GetZoneStatisticsRequest
                 * @return GetZoneStatisticsOutcome
                 */
                GetZoneStatisticsOutcome GetZoneStatistics(const Model::GetZoneStatisticsRequest &request);
                void GetZoneStatisticsAsync(const Model::GetZoneStatisticsRequest& request, const GetZoneStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetZoneStatisticsOutcomeCallable GetZoneStatisticsCallable(const Model::GetZoneStatisticsRequest& request);

                /**
                 *This API is used to invite a member.
                 * @param req InviteOrganizationMemberRequest
                 * @return InviteOrganizationMemberOutcome
                 */
                InviteOrganizationMemberOutcome InviteOrganizationMember(const Model::InviteOrganizationMemberRequest &request);
                void InviteOrganizationMemberAsync(const Model::InviteOrganizationMemberRequest& request, const InviteOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InviteOrganizationMemberOutcomeCallable InviteOrganizationMemberCallable(const Model::InviteOrganizationMemberRequest& request);

                /**
                 *This API is used to query the SAML signing certificate list.
                 * @param req ListExternalSAMLIdPCertificatesRequest
                 * @return ListExternalSAMLIdPCertificatesOutcome
                 */
                ListExternalSAMLIdPCertificatesOutcome ListExternalSAMLIdPCertificates(const Model::ListExternalSAMLIdPCertificatesRequest &request);
                void ListExternalSAMLIdPCertificatesAsync(const Model::ListExternalSAMLIdPCertificatesRequest& request, const ListExternalSAMLIdPCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListExternalSAMLIdPCertificatesOutcomeCallable ListExternalSAMLIdPCertificatesCallable(const Model::ListExternalSAMLIdPCertificatesRequest& request);

                /**
                 *This API is used to query the user list of the user group.
                 * @param req ListGroupMembersRequest
                 * @return ListGroupMembersOutcome
                 */
                ListGroupMembersOutcome ListGroupMembers(const Model::ListGroupMembersRequest &request);
                void ListGroupMembersAsync(const Model::ListGroupMembersRequest& request, const ListGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListGroupMembersOutcomeCallable ListGroupMembersCallable(const Model::ListGroupMembersRequest& request);

                /**
                 *This API is used to query the user group list.
                 * @param req ListGroupsRequest
                 * @return ListGroupsOutcome
                 */
                ListGroupsOutcome ListGroups(const Model::ListGroupsRequest &request);
                void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request);

                /**
                 *This API is used to query the user group joined by users.
                 * @param req ListJoinedGroupsForUserRequest
                 * @return ListJoinedGroupsForUserOutcome
                 */
                ListJoinedGroupsForUserOutcome ListJoinedGroupsForUser(const Model::ListJoinedGroupsForUserRequest &request);
                void ListJoinedGroupsForUserAsync(const Model::ListJoinedGroupsForUserRequest& request, const ListJoinedGroupsForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListJoinedGroupsForUserOutcomeCallable ListJoinedGroupsForUserCallable(const Model::ListJoinedGroupsForUserRequest& request);

                /**
                 *This API is used to obtain the list of delegated admins of the organization service.
                 * @param req ListOrgServiceAssignMemberRequest
                 * @return ListOrgServiceAssignMemberOutcome
                 */
                ListOrgServiceAssignMemberOutcome ListOrgServiceAssignMember(const Model::ListOrgServiceAssignMemberRequest &request);
                void ListOrgServiceAssignMemberAsync(const Model::ListOrgServiceAssignMemberRequest& request, const ListOrgServiceAssignMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListOrgServiceAssignMemberOutcomeCallable ListOrgServiceAssignMemberCallable(const Model::ListOrgServiceAssignMemberRequest& request);

                /**
                 *This API is used to get the list of access identities of an organization member.
                 * @param req ListOrganizationIdentityRequest
                 * @return ListOrganizationIdentityOutcome
                 */
                ListOrganizationIdentityOutcome ListOrganizationIdentity(const Model::ListOrganizationIdentityRequest &request);
                void ListOrganizationIdentityAsync(const Model::ListOrganizationIdentityRequest& request, const ListOrganizationIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListOrganizationIdentityOutcomeCallable ListOrganizationIdentityCallable(const Model::ListOrganizationIdentityRequest& request);

                /**
                 *This API is used to obtain the list of organization service settings.
                 * @param req ListOrganizationServiceRequest
                 * @return ListOrganizationServiceOutcome
                 */
                ListOrganizationServiceOutcome ListOrganizationService(const Model::ListOrganizationServiceRequest &request);
                void ListOrganizationServiceAsync(const Model::ListOrganizationServiceRequest& request, const ListOrganizationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListOrganizationServiceOutcomeCallable ListOrganizationServiceCallable(const Model::ListOrganizationServiceRequest& request);

                /**
                 *This API is used to obtain the policy list in permission configurations.
                 * @param req ListPermissionPoliciesInRoleConfigurationRequest
                 * @return ListPermissionPoliciesInRoleConfigurationOutcome
                 */
                ListPermissionPoliciesInRoleConfigurationOutcome ListPermissionPoliciesInRoleConfiguration(const Model::ListPermissionPoliciesInRoleConfigurationRequest &request);
                void ListPermissionPoliciesInRoleConfigurationAsync(const Model::ListPermissionPoliciesInRoleConfigurationRequest& request, const ListPermissionPoliciesInRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListPermissionPoliciesInRoleConfigurationOutcomeCallable ListPermissionPoliciesInRoleConfigurationCallable(const Model::ListPermissionPoliciesInRoleConfigurationRequest& request);

                /**
                 *This API is used to query the authorization list.
                 * @param req ListRoleAssignmentsRequest
                 * @return ListRoleAssignmentsOutcome
                 */
                ListRoleAssignmentsOutcome ListRoleAssignments(const Model::ListRoleAssignmentsRequest &request);
                void ListRoleAssignmentsAsync(const Model::ListRoleAssignmentsRequest& request, const ListRoleAssignmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRoleAssignmentsOutcomeCallable ListRoleAssignmentsCallable(const Model::ListRoleAssignmentsRequest& request);

                /**
                 *This API is used to query the permission configuration deployment list.
                 * @param req ListRoleConfigurationProvisioningsRequest
                 * @return ListRoleConfigurationProvisioningsOutcome
                 */
                ListRoleConfigurationProvisioningsOutcome ListRoleConfigurationProvisionings(const Model::ListRoleConfigurationProvisioningsRequest &request);
                void ListRoleConfigurationProvisioningsAsync(const Model::ListRoleConfigurationProvisioningsRequest& request, const ListRoleConfigurationProvisioningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRoleConfigurationProvisioningsOutcomeCallable ListRoleConfigurationProvisioningsCallable(const Model::ListRoleConfigurationProvisioningsRequest& request);

                /**
                 *This API is used to query the permission configuration list.
                 * @param req ListRoleConfigurationsRequest
                 * @return ListRoleConfigurationsOutcome
                 */
                ListRoleConfigurationsOutcome ListRoleConfigurations(const Model::ListRoleConfigurationsRequest &request);
                void ListRoleConfigurationsAsync(const Model::ListRoleConfigurationsRequest& request, const ListRoleConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRoleConfigurationsOutcomeCallable ListRoleConfigurationsCallable(const Model::ListRoleConfigurationsRequest& request);

                /**
                 *This API is used to query the user SCIM key list.
                 * @param req ListSCIMCredentialsRequest
                 * @return ListSCIMCredentialsOutcome
                 */
                ListSCIMCredentialsOutcome ListSCIMCredentials(const Model::ListSCIMCredentialsRequest &request);
                void ListSCIMCredentialsAsync(const Model::ListSCIMCredentialsRequest& request, const ListSCIMCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSCIMCredentialsOutcomeCallable ListSCIMCredentialsCallable(const Model::ListSCIMCredentialsRequest& request);

                /**
                 *This API is used to query the async task list.
                 * @param req ListTasksRequest
                 * @return ListTasksOutcome
                 */
                ListTasksOutcome ListTasks(const Model::ListTasksRequest &request);
                void ListTasksAsync(const Model::ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTasksOutcomeCallable ListTasksCallable(const Model::ListTasksRequest& request);

                /**
                 *This API is used to query the CAM user synchronization list.
                 * @param req ListUserSyncProvisioningsRequest
                 * @return ListUserSyncProvisioningsOutcome
                 */
                ListUserSyncProvisioningsOutcome ListUserSyncProvisionings(const Model::ListUserSyncProvisioningsRequest &request);
                void ListUserSyncProvisioningsAsync(const Model::ListUserSyncProvisioningsRequest& request, const ListUserSyncProvisioningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUserSyncProvisioningsOutcomeCallable ListUserSyncProvisioningsCallable(const Model::ListUserSyncProvisioningsRequest& request);

                /**
                 *This API is used to query the user list.
                 * @param req ListUsersRequest
                 * @return ListUsersOutcome
                 */
                ListUsersOutcome ListUsers(const Model::ListUsersRequest &request);
                void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request);

                /**
                 *This API is used to move a member to the specified organization node.
                 * @param req MoveOrganizationNodeMembersRequest
                 * @return MoveOrganizationNodeMembersOutcome
                 */
                MoveOrganizationNodeMembersOutcome MoveOrganizationNodeMembers(const Model::MoveOrganizationNodeMembersRequest &request);
                void MoveOrganizationNodeMembersAsync(const Model::MoveOrganizationNodeMembersRequest& request, const MoveOrganizationNodeMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MoveOrganizationNodeMembersOutcomeCallable MoveOrganizationNodeMembersCallable(const Model::MoveOrganizationNodeMembersRequest& request);

                /**
                 *This API is used to activate Identity Center service (CIC).
                 * @param req OpenIdentityCenterRequest
                 * @return OpenIdentityCenterOutcome
                 */
                OpenIdentityCenterOutcome OpenIdentityCenter(const Model::OpenIdentityCenterRequest &request);
                void OpenIdentityCenterAsync(const Model::OpenIdentityCenterRequest& request, const OpenIdentityCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenIdentityCenterOutcomeCallable OpenIdentityCenterCallable(const Model::OpenIdentityCenterRequest& request);

                /**
                 *This API is used to deploy permission configurations on member accounts.
                 * @param req ProvisionRoleConfigurationRequest
                 * @return ProvisionRoleConfigurationOutcome
                 */
                ProvisionRoleConfigurationOutcome ProvisionRoleConfiguration(const Model::ProvisionRoleConfigurationRequest &request);
                void ProvisionRoleConfigurationAsync(const Model::ProvisionRoleConfigurationRequest& request, const ProvisionRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProvisionRoleConfigurationOutcomeCallable ProvisionRoleConfigurationCallable(const Model::ProvisionRoleConfigurationRequest& request);

                /**
                 *This API is used to exit an organization.
                 * @param req QuitOrganizationRequest
                 * @return QuitOrganizationOutcome
                 */
                QuitOrganizationOutcome QuitOrganization(const Model::QuitOrganizationRequest &request);
                void QuitOrganizationAsync(const Model::QuitOrganizationRequest& request, const QuitOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QuitOrganizationOutcomeCallable QuitOrganizationCallable(const Model::QuitOrganizationRequest& request);

                /**
                 *This API is used to remove SAML signing certificates.
                 * @param req RemoveExternalSAMLIdPCertificateRequest
                 * @return RemoveExternalSAMLIdPCertificateOutcome
                 */
                RemoveExternalSAMLIdPCertificateOutcome RemoveExternalSAMLIdPCertificate(const Model::RemoveExternalSAMLIdPCertificateRequest &request);
                void RemoveExternalSAMLIdPCertificateAsync(const Model::RemoveExternalSAMLIdPCertificateRequest& request, const RemoveExternalSAMLIdPCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveExternalSAMLIdPCertificateOutcomeCallable RemoveExternalSAMLIdPCertificateCallable(const Model::RemoveExternalSAMLIdPCertificateRequest& request);

                /**
                 *This API is used to remove policies from permission configurations.
                 * @param req RemovePermissionPolicyFromRoleConfigurationRequest
                 * @return RemovePermissionPolicyFromRoleConfigurationOutcome
                 */
                RemovePermissionPolicyFromRoleConfigurationOutcome RemovePermissionPolicyFromRoleConfiguration(const Model::RemovePermissionPolicyFromRoleConfigurationRequest &request);
                void RemovePermissionPolicyFromRoleConfigurationAsync(const Model::RemovePermissionPolicyFromRoleConfigurationRequest& request, const RemovePermissionPolicyFromRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemovePermissionPolicyFromRoleConfigurationOutcomeCallable RemovePermissionPolicyFromRoleConfigurationCallable(const Model::RemovePermissionPolicyFromRoleConfigurationRequest& request);

                /**
                 *This API is used to removes users from a user group.
                 * @param req RemoveUserFromGroupRequest
                 * @return RemoveUserFromGroupOutcome
                 */
                RemoveUserFromGroupOutcome RemoveUserFromGroup(const Model::RemoveUserFromGroupRequest &request);
                void RemoveUserFromGroupAsync(const Model::RemoveUserFromGroupRequest& request, const RemoveUserFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveUserFromGroupOutcomeCallable RemoveUserFromGroupCallable(const Model::RemoveUserFromGroupRequest& request);

                /**
                 *This API is used to configure the SAML identity provider information.
                 * @param req SetExternalSAMLIdentityProviderRequest
                 * @return SetExternalSAMLIdentityProviderOutcome
                 */
                SetExternalSAMLIdentityProviderOutcome SetExternalSAMLIdentityProvider(const Model::SetExternalSAMLIdentityProviderRequest &request);
                void SetExternalSAMLIdentityProviderAsync(const Model::SetExternalSAMLIdentityProviderRequest& request, const SetExternalSAMLIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetExternalSAMLIdentityProviderOutcomeCallable SetExternalSAMLIdentityProviderCallable(const Model::SetExternalSAMLIdentityProviderRequest& request);

                /**
                 *This API is used to modify a custom policy for permission configurations.
                 * @param req UpdateCustomPolicyForRoleConfigurationRequest
                 * @return UpdateCustomPolicyForRoleConfigurationOutcome
                 */
                UpdateCustomPolicyForRoleConfigurationOutcome UpdateCustomPolicyForRoleConfiguration(const Model::UpdateCustomPolicyForRoleConfigurationRequest &request);
                void UpdateCustomPolicyForRoleConfigurationAsync(const Model::UpdateCustomPolicyForRoleConfigurationRequest& request, const UpdateCustomPolicyForRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCustomPolicyForRoleConfigurationOutcomeCallable UpdateCustomPolicyForRoleConfigurationCallable(const Model::UpdateCustomPolicyForRoleConfigurationRequest& request);

                /**
                 *This API is used to modify user group information.
                 * @param req UpdateGroupRequest
                 * @return UpdateGroupOutcome
                 */
                UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest &request);
                void UpdateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request);

                /**
                 *This API is used to update an organization identity.
                 * @param req UpdateOrganizationIdentityRequest
                 * @return UpdateOrganizationIdentityOutcome
                 */
                UpdateOrganizationIdentityOutcome UpdateOrganizationIdentity(const Model::UpdateOrganizationIdentityRequest &request);
                void UpdateOrganizationIdentityAsync(const Model::UpdateOrganizationIdentityRequest& request, const UpdateOrganizationIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOrganizationIdentityOutcomeCallable UpdateOrganizationIdentityCallable(const Model::UpdateOrganizationIdentityRequest& request);

                /**
                 *This API is used to update organization member information.
                 * @param req UpdateOrganizationMemberRequest
                 * @return UpdateOrganizationMemberOutcome
                 */
                UpdateOrganizationMemberOutcome UpdateOrganizationMember(const Model::UpdateOrganizationMemberRequest &request);
                void UpdateOrganizationMemberAsync(const Model::UpdateOrganizationMemberRequest& request, const UpdateOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOrganizationMemberOutcomeCallable UpdateOrganizationMemberCallable(const Model::UpdateOrganizationMemberRequest& request);

                /**
                 *This API is used to update an organization node.
                 * @param req UpdateOrganizationNodeRequest
                 * @return UpdateOrganizationNodeOutcome
                 */
                UpdateOrganizationNodeOutcome UpdateOrganizationNode(const Model::UpdateOrganizationNodeRequest &request);
                void UpdateOrganizationNodeAsync(const Model::UpdateOrganizationNodeRequest& request, const UpdateOrganizationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOrganizationNodeOutcomeCallable UpdateOrganizationNodeCallable(const Model::UpdateOrganizationNodeRequest& request);

                /**
                 *This API is used to modify the permission configuration information.
                 * @param req UpdateRoleConfigurationRequest
                 * @return UpdateRoleConfigurationOutcome
                 */
                UpdateRoleConfigurationOutcome UpdateRoleConfiguration(const Model::UpdateRoleConfigurationRequest &request);
                void UpdateRoleConfigurationAsync(const Model::UpdateRoleConfigurationRequest& request, const UpdateRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRoleConfigurationOutcomeCallable UpdateRoleConfigurationCallable(const Model::UpdateRoleConfigurationRequest& request);

                /**
                 *This API is used to enable or disable a SCIM key.
                 * @param req UpdateSCIMCredentialStatusRequest
                 * @return UpdateSCIMCredentialStatusOutcome
                 */
                UpdateSCIMCredentialStatusOutcome UpdateSCIMCredentialStatus(const Model::UpdateSCIMCredentialStatusRequest &request);
                void UpdateSCIMCredentialStatusAsync(const Model::UpdateSCIMCredentialStatusRequest& request, const UpdateSCIMCredentialStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSCIMCredentialStatusOutcomeCallable UpdateSCIMCredentialStatusCallable(const Model::UpdateSCIMCredentialStatusRequest& request);

                /**
                 *This API is used to enable or disable user SCIM synchronization.
                 * @param req UpdateSCIMSynchronizationStatusRequest
                 * @return UpdateSCIMSynchronizationStatusOutcome
                 */
                UpdateSCIMSynchronizationStatusOutcome UpdateSCIMSynchronizationStatus(const Model::UpdateSCIMSynchronizationStatusRequest &request);
                void UpdateSCIMSynchronizationStatusAsync(const Model::UpdateSCIMSynchronizationStatusRequest& request, const UpdateSCIMSynchronizationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSCIMSynchronizationStatusOutcomeCallable UpdateSCIMSynchronizationStatusCallable(const Model::UpdateSCIMSynchronizationStatusRequest& request);

                /**
                 *This API is used to modify user information.
                 * @param req UpdateUserRequest
                 * @return UpdateUserOutcome
                 */
                UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest &request);
                void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request);

                /**
                 *This API is used to modify the user status.
                 * @param req UpdateUserStatusRequest
                 * @return UpdateUserStatusOutcome
                 */
                UpdateUserStatusOutcome UpdateUserStatus(const Model::UpdateUserStatusRequest &request);
                void UpdateUserStatusAsync(const Model::UpdateUserStatusRequest& request, const UpdateUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateUserStatusOutcomeCallable UpdateUserStatusCallable(const Model::UpdateUserStatusRequest& request);

                /**
                 *This API is used to create sub-user synchronization tasks.
                 * @param req UpdateUserSyncProvisioningRequest
                 * @return UpdateUserSyncProvisioningOutcome
                 */
                UpdateUserSyncProvisioningOutcome UpdateUserSyncProvisioning(const Model::UpdateUserSyncProvisioningRequest &request);
                void UpdateUserSyncProvisioningAsync(const Model::UpdateUserSyncProvisioningRequest& request, const UpdateUserSyncProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateUserSyncProvisioningOutcomeCallable UpdateUserSyncProvisioningCallable(const Model::UpdateUserSyncProvisioningRequest& request);

                /**
                 *This API is used to update the user's space name.
                 * @param req UpdateZoneRequest
                 * @return UpdateZoneOutcome
                 */
                UpdateZoneOutcome UpdateZone(const Model::UpdateZoneRequest &request);
                void UpdateZoneAsync(const Model::UpdateZoneRequest& request, const UpdateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateZoneOutcomeCallable UpdateZoneCallable(const Model::UpdateZoneRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_ORGANIZATIONCLIENT_H_
