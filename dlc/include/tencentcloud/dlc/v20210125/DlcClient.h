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

#ifndef TENCENTCLOUD_DLC_V20210125_DLCCLIENT_H_
#define TENCENTCLOUD_DLC_V20210125_DLCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dlc/v20210125/model/AddUsersToWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/AddUsersToWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/AlterDMSDatabaseRequest.h>
#include <tencentcloud/dlc/v20210125/model/AlterDMSDatabaseResponse.h>
#include <tencentcloud/dlc/v20210125/model/AttachUserPolicyRequest.h>
#include <tencentcloud/dlc/v20210125/model/AttachUserPolicyResponse.h>
#include <tencentcloud/dlc/v20210125/model/AttachWorkGroupPolicyRequest.h>
#include <tencentcloud/dlc/v20210125/model/AttachWorkGroupPolicyResponse.h>
#include <tencentcloud/dlc/v20210125/model/BindWorkGroupsToUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/BindWorkGroupsToUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/CancelSparkSessionBatchSQLRequest.h>
#include <tencentcloud/dlc/v20210125/model/CancelSparkSessionBatchSQLResponse.h>
#include <tencentcloud/dlc/v20210125/model/CancelTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CancelTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CheckDataEngineConfigPairsValidityRequest.h>
#include <tencentcloud/dlc/v20210125/model/CheckDataEngineConfigPairsValidityResponse.h>
#include <tencentcloud/dlc/v20210125/model/CheckDataEngineImageCanBeRollbackRequest.h>
#include <tencentcloud/dlc/v20210125/model/CheckDataEngineImageCanBeRollbackResponse.h>
#include <tencentcloud/dlc/v20210125/model/CheckDataEngineImageCanBeUpgradeRequest.h>
#include <tencentcloud/dlc/v20210125/model/CheckDataEngineImageCanBeUpgradeResponse.h>
#include <tencentcloud/dlc/v20210125/model/CheckGrantedPermissionRequest.h>
#include <tencentcloud/dlc/v20210125/model/CheckGrantedPermissionResponse.h>
#include <tencentcloud/dlc/v20210125/model/CopyDLCTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/CopyDLCTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateCHDFSBindingProductRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateCHDFSBindingProductResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateDLCTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateDLCTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateDMSDatabaseRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateDMSDatabaseResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateInternalTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateInternalTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateResultDownloadRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateResultDownloadResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkAppRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkAppResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkAppTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkAppTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkSessionBatchSQLRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkSessionBatchSQLResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateStoreLocationRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateStoreLocationResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateTasksRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateTasksResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteCHDFSBindingProductRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteCHDFSBindingProductResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteSparkAppRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteSparkAppResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteThirdPartyAccessUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteThirdPartyAccessUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteUsersFromWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteUsersFromWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeAdvancedStoreLocationRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeAdvancedStoreLocationResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDLCCatalogAccessRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDLCCatalogAccessResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDLCTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDLCTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDLCTableListRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDLCTableListResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSDatabaseRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSDatabaseResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSDatabaseListRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDMSDatabaseListResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEngineImageVersionsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEngineImageVersionsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEnginePythonSparkImagesRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEnginePythonSparkImagesResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEnginesScaleDetailRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDataEnginesScaleDetailResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeEngineUsageInfoRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeEngineUsageInfoResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeForbiddenTableProRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeForbiddenTableProResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeJobRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeJobResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeJobsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeJobsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeLakeFsDirSummaryRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeLakeFsDirSummaryResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeLakeFsInfoRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeLakeFsInfoResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeOtherCHDFSBindingListRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeOtherCHDFSBindingListResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeQueryRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeQueryResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeResultDownloadRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeResultDownloadResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppJobRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppJobResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppJobsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppJobsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppTasksRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppTasksResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkSessionBatchSqlLogRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkSessionBatchSqlLogResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeStoreLocationRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeStoreLocationResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSubUserAccessPolicyRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSubUserAccessPolicyResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTablesNameRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTablesNameResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTaskResultRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTaskResultResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTaskStatisticsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTaskStatisticsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTasksRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTasksResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeThirdPartyAccessUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeThirdPartyAccessUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUpdatableDataEnginesRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUpdatableDataEnginesResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUserDataEngineConfigRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUserDataEngineConfigResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUserInfoRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUserInfoResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUserRolesRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUserRolesResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUserTypeRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUserTypeResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUsersRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUsersResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeWorkGroupInfoRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeWorkGroupInfoResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeWorkGroupsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeWorkGroupsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DetachUserPolicyRequest.h>
#include <tencentcloud/dlc/v20210125/model/DetachUserPolicyResponse.h>
#include <tencentcloud/dlc/v20210125/model/DetachWorkGroupPolicyRequest.h>
#include <tencentcloud/dlc/v20210125/model/DetachWorkGroupPolicyResponse.h>
#include <tencentcloud/dlc/v20210125/model/DropDLCTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/DropDLCTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/DropDMSDatabaseRequest.h>
#include <tencentcloud/dlc/v20210125/model/DropDMSDatabaseResponse.h>
#include <tencentcloud/dlc/v20210125/model/DropDMSTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/DropDMSTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/GenerateCreateMangedTableSqlRequest.h>
#include <tencentcloud/dlc/v20210125/model/GenerateCreateMangedTableSqlResponse.h>
#include <tencentcloud/dlc/v20210125/model/GetOptimizerPolicyRequest.h>
#include <tencentcloud/dlc/v20210125/model/GetOptimizerPolicyResponse.h>
#include <tencentcloud/dlc/v20210125/model/GrantDLCCatalogAccessRequest.h>
#include <tencentcloud/dlc/v20210125/model/GrantDLCCatalogAccessResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifyAdvancedStoreLocationRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifyAdvancedStoreLocationResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifyDataEngineDescriptionRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifyDataEngineDescriptionResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifyGovernEventRuleRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifyGovernEventRuleResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifySparkAppRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifySparkAppResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifySparkAppBatchRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifySparkAppBatchResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifyUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifyUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifyUserTypeRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifyUserTypeResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifyWorkGroupRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifyWorkGroupResponse.h>
#include <tencentcloud/dlc/v20210125/model/QueryResultRequest.h>
#include <tencentcloud/dlc/v20210125/model/QueryResultResponse.h>
#include <tencentcloud/dlc/v20210125/model/QueryTaskCostDetailRequest.h>
#include <tencentcloud/dlc/v20210125/model/QueryTaskCostDetailResponse.h>
#include <tencentcloud/dlc/v20210125/model/RegisterThirdPartyAccessUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/RegisterThirdPartyAccessUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/RenewDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/RenewDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/RestartDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/RestartDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/RevokeDLCCatalogAccessRequest.h>
#include <tencentcloud/dlc/v20210125/model/RevokeDLCCatalogAccessResponse.h>
#include <tencentcloud/dlc/v20210125/model/RollbackDataEngineImageRequest.h>
#include <tencentcloud/dlc/v20210125/model/RollbackDataEngineImageResponse.h>
#include <tencentcloud/dlc/v20210125/model/SuspendResumeDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/SuspendResumeDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/SwitchDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/SwitchDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/SwitchDataEngineImageRequest.h>
#include <tencentcloud/dlc/v20210125/model/SwitchDataEngineImageResponse.h>
#include <tencentcloud/dlc/v20210125/model/UnbindWorkGroupsFromUserRequest.h>
#include <tencentcloud/dlc/v20210125/model/UnbindWorkGroupsFromUserResponse.h>
#include <tencentcloud/dlc/v20210125/model/UpdateDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/UpdateDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/UpdateDataEngineConfigRequest.h>
#include <tencentcloud/dlc/v20210125/model/UpdateDataEngineConfigResponse.h>
#include <tencentcloud/dlc/v20210125/model/UpdateRowFilterRequest.h>
#include <tencentcloud/dlc/v20210125/model/UpdateRowFilterResponse.h>
#include <tencentcloud/dlc/v20210125/model/UpdateUserDataEngineConfigRequest.h>
#include <tencentcloud/dlc/v20210125/model/UpdateUserDataEngineConfigResponse.h>
#include <tencentcloud/dlc/v20210125/model/UpgradeDataEngineImageRequest.h>
#include <tencentcloud/dlc/v20210125/model/UpgradeDataEngineImageResponse.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            class DlcClient : public AbstractClient
            {
            public:
                DlcClient(const Credential &credential, const std::string &region);
                DlcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddUsersToWorkGroupResponse> AddUsersToWorkGroupOutcome;
                typedef std::future<AddUsersToWorkGroupOutcome> AddUsersToWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AddUsersToWorkGroupRequest&, AddUsersToWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUsersToWorkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::AlterDMSDatabaseResponse> AlterDMSDatabaseOutcome;
                typedef std::future<AlterDMSDatabaseOutcome> AlterDMSDatabaseOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AlterDMSDatabaseRequest&, AlterDMSDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AlterDMSDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachUserPolicyResponse> AttachUserPolicyOutcome;
                typedef std::future<AttachUserPolicyOutcome> AttachUserPolicyOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AttachUserPolicyRequest&, AttachUserPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachUserPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachWorkGroupPolicyResponse> AttachWorkGroupPolicyOutcome;
                typedef std::future<AttachWorkGroupPolicyOutcome> AttachWorkGroupPolicyOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::AttachWorkGroupPolicyRequest&, AttachWorkGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachWorkGroupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::BindWorkGroupsToUserResponse> BindWorkGroupsToUserOutcome;
                typedef std::future<BindWorkGroupsToUserOutcome> BindWorkGroupsToUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::BindWorkGroupsToUserRequest&, BindWorkGroupsToUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindWorkGroupsToUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelSparkSessionBatchSQLResponse> CancelSparkSessionBatchSQLOutcome;
                typedef std::future<CancelSparkSessionBatchSQLOutcome> CancelSparkSessionBatchSQLOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CancelSparkSessionBatchSQLRequest&, CancelSparkSessionBatchSQLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelSparkSessionBatchSQLAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelTaskResponse> CancelTaskOutcome;
                typedef std::future<CancelTaskOutcome> CancelTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CancelTaskRequest&, CancelTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckDataEngineConfigPairsValidityResponse> CheckDataEngineConfigPairsValidityOutcome;
                typedef std::future<CheckDataEngineConfigPairsValidityOutcome> CheckDataEngineConfigPairsValidityOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CheckDataEngineConfigPairsValidityRequest&, CheckDataEngineConfigPairsValidityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckDataEngineConfigPairsValidityAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckDataEngineImageCanBeRollbackResponse> CheckDataEngineImageCanBeRollbackOutcome;
                typedef std::future<CheckDataEngineImageCanBeRollbackOutcome> CheckDataEngineImageCanBeRollbackOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CheckDataEngineImageCanBeRollbackRequest&, CheckDataEngineImageCanBeRollbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckDataEngineImageCanBeRollbackAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckDataEngineImageCanBeUpgradeResponse> CheckDataEngineImageCanBeUpgradeOutcome;
                typedef std::future<CheckDataEngineImageCanBeUpgradeOutcome> CheckDataEngineImageCanBeUpgradeOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CheckDataEngineImageCanBeUpgradeRequest&, CheckDataEngineImageCanBeUpgradeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckDataEngineImageCanBeUpgradeAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckGrantedPermissionResponse> CheckGrantedPermissionOutcome;
                typedef std::future<CheckGrantedPermissionOutcome> CheckGrantedPermissionOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CheckGrantedPermissionRequest&, CheckGrantedPermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckGrantedPermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyDLCTableResponse> CopyDLCTableOutcome;
                typedef std::future<CopyDLCTableOutcome> CopyDLCTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CopyDLCTableRequest&, CopyDLCTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyDLCTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCHDFSBindingProductResponse> CreateCHDFSBindingProductOutcome;
                typedef std::future<CreateCHDFSBindingProductOutcome> CreateCHDFSBindingProductOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateCHDFSBindingProductRequest&, CreateCHDFSBindingProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCHDFSBindingProductAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDLCTableResponse> CreateDLCTableOutcome;
                typedef std::future<CreateDLCTableOutcome> CreateDLCTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateDLCTableRequest&, CreateDLCTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDLCTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDMSDatabaseResponse> CreateDMSDatabaseOutcome;
                typedef std::future<CreateDMSDatabaseOutcome> CreateDMSDatabaseOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateDMSDatabaseRequest&, CreateDMSDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDMSDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDataEngineResponse> CreateDataEngineOutcome;
                typedef std::future<CreateDataEngineOutcome> CreateDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateDataEngineRequest&, CreateDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInternalTableResponse> CreateInternalTableOutcome;
                typedef std::future<CreateInternalTableOutcome> CreateInternalTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateInternalTableRequest&, CreateInternalTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInternalTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateResultDownloadResponse> CreateResultDownloadOutcome;
                typedef std::future<CreateResultDownloadOutcome> CreateResultDownloadOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateResultDownloadRequest&, CreateResultDownloadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateResultDownloadAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSparkAppResponse> CreateSparkAppOutcome;
                typedef std::future<CreateSparkAppOutcome> CreateSparkAppOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateSparkAppRequest&, CreateSparkAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSparkAppAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSparkAppTaskResponse> CreateSparkAppTaskOutcome;
                typedef std::future<CreateSparkAppTaskOutcome> CreateSparkAppTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateSparkAppTaskRequest&, CreateSparkAppTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSparkAppTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSparkSessionBatchSQLResponse> CreateSparkSessionBatchSQLOutcome;
                typedef std::future<CreateSparkSessionBatchSQLOutcome> CreateSparkSessionBatchSQLOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateSparkSessionBatchSQLRequest&, CreateSparkSessionBatchSQLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSparkSessionBatchSQLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStoreLocationResponse> CreateStoreLocationOutcome;
                typedef std::future<CreateStoreLocationOutcome> CreateStoreLocationOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateStoreLocationRequest&, CreateStoreLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStoreLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskResponse> CreateTaskOutcome;
                typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateTaskRequest&, CreateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTasksResponse> CreateTasksOutcome;
                typedef std::future<CreateTasksOutcome> CreateTasksOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateTasksRequest&, CreateTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkGroupResponse> CreateWorkGroupOutcome;
                typedef std::future<CreateWorkGroupOutcome> CreateWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateWorkGroupRequest&, CreateWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCHDFSBindingProductResponse> DeleteCHDFSBindingProductOutcome;
                typedef std::future<DeleteCHDFSBindingProductOutcome> DeleteCHDFSBindingProductOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteCHDFSBindingProductRequest&, DeleteCHDFSBindingProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCHDFSBindingProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDataEngineResponse> DeleteDataEngineOutcome;
                typedef std::future<DeleteDataEngineOutcome> DeleteDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteDataEngineRequest&, DeleteDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSparkAppResponse> DeleteSparkAppOutcome;
                typedef std::future<DeleteSparkAppOutcome> DeleteSparkAppOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteSparkAppRequest&, DeleteSparkAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSparkAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteThirdPartyAccessUserResponse> DeleteThirdPartyAccessUserOutcome;
                typedef std::future<DeleteThirdPartyAccessUserOutcome> DeleteThirdPartyAccessUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteThirdPartyAccessUserRequest&, DeleteThirdPartyAccessUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteThirdPartyAccessUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUsersFromWorkGroupResponse> DeleteUsersFromWorkGroupOutcome;
                typedef std::future<DeleteUsersFromWorkGroupOutcome> DeleteUsersFromWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteUsersFromWorkGroupRequest&, DeleteUsersFromWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsersFromWorkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkGroupResponse> DeleteWorkGroupOutcome;
                typedef std::future<DeleteWorkGroupOutcome> DeleteWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteWorkGroupRequest&, DeleteWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAdvancedStoreLocationResponse> DescribeAdvancedStoreLocationOutcome;
                typedef std::future<DescribeAdvancedStoreLocationOutcome> DescribeAdvancedStoreLocationOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeAdvancedStoreLocationRequest&, DescribeAdvancedStoreLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAdvancedStoreLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDLCCatalogAccessResponse> DescribeDLCCatalogAccessOutcome;
                typedef std::future<DescribeDLCCatalogAccessOutcome> DescribeDLCCatalogAccessOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDLCCatalogAccessRequest&, DescribeDLCCatalogAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDLCCatalogAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDLCTableResponse> DescribeDLCTableOutcome;
                typedef std::future<DescribeDLCTableOutcome> DescribeDLCTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDLCTableRequest&, DescribeDLCTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDLCTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDLCTableListResponse> DescribeDLCTableListOutcome;
                typedef std::future<DescribeDLCTableListOutcome> DescribeDLCTableListOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDLCTableListRequest&, DescribeDLCTableListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDLCTableListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDMSDatabaseResponse> DescribeDMSDatabaseOutcome;
                typedef std::future<DescribeDMSDatabaseOutcome> DescribeDMSDatabaseOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDMSDatabaseRequest&, DescribeDMSDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDMSDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDMSDatabaseListResponse> DescribeDMSDatabaseListOutcome;
                typedef std::future<DescribeDMSDatabaseListOutcome> DescribeDMSDatabaseListOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDMSDatabaseListRequest&, DescribeDMSDatabaseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDMSDatabaseListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataEngineResponse> DescribeDataEngineOutcome;
                typedef std::future<DescribeDataEngineOutcome> DescribeDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDataEngineRequest&, DescribeDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataEngineImageVersionsResponse> DescribeDataEngineImageVersionsOutcome;
                typedef std::future<DescribeDataEngineImageVersionsOutcome> DescribeDataEngineImageVersionsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDataEngineImageVersionsRequest&, DescribeDataEngineImageVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataEngineImageVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataEnginePythonSparkImagesResponse> DescribeDataEnginePythonSparkImagesOutcome;
                typedef std::future<DescribeDataEnginePythonSparkImagesOutcome> DescribeDataEnginePythonSparkImagesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDataEnginePythonSparkImagesRequest&, DescribeDataEnginePythonSparkImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataEnginePythonSparkImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataEnginesScaleDetailResponse> DescribeDataEnginesScaleDetailOutcome;
                typedef std::future<DescribeDataEnginesScaleDetailOutcome> DescribeDataEnginesScaleDetailOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDataEnginesScaleDetailRequest&, DescribeDataEnginesScaleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataEnginesScaleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEngineUsageInfoResponse> DescribeEngineUsageInfoOutcome;
                typedef std::future<DescribeEngineUsageInfoOutcome> DescribeEngineUsageInfoOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeEngineUsageInfoRequest&, DescribeEngineUsageInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEngineUsageInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeForbiddenTableProResponse> DescribeForbiddenTableProOutcome;
                typedef std::future<DescribeForbiddenTableProOutcome> DescribeForbiddenTableProOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeForbiddenTableProRequest&, DescribeForbiddenTableProOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeForbiddenTableProAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobResponse> DescribeJobOutcome;
                typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeJobRequest&, DescribeJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobsResponse> DescribeJobsOutcome;
                typedef std::future<DescribeJobsOutcome> DescribeJobsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeJobsRequest&, DescribeJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLakeFsDirSummaryResponse> DescribeLakeFsDirSummaryOutcome;
                typedef std::future<DescribeLakeFsDirSummaryOutcome> DescribeLakeFsDirSummaryOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeLakeFsDirSummaryRequest&, DescribeLakeFsDirSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLakeFsDirSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLakeFsInfoResponse> DescribeLakeFsInfoOutcome;
                typedef std::future<DescribeLakeFsInfoOutcome> DescribeLakeFsInfoOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeLakeFsInfoRequest&, DescribeLakeFsInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLakeFsInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOtherCHDFSBindingListResponse> DescribeOtherCHDFSBindingListOutcome;
                typedef std::future<DescribeOtherCHDFSBindingListOutcome> DescribeOtherCHDFSBindingListOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeOtherCHDFSBindingListRequest&, DescribeOtherCHDFSBindingListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOtherCHDFSBindingListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQueryResponse> DescribeQueryOutcome;
                typedef std::future<DescribeQueryOutcome> DescribeQueryOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeQueryRequest&, DescribeQueryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQueryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResultDownloadResponse> DescribeResultDownloadOutcome;
                typedef std::future<DescribeResultDownloadOutcome> DescribeResultDownloadOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeResultDownloadRequest&, DescribeResultDownloadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResultDownloadAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSparkAppJobResponse> DescribeSparkAppJobOutcome;
                typedef std::future<DescribeSparkAppJobOutcome> DescribeSparkAppJobOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSparkAppJobRequest&, DescribeSparkAppJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkAppJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSparkAppJobsResponse> DescribeSparkAppJobsOutcome;
                typedef std::future<DescribeSparkAppJobsOutcome> DescribeSparkAppJobsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSparkAppJobsRequest&, DescribeSparkAppJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkAppJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSparkAppTasksResponse> DescribeSparkAppTasksOutcome;
                typedef std::future<DescribeSparkAppTasksOutcome> DescribeSparkAppTasksOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSparkAppTasksRequest&, DescribeSparkAppTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkAppTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSparkSessionBatchSqlLogResponse> DescribeSparkSessionBatchSqlLogOutcome;
                typedef std::future<DescribeSparkSessionBatchSqlLogOutcome> DescribeSparkSessionBatchSqlLogOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSparkSessionBatchSqlLogRequest&, DescribeSparkSessionBatchSqlLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkSessionBatchSqlLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStoreLocationResponse> DescribeStoreLocationOutcome;
                typedef std::future<DescribeStoreLocationOutcome> DescribeStoreLocationOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeStoreLocationRequest&, DescribeStoreLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStoreLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubUserAccessPolicyResponse> DescribeSubUserAccessPolicyOutcome;
                typedef std::future<DescribeSubUserAccessPolicyOutcome> DescribeSubUserAccessPolicyOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSubUserAccessPolicyRequest&, DescribeSubUserAccessPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubUserAccessPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTablesNameResponse> DescribeTablesNameOutcome;
                typedef std::future<DescribeTablesNameOutcome> DescribeTablesNameOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTablesNameRequest&, DescribeTablesNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesNameAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskResultResponse> DescribeTaskResultOutcome;
                typedef std::future<DescribeTaskResultOutcome> DescribeTaskResultOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTaskResultRequest&, DescribeTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskStatisticsResponse> DescribeTaskStatisticsOutcome;
                typedef std::future<DescribeTaskStatisticsOutcome> DescribeTaskStatisticsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTaskStatisticsRequest&, DescribeTaskStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeThirdPartyAccessUserResponse> DescribeThirdPartyAccessUserOutcome;
                typedef std::future<DescribeThirdPartyAccessUserOutcome> DescribeThirdPartyAccessUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeThirdPartyAccessUserRequest&, DescribeThirdPartyAccessUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeThirdPartyAccessUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUpdatableDataEnginesResponse> DescribeUpdatableDataEnginesOutcome;
                typedef std::future<DescribeUpdatableDataEnginesOutcome> DescribeUpdatableDataEnginesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeUpdatableDataEnginesRequest&, DescribeUpdatableDataEnginesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpdatableDataEnginesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserDataEngineConfigResponse> DescribeUserDataEngineConfigOutcome;
                typedef std::future<DescribeUserDataEngineConfigOutcome> DescribeUserDataEngineConfigOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeUserDataEngineConfigRequest&, DescribeUserDataEngineConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDataEngineConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserInfoResponse> DescribeUserInfoOutcome;
                typedef std::future<DescribeUserInfoOutcome> DescribeUserInfoOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeUserInfoRequest&, DescribeUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserRolesResponse> DescribeUserRolesOutcome;
                typedef std::future<DescribeUserRolesOutcome> DescribeUserRolesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeUserRolesRequest&, DescribeUserRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserTypeResponse> DescribeUserTypeOutcome;
                typedef std::future<DescribeUserTypeOutcome> DescribeUserTypeOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeUserTypeRequest&, DescribeUserTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsersResponse> DescribeUsersOutcome;
                typedef std::future<DescribeUsersOutcome> DescribeUsersOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeUsersRequest&, DescribeUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkGroupInfoResponse> DescribeWorkGroupInfoOutcome;
                typedef std::future<DescribeWorkGroupInfoOutcome> DescribeWorkGroupInfoOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeWorkGroupInfoRequest&, DescribeWorkGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkGroupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkGroupsResponse> DescribeWorkGroupsOutcome;
                typedef std::future<DescribeWorkGroupsOutcome> DescribeWorkGroupsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeWorkGroupsRequest&, DescribeWorkGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachUserPolicyResponse> DetachUserPolicyOutcome;
                typedef std::future<DetachUserPolicyOutcome> DetachUserPolicyOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DetachUserPolicyRequest&, DetachUserPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachUserPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachWorkGroupPolicyResponse> DetachWorkGroupPolicyOutcome;
                typedef std::future<DetachWorkGroupPolicyOutcome> DetachWorkGroupPolicyOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DetachWorkGroupPolicyRequest&, DetachWorkGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachWorkGroupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DropDLCTableResponse> DropDLCTableOutcome;
                typedef std::future<DropDLCTableOutcome> DropDLCTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DropDLCTableRequest&, DropDLCTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DropDLCTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DropDMSDatabaseResponse> DropDMSDatabaseOutcome;
                typedef std::future<DropDMSDatabaseOutcome> DropDMSDatabaseOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DropDMSDatabaseRequest&, DropDMSDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DropDMSDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DropDMSTableResponse> DropDMSTableOutcome;
                typedef std::future<DropDMSTableOutcome> DropDMSTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DropDMSTableRequest&, DropDMSTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DropDMSTableAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateCreateMangedTableSqlResponse> GenerateCreateMangedTableSqlOutcome;
                typedef std::future<GenerateCreateMangedTableSqlOutcome> GenerateCreateMangedTableSqlOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::GenerateCreateMangedTableSqlRequest&, GenerateCreateMangedTableSqlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateCreateMangedTableSqlAsyncHandler;
                typedef Outcome<Core::Error, Model::GetOptimizerPolicyResponse> GetOptimizerPolicyOutcome;
                typedef std::future<GetOptimizerPolicyOutcome> GetOptimizerPolicyOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::GetOptimizerPolicyRequest&, GetOptimizerPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOptimizerPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::GrantDLCCatalogAccessResponse> GrantDLCCatalogAccessOutcome;
                typedef std::future<GrantDLCCatalogAccessOutcome> GrantDLCCatalogAccessOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::GrantDLCCatalogAccessRequest&, GrantDLCCatalogAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GrantDLCCatalogAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAdvancedStoreLocationResponse> ModifyAdvancedStoreLocationOutcome;
                typedef std::future<ModifyAdvancedStoreLocationOutcome> ModifyAdvancedStoreLocationOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifyAdvancedStoreLocationRequest&, ModifyAdvancedStoreLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAdvancedStoreLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDataEngineDescriptionResponse> ModifyDataEngineDescriptionOutcome;
                typedef std::future<ModifyDataEngineDescriptionOutcome> ModifyDataEngineDescriptionOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifyDataEngineDescriptionRequest&, ModifyDataEngineDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataEngineDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGovernEventRuleResponse> ModifyGovernEventRuleOutcome;
                typedef std::future<ModifyGovernEventRuleOutcome> ModifyGovernEventRuleOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifyGovernEventRuleRequest&, ModifyGovernEventRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGovernEventRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySparkAppResponse> ModifySparkAppOutcome;
                typedef std::future<ModifySparkAppOutcome> ModifySparkAppOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifySparkAppRequest&, ModifySparkAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySparkAppAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySparkAppBatchResponse> ModifySparkAppBatchOutcome;
                typedef std::future<ModifySparkAppBatchOutcome> ModifySparkAppBatchOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifySparkAppBatchRequest&, ModifySparkAppBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySparkAppBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserResponse> ModifyUserOutcome;
                typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifyUserRequest&, ModifyUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserTypeResponse> ModifyUserTypeOutcome;
                typedef std::future<ModifyUserTypeOutcome> ModifyUserTypeOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifyUserTypeRequest&, ModifyUserTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkGroupResponse> ModifyWorkGroupOutcome;
                typedef std::future<ModifyWorkGroupOutcome> ModifyWorkGroupOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifyWorkGroupRequest&, ModifyWorkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryResultResponse> QueryResultOutcome;
                typedef std::future<QueryResultOutcome> QueryResultOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::QueryResultRequest&, QueryResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryResultAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryTaskCostDetailResponse> QueryTaskCostDetailOutcome;
                typedef std::future<QueryTaskCostDetailOutcome> QueryTaskCostDetailOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::QueryTaskCostDetailRequest&, QueryTaskCostDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryTaskCostDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterThirdPartyAccessUserResponse> RegisterThirdPartyAccessUserOutcome;
                typedef std::future<RegisterThirdPartyAccessUserOutcome> RegisterThirdPartyAccessUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::RegisterThirdPartyAccessUserRequest&, RegisterThirdPartyAccessUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterThirdPartyAccessUserAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewDataEngineResponse> RenewDataEngineOutcome;
                typedef std::future<RenewDataEngineOutcome> RenewDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::RenewDataEngineRequest&, RenewDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartDataEngineResponse> RestartDataEngineOutcome;
                typedef std::future<RestartDataEngineOutcome> RestartDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::RestartDataEngineRequest&, RestartDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::RevokeDLCCatalogAccessResponse> RevokeDLCCatalogAccessOutcome;
                typedef std::future<RevokeDLCCatalogAccessOutcome> RevokeDLCCatalogAccessOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::RevokeDLCCatalogAccessRequest&, RevokeDLCCatalogAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevokeDLCCatalogAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackDataEngineImageResponse> RollbackDataEngineImageOutcome;
                typedef std::future<RollbackDataEngineImageOutcome> RollbackDataEngineImageOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::RollbackDataEngineImageRequest&, RollbackDataEngineImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackDataEngineImageAsyncHandler;
                typedef Outcome<Core::Error, Model::SuspendResumeDataEngineResponse> SuspendResumeDataEngineOutcome;
                typedef std::future<SuspendResumeDataEngineOutcome> SuspendResumeDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::SuspendResumeDataEngineRequest&, SuspendResumeDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SuspendResumeDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchDataEngineResponse> SwitchDataEngineOutcome;
                typedef std::future<SwitchDataEngineOutcome> SwitchDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::SwitchDataEngineRequest&, SwitchDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchDataEngineImageResponse> SwitchDataEngineImageOutcome;
                typedef std::future<SwitchDataEngineImageOutcome> SwitchDataEngineImageOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::SwitchDataEngineImageRequest&, SwitchDataEngineImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDataEngineImageAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindWorkGroupsFromUserResponse> UnbindWorkGroupsFromUserOutcome;
                typedef std::future<UnbindWorkGroupsFromUserOutcome> UnbindWorkGroupsFromUserOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::UnbindWorkGroupsFromUserRequest&, UnbindWorkGroupsFromUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindWorkGroupsFromUserAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDataEngineResponse> UpdateDataEngineOutcome;
                typedef std::future<UpdateDataEngineOutcome> UpdateDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::UpdateDataEngineRequest&, UpdateDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDataEngineConfigResponse> UpdateDataEngineConfigOutcome;
                typedef std::future<UpdateDataEngineConfigOutcome> UpdateDataEngineConfigOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::UpdateDataEngineConfigRequest&, UpdateDataEngineConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDataEngineConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRowFilterResponse> UpdateRowFilterOutcome;
                typedef std::future<UpdateRowFilterOutcome> UpdateRowFilterOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::UpdateRowFilterRequest&, UpdateRowFilterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRowFilterAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateUserDataEngineConfigResponse> UpdateUserDataEngineConfigOutcome;
                typedef std::future<UpdateUserDataEngineConfigOutcome> UpdateUserDataEngineConfigOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::UpdateUserDataEngineConfigRequest&, UpdateUserDataEngineConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserDataEngineConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDataEngineImageResponse> UpgradeDataEngineImageOutcome;
                typedef std::future<UpgradeDataEngineImageOutcome> UpgradeDataEngineImageOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::UpgradeDataEngineImageRequest&, UpgradeDataEngineImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDataEngineImageAsyncHandler;



                /**
                 *This API is used to add users to working groups.
                 * @param req AddUsersToWorkGroupRequest
                 * @return AddUsersToWorkGroupOutcome
                 */
                AddUsersToWorkGroupOutcome AddUsersToWorkGroup(const Model::AddUsersToWorkGroupRequest &request);
                void AddUsersToWorkGroupAsync(const Model::AddUsersToWorkGroupRequest& request, const AddUsersToWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUsersToWorkGroupOutcomeCallable AddUsersToWorkGroupCallable(const Model::AddUsersToWorkGroupRequest& request);

                /**
                 *This API is used to update databases in the DMS metadata module.
                 * @param req AlterDMSDatabaseRequest
                 * @return AlterDMSDatabaseOutcome
                 */
                AlterDMSDatabaseOutcome AlterDMSDatabase(const Model::AlterDMSDatabaseRequest &request);
                void AlterDMSDatabaseAsync(const Model::AlterDMSDatabaseRequest& request, const AlterDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AlterDMSDatabaseOutcomeCallable AlterDMSDatabaseCallable(const Model::AlterDMSDatabaseRequest& request);

                /**
                 *This API is used to bind the authentication policy to the user.
                 * @param req AttachUserPolicyRequest
                 * @return AttachUserPolicyOutcome
                 */
                AttachUserPolicyOutcome AttachUserPolicy(const Model::AttachUserPolicyRequest &request);
                void AttachUserPolicyAsync(const Model::AttachUserPolicyRequest& request, const AttachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachUserPolicyOutcomeCallable AttachUserPolicyCallable(const Model::AttachUserPolicyRequest& request);

                /**
                 *This API is used to bind an authentication policy to a working group.
                 * @param req AttachWorkGroupPolicyRequest
                 * @return AttachWorkGroupPolicyOutcome
                 */
                AttachWorkGroupPolicyOutcome AttachWorkGroupPolicy(const Model::AttachWorkGroupPolicyRequest &request);
                void AttachWorkGroupPolicyAsync(const Model::AttachWorkGroupPolicyRequest& request, const AttachWorkGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachWorkGroupPolicyOutcomeCallable AttachWorkGroupPolicyCallable(const Model::AttachWorkGroupPolicyRequest& request);

                /**
                 *This API is used to bind working groups to users.
                 * @param req BindWorkGroupsToUserRequest
                 * @return BindWorkGroupsToUserOutcome
                 */
                BindWorkGroupsToUserOutcome BindWorkGroupsToUser(const Model::BindWorkGroupsToUserRequest &request);
                void BindWorkGroupsToUserAsync(const Model::BindWorkGroupsToUserRequest& request, const BindWorkGroupsToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindWorkGroupsToUserOutcomeCallable BindWorkGroupsToUserCallable(const Model::BindWorkGroupsToUserRequest& request);

                /**
                 *This API is used to cancel a Spark SQL batch task.
                 * @param req CancelSparkSessionBatchSQLRequest
                 * @return CancelSparkSessionBatchSQLOutcome
                 */
                CancelSparkSessionBatchSQLOutcome CancelSparkSessionBatchSQL(const Model::CancelSparkSessionBatchSQLRequest &request);
                void CancelSparkSessionBatchSQLAsync(const Model::CancelSparkSessionBatchSQLRequest& request, const CancelSparkSessionBatchSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelSparkSessionBatchSQLOutcomeCallable CancelSparkSessionBatchSQLCallable(const Model::CancelSparkSessionBatchSQLRequest& request);

                /**
                 *This API is used to cancel a task.
                 * @param req CancelTaskRequest
                 * @return CancelTaskOutcome
                 */
                CancelTaskOutcome CancelTask(const Model::CancelTaskRequest &request);
                void CancelTaskAsync(const Model::CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelTaskOutcomeCallable CancelTaskCallable(const Model::CancelTaskRequest& request);

                /**
                 *This API is used to check the validity of the engine's user-defined parameters.
                 * @param req CheckDataEngineConfigPairsValidityRequest
                 * @return CheckDataEngineConfigPairsValidityOutcome
                 */
                CheckDataEngineConfigPairsValidityOutcome CheckDataEngineConfigPairsValidity(const Model::CheckDataEngineConfigPairsValidityRequest &request);
                void CheckDataEngineConfigPairsValidityAsync(const Model::CheckDataEngineConfigPairsValidityRequest& request, const CheckDataEngineConfigPairsValidityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckDataEngineConfigPairsValidityOutcomeCallable CheckDataEngineConfigPairsValidityCallable(const Model::CheckDataEngineConfigPairsValidityRequest& request);

                /**
                 *This API is used to check whether the cluster can be rolled back.
                 * @param req CheckDataEngineImageCanBeRollbackRequest
                 * @return CheckDataEngineImageCanBeRollbackOutcome
                 */
                CheckDataEngineImageCanBeRollbackOutcome CheckDataEngineImageCanBeRollback(const Model::CheckDataEngineImageCanBeRollbackRequest &request);
                void CheckDataEngineImageCanBeRollbackAsync(const Model::CheckDataEngineImageCanBeRollbackRequest& request, const CheckDataEngineImageCanBeRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckDataEngineImageCanBeRollbackOutcomeCallable CheckDataEngineImageCanBeRollbackCallable(const Model::CheckDataEngineImageCanBeRollbackRequest& request);

                /**
                 *This API is used to check whether the cluster image can be upgraded.
                 * @param req CheckDataEngineImageCanBeUpgradeRequest
                 * @return CheckDataEngineImageCanBeUpgradeOutcome
                 */
                CheckDataEngineImageCanBeUpgradeOutcome CheckDataEngineImageCanBeUpgrade(const Model::CheckDataEngineImageCanBeUpgradeRequest &request);
                void CheckDataEngineImageCanBeUpgradeAsync(const Model::CheckDataEngineImageCanBeUpgradeRequest& request, const CheckDataEngineImageCanBeUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckDataEngineImageCanBeUpgradeOutcomeCallable CheckDataEngineImageCanBeUpgradeCallable(const Model::CheckDataEngineImageCanBeUpgradeRequest& request);

                /**
                 *This API is used to check the permission status.
                 * @param req CheckGrantedPermissionRequest
                 * @return CheckGrantedPermissionOutcome
                 */
                CheckGrantedPermissionOutcome CheckGrantedPermission(const Model::CheckGrantedPermissionRequest &request);
                void CheckGrantedPermissionAsync(const Model::CheckGrantedPermissionRequest& request, const CheckGrantedPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckGrantedPermissionOutcomeCallable CheckGrantedPermissionCallable(const Model::CheckGrantedPermissionRequest& request);

                /**
                 *This API is used to copy a table.
                 * @param req CopyDLCTableRequest
                 * @return CopyDLCTableOutcome
                 */
                CopyDLCTableOutcome CopyDLCTable(const Model::CopyDLCTableRequest &request);
                void CopyDLCTableAsync(const Model::CopyDLCTableRequest& request, const CopyDLCTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyDLCTableOutcomeCallable CopyDLCTableCallable(const Model::CopyDLCTableRequest& request);

                /**
                 *This API is used to create metadata acceleration buckets and the binding relationship between products.
                 * @param req CreateCHDFSBindingProductRequest
                 * @return CreateCHDFSBindingProductOutcome
                 */
                CreateCHDFSBindingProductOutcome CreateCHDFSBindingProduct(const Model::CreateCHDFSBindingProductRequest &request);
                void CreateCHDFSBindingProductAsync(const Model::CreateCHDFSBindingProductRequest& request, const CreateCHDFSBindingProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCHDFSBindingProductOutcomeCallable CreateCHDFSBindingProductCallable(const Model::CreateCHDFSBindingProductRequest& request);

                /**
                 *This API is used to create a table.
                 * @param req CreateDLCTableRequest
                 * @return CreateDLCTableOutcome
                 */
                CreateDLCTableOutcome CreateDLCTable(const Model::CreateDLCTableRequest &request);
                void CreateDLCTableAsync(const Model::CreateDLCTableRequest& request, const CreateDLCTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDLCTableOutcomeCallable CreateDLCTableCallable(const Model::CreateDLCTableRequest& request);

                /**
                 *This API is used to create databases in the DMS metadata module.
                 * @param req CreateDMSDatabaseRequest
                 * @return CreateDMSDatabaseOutcome
                 */
                CreateDMSDatabaseOutcome CreateDMSDatabase(const Model::CreateDMSDatabaseRequest &request);
                void CreateDMSDatabaseAsync(const Model::CreateDMSDatabaseRequest& request, const CreateDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDMSDatabaseOutcomeCallable CreateDMSDatabaseCallable(const Model::CreateDMSDatabaseRequest& request);

                /**
                 *This API is used to create a data engine.
                 * @param req CreateDataEngineRequest
                 * @return CreateDataEngineOutcome
                 */
                CreateDataEngineOutcome CreateDataEngine(const Model::CreateDataEngineRequest &request);
                void CreateDataEngineAsync(const Model::CreateDataEngineRequest& request, const CreateDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDataEngineOutcomeCallable CreateDataEngineCallable(const Model::CreateDataEngineRequest& request);

                /**
                 *This API is used to create a managed internal table. It has been disused.
                 * @param req CreateInternalTableRequest
                 * @return CreateInternalTableOutcome
                 */
                CreateInternalTableOutcome CreateInternalTable(const Model::CreateInternalTableRequest &request);
                void CreateInternalTableAsync(const Model::CreateInternalTableRequest& request, const CreateInternalTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInternalTableOutcomeCallable CreateInternalTableCallable(const Model::CreateInternalTableRequest& request);

                /**
                 *This API is used to create a query result download task.
                 * @param req CreateResultDownloadRequest
                 * @return CreateResultDownloadOutcome
                 */
                CreateResultDownloadOutcome CreateResultDownload(const Model::CreateResultDownloadRequest &request);
                void CreateResultDownloadAsync(const Model::CreateResultDownloadRequest& request, const CreateResultDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateResultDownloadOutcomeCallable CreateResultDownloadCallable(const Model::CreateResultDownloadRequest& request);

                /**
                 *This API is used to create a Spark job.
                 * @param req CreateSparkAppRequest
                 * @return CreateSparkAppOutcome
                 */
                CreateSparkAppOutcome CreateSparkApp(const Model::CreateSparkAppRequest &request);
                void CreateSparkAppAsync(const Model::CreateSparkAppRequest& request, const CreateSparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSparkAppOutcomeCallable CreateSparkAppCallable(const Model::CreateSparkAppRequest& request);

                /**
                 *This API is used to start a Spark job.
                 * @param req CreateSparkAppTaskRequest
                 * @return CreateSparkAppTaskOutcome
                 */
                CreateSparkAppTaskOutcome CreateSparkAppTask(const Model::CreateSparkAppTaskRequest &request);
                void CreateSparkAppTaskAsync(const Model::CreateSparkAppTaskRequest& request, const CreateSparkAppTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSparkAppTaskOutcomeCallable CreateSparkAppTaskCallable(const Model::CreateSparkAppTaskRequest& request);

                /**
                 *This API is used to submit a Spark SQL batch task to the job engine.
                 * @param req CreateSparkSessionBatchSQLRequest
                 * @return CreateSparkSessionBatchSQLOutcome
                 */
                CreateSparkSessionBatchSQLOutcome CreateSparkSessionBatchSQL(const Model::CreateSparkSessionBatchSQLRequest &request);
                void CreateSparkSessionBatchSQLAsync(const Model::CreateSparkSessionBatchSQLRequest& request, const CreateSparkSessionBatchSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSparkSessionBatchSQLOutcomeCallable CreateSparkSessionBatchSQLCallable(const Model::CreateSparkSessionBatchSQLRequest& request);

                /**
                 *This API is used to add or overwrite the storage location of results.
                 * @param req CreateStoreLocationRequest
                 * @return CreateStoreLocationOutcome
                 */
                CreateStoreLocationOutcome CreateStoreLocation(const Model::CreateStoreLocationRequest &request);
                void CreateStoreLocationAsync(const Model::CreateStoreLocationRequest& request, const CreateStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStoreLocationOutcomeCallable CreateStoreLocationCallable(const Model::CreateStoreLocationRequest& request);

                /**
                 *This API is used to create and execute a SQL task. (`CreateTasks` is recommended.)
                 * @param req CreateTaskRequest
                 * @return CreateTaskOutcome
                 */
                CreateTaskOutcome CreateTask(const Model::CreateTaskRequest &request);
                void CreateTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskOutcomeCallable CreateTaskCallable(const Model::CreateTaskRequest& request);

                /**
                 *This API is used to create and execute SQL tasks in batches.
                 * @param req CreateTasksRequest
                 * @return CreateTasksOutcome
                 */
                CreateTasksOutcome CreateTasks(const Model::CreateTasksRequest &request);
                void CreateTasksAsync(const Model::CreateTasksRequest& request, const CreateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTasksOutcomeCallable CreateTasksCallable(const Model::CreateTasksRequest& request);

                /**
                 *This API is used to create users.
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *This API is used to create working groups.
                 * @param req CreateWorkGroupRequest
                 * @return CreateWorkGroupOutcome
                 */
                CreateWorkGroupOutcome CreateWorkGroup(const Model::CreateWorkGroupRequest &request);
                void CreateWorkGroupAsync(const Model::CreateWorkGroupRequest& request, const CreateWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkGroupOutcomeCallable CreateWorkGroupCallable(const Model::CreateWorkGroupRequest& request);

                /**
                 *This API is used to delete the binding relationship between metadata acceleration buckets and products.
                 * @param req DeleteCHDFSBindingProductRequest
                 * @return DeleteCHDFSBindingProductOutcome
                 */
                DeleteCHDFSBindingProductOutcome DeleteCHDFSBindingProduct(const Model::DeleteCHDFSBindingProductRequest &request);
                void DeleteCHDFSBindingProductAsync(const Model::DeleteCHDFSBindingProductRequest& request, const DeleteCHDFSBindingProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCHDFSBindingProductOutcomeCallable DeleteCHDFSBindingProductCallable(const Model::DeleteCHDFSBindingProductRequest& request);

                /**
                 *This API is used to delete the data engine.
                 * @param req DeleteDataEngineRequest
                 * @return DeleteDataEngineOutcome
                 */
                DeleteDataEngineOutcome DeleteDataEngine(const Model::DeleteDataEngineRequest &request);
                void DeleteDataEngineAsync(const Model::DeleteDataEngineRequest& request, const DeleteDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDataEngineOutcomeCallable DeleteDataEngineCallable(const Model::DeleteDataEngineRequest& request);

                /**
                 *This API is used to delete a Spark job.
                 * @param req DeleteSparkAppRequest
                 * @return DeleteSparkAppOutcome
                 */
                DeleteSparkAppOutcome DeleteSparkApp(const Model::DeleteSparkAppRequest &request);
                void DeleteSparkAppAsync(const Model::DeleteSparkAppRequest& request, const DeleteSparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSparkAppOutcomeCallable DeleteSparkAppCallable(const Model::DeleteSparkAppRequest& request);

                /**
                 *This API is used to remove visits through the third-party platform.
                 * @param req DeleteThirdPartyAccessUserRequest
                 * @return DeleteThirdPartyAccessUserOutcome
                 */
                DeleteThirdPartyAccessUserOutcome DeleteThirdPartyAccessUser(const Model::DeleteThirdPartyAccessUserRequest &request);
                void DeleteThirdPartyAccessUserAsync(const Model::DeleteThirdPartyAccessUserRequest& request, const DeleteThirdPartyAccessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteThirdPartyAccessUserOutcomeCallable DeleteThirdPartyAccessUserCallable(const Model::DeleteThirdPartyAccessUserRequest& request);

                /**
                 *This API is used to delete users.
                 * @param req DeleteUserRequest
                 * @return DeleteUserOutcome
                 */
                DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest &request);
                void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request);

                /**
                 *This API is used to delete users from working groups.
                 * @param req DeleteUsersFromWorkGroupRequest
                 * @return DeleteUsersFromWorkGroupOutcome
                 */
                DeleteUsersFromWorkGroupOutcome DeleteUsersFromWorkGroup(const Model::DeleteUsersFromWorkGroupRequest &request);
                void DeleteUsersFromWorkGroupAsync(const Model::DeleteUsersFromWorkGroupRequest& request, const DeleteUsersFromWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUsersFromWorkGroupOutcomeCallable DeleteUsersFromWorkGroupCallable(const Model::DeleteUsersFromWorkGroupRequest& request);

                /**
                 *This API is used to delete working groups.
                 * @param req DeleteWorkGroupRequest
                 * @return DeleteWorkGroupOutcome
                 */
                DeleteWorkGroupOutcome DeleteWorkGroup(const Model::DeleteWorkGroupRequest &request);
                void DeleteWorkGroupAsync(const Model::DeleteWorkGroupRequest& request, const DeleteWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkGroupOutcomeCallable DeleteWorkGroupCallable(const Model::DeleteWorkGroupRequest& request);

                /**
                 *This API is used to query the advanced settings of the SQL query interface.
                 * @param req DescribeAdvancedStoreLocationRequest
                 * @return DescribeAdvancedStoreLocationOutcome
                 */
                DescribeAdvancedStoreLocationOutcome DescribeAdvancedStoreLocation(const Model::DescribeAdvancedStoreLocationRequest &request);
                void DescribeAdvancedStoreLocationAsync(const Model::DescribeAdvancedStoreLocationRequest& request, const DescribeAdvancedStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAdvancedStoreLocationOutcomeCallable DescribeAdvancedStoreLocationCallable(const Model::DescribeAdvancedStoreLocationRequest& request);

                /**
                 *This API is used to query the DLC Catalog authorization list.
                 * @param req DescribeDLCCatalogAccessRequest
                 * @return DescribeDLCCatalogAccessOutcome
                 */
                DescribeDLCCatalogAccessOutcome DescribeDLCCatalogAccess(const Model::DescribeDLCCatalogAccessRequest &request);
                void DescribeDLCCatalogAccessAsync(const Model::DescribeDLCCatalogAccessRequest& request, const DescribeDLCCatalogAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDLCCatalogAccessOutcomeCallable DescribeDLCCatalogAccessCallable(const Model::DescribeDLCCatalogAccessRequest& request);

                /**
                 *This API is used to obtain the table.
                 * @param req DescribeDLCTableRequest
                 * @return DescribeDLCTableOutcome
                 */
                DescribeDLCTableOutcome DescribeDLCTable(const Model::DescribeDLCTableRequest &request);
                void DescribeDLCTableAsync(const Model::DescribeDLCTableRequest& request, const DescribeDLCTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDLCTableOutcomeCallable DescribeDLCTableCallable(const Model::DescribeDLCTableRequest& request);

                /**
                 *This API is used to obtain the list of tables.
                 * @param req DescribeDLCTableListRequest
                 * @return DescribeDLCTableListOutcome
                 */
                DescribeDLCTableListOutcome DescribeDLCTableList(const Model::DescribeDLCTableListRequest &request);
                void DescribeDLCTableListAsync(const Model::DescribeDLCTableListRequest& request, const DescribeDLCTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDLCTableListOutcomeCallable DescribeDLCTableListCallable(const Model::DescribeDLCTableListRequest& request);

                /**
                 *This API is used to obtain databases in the DMS metadata module.
                 * @param req DescribeDMSDatabaseRequest
                 * @return DescribeDMSDatabaseOutcome
                 */
                DescribeDMSDatabaseOutcome DescribeDMSDatabase(const Model::DescribeDMSDatabaseRequest &request);
                void DescribeDMSDatabaseAsync(const Model::DescribeDMSDatabaseRequest& request, const DescribeDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDMSDatabaseOutcomeCallable DescribeDMSDatabaseCallable(const Model::DescribeDMSDatabaseRequest& request);

                /**
                 *This API is used to obtain the list of databases.
                 * @param req DescribeDMSDatabaseListRequest
                 * @return DescribeDMSDatabaseListOutcome
                 */
                DescribeDMSDatabaseListOutcome DescribeDMSDatabaseList(const Model::DescribeDMSDatabaseListRequest &request);
                void DescribeDMSDatabaseListAsync(const Model::DescribeDMSDatabaseListRequest& request, const DescribeDMSDatabaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDMSDatabaseListOutcomeCallable DescribeDMSDatabaseListCallable(const Model::DescribeDMSDatabaseListRequest& request);

                /**
                 *This API is used to obtain detailed data engine information based on names.
                 * @param req DescribeDataEngineRequest
                 * @return DescribeDataEngineOutcome
                 */
                DescribeDataEngineOutcome DescribeDataEngine(const Model::DescribeDataEngineRequest &request);
                void DescribeDataEngineAsync(const Model::DescribeDataEngineRequest& request, const DescribeDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataEngineOutcomeCallable DescribeDataEngineCallable(const Model::DescribeDataEngineRequest& request);

                /**
                 *This API is used to obtain the major version image list of exclusive clusters.
                 * @param req DescribeDataEngineImageVersionsRequest
                 * @return DescribeDataEngineImageVersionsOutcome
                 */
                DescribeDataEngineImageVersionsOutcome DescribeDataEngineImageVersions(const Model::DescribeDataEngineImageVersionsRequest &request);
                void DescribeDataEngineImageVersionsAsync(const Model::DescribeDataEngineImageVersionsRequest& request, const DescribeDataEngineImageVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataEngineImageVersionsOutcomeCallable DescribeDataEngineImageVersionsCallable(const Model::DescribeDataEngineImageVersionsRequest& request);

                /**
                 *This API is used to obtain the PYSPARK image list.
                 * @param req DescribeDataEnginePythonSparkImagesRequest
                 * @return DescribeDataEnginePythonSparkImagesOutcome
                 */
                DescribeDataEnginePythonSparkImagesOutcome DescribeDataEnginePythonSparkImages(const Model::DescribeDataEnginePythonSparkImagesRequest &request);
                void DescribeDataEnginePythonSparkImagesAsync(const Model::DescribeDataEnginePythonSparkImagesRequest& request, const DescribeDataEnginePythonSparkImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataEnginePythonSparkImagesOutcomeCallable DescribeDataEnginePythonSparkImagesCallable(const Model::DescribeDataEnginePythonSparkImagesRequest& request);

                /**
                 *This API is used to query engine specification details.
                 * @param req DescribeDataEnginesScaleDetailRequest
                 * @return DescribeDataEnginesScaleDetailOutcome
                 */
                DescribeDataEnginesScaleDetailOutcome DescribeDataEnginesScaleDetail(const Model::DescribeDataEnginesScaleDetailRequest &request);
                void DescribeDataEnginesScaleDetailAsync(const Model::DescribeDataEnginesScaleDetailRequest& request, const DescribeDataEnginesScaleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataEnginesScaleDetailOutcomeCallable DescribeDataEnginesScaleDetailCallable(const Model::DescribeDataEnginesScaleDetailRequest& request);

                /**
                 *This API is used to query the resource usage of a data engine based on its ID.
                 * @param req DescribeEngineUsageInfoRequest
                 * @return DescribeEngineUsageInfoOutcome
                 */
                DescribeEngineUsageInfoOutcome DescribeEngineUsageInfo(const Model::DescribeEngineUsageInfoRequest &request);
                void DescribeEngineUsageInfoAsync(const Model::DescribeEngineUsageInfoRequest& request, const DescribeEngineUsageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEngineUsageInfoOutcomeCallable DescribeEngineUsageInfoCallable(const Model::DescribeEngineUsageInfoRequest& request);

                /**
                 *This API is used to get the list of disabled table attributes (new).
                 * @param req DescribeForbiddenTableProRequest
                 * @return DescribeForbiddenTableProOutcome
                 */
                DescribeForbiddenTableProOutcome DescribeForbiddenTablePro(const Model::DescribeForbiddenTableProRequest &request);
                void DescribeForbiddenTableProAsync(const Model::DescribeForbiddenTableProRequest& request, const DescribeForbiddenTableProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeForbiddenTableProOutcomeCallable DescribeForbiddenTableProCallable(const Model::DescribeForbiddenTableProRequest& request);

                /**
                 *This API is used to obtain the job information.
                 * @param req DescribeJobRequest
                 * @return DescribeJobOutcome
                 */
                DescribeJobOutcome DescribeJob(const Model::DescribeJobRequest &request);
                void DescribeJobAsync(const Model::DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobOutcomeCallable DescribeJobCallable(const Model::DescribeJobRequest& request);

                /**
                 *This API is used to obtain the list of job information.
                 * @param req DescribeJobsRequest
                 * @return DescribeJobsOutcome
                 */
                DescribeJobsOutcome DescribeJobs(const Model::DescribeJobsRequest &request);
                void DescribeJobsAsync(const Model::DescribeJobsRequest& request, const DescribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobsOutcomeCallable DescribeJobsCallable(const Model::DescribeJobsRequest& request);

                /**
                 *This API is used to query the summary of a specified directory in a managed storage.
                 * @param req DescribeLakeFsDirSummaryRequest
                 * @return DescribeLakeFsDirSummaryOutcome
                 */
                DescribeLakeFsDirSummaryOutcome DescribeLakeFsDirSummary(const Model::DescribeLakeFsDirSummaryRequest &request);
                void DescribeLakeFsDirSummaryAsync(const Model::DescribeLakeFsDirSummaryRequest& request, const DescribeLakeFsDirSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLakeFsDirSummaryOutcomeCallable DescribeLakeFsDirSummaryCallable(const Model::DescribeLakeFsDirSummaryRequest& request);

                /**
                 *This API is used to query managed storage information.
                 * @param req DescribeLakeFsInfoRequest
                 * @return DescribeLakeFsInfoOutcome
                 */
                DescribeLakeFsInfoOutcome DescribeLakeFsInfo(const Model::DescribeLakeFsInfoRequest &request);
                void DescribeLakeFsInfoAsync(const Model::DescribeLakeFsInfoRequest& request, const DescribeLakeFsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLakeFsInfoOutcomeCallable DescribeLakeFsInfoCallable(const Model::DescribeLakeFsInfoRequest& request);

                /**
                 *This API is used to query the list of metadata acceleration buckets bound to other products.
                 * @param req DescribeOtherCHDFSBindingListRequest
                 * @return DescribeOtherCHDFSBindingListOutcome
                 */
                DescribeOtherCHDFSBindingListOutcome DescribeOtherCHDFSBindingList(const Model::DescribeOtherCHDFSBindingListRequest &request);
                void DescribeOtherCHDFSBindingListAsync(const Model::DescribeOtherCHDFSBindingListRequest& request, const DescribeOtherCHDFSBindingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOtherCHDFSBindingListOutcomeCallable DescribeOtherCHDFSBindingListCallable(const Model::DescribeOtherCHDFSBindingListRequest& request);

                /**
                 *This API is used to obtain the query results.
                 * @param req DescribeQueryRequest
                 * @return DescribeQueryOutcome
                 */
                DescribeQueryOutcome DescribeQuery(const Model::DescribeQueryRequest &request);
                void DescribeQueryAsync(const Model::DescribeQueryRequest& request, const DescribeQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQueryOutcomeCallable DescribeQueryCallable(const Model::DescribeQueryRequest& request);

                /**
                 *This API is used to get a query result download task.
                 * @param req DescribeResultDownloadRequest
                 * @return DescribeResultDownloadOutcome
                 */
                DescribeResultDownloadOutcome DescribeResultDownload(const Model::DescribeResultDownloadRequest &request);
                void DescribeResultDownloadAsync(const Model::DescribeResultDownloadRequest& request, const DescribeResultDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResultDownloadOutcomeCallable DescribeResultDownloadCallable(const Model::DescribeResultDownloadRequest& request);

                /**
                 *u200cThis API is used to query the information of a Spark job.
                 * @param req DescribeSparkAppJobRequest
                 * @return DescribeSparkAppJobOutcome
                 */
                DescribeSparkAppJobOutcome DescribeSparkAppJob(const Model::DescribeSparkAppJobRequest &request);
                void DescribeSparkAppJobAsync(const Model::DescribeSparkAppJobRequest& request, const DescribeSparkAppJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSparkAppJobOutcomeCallable DescribeSparkAppJobCallable(const Model::DescribeSparkAppJobRequest& request);

                /**
                 *This API is used to query the list of Spark jobs.
                 * @param req DescribeSparkAppJobsRequest
                 * @return DescribeSparkAppJobsOutcome
                 */
                DescribeSparkAppJobsOutcome DescribeSparkAppJobs(const Model::DescribeSparkAppJobsRequest &request);
                void DescribeSparkAppJobsAsync(const Model::DescribeSparkAppJobsRequest& request, const DescribeSparkAppJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSparkAppJobsOutcomeCallable DescribeSparkAppJobsCallable(const Model::DescribeSparkAppJobsRequest& request);

                /**
                 *This API is used to query the list of running task instances of a Spark job.
                 * @param req DescribeSparkAppTasksRequest
                 * @return DescribeSparkAppTasksOutcome
                 */
                DescribeSparkAppTasksOutcome DescribeSparkAppTasks(const Model::DescribeSparkAppTasksRequest &request);
                void DescribeSparkAppTasksAsync(const Model::DescribeSparkAppTasksRequest& request, const DescribeSparkAppTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSparkAppTasksOutcomeCallable DescribeSparkAppTasksCallable(const Model::DescribeSparkAppTasksRequest& request);

                /**
                 *This API is used to query Spark SQL batch task logs.
                 * @param req DescribeSparkSessionBatchSqlLogRequest
                 * @return DescribeSparkSessionBatchSqlLogOutcome
                 */
                DescribeSparkSessionBatchSqlLogOutcome DescribeSparkSessionBatchSqlLog(const Model::DescribeSparkSessionBatchSqlLogRequest &request);
                void DescribeSparkSessionBatchSqlLogAsync(const Model::DescribeSparkSessionBatchSqlLogRequest& request, const DescribeSparkSessionBatchSqlLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSparkSessionBatchSqlLogOutcomeCallable DescribeSparkSessionBatchSqlLogCallable(const Model::DescribeSparkSessionBatchSqlLogRequest& request);

                /**
                 *This API is used to query the storage location of calculation results.
                 * @param req DescribeStoreLocationRequest
                 * @return DescribeStoreLocationOutcome
                 */
                DescribeStoreLocationOutcome DescribeStoreLocation(const Model::DescribeStoreLocationRequest &request);
                void DescribeStoreLocationAsync(const Model::DescribeStoreLocationRequest& request, const DescribeStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStoreLocationOutcomeCallable DescribeStoreLocationCallable(const Model::DescribeStoreLocationRequest& request);

                /**
                 *This API is used to query the sub-user's visiting policy for users accessing through the third-party platform.
                 * @param req DescribeSubUserAccessPolicyRequest
                 * @return DescribeSubUserAccessPolicyOutcome
                 */
                DescribeSubUserAccessPolicyOutcome DescribeSubUserAccessPolicy(const Model::DescribeSubUserAccessPolicyRequest &request);
                void DescribeSubUserAccessPolicyAsync(const Model::DescribeSubUserAccessPolicyRequest& request, const DescribeSubUserAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubUserAccessPolicyOutcomeCallable DescribeSubUserAccessPolicyCallable(const Model::DescribeSubUserAccessPolicyRequest& request);

                /**
                 *This API is used to query the data table name list.
                 * @param req DescribeTablesNameRequest
                 * @return DescribeTablesNameOutcome
                 */
                DescribeTablesNameOutcome DescribeTablesName(const Model::DescribeTablesNameRequest &request);
                void DescribeTablesNameAsync(const Model::DescribeTablesNameRequest& request, const DescribeTablesNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTablesNameOutcomeCallable DescribeTablesNameCallable(const Model::DescribeTablesNameRequest& request);

                /**
                 *This API is used to query the result of a task.
                 * @param req DescribeTaskResultRequest
                 * @return DescribeTaskResultOutcome
                 */
                DescribeTaskResultOutcome DescribeTaskResult(const Model::DescribeTaskResultRequest &request);
                void DescribeTaskResultAsync(const Model::DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskResultOutcomeCallable DescribeTaskResultCallable(const Model::DescribeTaskResultRequest& request);

                /**
                 *This API is used to describe the information on task statistics.
                 * @param req DescribeTaskStatisticsRequest
                 * @return DescribeTaskStatisticsOutcome
                 */
                DescribeTaskStatisticsOutcome DescribeTaskStatistics(const Model::DescribeTaskStatisticsRequest &request);
                void DescribeTaskStatisticsAsync(const Model::DescribeTaskStatisticsRequest& request, const DescribeTaskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskStatisticsOutcomeCallable DescribeTaskStatisticsCallable(const Model::DescribeTaskStatisticsRequest& request);

                /**
                 *This API is used to query the list of tasks.
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *This API is used to query the information of users visiting through the third-party platform.
                 * @param req DescribeThirdPartyAccessUserRequest
                 * @return DescribeThirdPartyAccessUserOutcome
                 */
                DescribeThirdPartyAccessUserOutcome DescribeThirdPartyAccessUser(const Model::DescribeThirdPartyAccessUserRequest &request);
                void DescribeThirdPartyAccessUserAsync(const Model::DescribeThirdPartyAccessUserRequest& request, const DescribeThirdPartyAccessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeThirdPartyAccessUserOutcomeCallable DescribeThirdPartyAccessUserCallable(const Model::DescribeThirdPartyAccessUserRequest& request);

                /**
                 *This API is used to query the list of engines that are able to upgrade their configuration.
                 * @param req DescribeUpdatableDataEnginesRequest
                 * @return DescribeUpdatableDataEnginesOutcome
                 */
                DescribeUpdatableDataEnginesOutcome DescribeUpdatableDataEngines(const Model::DescribeUpdatableDataEnginesRequest &request);
                void DescribeUpdatableDataEnginesAsync(const Model::DescribeUpdatableDataEnginesRequest& request, const DescribeUpdatableDataEnginesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUpdatableDataEnginesOutcomeCallable DescribeUpdatableDataEnginesCallable(const Model::DescribeUpdatableDataEnginesRequest& request);

                /**
                 *This API is used to query user-defined engine parameters.
                 * @param req DescribeUserDataEngineConfigRequest
                 * @return DescribeUserDataEngineConfigOutcome
                 */
                DescribeUserDataEngineConfigOutcome DescribeUserDataEngineConfig(const Model::DescribeUserDataEngineConfigRequest &request);
                void DescribeUserDataEngineConfigAsync(const Model::DescribeUserDataEngineConfigRequest& request, const DescribeUserDataEngineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserDataEngineConfigOutcomeCallable DescribeUserDataEngineConfigCallable(const Model::DescribeUserDataEngineConfigRequest& request);

                /**
                 *This API is used to get detailed user information.
                 * @param req DescribeUserInfoRequest
                 * @return DescribeUserInfoOutcome
                 */
                DescribeUserInfoOutcome DescribeUserInfo(const Model::DescribeUserInfoRequest &request);
                void DescribeUserInfoAsync(const Model::DescribeUserInfoRequest& request, const DescribeUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserInfoOutcomeCallable DescribeUserInfoCallable(const Model::DescribeUserInfoRequest& request);

                /**
                 *This API is used to enumerate user roles.
                 * @param req DescribeUserRolesRequest
                 * @return DescribeUserRolesOutcome
                 */
                DescribeUserRolesOutcome DescribeUserRoles(const Model::DescribeUserRolesRequest &request);
                void DescribeUserRolesAsync(const Model::DescribeUserRolesRequest& request, const DescribeUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserRolesOutcomeCallable DescribeUserRolesCallable(const Model::DescribeUserRolesRequest& request);

                /**
                 *This API is used to get the types of users.
                 * @param req DescribeUserTypeRequest
                 * @return DescribeUserTypeOutcome
                 */
                DescribeUserTypeOutcome DescribeUserType(const Model::DescribeUserTypeRequest &request);
                void DescribeUserTypeAsync(const Model::DescribeUserTypeRequest& request, const DescribeUserTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserTypeOutcomeCallable DescribeUserTypeCallable(const Model::DescribeUserTypeRequest& request);

                /**
                 *This API is used to obtain the user list.
                 * @param req DescribeUsersRequest
                 * @return DescribeUsersOutcome
                 */
                DescribeUsersOutcome DescribeUsers(const Model::DescribeUsersRequest &request);
                void DescribeUsersAsync(const Model::DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsersOutcomeCallable DescribeUsersCallable(const Model::DescribeUsersRequest& request);

                /**
                 *This API is used to get detailed information about working groups.
                 * @param req DescribeWorkGroupInfoRequest
                 * @return DescribeWorkGroupInfoOutcome
                 */
                DescribeWorkGroupInfoOutcome DescribeWorkGroupInfo(const Model::DescribeWorkGroupInfoRequest &request);
                void DescribeWorkGroupInfoAsync(const Model::DescribeWorkGroupInfoRequest& request, const DescribeWorkGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkGroupInfoOutcomeCallable DescribeWorkGroupInfoCallable(const Model::DescribeWorkGroupInfoRequest& request);

                /**
                 *This API is used to get a list of working groups.
                 * @param req DescribeWorkGroupsRequest
                 * @return DescribeWorkGroupsOutcome
                 */
                DescribeWorkGroupsOutcome DescribeWorkGroups(const Model::DescribeWorkGroupsRequest &request);
                void DescribeWorkGroupsAsync(const Model::DescribeWorkGroupsRequest& request, const DescribeWorkGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkGroupsOutcomeCallable DescribeWorkGroupsCallable(const Model::DescribeWorkGroupsRequest& request);

                /**
                 *This API is used to unbind the authentication policy from the user.
                 * @param req DetachUserPolicyRequest
                 * @return DetachUserPolicyOutcome
                 */
                DetachUserPolicyOutcome DetachUserPolicy(const Model::DetachUserPolicyRequest &request);
                void DetachUserPolicyAsync(const Model::DetachUserPolicyRequest& request, const DetachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachUserPolicyOutcomeCallable DetachUserPolicyCallable(const Model::DetachUserPolicyRequest& request);

                /**
                 *This API is used to unbind the authentication policy from the working group.
                 * @param req DetachWorkGroupPolicyRequest
                 * @return DetachWorkGroupPolicyOutcome
                 */
                DetachWorkGroupPolicyOutcome DetachWorkGroupPolicy(const Model::DetachWorkGroupPolicyRequest &request);
                void DetachWorkGroupPolicyAsync(const Model::DetachWorkGroupPolicyRequest& request, const DetachWorkGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachWorkGroupPolicyOutcomeCallable DetachWorkGroupPolicyCallable(const Model::DetachWorkGroupPolicyRequest& request);

                /**
                 *This API is used to delete the table.
                 * @param req DropDLCTableRequest
                 * @return DropDLCTableOutcome
                 */
                DropDLCTableOutcome DropDLCTable(const Model::DropDLCTableRequest &request);
                void DropDLCTableAsync(const Model::DropDLCTableRequest& request, const DropDLCTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DropDLCTableOutcomeCallable DropDLCTableCallable(const Model::DropDLCTableRequest& request);

                /**
                 *This API is used to delete databases in the DMS metadata module.
                 * @param req DropDMSDatabaseRequest
                 * @return DropDMSDatabaseOutcome
                 */
                DropDMSDatabaseOutcome DropDMSDatabase(const Model::DropDMSDatabaseRequest &request);
                void DropDMSDatabaseAsync(const Model::DropDMSDatabaseRequest& request, const DropDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DropDMSDatabaseOutcomeCallable DropDMSDatabaseCallable(const Model::DropDMSDatabaseRequest& request);

                /**
                 *This API is used to delete tables in the DMS metadata module.
                 * @param req DropDMSTableRequest
                 * @return DropDMSTableOutcome
                 */
                DropDMSTableOutcome DropDMSTable(const Model::DropDMSTableRequest &request);
                void DropDMSTableAsync(const Model::DropDMSTableRequest& request, const DropDMSTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DropDMSTableOutcomeCallable DropDMSTableCallable(const Model::DropDMSTableRequest& request);

                /**
                 *This API is used to generate SQL statements for creating a managed table.
                 * @param req GenerateCreateMangedTableSqlRequest
                 * @return GenerateCreateMangedTableSqlOutcome
                 */
                GenerateCreateMangedTableSqlOutcome GenerateCreateMangedTableSql(const Model::GenerateCreateMangedTableSqlRequest &request);
                void GenerateCreateMangedTableSqlAsync(const Model::GenerateCreateMangedTableSqlRequest& request, const GenerateCreateMangedTableSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateCreateMangedTableSqlOutcomeCallable GenerateCreateMangedTableSqlCallable(const Model::GenerateCreateMangedTableSqlRequest& request);

                /**
                 *GetOptimizerPolicy
                 * @param req GetOptimizerPolicyRequest
                 * @return GetOptimizerPolicyOutcome
                 */
                GetOptimizerPolicyOutcome GetOptimizerPolicy(const Model::GetOptimizerPolicyRequest &request);
                void GetOptimizerPolicyAsync(const Model::GetOptimizerPolicyRequest& request, const GetOptimizerPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetOptimizerPolicyOutcomeCallable GetOptimizerPolicyCallable(const Model::GetOptimizerPolicyRequest& request);

                /**
                 *This API is used to grant permissions for visiting DLC Catalog.
                 * @param req GrantDLCCatalogAccessRequest
                 * @return GrantDLCCatalogAccessOutcome
                 */
                GrantDLCCatalogAccessOutcome GrantDLCCatalogAccess(const Model::GrantDLCCatalogAccessRequest &request);
                void GrantDLCCatalogAccessAsync(const Model::GrantDLCCatalogAccessRequest& request, const GrantDLCCatalogAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GrantDLCCatalogAccessOutcomeCallable GrantDLCCatalogAccessCallable(const Model::GrantDLCCatalogAccessRequest& request);

                /**
                 *This API is used to modify the advanced settings of the SQL query interface.
                 * @param req ModifyAdvancedStoreLocationRequest
                 * @return ModifyAdvancedStoreLocationOutcome
                 */
                ModifyAdvancedStoreLocationOutcome ModifyAdvancedStoreLocation(const Model::ModifyAdvancedStoreLocationRequest &request);
                void ModifyAdvancedStoreLocationAsync(const Model::ModifyAdvancedStoreLocationRequest& request, const ModifyAdvancedStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAdvancedStoreLocationOutcomeCallable ModifyAdvancedStoreLocationCallable(const Model::ModifyAdvancedStoreLocationRequest& request);

                /**
                 *This API is used to modify the engine's description.
                 * @param req ModifyDataEngineDescriptionRequest
                 * @return ModifyDataEngineDescriptionOutcome
                 */
                ModifyDataEngineDescriptionOutcome ModifyDataEngineDescription(const Model::ModifyDataEngineDescriptionRequest &request);
                void ModifyDataEngineDescriptionAsync(const Model::ModifyDataEngineDescriptionRequest& request, const ModifyDataEngineDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDataEngineDescriptionOutcomeCallable ModifyDataEngineDescriptionCallable(const Model::ModifyDataEngineDescriptionRequest& request);

                /**
                 *This API is used to change data governance event thresholds.
                 * @param req ModifyGovernEventRuleRequest
                 * @return ModifyGovernEventRuleOutcome
                 */
                ModifyGovernEventRuleOutcome ModifyGovernEventRule(const Model::ModifyGovernEventRuleRequest &request);
                void ModifyGovernEventRuleAsync(const Model::ModifyGovernEventRuleRequest& request, const ModifyGovernEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGovernEventRuleOutcomeCallable ModifyGovernEventRuleCallable(const Model::ModifyGovernEventRuleRequest& request);

                /**
                 *This API is used to update a Spark job.
                 * @param req ModifySparkAppRequest
                 * @return ModifySparkAppOutcome
                 */
                ModifySparkAppOutcome ModifySparkApp(const Model::ModifySparkAppRequest &request);
                void ModifySparkAppAsync(const Model::ModifySparkAppRequest& request, const ModifySparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySparkAppOutcomeCallable ModifySparkAppCallable(const Model::ModifySparkAppRequest& request);

                /**
                 *This API is used to modify Spark job parameters in batches.
                 * @param req ModifySparkAppBatchRequest
                 * @return ModifySparkAppBatchOutcome
                 */
                ModifySparkAppBatchOutcome ModifySparkAppBatch(const Model::ModifySparkAppBatchRequest &request);
                void ModifySparkAppBatchAsync(const Model::ModifySparkAppBatchRequest& request, const ModifySparkAppBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySparkAppBatchOutcomeCallable ModifySparkAppBatchCallable(const Model::ModifySparkAppBatchRequest& request);

                /**
                 *This API is used to modify user information.
                 * @param req ModifyUserRequest
                 * @return ModifyUserOutcome
                 */
                ModifyUserOutcome ModifyUser(const Model::ModifyUserRequest &request);
                void ModifyUserAsync(const Model::ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserOutcomeCallable ModifyUserCallable(const Model::ModifyUserRequest& request);

                /**
                 *This API is used to modify the types of users. Only users who are also administrators can call this API to conduct the operation.
                 * @param req ModifyUserTypeRequest
                 * @return ModifyUserTypeOutcome
                 */
                ModifyUserTypeOutcome ModifyUserType(const Model::ModifyUserTypeRequest &request);
                void ModifyUserTypeAsync(const Model::ModifyUserTypeRequest& request, const ModifyUserTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserTypeOutcomeCallable ModifyUserTypeCallable(const Model::ModifyUserTypeRequest& request);

                /**
                 *This API is used to modify working group information.
                 * @param req ModifyWorkGroupRequest
                 * @return ModifyWorkGroupOutcome
                 */
                ModifyWorkGroupOutcome ModifyWorkGroup(const Model::ModifyWorkGroupRequest &request);
                void ModifyWorkGroupAsync(const Model::ModifyWorkGroupRequest& request, const ModifyWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkGroupOutcomeCallable ModifyWorkGroupCallable(const Model::ModifyWorkGroupRequest& request);

                /**
                 *This API is used to query the result of obtaining tasks.
                 * @param req QueryResultRequest
                 * @return QueryResultOutcome
                 */
                QueryResultOutcome QueryResult(const Model::QueryResultRequest &request);
                void QueryResultAsync(const Model::QueryResultRequest& request, const QueryResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryResultOutcomeCallable QueryResultCallable(const Model::QueryResultRequest& request);

                /**
                 *This API is used to query task consumption details.
                 * @param req QueryTaskCostDetailRequest
                 * @return QueryTaskCostDetailOutcome
                 */
                QueryTaskCostDetailOutcome QueryTaskCostDetail(const Model::QueryTaskCostDetailRequest &request);
                void QueryTaskCostDetailAsync(const Model::QueryTaskCostDetailRequest& request, const QueryTaskCostDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryTaskCostDetailOutcomeCallable QueryTaskCostDetailCallable(const Model::QueryTaskCostDetailRequest& request);

                /**
                 *This API is used to enable visits to the third-party platform.
                 * @param req RegisterThirdPartyAccessUserRequest
                 * @return RegisterThirdPartyAccessUserOutcome
                 */
                RegisterThirdPartyAccessUserOutcome RegisterThirdPartyAccessUser(const Model::RegisterThirdPartyAccessUserRequest &request);
                void RegisterThirdPartyAccessUserAsync(const Model::RegisterThirdPartyAccessUserRequest& request, const RegisterThirdPartyAccessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterThirdPartyAccessUserOutcomeCallable RegisterThirdPartyAccessUserCallable(const Model::RegisterThirdPartyAccessUserRequest& request);

                /**
                 *This API is used to renew the data engine.
                 * @param req RenewDataEngineRequest
                 * @return RenewDataEngineOutcome
                 */
                RenewDataEngineOutcome RenewDataEngine(const Model::RenewDataEngineRequest &request);
                void RenewDataEngineAsync(const Model::RenewDataEngineRequest& request, const RenewDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewDataEngineOutcomeCallable RenewDataEngineCallable(const Model::RenewDataEngineRequest& request);

                /**
                 *This API is used to restart engines.
                 * @param req RestartDataEngineRequest
                 * @return RestartDataEngineOutcome
                 */
                RestartDataEngineOutcome RestartDataEngine(const Model::RestartDataEngineRequest &request);
                void RestartDataEngineAsync(const Model::RestartDataEngineRequest& request, const RestartDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartDataEngineOutcomeCallable RestartDataEngineCallable(const Model::RestartDataEngineRequest& request);

                /**
                 *This API is used to revoke permissions for visiting DLC Catalog.
                 * @param req RevokeDLCCatalogAccessRequest
                 * @return RevokeDLCCatalogAccessOutcome
                 */
                RevokeDLCCatalogAccessOutcome RevokeDLCCatalogAccess(const Model::RevokeDLCCatalogAccessRequest &request);
                void RevokeDLCCatalogAccessAsync(const Model::RevokeDLCCatalogAccessRequest& request, const RevokeDLCCatalogAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevokeDLCCatalogAccessOutcomeCallable RevokeDLCCatalogAccessCallable(const Model::RevokeDLCCatalogAccessRequest& request);

                /**
                 *This API is used to roll back the versions of the engine image.
                 * @param req RollbackDataEngineImageRequest
                 * @return RollbackDataEngineImageOutcome
                 */
                RollbackDataEngineImageOutcome RollbackDataEngineImage(const Model::RollbackDataEngineImageRequest &request);
                void RollbackDataEngineImageAsync(const Model::RollbackDataEngineImageRequest& request, const RollbackDataEngineImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackDataEngineImageOutcomeCallable RollbackDataEngineImageCallable(const Model::RollbackDataEngineImageRequest& request);

                /**
                 *This API is used to suspend or start a data engine.
                 * @param req SuspendResumeDataEngineRequest
                 * @return SuspendResumeDataEngineOutcome
                 */
                SuspendResumeDataEngineOutcome SuspendResumeDataEngine(const Model::SuspendResumeDataEngineRequest &request);
                void SuspendResumeDataEngineAsync(const Model::SuspendResumeDataEngineRequest& request, const SuspendResumeDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SuspendResumeDataEngineOutcomeCallable SuspendResumeDataEngineCallable(const Model::SuspendResumeDataEngineRequest& request);

                /**
                 *This API is used to switch between the primary and standby clusters.
                 * @param req SwitchDataEngineRequest
                 * @return SwitchDataEngineOutcome
                 */
                SwitchDataEngineOutcome SwitchDataEngine(const Model::SwitchDataEngineRequest &request);
                void SwitchDataEngineAsync(const Model::SwitchDataEngineRequest& request, const SwitchDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchDataEngineOutcomeCallable SwitchDataEngineCallable(const Model::SwitchDataEngineRequest& request);

                /**
                 *This API is used to switch the versions of the engine image.
                 * @param req SwitchDataEngineImageRequest
                 * @return SwitchDataEngineImageOutcome
                 */
                SwitchDataEngineImageOutcome SwitchDataEngineImage(const Model::SwitchDataEngineImageRequest &request);
                void SwitchDataEngineImageAsync(const Model::SwitchDataEngineImageRequest& request, const SwitchDataEngineImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchDataEngineImageOutcomeCallable SwitchDataEngineImageCallable(const Model::SwitchDataEngineImageRequest& request);

                /**
                 *This API is used to unbind a user group from a user.
                 * @param req UnbindWorkGroupsFromUserRequest
                 * @return UnbindWorkGroupsFromUserOutcome
                 */
                UnbindWorkGroupsFromUserOutcome UnbindWorkGroupsFromUser(const Model::UnbindWorkGroupsFromUserRequest &request);
                void UnbindWorkGroupsFromUserAsync(const Model::UnbindWorkGroupsFromUserRequest& request, const UnbindWorkGroupsFromUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindWorkGroupsFromUserOutcomeCallable UnbindWorkGroupsFromUserCallable(const Model::UnbindWorkGroupsFromUserRequest& request);

                /**
                 *This API is used to upgrade data engine configuration.
                 * @param req UpdateDataEngineRequest
                 * @return UpdateDataEngineOutcome
                 */
                UpdateDataEngineOutcome UpdateDataEngine(const Model::UpdateDataEngineRequest &request);
                void UpdateDataEngineAsync(const Model::UpdateDataEngineRequest& request, const UpdateDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDataEngineOutcomeCallable UpdateDataEngineCallable(const Model::UpdateDataEngineRequest& request);

                /**
                 *This API is used to trigger the modification of the engine configuration by the user through a certain operation.
                 * @param req UpdateDataEngineConfigRequest
                 * @return UpdateDataEngineConfigOutcome
                 */
                UpdateDataEngineConfigOutcome UpdateDataEngineConfig(const Model::UpdateDataEngineConfigRequest &request);
                void UpdateDataEngineConfigAsync(const Model::UpdateDataEngineConfigRequest& request, const UpdateDataEngineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDataEngineConfigOutcomeCallable UpdateDataEngineConfigCallable(const Model::UpdateDataEngineConfigRequest& request);

                /**
                 *This API is used to update row filters. Please note that it updates filters only but not catalogs, databases, or tables.
                 * @param req UpdateRowFilterRequest
                 * @return UpdateRowFilterOutcome
                 */
                UpdateRowFilterOutcome UpdateRowFilter(const Model::UpdateRowFilterRequest &request);
                void UpdateRowFilterAsync(const Model::UpdateRowFilterRequest& request, const UpdateRowFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRowFilterOutcomeCallable UpdateRowFilterCallable(const Model::UpdateRowFilterRequest& request);

                /**
                 *This API is used to modify the custom configuration of the user's engine.
                 * @param req UpdateUserDataEngineConfigRequest
                 * @return UpdateUserDataEngineConfigOutcome
                 */
                UpdateUserDataEngineConfigOutcome UpdateUserDataEngineConfig(const Model::UpdateUserDataEngineConfigRequest &request);
                void UpdateUserDataEngineConfigAsync(const Model::UpdateUserDataEngineConfigRequest& request, const UpdateUserDataEngineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateUserDataEngineConfigOutcomeCallable UpdateUserDataEngineConfigCallable(const Model::UpdateUserDataEngineConfigRequest& request);

                /**
                 *This API is used to upgrade the engine image.
                 * @param req UpgradeDataEngineImageRequest
                 * @return UpgradeDataEngineImageOutcome
                 */
                UpgradeDataEngineImageOutcome UpgradeDataEngineImage(const Model::UpgradeDataEngineImageRequest &request);
                void UpgradeDataEngineImageAsync(const Model::UpgradeDataEngineImageRequest& request, const UpgradeDataEngineImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDataEngineImageOutcomeCallable UpgradeDataEngineImageCallable(const Model::UpgradeDataEngineImageRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_DLCCLIENT_H_
