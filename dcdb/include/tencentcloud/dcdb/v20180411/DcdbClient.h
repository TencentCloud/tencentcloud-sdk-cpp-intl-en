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

#ifndef TENCENTCLOUD_DCDB_V20180411_DCDBCLIENT_H_
#define TENCENTCLOUD_DCDB_V20180411_DCDBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dcdb/v20180411/model/ActiveHourDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ActiveHourDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/AssociateSecurityGroupsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/AssociateSecurityGroupsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CancelDcnJobRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CancelDcnJobResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CloneAccountRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CloneAccountResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CloseDBExtranetAccessRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CloseDBExtranetAccessResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CopyAccountPrivilegesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CopyAccountPrivilegesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CreateAccountRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CreateAccountResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CreateDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CreateDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CreateDedicatedClusterDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CreateDedicatedClusterDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CreateHourDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CreateHourDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CreateOnlineDDLJobRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CreateOnlineDDLJobResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DeleteAccountRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DeleteAccountResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeAccountPrivilegesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeAccountPrivilegesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeAccountsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeAccountsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeBackupFilesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeBackupFilesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBEncryptAttributesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBEncryptAttributesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBLogFilesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBLogFilesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBParametersRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBParametersResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBSecurityGroupsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBSecurityGroupsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBSlowLogsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBSlowLogsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBSyncModeRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBSyncModeResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBTmpInstancesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBTmpInstancesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBInstanceDetailRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBInstanceDetailResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBInstanceNodeInfoRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBInstanceNodeInfoResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBInstancesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBInstancesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBPriceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBPriceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBShardsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBShardsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDatabaseObjectsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDatabaseObjectsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDatabaseTableRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDatabaseTableResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDatabasesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDatabasesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDcnDetailRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDcnDetailResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeFileDownloadUrlRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeFileDownloadUrlResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeFlowRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeFlowResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeLogFileRetentionPeriodRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeLogFileRetentionPeriodResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeOrdersRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeOrdersResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeProjectSecurityGroupsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeProjectSecurityGroupsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DestroyDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DestroyDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DestroyHourDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DestroyHourDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DisassociateSecurityGroupsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DisassociateSecurityGroupsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/GrantAccountPrivilegesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/GrantAccountPrivilegesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/InitDCDBInstancesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/InitDCDBInstancesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/IsolateDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/IsolateDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/IsolateDedicatedDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/IsolateDedicatedDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/IsolateHourDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/IsolateHourDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/KillSessionRequest.h>
#include <tencentcloud/dcdb/v20180411/model/KillSessionResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyAccountConfigRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyAccountConfigResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyAccountDescriptionRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyAccountDescriptionResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyAccountPrivilegesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyAccountPrivilegesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBEncryptAttributesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBEncryptAttributesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBInstanceNameRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBInstanceNameResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBInstancesProjectRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBInstancesProjectResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBParametersRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBParametersResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBSyncModeRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBSyncModeResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyInstanceNetworkRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyInstanceNetworkResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyInstanceVipRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyInstanceVipResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyInstanceVportRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyInstanceVportResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ResetAccountPasswordResponse.h>
#include <tencentcloud/dcdb/v20180411/model/SwitchDBInstanceHARequest.h>
#include <tencentcloud/dcdb/v20180411/model/SwitchDBInstanceHAResponse.h>
#include <tencentcloud/dcdb/v20180411/model/TerminateDedicatedDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/TerminateDedicatedDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/UpgradeDedicatedDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/UpgradeDedicatedDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/UpgradeHourDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/UpgradeHourDCDBInstanceResponse.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            class DcdbClient : public AbstractClient
            {
            public:
                DcdbClient(const Credential &credential, const std::string &region);
                DcdbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ActiveHourDCDBInstanceResponse> ActiveHourDCDBInstanceOutcome;
                typedef std::future<ActiveHourDCDBInstanceOutcome> ActiveHourDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ActiveHourDCDBInstanceRequest&, ActiveHourDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ActiveHourDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateSecurityGroupsResponse> AssociateSecurityGroupsOutcome;
                typedef std::future<AssociateSecurityGroupsOutcome> AssociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::AssociateSecurityGroupsRequest&, AssociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelDcnJobResponse> CancelDcnJobOutcome;
                typedef std::future<CancelDcnJobOutcome> CancelDcnJobOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CancelDcnJobRequest&, CancelDcnJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelDcnJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CloneAccountResponse> CloneAccountOutcome;
                typedef std::future<CloneAccountOutcome> CloneAccountOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CloneAccountRequest&, CloneAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseDBExtranetAccessResponse> CloseDBExtranetAccessOutcome;
                typedef std::future<CloseDBExtranetAccessOutcome> CloseDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CloseDBExtranetAccessRequest&, CloseDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseDBExtranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyAccountPrivilegesResponse> CopyAccountPrivilegesOutcome;
                typedef std::future<CopyAccountPrivilegesOutcome> CopyAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CopyAccountPrivilegesRequest&, CopyAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccountResponse> CreateAccountOutcome;
                typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CreateAccountRequest&, CreateAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDCDBInstanceResponse> CreateDCDBInstanceOutcome;
                typedef std::future<CreateDCDBInstanceOutcome> CreateDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CreateDCDBInstanceRequest&, CreateDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDedicatedClusterDCDBInstanceResponse> CreateDedicatedClusterDCDBInstanceOutcome;
                typedef std::future<CreateDedicatedClusterDCDBInstanceOutcome> CreateDedicatedClusterDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CreateDedicatedClusterDCDBInstanceRequest&, CreateDedicatedClusterDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDedicatedClusterDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHourDCDBInstanceResponse> CreateHourDCDBInstanceOutcome;
                typedef std::future<CreateHourDCDBInstanceOutcome> CreateHourDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CreateHourDCDBInstanceRequest&, CreateHourDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHourDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOnlineDDLJobResponse> CreateOnlineDDLJobOutcome;
                typedef std::future<CreateOnlineDDLJobOutcome> CreateOnlineDDLJobOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CreateOnlineDDLJobRequest&, CreateOnlineDDLJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOnlineDDLJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccountResponse> DeleteAccountOutcome;
                typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DeleteAccountRequest&, DeleteAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountPrivilegesResponse> DescribeAccountPrivilegesOutcome;
                typedef std::future<DescribeAccountPrivilegesOutcome> DescribeAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeAccountPrivilegesRequest&, DescribeAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupFilesResponse> DescribeBackupFilesOutcome;
                typedef std::future<DescribeBackupFilesOutcome> DescribeBackupFilesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeBackupFilesRequest&, DescribeBackupFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBEncryptAttributesResponse> DescribeDBEncryptAttributesOutcome;
                typedef std::future<DescribeDBEncryptAttributesOutcome> DescribeDBEncryptAttributesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDBEncryptAttributesRequest&, DescribeDBEncryptAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBEncryptAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBLogFilesResponse> DescribeDBLogFilesOutcome;
                typedef std::future<DescribeDBLogFilesOutcome> DescribeDBLogFilesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDBLogFilesRequest&, DescribeDBLogFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBLogFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBParametersResponse> DescribeDBParametersOutcome;
                typedef std::future<DescribeDBParametersOutcome> DescribeDBParametersOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDBParametersRequest&, DescribeDBParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSecurityGroupsResponse> DescribeDBSecurityGroupsOutcome;
                typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDBSecurityGroupsRequest&, DescribeDBSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSlowLogsResponse> DescribeDBSlowLogsOutcome;
                typedef std::future<DescribeDBSlowLogsOutcome> DescribeDBSlowLogsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDBSlowLogsRequest&, DescribeDBSlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSyncModeResponse> DescribeDBSyncModeOutcome;
                typedef std::future<DescribeDBSyncModeOutcome> DescribeDBSyncModeOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDBSyncModeRequest&, DescribeDBSyncModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSyncModeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBTmpInstancesResponse> DescribeDBTmpInstancesOutcome;
                typedef std::future<DescribeDBTmpInstancesOutcome> DescribeDBTmpInstancesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDBTmpInstancesRequest&, DescribeDBTmpInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBTmpInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDCDBInstanceDetailResponse> DescribeDCDBInstanceDetailOutcome;
                typedef std::future<DescribeDCDBInstanceDetailOutcome> DescribeDCDBInstanceDetailOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDCDBInstanceDetailRequest&, DescribeDCDBInstanceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDCDBInstanceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDCDBInstanceNodeInfoResponse> DescribeDCDBInstanceNodeInfoOutcome;
                typedef std::future<DescribeDCDBInstanceNodeInfoOutcome> DescribeDCDBInstanceNodeInfoOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDCDBInstanceNodeInfoRequest&, DescribeDCDBInstanceNodeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDCDBInstanceNodeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDCDBInstancesResponse> DescribeDCDBInstancesOutcome;
                typedef std::future<DescribeDCDBInstancesOutcome> DescribeDCDBInstancesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDCDBInstancesRequest&, DescribeDCDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDCDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDCDBPriceResponse> DescribeDCDBPriceOutcome;
                typedef std::future<DescribeDCDBPriceOutcome> DescribeDCDBPriceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDCDBPriceRequest&, DescribeDCDBPriceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDCDBPriceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDCDBShardsResponse> DescribeDCDBShardsOutcome;
                typedef std::future<DescribeDCDBShardsOutcome> DescribeDCDBShardsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDCDBShardsRequest&, DescribeDCDBShardsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDCDBShardsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseObjectsResponse> DescribeDatabaseObjectsOutcome;
                typedef std::future<DescribeDatabaseObjectsOutcome> DescribeDatabaseObjectsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDatabaseObjectsRequest&, DescribeDatabaseObjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseObjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseTableResponse> DescribeDatabaseTableOutcome;
                typedef std::future<DescribeDatabaseTableOutcome> DescribeDatabaseTableOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDatabaseTableRequest&, DescribeDatabaseTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabasesResponse> DescribeDatabasesOutcome;
                typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDatabasesRequest&, DescribeDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDcnDetailResponse> DescribeDcnDetailOutcome;
                typedef std::future<DescribeDcnDetailOutcome> DescribeDcnDetailOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDcnDetailRequest&, DescribeDcnDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcnDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileDownloadUrlResponse> DescribeFileDownloadUrlOutcome;
                typedef std::future<DescribeFileDownloadUrlOutcome> DescribeFileDownloadUrlOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeFileDownloadUrlRequest&, DescribeFileDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileDownloadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowResponse> DescribeFlowOutcome;
                typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeFlowRequest&, DescribeFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogFileRetentionPeriodResponse> DescribeLogFileRetentionPeriodOutcome;
                typedef std::future<DescribeLogFileRetentionPeriodOutcome> DescribeLogFileRetentionPeriodOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeLogFileRetentionPeriodRequest&, DescribeLogFileRetentionPeriodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogFileRetentionPeriodAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrdersResponse> DescribeOrdersOutcome;
                typedef std::future<DescribeOrdersOutcome> DescribeOrdersOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeOrdersRequest&, DescribeOrdersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrdersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectSecurityGroupsResponse> DescribeProjectSecurityGroupsOutcome;
                typedef std::future<DescribeProjectSecurityGroupsOutcome> DescribeProjectSecurityGroupsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeProjectSecurityGroupsRequest&, DescribeProjectSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyDCDBInstanceResponse> DestroyDCDBInstanceOutcome;
                typedef std::future<DestroyDCDBInstanceOutcome> DestroyDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DestroyDCDBInstanceRequest&, DestroyDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyHourDCDBInstanceResponse> DestroyHourDCDBInstanceOutcome;
                typedef std::future<DestroyHourDCDBInstanceOutcome> DestroyHourDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DestroyHourDCDBInstanceRequest&, DestroyHourDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyHourDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateSecurityGroupsResponse> DisassociateSecurityGroupsOutcome;
                typedef std::future<DisassociateSecurityGroupsOutcome> DisassociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DisassociateSecurityGroupsRequest&, DisassociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::GrantAccountPrivilegesResponse> GrantAccountPrivilegesOutcome;
                typedef std::future<GrantAccountPrivilegesOutcome> GrantAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::GrantAccountPrivilegesRequest&, GrantAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GrantAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::InitDCDBInstancesResponse> InitDCDBInstancesOutcome;
                typedef std::future<InitDCDBInstancesOutcome> InitDCDBInstancesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::InitDCDBInstancesRequest&, InitDCDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InitDCDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateDCDBInstanceResponse> IsolateDCDBInstanceOutcome;
                typedef std::future<IsolateDCDBInstanceOutcome> IsolateDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::IsolateDCDBInstanceRequest&, IsolateDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateDedicatedDBInstanceResponse> IsolateDedicatedDBInstanceOutcome;
                typedef std::future<IsolateDedicatedDBInstanceOutcome> IsolateDedicatedDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::IsolateDedicatedDBInstanceRequest&, IsolateDedicatedDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDedicatedDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateHourDCDBInstanceResponse> IsolateHourDCDBInstanceOutcome;
                typedef std::future<IsolateHourDCDBInstanceOutcome> IsolateHourDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::IsolateHourDCDBInstanceRequest&, IsolateHourDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateHourDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::KillSessionResponse> KillSessionOutcome;
                typedef std::future<KillSessionOutcome> KillSessionOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::KillSessionRequest&, KillSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountConfigResponse> ModifyAccountConfigOutcome;
                typedef std::future<ModifyAccountConfigOutcome> ModifyAccountConfigOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyAccountConfigRequest&, ModifyAccountConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountDescriptionResponse> ModifyAccountDescriptionOutcome;
                typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyAccountDescriptionRequest&, ModifyAccountDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountPrivilegesResponse> ModifyAccountPrivilegesOutcome;
                typedef std::future<ModifyAccountPrivilegesOutcome> ModifyAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyAccountPrivilegesRequest&, ModifyAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBEncryptAttributesResponse> ModifyDBEncryptAttributesOutcome;
                typedef std::future<ModifyDBEncryptAttributesOutcome> ModifyDBEncryptAttributesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyDBEncryptAttributesRequest&, ModifyDBEncryptAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBEncryptAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceNameResponse> ModifyDBInstanceNameOutcome;
                typedef std::future<ModifyDBInstanceNameOutcome> ModifyDBInstanceNameOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyDBInstanceNameRequest&, ModifyDBInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstancesProjectResponse> ModifyDBInstancesProjectOutcome;
                typedef std::future<ModifyDBInstancesProjectOutcome> ModifyDBInstancesProjectOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyDBInstancesProjectRequest&, ModifyDBInstancesProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstancesProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBParametersResponse> ModifyDBParametersOutcome;
                typedef std::future<ModifyDBParametersOutcome> ModifyDBParametersOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyDBParametersRequest&, ModifyDBParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBSyncModeResponse> ModifyDBSyncModeOutcome;
                typedef std::future<ModifyDBSyncModeOutcome> ModifyDBSyncModeOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyDBSyncModeRequest&, ModifyDBSyncModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBSyncModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceNetworkResponse> ModifyInstanceNetworkOutcome;
                typedef std::future<ModifyInstanceNetworkOutcome> ModifyInstanceNetworkOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyInstanceNetworkRequest&, ModifyInstanceNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNetworkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceVipResponse> ModifyInstanceVipOutcome;
                typedef std::future<ModifyInstanceVipOutcome> ModifyInstanceVipOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyInstanceVipRequest&, ModifyInstanceVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceVipAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceVportResponse> ModifyInstanceVportOutcome;
                typedef std::future<ModifyInstanceVportOutcome> ModifyInstanceVportOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyInstanceVportRequest&, ModifyInstanceVportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceVportAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAccountPasswordResponse> ResetAccountPasswordOutcome;
                typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ResetAccountPasswordRequest&, ResetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchDBInstanceHAResponse> SwitchDBInstanceHAOutcome;
                typedef std::future<SwitchDBInstanceHAOutcome> SwitchDBInstanceHAOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::SwitchDBInstanceHARequest&, SwitchDBInstanceHAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstanceHAAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateDedicatedDBInstanceResponse> TerminateDedicatedDBInstanceOutcome;
                typedef std::future<TerminateDedicatedDBInstanceOutcome> TerminateDedicatedDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::TerminateDedicatedDBInstanceRequest&, TerminateDedicatedDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateDedicatedDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDedicatedDCDBInstanceResponse> UpgradeDedicatedDCDBInstanceOutcome;
                typedef std::future<UpgradeDedicatedDCDBInstanceOutcome> UpgradeDedicatedDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::UpgradeDedicatedDCDBInstanceRequest&, UpgradeDedicatedDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDedicatedDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeHourDCDBInstanceResponse> UpgradeHourDCDBInstanceOutcome;
                typedef std::future<UpgradeHourDCDBInstanceOutcome> UpgradeHourDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::UpgradeHourDCDBInstanceRequest&, UpgradeHourDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeHourDCDBInstanceAsyncHandler;



                /**
                 *This API is used to remove a pay-as-you-go TDSQL instance from isolation.
                 * @param req ActiveHourDCDBInstanceRequest
                 * @return ActiveHourDCDBInstanceOutcome
                 */
                ActiveHourDCDBInstanceOutcome ActiveHourDCDBInstance(const Model::ActiveHourDCDBInstanceRequest &request);
                void ActiveHourDCDBInstanceAsync(const Model::ActiveHourDCDBInstanceRequest& request, const ActiveHourDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ActiveHourDCDBInstanceOutcomeCallable ActiveHourDCDBInstanceCallable(const Model::ActiveHourDCDBInstanceRequest& request);

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
Note: Accounts with the same username but different hosts are different accounts. Permissions can only be copied between accounts with the same `Readonly` attribute.
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
                 *This API is used to create a monthly subscribed TDSQL instance by passing in information such as instance specifications, database version number, and purchased duration.
                 * @param req CreateDCDBInstanceRequest
                 * @return CreateDCDBInstanceOutcome
                 */
                CreateDCDBInstanceOutcome CreateDCDBInstance(const Model::CreateDCDBInstanceRequest &request);
                void CreateDCDBInstanceAsync(const Model::CreateDCDBInstanceRequest& request, const CreateDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDCDBInstanceOutcomeCallable CreateDCDBInstanceCallable(const Model::CreateDCDBInstanceRequest& request);

                /**
                 *This API is used to create a dedicated TDSQL cluster instance.
                 * @param req CreateDedicatedClusterDCDBInstanceRequest
                 * @return CreateDedicatedClusterDCDBInstanceOutcome
                 */
                CreateDedicatedClusterDCDBInstanceOutcome CreateDedicatedClusterDCDBInstance(const Model::CreateDedicatedClusterDCDBInstanceRequest &request);
                void CreateDedicatedClusterDCDBInstanceAsync(const Model::CreateDedicatedClusterDCDBInstanceRequest& request, const CreateDedicatedClusterDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDedicatedClusterDCDBInstanceOutcomeCallable CreateDedicatedClusterDCDBInstanceCallable(const Model::CreateDedicatedClusterDCDBInstanceRequest& request);

                /**
                 *This API is used to create a pay-as-you-go TDSQL instance.
                 * @param req CreateHourDCDBInstanceRequest
                 * @return CreateHourDCDBInstanceOutcome
                 */
                CreateHourDCDBInstanceOutcome CreateHourDCDBInstance(const Model::CreateHourDCDBInstanceRequest &request);
                void CreateHourDCDBInstanceAsync(const Model::CreateHourDCDBInstanceRequest& request, const CreateHourDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHourDCDBInstanceOutcomeCallable CreateHourDCDBInstanceCallable(const Model::CreateHourDCDBInstanceRequest& request);

                /**
                 *This API is used to create an online DDL job.
                 * @param req CreateOnlineDDLJobRequest
                 * @return CreateOnlineDDLJobOutcome
                 */
                CreateOnlineDDLJobOutcome CreateOnlineDDLJob(const Model::CreateOnlineDDLJobRequest &request);
                void CreateOnlineDDLJobAsync(const Model::CreateOnlineDDLJobRequest& request, const CreateOnlineDDLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOnlineDDLJobOutcomeCallable CreateOnlineDDLJobCallable(const Model::CreateOnlineDDLJobRequest& request);

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
Note: Accounts with the same username but different hosts are considered as different accounts.
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
                 *This API is used to query the security group information of an instance.
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
                 *This API is used to query the sync mode of a TencentDB instance.
                 * @param req DescribeDBSyncModeRequest
                 * @return DescribeDBSyncModeOutcome
                 */
                DescribeDBSyncModeOutcome DescribeDBSyncMode(const Model::DescribeDBSyncModeRequest &request);
                void DescribeDBSyncModeAsync(const Model::DescribeDBSyncModeRequest& request, const DescribeDBSyncModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSyncModeOutcomeCallable DescribeDBSyncModeCallable(const Model::DescribeDBSyncModeRequest& request);

                /**
                 *This API is used to obtain a temp rollback instance.
                 * @param req DescribeDBTmpInstancesRequest
                 * @return DescribeDBTmpInstancesOutcome
                 */
                DescribeDBTmpInstancesOutcome DescribeDBTmpInstances(const Model::DescribeDBTmpInstancesRequest &request);
                void DescribeDBTmpInstancesAsync(const Model::DescribeDBTmpInstancesRequest& request, const DescribeDBTmpInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBTmpInstancesOutcomeCallable DescribeDBTmpInstancesCallable(const Model::DescribeDBTmpInstancesRequest& request);

                /**
                 *This API is used to get the details of a TDSQL instance.
                 * @param req DescribeDCDBInstanceDetailRequest
                 * @return DescribeDCDBInstanceDetailOutcome
                 */
                DescribeDCDBInstanceDetailOutcome DescribeDCDBInstanceDetail(const Model::DescribeDCDBInstanceDetailRequest &request);
                void DescribeDCDBInstanceDetailAsync(const Model::DescribeDCDBInstanceDetailRequest& request, const DescribeDCDBInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDCDBInstanceDetailOutcomeCallable DescribeDCDBInstanceDetailCallable(const Model::DescribeDCDBInstanceDetailRequest& request);

                /**
                 *This API is used to query the information of instance nodes.
                 * @param req DescribeDCDBInstanceNodeInfoRequest
                 * @return DescribeDCDBInstanceNodeInfoOutcome
                 */
                DescribeDCDBInstanceNodeInfoOutcome DescribeDCDBInstanceNodeInfo(const Model::DescribeDCDBInstanceNodeInfoRequest &request);
                void DescribeDCDBInstanceNodeInfoAsync(const Model::DescribeDCDBInstanceNodeInfoRequest& request, const DescribeDCDBInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDCDBInstanceNodeInfoOutcomeCallable DescribeDCDBInstanceNodeInfoCallable(const Model::DescribeDCDBInstanceNodeInfoRequest& request);

                /**
                 *This API is used to query the list of TencentDB instances. It supports filtering instances by project ID, instance ID, private network address, and instance name.
If no filter is specified, 10 instances will be returned by default. Up to 100 instances can be returned for a single request.
                 * @param req DescribeDCDBInstancesRequest
                 * @return DescribeDCDBInstancesOutcome
                 */
                DescribeDCDBInstancesOutcome DescribeDCDBInstances(const Model::DescribeDCDBInstancesRequest &request);
                void DescribeDCDBInstancesAsync(const Model::DescribeDCDBInstancesRequest& request, const DescribeDCDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDCDBInstancesOutcomeCallable DescribeDCDBInstancesCallable(const Model::DescribeDCDBInstancesRequest& request);

                /**
                 *This API is used to query the price of an instance before you purchase it.
                 * @param req DescribeDCDBPriceRequest
                 * @return DescribeDCDBPriceOutcome
                 */
                DescribeDCDBPriceOutcome DescribeDCDBPrice(const Model::DescribeDCDBPriceRequest &request);
                void DescribeDCDBPriceAsync(const Model::DescribeDCDBPriceRequest& request, const DescribeDCDBPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDCDBPriceOutcomeCallable DescribeDCDBPriceCallable(const Model::DescribeDCDBPriceRequest& request);

                /**
                 *This API is used to query the information of shards of a TencentDB instance.
                 * @param req DescribeDCDBShardsRequest
                 * @return DescribeDCDBShardsOutcome
                 */
                DescribeDCDBShardsOutcome DescribeDCDBShards(const Model::DescribeDCDBShardsRequest &request);
                void DescribeDCDBShardsAsync(const Model::DescribeDCDBShardsRequest& request, const DescribeDCDBShardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDCDBShardsOutcomeCallable DescribeDCDBShardsCallable(const Model::DescribeDCDBShardsRequest& request);

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
                 *This API is used to query task status.
                 * @param req DescribeFlowRequest
                 * @return DescribeFlowOutcome
                 */
                DescribeFlowOutcome DescribeFlow(const Model::DescribeFlowRequest &request);
                void DescribeFlowAsync(const Model::DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowOutcomeCallable DescribeFlowCallable(const Model::DescribeFlowRequest& request);

                /**
                 *This API is used to view the backup log retention days.
                 * @param req DescribeLogFileRetentionPeriodRequest
                 * @return DescribeLogFileRetentionPeriodOutcome
                 */
                DescribeLogFileRetentionPeriodOutcome DescribeLogFileRetentionPeriod(const Model::DescribeLogFileRetentionPeriodRequest &request);
                void DescribeLogFileRetentionPeriodAsync(const Model::DescribeLogFileRetentionPeriodRequest& request, const DescribeLogFileRetentionPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogFileRetentionPeriodOutcomeCallable DescribeLogFileRetentionPeriodCallable(const Model::DescribeLogFileRetentionPeriodRequest& request);

                /**
                 *This API is used to query TDSQL order information. You can pass in an order ID to query the TDSQL instance associated with the order and the corresponding task process ID.
                 * @param req DescribeOrdersRequest
                 * @return DescribeOrdersOutcome
                 */
                DescribeOrdersOutcome DescribeOrders(const Model::DescribeOrdersRequest &request);
                void DescribeOrdersAsync(const Model::DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrdersOutcomeCallable DescribeOrdersCallable(const Model::DescribeOrdersRequest& request);

                /**
                 *This API is used to query the security group details of a project.
                 * @param req DescribeProjectSecurityGroupsRequest
                 * @return DescribeProjectSecurityGroupsOutcome
                 */
                DescribeProjectSecurityGroupsOutcome DescribeProjectSecurityGroups(const Model::DescribeProjectSecurityGroupsRequest &request);
                void DescribeProjectSecurityGroupsAsync(const Model::DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectSecurityGroupsOutcomeCallable DescribeProjectSecurityGroupsCallable(const Model::DescribeProjectSecurityGroupsRequest& request);

                /**
                 *This API is used to terminate an isolated monthly subscribed TDSQL instance.
                 * @param req DestroyDCDBInstanceRequest
                 * @return DestroyDCDBInstanceOutcome
                 */
                DestroyDCDBInstanceOutcome DestroyDCDBInstance(const Model::DestroyDCDBInstanceRequest &request);
                void DestroyDCDBInstanceAsync(const Model::DestroyDCDBInstanceRequest& request, const DestroyDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyDCDBInstanceOutcomeCallable DestroyDCDBInstanceCallable(const Model::DestroyDCDBInstanceRequest& request);

                /**
                 *This API is used to terminate a pay-as-you-go TDSQL instance.
                 * @param req DestroyHourDCDBInstanceRequest
                 * @return DestroyHourDCDBInstanceOutcome
                 */
                DestroyHourDCDBInstanceOutcome DestroyHourDCDBInstance(const Model::DestroyHourDCDBInstanceRequest &request);
                void DestroyHourDCDBInstanceAsync(const Model::DestroyHourDCDBInstanceRequest& request, const DestroyHourDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyHourDCDBInstanceOutcomeCallable DestroyHourDCDBInstanceCallable(const Model::DestroyHourDCDBInstanceRequest& request);

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
                 *This API is used to initialize instances, including setting the default character set and table name case sensitivity.
                 * @param req InitDCDBInstancesRequest
                 * @return InitDCDBInstancesOutcome
                 */
                InitDCDBInstancesOutcome InitDCDBInstances(const Model::InitDCDBInstancesRequest &request);
                void InitDCDBInstancesAsync(const Model::InitDCDBInstancesRequest& request, const InitDCDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InitDCDBInstancesOutcomeCallable InitDCDBInstancesCallable(const Model::InitDCDBInstancesRequest& request);

                /**
                 *This API is used to isolate a monthly subscribed TDSQL instance, which will no longer be accessible via IP and port.  The isolated instance can be started up in the recycle bin.  If it is isolated due to overdue payments, top up your account as soon as possible.
                 * @param req IsolateDCDBInstanceRequest
                 * @return IsolateDCDBInstanceOutcome
                 */
                IsolateDCDBInstanceOutcome IsolateDCDBInstance(const Model::IsolateDCDBInstanceRequest &request);
                void IsolateDCDBInstanceAsync(const Model::IsolateDCDBInstanceRequest& request, const IsolateDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDCDBInstanceOutcomeCallable IsolateDCDBInstanceCallable(const Model::IsolateDCDBInstanceRequest& request);

                /**
                 *This API is used to isolate a dedicated TencentDB instance.
                 * @param req IsolateDedicatedDBInstanceRequest
                 * @return IsolateDedicatedDBInstanceOutcome
                 */
                IsolateDedicatedDBInstanceOutcome IsolateDedicatedDBInstance(const Model::IsolateDedicatedDBInstanceRequest &request);
                void IsolateDedicatedDBInstanceAsync(const Model::IsolateDedicatedDBInstanceRequest& request, const IsolateDedicatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDedicatedDBInstanceOutcomeCallable IsolateDedicatedDBInstanceCallable(const Model::IsolateDedicatedDBInstanceRequest& request);

                /**
                 *This API is used to isolate a pay-as-you-go TDSQL instance.
                 * @param req IsolateHourDCDBInstanceRequest
                 * @return IsolateHourDCDBInstanceOutcome
                 */
                IsolateHourDCDBInstanceOutcome IsolateHourDCDBInstance(const Model::IsolateHourDCDBInstanceRequest &request);
                void IsolateHourDCDBInstanceAsync(const Model::IsolateHourDCDBInstanceRequest& request, const IsolateHourDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateHourDCDBInstanceOutcomeCallable IsolateHourDCDBInstanceCallable(const Model::IsolateHourDCDBInstanceRequest& request);

                /**
                 *This API is used to kill the specified session.
                 * @param req KillSessionRequest
                 * @return KillSessionOutcome
                 */
                KillSessionOutcome KillSession(const Model::KillSessionRequest &request);
                void KillSessionAsync(const Model::KillSessionRequest& request, const KillSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillSessionOutcomeCallable KillSessionCallable(const Model::KillSessionRequest& request);

                /**
                 *This API is used to modify the configurations of an account, such as `max_user_connections`.
                 * @param req ModifyAccountConfigRequest
                 * @return ModifyAccountConfigOutcome
                 */
                ModifyAccountConfigOutcome ModifyAccountConfig(const Model::ModifyAccountConfigRequest &request);
                void ModifyAccountConfigAsync(const Model::ModifyAccountConfigRequest& request, const ModifyAccountConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountConfigOutcomeCallable ModifyAccountConfigCallable(const Model::ModifyAccountConfigRequest& request);

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
                 *This API is used to modify the permissions of a TencentDB instance account. \n\n**Note**\n-Only the SELECT permission (that is, set the permission parameter to `["SELECT"]`) of the system database `mysql` can be granted. An error will be reported if read-write permissions are granted to a read-only account. If the parameter is not passed in, no change will be made to the granted table permissions. To clear the granted view permissions, set `Privileges` to an empty array.
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
                 *This API is used to modify instance name.
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
                 *This API is used to reset the password of a TencentDB account.
Note: accounts with the same username but different hosts are different accounts.
                 * @param req ResetAccountPasswordRequest
                 * @return ResetAccountPasswordOutcome
                 */
                ResetAccountPasswordOutcome ResetAccountPassword(const Model::ResetAccountPasswordRequest &request);
                void ResetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAccountPasswordOutcomeCallable ResetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request);

                /**
                 *This API is used to start a source-replica switch of instances.
                 * @param req SwitchDBInstanceHARequest
                 * @return SwitchDBInstanceHAOutcome
                 */
                SwitchDBInstanceHAOutcome SwitchDBInstanceHA(const Model::SwitchDBInstanceHARequest &request);
                void SwitchDBInstanceHAAsync(const Model::SwitchDBInstanceHARequest& request, const SwitchDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchDBInstanceHAOutcomeCallable SwitchDBInstanceHACallable(const Model::SwitchDBInstanceHARequest& request);

                /**
                 *This API is used to terminate the isolated dedicated TDSQL instance.
                 * @param req TerminateDedicatedDBInstanceRequest
                 * @return TerminateDedicatedDBInstanceOutcome
                 */
                TerminateDedicatedDBInstanceOutcome TerminateDedicatedDBInstance(const Model::TerminateDedicatedDBInstanceRequest &request);
                void TerminateDedicatedDBInstanceAsync(const Model::TerminateDedicatedDBInstanceRequest& request, const TerminateDedicatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateDedicatedDBInstanceOutcomeCallable TerminateDedicatedDBInstanceCallable(const Model::TerminateDedicatedDBInstanceRequest& request);

                /**
                 *This API is used to upgrade a dedicated TDSQL cluster instance.
                 * @param req UpgradeDedicatedDCDBInstanceRequest
                 * @return UpgradeDedicatedDCDBInstanceOutcome
                 */
                UpgradeDedicatedDCDBInstanceOutcome UpgradeDedicatedDCDBInstance(const Model::UpgradeDedicatedDCDBInstanceRequest &request);
                void UpgradeDedicatedDCDBInstanceAsync(const Model::UpgradeDedicatedDCDBInstanceRequest& request, const UpgradeDedicatedDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDedicatedDCDBInstanceOutcomeCallable UpgradeDedicatedDCDBInstanceCallable(const Model::UpgradeDedicatedDCDBInstanceRequest& request);

                /**
                 *This API is used to upgrade a pay-as-you-go TDSQL instance.
                 * @param req UpgradeHourDCDBInstanceRequest
                 * @return UpgradeHourDCDBInstanceOutcome
                 */
                UpgradeHourDCDBInstanceOutcome UpgradeHourDCDBInstance(const Model::UpgradeHourDCDBInstanceRequest &request);
                void UpgradeHourDCDBInstanceAsync(const Model::UpgradeHourDCDBInstanceRequest& request, const UpgradeHourDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeHourDCDBInstanceOutcomeCallable UpgradeHourDCDBInstanceCallable(const Model::UpgradeHourDCDBInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_DCDBCLIENT_H_
