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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_DATABUDDYCLIENT_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_DATABUDDYCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/databuddy/v20260715/model/AddConsoleUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/AddConsoleUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/AddWorkspaceGroupsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/AddWorkspaceGroupsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/AddWorkspaceUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/AddWorkspaceUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateCatalogRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateCatalogResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateConsoleGroupRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateConsoleGroupResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateFileRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateFileResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateFolderRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateFolderResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateSchemaRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateSchemaResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateWorkflowRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateWorkflowResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateWorkspaceRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateWorkspaceResponse.h>
#include <tencentcloud/databuddy/v20260715/model/CreateWorkspaceRoleRequest.h>
#include <tencentcloud/databuddy/v20260715/model/CreateWorkspaceRoleResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteCatalogRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteCatalogResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteConsoleGroupsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteConsoleGroupsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteFileRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteFileResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteFolderRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteFolderResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteSchemaRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteSchemaResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteWorkflowRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteWorkflowResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteWorkspaceRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteWorkspaceResponse.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteWorkspaceRoleRequest.h>
#include <tencentcloud/databuddy/v20260715/model/DeleteWorkspaceRoleResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetCatalogRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetCatalogResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetFileRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetFileResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetFolderRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetFolderResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowRunRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowRunResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowTaskRunRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowTaskRunResponse.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkspaceRequest.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkspaceResponse.h>
#include <tencentcloud/databuddy/v20260715/model/KillWorkflowRunRequest.h>
#include <tencentcloud/databuddy/v20260715/model/KillWorkflowRunResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListCatalogsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListCatalogsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListConsoleGroupUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListConsoleGroupUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListConsoleGroupsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListConsoleGroupsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListConsoleRolesRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListConsoleRolesResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListConsoleUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListConsoleUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListFilesRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListFilesResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListSchemasRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListSchemasResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkflowRunsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkflowRunsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkflowTaskRunsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkflowTaskRunsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkflowsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkflowsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkspaceGroupsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkspaceGroupsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkspaceUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkspaceUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkspacesRequest.h>
#include <tencentcloud/databuddy/v20260715/model/ListWorkspacesResponse.h>
#include <tencentcloud/databuddy/v20260715/model/RemoveConsoleUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/RemoveConsoleUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/RemoveWorkspaceGroupsRequest.h>
#include <tencentcloud/databuddy/v20260715/model/RemoveWorkspaceGroupsResponse.h>
#include <tencentcloud/databuddy/v20260715/model/RerunWorkflowRunRequest.h>
#include <tencentcloud/databuddy/v20260715/model/RerunWorkflowRunResponse.h>
#include <tencentcloud/databuddy/v20260715/model/RunWorkflowRequest.h>
#include <tencentcloud/databuddy/v20260715/model/RunWorkflowResponse.h>
#include <tencentcloud/databuddy/v20260715/model/StartComputeRequest.h>
#include <tencentcloud/databuddy/v20260715/model/StartComputeResponse.h>
#include <tencentcloud/databuddy/v20260715/model/StopComputeRequest.h>
#include <tencentcloud/databuddy/v20260715/model/StopComputeResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UnbindWorkflowBundleRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UnbindWorkflowBundleResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateConsoleGroupRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateConsoleGroupResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateConsoleUsersRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateConsoleUsersResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateFileRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateFileResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateFolderRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateFolderResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkflowRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkflowResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkspaceRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkspaceResponse.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkspaceRoleRequest.h>
#include <tencentcloud/databuddy/v20260715/model/UpdateWorkspaceRoleResponse.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            class DatabuddyClient : public AbstractClient
            {
            public:
                DatabuddyClient(const Credential &credential, const std::string &region);
                DatabuddyClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddConsoleUsersResponse> AddConsoleUsersOutcome;
                typedef std::future<AddConsoleUsersOutcome> AddConsoleUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::AddConsoleUsersRequest&, AddConsoleUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddConsoleUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::AddWorkspaceGroupsResponse> AddWorkspaceGroupsOutcome;
                typedef std::future<AddWorkspaceGroupsOutcome> AddWorkspaceGroupsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::AddWorkspaceGroupsRequest&, AddWorkspaceGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddWorkspaceGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::AddWorkspaceUsersResponse> AddWorkspaceUsersOutcome;
                typedef std::future<AddWorkspaceUsersOutcome> AddWorkspaceUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::AddWorkspaceUsersRequest&, AddWorkspaceUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddWorkspaceUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCatalogResponse> CreateCatalogOutcome;
                typedef std::future<CreateCatalogOutcome> CreateCatalogOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateCatalogRequest&, CreateCatalogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCatalogAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConsoleGroupResponse> CreateConsoleGroupOutcome;
                typedef std::future<CreateConsoleGroupOutcome> CreateConsoleGroupOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateConsoleGroupRequest&, CreateConsoleGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsoleGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFileResponse> CreateFileOutcome;
                typedef std::future<CreateFileOutcome> CreateFileOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateFileRequest&, CreateFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFolderResponse> CreateFolderOutcome;
                typedef std::future<CreateFolderOutcome> CreateFolderOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateFolderRequest&, CreateFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSchemaResponse> CreateSchemaOutcome;
                typedef std::future<CreateSchemaOutcome> CreateSchemaOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateSchemaRequest&, CreateSchemaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSchemaAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkflowResponse> CreateWorkflowOutcome;
                typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateWorkflowRequest&, CreateWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkspaceResponse> CreateWorkspaceOutcome;
                typedef std::future<CreateWorkspaceOutcome> CreateWorkspaceOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateWorkspaceRequest&, CreateWorkspaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkspaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkspaceRoleResponse> CreateWorkspaceRoleOutcome;
                typedef std::future<CreateWorkspaceRoleOutcome> CreateWorkspaceRoleOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::CreateWorkspaceRoleRequest&, CreateWorkspaceRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkspaceRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCatalogResponse> DeleteCatalogOutcome;
                typedef std::future<DeleteCatalogOutcome> DeleteCatalogOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteCatalogRequest&, DeleteCatalogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCatalogAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConsoleGroupsResponse> DeleteConsoleGroupsOutcome;
                typedef std::future<DeleteConsoleGroupsOutcome> DeleteConsoleGroupsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteConsoleGroupsRequest&, DeleteConsoleGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConsoleGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFileResponse> DeleteFileOutcome;
                typedef std::future<DeleteFileOutcome> DeleteFileOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteFileRequest&, DeleteFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFolderResponse> DeleteFolderOutcome;
                typedef std::future<DeleteFolderOutcome> DeleteFolderOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteFolderRequest&, DeleteFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSchemaResponse> DeleteSchemaOutcome;
                typedef std::future<DeleteSchemaOutcome> DeleteSchemaOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteSchemaRequest&, DeleteSchemaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSchemaAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkflowResponse> DeleteWorkflowOutcome;
                typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteWorkflowRequest&, DeleteWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkspaceResponse> DeleteWorkspaceOutcome;
                typedef std::future<DeleteWorkspaceOutcome> DeleteWorkspaceOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteWorkspaceRequest&, DeleteWorkspaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkspaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkspaceRoleResponse> DeleteWorkspaceRoleOutcome;
                typedef std::future<DeleteWorkspaceRoleOutcome> DeleteWorkspaceRoleOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::DeleteWorkspaceRoleRequest&, DeleteWorkspaceRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkspaceRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCatalogResponse> GetCatalogOutcome;
                typedef std::future<GetCatalogOutcome> GetCatalogOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetCatalogRequest&, GetCatalogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCatalogAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFileResponse> GetFileOutcome;
                typedef std::future<GetFileOutcome> GetFileOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetFileRequest&, GetFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFileAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFolderResponse> GetFolderOutcome;
                typedef std::future<GetFolderOutcome> GetFolderOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetFolderRequest&, GetFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWorkflowResponse> GetWorkflowOutcome;
                typedef std::future<GetWorkflowOutcome> GetWorkflowOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetWorkflowRequest&, GetWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWorkflowRunResponse> GetWorkflowRunOutcome;
                typedef std::future<GetWorkflowRunOutcome> GetWorkflowRunOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetWorkflowRunRequest&, GetWorkflowRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkflowRunAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWorkflowTaskRunResponse> GetWorkflowTaskRunOutcome;
                typedef std::future<GetWorkflowTaskRunOutcome> GetWorkflowTaskRunOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetWorkflowTaskRunRequest&, GetWorkflowTaskRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkflowTaskRunAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWorkspaceResponse> GetWorkspaceOutcome;
                typedef std::future<GetWorkspaceOutcome> GetWorkspaceOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::GetWorkspaceRequest&, GetWorkspaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkspaceAsyncHandler;
                typedef Outcome<Core::Error, Model::KillWorkflowRunResponse> KillWorkflowRunOutcome;
                typedef std::future<KillWorkflowRunOutcome> KillWorkflowRunOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::KillWorkflowRunRequest&, KillWorkflowRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillWorkflowRunAsyncHandler;
                typedef Outcome<Core::Error, Model::ListCatalogsResponse> ListCatalogsOutcome;
                typedef std::future<ListCatalogsOutcome> ListCatalogsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListCatalogsRequest&, ListCatalogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListCatalogsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListConsoleGroupUsersResponse> ListConsoleGroupUsersOutcome;
                typedef std::future<ListConsoleGroupUsersOutcome> ListConsoleGroupUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListConsoleGroupUsersRequest&, ListConsoleGroupUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListConsoleGroupUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListConsoleGroupsResponse> ListConsoleGroupsOutcome;
                typedef std::future<ListConsoleGroupsOutcome> ListConsoleGroupsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListConsoleGroupsRequest&, ListConsoleGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListConsoleGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListConsoleRolesResponse> ListConsoleRolesOutcome;
                typedef std::future<ListConsoleRolesOutcome> ListConsoleRolesOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListConsoleRolesRequest&, ListConsoleRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListConsoleRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListConsoleUsersResponse> ListConsoleUsersOutcome;
                typedef std::future<ListConsoleUsersOutcome> ListConsoleUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListConsoleUsersRequest&, ListConsoleUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListConsoleUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListFilesResponse> ListFilesOutcome;
                typedef std::future<ListFilesOutcome> ListFilesOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListFilesRequest&, ListFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSchemasResponse> ListSchemasOutcome;
                typedef std::future<ListSchemasOutcome> ListSchemasOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListSchemasRequest&, ListSchemasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSchemasAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkflowRunsResponse> ListWorkflowRunsOutcome;
                typedef std::future<ListWorkflowRunsOutcome> ListWorkflowRunsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListWorkflowRunsRequest&, ListWorkflowRunsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkflowRunsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkflowTaskRunsResponse> ListWorkflowTaskRunsOutcome;
                typedef std::future<ListWorkflowTaskRunsOutcome> ListWorkflowTaskRunsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListWorkflowTaskRunsRequest&, ListWorkflowTaskRunsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkflowTaskRunsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkflowsResponse> ListWorkflowsOutcome;
                typedef std::future<ListWorkflowsOutcome> ListWorkflowsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListWorkflowsRequest&, ListWorkflowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkflowsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkspaceGroupsResponse> ListWorkspaceGroupsOutcome;
                typedef std::future<ListWorkspaceGroupsOutcome> ListWorkspaceGroupsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListWorkspaceGroupsRequest&, ListWorkspaceGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkspaceGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkspaceUsersResponse> ListWorkspaceUsersOutcome;
                typedef std::future<ListWorkspaceUsersOutcome> ListWorkspaceUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListWorkspaceUsersRequest&, ListWorkspaceUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkspaceUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkspacesResponse> ListWorkspacesOutcome;
                typedef std::future<ListWorkspacesOutcome> ListWorkspacesOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::ListWorkspacesRequest&, ListWorkspacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkspacesAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveConsoleUsersResponse> RemoveConsoleUsersOutcome;
                typedef std::future<RemoveConsoleUsersOutcome> RemoveConsoleUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::RemoveConsoleUsersRequest&, RemoveConsoleUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveConsoleUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveWorkspaceGroupsResponse> RemoveWorkspaceGroupsOutcome;
                typedef std::future<RemoveWorkspaceGroupsOutcome> RemoveWorkspaceGroupsOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::RemoveWorkspaceGroupsRequest&, RemoveWorkspaceGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveWorkspaceGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::RerunWorkflowRunResponse> RerunWorkflowRunOutcome;
                typedef std::future<RerunWorkflowRunOutcome> RerunWorkflowRunOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::RerunWorkflowRunRequest&, RerunWorkflowRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RerunWorkflowRunAsyncHandler;
                typedef Outcome<Core::Error, Model::RunWorkflowResponse> RunWorkflowOutcome;
                typedef std::future<RunWorkflowOutcome> RunWorkflowOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::RunWorkflowRequest&, RunWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::StartComputeResponse> StartComputeOutcome;
                typedef std::future<StartComputeOutcome> StartComputeOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::StartComputeRequest&, StartComputeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartComputeAsyncHandler;
                typedef Outcome<Core::Error, Model::StopComputeResponse> StopComputeOutcome;
                typedef std::future<StopComputeOutcome> StopComputeOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::StopComputeRequest&, StopComputeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopComputeAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindWorkflowBundleResponse> UnbindWorkflowBundleOutcome;
                typedef std::future<UnbindWorkflowBundleOutcome> UnbindWorkflowBundleOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UnbindWorkflowBundleRequest&, UnbindWorkflowBundleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindWorkflowBundleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateConsoleGroupResponse> UpdateConsoleGroupOutcome;
                typedef std::future<UpdateConsoleGroupOutcome> UpdateConsoleGroupOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateConsoleGroupRequest&, UpdateConsoleGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConsoleGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateConsoleUsersResponse> UpdateConsoleUsersOutcome;
                typedef std::future<UpdateConsoleUsersOutcome> UpdateConsoleUsersOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateConsoleUsersRequest&, UpdateConsoleUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConsoleUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateFileResponse> UpdateFileOutcome;
                typedef std::future<UpdateFileOutcome> UpdateFileOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateFileRequest&, UpdateFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFileAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateFolderResponse> UpdateFolderOutcome;
                typedef std::future<UpdateFolderOutcome> UpdateFolderOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateFolderRequest&, UpdateFolderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFolderAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateWorkflowResponse> UpdateWorkflowOutcome;
                typedef std::future<UpdateWorkflowOutcome> UpdateWorkflowOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateWorkflowRequest&, UpdateWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateWorkspaceResponse> UpdateWorkspaceOutcome;
                typedef std::future<UpdateWorkspaceOutcome> UpdateWorkspaceOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateWorkspaceRequest&, UpdateWorkspaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkspaceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateWorkspaceRoleResponse> UpdateWorkspaceRoleOutcome;
                typedef std::future<UpdateWorkspaceRoleOutcome> UpdateWorkspaceRoleOutcomeCallable;
                typedef std::function<void(const DatabuddyClient*, const Model::UpdateWorkspaceRoleRequest&, UpdateWorkspaceRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkspaceRoleAsyncHandler;



                /**
                 *Add a console user
                 * @param req AddConsoleUsersRequest
                 * @return AddConsoleUsersOutcome
                 */
                AddConsoleUsersOutcome AddConsoleUsers(const Model::AddConsoleUsersRequest &request);
                void AddConsoleUsersAsync(const Model::AddConsoleUsersRequest& request, const AddConsoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddConsoleUsersOutcomeCallable AddConsoleUsersCallable(const Model::AddConsoleUsersRequest& request);

                /**
                 *This API is used to add a user group to a workspace.
                 * @param req AddWorkspaceGroupsRequest
                 * @return AddWorkspaceGroupsOutcome
                 */
                AddWorkspaceGroupsOutcome AddWorkspaceGroups(const Model::AddWorkspaceGroupsRequest &request);
                void AddWorkspaceGroupsAsync(const Model::AddWorkspaceGroupsRequest& request, const AddWorkspaceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddWorkspaceGroupsOutcomeCallable AddWorkspaceGroupsCallable(const Model::AddWorkspaceGroupsRequest& request);

                /**
                 *This API is used to create user groups.
                 * @param req AddWorkspaceUsersRequest
                 * @return AddWorkspaceUsersOutcome
                 */
                AddWorkspaceUsersOutcome AddWorkspaceUsers(const Model::AddWorkspaceUsersRequest &request);
                void AddWorkspaceUsersAsync(const Model::AddWorkspaceUsersRequest& request, const AddWorkspaceUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddWorkspaceUsersOutcomeCallable AddWorkspaceUsersCallable(const Model::AddWorkspaceUsersRequest& request);

                /**
                 *This API is used to create a data catalog.
                 * @param req CreateCatalogRequest
                 * @return CreateCatalogOutcome
                 */
                CreateCatalogOutcome CreateCatalog(const Model::CreateCatalogRequest &request);
                void CreateCatalogAsync(const Model::CreateCatalogRequest& request, const CreateCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCatalogOutcomeCallable CreateCatalogCallable(const Model::CreateCatalogRequest& request);

                /**
                 *Create a console user group
                 * @param req CreateConsoleGroupRequest
                 * @return CreateConsoleGroupOutcome
                 */
                CreateConsoleGroupOutcome CreateConsoleGroup(const Model::CreateConsoleGroupRequest &request);
                void CreateConsoleGroupAsync(const Model::CreateConsoleGroupRequest& request, const CreateConsoleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsoleGroupOutcomeCallable CreateConsoleGroupCallable(const Model::CreateConsoleGroupRequest& request);

                /**
                 *Create a new file (Notebook/SQL/Python, etc.) in the workspace file tree of Studio (unified development IDE), and return the complete meta-information of the file upon success.

**Prerequisite**
1. WorkspaceId corresponds to an existent workspace, and the caller is a space member of this workspace;
2. The parent folder corresponding to ParentFolderPath must exist, and the caller must have write permission on it (pass `/` for the root directory);
3. FileName must be unique under the same parent folder, including suffix comparison.
4. The FileName suffix must be consistent with FileType (`.ipynb`↔`NOTEBOOK_FILE`, `.sql`↔`SQL_FILE`);
5. To create with file content, pass it through Storage (large files are transferred via COS, and small files are placed in Storage.Content).
                 * @param req CreateFileRequest
                 * @return CreateFileOutcome
                 */
                CreateFileOutcome CreateFile(const Model::CreateFileRequest &request);
                void CreateFileAsync(const Model::CreateFileRequest& request, const CreateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFileOutcomeCallable CreateFileCallable(const Model::CreateFileRequest& request);

                /**
                 *Create a folder
                 * @param req CreateFolderRequest
                 * @return CreateFolderOutcome
                 */
                CreateFolderOutcome CreateFolder(const Model::CreateFolderRequest &request);
                void CreateFolderAsync(const Model::CreateFolderRequest& request, const CreateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFolderOutcomeCallable CreateFolderCallable(const Model::CreateFolderRequest& request);

                /**
                 *Create a schema
                 * @param req CreateSchemaRequest
                 * @return CreateSchemaOutcome
                 */
                CreateSchemaOutcome CreateSchema(const Model::CreateSchemaRequest &request);
                void CreateSchemaAsync(const Model::CreateSchemaRequest& request, const CreateSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSchemaOutcomeCallable CreateSchemaCallable(const Model::CreateSchemaRequest& request);

                /**
                 *Create a workflow
                 * @param req CreateWorkflowRequest
                 * @return CreateWorkflowOutcome
                 */
                CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest &request);
                void CreateWorkflowAsync(const Model::CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkflowOutcomeCallable CreateWorkflowCallable(const Model::CreateWorkflowRequest& request);

                /**
                 *This API is used to create a workspace.
                 * @param req CreateWorkspaceRequest
                 * @return CreateWorkspaceOutcome
                 */
                CreateWorkspaceOutcome CreateWorkspace(const Model::CreateWorkspaceRequest &request);
                void CreateWorkspaceAsync(const Model::CreateWorkspaceRequest& request, const CreateWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkspaceOutcomeCallable CreateWorkspaceCallable(const Model::CreateWorkspaceRequest& request);

                /**
                 *Creates a workspace role
                 * @param req CreateWorkspaceRoleRequest
                 * @return CreateWorkspaceRoleOutcome
                 */
                CreateWorkspaceRoleOutcome CreateWorkspaceRole(const Model::CreateWorkspaceRoleRequest &request);
                void CreateWorkspaceRoleAsync(const Model::CreateWorkspaceRoleRequest& request, const CreateWorkspaceRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkspaceRoleOutcomeCallable CreateWorkspaceRoleCallable(const Model::CreateWorkspaceRoleRequest& request);

                /**
                 *Delete a catalog.
                 * @param req DeleteCatalogRequest
                 * @return DeleteCatalogOutcome
                 */
                DeleteCatalogOutcome DeleteCatalog(const Model::DeleteCatalogRequest &request);
                void DeleteCatalogAsync(const Model::DeleteCatalogRequest& request, const DeleteCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCatalogOutcomeCallable DeleteCatalogCallable(const Model::DeleteCatalogRequest& request);

                /**
                 *Delete a console user group
                 * @param req DeleteConsoleGroupsRequest
                 * @return DeleteConsoleGroupsOutcome
                 */
                DeleteConsoleGroupsOutcome DeleteConsoleGroups(const Model::DeleteConsoleGroupsRequest &request);
                void DeleteConsoleGroupsAsync(const Model::DeleteConsoleGroupsRequest& request, const DeleteConsoleGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConsoleGroupsOutcomeCallable DeleteConsoleGroupsCallable(const Model::DeleteConsoleGroupsRequest& request);

                /**
                 *Move the file to Recycle Bin (soft deletion) and clear its version history and execution result snapshots.

**Prerequisite**
1. The file corresponding to FileId must exist and be in active status;
2. The caller has permission to delete the file;
3. The file hasn't been referenced by a workflow task.

**Error codes (Module are all `Studio`)**

| Error Code (Code) | InnerCode | Description | Handling Suggestion |
| --- | --- | --- | --- |
| `MissingParameter.WorkspaceId` | 1030001 | lack of WorkspaceId | Please input WorkspaceId |
| `MissingParameter.FileId` | 1030003 | lack of FileId | Please import FileId |
| `InvalidParameterValue.FileType` | 1030102 | FileType value not supported | FileType takes FILE/NOTEBOOK_FILE/SQL_FILE |
| `ResourceNotFound.FileNotFound` | 1030203 | File does not exist or has been deleted | Please confirm the FileId |
| `ResourceInUse.FileReferencedByTask` | 1030204 | The file is referenced by a workflow task and cannot be deleted. | Disassociate the task reference first. |
| `UnauthorizedOperation.FileDeleteDenied` | 1030303 | No deletion permission for this file | Contact the file owner or space admin for authorization |
| `InternalError` | 1030900 | Internal service error | Please carry the RequestId and contact support |
                 * @param req DeleteFileRequest
                 * @return DeleteFileOutcome
                 */
                DeleteFileOutcome DeleteFile(const Model::DeleteFileRequest &request);
                void DeleteFileAsync(const Model::DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFileOutcomeCallable DeleteFileCallable(const Model::DeleteFileRequest& request);

                /**
                 *Delete folder
                 * @param req DeleteFolderRequest
                 * @return DeleteFolderOutcome
                 */
                DeleteFolderOutcome DeleteFolder(const Model::DeleteFolderRequest &request);
                void DeleteFolderAsync(const Model::DeleteFolderRequest& request, const DeleteFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFolderOutcomeCallable DeleteFolderCallable(const Model::DeleteFolderRequest& request);

                /**
                 *Delete schema
                 * @param req DeleteSchemaRequest
                 * @return DeleteSchemaOutcome
                 */
                DeleteSchemaOutcome DeleteSchema(const Model::DeleteSchemaRequest &request);
                void DeleteSchemaAsync(const Model::DeleteSchemaRequest& request, const DeleteSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSchemaOutcomeCallable DeleteSchemaCallable(const Model::DeleteSchemaRequest& request);

                /**
                 *Deletes a workflow
                 * @param req DeleteWorkflowRequest
                 * @return DeleteWorkflowOutcome
                 */
                DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest &request);
                void DeleteWorkflowAsync(const Model::DeleteWorkflowRequest& request, const DeleteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const Model::DeleteWorkflowRequest& request);

                /**
                 *Delete a workspace.
                 * @param req DeleteWorkspaceRequest
                 * @return DeleteWorkspaceOutcome
                 */
                DeleteWorkspaceOutcome DeleteWorkspace(const Model::DeleteWorkspaceRequest &request);
                void DeleteWorkspaceAsync(const Model::DeleteWorkspaceRequest& request, const DeleteWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkspaceOutcomeCallable DeleteWorkspaceCallable(const Model::DeleteWorkspaceRequest& request);

                /**
                 *Delete a workspace role.
                 * @param req DeleteWorkspaceRoleRequest
                 * @return DeleteWorkspaceRoleOutcome
                 */
                DeleteWorkspaceRoleOutcome DeleteWorkspaceRole(const Model::DeleteWorkspaceRoleRequest &request);
                void DeleteWorkspaceRoleAsync(const Model::DeleteWorkspaceRoleRequest& request, const DeleteWorkspaceRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkspaceRoleOutcomeCallable DeleteWorkspaceRoleCallable(const Model::DeleteWorkspaceRoleRequest& request);

                /**
                 *Query catalog description
                 * @param req GetCatalogRequest
                 * @return GetCatalogOutcome
                 */
                GetCatalogOutcome GetCatalog(const Model::GetCatalogRequest &request);
                void GetCatalogAsync(const Model::GetCatalogRequest& request, const GetCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCatalogOutcomeCallable GetCatalogCallable(const Model::GetCatalogRequest& request);

                /**
                 *Get the file's metadata, optionally including file content, and read historical snapshots by version.

**Prerequisite**
1. Pass at least one of FileId and FilePath. If both are passed, FileId takes precedence.
2. The corresponding file must exist, and the caller must have read permission for the file;
3. If VersionId is passed, the version must exist.

**Error codes (Module: `Studio`)**

| Error Code | Inner Code | Description | Handling Suggestion |
| --- | --- | --- | --- |
| `MissingParameter.WorkspaceId` | 1030001 | Lack of WorkspaceId | Please input WorkspaceId |
| `MissingParameter.FileId` | 1030003 | FileId and FilePath cannot be empty at the same time | Pass at least one of FileId and FilePath |
| `InvalidParameterValue.FileType` | 1030102 | FileType value unsupported | FileType takes FILE/NOTEBOOK_FILE/SQL_FILE |
| `ResourceNotFound.FileNotFound` | 1030203 | File does not exist or has been deleted | Confirm the FileId or FilePath |
| `ResourceNotFound.FileVersionNotFound` | 1030205 | The specified file version does not exist | Confirm the VersionId or call ListFileVersions to retrieve |
| `UnauthorizedOperation.FileReadDenied` | 1030304 | No read permission for this file | Contact the file owner or space admin for authorization |
| `InternalError` | 1030900 | Internal service error | Please carry the RequestId and contact support |
                 * @param req GetFileRequest
                 * @return GetFileOutcome
                 */
                GetFileOutcome GetFile(const Model::GetFileRequest &request);
                void GetFileAsync(const Model::GetFileRequest& request, const GetFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFileOutcomeCallable GetFileCallable(const Model::GetFileRequest& request);

                /**
                 *Get folder details.
                 * @param req GetFolderRequest
                 * @return GetFolderOutcome
                 */
                GetFolderOutcome GetFolder(const Model::GetFolderRequest &request);
                void GetFolderAsync(const Model::GetFolderRequest& request, const GetFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFolderOutcomeCallable GetFolderCallable(const Model::GetFolderRequest& request);

                /**
                 *This API is used to query workflow details.
                 * @param req GetWorkflowRequest
                 * @return GetWorkflowOutcome
                 */
                GetWorkflowOutcome GetWorkflow(const Model::GetWorkflowRequest &request);
                void GetWorkflowAsync(const Model::GetWorkflowRequest& request, const GetWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWorkflowOutcomeCallable GetWorkflowCallable(const Model::GetWorkflowRequest& request);

                /**
                 *Queries workflow running details.
                 * @param req GetWorkflowRunRequest
                 * @return GetWorkflowRunOutcome
                 */
                GetWorkflowRunOutcome GetWorkflowRun(const Model::GetWorkflowRunRequest &request);
                void GetWorkflowRunAsync(const Model::GetWorkflowRunRequest& request, const GetWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWorkflowRunOutcomeCallable GetWorkflowRunCallable(const Model::GetWorkflowRunRequest& request);

                /**
                 *Query task execution details
                 * @param req GetWorkflowTaskRunRequest
                 * @return GetWorkflowTaskRunOutcome
                 */
                GetWorkflowTaskRunOutcome GetWorkflowTaskRun(const Model::GetWorkflowTaskRunRequest &request);
                void GetWorkflowTaskRunAsync(const Model::GetWorkflowTaskRunRequest& request, const GetWorkflowTaskRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWorkflowTaskRunOutcomeCallable GetWorkflowTaskRunCallable(const Model::GetWorkflowTaskRunRequest& request);

                /**
                 *Queries the details of a workspace.
                 * @param req GetWorkspaceRequest
                 * @return GetWorkspaceOutcome
                 */
                GetWorkspaceOutcome GetWorkspace(const Model::GetWorkspaceRequest &request);
                void GetWorkspaceAsync(const Model::GetWorkspaceRequest& request, const GetWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWorkspaceOutcomeCallable GetWorkspaceCallable(const Model::GetWorkspaceRequest& request);

                /**
                 *Terminate the operation of a workflow.
                 * @param req KillWorkflowRunRequest
                 * @return KillWorkflowRunOutcome
                 */
                KillWorkflowRunOutcome KillWorkflowRun(const Model::KillWorkflowRunRequest &request);
                void KillWorkflowRunAsync(const Model::KillWorkflowRunRequest& request, const KillWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillWorkflowRunOutcomeCallable KillWorkflowRunCallable(const Model::KillWorkflowRunRequest& request);

                /**
                 *Pagination fetch data catalog list
                 * @param req ListCatalogsRequest
                 * @return ListCatalogsOutcome
                 */
                ListCatalogsOutcome ListCatalogs(const Model::ListCatalogsRequest &request);
                void ListCatalogsAsync(const Model::ListCatalogsRequest& request, const ListCatalogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListCatalogsOutcomeCallable ListCatalogsCallable(const Model::ListCatalogsRequest& request);

                /**
                 *Queries the console user group member list. This API is a console-level API and is only supported in the central region: use ap-guangzhou for the Chinese site and ap-singapore for the international site. Calls from other regions will return UnsupportedRegion.
                 * @param req ListConsoleGroupUsersRequest
                 * @return ListConsoleGroupUsersOutcome
                 */
                ListConsoleGroupUsersOutcome ListConsoleGroupUsers(const Model::ListConsoleGroupUsersRequest &request);
                void ListConsoleGroupUsersAsync(const Model::ListConsoleGroupUsersRequest& request, const ListConsoleGroupUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListConsoleGroupUsersOutcomeCallable ListConsoleGroupUsersCallable(const Model::ListConsoleGroupUsersRequest& request);

                /**
                 *Queries the console user group list. This API is a console-level API and is only supported in the central region: use ap-guangzhou for the Chinese site and ap-singapore for the international site. Calls from other regions will return UnsupportedRegion.
                 * @param req ListConsoleGroupsRequest
                 * @return ListConsoleGroupsOutcome
                 */
                ListConsoleGroupsOutcome ListConsoleGroups(const Model::ListConsoleGroupsRequest &request);
                void ListConsoleGroupsAsync(const Model::ListConsoleGroupsRequest& request, const ListConsoleGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListConsoleGroupsOutcomeCallable ListConsoleGroupsCallable(const Model::ListConsoleGroupsRequest& request);

                /**
                 *Queries the console role list. This API is a console-level API and is only supported in the central region: use ap-guangzhou for the Chinese site and ap-singapore for the international site. Calls from other regions will return UnsupportedRegion.
                 * @param req ListConsoleRolesRequest
                 * @return ListConsoleRolesOutcome
                 */
                ListConsoleRolesOutcome ListConsoleRoles(const Model::ListConsoleRolesRequest &request);
                void ListConsoleRolesAsync(const Model::ListConsoleRolesRequest& request, const ListConsoleRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListConsoleRolesOutcomeCallable ListConsoleRolesCallable(const Model::ListConsoleRolesRequest& request);

                /**
                 *Queries the console user list. This API is a console-level API and is only supported in the central region: use ap-guangzhou for the Chinese site and ap-singapore for the international site. Calls from other regions will return UnsupportedRegion.
                 * @param req ListConsoleUsersRequest
                 * @return ListConsoleUsersOutcome
                 */
                ListConsoleUsersOutcome ListConsoleUsers(const Model::ListConsoleUsersRequest &request);
                void ListConsoleUsersAsync(const Model::ListConsoleUsersRequest& request, const ListConsoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListConsoleUsersOutcomeCallable ListConsoleUsersCallable(const Model::ListConsoleUsersRequest& request);

                /**
                 *Get the folder and file list
                 * @param req ListFilesRequest
                 * @return ListFilesOutcome
                 */
                ListFilesOutcome ListFiles(const Model::ListFilesRequest &request);
                void ListFilesAsync(const Model::ListFilesRequest& request, const ListFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListFilesOutcomeCallable ListFilesCallable(const Model::ListFilesRequest& request);

                /**
                 *Get schema list
                 * @param req ListSchemasRequest
                 * @return ListSchemasOutcome
                 */
                ListSchemasOutcome ListSchemas(const Model::ListSchemasRequest &request);
                void ListSchemasAsync(const Model::ListSchemasRequest& request, const ListSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSchemasOutcomeCallable ListSchemasCallable(const Model::ListSchemasRequest& request);

                /**
                 *Workflow run list
                 * @param req ListWorkflowRunsRequest
                 * @return ListWorkflowRunsOutcome
                 */
                ListWorkflowRunsOutcome ListWorkflowRuns(const Model::ListWorkflowRunsRequest &request);
                void ListWorkflowRunsAsync(const Model::ListWorkflowRunsRequest& request, const ListWorkflowRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListWorkflowRunsOutcomeCallable ListWorkflowRunsCallable(const Model::ListWorkflowRunsRequest& request);

                /**
                 *Query the historical operation list of workflow tasks
                 * @param req ListWorkflowTaskRunsRequest
                 * @return ListWorkflowTaskRunsOutcome
                 */
                ListWorkflowTaskRunsOutcome ListWorkflowTaskRuns(const Model::ListWorkflowTaskRunsRequest &request);
                void ListWorkflowTaskRunsAsync(const Model::ListWorkflowTaskRunsRequest& request, const ListWorkflowTaskRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListWorkflowTaskRunsOutcomeCallable ListWorkflowTaskRunsCallable(const Model::ListWorkflowTaskRunsRequest& request);

                /**
                 *This API is used to query the list of workflows.
                 * @param req ListWorkflowsRequest
                 * @return ListWorkflowsOutcome
                 */
                ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest &request);
                void ListWorkflowsAsync(const Model::ListWorkflowsRequest& request, const ListWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListWorkflowsOutcomeCallable ListWorkflowsCallable(const Model::ListWorkflowsRequest& request);

                /**
                 *This API is used to query the list of user groups in a workspace.
                 * @param req ListWorkspaceGroupsRequest
                 * @return ListWorkspaceGroupsOutcome
                 */
                ListWorkspaceGroupsOutcome ListWorkspaceGroups(const Model::ListWorkspaceGroupsRequest &request);
                void ListWorkspaceGroupsAsync(const Model::ListWorkspaceGroupsRequest& request, const ListWorkspaceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListWorkspaceGroupsOutcomeCallable ListWorkspaceGroupsCallable(const Model::ListWorkspaceGroupsRequest& request);

                /**
                 *Queries the list of users in a workspace.
                 * @param req ListWorkspaceUsersRequest
                 * @return ListWorkspaceUsersOutcome
                 */
                ListWorkspaceUsersOutcome ListWorkspaceUsers(const Model::ListWorkspaceUsersRequest &request);
                void ListWorkspaceUsersAsync(const Model::ListWorkspaceUsersRequest& request, const ListWorkspaceUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListWorkspaceUsersOutcomeCallable ListWorkspaceUsersCallable(const Model::ListWorkspaceUsersRequest& request);

                /**
                 *Queries the workspace list.
                 * @param req ListWorkspacesRequest
                 * @return ListWorkspacesOutcome
                 */
                ListWorkspacesOutcome ListWorkspaces(const Model::ListWorkspacesRequest &request);
                void ListWorkspacesAsync(const Model::ListWorkspacesRequest& request, const ListWorkspacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListWorkspacesOutcomeCallable ListWorkspacesCallable(const Model::ListWorkspacesRequest& request);

                /**
                 *<p>Batch remove console users (up to 10 at a time; pre-verification rejects the entire request if any fails; during the Execution Phase, a single failure does not interrupt subsequent deletion, and success or failure is determined by SuccessUins/FailItems)</p>
                 * @param req RemoveConsoleUsersRequest
                 * @return RemoveConsoleUsersOutcome
                 */
                RemoveConsoleUsersOutcome RemoveConsoleUsers(const Model::RemoveConsoleUsersRequest &request);
                void RemoveConsoleUsersAsync(const Model::RemoveConsoleUsersRequest& request, const RemoveConsoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveConsoleUsersOutcomeCallable RemoveConsoleUsersCallable(const Model::RemoveConsoleUsersRequest& request);

                /**
                 *Remove a user group from a workspace.
                 * @param req RemoveWorkspaceGroupsRequest
                 * @return RemoveWorkspaceGroupsOutcome
                 */
                RemoveWorkspaceGroupsOutcome RemoveWorkspaceGroups(const Model::RemoveWorkspaceGroupsRequest &request);
                void RemoveWorkspaceGroupsAsync(const Model::RemoveWorkspaceGroupsRequest& request, const RemoveWorkspaceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveWorkspaceGroupsOutcomeCallable RemoveWorkspaceGroupsCallable(const Model::RemoveWorkspaceGroupsRequest& request);

                /**
                 *Rerun a workflow
                 * @param req RerunWorkflowRunRequest
                 * @return RerunWorkflowRunOutcome
                 */
                RerunWorkflowRunOutcome RerunWorkflowRun(const Model::RerunWorkflowRunRequest &request);
                void RerunWorkflowRunAsync(const Model::RerunWorkflowRunRequest& request, const RerunWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RerunWorkflowRunOutcomeCallable RerunWorkflowRunCallable(const Model::RerunWorkflowRunRequest& request);

                /**
                 *Runs the workflow
                 * @param req RunWorkflowRequest
                 * @return RunWorkflowOutcome
                 */
                RunWorkflowOutcome RunWorkflow(const Model::RunWorkflowRequest &request);
                void RunWorkflowAsync(const Model::RunWorkflowRequest& request, const RunWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunWorkflowOutcomeCallable RunWorkflowCallable(const Model::RunWorkflowRequest& request);

                /**
                 *Start up the computational resource.
                 * @param req StartComputeRequest
                 * @return StartComputeOutcome
                 */
                StartComputeOutcome StartCompute(const Model::StartComputeRequest &request);
                void StartComputeAsync(const Model::StartComputeRequest& request, const StartComputeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartComputeOutcomeCallable StartComputeCallable(const Model::StartComputeRequest& request);

                /**
                 *Terminate computational resources
                 * @param req StopComputeRequest
                 * @return StopComputeOutcome
                 */
                StopComputeOutcome StopCompute(const Model::StopComputeRequest &request);
                void StopComputeAsync(const Model::StopComputeRequest& request, const StopComputeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopComputeOutcomeCallable StopComputeCallable(const Model::StopComputeRequest& request);

                /**
                 *Unbind workflow Bundle info
Description: This interface is semantically equivalent to Detach in the standard verb list. The name Unbind is retained for compatibility with existing product forms.
                 * @param req UnbindWorkflowBundleRequest
                 * @return UnbindWorkflowBundleOutcome
                 */
                UnbindWorkflowBundleOutcome UnbindWorkflowBundle(const Model::UnbindWorkflowBundleRequest &request);
                void UnbindWorkflowBundleAsync(const Model::UnbindWorkflowBundleRequest& request, const UnbindWorkflowBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindWorkflowBundleOutcomeCallable UnbindWorkflowBundleCallable(const Model::UnbindWorkflowBundleRequest& request);

                /**
                 *Modify a console user group
                 * @param req UpdateConsoleGroupRequest
                 * @return UpdateConsoleGroupOutcome
                 */
                UpdateConsoleGroupOutcome UpdateConsoleGroup(const Model::UpdateConsoleGroupRequest &request);
                void UpdateConsoleGroupAsync(const Model::UpdateConsoleGroupRequest& request, const UpdateConsoleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateConsoleGroupOutcomeCallable UpdateConsoleGroupCallable(const Model::UpdateConsoleGroupRequest& request);

                /**
                 *Modify a console user role
                 * @param req UpdateConsoleUsersRequest
                 * @return UpdateConsoleUsersOutcome
                 */
                UpdateConsoleUsersOutcome UpdateConsoleUsers(const Model::UpdateConsoleUsersRequest &request);
                void UpdateConsoleUsersAsync(const Model::UpdateConsoleUsersRequest& request, const UpdateConsoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateConsoleUsersOutcomeCallable UpdateConsoleUsersCallable(const Model::UpdateConsoleUsersRequest& request);

                /**
                 *Update file contents and running configuration (computational resource, default catalog/schema, parameters), and return the file metadata after the update.

**Prerequisite**
1. The file corresponding to FileId must exist and be in active status;
2. The caller has write permission on the file;
3. To update only the configuration, do not pass in Storage. To update only the content, do not pass in FileConfig.
4. If FileConfig.ResourceId is not empty, the match between the resource type and file type will be validated.

**Error codes (Module: `Studio`)**

| Error Code (Code) | InnerCode | Description | Handling Suggestions |
| --- | --- | --- | --- |
| `MissingParameter.WorkspaceId` | 1030001 | lack of WorkspaceId | Please input WorkspaceId |
| `MissingParameter.FileId` | 1030003 | lack of FileId | Please import FileId |
| `InvalidParameterValue.FileType` | 1030102 | FileType value not supported | FileType takes FILE/NOTEBOOK_FILE/SQL_FILE |
| `InvalidParameterValue.ResourceId` | 1030104 | Compute resource type and file type mismatch | Select a computational resource for Python/Notebook and a data analysis resource for SQL |
| `ResourceNotFound.FileNotFound` | 1030203 | File does not exist or has been deleted | confirm the FileId or call GetFile to check the file status |
| `UnauthorizedOperation.FileWriteDenied` | 1030302 | No write permission for this file | Contact the file owner or space admin for authorization |
| `FailedOperation.FileStorageUpdateFailed` | 1030401 | Failed to write file content to storage | Try again later. If the failure persists, contact support with the RequestId. |
| `InternalError` | 1030900 | Internal service error | Please carry the RequestId and contact support |
                 * @param req UpdateFileRequest
                 * @return UpdateFileOutcome
                 */
                UpdateFileOutcome UpdateFile(const Model::UpdateFileRequest &request);
                void UpdateFileAsync(const Model::UpdateFileRequest& request, const UpdateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFileOutcomeCallable UpdateFileCallable(const Model::UpdateFileRequest& request);

                /**
                 *Update folder (supports rename and move)
                 * @param req UpdateFolderRequest
                 * @return UpdateFolderOutcome
                 */
                UpdateFolderOutcome UpdateFolder(const Model::UpdateFolderRequest &request);
                void UpdateFolderAsync(const Model::UpdateFolderRequest& request, const UpdateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFolderOutcomeCallable UpdateFolderCallable(const Model::UpdateFolderRequest& request);

                /**
                 *Updating a Workflow
                 * @param req UpdateWorkflowRequest
                 * @return UpdateWorkflowOutcome
                 */
                UpdateWorkflowOutcome UpdateWorkflow(const Model::UpdateWorkflowRequest &request);
                void UpdateWorkflowAsync(const Model::UpdateWorkflowRequest& request, const UpdateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateWorkflowOutcomeCallable UpdateWorkflowCallable(const Model::UpdateWorkflowRequest& request);

                /**
                 *Modifies a workspace
                 * @param req UpdateWorkspaceRequest
                 * @return UpdateWorkspaceOutcome
                 */
                UpdateWorkspaceOutcome UpdateWorkspace(const Model::UpdateWorkspaceRequest &request);
                void UpdateWorkspaceAsync(const Model::UpdateWorkspaceRequest& request, const UpdateWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateWorkspaceOutcomeCallable UpdateWorkspaceCallable(const Model::UpdateWorkspaceRequest& request);

                /**
                 *Updates a workspace role
                 * @param req UpdateWorkspaceRoleRequest
                 * @return UpdateWorkspaceRoleOutcome
                 */
                UpdateWorkspaceRoleOutcome UpdateWorkspaceRole(const Model::UpdateWorkspaceRoleRequest &request);
                void UpdateWorkspaceRoleAsync(const Model::UpdateWorkspaceRoleRequest& request, const UpdateWorkspaceRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateWorkspaceRoleOutcomeCallable UpdateWorkspaceRoleCallable(const Model::UpdateWorkspaceRoleRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_DATABUDDYCLIENT_H_
