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
#include <tencentcloud/mariadb/v20170312/model/CreateDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CreateDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CreateHourDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CreateHourDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DeleteAccountRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DeleteAccountResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeAccountPrivilegesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeAccountPrivilegesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeAccountsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeAccountsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeBackupFilesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeBackupFilesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBEncryptAttributesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBEncryptAttributesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBInstanceDetailRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBInstanceDetailResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBLogFilesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBLogFilesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBParametersRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBParametersResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBSecurityGroupsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBSecurityGroupsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBSlowLogsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBSlowLogsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBTmpInstancesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBTmpInstancesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDatabaseObjectsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDatabaseObjectsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDatabaseTableRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDatabaseTableResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDatabasesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDatabasesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDcnDetailRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDcnDetailResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeFileDownloadUrlRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeFileDownloadUrlResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeInstanceNodeInfoRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeInstanceNodeInfoResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeLogFileRetentionPeriodRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeLogFileRetentionPeriodResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeOrdersRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeOrdersResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribePriceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribePriceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeProjectSecurityGroupsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeProjectSecurityGroupsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DestroyDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DestroyDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DestroyHourDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DestroyHourDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DisassociateSecurityGroupsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DisassociateSecurityGroupsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/GrantAccountPrivilegesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/GrantAccountPrivilegesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/IsolateDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/IsolateDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/IsolateDedicatedDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/IsolateDedicatedDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/KillSessionRequest.h>
#include <tencentcloud/mariadb/v20170312/model/KillSessionResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyAccountDescriptionRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyAccountDescriptionResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyAccountPrivilegesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyAccountPrivilegesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBEncryptAttributesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBEncryptAttributesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBInstancesProjectRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBInstancesProjectResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBParametersRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBParametersResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBSyncModeRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBSyncModeResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyInstanceNetworkRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyInstanceNetworkResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyInstanceVipRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyInstanceVipResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyInstanceVportRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyInstanceVportResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifySyncTaskAttributeRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifySyncTaskAttributeResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ResetAccountPasswordResponse.h>
#include <tencentcloud/mariadb/v20170312/model/TerminateDedicatedDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/TerminateDedicatedDBInstanceResponse.h>
#include <tencentcloud/mariadb/v20170312/model/UpgradeDedicatedDBInstanceRequest.h>
#include <tencentcloud/mariadb/v20170312/model/UpgradeDedicatedDBInstanceResponse.h>


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
                typedef Outcome<Core::Error, Model::CreateDBInstanceResponse> CreateDBInstanceOutcome;
                typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CreateDBInstanceRequest&, CreateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeBackupFilesResponse> DescribeBackupFilesOutcome;
                typedef std::future<DescribeBackupFilesOutcome> DescribeBackupFilesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeBackupFilesRequest&, DescribeBackupFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBEncryptAttributesResponse> DescribeDBEncryptAttributesOutcome;
                typedef std::future<DescribeDBEncryptAttributesOutcome> DescribeDBEncryptAttributesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBEncryptAttributesRequest&, DescribeDBEncryptAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBEncryptAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceDetailResponse> DescribeDBInstanceDetailOutcome;
                typedef std::future<DescribeDBInstanceDetailOutcome> DescribeDBInstanceDetailOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBInstanceDetailRequest&, DescribeDBInstanceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBLogFilesResponse> DescribeDBLogFilesOutcome;
                typedef std::future<DescribeDBLogFilesOutcome> DescribeDBLogFilesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBLogFilesRequest&, DescribeDBLogFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBLogFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBParametersResponse> DescribeDBParametersOutcome;
                typedef std::future<DescribeDBParametersOutcome> DescribeDBParametersOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBParametersRequest&, DescribeDBParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSecurityGroupsResponse> DescribeDBSecurityGroupsOutcome;
                typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBSecurityGroupsRequest&, DescribeDBSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSlowLogsResponse> DescribeDBSlowLogsOutcome;
                typedef std::future<DescribeDBSlowLogsOutcome> DescribeDBSlowLogsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBSlowLogsRequest&, DescribeDBSlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBTmpInstancesResponse> DescribeDBTmpInstancesOutcome;
                typedef std::future<DescribeDBTmpInstancesOutcome> DescribeDBTmpInstancesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBTmpInstancesRequest&, DescribeDBTmpInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBTmpInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseObjectsResponse> DescribeDatabaseObjectsOutcome;
                typedef std::future<DescribeDatabaseObjectsOutcome> DescribeDatabaseObjectsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDatabaseObjectsRequest&, DescribeDatabaseObjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseObjectsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeInstanceNodeInfoResponse> DescribeInstanceNodeInfoOutcome;
                typedef std::future<DescribeInstanceNodeInfoOutcome> DescribeInstanceNodeInfoOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeInstanceNodeInfoRequest&, DescribeInstanceNodeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNodeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogFileRetentionPeriodResponse> DescribeLogFileRetentionPeriodOutcome;
                typedef std::future<DescribeLogFileRetentionPeriodOutcome> DescribeLogFileRetentionPeriodOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeLogFileRetentionPeriodRequest&, DescribeLogFileRetentionPeriodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogFileRetentionPeriodAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrdersResponse> DescribeOrdersOutcome;
                typedef std::future<DescribeOrdersOutcome> DescribeOrdersOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeOrdersRequest&, DescribeOrdersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrdersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePriceResponse> DescribePriceOutcome;
                typedef std::future<DescribePriceOutcome> DescribePriceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribePriceRequest&, DescribePriceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePriceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectSecurityGroupsResponse> DescribeProjectSecurityGroupsOutcome;
                typedef std::future<DescribeProjectSecurityGroupsOutcome> DescribeProjectSecurityGroupsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeProjectSecurityGroupsRequest&, DescribeProjectSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyDBInstanceResponse> DestroyDBInstanceOutcome;
                typedef std::future<DestroyDBInstanceOutcome> DestroyDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DestroyDBInstanceRequest&, DestroyDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyHourDBInstanceResponse> DestroyHourDBInstanceOutcome;
                typedef std::future<DestroyHourDBInstanceOutcome> DestroyHourDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DestroyHourDBInstanceRequest&, DestroyHourDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyHourDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateSecurityGroupsResponse> DisassociateSecurityGroupsOutcome;
                typedef std::future<DisassociateSecurityGroupsOutcome> DisassociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DisassociateSecurityGroupsRequest&, DisassociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::GrantAccountPrivilegesResponse> GrantAccountPrivilegesOutcome;
                typedef std::future<GrantAccountPrivilegesOutcome> GrantAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::GrantAccountPrivilegesRequest&, GrantAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GrantAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateDBInstanceResponse> IsolateDBInstanceOutcome;
                typedef std::future<IsolateDBInstanceOutcome> IsolateDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::IsolateDBInstanceRequest&, IsolateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateDedicatedDBInstanceResponse> IsolateDedicatedDBInstanceOutcome;
                typedef std::future<IsolateDedicatedDBInstanceOutcome> IsolateDedicatedDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::IsolateDedicatedDBInstanceRequest&, IsolateDedicatedDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDedicatedDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::KillSessionResponse> KillSessionOutcome;
                typedef std::future<KillSessionOutcome> KillSessionOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::KillSessionRequest&, KillSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountDescriptionResponse> ModifyAccountDescriptionOutcome;
                typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyAccountDescriptionRequest&, ModifyAccountDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountPrivilegesResponse> ModifyAccountPrivilegesOutcome;
                typedef std::future<ModifyAccountPrivilegesOutcome> ModifyAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyAccountPrivilegesRequest&, ModifyAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBEncryptAttributesResponse> ModifyDBEncryptAttributesOutcome;
                typedef std::future<ModifyDBEncryptAttributesOutcome> ModifyDBEncryptAttributesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyDBEncryptAttributesRequest&, ModifyDBEncryptAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBEncryptAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstancesProjectResponse> ModifyDBInstancesProjectOutcome;
                typedef std::future<ModifyDBInstancesProjectOutcome> ModifyDBInstancesProjectOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyDBInstancesProjectRequest&, ModifyDBInstancesProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstancesProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBParametersResponse> ModifyDBParametersOutcome;
                typedef std::future<ModifyDBParametersOutcome> ModifyDBParametersOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyDBParametersRequest&, ModifyDBParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBSyncModeResponse> ModifyDBSyncModeOutcome;
                typedef std::future<ModifyDBSyncModeOutcome> ModifyDBSyncModeOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyDBSyncModeRequest&, ModifyDBSyncModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBSyncModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceNetworkResponse> ModifyInstanceNetworkOutcome;
                typedef std::future<ModifyInstanceNetworkOutcome> ModifyInstanceNetworkOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyInstanceNetworkRequest&, ModifyInstanceNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNetworkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceVipResponse> ModifyInstanceVipOutcome;
                typedef std::future<ModifyInstanceVipOutcome> ModifyInstanceVipOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyInstanceVipRequest&, ModifyInstanceVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceVipAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceVportResponse> ModifyInstanceVportOutcome;
                typedef std::future<ModifyInstanceVportOutcome> ModifyInstanceVportOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyInstanceVportRequest&, ModifyInstanceVportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceVportAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySyncTaskAttributeResponse> ModifySyncTaskAttributeOutcome;
                typedef std::future<ModifySyncTaskAttributeOutcome> ModifySyncTaskAttributeOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifySyncTaskAttributeRequest&, ModifySyncTaskAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySyncTaskAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAccountPasswordResponse> ResetAccountPasswordOutcome;
                typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ResetAccountPasswordRequest&, ResetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateDedicatedDBInstanceResponse> TerminateDedicatedDBInstanceOutcome;
                typedef std::future<TerminateDedicatedDBInstanceOutcome> TerminateDedicatedDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::TerminateDedicatedDBInstanceRequest&, TerminateDedicatedDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateDedicatedDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDedicatedDBInstanceResponse> UpgradeDedicatedDBInstanceOutcome;
                typedef std::future<UpgradeDedicatedDBInstanceOutcome> UpgradeDedicatedDBInstanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::UpgradeDedicatedDBInstanceRequest&, UpgradeDedicatedDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDedicatedDBInstanceAsyncHandler;



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
                 *This API is used to create a monthly subscribed TencentDB for MariaDB instance by passing in information such as instance specifications, database version number, validity period, and quantity.
                 * @param req CreateDBInstanceRequest
                 * @return CreateDBInstanceOutcome
                 */
                CreateDBInstanceOutcome CreateDBInstance(const Model::CreateDBInstanceRequest &request);
                void CreateDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstanceOutcomeCallable CreateDBInstanceCallable(const Model::CreateDBInstanceRequest& request);

                /**
                 *This API is used to create a pay-as-you-go TencentDB for MariaDB instance.
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
Note: Accounts with the same username but different hosts are different accounts.
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
                 *This API is used to query the list of backup files.
                 * @param req DescribeBackupFilesRequest
                 * @return DescribeBackupFilesOutcome
                 */
                DescribeBackupFilesOutcome DescribeBackupFiles(const Model::DescribeBackupFilesRequest &request);
                void DescribeBackupFilesAsync(const Model::DescribeBackupFilesRequest& request, const DescribeBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupFilesOutcomeCallable DescribeBackupFilesCallable(const Model::DescribeBackupFilesRequest& request);

                /**
                 *This API is used to query the encryption status of the instance data.
                 * @param req DescribeDBEncryptAttributesRequest
                 * @return DescribeDBEncryptAttributesOutcome
                 */
                DescribeDBEncryptAttributesOutcome DescribeDBEncryptAttributes(const Model::DescribeDBEncryptAttributesRequest &request);
                void DescribeDBEncryptAttributesAsync(const Model::DescribeDBEncryptAttributesRequest& request, const DescribeDBEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBEncryptAttributesOutcomeCallable DescribeDBEncryptAttributesCallable(const Model::DescribeDBEncryptAttributesRequest& request);

                /**
                 *This API is used to query the details of a specified instance.
                 * @param req DescribeDBInstanceDetailRequest
                 * @return DescribeDBInstanceDetailOutcome
                 */
                DescribeDBInstanceDetailOutcome DescribeDBInstanceDetail(const Model::DescribeDBInstanceDetailRequest &request);
                void DescribeDBInstanceDetailAsync(const Model::DescribeDBInstanceDetailRequest& request, const DescribeDBInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceDetailOutcomeCallable DescribeDBInstanceDetailCallable(const Model::DescribeDBInstanceDetailRequest& request);

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
                 *This API is used to query the security group details of an instance.
                 * @param req DescribeDBSecurityGroupsRequest
                 * @return DescribeDBSecurityGroupsOutcome
                 */
                DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest &request);
                void DescribeDBSecurityGroupsAsync(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request);

                /**
                 *This API is used to query the list of slow query logs.
                 * @param req DescribeDBSlowLogsRequest
                 * @return DescribeDBSlowLogsOutcome
                 */
                DescribeDBSlowLogsOutcome DescribeDBSlowLogs(const Model::DescribeDBSlowLogsRequest &request);
                void DescribeDBSlowLogsAsync(const Model::DescribeDBSlowLogsRequest& request, const DescribeDBSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSlowLogsOutcomeCallable DescribeDBSlowLogsCallable(const Model::DescribeDBSlowLogsRequest& request);

                /**
                 *This API is used to obtain a temp u200drollback instance.
                 * @param req DescribeDBTmpInstancesRequest
                 * @return DescribeDBTmpInstancesOutcome
                 */
                DescribeDBTmpInstancesOutcome DescribeDBTmpInstances(const Model::DescribeDBTmpInstancesRequest &request);
                void DescribeDBTmpInstancesAsync(const Model::DescribeDBTmpInstancesRequest& request, const DescribeDBTmpInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBTmpInstancesOutcomeCallable DescribeDBTmpInstancesCallable(const Model::DescribeDBTmpInstancesRequest& request);

                /**
                 *This API is used to query the list of database objects in a TencentDB instance, including tables, stored procedures, views, and functions.
                 * @param req DescribeDatabaseObjectsRequest
                 * @return DescribeDatabaseObjectsOutcome
                 */
                DescribeDatabaseObjectsOutcome DescribeDatabaseObjects(const Model::DescribeDatabaseObjectsRequest &request);
                void DescribeDatabaseObjectsAsync(const Model::DescribeDatabaseObjectsRequest& request, const DescribeDatabaseObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseObjectsOutcomeCallable DescribeDatabaseObjectsCallable(const Model::DescribeDatabaseObjectsRequest& request);

                /**
                 *This API is used to query the table information of a TencentDB instance.
                 * @param req DescribeDatabaseTableRequest
                 * @return DescribeDatabaseTableOutcome
                 */
                DescribeDatabaseTableOutcome DescribeDatabaseTable(const Model::DescribeDatabaseTableRequest &request);
                void DescribeDatabaseTableAsync(const Model::DescribeDatabaseTableRequest& request, const DescribeDatabaseTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseTableOutcomeCallable DescribeDatabaseTableCallable(const Model::DescribeDatabaseTableRequest& request);

                /**
                 *This API is used to query the database list of a TencentDB instance.
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
                 *This API is used to query the information of primary and replica nodes of an instance.
                 * @param req DescribeInstanceNodeInfoRequest
                 * @return DescribeInstanceNodeInfoOutcome
                 */
                DescribeInstanceNodeInfoOutcome DescribeInstanceNodeInfo(const Model::DescribeInstanceNodeInfoRequest &request);
                void DescribeInstanceNodeInfoAsync(const Model::DescribeInstanceNodeInfoRequest& request, const DescribeInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNodeInfoOutcomeCallable DescribeInstanceNodeInfoCallable(const Model::DescribeInstanceNodeInfoRequest& request);

                /**
                 *This API is used to view the backup log retention days.
                 * @param req DescribeLogFileRetentionPeriodRequest
                 * @return DescribeLogFileRetentionPeriodOutcome
                 */
                DescribeLogFileRetentionPeriodOutcome DescribeLogFileRetentionPeriod(const Model::DescribeLogFileRetentionPeriodRequest &request);
                void DescribeLogFileRetentionPeriodAsync(const Model::DescribeLogFileRetentionPeriodRequest& request, const DescribeLogFileRetentionPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogFileRetentionPeriodOutcomeCallable DescribeLogFileRetentionPeriodCallable(const Model::DescribeLogFileRetentionPeriodRequest& request);

                /**
                 *This API is used to query TencentDB order information. You can pass in an order ID to query the TencentDB instance associated with the order and the corresponding task process ID.
                 * @param req DescribeOrdersRequest
                 * @return DescribeOrdersOutcome
                 */
                DescribeOrdersOutcome DescribeOrders(const Model::DescribeOrdersRequest &request);
                void DescribeOrdersAsync(const Model::DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrdersOutcomeCallable DescribeOrdersCallable(const Model::DescribeOrdersRequest& request);

                /**
                 *This API is used to query the instance price before you purchase it.
                 * @param req DescribePriceRequest
                 * @return DescribePriceOutcome
                 */
                DescribePriceOutcome DescribePrice(const Model::DescribePriceRequest &request);
                void DescribePriceAsync(const Model::DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePriceOutcomeCallable DescribePriceCallable(const Model::DescribePriceRequest& request);

                /**
                 *This API is used to query the security group details of a project.
                 * @param req DescribeProjectSecurityGroupsRequest
                 * @return DescribeProjectSecurityGroupsOutcome
                 */
                DescribeProjectSecurityGroupsOutcome DescribeProjectSecurityGroups(const Model::DescribeProjectSecurityGroupsRequest &request);
                void DescribeProjectSecurityGroupsAsync(const Model::DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectSecurityGroupsOutcomeCallable DescribeProjectSecurityGroupsCallable(const Model::DescribeProjectSecurityGroupsRequest& request);

                /**
                 *This API is used to terminate an isolated monthly subscribed instance.
                 * @param req DestroyDBInstanceRequest
                 * @return DestroyDBInstanceOutcome
                 */
                DestroyDBInstanceOutcome DestroyDBInstance(const Model::DestroyDBInstanceRequest &request);
                void DestroyDBInstanceAsync(const Model::DestroyDBInstanceRequest& request, const DestroyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyDBInstanceOutcomeCallable DestroyDBInstanceCallable(const Model::DestroyDBInstanceRequest& request);

                /**
                 *This API is used to terminate a pay-as-you-go TencentDB for MariaDB instance.
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
                 *This API is used to isolate a monthly subscribed TencentDB for MariaDB instance, which will no longer be accessible via IP and port.  The isolated instance can be started up in the recycle bin.  If it is isolated due to overdue payments, top up your account as soon as possible.
                 * @param req IsolateDBInstanceRequest
                 * @return IsolateDBInstanceOutcome
                 */
                IsolateDBInstanceOutcome IsolateDBInstance(const Model::IsolateDBInstanceRequest &request);
                void IsolateDBInstanceAsync(const Model::IsolateDBInstanceRequest& request, const IsolateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDBInstanceOutcomeCallable IsolateDBInstanceCallable(const Model::IsolateDBInstanceRequest& request);

                /**
                 *This API is used to isolate a dedicated TencentDB instance.
                 * @param req IsolateDedicatedDBInstanceRequest
                 * @return IsolateDedicatedDBInstanceOutcome
                 */
                IsolateDedicatedDBInstanceOutcome IsolateDedicatedDBInstance(const Model::IsolateDedicatedDBInstanceRequest &request);
                void IsolateDedicatedDBInstanceAsync(const Model::IsolateDedicatedDBInstanceRequest& request, const IsolateDedicatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDedicatedDBInstanceOutcomeCallable IsolateDedicatedDBInstanceCallable(const Model::IsolateDedicatedDBInstanceRequest& request);

                /**
                 *This API is used to kill the specified session.
                 * @param req KillSessionRequest
                 * @return KillSessionOutcome
                 */
                KillSessionOutcome KillSession(const Model::KillSessionRequest &request);
                void KillSessionAsync(const Model::KillSessionRequest& request, const KillSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillSessionOutcomeCallable KillSessionCallable(const Model::KillSessionRequest& request);

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
                 *This API is used to modify the permissions of a TencentDB instance account. \n\n**Note**\n-Only the SELECT permission (that is, set the permission parameter to `["SELECT"]`) of the system database `mysql` can be granted.An error will be reported if read-write permissions are granted to a read-only account. If the parameter is not passed in, no change will be made to the granted table permissions. To clear the granted view permissions, set `Privileges` to an empty array.
                 * @param req ModifyAccountPrivilegesRequest
                 * @return ModifyAccountPrivilegesOutcome
                 */
                ModifyAccountPrivilegesOutcome ModifyAccountPrivileges(const Model::ModifyAccountPrivilegesRequest &request);
                void ModifyAccountPrivilegesAsync(const Model::ModifyAccountPrivilegesRequest& request, const ModifyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountPrivilegesOutcomeCallable ModifyAccountPrivilegesCallable(const Model::ModifyAccountPrivilegesRequest& request);

                /**
                 *This API is used to modify the instance data encryption.
                 * @param req ModifyDBEncryptAttributesRequest
                 * @return ModifyDBEncryptAttributesOutcome
                 */
                ModifyDBEncryptAttributesOutcome ModifyDBEncryptAttributes(const Model::ModifyDBEncryptAttributesRequest &request);
                void ModifyDBEncryptAttributesAsync(const Model::ModifyDBEncryptAttributesRequest& request, const ModifyDBEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBEncryptAttributesOutcomeCallable ModifyDBEncryptAttributesCallable(const Model::ModifyDBEncryptAttributesRequest& request);

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
                 *This API is used to modify instance network.
                 * @param req ModifyInstanceNetworkRequest
                 * @return ModifyInstanceNetworkOutcome
                 */
                ModifyInstanceNetworkOutcome ModifyInstanceNetwork(const Model::ModifyInstanceNetworkRequest &request);
                void ModifyInstanceNetworkAsync(const Model::ModifyInstanceNetworkRequest& request, const ModifyInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceNetworkOutcomeCallable ModifyInstanceNetworkCallable(const Model::ModifyInstanceNetworkRequest& request);

                /**
                 *This API is used to modify instance VIP.
                 * @param req ModifyInstanceVipRequest
                 * @return ModifyInstanceVipOutcome
                 */
                ModifyInstanceVipOutcome ModifyInstanceVip(const Model::ModifyInstanceVipRequest &request);
                void ModifyInstanceVipAsync(const Model::ModifyInstanceVipRequest& request, const ModifyInstanceVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceVipOutcomeCallable ModifyInstanceVipCallable(const Model::ModifyInstanceVipRequest& request);

                /**
                 *This API is used to modify instance Vport.
                 * @param req ModifyInstanceVportRequest
                 * @return ModifyInstanceVportOutcome
                 */
                ModifyInstanceVportOutcome ModifyInstanceVport(const Model::ModifyInstanceVportRequest &request);
                void ModifyInstanceVportAsync(const Model::ModifyInstanceVportRequest& request, const ModifyInstanceVportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceVportOutcomeCallable ModifyInstanceVportCallable(const Model::ModifyInstanceVportRequest& request);

                /**
                 *This API is used to modify sync task attributes (currently, only the task name can be modified).
                 * @param req ModifySyncTaskAttributeRequest
                 * @return ModifySyncTaskAttributeOutcome
                 */
                ModifySyncTaskAttributeOutcome ModifySyncTaskAttribute(const Model::ModifySyncTaskAttributeRequest &request);
                void ModifySyncTaskAttributeAsync(const Model::ModifySyncTaskAttributeRequest& request, const ModifySyncTaskAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySyncTaskAttributeOutcomeCallable ModifySyncTaskAttributeCallable(const Model::ModifySyncTaskAttributeRequest& request);

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
                 *This API is used to terminate the isolated dedicated TencentDB instance.
                 * @param req TerminateDedicatedDBInstanceRequest
                 * @return TerminateDedicatedDBInstanceOutcome
                 */
                TerminateDedicatedDBInstanceOutcome TerminateDedicatedDBInstance(const Model::TerminateDedicatedDBInstanceRequest &request);
                void TerminateDedicatedDBInstanceAsync(const Model::TerminateDedicatedDBInstanceRequest& request, const TerminateDedicatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateDedicatedDBInstanceOutcomeCallable TerminateDedicatedDBInstanceCallable(const Model::TerminateDedicatedDBInstanceRequest& request);

                /**
                 *This API is used to expand the dedicated TencentDB instance.
                 * @param req UpgradeDedicatedDBInstanceRequest
                 * @return UpgradeDedicatedDBInstanceOutcome
                 */
                UpgradeDedicatedDBInstanceOutcome UpgradeDedicatedDBInstance(const Model::UpgradeDedicatedDBInstanceRequest &request);
                void UpgradeDedicatedDBInstanceAsync(const Model::UpgradeDedicatedDBInstanceRequest& request, const UpgradeDedicatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDedicatedDBInstanceOutcomeCallable UpgradeDedicatedDBInstanceCallable(const Model::UpgradeDedicatedDBInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MARIADBCLIENT_H_
