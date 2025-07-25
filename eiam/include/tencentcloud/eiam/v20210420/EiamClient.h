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

#ifndef TENCENTCLOUD_EIAM_V20210420_EIAMCLIENT_H_
#define TENCENTCLOUD_EIAM_V20210420_EIAMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/eiam/v20210420/model/AddAccountToAccountGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/AddAccountToAccountGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/AddUserToUserGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/AddUserToUserGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/CreateAccountGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/CreateAccountGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/CreateAppAccountRequest.h>
#include <tencentcloud/eiam/v20210420/model/CreateAppAccountResponse.h>
#include <tencentcloud/eiam/v20210420/model/CreateOrgNodeRequest.h>
#include <tencentcloud/eiam/v20210420/model/CreateOrgNodeResponse.h>
#include <tencentcloud/eiam/v20210420/model/CreateUserRequest.h>
#include <tencentcloud/eiam/v20210420/model/CreateUserResponse.h>
#include <tencentcloud/eiam/v20210420/model/CreateUserGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/CreateUserGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/DeleteAccountGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/DeleteAccountGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/DeleteAppAccountRequest.h>
#include <tencentcloud/eiam/v20210420/model/DeleteAppAccountResponse.h>
#include <tencentcloud/eiam/v20210420/model/DeleteOrgNodeRequest.h>
#include <tencentcloud/eiam/v20210420/model/DeleteOrgNodeResponse.h>
#include <tencentcloud/eiam/v20210420/model/DeleteUserRequest.h>
#include <tencentcloud/eiam/v20210420/model/DeleteUserResponse.h>
#include <tencentcloud/eiam/v20210420/model/DeleteUserGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/DeleteUserGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/DeleteUsersRequest.h>
#include <tencentcloud/eiam/v20210420/model/DeleteUsersResponse.h>
#include <tencentcloud/eiam/v20210420/model/DescribeAccountGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/DescribeAccountGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/DescribeAppAccountRequest.h>
#include <tencentcloud/eiam/v20210420/model/DescribeAppAccountResponse.h>
#include <tencentcloud/eiam/v20210420/model/DescribeApplicationRequest.h>
#include <tencentcloud/eiam/v20210420/model/DescribeApplicationResponse.h>
#include <tencentcloud/eiam/v20210420/model/DescribeOrgNodeRequest.h>
#include <tencentcloud/eiam/v20210420/model/DescribeOrgNodeResponse.h>
#include <tencentcloud/eiam/v20210420/model/DescribePublicKeyRequest.h>
#include <tencentcloud/eiam/v20210420/model/DescribePublicKeyResponse.h>
#include <tencentcloud/eiam/v20210420/model/DescribeUserGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/DescribeUserGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/DescribeUserInfoRequest.h>
#include <tencentcloud/eiam/v20210420/model/DescribeUserInfoResponse.h>
#include <tencentcloud/eiam/v20210420/model/DescribeUserResourcesAuthorizationRequest.h>
#include <tencentcloud/eiam/v20210420/model/DescribeUserResourcesAuthorizationResponse.h>
#include <tencentcloud/eiam/v20210420/model/DescribeUserThirdPartyAccountInfoRequest.h>
#include <tencentcloud/eiam/v20210420/model/DescribeUserThirdPartyAccountInfoResponse.h>
#include <tencentcloud/eiam/v20210420/model/ListAccountInAccountGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/ListAccountInAccountGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/ListApplicationAuthorizationsRequest.h>
#include <tencentcloud/eiam/v20210420/model/ListApplicationAuthorizationsResponse.h>
#include <tencentcloud/eiam/v20210420/model/ListApplicationsRequest.h>
#include <tencentcloud/eiam/v20210420/model/ListApplicationsResponse.h>
#include <tencentcloud/eiam/v20210420/model/ListAuthorizedApplicationsToOrgNodeRequest.h>
#include <tencentcloud/eiam/v20210420/model/ListAuthorizedApplicationsToOrgNodeResponse.h>
#include <tencentcloud/eiam/v20210420/model/ListAuthorizedApplicationsToUserRequest.h>
#include <tencentcloud/eiam/v20210420/model/ListAuthorizedApplicationsToUserResponse.h>
#include <tencentcloud/eiam/v20210420/model/ListAuthorizedApplicationsToUserGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/ListAuthorizedApplicationsToUserGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/ListUserGroupsRequest.h>
#include <tencentcloud/eiam/v20210420/model/ListUserGroupsResponse.h>
#include <tencentcloud/eiam/v20210420/model/ListUserGroupsOfUserRequest.h>
#include <tencentcloud/eiam/v20210420/model/ListUserGroupsOfUserResponse.h>
#include <tencentcloud/eiam/v20210420/model/ListUsersRequest.h>
#include <tencentcloud/eiam/v20210420/model/ListUsersResponse.h>
#include <tencentcloud/eiam/v20210420/model/ListUsersInOrgNodeRequest.h>
#include <tencentcloud/eiam/v20210420/model/ListUsersInOrgNodeResponse.h>
#include <tencentcloud/eiam/v20210420/model/ListUsersInUserGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/ListUsersInUserGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/ModifyAccountGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/ModifyAccountGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/ModifyAppAccountRequest.h>
#include <tencentcloud/eiam/v20210420/model/ModifyAppAccountResponse.h>
#include <tencentcloud/eiam/v20210420/model/ModifyApplicationRequest.h>
#include <tencentcloud/eiam/v20210420/model/ModifyApplicationResponse.h>
#include <tencentcloud/eiam/v20210420/model/ModifyUserInfoRequest.h>
#include <tencentcloud/eiam/v20210420/model/ModifyUserInfoResponse.h>
#include <tencentcloud/eiam/v20210420/model/RemoveAccountFromAccountGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/RemoveAccountFromAccountGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/RemoveUserFromUserGroupRequest.h>
#include <tencentcloud/eiam/v20210420/model/RemoveUserFromUserGroupResponse.h>
#include <tencentcloud/eiam/v20210420/model/UpdateOrgNodeRequest.h>
#include <tencentcloud/eiam/v20210420/model/UpdateOrgNodeResponse.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            class EiamClient : public AbstractClient
            {
            public:
                EiamClient(const Credential &credential, const std::string &region);
                EiamClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddAccountToAccountGroupResponse> AddAccountToAccountGroupOutcome;
                typedef std::future<AddAccountToAccountGroupOutcome> AddAccountToAccountGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::AddAccountToAccountGroupRequest&, AddAccountToAccountGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddAccountToAccountGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::AddUserToUserGroupResponse> AddUserToUserGroupOutcome;
                typedef std::future<AddUserToUserGroupOutcome> AddUserToUserGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::AddUserToUserGroupRequest&, AddUserToUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUserToUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccountGroupResponse> CreateAccountGroupOutcome;
                typedef std::future<CreateAccountGroupOutcome> CreateAccountGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::CreateAccountGroupRequest&, CreateAccountGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAppAccountResponse> CreateAppAccountOutcome;
                typedef std::future<CreateAppAccountOutcome> CreateAppAccountOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::CreateAppAccountRequest&, CreateAppAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrgNodeResponse> CreateOrgNodeOutcome;
                typedef std::future<CreateOrgNodeOutcome> CreateOrgNodeOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::CreateOrgNodeRequest&, CreateOrgNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrgNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserGroupResponse> CreateUserGroupOutcome;
                typedef std::future<CreateUserGroupOutcome> CreateUserGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::CreateUserGroupRequest&, CreateUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccountGroupResponse> DeleteAccountGroupOutcome;
                typedef std::future<DeleteAccountGroupOutcome> DeleteAccountGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DeleteAccountGroupRequest&, DeleteAccountGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAppAccountResponse> DeleteAppAccountOutcome;
                typedef std::future<DeleteAppAccountOutcome> DeleteAppAccountOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DeleteAppAccountRequest&, DeleteAppAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrgNodeResponse> DeleteOrgNodeOutcome;
                typedef std::future<DeleteOrgNodeOutcome> DeleteOrgNodeOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DeleteOrgNodeRequest&, DeleteOrgNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrgNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserGroupResponse> DeleteUserGroupOutcome;
                typedef std::future<DeleteUserGroupOutcome> DeleteUserGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DeleteUserGroupRequest&, DeleteUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUsersResponse> DeleteUsersOutcome;
                typedef std::future<DeleteUsersOutcome> DeleteUsersOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DeleteUsersRequest&, DeleteUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountGroupResponse> DescribeAccountGroupOutcome;
                typedef std::future<DescribeAccountGroupOutcome> DescribeAccountGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DescribeAccountGroupRequest&, DescribeAccountGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppAccountResponse> DescribeAppAccountOutcome;
                typedef std::future<DescribeAppAccountOutcome> DescribeAppAccountOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DescribeAppAccountRequest&, DescribeAppAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationResponse> DescribeApplicationOutcome;
                typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DescribeApplicationRequest&, DescribeApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrgNodeResponse> DescribeOrgNodeOutcome;
                typedef std::future<DescribeOrgNodeOutcome> DescribeOrgNodeOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DescribeOrgNodeRequest&, DescribeOrgNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrgNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicKeyResponse> DescribePublicKeyOutcome;
                typedef std::future<DescribePublicKeyOutcome> DescribePublicKeyOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DescribePublicKeyRequest&, DescribePublicKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserGroupResponse> DescribeUserGroupOutcome;
                typedef std::future<DescribeUserGroupOutcome> DescribeUserGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DescribeUserGroupRequest&, DescribeUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserInfoResponse> DescribeUserInfoOutcome;
                typedef std::future<DescribeUserInfoOutcome> DescribeUserInfoOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DescribeUserInfoRequest&, DescribeUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserResourcesAuthorizationResponse> DescribeUserResourcesAuthorizationOutcome;
                typedef std::future<DescribeUserResourcesAuthorizationOutcome> DescribeUserResourcesAuthorizationOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DescribeUserResourcesAuthorizationRequest&, DescribeUserResourcesAuthorizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserResourcesAuthorizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserThirdPartyAccountInfoResponse> DescribeUserThirdPartyAccountInfoOutcome;
                typedef std::future<DescribeUserThirdPartyAccountInfoOutcome> DescribeUserThirdPartyAccountInfoOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::DescribeUserThirdPartyAccountInfoRequest&, DescribeUserThirdPartyAccountInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserThirdPartyAccountInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAccountInAccountGroupResponse> ListAccountInAccountGroupOutcome;
                typedef std::future<ListAccountInAccountGroupOutcome> ListAccountInAccountGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ListAccountInAccountGroupRequest&, ListAccountInAccountGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAccountInAccountGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ListApplicationAuthorizationsResponse> ListApplicationAuthorizationsOutcome;
                typedef std::future<ListApplicationAuthorizationsOutcome> ListApplicationAuthorizationsOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ListApplicationAuthorizationsRequest&, ListApplicationAuthorizationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationAuthorizationsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListApplicationsResponse> ListApplicationsOutcome;
                typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ListApplicationsRequest&, ListApplicationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAuthorizedApplicationsToOrgNodeResponse> ListAuthorizedApplicationsToOrgNodeOutcome;
                typedef std::future<ListAuthorizedApplicationsToOrgNodeOutcome> ListAuthorizedApplicationsToOrgNodeOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ListAuthorizedApplicationsToOrgNodeRequest&, ListAuthorizedApplicationsToOrgNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAuthorizedApplicationsToOrgNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAuthorizedApplicationsToUserResponse> ListAuthorizedApplicationsToUserOutcome;
                typedef std::future<ListAuthorizedApplicationsToUserOutcome> ListAuthorizedApplicationsToUserOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ListAuthorizedApplicationsToUserRequest&, ListAuthorizedApplicationsToUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAuthorizedApplicationsToUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAuthorizedApplicationsToUserGroupResponse> ListAuthorizedApplicationsToUserGroupOutcome;
                typedef std::future<ListAuthorizedApplicationsToUserGroupOutcome> ListAuthorizedApplicationsToUserGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ListAuthorizedApplicationsToUserGroupRequest&, ListAuthorizedApplicationsToUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAuthorizedApplicationsToUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUserGroupsResponse> ListUserGroupsOutcome;
                typedef std::future<ListUserGroupsOutcome> ListUserGroupsOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ListUserGroupsRequest&, ListUserGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUserGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUserGroupsOfUserResponse> ListUserGroupsOfUserOutcome;
                typedef std::future<ListUserGroupsOfUserOutcome> ListUserGroupsOfUserOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ListUserGroupsOfUserRequest&, ListUserGroupsOfUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUserGroupsOfUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUsersResponse> ListUsersOutcome;
                typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ListUsersRequest&, ListUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUsersInOrgNodeResponse> ListUsersInOrgNodeOutcome;
                typedef std::future<ListUsersInOrgNodeOutcome> ListUsersInOrgNodeOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ListUsersInOrgNodeRequest&, ListUsersInOrgNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersInOrgNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUsersInUserGroupResponse> ListUsersInUserGroupOutcome;
                typedef std::future<ListUsersInUserGroupOutcome> ListUsersInUserGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ListUsersInUserGroupRequest&, ListUsersInUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersInUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountGroupResponse> ModifyAccountGroupOutcome;
                typedef std::future<ModifyAccountGroupOutcome> ModifyAccountGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ModifyAccountGroupRequest&, ModifyAccountGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAppAccountResponse> ModifyAppAccountOutcome;
                typedef std::future<ModifyAppAccountOutcome> ModifyAppAccountOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ModifyAppAccountRequest&, ModifyAppAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationResponse> ModifyApplicationOutcome;
                typedef std::future<ModifyApplicationOutcome> ModifyApplicationOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ModifyApplicationRequest&, ModifyApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserInfoResponse> ModifyUserInfoOutcome;
                typedef std::future<ModifyUserInfoOutcome> ModifyUserInfoOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::ModifyUserInfoRequest&, ModifyUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveAccountFromAccountGroupResponse> RemoveAccountFromAccountGroupOutcome;
                typedef std::future<RemoveAccountFromAccountGroupOutcome> RemoveAccountFromAccountGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::RemoveAccountFromAccountGroupRequest&, RemoveAccountFromAccountGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveAccountFromAccountGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveUserFromUserGroupResponse> RemoveUserFromUserGroupOutcome;
                typedef std::future<RemoveUserFromUserGroupOutcome> RemoveUserFromUserGroupOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::RemoveUserFromUserGroupRequest&, RemoveUserFromUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserFromUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrgNodeResponse> UpdateOrgNodeOutcome;
                typedef std::future<UpdateOrgNodeOutcome> UpdateOrgNodeOutcomeCallable;
                typedef std::function<void(const EiamClient*, const Model::UpdateOrgNodeRequest&, UpdateOrgNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrgNodeAsyncHandler;



                /**
                 *This API is used to add an account to an account group.
                 * @param req AddAccountToAccountGroupRequest
                 * @return AddAccountToAccountGroupOutcome
                 */
                AddAccountToAccountGroupOutcome AddAccountToAccountGroup(const Model::AddAccountToAccountGroupRequest &request);
                void AddAccountToAccountGroupAsync(const Model::AddAccountToAccountGroupRequest& request, const AddAccountToAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddAccountToAccountGroupOutcomeCallable AddAccountToAccountGroupCallable(const Model::AddAccountToAccountGroupRequest& request);

                /**
                 *This API is used to add a user to a user group.
                 * @param req AddUserToUserGroupRequest
                 * @return AddUserToUserGroupOutcome
                 */
                AddUserToUserGroupOutcome AddUserToUserGroup(const Model::AddUserToUserGroupRequest &request);
                void AddUserToUserGroupAsync(const Model::AddUserToUserGroupRequest& request, const AddUserToUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUserToUserGroupOutcomeCallable AddUserToUserGroupCallable(const Model::AddUserToUserGroupRequest& request);

                /**
                 *This API is used to create an account group.
                 * @param req CreateAccountGroupRequest
                 * @return CreateAccountGroupOutcome
                 */
                CreateAccountGroupOutcome CreateAccountGroup(const Model::CreateAccountGroupRequest &request);
                void CreateAccountGroupAsync(const Model::CreateAccountGroupRequest& request, const CreateAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccountGroupOutcomeCallable CreateAccountGroupCallable(const Model::CreateAccountGroupRequest& request);

                /**
                 *This API is used to create an application account.
                 * @param req CreateAppAccountRequest
                 * @return CreateAppAccountOutcome
                 */
                CreateAppAccountOutcome CreateAppAccount(const Model::CreateAppAccountRequest &request);
                void CreateAppAccountAsync(const Model::CreateAppAccountRequest& request, const CreateAppAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAppAccountOutcomeCallable CreateAppAccountCallable(const Model::CreateAppAccountRequest& request);

                /**
                 *This API is used to create an organization node.
                 * @param req CreateOrgNodeRequest
                 * @return CreateOrgNodeOutcome
                 */
                CreateOrgNodeOutcome CreateOrgNode(const Model::CreateOrgNodeRequest &request);
                void CreateOrgNodeAsync(const Model::CreateOrgNodeRequest& request, const CreateOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrgNodeOutcomeCallable CreateOrgNodeCallable(const Model::CreateOrgNodeRequest& request);

                /**
                 *This API is used to create a user.
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *This API is used to create a user group.
                 * @param req CreateUserGroupRequest
                 * @return CreateUserGroupOutcome
                 */
                CreateUserGroupOutcome CreateUserGroup(const Model::CreateUserGroupRequest &request);
                void CreateUserGroupAsync(const Model::CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserGroupOutcomeCallable CreateUserGroupCallable(const Model::CreateUserGroupRequest& request);

                /**
                 *This API is used to delete an account group.
                 * @param req DeleteAccountGroupRequest
                 * @return DeleteAccountGroupOutcome
                 */
                DeleteAccountGroupOutcome DeleteAccountGroup(const Model::DeleteAccountGroupRequest &request);
                void DeleteAccountGroupAsync(const Model::DeleteAccountGroupRequest& request, const DeleteAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccountGroupOutcomeCallable DeleteAccountGroupCallable(const Model::DeleteAccountGroupRequest& request);

                /**
                 *This API is used to delete an application account.
                 * @param req DeleteAppAccountRequest
                 * @return DeleteAppAccountOutcome
                 */
                DeleteAppAccountOutcome DeleteAppAccount(const Model::DeleteAppAccountRequest &request);
                void DeleteAppAccountAsync(const Model::DeleteAppAccountRequest& request, const DeleteAppAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAppAccountOutcomeCallable DeleteAppAccountCallable(const Model::DeleteAppAccountRequest& request);

                /**
                 *This API is used to delete an organization node.
                 * @param req DeleteOrgNodeRequest
                 * @return DeleteOrgNodeOutcome
                 */
                DeleteOrgNodeOutcome DeleteOrgNode(const Model::DeleteOrgNodeRequest &request);
                void DeleteOrgNodeAsync(const Model::DeleteOrgNodeRequest& request, const DeleteOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrgNodeOutcomeCallable DeleteOrgNodeCallable(const Model::DeleteOrgNodeRequest& request);

                /**
                 *This API is used to delete a user by username or user ID.
                 * @param req DeleteUserRequest
                 * @return DeleteUserOutcome
                 */
                DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest &request);
                void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request);

                /**
                 *This API is used to delete a user group.
                 * @param req DeleteUserGroupRequest
                 * @return DeleteUserGroupOutcome
                 */
                DeleteUserGroupOutcome DeleteUserGroup(const Model::DeleteUserGroupRequest &request);
                void DeleteUserGroupAsync(const Model::DeleteUserGroupRequest& request, const DeleteUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserGroupOutcomeCallable DeleteUserGroupCallable(const Model::DeleteUserGroupRequest& request);

                /**
                 *This API is used to batch delete the users under the current node. If an error occurs when a user is deleted, the deletion of other selected users will not be affected, and the username/ID of the user who fails to be deleted will be prompted.
                 * @param req DeleteUsersRequest
                 * @return DeleteUsersOutcome
                 */
                DeleteUsersOutcome DeleteUsers(const Model::DeleteUsersRequest &request);
                void DeleteUsersAsync(const Model::DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUsersOutcomeCallable DeleteUsersCallable(const Model::DeleteUsersRequest& request);

                /**
                 *This API is used to query the list of account groups.
                 * @param req DescribeAccountGroupRequest
                 * @return DescribeAccountGroupOutcome
                 */
                DescribeAccountGroupOutcome DescribeAccountGroup(const Model::DescribeAccountGroupRequest &request);
                void DescribeAccountGroupAsync(const Model::DescribeAccountGroupRequest& request, const DescribeAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountGroupOutcomeCallable DescribeAccountGroupCallable(const Model::DescribeAccountGroupRequest& request);

                /**
                 *This API is used to query the list of application accounts.
                 * @param req DescribeAppAccountRequest
                 * @return DescribeAppAccountOutcome
                 */
                DescribeAppAccountOutcome DescribeAppAccount(const Model::DescribeAppAccountRequest &request);
                void DescribeAppAccountAsync(const Model::DescribeAppAccountRequest& request, const DescribeAppAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppAccountOutcomeCallable DescribeAppAccountCallable(const Model::DescribeAppAccountRequest& request);

                /**
                 *This API is used to get the information of an application.
                 * @param req DescribeApplicationRequest
                 * @return DescribeApplicationOutcome
                 */
                DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest &request);
                void DescribeApplicationAsync(const Model::DescribeApplicationRequest& request, const DescribeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationOutcomeCallable DescribeApplicationCallable(const Model::DescribeApplicationRequest& request);

                /**
                 *This API is used to read the information of an organization node by organization node ID.
                 * @param req DescribeOrgNodeRequest
                 * @return DescribeOrgNodeOutcome
                 */
                DescribeOrgNodeOutcome DescribeOrgNode(const Model::DescribeOrgNodeRequest &request);
                void DescribeOrgNodeAsync(const Model::DescribeOrgNodeRequest& request, const DescribeOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrgNodeOutcomeCallable DescribeOrgNodeCallable(const Model::DescribeOrgNodeRequest& request);

                /**
                 *This API is used to get the information of a JWT public key.
                 * @param req DescribePublicKeyRequest
                 * @return DescribePublicKeyOutcome
                 */
                DescribePublicKeyOutcome DescribePublicKey(const Model::DescribePublicKeyRequest &request);
                void DescribePublicKeyAsync(const Model::DescribePublicKeyRequest& request, const DescribePublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicKeyOutcomeCallable DescribePublicKeyCallable(const Model::DescribePublicKeyRequest& request);

                /**
                 *This API is used to get the information of a user group.
                 * @param req DescribeUserGroupRequest
                 * @return DescribeUserGroupOutcome
                 */
                DescribeUserGroupOutcome DescribeUserGroup(const Model::DescribeUserGroupRequest &request);
                void DescribeUserGroupAsync(const Model::DescribeUserGroupRequest& request, const DescribeUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserGroupOutcomeCallable DescribeUserGroupCallable(const Model::DescribeUserGroupRequest& request);

                /**
                 *This API is used to search for a user by username or user ID.
                 * @param req DescribeUserInfoRequest
                 * @return DescribeUserInfoOutcome
                 */
                DescribeUserInfoOutcome DescribeUserInfo(const Model::DescribeUserInfoRequest &request);
                void DescribeUserInfoAsync(const Model::DescribeUserInfoRequest& request, const DescribeUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserInfoOutcomeCallable DescribeUserInfoCallable(const Model::DescribeUserInfoRequest& request);

                /**
                 *This API is used to query the list of resource authorizations under the specified user.
                 * @param req DescribeUserResourcesAuthorizationRequest
                 * @return DescribeUserResourcesAuthorizationOutcome
                 */
                DescribeUserResourcesAuthorizationOutcome DescribeUserResourcesAuthorization(const Model::DescribeUserResourcesAuthorizationRequest &request);
                void DescribeUserResourcesAuthorizationAsync(const Model::DescribeUserResourcesAuthorizationRequest& request, const DescribeUserResourcesAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserResourcesAuthorizationOutcomeCallable DescribeUserResourcesAuthorizationCallable(const Model::DescribeUserResourcesAuthorizationRequest& request);

                /**
                 *This API is used to get the third-party account binding information by username or user ID.
                 * @param req DescribeUserThirdPartyAccountInfoRequest
                 * @return DescribeUserThirdPartyAccountInfoOutcome
                 */
                DescribeUserThirdPartyAccountInfoOutcome DescribeUserThirdPartyAccountInfo(const Model::DescribeUserThirdPartyAccountInfoRequest &request);
                void DescribeUserThirdPartyAccountInfoAsync(const Model::DescribeUserThirdPartyAccountInfoRequest& request, const DescribeUserThirdPartyAccountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserThirdPartyAccountInfoOutcomeCallable DescribeUserThirdPartyAccountInfoCallable(const Model::DescribeUserThirdPartyAccountInfoRequest& request);

                /**
                 * This API is used to get the list of accounts in an account group.
                 * @param req ListAccountInAccountGroupRequest
                 * @return ListAccountInAccountGroupOutcome
                 */
                ListAccountInAccountGroupOutcome ListAccountInAccountGroup(const Model::ListAccountInAccountGroupRequest &request);
                void ListAccountInAccountGroupAsync(const Model::ListAccountInAccountGroupRequest& request, const ListAccountInAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAccountInAccountGroupOutcomeCallable ListAccountInAccountGroupCallable(const Model::ListAccountInAccountGroupRequest& request);

                /**
                 *This API is used to get the list of authorization relationships of an application (including search criteria-based match).
                 * @param req ListApplicationAuthorizationsRequest
                 * @return ListApplicationAuthorizationsOutcome
                 */
                ListApplicationAuthorizationsOutcome ListApplicationAuthorizations(const Model::ListApplicationAuthorizationsRequest &request);
                void ListApplicationAuthorizationsAsync(const Model::ListApplicationAuthorizationsRequest& request, const ListApplicationAuthorizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListApplicationAuthorizationsOutcomeCallable ListApplicationAuthorizationsCallable(const Model::ListApplicationAuthorizationsRequest& request);

                /**
                 *This API is used to get the list of applications.
                 * @param req ListApplicationsRequest
                 * @return ListApplicationsOutcome
                 */
                ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest &request);
                void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request);

                /**
                 *This API is used to get the list of accessible applications by organization node ID.
                 * @param req ListAuthorizedApplicationsToOrgNodeRequest
                 * @return ListAuthorizedApplicationsToOrgNodeOutcome
                 */
                ListAuthorizedApplicationsToOrgNodeOutcome ListAuthorizedApplicationsToOrgNode(const Model::ListAuthorizedApplicationsToOrgNodeRequest &request);
                void ListAuthorizedApplicationsToOrgNodeAsync(const Model::ListAuthorizedApplicationsToOrgNodeRequest& request, const ListAuthorizedApplicationsToOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAuthorizedApplicationsToOrgNodeOutcomeCallable ListAuthorizedApplicationsToOrgNodeCallable(const Model::ListAuthorizedApplicationsToOrgNodeRequest& request);

                /**
                 *This API is used to get the list of accessible applications by user ID.
                 * @param req ListAuthorizedApplicationsToUserRequest
                 * @return ListAuthorizedApplicationsToUserOutcome
                 */
                ListAuthorizedApplicationsToUserOutcome ListAuthorizedApplicationsToUser(const Model::ListAuthorizedApplicationsToUserRequest &request);
                void ListAuthorizedApplicationsToUserAsync(const Model::ListAuthorizedApplicationsToUserRequest& request, const ListAuthorizedApplicationsToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAuthorizedApplicationsToUserOutcomeCallable ListAuthorizedApplicationsToUserCallable(const Model::ListAuthorizedApplicationsToUserRequest& request);

                /**
                 *This API is used to get the list of accessible applications by user group ID.
                 * @param req ListAuthorizedApplicationsToUserGroupRequest
                 * @return ListAuthorizedApplicationsToUserGroupOutcome
                 */
                ListAuthorizedApplicationsToUserGroupOutcome ListAuthorizedApplicationsToUserGroup(const Model::ListAuthorizedApplicationsToUserGroupRequest &request);
                void ListAuthorizedApplicationsToUserGroupAsync(const Model::ListAuthorizedApplicationsToUserGroupRequest& request, const ListAuthorizedApplicationsToUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAuthorizedApplicationsToUserGroupOutcomeCallable ListAuthorizedApplicationsToUserGroupCallable(const Model::ListAuthorizedApplicationsToUserGroupRequest& request);

                /**
                 *This API is used to get the information of the user group list (including query conditions).
                 * @param req ListUserGroupsRequest
                 * @return ListUserGroupsOutcome
                 */
                ListUserGroupsOutcome ListUserGroups(const Model::ListUserGroupsRequest &request);
                void ListUserGroupsAsync(const Model::ListUserGroupsRequest& request, const ListUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUserGroupsOutcomeCallable ListUserGroupsCallable(const Model::ListUserGroupsRequest& request);

                /**
                 *This API is used to get the list of a user's user groups.
                 * @param req ListUserGroupsOfUserRequest
                 * @return ListUserGroupsOfUserOutcome
                 */
                ListUserGroupsOfUserOutcome ListUserGroupsOfUser(const Model::ListUserGroupsOfUserRequest &request);
                void ListUserGroupsOfUserAsync(const Model::ListUserGroupsOfUserRequest& request, const ListUserGroupsOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUserGroupsOfUserOutcomeCallable ListUserGroupsOfUserCallable(const Model::ListUserGroupsOfUserRequest& request);

                /**
                 *This API is used to get the information of the user list.
                 * @param req ListUsersRequest
                 * @return ListUsersOutcome
                 */
                ListUsersOutcome ListUsers(const Model::ListUsersRequest &request);
                void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request);

                /**
                 *This API is used to read the users under an organization node by organization node ID.
                 * @param req ListUsersInOrgNodeRequest
                 * @return ListUsersInOrgNodeOutcome
                 */
                ListUsersInOrgNodeOutcome ListUsersInOrgNode(const Model::ListUsersInOrgNodeRequest &request);
                void ListUsersInOrgNodeAsync(const Model::ListUsersInOrgNodeRequest& request, const ListUsersInOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUsersInOrgNodeOutcomeCallable ListUsersInOrgNodeCallable(const Model::ListUsersInOrgNodeRequest& request);

                /**
                 *This API is used to get the list of the users in a user group.
                 * @param req ListUsersInUserGroupRequest
                 * @return ListUsersInUserGroupOutcome
                 */
                ListUsersInUserGroupOutcome ListUsersInUserGroup(const Model::ListUsersInUserGroupRequest &request);
                void ListUsersInUserGroupAsync(const Model::ListUsersInUserGroupRequest& request, const ListUsersInUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUsersInUserGroupOutcomeCallable ListUsersInUserGroupCallable(const Model::ListUsersInUserGroupRequest& request);

                /**
                 *This API is used to modify an account group.
                 * @param req ModifyAccountGroupRequest
                 * @return ModifyAccountGroupOutcome
                 */
                ModifyAccountGroupOutcome ModifyAccountGroup(const Model::ModifyAccountGroupRequest &request);
                void ModifyAccountGroupAsync(const Model::ModifyAccountGroupRequest& request, const ModifyAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountGroupOutcomeCallable ModifyAccountGroupCallable(const Model::ModifyAccountGroupRequest& request);

                /**
                 *This API is used to modify an application account.
                 * @param req ModifyAppAccountRequest
                 * @return ModifyAppAccountOutcome
                 */
                ModifyAppAccountOutcome ModifyAppAccount(const Model::ModifyAppAccountRequest &request);
                void ModifyAppAccountAsync(const Model::ModifyAppAccountRequest& request, const ModifyAppAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAppAccountOutcomeCallable ModifyAppAccountCallable(const Model::ModifyAppAccountRequest& request);

                /**
                 *This API is used to update the information of an application.
                 * @param req ModifyApplicationRequest
                 * @return ModifyApplicationOutcome
                 */
                ModifyApplicationOutcome ModifyApplication(const Model::ModifyApplicationRequest &request);
                void ModifyApplicationAsync(const Model::ModifyApplicationRequest& request, const ModifyApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationOutcomeCallable ModifyApplicationCallable(const Model::ModifyApplicationRequest& request);

                /**
                 *This API is used to modify the information of a user by username or user ID.
                 * @param req ModifyUserInfoRequest
                 * @return ModifyUserInfoOutcome
                 */
                ModifyUserInfoOutcome ModifyUserInfo(const Model::ModifyUserInfoRequest &request);
                void ModifyUserInfoAsync(const Model::ModifyUserInfoRequest& request, const ModifyUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserInfoOutcomeCallable ModifyUserInfoCallable(const Model::ModifyUserInfoRequest& request);

                /**
                 *This API is used to remove an account from an account group.
                 * @param req RemoveAccountFromAccountGroupRequest
                 * @return RemoveAccountFromAccountGroupOutcome
                 */
                RemoveAccountFromAccountGroupOutcome RemoveAccountFromAccountGroup(const Model::RemoveAccountFromAccountGroupRequest &request);
                void RemoveAccountFromAccountGroupAsync(const Model::RemoveAccountFromAccountGroupRequest& request, const RemoveAccountFromAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveAccountFromAccountGroupOutcomeCallable RemoveAccountFromAccountGroupCallable(const Model::RemoveAccountFromAccountGroupRequest& request);

                /**
                 *This API is used to remove a user from a user group.
                 * @param req RemoveUserFromUserGroupRequest
                 * @return RemoveUserFromUserGroupOutcome
                 */
                RemoveUserFromUserGroupOutcome RemoveUserFromUserGroup(const Model::RemoveUserFromUserGroupRequest &request);
                void RemoveUserFromUserGroupAsync(const Model::RemoveUserFromUserGroupRequest& request, const RemoveUserFromUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveUserFromUserGroupOutcomeCallable RemoveUserFromUserGroupCallable(const Model::RemoveUserFromUserGroupRequest& request);

                /**
                 *This API is used to create an organization node.
                 * @param req UpdateOrgNodeRequest
                 * @return UpdateOrgNodeOutcome
                 */
                UpdateOrgNodeOutcome UpdateOrgNode(const Model::UpdateOrgNodeRequest &request);
                void UpdateOrgNodeAsync(const Model::UpdateOrgNodeRequest& request, const UpdateOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOrgNodeOutcomeCallable UpdateOrgNodeCallable(const Model::UpdateOrgNodeRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_EIAMCLIENT_H_
