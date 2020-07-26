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

#ifndef TENCENTCLOUD_CDB_V20170320_CDBCLIENT_H_
#define TENCENTCLOUD_CDB_V20170320_CDBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cdb/v20170320/model/AddTimeWindowRequest.h>
#include <tencentcloud/cdb/v20170320/model/AddTimeWindowResponse.h>
#include <tencentcloud/cdb/v20170320/model/AssociateSecurityGroupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/AssociateSecurityGroupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/BalanceRoGroupLoadRequest.h>
#include <tencentcloud/cdb/v20170320/model/BalanceRoGroupLoadResponse.h>
#include <tencentcloud/cdb/v20170320/model/CloseWanServiceRequest.h>
#include <tencentcloud/cdb/v20170320/model/CloseWanServiceResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateAccountsRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateAccountsResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateBackupRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateBackupResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateDBImportJobRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateDBImportJobResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateDBInstanceHourRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateDBInstanceHourResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateDeployGroupRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateDeployGroupResponse.h>
#include <tencentcloud/cdb/v20170320/model/CreateParamTemplateRequest.h>
#include <tencentcloud/cdb/v20170320/model/CreateParamTemplateResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteAccountsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteAccountsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteBackupRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteBackupResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteDeployGroupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteDeployGroupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteParamTemplateRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteParamTemplateResponse.h>
#include <tencentcloud/cdb/v20170320/model/DeleteTimeWindowRequest.h>
#include <tencentcloud/cdb/v20170320/model/DeleteTimeWindowResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAccountPrivilegesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAccountPrivilegesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAccountsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAccountsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAsyncRequestInfoRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeAsyncRequestInfoResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupConfigRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupConfigResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupDatabasesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupDatabasesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupOverviewRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupOverviewResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupSummariesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupSummariesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupTablesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupTablesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBackupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBinlogBackupOverviewRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBinlogBackupOverviewResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBinlogsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeBinlogsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBImportRecordsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBImportRecordsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceCharsetRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceCharsetResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceConfigRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceConfigResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceGTIDRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceGTIDResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceInfoRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceInfoResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceRebootTimeRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstanceRebootTimeResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBSecurityGroupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBSecurityGroupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBSwitchRecordsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBSwitchRecordsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBZoneConfigRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDBZoneConfigResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDataBackupOverviewRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDataBackupOverviewResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDatabasesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDatabasesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDefaultParamsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDefaultParamsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDeployGroupListRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDeployGroupListResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDeviceMonitorInfoRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeDeviceMonitorInfoResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeErrorLogDataRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeErrorLogDataResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeInstanceParamRecordsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeInstanceParamRecordsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeInstanceParamsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeInstanceParamsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeParamTemplateInfoRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeParamTemplateInfoResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeParamTemplatesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeParamTemplatesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeProjectSecurityGroupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeProjectSecurityGroupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeRoGroupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeRoGroupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeRollbackRangeTimeRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeRollbackRangeTimeResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeRollbackTaskDetailRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeRollbackTaskDetailResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeSlowLogDataRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeSlowLogDataResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeSlowLogsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeSlowLogsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeSupportedPrivilegesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeSupportedPrivilegesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeTablesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeTablesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeTagsOfInstanceIdsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeTagsOfInstanceIdsResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeTasksRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeTasksResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeTimeWindowRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeTimeWindowResponse.h>
#include <tencentcloud/cdb/v20170320/model/DescribeUploadedFilesRequest.h>
#include <tencentcloud/cdb/v20170320/model/DescribeUploadedFilesResponse.h>
#include <tencentcloud/cdb/v20170320/model/DisassociateSecurityGroupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/DisassociateSecurityGroupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/InitDBInstancesRequest.h>
#include <tencentcloud/cdb/v20170320/model/InitDBInstancesResponse.h>
#include <tencentcloud/cdb/v20170320/model/IsolateDBInstanceRequest.h>
#include <tencentcloud/cdb/v20170320/model/IsolateDBInstanceResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountDescriptionRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountDescriptionResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountPasswordRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountPasswordResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountPrivilegesRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAccountPrivilegesResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAutoRenewFlagRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyAutoRenewFlagResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyBackupConfigRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyBackupConfigResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceNameRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceNameResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceProjectRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceProjectResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceVipVportRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceVipVportResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyInstanceParamRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyInstanceParamResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyInstanceTagRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyInstanceTagResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyNameOrDescByDpIdRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyNameOrDescByDpIdResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyParamTemplateRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyParamTemplateResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyRoGroupInfoRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyRoGroupInfoResponse.h>
#include <tencentcloud/cdb/v20170320/model/ModifyTimeWindowRequest.h>
#include <tencentcloud/cdb/v20170320/model/ModifyTimeWindowResponse.h>
#include <tencentcloud/cdb/v20170320/model/OfflineIsolatedInstancesRequest.h>
#include <tencentcloud/cdb/v20170320/model/OfflineIsolatedInstancesResponse.h>
#include <tencentcloud/cdb/v20170320/model/OpenDBInstanceGTIDRequest.h>
#include <tencentcloud/cdb/v20170320/model/OpenDBInstanceGTIDResponse.h>
#include <tencentcloud/cdb/v20170320/model/OpenWanServiceRequest.h>
#include <tencentcloud/cdb/v20170320/model/OpenWanServiceResponse.h>
#include <tencentcloud/cdb/v20170320/model/ReleaseIsolatedDBInstancesRequest.h>
#include <tencentcloud/cdb/v20170320/model/ReleaseIsolatedDBInstancesResponse.h>
#include <tencentcloud/cdb/v20170320/model/RestartDBInstancesRequest.h>
#include <tencentcloud/cdb/v20170320/model/RestartDBInstancesResponse.h>
#include <tencentcloud/cdb/v20170320/model/StartBatchRollbackRequest.h>
#include <tencentcloud/cdb/v20170320/model/StartBatchRollbackResponse.h>
#include <tencentcloud/cdb/v20170320/model/StopDBImportJobRequest.h>
#include <tencentcloud/cdb/v20170320/model/StopDBImportJobResponse.h>
#include <tencentcloud/cdb/v20170320/model/SwitchForUpgradeRequest.h>
#include <tencentcloud/cdb/v20170320/model/SwitchForUpgradeResponse.h>
#include <tencentcloud/cdb/v20170320/model/UpgradeDBInstanceRequest.h>
#include <tencentcloud/cdb/v20170320/model/UpgradeDBInstanceResponse.h>
#include <tencentcloud/cdb/v20170320/model/UpgradeDBInstanceEngineVersionRequest.h>
#include <tencentcloud/cdb/v20170320/model/UpgradeDBInstanceEngineVersionResponse.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            class CdbClient : public AbstractClient
            {
            public:
                CdbClient(const Credential &credential, const std::string &region);
                CdbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AddTimeWindowResponse> AddTimeWindowOutcome;
                typedef std::future<AddTimeWindowOutcome> AddTimeWindowOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::AddTimeWindowRequest&, AddTimeWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddTimeWindowAsyncHandler;
                typedef Outcome<Error, Model::AssociateSecurityGroupsResponse> AssociateSecurityGroupsOutcome;
                typedef std::future<AssociateSecurityGroupsOutcome> AssociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::AssociateSecurityGroupsRequest&, AssociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::BalanceRoGroupLoadResponse> BalanceRoGroupLoadOutcome;
                typedef std::future<BalanceRoGroupLoadOutcome> BalanceRoGroupLoadOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::BalanceRoGroupLoadRequest&, BalanceRoGroupLoadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BalanceRoGroupLoadAsyncHandler;
                typedef Outcome<Error, Model::CloseWanServiceResponse> CloseWanServiceOutcome;
                typedef std::future<CloseWanServiceOutcome> CloseWanServiceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CloseWanServiceRequest&, CloseWanServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseWanServiceAsyncHandler;
                typedef Outcome<Error, Model::CreateAccountsResponse> CreateAccountsOutcome;
                typedef std::future<CreateAccountsOutcome> CreateAccountsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateAccountsRequest&, CreateAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountsAsyncHandler;
                typedef Outcome<Error, Model::CreateBackupResponse> CreateBackupOutcome;
                typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateBackupRequest&, CreateBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupAsyncHandler;
                typedef Outcome<Error, Model::CreateDBImportJobResponse> CreateDBImportJobOutcome;
                typedef std::future<CreateDBImportJobOutcome> CreateDBImportJobOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateDBImportJobRequest&, CreateDBImportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBImportJobAsyncHandler;
                typedef Outcome<Error, Model::CreateDBInstanceHourResponse> CreateDBInstanceHourOutcome;
                typedef std::future<CreateDBInstanceHourOutcome> CreateDBInstanceHourOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateDBInstanceHourRequest&, CreateDBInstanceHourOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceHourAsyncHandler;
                typedef Outcome<Error, Model::CreateDeployGroupResponse> CreateDeployGroupOutcome;
                typedef std::future<CreateDeployGroupOutcome> CreateDeployGroupOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateDeployGroupRequest&, CreateDeployGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeployGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateParamTemplateResponse> CreateParamTemplateOutcome;
                typedef std::future<CreateParamTemplateOutcome> CreateParamTemplateOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::CreateParamTemplateRequest&, CreateParamTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateParamTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteAccountsResponse> DeleteAccountsOutcome;
                typedef std::future<DeleteAccountsOutcome> DeleteAccountsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteAccountsRequest&, DeleteAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountsAsyncHandler;
                typedef Outcome<Error, Model::DeleteBackupResponse> DeleteBackupOutcome;
                typedef std::future<DeleteBackupOutcome> DeleteBackupOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteBackupRequest&, DeleteBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupAsyncHandler;
                typedef Outcome<Error, Model::DeleteDeployGroupsResponse> DeleteDeployGroupsOutcome;
                typedef std::future<DeleteDeployGroupsOutcome> DeleteDeployGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteDeployGroupsRequest&, DeleteDeployGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeployGroupsAsyncHandler;
                typedef Outcome<Error, Model::DeleteParamTemplateResponse> DeleteParamTemplateOutcome;
                typedef std::future<DeleteParamTemplateOutcome> DeleteParamTemplateOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteParamTemplateRequest&, DeleteParamTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteParamTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteTimeWindowResponse> DeleteTimeWindowOutcome;
                typedef std::future<DeleteTimeWindowOutcome> DeleteTimeWindowOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DeleteTimeWindowRequest&, DeleteTimeWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTimeWindowAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccountPrivilegesResponse> DescribeAccountPrivilegesOutcome;
                typedef std::future<DescribeAccountPrivilegesOutcome> DescribeAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeAccountPrivilegesRequest&, DescribeAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountPrivilegesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Error, Model::DescribeAsyncRequestInfoResponse> DescribeAsyncRequestInfoOutcome;
                typedef std::future<DescribeAsyncRequestInfoOutcome> DescribeAsyncRequestInfoOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeAsyncRequestInfoRequest&, DescribeAsyncRequestInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAsyncRequestInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeBackupConfigResponse> DescribeBackupConfigOutcome;
                typedef std::future<DescribeBackupConfigOutcome> DescribeBackupConfigOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBackupConfigRequest&, DescribeBackupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeBackupDatabasesResponse> DescribeBackupDatabasesOutcome;
                typedef std::future<DescribeBackupDatabasesOutcome> DescribeBackupDatabasesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBackupDatabasesRequest&, DescribeBackupDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupDatabasesAsyncHandler;
                typedef Outcome<Error, Model::DescribeBackupOverviewResponse> DescribeBackupOverviewOutcome;
                typedef std::future<DescribeBackupOverviewOutcome> DescribeBackupOverviewOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBackupOverviewRequest&, DescribeBackupOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupOverviewAsyncHandler;
                typedef Outcome<Error, Model::DescribeBackupSummariesResponse> DescribeBackupSummariesOutcome;
                typedef std::future<DescribeBackupSummariesOutcome> DescribeBackupSummariesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBackupSummariesRequest&, DescribeBackupSummariesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupSummariesAsyncHandler;
                typedef Outcome<Error, Model::DescribeBackupTablesResponse> DescribeBackupTablesOutcome;
                typedef std::future<DescribeBackupTablesOutcome> DescribeBackupTablesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBackupTablesRequest&, DescribeBackupTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupTablesAsyncHandler;
                typedef Outcome<Error, Model::DescribeBackupsResponse> DescribeBackupsOutcome;
                typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBackupsRequest&, DescribeBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeBinlogBackupOverviewResponse> DescribeBinlogBackupOverviewOutcome;
                typedef std::future<DescribeBinlogBackupOverviewOutcome> DescribeBinlogBackupOverviewOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBinlogBackupOverviewRequest&, DescribeBinlogBackupOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBinlogBackupOverviewAsyncHandler;
                typedef Outcome<Error, Model::DescribeBinlogsResponse> DescribeBinlogsOutcome;
                typedef std::future<DescribeBinlogsOutcome> DescribeBinlogsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeBinlogsRequest&, DescribeBinlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBinlogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBImportRecordsResponse> DescribeDBImportRecordsOutcome;
                typedef std::future<DescribeDBImportRecordsOutcome> DescribeDBImportRecordsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBImportRecordsRequest&, DescribeDBImportRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBImportRecordsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBInstanceCharsetResponse> DescribeDBInstanceCharsetOutcome;
                typedef std::future<DescribeDBInstanceCharsetOutcome> DescribeDBInstanceCharsetOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBInstanceCharsetRequest&, DescribeDBInstanceCharsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceCharsetAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBInstanceConfigResponse> DescribeDBInstanceConfigOutcome;
                typedef std::future<DescribeDBInstanceConfigOutcome> DescribeDBInstanceConfigOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBInstanceConfigRequest&, DescribeDBInstanceConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBInstanceGTIDResponse> DescribeDBInstanceGTIDOutcome;
                typedef std::future<DescribeDBInstanceGTIDOutcome> DescribeDBInstanceGTIDOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBInstanceGTIDRequest&, DescribeDBInstanceGTIDOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceGTIDAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBInstanceInfoResponse> DescribeDBInstanceInfoOutcome;
                typedef std::future<DescribeDBInstanceInfoOutcome> DescribeDBInstanceInfoOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBInstanceInfoRequest&, DescribeDBInstanceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBInstanceRebootTimeResponse> DescribeDBInstanceRebootTimeOutcome;
                typedef std::future<DescribeDBInstanceRebootTimeOutcome> DescribeDBInstanceRebootTimeOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBInstanceRebootTimeRequest&, DescribeDBInstanceRebootTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceRebootTimeAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBSecurityGroupsResponse> DescribeDBSecurityGroupsOutcome;
                typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBSecurityGroupsRequest&, DescribeDBSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBSwitchRecordsResponse> DescribeDBSwitchRecordsOutcome;
                typedef std::future<DescribeDBSwitchRecordsOutcome> DescribeDBSwitchRecordsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBSwitchRecordsRequest&, DescribeDBSwitchRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSwitchRecordsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBZoneConfigResponse> DescribeDBZoneConfigOutcome;
                typedef std::future<DescribeDBZoneConfigOutcome> DescribeDBZoneConfigOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDBZoneConfigRequest&, DescribeDBZoneConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBZoneConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeDataBackupOverviewResponse> DescribeDataBackupOverviewOutcome;
                typedef std::future<DescribeDataBackupOverviewOutcome> DescribeDataBackupOverviewOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDataBackupOverviewRequest&, DescribeDataBackupOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataBackupOverviewAsyncHandler;
                typedef Outcome<Error, Model::DescribeDatabasesResponse> DescribeDatabasesOutcome;
                typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDatabasesRequest&, DescribeDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
                typedef Outcome<Error, Model::DescribeDefaultParamsResponse> DescribeDefaultParamsOutcome;
                typedef std::future<DescribeDefaultParamsOutcome> DescribeDefaultParamsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDefaultParamsRequest&, DescribeDefaultParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultParamsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeployGroupListResponse> DescribeDeployGroupListOutcome;
                typedef std::future<DescribeDeployGroupListOutcome> DescribeDeployGroupListOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDeployGroupListRequest&, DescribeDeployGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeployGroupListAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeviceMonitorInfoResponse> DescribeDeviceMonitorInfoOutcome;
                typedef std::future<DescribeDeviceMonitorInfoOutcome> DescribeDeviceMonitorInfoOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeDeviceMonitorInfoRequest&, DescribeDeviceMonitorInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceMonitorInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeErrorLogDataResponse> DescribeErrorLogDataOutcome;
                typedef std::future<DescribeErrorLogDataOutcome> DescribeErrorLogDataOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeErrorLogDataRequest&, DescribeErrorLogDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeErrorLogDataAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstanceParamRecordsResponse> DescribeInstanceParamRecordsOutcome;
                typedef std::future<DescribeInstanceParamRecordsOutcome> DescribeInstanceParamRecordsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeInstanceParamRecordsRequest&, DescribeInstanceParamRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamRecordsAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstanceParamsResponse> DescribeInstanceParamsOutcome;
                typedef std::future<DescribeInstanceParamsOutcome> DescribeInstanceParamsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeInstanceParamsRequest&, DescribeInstanceParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamsAsyncHandler;
                typedef Outcome<Error, Model::DescribeParamTemplateInfoResponse> DescribeParamTemplateInfoOutcome;
                typedef std::future<DescribeParamTemplateInfoOutcome> DescribeParamTemplateInfoOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeParamTemplateInfoRequest&, DescribeParamTemplateInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParamTemplateInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeParamTemplatesResponse> DescribeParamTemplatesOutcome;
                typedef std::future<DescribeParamTemplatesOutcome> DescribeParamTemplatesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeParamTemplatesRequest&, DescribeParamTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParamTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeProjectSecurityGroupsResponse> DescribeProjectSecurityGroupsOutcome;
                typedef std::future<DescribeProjectSecurityGroupsOutcome> DescribeProjectSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeProjectSecurityGroupsRequest&, DescribeProjectSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeRoGroupsResponse> DescribeRoGroupsOutcome;
                typedef std::future<DescribeRoGroupsOutcome> DescribeRoGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeRoGroupsRequest&, DescribeRoGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeRollbackRangeTimeResponse> DescribeRollbackRangeTimeOutcome;
                typedef std::future<DescribeRollbackRangeTimeOutcome> DescribeRollbackRangeTimeOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeRollbackRangeTimeRequest&, DescribeRollbackRangeTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRollbackRangeTimeAsyncHandler;
                typedef Outcome<Error, Model::DescribeRollbackTaskDetailResponse> DescribeRollbackTaskDetailOutcome;
                typedef std::future<DescribeRollbackTaskDetailOutcome> DescribeRollbackTaskDetailOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeRollbackTaskDetailRequest&, DescribeRollbackTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRollbackTaskDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeSlowLogDataResponse> DescribeSlowLogDataOutcome;
                typedef std::future<DescribeSlowLogDataOutcome> DescribeSlowLogDataOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeSlowLogDataRequest&, DescribeSlowLogDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogDataAsyncHandler;
                typedef Outcome<Error, Model::DescribeSlowLogsResponse> DescribeSlowLogsOutcome;
                typedef std::future<DescribeSlowLogsOutcome> DescribeSlowLogsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeSlowLogsRequest&, DescribeSlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSupportedPrivilegesResponse> DescribeSupportedPrivilegesOutcome;
                typedef std::future<DescribeSupportedPrivilegesOutcome> DescribeSupportedPrivilegesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeSupportedPrivilegesRequest&, DescribeSupportedPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSupportedPrivilegesAsyncHandler;
                typedef Outcome<Error, Model::DescribeTablesResponse> DescribeTablesOutcome;
                typedef std::future<DescribeTablesOutcome> DescribeTablesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeTablesRequest&, DescribeTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesAsyncHandler;
                typedef Outcome<Error, Model::DescribeTagsOfInstanceIdsResponse> DescribeTagsOfInstanceIdsOutcome;
                typedef std::future<DescribeTagsOfInstanceIdsOutcome> DescribeTagsOfInstanceIdsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeTagsOfInstanceIdsRequest&, DescribeTagsOfInstanceIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsOfInstanceIdsAsyncHandler;
                typedef Outcome<Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Error, Model::DescribeTimeWindowResponse> DescribeTimeWindowOutcome;
                typedef std::future<DescribeTimeWindowOutcome> DescribeTimeWindowOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeTimeWindowRequest&, DescribeTimeWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTimeWindowAsyncHandler;
                typedef Outcome<Error, Model::DescribeUploadedFilesResponse> DescribeUploadedFilesOutcome;
                typedef std::future<DescribeUploadedFilesOutcome> DescribeUploadedFilesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DescribeUploadedFilesRequest&, DescribeUploadedFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUploadedFilesAsyncHandler;
                typedef Outcome<Error, Model::DisassociateSecurityGroupsResponse> DisassociateSecurityGroupsOutcome;
                typedef std::future<DisassociateSecurityGroupsOutcome> DisassociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::DisassociateSecurityGroupsRequest&, DisassociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::InitDBInstancesResponse> InitDBInstancesOutcome;
                typedef std::future<InitDBInstancesOutcome> InitDBInstancesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::InitDBInstancesRequest&, InitDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InitDBInstancesAsyncHandler;
                typedef Outcome<Error, Model::IsolateDBInstanceResponse> IsolateDBInstanceOutcome;
                typedef std::future<IsolateDBInstanceOutcome> IsolateDBInstanceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::IsolateDBInstanceRequest&, IsolateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDBInstanceAsyncHandler;
                typedef Outcome<Error, Model::ModifyAccountDescriptionResponse> ModifyAccountDescriptionOutcome;
                typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyAccountDescriptionRequest&, ModifyAccountDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
                typedef Outcome<Error, Model::ModifyAccountPasswordResponse> ModifyAccountPasswordOutcome;
                typedef std::future<ModifyAccountPasswordOutcome> ModifyAccountPasswordOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyAccountPasswordRequest&, ModifyAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPasswordAsyncHandler;
                typedef Outcome<Error, Model::ModifyAccountPrivilegesResponse> ModifyAccountPrivilegesOutcome;
                typedef std::future<ModifyAccountPrivilegesOutcome> ModifyAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyAccountPrivilegesRequest&, ModifyAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPrivilegesAsyncHandler;
                typedef Outcome<Error, Model::ModifyAutoRenewFlagResponse> ModifyAutoRenewFlagOutcome;
                typedef std::future<ModifyAutoRenewFlagOutcome> ModifyAutoRenewFlagOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyAutoRenewFlagRequest&, ModifyAutoRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoRenewFlagAsyncHandler;
                typedef Outcome<Error, Model::ModifyBackupConfigResponse> ModifyBackupConfigOutcome;
                typedef std::future<ModifyBackupConfigOutcome> ModifyBackupConfigOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyBackupConfigRequest&, ModifyBackupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupConfigAsyncHandler;
                typedef Outcome<Error, Model::ModifyDBInstanceNameResponse> ModifyDBInstanceNameOutcome;
                typedef std::future<ModifyDBInstanceNameOutcome> ModifyDBInstanceNameOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyDBInstanceNameRequest&, ModifyDBInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNameAsyncHandler;
                typedef Outcome<Error, Model::ModifyDBInstanceProjectResponse> ModifyDBInstanceProjectOutcome;
                typedef std::future<ModifyDBInstanceProjectOutcome> ModifyDBInstanceProjectOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyDBInstanceProjectRequest&, ModifyDBInstanceProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceProjectAsyncHandler;
                typedef Outcome<Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::ModifyDBInstanceVipVportResponse> ModifyDBInstanceVipVportOutcome;
                typedef std::future<ModifyDBInstanceVipVportOutcome> ModifyDBInstanceVipVportOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyDBInstanceVipVportRequest&, ModifyDBInstanceVipVportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceVipVportAsyncHandler;
                typedef Outcome<Error, Model::ModifyInstanceParamResponse> ModifyInstanceParamOutcome;
                typedef std::future<ModifyInstanceParamOutcome> ModifyInstanceParamOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyInstanceParamRequest&, ModifyInstanceParamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceParamAsyncHandler;
                typedef Outcome<Error, Model::ModifyInstanceTagResponse> ModifyInstanceTagOutcome;
                typedef std::future<ModifyInstanceTagOutcome> ModifyInstanceTagOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyInstanceTagRequest&, ModifyInstanceTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceTagAsyncHandler;
                typedef Outcome<Error, Model::ModifyNameOrDescByDpIdResponse> ModifyNameOrDescByDpIdOutcome;
                typedef std::future<ModifyNameOrDescByDpIdOutcome> ModifyNameOrDescByDpIdOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyNameOrDescByDpIdRequest&, ModifyNameOrDescByDpIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNameOrDescByDpIdAsyncHandler;
                typedef Outcome<Error, Model::ModifyParamTemplateResponse> ModifyParamTemplateOutcome;
                typedef std::future<ModifyParamTemplateOutcome> ModifyParamTemplateOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyParamTemplateRequest&, ModifyParamTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParamTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifyRoGroupInfoResponse> ModifyRoGroupInfoOutcome;
                typedef std::future<ModifyRoGroupInfoOutcome> ModifyRoGroupInfoOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyRoGroupInfoRequest&, ModifyRoGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRoGroupInfoAsyncHandler;
                typedef Outcome<Error, Model::ModifyTimeWindowResponse> ModifyTimeWindowOutcome;
                typedef std::future<ModifyTimeWindowOutcome> ModifyTimeWindowOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ModifyTimeWindowRequest&, ModifyTimeWindowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTimeWindowAsyncHandler;
                typedef Outcome<Error, Model::OfflineIsolatedInstancesResponse> OfflineIsolatedInstancesOutcome;
                typedef std::future<OfflineIsolatedInstancesOutcome> OfflineIsolatedInstancesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::OfflineIsolatedInstancesRequest&, OfflineIsolatedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OfflineIsolatedInstancesAsyncHandler;
                typedef Outcome<Error, Model::OpenDBInstanceGTIDResponse> OpenDBInstanceGTIDOutcome;
                typedef std::future<OpenDBInstanceGTIDOutcome> OpenDBInstanceGTIDOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::OpenDBInstanceGTIDRequest&, OpenDBInstanceGTIDOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenDBInstanceGTIDAsyncHandler;
                typedef Outcome<Error, Model::OpenWanServiceResponse> OpenWanServiceOutcome;
                typedef std::future<OpenWanServiceOutcome> OpenWanServiceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::OpenWanServiceRequest&, OpenWanServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenWanServiceAsyncHandler;
                typedef Outcome<Error, Model::ReleaseIsolatedDBInstancesResponse> ReleaseIsolatedDBInstancesOutcome;
                typedef std::future<ReleaseIsolatedDBInstancesOutcome> ReleaseIsolatedDBInstancesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::ReleaseIsolatedDBInstancesRequest&, ReleaseIsolatedDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseIsolatedDBInstancesAsyncHandler;
                typedef Outcome<Error, Model::RestartDBInstancesResponse> RestartDBInstancesOutcome;
                typedef std::future<RestartDBInstancesOutcome> RestartDBInstancesOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::RestartDBInstancesRequest&, RestartDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstancesAsyncHandler;
                typedef Outcome<Error, Model::StartBatchRollbackResponse> StartBatchRollbackOutcome;
                typedef std::future<StartBatchRollbackOutcome> StartBatchRollbackOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::StartBatchRollbackRequest&, StartBatchRollbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartBatchRollbackAsyncHandler;
                typedef Outcome<Error, Model::StopDBImportJobResponse> StopDBImportJobOutcome;
                typedef std::future<StopDBImportJobOutcome> StopDBImportJobOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::StopDBImportJobRequest&, StopDBImportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopDBImportJobAsyncHandler;
                typedef Outcome<Error, Model::SwitchForUpgradeResponse> SwitchForUpgradeOutcome;
                typedef std::future<SwitchForUpgradeOutcome> SwitchForUpgradeOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::SwitchForUpgradeRequest&, SwitchForUpgradeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchForUpgradeAsyncHandler;
                typedef Outcome<Error, Model::UpgradeDBInstanceResponse> UpgradeDBInstanceOutcome;
                typedef std::future<UpgradeDBInstanceOutcome> UpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::UpgradeDBInstanceRequest&, UpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceAsyncHandler;
                typedef Outcome<Error, Model::UpgradeDBInstanceEngineVersionResponse> UpgradeDBInstanceEngineVersionOutcome;
                typedef std::future<UpgradeDBInstanceEngineVersionOutcome> UpgradeDBInstanceEngineVersionOutcomeCallable;
                typedef std::function<void(const CdbClient*, const Model::UpgradeDBInstanceEngineVersionRequest&, UpgradeDBInstanceEngineVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceEngineVersionAsyncHandler;



                /**
                 *This API (AddTimeWindow) is used to add a maintenance time window for a TencentDB instance, so as to specify when the instance can automatically perform access switch operations.
                 * @param req AddTimeWindowRequest
                 * @return AddTimeWindowOutcome
                 */
                AddTimeWindowOutcome AddTimeWindow(const Model::AddTimeWindowRequest &request);
                void AddTimeWindowAsync(const Model::AddTimeWindowRequest& request, const AddTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddTimeWindowOutcomeCallable AddTimeWindowCallable(const Model::AddTimeWindowRequest& request);

                /**
                 *This API (AssociateSecurityGroups) is used to bind security groups to instances in batches.
                 * @param req AssociateSecurityGroupsRequest
                 * @return AssociateSecurityGroupsOutcome
                 */
                AssociateSecurityGroupsOutcome AssociateSecurityGroups(const Model::AssociateSecurityGroupsRequest &request);
                void AssociateSecurityGroupsAsync(const Model::AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateSecurityGroupsOutcomeCallable AssociateSecurityGroupsCallable(const Model::AssociateSecurityGroupsRequest& request);

                /**
                 *This API is used to rebalance the loads of instances in an RO group. Please note that the database connections to those instances will be interrupted transiently; therefore, you should ensure that your application can reconnect to the databases. This operation should be performed with caution.
                 * @param req BalanceRoGroupLoadRequest
                 * @return BalanceRoGroupLoadOutcome
                 */
                BalanceRoGroupLoadOutcome BalanceRoGroupLoad(const Model::BalanceRoGroupLoadRequest &request);
                void BalanceRoGroupLoadAsync(const Model::BalanceRoGroupLoadRequest& request, const BalanceRoGroupLoadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BalanceRoGroupLoadOutcomeCallable BalanceRoGroupLoadCallable(const Model::BalanceRoGroupLoadRequest& request);

                /**
                 *This API (CloseWanService) is used to disable public network access for TencentDB instance, which will make public IP addresses inaccessible.
                 * @param req CloseWanServiceRequest
                 * @return CloseWanServiceOutcome
                 */
                CloseWanServiceOutcome CloseWanService(const Model::CloseWanServiceRequest &request);
                void CloseWanServiceAsync(const Model::CloseWanServiceRequest& request, const CloseWanServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseWanServiceOutcomeCallable CloseWanServiceCallable(const Model::CloseWanServiceRequest& request);

                /**
                 *This API (CreateAccounts) is used to create TencentDB accounts. The new account names, domain names, and passwords need to be specified, and account remarks can also be added.
                 * @param req CreateAccountsRequest
                 * @return CreateAccountsOutcome
                 */
                CreateAccountsOutcome CreateAccounts(const Model::CreateAccountsRequest &request);
                void CreateAccountsAsync(const Model::CreateAccountsRequest& request, const CreateAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccountsOutcomeCallable CreateAccountsCallable(const Model::CreateAccountsRequest& request);

                /**
                 *This API (CreateBackup) is used to create a TencentDB instance backup.
                 * @param req CreateBackupRequest
                 * @return CreateBackupOutcome
                 */
                CreateBackupOutcome CreateBackup(const Model::CreateBackupRequest &request);
                void CreateBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupOutcomeCallable CreateBackupCallable(const Model::CreateBackupRequest& request);

                /**
                 *This API (CreateDBImportJob) is used to create a data import task for a TencentDB instance.

Note that the files for a data import task must be uploaded to Tencent Cloud in advance. You need to do so in the console.
                 * @param req CreateDBImportJobRequest
                 * @return CreateDBImportJobOutcome
                 */
                CreateDBImportJobOutcome CreateDBImportJob(const Model::CreateDBImportJobRequest &request);
                void CreateDBImportJobAsync(const Model::CreateDBImportJobRequest& request, const CreateDBImportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBImportJobOutcomeCallable CreateDBImportJobCallable(const Model::CreateDBImportJobRequest& request);

                /**
                 *This API is used to create a pay-as-you-go TencentDB instance (which can be a master, disaster recovery, or read-only instance) by passing in information such as instance specifications, MySQL version number, and quantity.

This is an async API. You can also use the [DescribeDBInstances](https://cloud.tencent.com/document/api/236/15872) API to query the instance details. If the `Status` value of an instance is 1 and `TaskStatus` is 0, the instance has been successfully delivered.

1. Please use the [DescribeDBZoneConfig](https://cloud.tencent.com/document/api/236/17229) API to query the supported instance specifications first and then use the [DescribeDBPrice](https://cloud.tencent.com/document/api/236/18566) API to query the prices of the supported instances;
2. You can create up to 100 instances at a time, with an instance validity period of up to 36 months;
3. MySQL v5.5, v5.6, and v5.7 are supported;
4. Master instances, read-only instances, and disaster recovery instances can be created;
5. If `Port`, `ParamList`, or `Password` is set in the input parameters, the instance will be initialized.
                 * @param req CreateDBInstanceHourRequest
                 * @return CreateDBInstanceHourOutcome
                 */
                CreateDBInstanceHourOutcome CreateDBInstanceHour(const Model::CreateDBInstanceHourRequest &request);
                void CreateDBInstanceHourAsync(const Model::CreateDBInstanceHourRequest& request, const CreateDBInstanceHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstanceHourOutcomeCallable CreateDBInstanceHourCallable(const Model::CreateDBInstanceHourRequest& request);

                /**
                 *This API is used to create a placement group for placing instances.
                 * @param req CreateDeployGroupRequest
                 * @return CreateDeployGroupOutcome
                 */
                CreateDeployGroupOutcome CreateDeployGroup(const Model::CreateDeployGroupRequest &request);
                void CreateDeployGroupAsync(const Model::CreateDeployGroupRequest& request, const CreateDeployGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeployGroupOutcomeCallable CreateDeployGroupCallable(const Model::CreateDeployGroupRequest& request);

                /**
                 *This API (CreateParamTemplate) is used to create a parameter template.
                 * @param req CreateParamTemplateRequest
                 * @return CreateParamTemplateOutcome
                 */
                CreateParamTemplateOutcome CreateParamTemplate(const Model::CreateParamTemplateRequest &request);
                void CreateParamTemplateAsync(const Model::CreateParamTemplateRequest& request, const CreateParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateParamTemplateOutcomeCallable CreateParamTemplateCallable(const Model::CreateParamTemplateRequest& request);

                /**
                 *This API (DeleteAccounts) is used to delete TencentDB accounts.
                 * @param req DeleteAccountsRequest
                 * @return DeleteAccountsOutcome
                 */
                DeleteAccountsOutcome DeleteAccounts(const Model::DeleteAccountsRequest &request);
                void DeleteAccountsAsync(const Model::DeleteAccountsRequest& request, const DeleteAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccountsOutcomeCallable DeleteAccountsCallable(const Model::DeleteAccountsRequest& request);

                /**
                 *This API is used to delete a database backup. It can only delete manually initiated backups.
                 * @param req DeleteBackupRequest
                 * @return DeleteBackupOutcome
                 */
                DeleteBackupOutcome DeleteBackup(const Model::DeleteBackupRequest &request);
                void DeleteBackupAsync(const Model::DeleteBackupRequest& request, const DeleteBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBackupOutcomeCallable DeleteBackupCallable(const Model::DeleteBackupRequest& request);

                /**
                 *This API is used to delete placement groups by placement group ID (a placement group cannot be deleted if it contains resources).
                 * @param req DeleteDeployGroupsRequest
                 * @return DeleteDeployGroupsOutcome
                 */
                DeleteDeployGroupsOutcome DeleteDeployGroups(const Model::DeleteDeployGroupsRequest &request);
                void DeleteDeployGroupsAsync(const Model::DeleteDeployGroupsRequest& request, const DeleteDeployGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeployGroupsOutcomeCallable DeleteDeployGroupsCallable(const Model::DeleteDeployGroupsRequest& request);

                /**
                 *This API (DeleteParamTemplate) is used to delete a parameter template.
                 * @param req DeleteParamTemplateRequest
                 * @return DeleteParamTemplateOutcome
                 */
                DeleteParamTemplateOutcome DeleteParamTemplate(const Model::DeleteParamTemplateRequest &request);
                void DeleteParamTemplateAsync(const Model::DeleteParamTemplateRequest& request, const DeleteParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteParamTemplateOutcomeCallable DeleteParamTemplateCallable(const Model::DeleteParamTemplateRequest& request);

                /**
                 *This API (DeleteTimeWindow) is used to delete a maintenance time window for a TencentDB instance. After it is deleted, the default maintenance time window will be 03:00-04:00, i.e., switch to a new instance will be performed during 03:00-04:00 by default.
                 * @param req DeleteTimeWindowRequest
                 * @return DeleteTimeWindowOutcome
                 */
                DeleteTimeWindowOutcome DeleteTimeWindow(const Model::DeleteTimeWindowRequest &request);
                void DeleteTimeWindowAsync(const Model::DeleteTimeWindowRequest& request, const DeleteTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTimeWindowOutcomeCallable DeleteTimeWindowCallable(const Model::DeleteTimeWindowRequest& request);

                /**
                 *This API (DescribeAccountPrivileges) is used to query the information of TencentDB account permissions.
                 * @param req DescribeAccountPrivilegesRequest
                 * @return DescribeAccountPrivilegesOutcome
                 */
                DescribeAccountPrivilegesOutcome DescribeAccountPrivileges(const Model::DescribeAccountPrivilegesRequest &request);
                void DescribeAccountPrivilegesAsync(const Model::DescribeAccountPrivilegesRequest& request, const DescribeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountPrivilegesOutcomeCallable DescribeAccountPrivilegesCallable(const Model::DescribeAccountPrivilegesRequest& request);

                /**
                 *This API (DescribeAccounts) is used to query information of all TencentDB accounts.
                 * @param req DescribeAccountsRequest
                 * @return DescribeAccountsOutcome
                 */
                DescribeAccountsOutcome DescribeAccounts(const Model::DescribeAccountsRequest &request);
                void DescribeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountsOutcomeCallable DescribeAccountsCallable(const Model::DescribeAccountsRequest& request);

                /**
                 *This API (DescribeAsyncRequestInfo) is used to query the async task execution result of a TencentDB instance.
                 * @param req DescribeAsyncRequestInfoRequest
                 * @return DescribeAsyncRequestInfoOutcome
                 */
                DescribeAsyncRequestInfoOutcome DescribeAsyncRequestInfo(const Model::DescribeAsyncRequestInfoRequest &request);
                void DescribeAsyncRequestInfoAsync(const Model::DescribeAsyncRequestInfoRequest& request, const DescribeAsyncRequestInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAsyncRequestInfoOutcomeCallable DescribeAsyncRequestInfoCallable(const Model::DescribeAsyncRequestInfoRequest& request);

                /**
                 *This API (DescribeBackupConfig) is used to query the configuration information of a TencentDB instance backup.
                 * @param req DescribeBackupConfigRequest
                 * @return DescribeBackupConfigOutcome
                 */
                DescribeBackupConfigOutcome DescribeBackupConfig(const Model::DescribeBackupConfigRequest &request);
                void DescribeBackupConfigAsync(const Model::DescribeBackupConfigRequest& request, const DescribeBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupConfigOutcomeCallable DescribeBackupConfigCallable(const Model::DescribeBackupConfigRequest& request);

                /**
                 *This API is used to query the databases contained in a backup file. It has been disused.
After the legacy version becomes capable of full backup, if you want to download logical backup files by table, you need to use this API.
The new API (CreateBackup) can specify the table to be backed up when a logical backup file is created, which can be downloaded directly.
                 * @param req DescribeBackupDatabasesRequest
                 * @return DescribeBackupDatabasesOutcome
                 */
                DescribeBackupDatabasesOutcome DescribeBackupDatabases(const Model::DescribeBackupDatabasesRequest &request);
                void DescribeBackupDatabasesAsync(const Model::DescribeBackupDatabasesRequest& request, const DescribeBackupDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupDatabasesOutcomeCallable DescribeBackupDatabasesCallable(const Model::DescribeBackupDatabasesRequest& request);

                /**
                 *This API is used to query the backup overview of a user. It will return the user's current total number of backups, total capacity used by backups, capacity in the free tier, and paid capacity (all capacity values are in bytes).
                 * @param req DescribeBackupOverviewRequest
                 * @return DescribeBackupOverviewOutcome
                 */
                DescribeBackupOverviewOutcome DescribeBackupOverview(const Model::DescribeBackupOverviewRequest &request);
                void DescribeBackupOverviewAsync(const Model::DescribeBackupOverviewRequest& request, const DescribeBackupOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupOverviewOutcomeCallable DescribeBackupOverviewCallable(const Model::DescribeBackupOverviewRequest& request);

                /**
                 *This API is used to query the statistics of backups. It will return the capacity used by backups at the instance level and the number and used capacity of data backups and log backups of each instance (all capacity values are in bytes).
                 * @param req DescribeBackupSummariesRequest
                 * @return DescribeBackupSummariesOutcome
                 */
                DescribeBackupSummariesOutcome DescribeBackupSummaries(const Model::DescribeBackupSummariesRequest &request);
                void DescribeBackupSummariesAsync(const Model::DescribeBackupSummariesRequest& request, const DescribeBackupSummariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupSummariesOutcomeCallable DescribeBackupSummariesCallable(const Model::DescribeBackupSummariesRequest& request);

                /**
                 *This API is used to query the backup tables of the specified database. It has been disused.
After the legacy version becomes capable of full backup, if you want to download logical backup files by table, you need to use this API.
The new API (CreateBackup) can specify the table to be backed up when a logical backup file is created, which can be downloaded directly.
                 * @param req DescribeBackupTablesRequest
                 * @return DescribeBackupTablesOutcome
                 */
                DescribeBackupTablesOutcome DescribeBackupTables(const Model::DescribeBackupTablesRequest &request);
                void DescribeBackupTablesAsync(const Model::DescribeBackupTablesRequest& request, const DescribeBackupTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupTablesOutcomeCallable DescribeBackupTablesCallable(const Model::DescribeBackupTablesRequest& request);

                /**
                 *This API (DescribeBackups) is used to query the backups of a TencentDB instance.
                 * @param req DescribeBackupsRequest
                 * @return DescribeBackupsOutcome
                 */
                DescribeBackupsOutcome DescribeBackups(const Model::DescribeBackupsRequest &request);
                void DescribeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupsOutcomeCallable DescribeBackupsCallable(const Model::DescribeBackupsRequest& request);

                /**
                 *This API is used to query the log backup overview of a user in the current region.
                 * @param req DescribeBinlogBackupOverviewRequest
                 * @return DescribeBinlogBackupOverviewOutcome
                 */
                DescribeBinlogBackupOverviewOutcome DescribeBinlogBackupOverview(const Model::DescribeBinlogBackupOverviewRequest &request);
                void DescribeBinlogBackupOverviewAsync(const Model::DescribeBinlogBackupOverviewRequest& request, const DescribeBinlogBackupOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBinlogBackupOverviewOutcomeCallable DescribeBinlogBackupOverviewCallable(const Model::DescribeBinlogBackupOverviewRequest& request);

                /**
                 *This API is used to query the list of binlog files of a TencentDB instance.
                 * @param req DescribeBinlogsRequest
                 * @return DescribeBinlogsOutcome
                 */
                DescribeBinlogsOutcome DescribeBinlogs(const Model::DescribeBinlogsRequest &request);
                void DescribeBinlogsAsync(const Model::DescribeBinlogsRequest& request, const DescribeBinlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBinlogsOutcomeCallable DescribeBinlogsCallable(const Model::DescribeBinlogsRequest& request);

                /**
                 *This API (DescribeDBImportRecords) is used to query the records of import tasks in a TencentDB instance.
                 * @param req DescribeDBImportRecordsRequest
                 * @return DescribeDBImportRecordsOutcome
                 */
                DescribeDBImportRecordsOutcome DescribeDBImportRecords(const Model::DescribeDBImportRecordsRequest &request);
                void DescribeDBImportRecordsAsync(const Model::DescribeDBImportRecordsRequest& request, const DescribeDBImportRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBImportRecordsOutcomeCallable DescribeDBImportRecordsCallable(const Model::DescribeDBImportRecordsRequest& request);

                /**
                 *This API (DescribeDBInstanceCharset) is used to query the character set and its name of a TencentDB instance.
                 * @param req DescribeDBInstanceCharsetRequest
                 * @return DescribeDBInstanceCharsetOutcome
                 */
                DescribeDBInstanceCharsetOutcome DescribeDBInstanceCharset(const Model::DescribeDBInstanceCharsetRequest &request);
                void DescribeDBInstanceCharsetAsync(const Model::DescribeDBInstanceCharsetRequest& request, const DescribeDBInstanceCharsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceCharsetOutcomeCallable DescribeDBInstanceCharsetCallable(const Model::DescribeDBInstanceCharsetRequest& request);

                /**
                 *This API (DescribeDBInstanceConfig) is used to query the configuration information of a TencentDB instance, such as its synchronization mode and deployment mode.
                 * @param req DescribeDBInstanceConfigRequest
                 * @return DescribeDBInstanceConfigOutcome
                 */
                DescribeDBInstanceConfigOutcome DescribeDBInstanceConfig(const Model::DescribeDBInstanceConfigRequest &request);
                void DescribeDBInstanceConfigAsync(const Model::DescribeDBInstanceConfigRequest& request, const DescribeDBInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceConfigOutcomeCallable DescribeDBInstanceConfigCallable(const Model::DescribeDBInstanceConfigRequest& request);

                /**
                 *This API (DescribeDBInstanceGTID) is used to query whether GTID is activated for a TencentDB instance. Instances on or below version 5.5 are not supported.
                 * @param req DescribeDBInstanceGTIDRequest
                 * @return DescribeDBInstanceGTIDOutcome
                 */
                DescribeDBInstanceGTIDOutcome DescribeDBInstanceGTID(const Model::DescribeDBInstanceGTIDRequest &request);
                void DescribeDBInstanceGTIDAsync(const Model::DescribeDBInstanceGTIDRequest& request, const DescribeDBInstanceGTIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceGTIDOutcomeCallable DescribeDBInstanceGTIDCallable(const Model::DescribeDBInstanceGTIDRequest& request);

                /**
                 *This API is used to query the basic information of an instance (instance ID, instance name, and whether encryption is enabled).
                 * @param req DescribeDBInstanceInfoRequest
                 * @return DescribeDBInstanceInfoOutcome
                 */
                DescribeDBInstanceInfoOutcome DescribeDBInstanceInfo(const Model::DescribeDBInstanceInfoRequest &request);
                void DescribeDBInstanceInfoAsync(const Model::DescribeDBInstanceInfoRequest& request, const DescribeDBInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceInfoOutcomeCallable DescribeDBInstanceInfoCallable(const Model::DescribeDBInstanceInfoRequest& request);

                /**
                 *This API (DescribeDBInstanceRebootTime) is used to query the estimated time needed for a TencentDB instance to restart.
                 * @param req DescribeDBInstanceRebootTimeRequest
                 * @return DescribeDBInstanceRebootTimeOutcome
                 */
                DescribeDBInstanceRebootTimeOutcome DescribeDBInstanceRebootTime(const Model::DescribeDBInstanceRebootTimeRequest &request);
                void DescribeDBInstanceRebootTimeAsync(const Model::DescribeDBInstanceRebootTimeRequest& request, const DescribeDBInstanceRebootTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceRebootTimeOutcomeCallable DescribeDBInstanceRebootTimeCallable(const Model::DescribeDBInstanceRebootTimeRequest& request);

                /**
                 *This API (DescribeDBInstances) is used to query the list of TencentDB instances (which can be master, disaster recovery, or read-only instances). It supports filtering instances by project ID, instance ID, access address, and instance status.
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *This API (DescribeDBSecurityGroups) is used to query the security group details of an instance.
                 * @param req DescribeDBSecurityGroupsRequest
                 * @return DescribeDBSecurityGroupsOutcome
                 */
                DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest &request);
                void DescribeDBSecurityGroupsAsync(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request);

                /**
                 *This API (DescribeDBSwitchRecords) is used to query the instance switch records.
                 * @param req DescribeDBSwitchRecordsRequest
                 * @return DescribeDBSwitchRecordsOutcome
                 */
                DescribeDBSwitchRecordsOutcome DescribeDBSwitchRecords(const Model::DescribeDBSwitchRecordsRequest &request);
                void DescribeDBSwitchRecordsAsync(const Model::DescribeDBSwitchRecordsRequest& request, const DescribeDBSwitchRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSwitchRecordsOutcomeCallable DescribeDBSwitchRecordsCallable(const Model::DescribeDBSwitchRecordsRequest& request);

                /**
                 *This API (DescribeDBZoneConfig) is used to query the specifications of TencentDB instances purchasable in a region.
                 * @param req DescribeDBZoneConfigRequest
                 * @return DescribeDBZoneConfigOutcome
                 */
                DescribeDBZoneConfigOutcome DescribeDBZoneConfig(const Model::DescribeDBZoneConfigRequest &request);
                void DescribeDBZoneConfigAsync(const Model::DescribeDBZoneConfigRequest& request, const DescribeDBZoneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBZoneConfigOutcomeCallable DescribeDBZoneConfigCallable(const Model::DescribeDBZoneConfigRequest& request);

                /**
                 *This API is used to query the data backup overview of a user in the current region.
                 * @param req DescribeDataBackupOverviewRequest
                 * @return DescribeDataBackupOverviewOutcome
                 */
                DescribeDataBackupOverviewOutcome DescribeDataBackupOverview(const Model::DescribeDataBackupOverviewRequest &request);
                void DescribeDataBackupOverviewAsync(const Model::DescribeDataBackupOverviewRequest& request, const DescribeDataBackupOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataBackupOverviewOutcomeCallable DescribeDataBackupOverviewCallable(const Model::DescribeDataBackupOverviewRequest& request);

                /**
                 *This API (DescribeDatabases) is used to query the information of databases of a TencentDB instance.
                 * @param req DescribeDatabasesRequest
                 * @return DescribeDatabasesOutcome
                 */
                DescribeDatabasesOutcome DescribeDatabases(const Model::DescribeDatabasesRequest &request);
                void DescribeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabasesOutcomeCallable DescribeDatabasesCallable(const Model::DescribeDatabasesRequest& request);

                /**
                 *This API (DescribeDefaultParams) is used to query the list of default configurable parameters.
                 * @param req DescribeDefaultParamsRequest
                 * @return DescribeDefaultParamsOutcome
                 */
                DescribeDefaultParamsOutcome DescribeDefaultParams(const Model::DescribeDefaultParamsRequest &request);
                void DescribeDefaultParamsAsync(const Model::DescribeDefaultParamsRequest& request, const DescribeDefaultParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefaultParamsOutcomeCallable DescribeDefaultParamsCallable(const Model::DescribeDefaultParamsRequest& request);

                /**
                 *This API is used to query the list of placement groups of a user. You can specify the placement group ID or name.
                 * @param req DescribeDeployGroupListRequest
                 * @return DescribeDeployGroupListOutcome
                 */
                DescribeDeployGroupListOutcome DescribeDeployGroupList(const Model::DescribeDeployGroupListRequest &request);
                void DescribeDeployGroupListAsync(const Model::DescribeDeployGroupListRequest& request, const DescribeDeployGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeployGroupListOutcomeCallable DescribeDeployGroupListCallable(const Model::DescribeDeployGroupListRequest& request);

                /**
                 *This API (DescribeDeviceMonitorInfo) is used to query the monitoring information of a TencentDB physical machine on the day. Currently, it only supports instances with 488 GB memory and 6 TB disk.
                 * @param req DescribeDeviceMonitorInfoRequest
                 * @return DescribeDeviceMonitorInfoOutcome
                 */
                DescribeDeviceMonitorInfoOutcome DescribeDeviceMonitorInfo(const Model::DescribeDeviceMonitorInfoRequest &request);
                void DescribeDeviceMonitorInfoAsync(const Model::DescribeDeviceMonitorInfoRequest& request, const DescribeDeviceMonitorInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceMonitorInfoOutcomeCallable DescribeDeviceMonitorInfoCallable(const Model::DescribeDeviceMonitorInfoRequest& request);

                /**
                 *This API is used to query the details of instance error logs by search criteria. You can only query error logs within a month.
                 * @param req DescribeErrorLogDataRequest
                 * @return DescribeErrorLogDataOutcome
                 */
                DescribeErrorLogDataOutcome DescribeErrorLogData(const Model::DescribeErrorLogDataRequest &request);
                void DescribeErrorLogDataAsync(const Model::DescribeErrorLogDataRequest& request, const DescribeErrorLogDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeErrorLogDataOutcomeCallable DescribeErrorLogDataCallable(const Model::DescribeErrorLogDataRequest& request);

                /**
                 *This API (DescribeInstanceParamRecords) is used to query the parameter modification records of an instance.
                 * @param req DescribeInstanceParamRecordsRequest
                 * @return DescribeInstanceParamRecordsOutcome
                 */
                DescribeInstanceParamRecordsOutcome DescribeInstanceParamRecords(const Model::DescribeInstanceParamRecordsRequest &request);
                void DescribeInstanceParamRecordsAsync(const Model::DescribeInstanceParamRecordsRequest& request, const DescribeInstanceParamRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceParamRecordsOutcomeCallable DescribeInstanceParamRecordsCallable(const Model::DescribeInstanceParamRecordsRequest& request);

                /**
                 *This API (DescribeInstanceParams) is used to query the list of parameters for an instance.
                 * @param req DescribeInstanceParamsRequest
                 * @return DescribeInstanceParamsOutcome
                 */
                DescribeInstanceParamsOutcome DescribeInstanceParams(const Model::DescribeInstanceParamsRequest &request);
                void DescribeInstanceParamsAsync(const Model::DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceParamsOutcomeCallable DescribeInstanceParamsCallable(const Model::DescribeInstanceParamsRequest& request);

                /**
                 *This API (DescribeParamTemplateInfo) is used to query parameter template details.
                 * @param req DescribeParamTemplateInfoRequest
                 * @return DescribeParamTemplateInfoOutcome
                 */
                DescribeParamTemplateInfoOutcome DescribeParamTemplateInfo(const Model::DescribeParamTemplateInfoRequest &request);
                void DescribeParamTemplateInfoAsync(const Model::DescribeParamTemplateInfoRequest& request, const DescribeParamTemplateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeParamTemplateInfoOutcomeCallable DescribeParamTemplateInfoCallable(const Model::DescribeParamTemplateInfoRequest& request);

                /**
                 *This API (DescribeParamTemplates) is used to query the list of parameter templates
                 * @param req DescribeParamTemplatesRequest
                 * @return DescribeParamTemplatesOutcome
                 */
                DescribeParamTemplatesOutcome DescribeParamTemplates(const Model::DescribeParamTemplatesRequest &request);
                void DescribeParamTemplatesAsync(const Model::DescribeParamTemplatesRequest& request, const DescribeParamTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeParamTemplatesOutcomeCallable DescribeParamTemplatesCallable(const Model::DescribeParamTemplatesRequest& request);

                /**
                 *This API (DescribeProjectSecurityGroups) is used to query the security group details of a project.
                 * @param req DescribeProjectSecurityGroupsRequest
                 * @return DescribeProjectSecurityGroupsOutcome
                 */
                DescribeProjectSecurityGroupsOutcome DescribeProjectSecurityGroups(const Model::DescribeProjectSecurityGroupsRequest &request);
                void DescribeProjectSecurityGroupsAsync(const Model::DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectSecurityGroupsOutcomeCallable DescribeProjectSecurityGroupsCallable(const Model::DescribeProjectSecurityGroupsRequest& request);

                /**
                 *This API is used to query the information of all RO groups of a TencentDB instance.
                 * @param req DescribeRoGroupsRequest
                 * @return DescribeRoGroupsOutcome
                 */
                DescribeRoGroupsOutcome DescribeRoGroups(const Model::DescribeRoGroupsRequest &request);
                void DescribeRoGroupsAsync(const Model::DescribeRoGroupsRequest& request, const DescribeRoGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoGroupsOutcomeCallable DescribeRoGroupsCallable(const Model::DescribeRoGroupsRequest& request);

                /**
                 *This API (DescribeRollbackRangeTime) is used to query the time range available for instance rollback.
                 * @param req DescribeRollbackRangeTimeRequest
                 * @return DescribeRollbackRangeTimeOutcome
                 */
                DescribeRollbackRangeTimeOutcome DescribeRollbackRangeTime(const Model::DescribeRollbackRangeTimeRequest &request);
                void DescribeRollbackRangeTimeAsync(const Model::DescribeRollbackRangeTimeRequest& request, const DescribeRollbackRangeTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRollbackRangeTimeOutcomeCallable DescribeRollbackRangeTimeCallable(const Model::DescribeRollbackRangeTimeRequest& request);

                /**
                 *This API is used to query the details of a TencentDB instance rollback task.
                 * @param req DescribeRollbackTaskDetailRequest
                 * @return DescribeRollbackTaskDetailOutcome
                 */
                DescribeRollbackTaskDetailOutcome DescribeRollbackTaskDetail(const Model::DescribeRollbackTaskDetailRequest &request);
                void DescribeRollbackTaskDetailAsync(const Model::DescribeRollbackTaskDetailRequest& request, const DescribeRollbackTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRollbackTaskDetailOutcomeCallable DescribeRollbackTaskDetailCallable(const Model::DescribeRollbackTaskDetailRequest& request);

                /**
                 *This API is used to search for slow logs of an instance by criteria. You can only view slow logs within a month.
                 * @param req DescribeSlowLogDataRequest
                 * @return DescribeSlowLogDataOutcome
                 */
                DescribeSlowLogDataOutcome DescribeSlowLogData(const Model::DescribeSlowLogDataRequest &request);
                void DescribeSlowLogDataAsync(const Model::DescribeSlowLogDataRequest& request, const DescribeSlowLogDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogDataOutcomeCallable DescribeSlowLogDataCallable(const Model::DescribeSlowLogDataRequest& request);

                /**
                 *This API (DescribeSlowLogs) is used to query the slow logs of a TencentDB instance.
                 * @param req DescribeSlowLogsRequest
                 * @return DescribeSlowLogsOutcome
                 */
                DescribeSlowLogsOutcome DescribeSlowLogs(const Model::DescribeSlowLogsRequest &request);
                void DescribeSlowLogsAsync(const Model::DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogsOutcomeCallable DescribeSlowLogsCallable(const Model::DescribeSlowLogsRequest& request);

                /**
                 *This API (DescribeSupportedPrivileges) is used to query the information of TencentDB account permissions, including global permissions, database permissions, table permissions, and column permissions.
                 * @param req DescribeSupportedPrivilegesRequest
                 * @return DescribeSupportedPrivilegesOutcome
                 */
                DescribeSupportedPrivilegesOutcome DescribeSupportedPrivileges(const Model::DescribeSupportedPrivilegesRequest &request);
                void DescribeSupportedPrivilegesAsync(const Model::DescribeSupportedPrivilegesRequest& request, const DescribeSupportedPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSupportedPrivilegesOutcomeCallable DescribeSupportedPrivilegesCallable(const Model::DescribeSupportedPrivilegesRequest& request);

                /**
                 *This API (DescribeTables) is used to query the database tables of a TencentDB instance.
                 * @param req DescribeTablesRequest
                 * @return DescribeTablesOutcome
                 */
                DescribeTablesOutcome DescribeTables(const Model::DescribeTablesRequest &request);
                void DescribeTablesAsync(const Model::DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTablesOutcomeCallable DescribeTablesCallable(const Model::DescribeTablesRequest& request);

                /**
                 *This API (DescribeTagsOfInstanceIds) is used to query the tag information of a TencentDB instance.
                 * @param req DescribeTagsOfInstanceIdsRequest
                 * @return DescribeTagsOfInstanceIdsOutcome
                 */
                DescribeTagsOfInstanceIdsOutcome DescribeTagsOfInstanceIds(const Model::DescribeTagsOfInstanceIdsRequest &request);
                void DescribeTagsOfInstanceIdsAsync(const Model::DescribeTagsOfInstanceIdsRequest& request, const DescribeTagsOfInstanceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagsOfInstanceIdsOutcomeCallable DescribeTagsOfInstanceIdsCallable(const Model::DescribeTagsOfInstanceIdsRequest& request);

                /**
                 *This API (DescribeTasks) is used to query the list of tasks for a TencentDB instance.
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *This API (DescribeTimeWindow) is used to query the maintenance time window of a TencentDB instance.
                 * @param req DescribeTimeWindowRequest
                 * @return DescribeTimeWindowOutcome
                 */
                DescribeTimeWindowOutcome DescribeTimeWindow(const Model::DescribeTimeWindowRequest &request);
                void DescribeTimeWindowAsync(const Model::DescribeTimeWindowRequest& request, const DescribeTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimeWindowOutcomeCallable DescribeTimeWindowCallable(const Model::DescribeTimeWindowRequest& request);

                /**
                 *This API is used to query the list of user-imported SQL files.
                 * @param req DescribeUploadedFilesRequest
                 * @return DescribeUploadedFilesOutcome
                 */
                DescribeUploadedFilesOutcome DescribeUploadedFiles(const Model::DescribeUploadedFilesRequest &request);
                void DescribeUploadedFilesAsync(const Model::DescribeUploadedFilesRequest& request, const DescribeUploadedFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUploadedFilesOutcomeCallable DescribeUploadedFilesCallable(const Model::DescribeUploadedFilesRequest& request);

                /**
                 *This API (DisassociateSecurityGroups) is used to unbind security groups from instances in batches.
                 * @param req DisassociateSecurityGroupsRequest
                 * @return DisassociateSecurityGroupsOutcome
                 */
                DisassociateSecurityGroupsOutcome DisassociateSecurityGroups(const Model::DisassociateSecurityGroupsRequest &request);
                void DisassociateSecurityGroupsAsync(const Model::DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateSecurityGroupsOutcomeCallable DisassociateSecurityGroupsCallable(const Model::DisassociateSecurityGroupsRequest& request);

                /**
                 *This API (InitDBInstances) is used to initialize instances, including their password, default character set, and instance port number.
                 * @param req InitDBInstancesRequest
                 * @return InitDBInstancesOutcome
                 */
                InitDBInstancesOutcome InitDBInstances(const Model::InitDBInstancesRequest &request);
                void InitDBInstancesAsync(const Model::InitDBInstancesRequest& request, const InitDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InitDBInstancesOutcomeCallable InitDBInstancesCallable(const Model::InitDBInstancesRequest& request);

                /**
                 *This API is used to isolate a TencentDB instance, which will no longer be accessible via IP and port. The isolated instance can be started up in the recycle bin. If it is isolated due to arrears, please top up your account as soon as possible.
                 * @param req IsolateDBInstanceRequest
                 * @return IsolateDBInstanceOutcome
                 */
                IsolateDBInstanceOutcome IsolateDBInstance(const Model::IsolateDBInstanceRequest &request);
                void IsolateDBInstanceAsync(const Model::IsolateDBInstanceRequest& request, const IsolateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDBInstanceOutcomeCallable IsolateDBInstanceCallable(const Model::IsolateDBInstanceRequest& request);

                /**
                 *This API (ModifyAccountDescription) is used to modify the remarks of a TencentDB instance account.
                 * @param req ModifyAccountDescriptionRequest
                 * @return ModifyAccountDescriptionOutcome
                 */
                ModifyAccountDescriptionOutcome ModifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request);
                void ModifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountDescriptionOutcomeCallable ModifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request);

                /**
                 *This API (ModifyAccountPassword) is used to modify the password of a TencentDB instance account.
                 * @param req ModifyAccountPasswordRequest
                 * @return ModifyAccountPasswordOutcome
                 */
                ModifyAccountPasswordOutcome ModifyAccountPassword(const Model::ModifyAccountPasswordRequest &request);
                void ModifyAccountPasswordAsync(const Model::ModifyAccountPasswordRequest& request, const ModifyAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountPasswordOutcomeCallable ModifyAccountPasswordCallable(const Model::ModifyAccountPasswordRequest& request);

                /**
                 *This API is used to modify the permissions of a TencentDB instance account.

Note that when modifying account permissions, you need to pass in the full permission information of the account. You can [query the account permission information
](https://cloud.tencent.com/document/api/236/17500) first before modifying permissions.
                 * @param req ModifyAccountPrivilegesRequest
                 * @return ModifyAccountPrivilegesOutcome
                 */
                ModifyAccountPrivilegesOutcome ModifyAccountPrivileges(const Model::ModifyAccountPrivilegesRequest &request);
                void ModifyAccountPrivilegesAsync(const Model::ModifyAccountPrivilegesRequest& request, const ModifyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountPrivilegesOutcomeCallable ModifyAccountPrivilegesCallable(const Model::ModifyAccountPrivilegesRequest& request);

                /**
                 *This API is used to modify the auto-renewal flag of a TencentDB instance.
                 * @param req ModifyAutoRenewFlagRequest
                 * @return ModifyAutoRenewFlagOutcome
                 */
                ModifyAutoRenewFlagOutcome ModifyAutoRenewFlag(const Model::ModifyAutoRenewFlagRequest &request);
                void ModifyAutoRenewFlagAsync(const Model::ModifyAutoRenewFlagRequest& request, const ModifyAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoRenewFlagOutcomeCallable ModifyAutoRenewFlagCallable(const Model::ModifyAutoRenewFlagRequest& request);

                /**
                 *This API (ModifyBackupConfig) is used to modify the database backup configuration.
                 * @param req ModifyBackupConfigRequest
                 * @return ModifyBackupConfigOutcome
                 */
                ModifyBackupConfigOutcome ModifyBackupConfig(const Model::ModifyBackupConfigRequest &request);
                void ModifyBackupConfigAsync(const Model::ModifyBackupConfigRequest& request, const ModifyBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupConfigOutcomeCallable ModifyBackupConfigCallable(const Model::ModifyBackupConfigRequest& request);

                /**
                 *This API (ModifyDBInstanceName) is used to rename a TencentDB instance.
                 * @param req ModifyDBInstanceNameRequest
                 * @return ModifyDBInstanceNameOutcome
                 */
                ModifyDBInstanceNameOutcome ModifyDBInstanceName(const Model::ModifyDBInstanceNameRequest &request);
                void ModifyDBInstanceNameAsync(const Model::ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceNameOutcomeCallable ModifyDBInstanceNameCallable(const Model::ModifyDBInstanceNameRequest& request);

                /**
                 *This API (ModifyDBInstanceProject) is used to modify the project to which a TencentDB instance belongs.
                 * @param req ModifyDBInstanceProjectRequest
                 * @return ModifyDBInstanceProjectOutcome
                 */
                ModifyDBInstanceProjectOutcome ModifyDBInstanceProject(const Model::ModifyDBInstanceProjectRequest &request);
                void ModifyDBInstanceProjectAsync(const Model::ModifyDBInstanceProjectRequest& request, const ModifyDBInstanceProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceProjectOutcomeCallable ModifyDBInstanceProjectCallable(const Model::ModifyDBInstanceProjectRequest& request);

                /**
                 *This API (ModifyDBInstanceSecurityGroups) is used to modify the security groups bound to a TencentDB instance.
                 * @param req ModifyDBInstanceSecurityGroupsRequest
                 * @return ModifyDBInstanceSecurityGroupsOutcome
                 */
                ModifyDBInstanceSecurityGroupsOutcome ModifyDBInstanceSecurityGroups(const Model::ModifyDBInstanceSecurityGroupsRequest &request);
                void ModifyDBInstanceSecurityGroupsAsync(const Model::ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSecurityGroupsOutcomeCallable ModifyDBInstanceSecurityGroupsCallable(const Model::ModifyDBInstanceSecurityGroupsRequest& request);

                /**
                 *This API (ModifyDBInstanceVipVport) is used to modify the IP and port number of a TencentDB instance, switch from the basic network to VPC, or change VPC subnets.
                 * @param req ModifyDBInstanceVipVportRequest
                 * @return ModifyDBInstanceVipVportOutcome
                 */
                ModifyDBInstanceVipVportOutcome ModifyDBInstanceVipVport(const Model::ModifyDBInstanceVipVportRequest &request);
                void ModifyDBInstanceVipVportAsync(const Model::ModifyDBInstanceVipVportRequest& request, const ModifyDBInstanceVipVportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceVipVportOutcomeCallable ModifyDBInstanceVipVportCallable(const Model::ModifyDBInstanceVipVportRequest& request);

                /**
                 *This API (ModifyInstanceParam) is used to modify instance parameters.
                 * @param req ModifyInstanceParamRequest
                 * @return ModifyInstanceParamOutcome
                 */
                ModifyInstanceParamOutcome ModifyInstanceParam(const Model::ModifyInstanceParamRequest &request);
                void ModifyInstanceParamAsync(const Model::ModifyInstanceParamRequest& request, const ModifyInstanceParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceParamOutcomeCallable ModifyInstanceParamCallable(const Model::ModifyInstanceParamRequest& request);

                /**
                 *This API (ModifyInstanceTag) is used to add, modify, or delete an instance tag.
                 * @param req ModifyInstanceTagRequest
                 * @return ModifyInstanceTagOutcome
                 */
                ModifyInstanceTagOutcome ModifyInstanceTag(const Model::ModifyInstanceTagRequest &request);
                void ModifyInstanceTagAsync(const Model::ModifyInstanceTagRequest& request, const ModifyInstanceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceTagOutcomeCallable ModifyInstanceTagCallable(const Model::ModifyInstanceTagRequest& request);

                /**
                 *This API is used to modify the name or description of a placement group.
                 * @param req ModifyNameOrDescByDpIdRequest
                 * @return ModifyNameOrDescByDpIdOutcome
                 */
                ModifyNameOrDescByDpIdOutcome ModifyNameOrDescByDpId(const Model::ModifyNameOrDescByDpIdRequest &request);
                void ModifyNameOrDescByDpIdAsync(const Model::ModifyNameOrDescByDpIdRequest& request, const ModifyNameOrDescByDpIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNameOrDescByDpIdOutcomeCallable ModifyNameOrDescByDpIdCallable(const Model::ModifyNameOrDescByDpIdRequest& request);

                /**
                 *This API (ModifyParamTemplate) is used to modify a parameter template.
                 * @param req ModifyParamTemplateRequest
                 * @return ModifyParamTemplateOutcome
                 */
                ModifyParamTemplateOutcome ModifyParamTemplate(const Model::ModifyParamTemplateRequest &request);
                void ModifyParamTemplateAsync(const Model::ModifyParamTemplateRequest& request, const ModifyParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyParamTemplateOutcomeCallable ModifyParamTemplateCallable(const Model::ModifyParamTemplateRequest& request);

                /**
                 *This API is used to update the information of a TencentDB RO group, such as configuring an instance removal policy in case of excessive delay and setting read weights of RO instances.
                 * @param req ModifyRoGroupInfoRequest
                 * @return ModifyRoGroupInfoOutcome
                 */
                ModifyRoGroupInfoOutcome ModifyRoGroupInfo(const Model::ModifyRoGroupInfoRequest &request);
                void ModifyRoGroupInfoAsync(const Model::ModifyRoGroupInfoRequest& request, const ModifyRoGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRoGroupInfoOutcomeCallable ModifyRoGroupInfoCallable(const Model::ModifyRoGroupInfoRequest& request);

                /**
                 *This API (ModifyTimeWindow) is used to update the maintenance time window of a TencentDB instance.
                 * @param req ModifyTimeWindowRequest
                 * @return ModifyTimeWindowOutcome
                 */
                ModifyTimeWindowOutcome ModifyTimeWindow(const Model::ModifyTimeWindowRequest &request);
                void ModifyTimeWindowAsync(const Model::ModifyTimeWindowRequest& request, const ModifyTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTimeWindowOutcomeCallable ModifyTimeWindowCallable(const Model::ModifyTimeWindowRequest& request);

                /**
                 *This API (OfflineIsolatedInstances) is used to deactivate isolated TencentDB instances immediately. The instances must be in isolated status, i.e., their `Status` value is 5 in the return of the [instance list querying API](https://cloud.tencent.com/document/api/236/15872).

This is an asynchronous API. There may be a delay in repossessing some resources. You can query the details by using the [instance list querying API](https://cloud.tencent.com/document/api/236/15872) and specifying the InstanceId and the `Status` value as [5, 6, 7]. If the returned instance is empty, then all its resources have been released.

Note that once an instance is deactivated, its resources and data will not be recoverable. Please do so with caution.
                 * @param req OfflineIsolatedInstancesRequest
                 * @return OfflineIsolatedInstancesOutcome
                 */
                OfflineIsolatedInstancesOutcome OfflineIsolatedInstances(const Model::OfflineIsolatedInstancesRequest &request);
                void OfflineIsolatedInstancesAsync(const Model::OfflineIsolatedInstancesRequest& request, const OfflineIsolatedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OfflineIsolatedInstancesOutcomeCallable OfflineIsolatedInstancesCallable(const Model::OfflineIsolatedInstancesRequest& request);

                /**
                 *This API (OpenDBInstanceGTID) is used to enable GTID for a TencentDB instance. Only instances on or above version 5.6 are supported.
                 * @param req OpenDBInstanceGTIDRequest
                 * @return OpenDBInstanceGTIDOutcome
                 */
                OpenDBInstanceGTIDOutcome OpenDBInstanceGTID(const Model::OpenDBInstanceGTIDRequest &request);
                void OpenDBInstanceGTIDAsync(const Model::OpenDBInstanceGTIDRequest& request, const OpenDBInstanceGTIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenDBInstanceGTIDOutcomeCallable OpenDBInstanceGTIDCallable(const Model::OpenDBInstanceGTIDRequest& request);

                /**
                 *This API (OpenWanService) is used to enable public network access for an instance.

Note that before enabling public network access, you need to first [initialize the instance](https://cloud.tencent.com/document/api/236/15873).
                 * @param req OpenWanServiceRequest
                 * @return OpenWanServiceOutcome
                 */
                OpenWanServiceOutcome OpenWanService(const Model::OpenWanServiceRequest &request);
                void OpenWanServiceAsync(const Model::OpenWanServiceRequest& request, const OpenWanServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenWanServiceOutcomeCallable OpenWanServiceCallable(const Model::OpenWanServiceRequest& request);

                /**
                 *This API is used to deisolate an isolated TencentDB instance.
                 * @param req ReleaseIsolatedDBInstancesRequest
                 * @return ReleaseIsolatedDBInstancesOutcome
                 */
                ReleaseIsolatedDBInstancesOutcome ReleaseIsolatedDBInstances(const Model::ReleaseIsolatedDBInstancesRequest &request);
                void ReleaseIsolatedDBInstancesAsync(const Model::ReleaseIsolatedDBInstancesRequest& request, const ReleaseIsolatedDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseIsolatedDBInstancesOutcomeCallable ReleaseIsolatedDBInstancesCallable(const Model::ReleaseIsolatedDBInstancesRequest& request);

                /**
                 *This API (RestartDBInstances) is used to restart TencentDB instances.

Note:
1. This API only supports restarting master instances.
2. The instance status must be normal, and no other async tasks are in progress.
                 * @param req RestartDBInstancesRequest
                 * @return RestartDBInstancesOutcome
                 */
                RestartDBInstancesOutcome RestartDBInstances(const Model::RestartDBInstancesRequest &request);
                void RestartDBInstancesAsync(const Model::RestartDBInstancesRequest& request, const RestartDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartDBInstancesOutcomeCallable RestartDBInstancesCallable(const Model::RestartDBInstancesRequest& request);

                /**
                 *This API (StartBatchRollback) is used to roll back the tables of a TencentDB instance in batches.
                 * @param req StartBatchRollbackRequest
                 * @return StartBatchRollbackOutcome
                 */
                StartBatchRollbackOutcome StartBatchRollback(const Model::StartBatchRollbackRequest &request);
                void StartBatchRollbackAsync(const Model::StartBatchRollbackRequest& request, const StartBatchRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartBatchRollbackOutcomeCallable StartBatchRollbackCallable(const Model::StartBatchRollbackRequest& request);

                /**
                 *This API (StopDBImportJob) is used to stop a data import task.
                 * @param req StopDBImportJobRequest
                 * @return StopDBImportJobOutcome
                 */
                StopDBImportJobOutcome StopDBImportJob(const Model::StopDBImportJobRequest &request);
                void StopDBImportJobAsync(const Model::StopDBImportJobRequest& request, const StopDBImportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopDBImportJobOutcomeCallable StopDBImportJobCallable(const Model::StopDBImportJobRequest& request);

                /**
                 *This API (SwitchForUpgrade) is used to switch to a new instance. You can initiate this process when the master instance being upgraded is pending switch.
                 * @param req SwitchForUpgradeRequest
                 * @return SwitchForUpgradeOutcome
                 */
                SwitchForUpgradeOutcome SwitchForUpgrade(const Model::SwitchForUpgradeRequest &request);
                void SwitchForUpgradeAsync(const Model::SwitchForUpgradeRequest& request, const SwitchForUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchForUpgradeOutcomeCallable SwitchForUpgradeCallable(const Model::SwitchForUpgradeRequest& request);

                /**
                 *This API is used to upgrade or downgrade a TencentDB instance, which can be a master instance, disaster recovery instance, or read-only instance.
                 * @param req UpgradeDBInstanceRequest
                 * @return UpgradeDBInstanceOutcome
                 */
                UpgradeDBInstanceOutcome UpgradeDBInstance(const Model::UpgradeDBInstanceRequest &request);
                void UpgradeDBInstanceAsync(const Model::UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceOutcomeCallable UpgradeDBInstanceCallable(const Model::UpgradeDBInstanceRequest& request);

                /**
                 *This API (UpgradeDBInstanceEngineVersion) is used to upgrade the version of a TencentDB instance, which can be a master instance, disaster recovery instance, or read-only instance.
                 * @param req UpgradeDBInstanceEngineVersionRequest
                 * @return UpgradeDBInstanceEngineVersionOutcome
                 */
                UpgradeDBInstanceEngineVersionOutcome UpgradeDBInstanceEngineVersion(const Model::UpgradeDBInstanceEngineVersionRequest &request);
                void UpgradeDBInstanceEngineVersionAsync(const Model::UpgradeDBInstanceEngineVersionRequest& request, const UpgradeDBInstanceEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceEngineVersionOutcomeCallable UpgradeDBInstanceEngineVersionCallable(const Model::UpgradeDBInstanceEngineVersionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_CDBCLIENT_H_
