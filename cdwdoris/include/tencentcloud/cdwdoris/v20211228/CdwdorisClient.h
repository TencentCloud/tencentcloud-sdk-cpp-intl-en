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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_CDWDORISCLIENT_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_CDWDORISCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cdwdoris/v20211228/model/ActionAlterUserRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ActionAlterUserResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/CancelBackupJobRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/CancelBackupJobResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/CheckCoolDownWorkingVariableConfigCorrectRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/CheckCoolDownWorkingVariableConfigCorrectResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/CopyTableDatasRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/CopyTableDatasResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateBackUpScheduleRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateBackUpScheduleResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateCoolDownPolicyRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateCoolDownPolicyResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateDatabaseRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateDatabaseResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateInstanceNewRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateInstanceNewResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateTableRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateTableResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateWorkloadGroupRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateWorkloadGroupResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DeleteBackUpDataRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DeleteBackUpDataResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DeleteTableRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DeleteTableResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DeleteWorkloadGroupRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DeleteWorkloadGroupResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeAreaRegionRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeAreaRegionResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpJobRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpJobResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpJobDetailRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpJobDetailResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpSchedulesRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpSchedulesResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpTablesRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpTablesResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpTaskDetailRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpTaskDetailResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeClusterConfigsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeClusterConfigsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeClusterConfigsHistoryRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeClusterConfigsHistoryResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeCoolDownBackendsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeCoolDownBackendsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeCoolDownPoliciesRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeCoolDownPoliciesResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeCoolDownTableDataRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeCoolDownTableDataResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeCreateTablesDDLRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeCreateTablesDDLResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditDownloadRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditDownloadResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditRecordsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditRecordsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesInfoRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesInfoResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesRoleRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesRoleResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceOperationHistoryRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceOperationHistoryResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceOperationsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceOperationsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceStateRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceStateResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceUsedSubnetsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceUsedSubnetsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstancesRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstancesResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstancesHealthStateRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstancesHealthStateResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeQueryAnalyseRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeQueryAnalyseResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeRestoreTaskDetailRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeRestoreTaskDetailResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsDownloadRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsDownloadResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSpecRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSpecResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSqlApisRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeSqlApisResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeTableRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeTableResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeTableListRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeTableListResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeUserBindWorkloadGroupRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeUserBindWorkloadGroupResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeUserPolicyRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeUserPolicyResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeWorkloadGroupRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeWorkloadGroupResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DestroyInstanceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DestroyInstanceResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ExecuteParametrizedQueryRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ExecuteParametrizedQueryResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ExecuteSelectQueryRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ExecuteSelectQueryResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/InsertDatasToTableRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/InsertDatasToTableResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyClusterConfigsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyClusterConfigsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyCoolDownPolicyRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyCoolDownPolicyResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyDatabaseTableAccessRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyDatabaseTableAccessResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyInstanceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyInstanceResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyInstanceKeyValConfigsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyInstanceKeyValConfigsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyNodeStatusRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyNodeStatusResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifySecurityGroupsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifySecurityGroupsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyUserBindWorkloadGroupRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyUserBindWorkloadGroupResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyUserPrivilegesV3Request.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyUserPrivilegesV3Response.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyWorkloadGroupRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyWorkloadGroupResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyWorkloadGroupStatusRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyWorkloadGroupStatusResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/OpenCoolDownRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/OpenCoolDownResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/OpenCoolDownPolicyRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/OpenCoolDownPolicyResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/QueryTableDataRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/QueryTableDataResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/RecoverBackUpJobRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/RecoverBackUpJobResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ReduceInstanceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ReduceInstanceResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ResizeDiskRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ResizeDiskResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/RestartClusterForConfigsRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/RestartClusterForConfigsResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/RestartClusterForNodeRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/RestartClusterForNodeResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ScaleOutInstanceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ScaleOutInstanceResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/ScaleUpInstanceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/ScaleUpInstanceResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/UpdateCoolDownRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/UpdateCoolDownResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/UpdateDatabaseRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/UpdateDatabaseResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/UpdateTableSchemaRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/UpdateTableSchemaResponse.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            class CdwdorisClient : public AbstractClient
            {
            public:
                CdwdorisClient(const Credential &credential, const std::string &region);
                CdwdorisClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ActionAlterUserResponse> ActionAlterUserOutcome;
                typedef std::future<ActionAlterUserOutcome> ActionAlterUserOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ActionAlterUserRequest&, ActionAlterUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ActionAlterUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelBackupJobResponse> CancelBackupJobOutcome;
                typedef std::future<CancelBackupJobOutcome> CancelBackupJobOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::CancelBackupJobRequest&, CancelBackupJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelBackupJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckCoolDownWorkingVariableConfigCorrectResponse> CheckCoolDownWorkingVariableConfigCorrectOutcome;
                typedef std::future<CheckCoolDownWorkingVariableConfigCorrectOutcome> CheckCoolDownWorkingVariableConfigCorrectOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::CheckCoolDownWorkingVariableConfigCorrectRequest&, CheckCoolDownWorkingVariableConfigCorrectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckCoolDownWorkingVariableConfigCorrectAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyTableDatasResponse> CopyTableDatasOutcome;
                typedef std::future<CopyTableDatasOutcome> CopyTableDatasOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::CopyTableDatasRequest&, CopyTableDatasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyTableDatasAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackUpScheduleResponse> CreateBackUpScheduleOutcome;
                typedef std::future<CreateBackUpScheduleOutcome> CreateBackUpScheduleOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::CreateBackUpScheduleRequest&, CreateBackUpScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackUpScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCoolDownPolicyResponse> CreateCoolDownPolicyOutcome;
                typedef std::future<CreateCoolDownPolicyOutcome> CreateCoolDownPolicyOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::CreateCoolDownPolicyRequest&, CreateCoolDownPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCoolDownPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDatabaseResponse> CreateDatabaseOutcome;
                typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::CreateDatabaseRequest&, CreateDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceNewResponse> CreateInstanceNewOutcome;
                typedef std::future<CreateInstanceNewOutcome> CreateInstanceNewOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::CreateInstanceNewRequest&, CreateInstanceNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceNewAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTableResponse> CreateTableOutcome;
                typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::CreateTableRequest&, CreateTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkloadGroupResponse> CreateWorkloadGroupOutcome;
                typedef std::future<CreateWorkloadGroupOutcome> CreateWorkloadGroupOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::CreateWorkloadGroupRequest&, CreateWorkloadGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkloadGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBackUpDataResponse> DeleteBackUpDataOutcome;
                typedef std::future<DeleteBackUpDataOutcome> DeleteBackUpDataOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DeleteBackUpDataRequest&, DeleteBackUpDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackUpDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTableResponse> DeleteTableOutcome;
                typedef std::future<DeleteTableOutcome> DeleteTableOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DeleteTableRequest&, DeleteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkloadGroupResponse> DeleteWorkloadGroupOutcome;
                typedef std::future<DeleteWorkloadGroupOutcome> DeleteWorkloadGroupOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DeleteWorkloadGroupRequest&, DeleteWorkloadGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkloadGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAreaRegionResponse> DescribeAreaRegionOutcome;
                typedef std::future<DescribeAreaRegionOutcome> DescribeAreaRegionOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeAreaRegionRequest&, DescribeAreaRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAreaRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackUpJobResponse> DescribeBackUpJobOutcome;
                typedef std::future<DescribeBackUpJobOutcome> DescribeBackUpJobOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeBackUpJobRequest&, DescribeBackUpJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackUpJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackUpJobDetailResponse> DescribeBackUpJobDetailOutcome;
                typedef std::future<DescribeBackUpJobDetailOutcome> DescribeBackUpJobDetailOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeBackUpJobDetailRequest&, DescribeBackUpJobDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackUpJobDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackUpSchedulesResponse> DescribeBackUpSchedulesOutcome;
                typedef std::future<DescribeBackUpSchedulesOutcome> DescribeBackUpSchedulesOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeBackUpSchedulesRequest&, DescribeBackUpSchedulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackUpSchedulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackUpTablesResponse> DescribeBackUpTablesOutcome;
                typedef std::future<DescribeBackUpTablesOutcome> DescribeBackUpTablesOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeBackUpTablesRequest&, DescribeBackUpTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackUpTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackUpTaskDetailResponse> DescribeBackUpTaskDetailOutcome;
                typedef std::future<DescribeBackUpTaskDetailOutcome> DescribeBackUpTaskDetailOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeBackUpTaskDetailRequest&, DescribeBackUpTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackUpTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterConfigsResponse> DescribeClusterConfigsOutcome;
                typedef std::future<DescribeClusterConfigsOutcome> DescribeClusterConfigsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeClusterConfigsRequest&, DescribeClusterConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterConfigsHistoryResponse> DescribeClusterConfigsHistoryOutcome;
                typedef std::future<DescribeClusterConfigsHistoryOutcome> DescribeClusterConfigsHistoryOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeClusterConfigsHistoryRequest&, DescribeClusterConfigsHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterConfigsHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCoolDownBackendsResponse> DescribeCoolDownBackendsOutcome;
                typedef std::future<DescribeCoolDownBackendsOutcome> DescribeCoolDownBackendsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeCoolDownBackendsRequest&, DescribeCoolDownBackendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCoolDownBackendsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCoolDownPoliciesResponse> DescribeCoolDownPoliciesOutcome;
                typedef std::future<DescribeCoolDownPoliciesOutcome> DescribeCoolDownPoliciesOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeCoolDownPoliciesRequest&, DescribeCoolDownPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCoolDownPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCoolDownTableDataResponse> DescribeCoolDownTableDataOutcome;
                typedef std::future<DescribeCoolDownTableDataOutcome> DescribeCoolDownTableDataOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeCoolDownTableDataRequest&, DescribeCoolDownTableDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCoolDownTableDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCreateTablesDDLResponse> DescribeCreateTablesDDLOutcome;
                typedef std::future<DescribeCreateTablesDDLOutcome> DescribeCreateTablesDDLOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeCreateTablesDDLRequest&, DescribeCreateTablesDDLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCreateTablesDDLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseResponse> DescribeDatabaseOutcome;
                typedef std::future<DescribeDatabaseOutcome> DescribeDatabaseOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeDatabaseRequest&, DescribeDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseAuditDownloadResponse> DescribeDatabaseAuditDownloadOutcome;
                typedef std::future<DescribeDatabaseAuditDownloadOutcome> DescribeDatabaseAuditDownloadOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeDatabaseAuditDownloadRequest&, DescribeDatabaseAuditDownloadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseAuditDownloadAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseAuditRecordsResponse> DescribeDatabaseAuditRecordsOutcome;
                typedef std::future<DescribeDatabaseAuditRecordsOutcome> DescribeDatabaseAuditRecordsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeDatabaseAuditRecordsRequest&, DescribeDatabaseAuditRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseAuditRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceResponse> DescribeInstanceOutcome;
                typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceRequest&, DescribeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceNodesResponse> DescribeInstanceNodesOutcome;
                typedef std::future<DescribeInstanceNodesOutcome> DescribeInstanceNodesOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceNodesRequest&, DescribeInstanceNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceNodesInfoResponse> DescribeInstanceNodesInfoOutcome;
                typedef std::future<DescribeInstanceNodesInfoOutcome> DescribeInstanceNodesInfoOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceNodesInfoRequest&, DescribeInstanceNodesInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNodesInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceNodesRoleResponse> DescribeInstanceNodesRoleOutcome;
                typedef std::future<DescribeInstanceNodesRoleOutcome> DescribeInstanceNodesRoleOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceNodesRoleRequest&, DescribeInstanceNodesRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNodesRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceOperationHistoryResponse> DescribeInstanceOperationHistoryOutcome;
                typedef std::future<DescribeInstanceOperationHistoryOutcome> DescribeInstanceOperationHistoryOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceOperationHistoryRequest&, DescribeInstanceOperationHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceOperationHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceOperationsResponse> DescribeInstanceOperationsOutcome;
                typedef std::future<DescribeInstanceOperationsOutcome> DescribeInstanceOperationsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceOperationsRequest&, DescribeInstanceOperationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceOperationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceStateResponse> DescribeInstanceStateOutcome;
                typedef std::future<DescribeInstanceStateOutcome> DescribeInstanceStateOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceStateRequest&, DescribeInstanceStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceUsedSubnetsResponse> DescribeInstanceUsedSubnetsOutcome;
                typedef std::future<DescribeInstanceUsedSubnetsOutcome> DescribeInstanceUsedSubnetsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceUsedSubnetsRequest&, DescribeInstanceUsedSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceUsedSubnetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesHealthStateResponse> DescribeInstancesHealthStateOutcome;
                typedef std::future<DescribeInstancesHealthStateOutcome> DescribeInstancesHealthStateOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstancesHealthStateRequest&, DescribeInstancesHealthStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesHealthStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQueryAnalyseResponse> DescribeQueryAnalyseOutcome;
                typedef std::future<DescribeQueryAnalyseOutcome> DescribeQueryAnalyseOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeQueryAnalyseRequest&, DescribeQueryAnalyseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQueryAnalyseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRestoreTaskDetailResponse> DescribeRestoreTaskDetailOutcome;
                typedef std::future<DescribeRestoreTaskDetailOutcome> DescribeRestoreTaskDetailOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeRestoreTaskDetailRequest&, DescribeRestoreTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestoreTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowQueryRecordsResponse> DescribeSlowQueryRecordsOutcome;
                typedef std::future<DescribeSlowQueryRecordsOutcome> DescribeSlowQueryRecordsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeSlowQueryRecordsRequest&, DescribeSlowQueryRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowQueryRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowQueryRecordsDownloadResponse> DescribeSlowQueryRecordsDownloadOutcome;
                typedef std::future<DescribeSlowQueryRecordsDownloadOutcome> DescribeSlowQueryRecordsDownloadOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeSlowQueryRecordsDownloadRequest&, DescribeSlowQueryRecordsDownloadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowQueryRecordsDownloadAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpecResponse> DescribeSpecOutcome;
                typedef std::future<DescribeSpecOutcome> DescribeSpecOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeSpecRequest&, DescribeSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSqlApisResponse> DescribeSqlApisOutcome;
                typedef std::future<DescribeSqlApisOutcome> DescribeSqlApisOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeSqlApisRequest&, DescribeSqlApisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSqlApisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableResponse> DescribeTableOutcome;
                typedef std::future<DescribeTableOutcome> DescribeTableOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeTableRequest&, DescribeTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableListResponse> DescribeTableListOutcome;
                typedef std::future<DescribeTableListOutcome> DescribeTableListOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeTableListRequest&, DescribeTableListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserBindWorkloadGroupResponse> DescribeUserBindWorkloadGroupOutcome;
                typedef std::future<DescribeUserBindWorkloadGroupOutcome> DescribeUserBindWorkloadGroupOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeUserBindWorkloadGroupRequest&, DescribeUserBindWorkloadGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserBindWorkloadGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserPolicyResponse> DescribeUserPolicyOutcome;
                typedef std::future<DescribeUserPolicyOutcome> DescribeUserPolicyOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeUserPolicyRequest&, DescribeUserPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkloadGroupResponse> DescribeWorkloadGroupOutcome;
                typedef std::future<DescribeWorkloadGroupOutcome> DescribeWorkloadGroupOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeWorkloadGroupRequest&, DescribeWorkloadGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkloadGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyInstanceResponse> DestroyInstanceOutcome;
                typedef std::future<DestroyInstanceOutcome> DestroyInstanceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DestroyInstanceRequest&, DestroyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ExecuteParametrizedQueryResponse> ExecuteParametrizedQueryOutcome;
                typedef std::future<ExecuteParametrizedQueryOutcome> ExecuteParametrizedQueryOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ExecuteParametrizedQueryRequest&, ExecuteParametrizedQueryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteParametrizedQueryAsyncHandler;
                typedef Outcome<Core::Error, Model::ExecuteSelectQueryResponse> ExecuteSelectQueryOutcome;
                typedef std::future<ExecuteSelectQueryOutcome> ExecuteSelectQueryOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ExecuteSelectQueryRequest&, ExecuteSelectQueryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteSelectQueryAsyncHandler;
                typedef Outcome<Core::Error, Model::InsertDatasToTableResponse> InsertDatasToTableOutcome;
                typedef std::future<InsertDatasToTableOutcome> InsertDatasToTableOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::InsertDatasToTableRequest&, InsertDatasToTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InsertDatasToTableAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterConfigsResponse> ModifyClusterConfigsOutcome;
                typedef std::future<ModifyClusterConfigsOutcome> ModifyClusterConfigsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifyClusterConfigsRequest&, ModifyClusterConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCoolDownPolicyResponse> ModifyCoolDownPolicyOutcome;
                typedef std::future<ModifyCoolDownPolicyOutcome> ModifyCoolDownPolicyOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifyCoolDownPolicyRequest&, ModifyCoolDownPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCoolDownPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatabaseTableAccessResponse> ModifyDatabaseTableAccessOutcome;
                typedef std::future<ModifyDatabaseTableAccessOutcome> ModifyDatabaseTableAccessOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifyDatabaseTableAccessRequest&, ModifyDatabaseTableAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseTableAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceResponse> ModifyInstanceOutcome;
                typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifyInstanceRequest&, ModifyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceKeyValConfigsResponse> ModifyInstanceKeyValConfigsOutcome;
                typedef std::future<ModifyInstanceKeyValConfigsOutcome> ModifyInstanceKeyValConfigsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifyInstanceKeyValConfigsRequest&, ModifyInstanceKeyValConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceKeyValConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNodeStatusResponse> ModifyNodeStatusOutcome;
                typedef std::future<ModifyNodeStatusOutcome> ModifyNodeStatusOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifyNodeStatusRequest&, ModifyNodeStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNodeStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityGroupsResponse> ModifySecurityGroupsOutcome;
                typedef std::future<ModifySecurityGroupsOutcome> ModifySecurityGroupsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifySecurityGroupsRequest&, ModifySecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserBindWorkloadGroupResponse> ModifyUserBindWorkloadGroupOutcome;
                typedef std::future<ModifyUserBindWorkloadGroupOutcome> ModifyUserBindWorkloadGroupOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifyUserBindWorkloadGroupRequest&, ModifyUserBindWorkloadGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserBindWorkloadGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserPrivilegesV3Response> ModifyUserPrivilegesV3Outcome;
                typedef std::future<ModifyUserPrivilegesV3Outcome> ModifyUserPrivilegesV3OutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifyUserPrivilegesV3Request&, ModifyUserPrivilegesV3Outcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserPrivilegesV3AsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkloadGroupResponse> ModifyWorkloadGroupOutcome;
                typedef std::future<ModifyWorkloadGroupOutcome> ModifyWorkloadGroupOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifyWorkloadGroupRequest&, ModifyWorkloadGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkloadGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkloadGroupStatusResponse> ModifyWorkloadGroupStatusOutcome;
                typedef std::future<ModifyWorkloadGroupStatusOutcome> ModifyWorkloadGroupStatusOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ModifyWorkloadGroupStatusRequest&, ModifyWorkloadGroupStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkloadGroupStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenCoolDownResponse> OpenCoolDownOutcome;
                typedef std::future<OpenCoolDownOutcome> OpenCoolDownOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::OpenCoolDownRequest&, OpenCoolDownOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenCoolDownAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenCoolDownPolicyResponse> OpenCoolDownPolicyOutcome;
                typedef std::future<OpenCoolDownPolicyOutcome> OpenCoolDownPolicyOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::OpenCoolDownPolicyRequest&, OpenCoolDownPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenCoolDownPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryTableDataResponse> QueryTableDataOutcome;
                typedef std::future<QueryTableDataOutcome> QueryTableDataOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::QueryTableDataRequest&, QueryTableDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryTableDataAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverBackUpJobResponse> RecoverBackUpJobOutcome;
                typedef std::future<RecoverBackUpJobOutcome> RecoverBackUpJobOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::RecoverBackUpJobRequest&, RecoverBackUpJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverBackUpJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ReduceInstanceResponse> ReduceInstanceOutcome;
                typedef std::future<ReduceInstanceOutcome> ReduceInstanceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ReduceInstanceRequest&, ReduceInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReduceInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResizeDiskResponse> ResizeDiskOutcome;
                typedef std::future<ResizeDiskOutcome> ResizeDiskOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ResizeDiskRequest&, ResizeDiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResizeDiskAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartClusterForConfigsResponse> RestartClusterForConfigsOutcome;
                typedef std::future<RestartClusterForConfigsOutcome> RestartClusterForConfigsOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::RestartClusterForConfigsRequest&, RestartClusterForConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartClusterForConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartClusterForNodeResponse> RestartClusterForNodeOutcome;
                typedef std::future<RestartClusterForNodeOutcome> RestartClusterForNodeOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::RestartClusterForNodeRequest&, RestartClusterForNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartClusterForNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleOutInstanceResponse> ScaleOutInstanceOutcome;
                typedef std::future<ScaleOutInstanceOutcome> ScaleOutInstanceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ScaleOutInstanceRequest&, ScaleOutInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleUpInstanceResponse> ScaleUpInstanceOutcome;
                typedef std::future<ScaleUpInstanceOutcome> ScaleUpInstanceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::ScaleUpInstanceRequest&, ScaleUpInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleUpInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCoolDownResponse> UpdateCoolDownOutcome;
                typedef std::future<UpdateCoolDownOutcome> UpdateCoolDownOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::UpdateCoolDownRequest&, UpdateCoolDownOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCoolDownAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDatabaseResponse> UpdateDatabaseOutcome;
                typedef std::future<UpdateDatabaseOutcome> UpdateDatabaseOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::UpdateDatabaseRequest&, UpdateDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateTableSchemaResponse> UpdateTableSchemaOutcome;
                typedef std::future<UpdateTableSchemaOutcome> UpdateTableSchemaOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::UpdateTableSchemaRequest&, UpdateTableSchemaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTableSchemaAsyncHandler;



                /**
                 *This API is used to add and modify a user.
                 * @param req ActionAlterUserRequest
                 * @return ActionAlterUserOutcome
                 */
                ActionAlterUserOutcome ActionAlterUser(const Model::ActionAlterUserRequest &request);
                void ActionAlterUserAsync(const Model::ActionAlterUserRequest& request, const ActionAlterUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ActionAlterUserOutcomeCallable ActionAlterUserCallable(const Model::ActionAlterUserRequest& request);

                /**
                 *This API is used to cancel the corresponding backup instance task.
                 * @param req CancelBackupJobRequest
                 * @return CancelBackupJobOutcome
                 */
                CancelBackupJobOutcome CancelBackupJob(const Model::CancelBackupJobRequest &request);
                void CancelBackupJobAsync(const Model::CancelBackupJobRequest& request, const CancelBackupJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelBackupJobOutcomeCallable CancelBackupJobCallable(const Model::CancelBackupJobRequest& request);

                /**
                 *This API is used to check whether variables and configurations for hot/cold data layering are correct.
                 * @param req CheckCoolDownWorkingVariableConfigCorrectRequest
                 * @return CheckCoolDownWorkingVariableConfigCorrectOutcome
                 */
                CheckCoolDownWorkingVariableConfigCorrectOutcome CheckCoolDownWorkingVariableConfigCorrect(const Model::CheckCoolDownWorkingVariableConfigCorrectRequest &request);
                void CheckCoolDownWorkingVariableConfigCorrectAsync(const Model::CheckCoolDownWorkingVariableConfigCorrectRequest& request, const CheckCoolDownWorkingVariableConfigCorrectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckCoolDownWorkingVariableConfigCorrectOutcomeCallable CheckCoolDownWorkingVariableConfigCorrectCallable(const Model::CheckCoolDownWorkingVariableConfigCorrectRequest& request);

                /**
                 *This API is used to copy the source table to the target table.
                 * @param req CopyTableDatasRequest
                 * @return CopyTableDatasOutcome
                 */
                CopyTableDatasOutcome CopyTableDatas(const Model::CopyTableDatasRequest &request);
                void CopyTableDatasAsync(const Model::CopyTableDatasRequest& request, const CopyTableDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyTableDatasOutcomeCallable CopyTableDatasCallable(const Model::CopyTableDatasRequest& request);

                /**
                 *This API is used to create or modify backup policies.
                 * @param req CreateBackUpScheduleRequest
                 * @return CreateBackUpScheduleOutcome
                 */
                CreateBackUpScheduleOutcome CreateBackUpSchedule(const Model::CreateBackUpScheduleRequest &request);
                void CreateBackUpScheduleAsync(const Model::CreateBackUpScheduleRequest& request, const CreateBackUpScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackUpScheduleOutcomeCallable CreateBackUpScheduleCallable(const Model::CreateBackUpScheduleRequest& request);

                /**
                 *This API is used to create a hot/cold data layering policy.
                 * @param req CreateCoolDownPolicyRequest
                 * @return CreateCoolDownPolicyOutcome
                 */
                CreateCoolDownPolicyOutcome CreateCoolDownPolicy(const Model::CreateCoolDownPolicyRequest &request);
                void CreateCoolDownPolicyAsync(const Model::CreateCoolDownPolicyRequest& request, const CreateCoolDownPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCoolDownPolicyOutcomeCallable CreateCoolDownPolicyCallable(const Model::CreateCoolDownPolicyRequest& request);

                /**
                 *This API is used to create a TCHouse-D database.
                 * @param req CreateDatabaseRequest
                 * @return CreateDatabaseOutcome
                 */
                CreateDatabaseOutcome CreateDatabase(const Model::CreateDatabaseRequest &request);
                void CreateDatabaseAsync(const Model::CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDatabaseOutcomeCallable CreateDatabaseCallable(const Model::CreateDatabaseRequest& request);

                /**
                 *This API is used to create clusters.
                 * @param req CreateInstanceNewRequest
                 * @return CreateInstanceNewOutcome
                 */
                CreateInstanceNewOutcome CreateInstanceNew(const Model::CreateInstanceNewRequest &request);
                void CreateInstanceNewAsync(const Model::CreateInstanceNewRequest& request, const CreateInstanceNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceNewOutcomeCallable CreateInstanceNewCallable(const Model::CreateInstanceNewRequest& request);

                /**
                 *This API is used to create a TCHouse-D table under the specified database.
                 * @param req CreateTableRequest
                 * @return CreateTableOutcome
                 */
                CreateTableOutcome CreateTable(const Model::CreateTableRequest &request);
                void CreateTableAsync(const Model::CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTableOutcomeCallable CreateTableCallable(const Model::CreateTableRequest& request);

                /**
                 *This API is used to create resource groups.
                 * @param req CreateWorkloadGroupRequest
                 * @return CreateWorkloadGroupOutcome
                 */
                CreateWorkloadGroupOutcome CreateWorkloadGroup(const Model::CreateWorkloadGroupRequest &request);
                void CreateWorkloadGroupAsync(const Model::CreateWorkloadGroupRequest& request, const CreateWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkloadGroupOutcomeCallable CreateWorkloadGroupCallable(const Model::CreateWorkloadGroupRequest& request);

                /**
                 *This API is used to delete backup data.
                 * @param req DeleteBackUpDataRequest
                 * @return DeleteBackUpDataOutcome
                 */
                DeleteBackUpDataOutcome DeleteBackUpData(const Model::DeleteBackUpDataRequest &request);
                void DeleteBackUpDataAsync(const Model::DeleteBackUpDataRequest& request, const DeleteBackUpDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBackUpDataOutcomeCallable DeleteBackUpDataCallable(const Model::DeleteBackUpDataRequest& request);

                /**
                 *This API is used to delete the specified table in the specified database.
                 * @param req DeleteTableRequest
                 * @return DeleteTableOutcome
                 */
                DeleteTableOutcome DeleteTable(const Model::DeleteTableRequest &request);
                void DeleteTableAsync(const Model::DeleteTableRequest& request, const DeleteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTableOutcomeCallable DeleteTableCallable(const Model::DeleteTableRequest& request);

                /**
                 *This API is used to delete resource groups.
                 * @param req DeleteWorkloadGroupRequest
                 * @return DeleteWorkloadGroupOutcome
                 */
                DeleteWorkloadGroupOutcome DeleteWorkloadGroup(const Model::DeleteWorkloadGroupRequest &request);
                void DeleteWorkloadGroupAsync(const Model::DeleteWorkloadGroupRequest& request, const DeleteWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkloadGroupOutcomeCallable DeleteWorkloadGroupCallable(const Model::DeleteWorkloadGroupRequest& request);

                /**
                 *This API is used to display region information and the total number of clusters in each region on the cluster list page.
                 * @param req DescribeAreaRegionRequest
                 * @return DescribeAreaRegionOutcome
                 */
                DescribeAreaRegionOutcome DescribeAreaRegion(const Model::DescribeAreaRegionRequest &request);
                void DescribeAreaRegionAsync(const Model::DescribeAreaRegionRequest& request, const DescribeAreaRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAreaRegionOutcomeCallable DescribeAreaRegionCallable(const Model::DescribeAreaRegionRequest& request);

                /**
                 *This API is used to query the list of backup instances.
                 * @param req DescribeBackUpJobRequest
                 * @return DescribeBackUpJobOutcome
                 */
                DescribeBackUpJobOutcome DescribeBackUpJob(const Model::DescribeBackUpJobRequest &request);
                void DescribeBackUpJobAsync(const Model::DescribeBackUpJobRequest& request, const DescribeBackUpJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackUpJobOutcomeCallable DescribeBackUpJobCallable(const Model::DescribeBackUpJobRequest& request);

                /**
                 *This API is used to query backup task details.
                 * @param req DescribeBackUpJobDetailRequest
                 * @return DescribeBackUpJobDetailOutcome
                 */
                DescribeBackUpJobDetailOutcome DescribeBackUpJobDetail(const Model::DescribeBackUpJobDetailRequest &request);
                void DescribeBackUpJobDetailAsync(const Model::DescribeBackUpJobDetailRequest& request, const DescribeBackUpJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackUpJobDetailOutcomeCallable DescribeBackUpJobDetailCallable(const Model::DescribeBackUpJobDetailRequest& request);

                /**
                 *This API is used to obtain the scheduled task information for the backup and migration.
                 * @param req DescribeBackUpSchedulesRequest
                 * @return DescribeBackUpSchedulesOutcome
                 */
                DescribeBackUpSchedulesOutcome DescribeBackUpSchedules(const Model::DescribeBackUpSchedulesRequest &request);
                void DescribeBackUpSchedulesAsync(const Model::DescribeBackUpSchedulesRequest& request, const DescribeBackUpSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackUpSchedulesOutcomeCallable DescribeBackUpSchedulesCallable(const Model::DescribeBackUpSchedulesRequest& request);

                /**
                 *This API is used to obtain the information of the table available for backup.
                 * @param req DescribeBackUpTablesRequest
                 * @return DescribeBackUpTablesOutcome
                 */
                DescribeBackUpTablesOutcome DescribeBackUpTables(const Model::DescribeBackUpTablesRequest &request);
                void DescribeBackUpTablesAsync(const Model::DescribeBackUpTablesRequest& request, const DescribeBackUpTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackUpTablesOutcomeCallable DescribeBackUpTablesCallable(const Model::DescribeBackUpTablesRequest& request);

                /**
                 *This API is used to query the progress details of backup tasks.
                 * @param req DescribeBackUpTaskDetailRequest
                 * @return DescribeBackUpTaskDetailOutcome
                 */
                DescribeBackUpTaskDetailOutcome DescribeBackUpTaskDetail(const Model::DescribeBackUpTaskDetailRequest &request);
                void DescribeBackUpTaskDetailAsync(const Model::DescribeBackUpTaskDetailRequest& request, const DescribeBackUpTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackUpTaskDetailOutcomeCallable DescribeBackUpTaskDetailCallable(const Model::DescribeBackUpTaskDetailRequest& request);

                /**
                 *This API is used to get the contents of the latest configuration files (config.xml, metrika.xml, and user.xml) of the cluster and display them to the user.
                 * @param req DescribeClusterConfigsRequest
                 * @return DescribeClusterConfigsOutcome
                 */
                DescribeClusterConfigsOutcome DescribeClusterConfigs(const Model::DescribeClusterConfigsRequest &request);
                void DescribeClusterConfigsAsync(const Model::DescribeClusterConfigsRequest& request, const DescribeClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterConfigsOutcomeCallable DescribeClusterConfigsCallable(const Model::DescribeClusterConfigsRequest& request);

                /**
                 *This API is used to obtain the modification history of cluster configuration files.
                 * @param req DescribeClusterConfigsHistoryRequest
                 * @return DescribeClusterConfigsHistoryOutcome
                 */
                DescribeClusterConfigsHistoryOutcome DescribeClusterConfigsHistory(const Model::DescribeClusterConfigsHistoryRequest &request);
                void DescribeClusterConfigsHistoryAsync(const Model::DescribeClusterConfigsHistoryRequest& request, const DescribeClusterConfigsHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterConfigsHistoryOutcomeCallable DescribeClusterConfigsHistoryCallable(const Model::DescribeClusterConfigsHistoryRequest& request);

                /**
                 *This API is used to query the list of backend nodes supporting hot/cold data layering.
                 * @param req DescribeCoolDownBackendsRequest
                 * @return DescribeCoolDownBackendsOutcome
                 */
                DescribeCoolDownBackendsOutcome DescribeCoolDownBackends(const Model::DescribeCoolDownBackendsRequest &request);
                void DescribeCoolDownBackendsAsync(const Model::DescribeCoolDownBackendsRequest& request, const DescribeCoolDownBackendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCoolDownBackendsOutcomeCallable DescribeCoolDownBackendsCallable(const Model::DescribeCoolDownBackendsRequest& request);

                /**
                 *This API is used to query the list of hot/cold data layering policies.
                 * @param req DescribeCoolDownPoliciesRequest
                 * @return DescribeCoolDownPoliciesOutcome
                 */
                DescribeCoolDownPoliciesOutcome DescribeCoolDownPolicies(const Model::DescribeCoolDownPoliciesRequest &request);
                void DescribeCoolDownPoliciesAsync(const Model::DescribeCoolDownPoliciesRequest& request, const DescribeCoolDownPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCoolDownPoliciesOutcomeCallable DescribeCoolDownPoliciesCallable(const Model::DescribeCoolDownPoliciesRequest& request);

                /**
                 *This API is used to query the layered hot and cold data in a table.
                 * @param req DescribeCoolDownTableDataRequest
                 * @return DescribeCoolDownTableDataOutcome
                 */
                DescribeCoolDownTableDataOutcome DescribeCoolDownTableData(const Model::DescribeCoolDownTableDataRequest &request);
                void DescribeCoolDownTableDataAsync(const Model::DescribeCoolDownTableDataRequest& request, const DescribeCoolDownTableDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCoolDownTableDataOutcomeCallable DescribeCoolDownTableDataCallable(const Model::DescribeCoolDownTableDataRequest& request);

                /**
                 *This API is used to batch obtain the table creation DDL.
                 * @param req DescribeCreateTablesDDLRequest
                 * @return DescribeCreateTablesDDLOutcome
                 */
                DescribeCreateTablesDDLOutcome DescribeCreateTablesDDL(const Model::DescribeCreateTablesDDLRequest &request);
                void DescribeCreateTablesDDLAsync(const Model::DescribeCreateTablesDDLRequest& request, const DescribeCreateTablesDDLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCreateTablesDDLOutcomeCallable DescribeCreateTablesDDLCallable(const Model::DescribeCreateTablesDDLRequest& request);

                /**
                 *This API is used to obtain the database information under a specific data source.
                 * @param req DescribeDatabaseRequest
                 * @return DescribeDatabaseOutcome
                 */
                DescribeDatabaseOutcome DescribeDatabase(const Model::DescribeDatabaseRequest &request);
                void DescribeDatabaseAsync(const Model::DescribeDatabaseRequest& request, const DescribeDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseOutcomeCallable DescribeDatabaseCallable(const Model::DescribeDatabaseRequest& request);

                /**
                 *This API is used to download database audit logs.
                 * @param req DescribeDatabaseAuditDownloadRequest
                 * @return DescribeDatabaseAuditDownloadOutcome
                 */
                DescribeDatabaseAuditDownloadOutcome DescribeDatabaseAuditDownload(const Model::DescribeDatabaseAuditDownloadRequest &request);
                void DescribeDatabaseAuditDownloadAsync(const Model::DescribeDatabaseAuditDownloadRequest& request, const DescribeDatabaseAuditDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseAuditDownloadOutcomeCallable DescribeDatabaseAuditDownloadCallable(const Model::DescribeDatabaseAuditDownloadRequest& request);

                /**
                 *This API is used to get database audit records.
                 * @param req DescribeDatabaseAuditRecordsRequest
                 * @return DescribeDatabaseAuditRecordsOutcome
                 */
                DescribeDatabaseAuditRecordsOutcome DescribeDatabaseAuditRecords(const Model::DescribeDatabaseAuditRecordsRequest &request);
                void DescribeDatabaseAuditRecordsAsync(const Model::DescribeDatabaseAuditRecordsRequest& request, const DescribeDatabaseAuditRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseAuditRecordsOutcomeCallable DescribeDatabaseAuditRecordsCallable(const Model::DescribeDatabaseAuditRecordsRequest& request);

                /**
                 *This API is used to query the specific information of a cluster based on the cluster ID.
                 * @param req DescribeInstanceRequest
                 * @return DescribeInstanceOutcome
                 */
                DescribeInstanceOutcome DescribeInstance(const Model::DescribeInstanceRequest &request);
                void DescribeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOutcomeCallable DescribeInstanceCallable(const Model::DescribeInstanceRequest& request);

                /**
                 *This API is used to get the list of cluster node information.
                 * @param req DescribeInstanceNodesRequest
                 * @return DescribeInstanceNodesOutcome
                 */
                DescribeInstanceNodesOutcome DescribeInstanceNodes(const Model::DescribeInstanceNodesRequest &request);
                void DescribeInstanceNodesAsync(const Model::DescribeInstanceNodesRequest& request, const DescribeInstanceNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNodesOutcomeCallable DescribeInstanceNodesCallable(const Model::DescribeInstanceNodesRequest& request);

                /**
                 *This API is used to get the BE/FE node roles.
                 * @param req DescribeInstanceNodesInfoRequest
                 * @return DescribeInstanceNodesInfoOutcome
                 */
                DescribeInstanceNodesInfoOutcome DescribeInstanceNodesInfo(const Model::DescribeInstanceNodesInfoRequest &request);
                void DescribeInstanceNodesInfoAsync(const Model::DescribeInstanceNodesInfoRequest& request, const DescribeInstanceNodesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNodesInfoOutcomeCallable DescribeInstanceNodesInfoCallable(const Model::DescribeInstanceNodesInfoRequest& request);

                /**
                 *This API is used to obtain cluster node roles.
                 * @param req DescribeInstanceNodesRoleRequest
                 * @return DescribeInstanceNodesRoleOutcome
                 */
                DescribeInstanceNodesRoleOutcome DescribeInstanceNodesRole(const Model::DescribeInstanceNodesRoleRequest &request);
                void DescribeInstanceNodesRoleAsync(const Model::DescribeInstanceNodesRoleRequest& request, const DescribeInstanceNodesRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNodesRoleOutcomeCallable DescribeInstanceNodesRoleCallable(const Model::DescribeInstanceNodesRoleRequest& request);

                /**
                 *This API is used to pull the operation list of the cluster. The API supports pagination query and filtering operation records by time range.
                 * @param req DescribeInstanceOperationHistoryRequest
                 * @return DescribeInstanceOperationHistoryOutcome
                 */
                DescribeInstanceOperationHistoryOutcome DescribeInstanceOperationHistory(const Model::DescribeInstanceOperationHistoryRequest &request);
                void DescribeInstanceOperationHistoryAsync(const Model::DescribeInstanceOperationHistoryRequest& request, const DescribeInstanceOperationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOperationHistoryOutcomeCallable DescribeInstanceOperationHistoryCallable(const Model::DescribeInstanceOperationHistoryRequest& request);

                /**
                 *This API is used to pull operations of the cluster on the cluster details page.
                 * @param req DescribeInstanceOperationsRequest
                 * @return DescribeInstanceOperationsOutcome
                 */
                DescribeInstanceOperationsOutcome DescribeInstanceOperations(const Model::DescribeInstanceOperationsRequest &request);
                void DescribeInstanceOperationsAsync(const Model::DescribeInstanceOperationsRequest& request, const DescribeInstanceOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOperationsOutcomeCallable DescribeInstanceOperationsCallable(const Model::DescribeInstanceOperationsRequest& request);

                /**
                 *This API is used to display cluster status, process progress, etc. in the cluster details page.
                 * @param req DescribeInstanceStateRequest
                 * @return DescribeInstanceStateOutcome
                 */
                DescribeInstanceStateOutcome DescribeInstanceState(const Model::DescribeInstanceStateRequest &request);
                void DescribeInstanceStateAsync(const Model::DescribeInstanceStateRequest& request, const DescribeInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceStateOutcomeCallable DescribeInstanceStateCallable(const Model::DescribeInstanceStateRequest& request);

                /**
                 *This API is used to obtain the information of subnets used by the cluster.
                 * @param req DescribeInstanceUsedSubnetsRequest
                 * @return DescribeInstanceUsedSubnetsOutcome
                 */
                DescribeInstanceUsedSubnetsOutcome DescribeInstanceUsedSubnets(const Model::DescribeInstanceUsedSubnetsRequest &request);
                void DescribeInstanceUsedSubnetsAsync(const Model::DescribeInstanceUsedSubnetsRequest& request, const DescribeInstanceUsedSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceUsedSubnetsOutcomeCallable DescribeInstanceUsedSubnetsCallable(const Model::DescribeInstanceUsedSubnetsRequest& request);

                /**
                 *This API is used to get the list of clusters.
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *This API is used to check cluster health
                 * @param req DescribeInstancesHealthStateRequest
                 * @return DescribeInstancesHealthStateOutcome
                 */
                DescribeInstancesHealthStateOutcome DescribeInstancesHealthState(const Model::DescribeInstancesHealthStateRequest &request);
                void DescribeInstancesHealthStateAsync(const Model::DescribeInstancesHealthStateRequest& request, const DescribeInstancesHealthStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesHealthStateOutcomeCallable DescribeInstancesHealthStateCallable(const Model::DescribeInstancesHealthStateRequest& request);

                /**
                 *This API is used to obtain the SQL query details of the Doris user.
                 * @param req DescribeQueryAnalyseRequest
                 * @return DescribeQueryAnalyseOutcome
                 */
                DescribeQueryAnalyseOutcome DescribeQueryAnalyse(const Model::DescribeQueryAnalyseRequest &request);
                void DescribeQueryAnalyseAsync(const Model::DescribeQueryAnalyseRequest& request, const DescribeQueryAnalyseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQueryAnalyseOutcomeCallable DescribeQueryAnalyseCallable(const Model::DescribeQueryAnalyseRequest& request);

                /**
                 *This API is used to query the progress details of the recovery task.
                 * @param req DescribeRestoreTaskDetailRequest
                 * @return DescribeRestoreTaskDetailOutcome
                 */
                DescribeRestoreTaskDetailOutcome DescribeRestoreTaskDetail(const Model::DescribeRestoreTaskDetailRequest &request);
                void DescribeRestoreTaskDetailAsync(const Model::DescribeRestoreTaskDetailRequest& request, const DescribeRestoreTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRestoreTaskDetailOutcomeCallable DescribeRestoreTaskDetailCallable(const Model::DescribeRestoreTaskDetailRequest& request);

                /**
                 *This API is used to get the slow log list.
                 * @param req DescribeSlowQueryRecordsRequest
                 * @return DescribeSlowQueryRecordsOutcome
                 */
                DescribeSlowQueryRecordsOutcome DescribeSlowQueryRecords(const Model::DescribeSlowQueryRecordsRequest &request);
                void DescribeSlowQueryRecordsAsync(const Model::DescribeSlowQueryRecordsRequest& request, const DescribeSlowQueryRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowQueryRecordsOutcomeCallable DescribeSlowQueryRecordsCallable(const Model::DescribeSlowQueryRecordsRequest& request);

                /**
                 *This API is used to download slow log files.
                 * @param req DescribeSlowQueryRecordsDownloadRequest
                 * @return DescribeSlowQueryRecordsDownloadOutcome
                 */
                DescribeSlowQueryRecordsDownloadOutcome DescribeSlowQueryRecordsDownload(const Model::DescribeSlowQueryRecordsDownloadRequest &request);
                void DescribeSlowQueryRecordsDownloadAsync(const Model::DescribeSlowQueryRecordsDownloadRequest& request, const DescribeSlowQueryRecordsDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowQueryRecordsDownloadOutcomeCallable DescribeSlowQueryRecordsDownloadCallable(const Model::DescribeSlowQueryRecordsDownloadRequest& request);

                /**
                 *This API is used to pull the specification list of data nodes and zookeeper nodes for the cluster on the purchase page.
                 * @param req DescribeSpecRequest
                 * @return DescribeSpecOutcome
                 */
                DescribeSpecOutcome DescribeSpec(const Model::DescribeSpecRequest &request);
                void DescribeSpecAsync(const Model::DescribeSpecRequest& request, const DescribeSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpecOutcomeCallable DescribeSpecCallable(const Model::DescribeSpecRequest& request);

                /**
                 *This API is used to query the cluster information by executing SQL commands.
                 * @param req DescribeSqlApisRequest
                 * @return DescribeSqlApisOutcome
                 */
                DescribeSqlApisOutcome DescribeSqlApis(const Model::DescribeSqlApisRequest &request);
                void DescribeSqlApisAsync(const Model::DescribeSqlApisRequest& request, const DescribeSqlApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSqlApisOutcomeCallable DescribeSqlApisCallable(const Model::DescribeSqlApisRequest& request);

                /**
                 *This API is used to obtain the table information. It only supports querying table information in the TCHouse-D internal catalog.
                 * @param req DescribeTableRequest
                 * @return DescribeTableOutcome
                 */
                DescribeTableOutcome DescribeTable(const Model::DescribeTableRequest &request);
                void DescribeTableAsync(const Model::DescribeTableRequest& request, const DescribeTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableOutcomeCallable DescribeTableCallable(const Model::DescribeTableRequest& request);

                /**
                 *This API is used to obtain the list of tables under the specified data source and database.
                 * @param req DescribeTableListRequest
                 * @return DescribeTableListOutcome
                 */
                DescribeTableListOutcome DescribeTableList(const Model::DescribeTableListRequest &request);
                void DescribeTableListAsync(const Model::DescribeTableListRequest& request, const DescribeTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableListOutcomeCallable DescribeTableListCallable(const Model::DescribeTableListRequest& request);

                /**
                 *This API is used to obtain the resource information bound to each user in the current cluster.
                 * @param req DescribeUserBindWorkloadGroupRequest
                 * @return DescribeUserBindWorkloadGroupOutcome
                 */
                DescribeUserBindWorkloadGroupOutcome DescribeUserBindWorkloadGroup(const Model::DescribeUserBindWorkloadGroupRequest &request);
                void DescribeUserBindWorkloadGroupAsync(const Model::DescribeUserBindWorkloadGroupRequest& request, const DescribeUserBindWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserBindWorkloadGroupOutcomeCallable DescribeUserBindWorkloadGroupCallable(const Model::DescribeUserBindWorkloadGroupRequest& request);

                /**
                 *This API is used to obtain detailed information of Doris users, including account information, permission host, and permission configuration.
                 * @param req DescribeUserPolicyRequest
                 * @return DescribeUserPolicyOutcome
                 */
                DescribeUserPolicyOutcome DescribeUserPolicy(const Model::DescribeUserPolicyRequest &request);
                void DescribeUserPolicyAsync(const Model::DescribeUserPolicyRequest& request, const DescribeUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserPolicyOutcomeCallable DescribeUserPolicyCallable(const Model::DescribeUserPolicyRequest& request);

                /**
                 *This API is used to obtain resource group information.
                 * @param req DescribeWorkloadGroupRequest
                 * @return DescribeWorkloadGroupOutcome
                 */
                DescribeWorkloadGroupOutcome DescribeWorkloadGroup(const Model::DescribeWorkloadGroupRequest &request);
                void DescribeWorkloadGroupAsync(const Model::DescribeWorkloadGroupRequest& request, const DescribeWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkloadGroupOutcomeCallable DescribeWorkloadGroupCallable(const Model::DescribeWorkloadGroupRequest& request);

                /**
                 *This API is used to terminate clusters.
                 * @param req DestroyInstanceRequest
                 * @return DestroyInstanceOutcome
                 */
                DestroyInstanceOutcome DestroyInstance(const Model::DestroyInstanceRequest &request);
                void DestroyInstanceAsync(const Model::DestroyInstanceRequest& request, const DestroyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyInstanceOutcomeCallable DestroyInstanceCallable(const Model::DestroyInstanceRequest& request);

                /**
                 *This API is used to execute an SQL query statement with parameters and return the query results.
                 * @param req ExecuteParametrizedQueryRequest
                 * @return ExecuteParametrizedQueryOutcome
                 */
                ExecuteParametrizedQueryOutcome ExecuteParametrizedQuery(const Model::ExecuteParametrizedQueryRequest &request);
                void ExecuteParametrizedQueryAsync(const Model::ExecuteParametrizedQueryRequest& request, const ExecuteParametrizedQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteParametrizedQueryOutcomeCallable ExecuteParametrizedQueryCallable(const Model::ExecuteParametrizedQueryRequest& request);

                /**
                 *This API is used to query data according to the specified database and table name, and support field selection and pagination.
                 * @param req ExecuteSelectQueryRequest
                 * @return ExecuteSelectQueryOutcome
                 */
                ExecuteSelectQueryOutcome ExecuteSelectQuery(const Model::ExecuteSelectQueryRequest &request);
                void ExecuteSelectQueryAsync(const Model::ExecuteSelectQueryRequest& request, const ExecuteSelectQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteSelectQueryOutcomeCallable ExecuteSelectQueryCallable(const Model::ExecuteSelectQueryRequest& request);

                /**
                 *This API is used to insert data into TCHouse-D.
                 * @param req InsertDatasToTableRequest
                 * @return InsertDatasToTableOutcome
                 */
                InsertDatasToTableOutcome InsertDatasToTable(const Model::InsertDatasToTableRequest &request);
                void InsertDatasToTableAsync(const Model::InsertDatasToTableRequest& request, const InsertDatasToTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InsertDatasToTableOutcomeCallable InsertDatasToTableCallable(const Model::InsertDatasToTableRequest& request);

                /**
                 *This API is used to modify the XML cluster configuration file on the cluster configuration page.
                 * @param req ModifyClusterConfigsRequest
                 * @return ModifyClusterConfigsOutcome
                 */
                ModifyClusterConfigsOutcome ModifyClusterConfigs(const Model::ModifyClusterConfigsRequest &request);
                void ModifyClusterConfigsAsync(const Model::ModifyClusterConfigsRequest& request, const ModifyClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterConfigsOutcomeCallable ModifyClusterConfigsCallable(const Model::ModifyClusterConfigsRequest& request);

                /**
                 *This API is used to modify the hot/cold data layering policy.
                 * @param req ModifyCoolDownPolicyRequest
                 * @return ModifyCoolDownPolicyOutcome
                 */
                ModifyCoolDownPolicyOutcome ModifyCoolDownPolicy(const Model::ModifyCoolDownPolicyRequest &request);
                void ModifyCoolDownPolicyAsync(const Model::ModifyCoolDownPolicyRequest& request, const ModifyCoolDownPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCoolDownPolicyOutcomeCallable ModifyCoolDownPolicyCallable(const Model::ModifyCoolDownPolicyRequest& request);

                /**
                 *This API is used to GRANT and REVOKE the database and table in the Doris database.
                 * @param req ModifyDatabaseTableAccessRequest
                 * @return ModifyDatabaseTableAccessOutcome
                 */
                ModifyDatabaseTableAccessOutcome ModifyDatabaseTableAccess(const Model::ModifyDatabaseTableAccessRequest &request);
                void ModifyDatabaseTableAccessAsync(const Model::ModifyDatabaseTableAccessRequest& request, const ModifyDatabaseTableAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatabaseTableAccessOutcomeCallable ModifyDatabaseTableAccessCallable(const Model::ModifyDatabaseTableAccessRequest& request);

                /**
                 *This API is used to modify the cluster's name.
                 * @param req ModifyInstanceRequest
                 * @return ModifyInstanceOutcome
                 */
                ModifyInstanceOutcome ModifyInstance(const Model::ModifyInstanceRequest &request);
                void ModifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceOutcomeCallable ModifyInstanceCallable(const Model::ModifyInstanceRequest& request);

                /**
                 *This API is used to modify configurations in the KV mode.
                 * @param req ModifyInstanceKeyValConfigsRequest
                 * @return ModifyInstanceKeyValConfigsOutcome
                 */
                ModifyInstanceKeyValConfigsOutcome ModifyInstanceKeyValConfigs(const Model::ModifyInstanceKeyValConfigsRequest &request);
                void ModifyInstanceKeyValConfigsAsync(const Model::ModifyInstanceKeyValConfigsRequest& request, const ModifyInstanceKeyValConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceKeyValConfigsOutcomeCallable ModifyInstanceKeyValConfigsCallable(const Model::ModifyInstanceKeyValConfigsRequest& request);

                /**
                 *This API is used to change the node status.
                 * @param req ModifyNodeStatusRequest
                 * @return ModifyNodeStatusOutcome
                 */
                ModifyNodeStatusOutcome ModifyNodeStatus(const Model::ModifyNodeStatusRequest &request);
                void ModifyNodeStatusAsync(const Model::ModifyNodeStatusRequest& request, const ModifyNodeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNodeStatusOutcomeCallable ModifyNodeStatusCallable(const Model::ModifyNodeStatusRequest& request);

                /**
                 *This API is used to edit security groups.
                 * @param req ModifySecurityGroupsRequest
                 * @return ModifySecurityGroupsOutcome
                 */
                ModifySecurityGroupsOutcome ModifySecurityGroups(const Model::ModifySecurityGroupsRequest &request);
                void ModifySecurityGroupsAsync(const Model::ModifySecurityGroupsRequest& request, const ModifySecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityGroupsOutcomeCallable ModifySecurityGroupsCallable(const Model::ModifySecurityGroupsRequest& request);

                /**
                 *This API is used to modify the resource group bound to the user.
                 * @param req ModifyUserBindWorkloadGroupRequest
                 * @return ModifyUserBindWorkloadGroupOutcome
                 */
                ModifyUserBindWorkloadGroupOutcome ModifyUserBindWorkloadGroup(const Model::ModifyUserBindWorkloadGroupRequest &request);
                void ModifyUserBindWorkloadGroupAsync(const Model::ModifyUserBindWorkloadGroupRequest& request, const ModifyUserBindWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserBindWorkloadGroupOutcomeCallable ModifyUserBindWorkloadGroupCallable(const Model::ModifyUserBindWorkloadGroupRequest& request);

                /**
                 *This API is used to modify user permissions and support three permission setting categories: catalog, all db, and some db tables.
                 * @param req ModifyUserPrivilegesV3Request
                 * @return ModifyUserPrivilegesV3Outcome
                 */
                ModifyUserPrivilegesV3Outcome ModifyUserPrivilegesV3(const Model::ModifyUserPrivilegesV3Request &request);
                void ModifyUserPrivilegesV3Async(const Model::ModifyUserPrivilegesV3Request& request, const ModifyUserPrivilegesV3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserPrivilegesV3OutcomeCallable ModifyUserPrivilegesV3Callable(const Model::ModifyUserPrivilegesV3Request& request);

                /**
                 *This API is used to modify the resource group information.
                 * @param req ModifyWorkloadGroupRequest
                 * @return ModifyWorkloadGroupOutcome
                 */
                ModifyWorkloadGroupOutcome ModifyWorkloadGroup(const Model::ModifyWorkloadGroupRequest &request);
                void ModifyWorkloadGroupAsync(const Model::ModifyWorkloadGroupRequest& request, const ModifyWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkloadGroupOutcomeCallable ModifyWorkloadGroupCallable(const Model::ModifyWorkloadGroupRequest& request);

                /**
                 *This API is used to enable or disable resource groups.
                 * @param req ModifyWorkloadGroupStatusRequest
                 * @return ModifyWorkloadGroupStatusOutcome
                 */
                ModifyWorkloadGroupStatusOutcome ModifyWorkloadGroupStatus(const Model::ModifyWorkloadGroupStatusRequest &request);
                void ModifyWorkloadGroupStatusAsync(const Model::ModifyWorkloadGroupStatusRequest& request, const ModifyWorkloadGroupStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkloadGroupStatusOutcomeCallable ModifyWorkloadGroupStatusCallable(const Model::ModifyWorkloadGroupStatusRequest& request);

                /**
                 *This API is used to enable hot/cold data layering.
                 * @param req OpenCoolDownRequest
                 * @return OpenCoolDownOutcome
                 */
                OpenCoolDownOutcome OpenCoolDown(const Model::OpenCoolDownRequest &request);
                void OpenCoolDownAsync(const Model::OpenCoolDownRequest& request, const OpenCoolDownAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenCoolDownOutcomeCallable OpenCoolDownCallable(const Model::OpenCoolDownRequest& request);

                /**
                 *This API is used to enable and describe the cold storage policy.
                 * @param req OpenCoolDownPolicyRequest
                 * @return OpenCoolDownPolicyOutcome
                 */
                OpenCoolDownPolicyOutcome OpenCoolDownPolicy(const Model::OpenCoolDownPolicyRequest &request);
                void OpenCoolDownPolicyAsync(const Model::OpenCoolDownPolicyRequest& request, const OpenCoolDownPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenCoolDownPolicyOutcomeCallable OpenCoolDownPolicyCallable(const Model::OpenCoolDownPolicyRequest& request);

                /**
                 *This API is used to query data according to the specified database and table names, and support field selection and pagination.
                 * @param req QueryTableDataRequest
                 * @return QueryTableDataOutcome
                 */
                QueryTableDataOutcome QueryTableData(const Model::QueryTableDataRequest &request);
                void QueryTableDataAsync(const Model::QueryTableDataRequest& request, const QueryTableDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryTableDataOutcomeCallable QueryTableDataCallable(const Model::QueryTableDataRequest& request);

                /**
                 *This API is used to back up and recover.
                 * @param req RecoverBackUpJobRequest
                 * @return RecoverBackUpJobOutcome
                 */
                RecoverBackUpJobOutcome RecoverBackUpJob(const Model::RecoverBackUpJobRequest &request);
                void RecoverBackUpJobAsync(const Model::RecoverBackUpJobRequest& request, const RecoverBackUpJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverBackUpJobOutcomeCallable RecoverBackUpJobCallable(const Model::RecoverBackUpJobRequest& request);

                /**
                 *This API is used to scale in clusters.
                 * @param req ReduceInstanceRequest
                 * @return ReduceInstanceOutcome
                 */
                ReduceInstanceOutcome ReduceInstance(const Model::ReduceInstanceRequest &request);
                void ReduceInstanceAsync(const Model::ReduceInstanceRequest& request, const ReduceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReduceInstanceOutcomeCallable ReduceInstanceCallable(const Model::ReduceInstanceRequest& request);

                /**
                 *This API is used to expand cloud disks.
                 * @param req ResizeDiskRequest
                 * @return ResizeDiskOutcome
                 */
                ResizeDiskOutcome ResizeDisk(const Model::ResizeDiskRequest &request);
                void ResizeDiskAsync(const Model::ResizeDiskRequest& request, const ResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResizeDiskOutcomeCallable ResizeDiskCallable(const Model::ResizeDiskRequest& request);

                /**
                 *This API is used to restart the cluster to make the configuration file take effect.
                 * @param req RestartClusterForConfigsRequest
                 * @return RestartClusterForConfigsOutcome
                 */
                RestartClusterForConfigsOutcome RestartClusterForConfigs(const Model::RestartClusterForConfigsRequest &request);
                void RestartClusterForConfigsAsync(const Model::RestartClusterForConfigsRequest& request, const RestartClusterForConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartClusterForConfigsOutcomeCallable RestartClusterForConfigsCallable(const Model::RestartClusterForConfigsRequest& request);

                /**
                 *This API is used to indicate the rolling restart of the clusters.
                 * @param req RestartClusterForNodeRequest
                 * @return RestartClusterForNodeOutcome
                 */
                RestartClusterForNodeOutcome RestartClusterForNode(const Model::RestartClusterForNodeRequest &request);
                void RestartClusterForNodeAsync(const Model::RestartClusterForNodeRequest& request, const RestartClusterForNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartClusterForNodeOutcomeCallable RestartClusterForNodeCallable(const Model::RestartClusterForNodeRequest& request);

                /**
                 *This API is used to horizontally scale out nodes.
                 * @param req ScaleOutInstanceRequest
                 * @return ScaleOutInstanceOutcome
                 */
                ScaleOutInstanceOutcome ScaleOutInstance(const Model::ScaleOutInstanceRequest &request);
                void ScaleOutInstanceAsync(const Model::ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleOutInstanceOutcomeCallable ScaleOutInstanceCallable(const Model::ScaleOutInstanceRequest& request);

                /**
                 *This API is used to scale up/down computing resources.
                 * @param req ScaleUpInstanceRequest
                 * @return ScaleUpInstanceOutcome
                 */
                ScaleUpInstanceOutcome ScaleUpInstance(const Model::ScaleUpInstanceRequest &request);
                void ScaleUpInstanceAsync(const Model::ScaleUpInstanceRequest& request, const ScaleUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleUpInstanceOutcomeCallable ScaleUpInstanceCallable(const Model::ScaleUpInstanceRequest& request);

                /**
                 *This API is used to update the hot/cold data layering information on a cluster.
                 * @param req UpdateCoolDownRequest
                 * @return UpdateCoolDownOutcome
                 */
                UpdateCoolDownOutcome UpdateCoolDown(const Model::UpdateCoolDownRequest &request);
                void UpdateCoolDownAsync(const Model::UpdateCoolDownRequest& request, const UpdateCoolDownAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCoolDownOutcomeCallable UpdateCoolDownCallable(const Model::UpdateCoolDownRequest& request);

                /**
                 *This API is used to modify the attributes of a specified database, including setting the data volume quota, renaming the database, setting the replica quantity quota, and modifying other attributes of the database.
                 * @param req UpdateDatabaseRequest
                 * @return UpdateDatabaseOutcome
                 */
                UpdateDatabaseOutcome UpdateDatabase(const Model::UpdateDatabaseRequest &request);
                void UpdateDatabaseAsync(const Model::UpdateDatabaseRequest& request, const UpdateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDatabaseOutcomeCallable UpdateDatabaseCallable(const Model::UpdateDatabaseRequest& request);

                /**
                 *This API is used to modify the attributes of a specified table. The API parameters are consistent with those for creating a table.
                 * @param req UpdateTableSchemaRequest
                 * @return UpdateTableSchemaOutcome
                 */
                UpdateTableSchemaOutcome UpdateTableSchema(const Model::UpdateTableSchemaRequest &request);
                void UpdateTableSchemaAsync(const Model::UpdateTableSchemaRequest& request, const UpdateTableSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateTableSchemaOutcomeCallable UpdateTableSchemaCallable(const Model::UpdateTableSchemaRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_CDWDORISCLIENT_H_
