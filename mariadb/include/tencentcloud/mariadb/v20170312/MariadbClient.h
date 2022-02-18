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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MARIADBCLIENT_H_
#define TENCENTCLOUD_MARIADB_V20170312_MARIADBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mariadb/v20170312/model/AssociateSecurityGroupsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/AssociateSecurityGroupsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CancelDcnJobRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CancelDcnJobResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CloneAccountRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CloneAccountResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CloseDBExtranetAccessRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CloseDBExtranetAccessResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CopyAccountPrivilegesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CopyAccountPrivilegesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CreateAccountRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CreateAccountResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CreateHourDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CreateHourDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DeleteAccountRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DeleteAccountResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeAccountPrivilegesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeAccountPrivilegesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeAccountsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeAccountsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeBackupTimeRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeBackupTimeResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBLogFilesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBLogFilesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBParametersRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBParametersResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBPerformanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBPerformanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBPerformanceDetailsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBPerformanceDetailsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBResourceUsageRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBResourceUsageResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBResourceUsageDetailsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBResourceUsageDetailsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBSecurityGroupsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBSecurityGroupsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBSlowLogsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBSlowLogsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDatabaseTableRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDatabaseTableResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDatabasesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDatabasesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDcnDetailRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDcnDetailResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeFileDownloadUrlRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeFileDownloadUrlResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeFlowRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeFlowResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeInstanceNodeInfoRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeInstanceNodeInfoResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeLogFileRetentionPeriodRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeLogFileRetentionPeriodResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeProjectSecurityGroupsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeProjectSecurityGroupsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DestroyHourDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DestroyHourDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DisassociateSecurityGroupsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DisassociateSecurityGroupsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/GrantAccountPrivilegesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/GrantAccountPrivilegesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/InitDBInstancesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/InitDBInstancesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyAccountDescriptionRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyAccountDescriptionResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyAccountPrivilegesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyAccountPrivilegesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyBackupTimeRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyBackupTimeResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBInstanceNameRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBInstanceNameResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBInstancesProjectRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBInstancesProjectResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBParametersRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBParametersResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBSyncModeRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBSyncModeResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyLogFileRetentionPeriodRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyLogFileRetentionPeriodResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifySyncTaskAttributeRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifySyncTaskAttributeResponse.h>
#include <tencentcloud/mariadb/v20170312/model/OpenDBExtranetAccessRequest.h>
#include <tencentcloud/mariadb/v20170312/model/OpenDBExtranetAccessResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ResetAccountPasswordResponse.h>
#include <tencentcloud/mariadb/v20170312/model/SwitchDBInstanceHARequest.h>
#include <tencentcloud/mariadb/v20170312/model/SwitchDBInstanceHAResponse.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            class MariadbClient : public AbstractClient
            {
            public:
                MariadbClient(const Credential &credential, const std::string &region);
                MariadbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssociateSecurityGroupsResponse> AssociateSecurityGroupsOutcome;
                typedef std::future<AssociateSecurityGroupsOutcome> AssociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::AssociateSecurityGroupsRequest&, AssociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelDcnJobResponse> CancelDcnJobOutcome;
                typedef std::future<CancelDcnJobOutcome> CancelDcnJobOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CancelDcnJobRequest&, CancelDcnJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelDcnJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CloneAccountResponse> CloneAccountOutcome;
                typedef std::future<CloneAccountOutcome> CloneAccountOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CloneAccountRequest&, CloneAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseDBExtranetAccessResponse> CloseDBExtranetAccessOutcome;
                typedef std::future<CloseDBExtranetAccessOutcome> CloseDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CloseDBExtranetAccessRequest&, CloseDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseDBExtranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyAccountPrivilegesResponse> CopyAccountPrivilegesOutcome;
                typedef std::future<CopyAccountPrivilegesOutcome> CopyAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CopyAccountPrivilegesRequest&, CopyAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccountResponse> CreateAccountOutcome;
                typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CreateAccountRequest&, CreateAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHourDBInstanceResponse> CreateHourDBInstanceOutcome;
                typedef std::future<CreateHourDBInstanceOutcome> CreateHourDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CreateHourDBInstanceRequest&, CreateHourDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHourDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccountResponse> DeleteAccountOutcome;
                typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DeleteAccountRequest&, DeleteAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountPrivilegesResponse> DescribeAccountPrivilegesOutcome;
                typedef std::future<DescribeAccountPrivilegesOutcome> DescribeAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeAccountPrivilegesRequest&, DescribeAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupTimeResponse> DescribeBackupTimeOutcome;
                typedef std::future<DescribeBackupTimeOutcome> DescribeBackupTimeOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeBackupTimeRequest&, DescribeBackupTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBLogFilesResponse> DescribeDBLogFilesOutcome;
                typedef std::future<DescribeDBLogFilesOutcome> DescribeDBLogFilesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBLogFilesRequest&, DescribeDBLogFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBLogFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBParametersResponse> DescribeDBParametersOutcome;
                typedef std::future<DescribeDBParametersOutcome> DescribeDBParametersOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBParametersRequest&, DescribeDBParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBPerformanceResponse> DescribeDBPerformanceOutcome;
                typedef std::future<DescribeDBPerformanceOutcome> DescribeDBPerformanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBPerformanceRequest&, DescribeDBPerformanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBPerformanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBPerformanceDetailsResponse> DescribeDBPerformanceDetailsOutcome;
                typedef std::future<DescribeDBPerformanceDetailsOutcome> DescribeDBPerformanceDetailsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBPerformanceDetailsRequest&, DescribeDBPerformanceDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBPerformanceDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBResourceUsageResponse> DescribeDBResourceUsageOutcome;
                typedef std::future<DescribeDBResourceUsageOutcome> DescribeDBResourceUsageOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBResourceUsageRequest&, DescribeDBResourceUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBResourceUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBResourceUsageDetailsResponse> DescribeDBResourceUsageDetailsOutcome;
                typedef std::future<DescribeDBResourceUsageDetailsOutcome> DescribeDBResourceUsageDetailsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBResourceUsageDetailsRequest&, DescribeDBResourceUsageDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBResourceUsageDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSecurityGroupsResponse> DescribeDBSecurityGroupsOutcome;
                typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBSecurityGroupsRequest&, DescribeDBSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSlowLogsResponse> DescribeDBSlowLogsOutcome;
                typedef std::future<DescribeDBSlowLogsOutcome> DescribeDBSlowLogsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBSlowLogsRequest&, DescribeDBSlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseTableResponse> DescribeDatabaseTableOutcome;
                typedef std::future<DescribeDatabaseTableOutcome> DescribeDatabaseTableOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDatabaseTableRequest&, DescribeDatabaseTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabasesResponse> DescribeDatabasesOutcome;
                typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDatabasesRequest&, DescribeDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDcnDetailResponse> DescribeDcnDetailOutcome;
                typedef std::future<DescribeDcnDetailOutcome> DescribeDcnDetailOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDcnDetailRequest&, DescribeDcnDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcnDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileDownloadUrlResponse> DescribeFileDownloadUrlOutcome;
                typedef std::future<DescribeFileDownloadUrlOutcome> DescribeFileDownloadUrlOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeFileDownloadUrlRequest&, DescribeFileDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileDownloadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowResponse> DescribeFlowOutcome;
                typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeFlowRequest&, DescribeFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceNodeInfoResponse> DescribeInstanceNodeInfoOutcome;
                typedef std::future<DescribeInstanceNodeInfoOutcome> DescribeInstanceNodeInfoOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeInstanceNodeInfoRequest&, DescribeInstanceNodeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNodeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogFileRetentionPeriodResponse> DescribeLogFileRetentionPeriodOutcome;
                typedef std::future<DescribeLogFileRetentionPeriodOutcome> DescribeLogFileRetentionPeriodOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeLogFileRetentionPeriodRequest&, DescribeLogFileRetentionPeriodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogFileRetentionPeriodAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectSecurityGroupsResponse> DescribeProjectSecurityGroupsOutcome;
                typedef std::future<DescribeProjectSecurityGroupsOutcome> DescribeProjectSecurityGroupsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeProjectSecurityGroupsRequest&, DescribeProjectSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyHourDBInstanceResponse> DestroyHourDBInstanceOutcome;
                typedef std::future<DestroyHourDBInstanceOutcome> DestroyHourDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DestroyHourDBInstanceRequest&, DestroyHourDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyHourDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateSecurityGroupsResponse> DisassociateSecurityGroupsOutcome;
                typedef std::future<DisassociateSecurityGroupsOutcome> DisassociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DisassociateSecurityGroupsRequest&, DisassociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::GrantAccountPrivilegesResponse> GrantAccountPrivilegesOutcome;
                typedef std::future<GrantAccountPrivilegesOutcome> GrantAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::GrantAccountPrivilegesRequest&, GrantAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GrantAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::InitDBInstancesResponse> InitDBInstancesOutcome;
                typedef std::future<InitDBInstancesOutcome> InitDBInstancesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::InitDBInstancesRequest&, InitDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InitDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountDescriptionResponse> ModifyAccountDescriptionOutcome;
                typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyAccountDescriptionRequest&, ModifyAccountDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountPrivilegesResponse> ModifyAccountPrivilegesOutcome;
                typedef std::future<ModifyAccountPrivilegesOutcome> ModifyAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyAccountPrivilegesRequest&, ModifyAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupTimeResponse> ModifyBackupTimeOutcome;
                typedef std::future<ModifyBackupTimeOutcome> ModifyBackupTimeOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyBackupTimeRequest&, ModifyBackupTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceNameResponse> ModifyDBInstanceNameOutcome;
                typedef std::future<ModifyDBInstanceNameOutcome> ModifyDBInstanceNameOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyDBInstanceNameRequest&, ModifyDBInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstancesProjectResponse> ModifyDBInstancesProjectOutcome;
                typedef std::future<ModifyDBInstancesProjectOutcome> ModifyDBInstancesProjectOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyDBInstancesProjectRequest&, ModifyDBInstancesProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstancesProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBParametersResponse> ModifyDBParametersOutcome;
                typedef std::future<ModifyDBParametersOutcome> ModifyDBParametersOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyDBParametersRequest&, ModifyDBParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBSyncModeResponse> ModifyDBSyncModeOutcome;
                typedef std::future<ModifyDBSyncModeOutcome> ModifyDBSyncModeOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyDBSyncModeRequest&, ModifyDBSyncModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBSyncModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLogFileRetentionPeriodResponse> ModifyLogFileRetentionPeriodOutcome;
                typedef std::future<ModifyLogFileRetentionPeriodOutcome> ModifyLogFileRetentionPeriodOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyLogFileRetentionPeriodRequest&, ModifyLogFileRetentionPeriodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogFileRetentionPeriodAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySyncTaskAttributeResponse> ModifySyncTaskAttributeOutcome;
                typedef std::future<ModifySyncTaskAttributeOutcome> ModifySyncTaskAttributeOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifySyncTaskAttributeRequest&, ModifySyncTaskAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySyncTaskAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenDBExtranetAccessResponse> OpenDBExtranetAccessOutcome;
                typedef std::future<OpenDBExtranetAccessOutcome> OpenDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::OpenDBExtranetAccessRequest&, OpenDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenDBExtranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAccountPasswordResponse> ResetAccountPasswordOutcome;
                typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ResetAccountPasswordRequest&, ResetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchDBInstanceHAResponse> SwitchDBInstanceHAOutcome;
                typedef std::future<SwitchDBInstanceHAOutcome> SwitchDBInstanceHAOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::SwitchDBInstanceHARequest&, SwitchDBInstanceHAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstanceHAAsyncHandler;



                /**
                 *This API is used to associate security groups with Tencent Cloud resources in batches.
                 * @param req AssociateSecurityGroupsRequest
                 * @return AssociateSecurityGroupsOutcome
                 */
                AssociateSecurityGroupsOutcome AssociateSecurityGroups(const Model::AssociateSecurityGroupsRequest &request);
                void AssociateSecurityGroupsAsync(const Model::AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateSecurityGroupsOutcomeCallable AssociateSecurityGroupsCallable(const Model::AssociateSecurityGroupsRequest& request);

                /**
                 *This API is used to cancel DCN synchronization.
                 * @param req CancelDcnJobRequest
                 * @return CancelDcnJobOutcome
                 */
                CancelDcnJobOutcome CancelDcnJob(const Model::CancelDcnJobRequest &request);
                void CancelDcnJobAsync(const Model::CancelDcnJobRequest& request, const CancelDcnJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelDcnJobOutcomeCallable CancelDcnJobCallable(const Model::CancelDcnJobRequest& request);

                /**
                 *This API is used to clone an instance account.
                 * @param req CloneAccountRequest
                 * @return CloneAccountOutcome
                 */
                CloneAccountOutcome CloneAccount(const Model::CloneAccountRequest &request);
                void CloneAccountAsync(const Model::CloneAccountRequest& request, const CloneAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneAccountOutcomeCallable CloneAccountCallable(const Model::CloneAccountRequest& request);

                /**
                 *This API is used to disable public network access for a TencentDB instance, which will make the public IP address inaccessible. The `DescribeDCDBInstances` API will not return the public domain name and port information of the corresponding instance.
                 * @param req CloseDBExtranetAccessRequest
                 * @return CloseDBExtranetAccessOutcome
                 */
                CloseDBExtranetAccessOutcome CloseDBExtranetAccess(const Model::CloseDBExtranetAccessRequest &request);
                void CloseDBExtranetAccessAsync(const Model::CloseDBExtranetAccessRequest& request, const CloseDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseDBExtranetAccessOutcomeCallable CloseDBExtranetAccessCallable(const Model::CloseDBExtranetAccessRequest& request);

                /**
                 *This API is used to copy the permissions of a TencentDB account.
Note: accounts with the same username but different hosts are different accounts. Permissions can only be copied between accounts with the same `Readonly` attribute.
                 * @param req CopyAccountPrivilegesRequest
                 * @return CopyAccountPrivilegesOutcome
                 */
                CopyAccountPrivilegesOutcome CopyAccountPrivileges(const Model::CopyAccountPrivilegesRequest &request);
                void CopyAccountPrivilegesAsync(const Model::CopyAccountPrivilegesRequest& request, const CopyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyAccountPrivilegesOutcomeCallable CopyAccountPrivilegesCallable(const Model::CopyAccountPrivilegesRequest& request);

                /**
                 *This API is used to create a TencentDB account. Multiple accounts can be created for one instance. Accounts with the same username but different hosts are different accounts.
                 * @param req CreateAccountRequest
                 * @return CreateAccountOutcome
                 */
                CreateAccountOutcome CreateAccount(const Model::CreateAccountRequest &request);
                void CreateAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccountOutcomeCallable CreateAccountCallable(const Model::CreateAccountRequest& request);

                /**
                 *This API is used to create pay-as-you-go instances.
                 * @param req CreateHourDBInstanceRequest
                 * @return CreateHourDBInstanceOutcome
                 */
                CreateHourDBInstanceOutcome CreateHourDBInstance(const Model::CreateHourDBInstanceRequest &request);
                void CreateHourDBInstanceAsync(const Model::CreateHourDBInstanceRequest& request, const CreateHourDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHourDBInstanceOutcomeCallable CreateHourDBInstanceCallable(const Model::CreateHourDBInstanceRequest& request);

                /**
                 *This API is used to delete a TencentDB account, which is uniquely identified by username and host.
                 * @param req DeleteAccountRequest
                 * @return DeleteAccountOutcome
                 */
                DeleteAccountOutcome DeleteAccount(const Model::DeleteAccountRequest &request);
                void DeleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccountOutcomeCallable DeleteAccountCallable(const Model::DeleteAccountRequest& request);

                /**
                 *This API is used to query the permissions of a TencentDB account.
Note: accounts with the same username but different hosts are different accounts.
                 * @param req DescribeAccountPrivilegesRequest
                 * @return DescribeAccountPrivilegesOutcome
                 */
                DescribeAccountPrivilegesOutcome DescribeAccountPrivileges(const Model::DescribeAccountPrivilegesRequest &request);
                void DescribeAccountPrivilegesAsync(const Model::DescribeAccountPrivilegesRequest& request, const DescribeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountPrivilegesOutcomeCallable DescribeAccountPrivilegesCallable(const Model::DescribeAccountPrivilegesRequest& request);

                /**
                 *This API is used to query the list of accounts of a specified TencentDB instance.
                 * @param req DescribeAccountsRequest
                 * @return DescribeAccountsOutcome
                 */
                DescribeAccountsOutcome DescribeAccounts(const Model::DescribeAccountsRequest &request);
                void DescribeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountsOutcomeCallable DescribeAccountsCallable(const Model::DescribeAccountsRequest& request);

                /**
                 *This API is used to get the backup time of a TencentDB instance. The backend system will perform instance backup regularly according to this configuration.
                 * @param req DescribeBackupTimeRequest
                 * @return DescribeBackupTimeOutcome
                 */
                DescribeBackupTimeOutcome DescribeBackupTime(const Model::DescribeBackupTimeRequest &request);
                void DescribeBackupTimeAsync(const Model::DescribeBackupTimeRequest& request, const DescribeBackupTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupTimeOutcomeCallable DescribeBackupTimeCallable(const Model::DescribeBackupTimeRequest& request);

                /**
                 *This API is used to query the TencentDB instance list. It supports filtering instances by project ID, instance ID, private address, and instance name.
If no filter is specified, 20 instances will be returned by default. Up to 100 instances can be returned for a single request.
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *This API is used to get the list of various logs of a database, including cold backups, binlogs, errlogs, and slowlogs.
                 * @param req DescribeDBLogFilesRequest
                 * @return DescribeDBLogFilesOutcome
                 */
                DescribeDBLogFilesOutcome DescribeDBLogFiles(const Model::DescribeDBLogFilesRequest &request);
                void DescribeDBLogFilesAsync(const Model::DescribeDBLogFilesRequest& request, const DescribeDBLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBLogFilesOutcomeCallable DescribeDBLogFilesCallable(const Model::DescribeDBLogFilesRequest& request);

                /**
                 *This API is used to get the current parameter settings of a database.
                 * @param req DescribeDBParametersRequest
                 * @return DescribeDBParametersOutcome
                 */
                DescribeDBParametersOutcome DescribeDBParameters(const Model::DescribeDBParametersRequest &request);
                void DescribeDBParametersAsync(const Model::DescribeDBParametersRequest& request, const DescribeDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBParametersOutcomeCallable DescribeDBParametersCallable(const Model::DescribeDBParametersRequest& request);

                /**
                 *This API is used to view the current performance data of a database instance.
                 * @param req DescribeDBPerformanceRequest
                 * @return DescribeDBPerformanceOutcome
                 */
                DescribeDBPerformanceOutcome DescribeDBPerformance(const Model::DescribeDBPerformanceRequest &request);
                void DescribeDBPerformanceAsync(const Model::DescribeDBPerformanceRequest& request, const DescribeDBPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBPerformanceOutcomeCallable DescribeDBPerformanceCallable(const Model::DescribeDBPerformanceRequest& request);

                /**
                 *This API is used to view the instance performance data details.
                 * @param req DescribeDBPerformanceDetailsRequest
                 * @return DescribeDBPerformanceDetailsOutcome
                 */
                DescribeDBPerformanceDetailsOutcome DescribeDBPerformanceDetails(const Model::DescribeDBPerformanceDetailsRequest &request);
                void DescribeDBPerformanceDetailsAsync(const Model::DescribeDBPerformanceDetailsRequest& request, const DescribeDBPerformanceDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBPerformanceDetailsOutcomeCallable DescribeDBPerformanceDetailsCallable(const Model::DescribeDBPerformanceDetailsRequest& request);

                /**
                 *This API is used to view the resource usage of a database instance.
                 * @param req DescribeDBResourceUsageRequest
                 * @return DescribeDBResourceUsageOutcome
                 */
                DescribeDBResourceUsageOutcome DescribeDBResourceUsage(const Model::DescribeDBResourceUsageRequest &request);
                void DescribeDBResourceUsageAsync(const Model::DescribeDBResourceUsageRequest& request, const DescribeDBResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBResourceUsageOutcomeCallable DescribeDBResourceUsageCallable(const Model::DescribeDBResourceUsageRequest& request);

                /**
                 *This API is used to view the current performance data of a database instance.
                 * @param req DescribeDBResourceUsageDetailsRequest
                 * @return DescribeDBResourceUsageDetailsOutcome
                 */
                DescribeDBResourceUsageDetailsOutcome DescribeDBResourceUsageDetails(const Model::DescribeDBResourceUsageDetailsRequest &request);
                void DescribeDBResourceUsageDetailsAsync(const Model::DescribeDBResourceUsageDetailsRequest& request, const DescribeDBResourceUsageDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBResourceUsageDetailsOutcomeCallable DescribeDBResourceUsageDetailsCallable(const Model::DescribeDBResourceUsageDetailsRequest& request);

                /**
                 *This API is used to query the security group details of an instance.
                 * @param req DescribeDBSecurityGroupsRequest
                 * @return DescribeDBSecurityGroupsOutcome
                 */
                DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest &request);
                void DescribeDBSecurityGroupsAsync(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request);

                /**
                 *This API is used to query the slow query log list.
                 * @param req DescribeDBSlowLogsRequest
                 * @return DescribeDBSlowLogsOutcome
                 */
                DescribeDBSlowLogsOutcome DescribeDBSlowLogs(const Model::DescribeDBSlowLogsRequest &request);
                void DescribeDBSlowLogsAsync(const Model::DescribeDBSlowLogsRequest& request, const DescribeDBSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSlowLogsOutcomeCallable DescribeDBSlowLogsCallable(const Model::DescribeDBSlowLogsRequest& request);

                /**
                 *This API is used to query the table information of a TencentDB instance.
                 * @param req DescribeDatabaseTableRequest
                 * @return DescribeDatabaseTableOutcome
                 */
                DescribeDatabaseTableOutcome DescribeDatabaseTable(const Model::DescribeDatabaseTableRequest &request);
                void DescribeDatabaseTableAsync(const Model::DescribeDatabaseTableRequest& request, const DescribeDatabaseTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseTableOutcomeCallable DescribeDatabaseTableCallable(const Model::DescribeDatabaseTableRequest& request);

                /**
                 *This API is used to query the list of databases of a TencentDB instance.
                 * @param req DescribeDatabasesRequest
                 * @return DescribeDatabasesOutcome
                 */
                DescribeDatabasesOutcome DescribeDatabases(const Model::DescribeDatabasesRequest &request);
                void DescribeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabasesOutcomeCallable DescribeDatabasesCallable(const Model::DescribeDatabasesRequest& request);

                /**
                 *This API is used to query the disaster recovery details of an instance.
                 * @param req DescribeDcnDetailRequest
                 * @return DescribeDcnDetailOutcome
                 */
                DescribeDcnDetailOutcome DescribeDcnDetail(const Model::DescribeDcnDetailRequest &request);
                void DescribeDcnDetailAsync(const Model::DescribeDcnDetailRequest& request, const DescribeDcnDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDcnDetailOutcomeCallable DescribeDcnDetailCallable(const Model::DescribeDcnDetailRequest& request);

                /**
                 *This API is used to get the download URL of a specific backup or log file of a database.
                 * @param req DescribeFileDownloadUrlRequest
                 * @return DescribeFileDownloadUrlOutcome
                 */
                DescribeFileDownloadUrlOutcome DescribeFileDownloadUrl(const Model::DescribeFileDownloadUrlRequest &request);
                void DescribeFileDownloadUrlAsync(const Model::DescribeFileDownloadUrlRequest& request, const DescribeFileDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileDownloadUrlOutcomeCallable DescribeFileDownloadUrlCallable(const Model::DescribeFileDownloadUrlRequest& request);

                /**
                 *This API is used to query flow status.
                 * @param req DescribeFlowRequest
                 * @return DescribeFlowOutcome
                 */
                DescribeFlowOutcome DescribeFlow(const Model::DescribeFlowRequest &request);
                void DescribeFlowAsync(const Model::DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowOutcomeCallable DescribeFlowCallable(const Model::DescribeFlowRequest& request);

                /**
                 *This API is used to query the information of primary and replica nodes of an instance.
                 * @param req DescribeInstanceNodeInfoRequest
                 * @return DescribeInstanceNodeInfoOutcome
                 */
                DescribeInstanceNodeInfoOutcome DescribeInstanceNodeInfo(const Model::DescribeInstanceNodeInfoRequest &request);
                void DescribeInstanceNodeInfoAsync(const Model::DescribeInstanceNodeInfoRequest& request, const DescribeInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNodeInfoOutcomeCallable DescribeInstanceNodeInfoCallable(const Model::DescribeInstanceNodeInfoRequest& request);

                /**
                 *This API is used to view the configured number of days for retention of database backup logs.
                 * @param req DescribeLogFileRetentionPeriodRequest
                 * @return DescribeLogFileRetentionPeriodOutcome
                 */
                DescribeLogFileRetentionPeriodOutcome DescribeLogFileRetentionPeriod(const Model::DescribeLogFileRetentionPeriodRequest &request);
                void DescribeLogFileRetentionPeriodAsync(const Model::DescribeLogFileRetentionPeriodRequest& request, const DescribeLogFileRetentionPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogFileRetentionPeriodOutcomeCallable DescribeLogFileRetentionPeriodCallable(const Model::DescribeLogFileRetentionPeriodRequest& request);

                /**
                 *This API is used to query the security group details of a project.
                 * @param req DescribeProjectSecurityGroupsRequest
                 * @return DescribeProjectSecurityGroupsOutcome
                 */
                DescribeProjectSecurityGroupsOutcome DescribeProjectSecurityGroups(const Model::DescribeProjectSecurityGroupsRequest &request);
                void DescribeProjectSecurityGroupsAsync(const Model::DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectSecurityGroupsOutcomeCallable DescribeProjectSecurityGroupsCallable(const Model::DescribeProjectSecurityGroupsRequest& request);

                /**
                 *This API is used to terminate a pay-as-you-go instance.
                 * @param req DestroyHourDBInstanceRequest
                 * @return DestroyHourDBInstanceOutcome
                 */
                DestroyHourDBInstanceOutcome DestroyHourDBInstance(const Model::DestroyHourDBInstanceRequest &request);
                void DestroyHourDBInstanceAsync(const Model::DestroyHourDBInstanceRequest& request, const DestroyHourDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyHourDBInstanceOutcomeCallable DestroyHourDBInstanceCallable(const Model::DestroyHourDBInstanceRequest& request);

                /**
                 *This API is used to unassociate security groups from instances in batches.
                 * @param req DisassociateSecurityGroupsRequest
                 * @return DisassociateSecurityGroupsOutcome
                 */
                DisassociateSecurityGroupsOutcome DisassociateSecurityGroups(const Model::DisassociateSecurityGroupsRequest &request);
                void DisassociateSecurityGroupsAsync(const Model::DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateSecurityGroupsOutcomeCallable DisassociateSecurityGroupsCallable(const Model::DisassociateSecurityGroupsRequest& request);

                /**
                 *This API is used to grant permissions to a TencentDB account.
Note: accounts with the same username but different hosts are different accounts.
                 * @param req GrantAccountPrivilegesRequest
                 * @return GrantAccountPrivilegesOutcome
                 */
                GrantAccountPrivilegesOutcome GrantAccountPrivileges(const Model::GrantAccountPrivilegesRequest &request);
                void GrantAccountPrivilegesAsync(const Model::GrantAccountPrivilegesRequest& request, const GrantAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GrantAccountPrivilegesOutcomeCallable GrantAccountPrivilegesCallable(const Model::GrantAccountPrivilegesRequest& request);

                /**
                 *This API is used to initialize TencentDB instances, including setting the default character set and table name case sensitivity.
                 * @param req InitDBInstancesRequest
                 * @return InitDBInstancesOutcome
                 */
                InitDBInstancesOutcome InitDBInstances(const Model::InitDBInstancesRequest &request);
                void InitDBInstancesAsync(const Model::InitDBInstancesRequest& request, const InitDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InitDBInstancesOutcomeCallable InitDBInstancesCallable(const Model::InitDBInstancesRequest& request);

                /**
                 *This API is used to modify the remarks of a TencentDB account.
Note: accounts with the same username but different hosts are different accounts.
                 * @param req ModifyAccountDescriptionRequest
                 * @return ModifyAccountDescriptionOutcome
                 */
                ModifyAccountDescriptionOutcome ModifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request);
                void ModifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountDescriptionOutcomeCallable ModifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request);

                /**
                 *This API is used to modify the permissions of a TencentDB instance account.

**Notes**
- Only the SELECT permission (that is, set the permission parameter to `["SELECT"]`) of the system database `mysql` can be granted.
- An error will be reported if read-write permissions are granted to a read-only account.
- If the parameter of permissions at a level is left empty, no change will be made to the permissions at the level that have been granted. To clear granted permissions at a level, set `GlobalPrivileges.N` or `Privileges` to an empty array.
                 * @param req ModifyAccountPrivilegesRequest
                 * @return ModifyAccountPrivilegesOutcome
                 */
                ModifyAccountPrivilegesOutcome ModifyAccountPrivileges(const Model::ModifyAccountPrivilegesRequest &request);
                void ModifyAccountPrivilegesAsync(const Model::ModifyAccountPrivilegesRequest& request, const ModifyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountPrivilegesOutcomeCallable ModifyAccountPrivilegesCallable(const Model::ModifyAccountPrivilegesRequest& request);

                /**
                 *This API is used to set the backup time of a TencentDB instance. The backend system will perform instance backup regularly according to this configuration.
                 * @param req ModifyBackupTimeRequest
                 * @return ModifyBackupTimeOutcome
                 */
                ModifyBackupTimeOutcome ModifyBackupTime(const Model::ModifyBackupTimeRequest &request);
                void ModifyBackupTimeAsync(const Model::ModifyBackupTimeRequest& request, const ModifyBackupTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupTimeOutcomeCallable ModifyBackupTimeCallable(const Model::ModifyBackupTimeRequest& request);

                /**
                 *This API is used to rename a TencentDB instance.
                 * @param req ModifyDBInstanceNameRequest
                 * @return ModifyDBInstanceNameOutcome
                 */
                ModifyDBInstanceNameOutcome ModifyDBInstanceName(const Model::ModifyDBInstanceNameRequest &request);
                void ModifyDBInstanceNameAsync(const Model::ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceNameOutcomeCallable ModifyDBInstanceNameCallable(const Model::ModifyDBInstanceNameRequest& request);

                /**
                 *This API is used to modify the security groups associated with TencentDB.
                 * @param req ModifyDBInstanceSecurityGroupsRequest
                 * @return ModifyDBInstanceSecurityGroupsOutcome
                 */
                ModifyDBInstanceSecurityGroupsOutcome ModifyDBInstanceSecurityGroups(const Model::ModifyDBInstanceSecurityGroupsRequest &request);
                void ModifyDBInstanceSecurityGroupsAsync(const Model::ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSecurityGroupsOutcomeCallable ModifyDBInstanceSecurityGroupsCallable(const Model::ModifyDBInstanceSecurityGroupsRequest& request);

                /**
                 *This API is used to modify the project to which TencentDB instances belong.
                 * @param req ModifyDBInstancesProjectRequest
                 * @return ModifyDBInstancesProjectOutcome
                 */
                ModifyDBInstancesProjectOutcome ModifyDBInstancesProject(const Model::ModifyDBInstancesProjectRequest &request);
                void ModifyDBInstancesProjectAsync(const Model::ModifyDBInstancesProjectRequest& request, const ModifyDBInstancesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstancesProjectOutcomeCallable ModifyDBInstancesProjectCallable(const Model::ModifyDBInstancesProjectRequest& request);

                /**
                 *This API is used to modify database parameters.
                 * @param req ModifyDBParametersRequest
                 * @return ModifyDBParametersOutcome
                 */
                ModifyDBParametersOutcome ModifyDBParameters(const Model::ModifyDBParametersRequest &request);
                void ModifyDBParametersAsync(const Model::ModifyDBParametersRequest& request, const ModifyDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBParametersOutcomeCallable ModifyDBParametersCallable(const Model::ModifyDBParametersRequest& request);

                /**
                 *This API is used to modify the sync mode of a TencentDB instance.
                 * @param req ModifyDBSyncModeRequest
                 * @return ModifyDBSyncModeOutcome
                 */
                ModifyDBSyncModeOutcome ModifyDBSyncMode(const Model::ModifyDBSyncModeRequest &request);
                void ModifyDBSyncModeAsync(const Model::ModifyDBSyncModeRequest& request, const ModifyDBSyncModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBSyncModeOutcomeCallable ModifyDBSyncModeCallable(const Model::ModifyDBSyncModeRequest& request);

                /**
                 *This API is used to modify the number of days for retention of database backup logs.
                 * @param req ModifyLogFileRetentionPeriodRequest
                 * @return ModifyLogFileRetentionPeriodOutcome
                 */
                ModifyLogFileRetentionPeriodOutcome ModifyLogFileRetentionPeriod(const Model::ModifyLogFileRetentionPeriodRequest &request);
                void ModifyLogFileRetentionPeriodAsync(const Model::ModifyLogFileRetentionPeriodRequest& request, const ModifyLogFileRetentionPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLogFileRetentionPeriodOutcomeCallable ModifyLogFileRetentionPeriodCallable(const Model::ModifyLogFileRetentionPeriodRequest& request);

                /**
                 *This API is used to modify sync task attributes (currently, only the task name can be modified).
                 * @param req ModifySyncTaskAttributeRequest
                 * @return ModifySyncTaskAttributeOutcome
                 */
                ModifySyncTaskAttributeOutcome ModifySyncTaskAttribute(const Model::ModifySyncTaskAttributeRequest &request);
                void ModifySyncTaskAttributeAsync(const Model::ModifySyncTaskAttributeRequest& request, const ModifySyncTaskAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySyncTaskAttributeOutcomeCallable ModifySyncTaskAttributeCallable(const Model::ModifySyncTaskAttributeRequest& request);

                /**
                 *This API is used to enable public network access for a TencentDB instance. After that, you can access the instance with the public domain name and port obtained through the `DescribeDCDBInstances` API.
                 * @param req OpenDBExtranetAccessRequest
                 * @return OpenDBExtranetAccessOutcome
                 */
                OpenDBExtranetAccessOutcome OpenDBExtranetAccess(const Model::OpenDBExtranetAccessRequest &request);
                void OpenDBExtranetAccessAsync(const Model::OpenDBExtranetAccessRequest& request, const OpenDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenDBExtranetAccessOutcomeCallable OpenDBExtranetAccessCallable(const Model::OpenDBExtranetAccessRequest& request);

                /**
                 *This API is used to reset the password of a TencentDB account.
Note: accounts with the same username but different hosts are different accounts.
                 * @param req ResetAccountPasswordRequest
                 * @return ResetAccountPasswordOutcome
                 */
                ResetAccountPasswordOutcome ResetAccountPassword(const Model::ResetAccountPasswordRequest &request);
                void ResetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAccountPasswordOutcomeCallable ResetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request);

                /**
                 *This API is used to start a primary-replica switch of instances.
                 * @param req SwitchDBInstanceHARequest
                 * @return SwitchDBInstanceHAOutcome
                 */
                SwitchDBInstanceHAOutcome SwitchDBInstanceHA(const Model::SwitchDBInstanceHARequest &request);
                void SwitchDBInstanceHAAsync(const Model::SwitchDBInstanceHARequest& request, const SwitchDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchDBInstanceHAOutcomeCallable SwitchDBInstanceHACallable(const Model::SwitchDBInstanceHARequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MARIADBCLIENT_H_
