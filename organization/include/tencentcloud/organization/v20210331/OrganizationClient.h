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
#include <tencentcloud/organization/v20210331/model/AddOrganizationNodeRequest.h>
#include <tencentcloud/organization/v20210331/model/AddOrganizationNodeResponse.h>
#include <tencentcloud/organization/v20210331/model/BindOrganizationMemberAuthAccountRequest.h>
#include <tencentcloud/organization/v20210331/model/BindOrganizationMemberAuthAccountResponse.h>
#include <tencentcloud/organization/v20210331/model/CancelOrganizationMemberAuthAccountRequest.h>
#include <tencentcloud/organization/v20210331/model/CancelOrganizationMemberAuthAccountResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrgServiceAssignRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrgServiceAssignResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrgServiceAssignRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrgServiceAssignResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationNodesRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationNodesResponse.h>
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
#include <tencentcloud/organization/v20210331/model/ListOrgServiceAssignMemberRequest.h>
#include <tencentcloud/organization/v20210331/model/ListOrgServiceAssignMemberResponse.h>
#include <tencentcloud/organization/v20210331/model/ListOrganizationIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/ListOrganizationIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/ListOrganizationServiceRequest.h>
#include <tencentcloud/organization/v20210331/model/ListOrganizationServiceResponse.h>
#include <tencentcloud/organization/v20210331/model/MoveOrganizationNodeMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/MoveOrganizationNodeMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationNodeRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationNodeResponse.h>


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

                typedef Outcome<Core::Error, Model::AddOrganizationNodeResponse> AddOrganizationNodeOutcome;
                typedef std::future<AddOrganizationNodeOutcome> AddOrganizationNodeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddOrganizationNodeRequest&, AddOrganizationNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddOrganizationNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::BindOrganizationMemberAuthAccountResponse> BindOrganizationMemberAuthAccountOutcome;
                typedef std::future<BindOrganizationMemberAuthAccountOutcome> BindOrganizationMemberAuthAccountOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::BindOrganizationMemberAuthAccountRequest&, BindOrganizationMemberAuthAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindOrganizationMemberAuthAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelOrganizationMemberAuthAccountResponse> CancelOrganizationMemberAuthAccountOutcome;
                typedef std::future<CancelOrganizationMemberAuthAccountOutcome> CancelOrganizationMemberAuthAccountOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CancelOrganizationMemberAuthAccountRequest&, CancelOrganizationMemberAuthAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelOrganizationMemberAuthAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrgServiceAssignResponse> CreateOrgServiceAssignOutcome;
                typedef std::future<CreateOrgServiceAssignOutcome> CreateOrgServiceAssignOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrgServiceAssignRequest&, CreateOrgServiceAssignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrgServiceAssignAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationMemberResponse> CreateOrganizationMemberOutcome;
                typedef std::future<CreateOrganizationMemberOutcome> CreateOrganizationMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationMemberRequest&, CreateOrganizationMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationMemberPolicyResponse> CreateOrganizationMemberPolicyOutcome;
                typedef std::future<CreateOrganizationMemberPolicyOutcome> CreateOrganizationMemberPolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationMemberPolicyRequest&, CreateOrganizationMemberPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationMemberPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrgServiceAssignResponse> DeleteOrgServiceAssignOutcome;
                typedef std::future<DeleteOrgServiceAssignOutcome> DeleteOrgServiceAssignOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrgServiceAssignRequest&, DeleteOrgServiceAssignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrgServiceAssignAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationMembersResponse> DeleteOrganizationMembersOutcome;
                typedef std::future<DeleteOrganizationMembersOutcome> DeleteOrganizationMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationMembersRequest&, DeleteOrganizationMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationNodesResponse> DeleteOrganizationNodesOutcome;
                typedef std::future<DeleteOrganizationNodesOutcome> DeleteOrganizationNodesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationNodesRequest&, DeleteOrganizationNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationNodesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ListOrgServiceAssignMemberResponse> ListOrgServiceAssignMemberOutcome;
                typedef std::future<ListOrgServiceAssignMemberOutcome> ListOrgServiceAssignMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListOrgServiceAssignMemberRequest&, ListOrgServiceAssignMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOrgServiceAssignMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOrganizationIdentityResponse> ListOrganizationIdentityOutcome;
                typedef std::future<ListOrganizationIdentityOutcome> ListOrganizationIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListOrganizationIdentityRequest&, ListOrganizationIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOrganizationServiceResponse> ListOrganizationServiceOutcome;
                typedef std::future<ListOrganizationServiceOutcome> ListOrganizationServiceOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListOrganizationServiceRequest&, ListOrganizationServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::MoveOrganizationNodeMembersResponse> MoveOrganizationNodeMembersOutcome;
                typedef std::future<MoveOrganizationNodeMembersOutcome> MoveOrganizationNodeMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::MoveOrganizationNodeMembersRequest&, MoveOrganizationNodeMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MoveOrganizationNodeMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationNodeResponse> UpdateOrganizationNodeOutcome;
                typedef std::future<UpdateOrganizationNodeOutcome> UpdateOrganizationNodeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateOrganizationNodeRequest&, UpdateOrganizationNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationNodeAsyncHandler;



                /**
                 *This API is used to add an organization node.
                 * @param req AddOrganizationNodeRequest
                 * @return AddOrganizationNodeOutcome
                 */
                AddOrganizationNodeOutcome AddOrganizationNode(const Model::AddOrganizationNodeRequest &request);
                void AddOrganizationNodeAsync(const Model::AddOrganizationNodeRequest& request, const AddOrganizationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddOrganizationNodeOutcomeCallable AddOrganizationNodeCallable(const Model::AddOrganizationNodeRequest& request);

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
                 *This API is used to add a delegated admin of the organization service.
                 * @param req CreateOrgServiceAssignRequest
                 * @return CreateOrgServiceAssignOutcome
                 */
                CreateOrgServiceAssignOutcome CreateOrgServiceAssign(const Model::CreateOrgServiceAssignRequest &request);
                void CreateOrgServiceAssignAsync(const Model::CreateOrgServiceAssignRequest& request, const CreateOrgServiceAssignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrgServiceAssignOutcomeCallable CreateOrgServiceAssignCallable(const Model::CreateOrgServiceAssignRequest& request);

                /**
                 *This API is used to create an organization member.
                 * @param req CreateOrganizationMemberRequest
                 * @return CreateOrganizationMemberOutcome
                 */
                CreateOrganizationMemberOutcome CreateOrganizationMember(const Model::CreateOrganizationMemberRequest &request);
                void CreateOrganizationMemberAsync(const Model::CreateOrganizationMemberRequest& request, const CreateOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationMemberOutcomeCallable CreateOrganizationMemberCallable(const Model::CreateOrganizationMemberRequest& request);

                /**
                 *This API is used to create an organization member access policy.
                 * @param req CreateOrganizationMemberPolicyRequest
                 * @return CreateOrganizationMemberPolicyOutcome
                 */
                CreateOrganizationMemberPolicyOutcome CreateOrganizationMemberPolicy(const Model::CreateOrganizationMemberPolicyRequest &request);
                void CreateOrganizationMemberPolicyAsync(const Model::CreateOrganizationMemberPolicyRequest& request, const CreateOrganizationMemberPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationMemberPolicyOutcomeCallable CreateOrganizationMemberPolicyCallable(const Model::CreateOrganizationMemberPolicyRequest& request);

                /**
                 *This API is used to delete a delegated admin of the organization service.
                 * @param req DeleteOrgServiceAssignRequest
                 * @return DeleteOrgServiceAssignOutcome
                 */
                DeleteOrgServiceAssignOutcome DeleteOrgServiceAssign(const Model::DeleteOrgServiceAssignRequest &request);
                void DeleteOrgServiceAssignAsync(const Model::DeleteOrgServiceAssignRequest& request, const DeleteOrgServiceAssignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrgServiceAssignOutcomeCallable DeleteOrgServiceAssignCallable(const Model::DeleteOrgServiceAssignRequest& request);

                /**
                 *This API is used to batch delete organization members.
                 * @param req DeleteOrganizationMembersRequest
                 * @return DeleteOrganizationMembersOutcome
                 */
                DeleteOrganizationMembersOutcome DeleteOrganizationMembers(const Model::DeleteOrganizationMembersRequest &request);
                void DeleteOrganizationMembersAsync(const Model::DeleteOrganizationMembersRequest& request, const DeleteOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationMembersOutcomeCallable DeleteOrganizationMembersCallable(const Model::DeleteOrganizationMembersRequest& request);

                /**
                 *This API is used to batch delete organization nodes.
                 * @param req DeleteOrganizationNodesRequest
                 * @return DeleteOrganizationNodesOutcome
                 */
                DeleteOrganizationNodesOutcome DeleteOrganizationNodes(const Model::DeleteOrganizationNodesRequest &request);
                void DeleteOrganizationNodesAsync(const Model::DeleteOrganizationNodesRequest& request, const DeleteOrganizationNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationNodesOutcomeCallable DeleteOrganizationNodesCallable(const Model::DeleteOrganizationNodesRequest& request);

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
                 *This API is used to get the list of manageable identities of an organization member.
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
                 *This API is used to move a member to the specified organization node.
                 * @param req MoveOrganizationNodeMembersRequest
                 * @return MoveOrganizationNodeMembersOutcome
                 */
                MoveOrganizationNodeMembersOutcome MoveOrganizationNodeMembers(const Model::MoveOrganizationNodeMembersRequest &request);
                void MoveOrganizationNodeMembersAsync(const Model::MoveOrganizationNodeMembersRequest& request, const MoveOrganizationNodeMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MoveOrganizationNodeMembersOutcomeCallable MoveOrganizationNodeMembersCallable(const Model::MoveOrganizationNodeMembersRequest& request);

                /**
                 *This API is used to update an organization node.
                 * @param req UpdateOrganizationNodeRequest
                 * @return UpdateOrganizationNodeOutcome
                 */
                UpdateOrganizationNodeOutcome UpdateOrganizationNode(const Model::UpdateOrganizationNodeRequest &request);
                void UpdateOrganizationNodeAsync(const Model::UpdateOrganizationNodeRequest& request, const UpdateOrganizationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOrganizationNodeOutcomeCallable UpdateOrganizationNodeCallable(const Model::UpdateOrganizationNodeRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_ORGANIZATIONCLIENT_H_
