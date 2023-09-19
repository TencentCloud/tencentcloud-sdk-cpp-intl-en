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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_SQLSERVERCLIENT_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_SQLSERVERCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/sqlserver/v20180328/model/CloneDBRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CloneDBResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CloseInterCommunicationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CloseInterCommunicationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateAccountRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateAccountResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBackupRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBackupResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBackupMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBackupMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBusinessDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBusinessDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBusinessIntelligenceFileRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBusinessIntelligenceFileResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateCloudDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateCloudDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateCloudReadOnlyDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateCloudReadOnlyDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateDBRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateDBResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateIncrementalMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateIncrementalMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteAccountRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteAccountResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteBackupMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteBackupMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteBusinessIntelligenceFileRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteBusinessIntelligenceFileResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteDBRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteDBResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteIncrementalMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteIncrementalMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeAccountsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeAccountsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupCommandRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupCommandResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupFilesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupFilesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupUploadSizeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupUploadSizeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBusinessIntelligenceFileRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBusinessIntelligenceFileResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBCharsetsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBCharsetsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstanceInterRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstanceInterResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstancesAttributeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstancesAttributeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBsNormalRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBsNormalResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeFlowStatusRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeFlowStatusResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeIncrementalMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeIncrementalMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceByOrdersRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceByOrdersResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceParamRecordsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceParamRecordsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceParamsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceParamsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeMigrationDetailRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeMigrationDetailResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeMigrationsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeMigrationsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeOrdersRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeOrdersResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeProductConfigRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeProductConfigResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeRegionsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeRegionsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeRollbackTimeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeRollbackTimeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeSlowlogsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeSlowlogsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeUploadBackupInfoRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeUploadBackupInfoResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeXEventsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeXEventsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeZonesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeZonesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/InquiryPriceCreateDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/InquiryPriceCreateDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/InquiryPriceUpgradeDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/InquiryPriceUpgradeDBInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyAccountPrivilegeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyAccountPrivilegeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyAccountRemarkRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyAccountRemarkResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupStrategyRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupStrategyResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBEncryptAttributesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBEncryptAttributesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNameRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNameResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNetworkRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNetworkResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceProjectRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceProjectResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBNameRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBNameResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBRemarkRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBRemarkResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseCDCRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseCDCResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseCTRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseCTResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseMdfRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseMdfResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyIncrementalMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyIncrementalMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyInstanceEncryptAttributesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyInstanceEncryptAttributesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyInstanceParamRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyInstanceParamResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/OpenInterCommunicationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/OpenInterCommunicationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RecycleDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RecycleDBInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ResetAccountPasswordResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RestartDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RestartDBInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RestoreInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RestoreInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RollbackInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RollbackInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RunMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RunMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/StartBackupMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/StartBackupMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/StartIncrementalMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/StartIncrementalMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/StartInstanceXEventRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/StartInstanceXEventResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/TerminateDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/TerminateDBInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/UpgradeDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/UpgradeDBInstanceResponse.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            class SqlserverClient : public AbstractClient
            {
            public:
                SqlserverClient(const Credential &credential, const std::string &region);
                SqlserverClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CloneDBResponse> CloneDBOutcome;
                typedef std::future<CloneDBOutcome> CloneDBOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CloneDBRequest&, CloneDBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneDBAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseInterCommunicationResponse> CloseInterCommunicationOutcome;
                typedef std::future<CloseInterCommunicationOutcome> CloseInterCommunicationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CloseInterCommunicationRequest&, CloseInterCommunicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseInterCommunicationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccountResponse> CreateAccountOutcome;
                typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateAccountRequest&, CreateAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupResponse> CreateBackupOutcome;
                typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateBackupRequest&, CreateBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupMigrationResponse> CreateBackupMigrationOutcome;
                typedef std::future<CreateBackupMigrationOutcome> CreateBackupMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateBackupMigrationRequest&, CreateBackupMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBusinessDBInstancesResponse> CreateBusinessDBInstancesOutcome;
                typedef std::future<CreateBusinessDBInstancesOutcome> CreateBusinessDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateBusinessDBInstancesRequest&, CreateBusinessDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBusinessDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBusinessIntelligenceFileResponse> CreateBusinessIntelligenceFileOutcome;
                typedef std::future<CreateBusinessIntelligenceFileOutcome> CreateBusinessIntelligenceFileOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateBusinessIntelligenceFileRequest&, CreateBusinessIntelligenceFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBusinessIntelligenceFileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudDBInstancesResponse> CreateCloudDBInstancesOutcome;
                typedef std::future<CreateCloudDBInstancesOutcome> CreateCloudDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateCloudDBInstancesRequest&, CreateCloudDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudReadOnlyDBInstancesResponse> CreateCloudReadOnlyDBInstancesOutcome;
                typedef std::future<CreateCloudReadOnlyDBInstancesOutcome> CreateCloudReadOnlyDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateCloudReadOnlyDBInstancesRequest&, CreateCloudReadOnlyDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudReadOnlyDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBResponse> CreateDBOutcome;
                typedef std::future<CreateDBOutcome> CreateDBOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateDBRequest&, CreateDBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBInstancesResponse> CreateDBInstancesOutcome;
                typedef std::future<CreateDBInstancesOutcome> CreateDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateDBInstancesRequest&, CreateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIncrementalMigrationResponse> CreateIncrementalMigrationOutcome;
                typedef std::future<CreateIncrementalMigrationOutcome> CreateIncrementalMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateIncrementalMigrationRequest&, CreateIncrementalMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIncrementalMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMigrationResponse> CreateMigrationOutcome;
                typedef std::future<CreateMigrationOutcome> CreateMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateMigrationRequest&, CreateMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccountResponse> DeleteAccountOutcome;
                typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteAccountRequest&, DeleteAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBackupMigrationResponse> DeleteBackupMigrationOutcome;
                typedef std::future<DeleteBackupMigrationOutcome> DeleteBackupMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteBackupMigrationRequest&, DeleteBackupMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBusinessIntelligenceFileResponse> DeleteBusinessIntelligenceFileOutcome;
                typedef std::future<DeleteBusinessIntelligenceFileOutcome> DeleteBusinessIntelligenceFileOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteBusinessIntelligenceFileRequest&, DeleteBusinessIntelligenceFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBusinessIntelligenceFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDBResponse> DeleteDBOutcome;
                typedef std::future<DeleteDBOutcome> DeleteDBOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteDBRequest&, DeleteDBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIncrementalMigrationResponse> DeleteIncrementalMigrationOutcome;
                typedef std::future<DeleteIncrementalMigrationOutcome> DeleteIncrementalMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteIncrementalMigrationRequest&, DeleteIncrementalMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIncrementalMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMigrationResponse> DeleteMigrationOutcome;
                typedef std::future<DeleteMigrationOutcome> DeleteMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteMigrationRequest&, DeleteMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupCommandResponse> DescribeBackupCommandOutcome;
                typedef std::future<DescribeBackupCommandOutcome> DescribeBackupCommandOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupCommandRequest&, DescribeBackupCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupFilesResponse> DescribeBackupFilesOutcome;
                typedef std::future<DescribeBackupFilesOutcome> DescribeBackupFilesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupFilesRequest&, DescribeBackupFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupMigrationResponse> DescribeBackupMigrationOutcome;
                typedef std::future<DescribeBackupMigrationOutcome> DescribeBackupMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupMigrationRequest&, DescribeBackupMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupUploadSizeResponse> DescribeBackupUploadSizeOutcome;
                typedef std::future<DescribeBackupUploadSizeOutcome> DescribeBackupUploadSizeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupUploadSizeRequest&, DescribeBackupUploadSizeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupUploadSizeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupsResponse> DescribeBackupsOutcome;
                typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupsRequest&, DescribeBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBusinessIntelligenceFileResponse> DescribeBusinessIntelligenceFileOutcome;
                typedef std::future<DescribeBusinessIntelligenceFileOutcome> DescribeBusinessIntelligenceFileOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBusinessIntelligenceFileRequest&, DescribeBusinessIntelligenceFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBusinessIntelligenceFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBCharsetsResponse> DescribeDBCharsetsOutcome;
                typedef std::future<DescribeDBCharsetsOutcome> DescribeDBCharsetsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBCharsetsRequest&, DescribeDBCharsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBCharsetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceInterResponse> DescribeDBInstanceInterOutcome;
                typedef std::future<DescribeDBInstanceInterOutcome> DescribeDBInstanceInterOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBInstanceInterRequest&, DescribeDBInstanceInterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceInterAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstancesAttributeResponse> DescribeDBInstancesAttributeOutcome;
                typedef std::future<DescribeDBInstancesAttributeOutcome> DescribeDBInstancesAttributeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBInstancesAttributeRequest&, DescribeDBInstancesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBsResponse> DescribeDBsOutcome;
                typedef std::future<DescribeDBsOutcome> DescribeDBsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBsRequest&, DescribeDBsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBsNormalResponse> DescribeDBsNormalOutcome;
                typedef std::future<DescribeDBsNormalOutcome> DescribeDBsNormalOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBsNormalRequest&, DescribeDBsNormalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBsNormalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowStatusResponse> DescribeFlowStatusOutcome;
                typedef std::future<DescribeFlowStatusOutcome> DescribeFlowStatusOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeFlowStatusRequest&, DescribeFlowStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIncrementalMigrationResponse> DescribeIncrementalMigrationOutcome;
                typedef std::future<DescribeIncrementalMigrationOutcome> DescribeIncrementalMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeIncrementalMigrationRequest&, DescribeIncrementalMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIncrementalMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceByOrdersResponse> DescribeInstanceByOrdersOutcome;
                typedef std::future<DescribeInstanceByOrdersOutcome> DescribeInstanceByOrdersOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeInstanceByOrdersRequest&, DescribeInstanceByOrdersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceByOrdersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceParamRecordsResponse> DescribeInstanceParamRecordsOutcome;
                typedef std::future<DescribeInstanceParamRecordsOutcome> DescribeInstanceParamRecordsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeInstanceParamRecordsRequest&, DescribeInstanceParamRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceParamsResponse> DescribeInstanceParamsOutcome;
                typedef std::future<DescribeInstanceParamsOutcome> DescribeInstanceParamsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeInstanceParamsRequest&, DescribeInstanceParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrationDetailResponse> DescribeMigrationDetailOutcome;
                typedef std::future<DescribeMigrationDetailOutcome> DescribeMigrationDetailOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeMigrationDetailRequest&, DescribeMigrationDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrationsResponse> DescribeMigrationsOutcome;
                typedef std::future<DescribeMigrationsOutcome> DescribeMigrationsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeMigrationsRequest&, DescribeMigrationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrdersResponse> DescribeOrdersOutcome;
                typedef std::future<DescribeOrdersOutcome> DescribeOrdersOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeOrdersRequest&, DescribeOrdersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrdersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductConfigResponse> DescribeProductConfigOutcome;
                typedef std::future<DescribeProductConfigOutcome> DescribeProductConfigOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeProductConfigRequest&, DescribeProductConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRollbackTimeResponse> DescribeRollbackTimeOutcome;
                typedef std::future<DescribeRollbackTimeOutcome> DescribeRollbackTimeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeRollbackTimeRequest&, DescribeRollbackTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRollbackTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowlogsResponse> DescribeSlowlogsOutcome;
                typedef std::future<DescribeSlowlogsOutcome> DescribeSlowlogsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeSlowlogsRequest&, DescribeSlowlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowlogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUploadBackupInfoResponse> DescribeUploadBackupInfoOutcome;
                typedef std::future<DescribeUploadBackupInfoOutcome> DescribeUploadBackupInfoOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeUploadBackupInfoRequest&, DescribeUploadBackupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUploadBackupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeXEventsResponse> DescribeXEventsOutcome;
                typedef std::future<DescribeXEventsOutcome> DescribeXEventsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeXEventsRequest&, DescribeXEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeXEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceCreateDBInstancesResponse> InquiryPriceCreateDBInstancesOutcome;
                typedef std::future<InquiryPriceCreateDBInstancesOutcome> InquiryPriceCreateDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::InquiryPriceCreateDBInstancesRequest&, InquiryPriceCreateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceUpgradeDBInstanceResponse> InquiryPriceUpgradeDBInstanceOutcome;
                typedef std::future<InquiryPriceUpgradeDBInstanceOutcome> InquiryPriceUpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::InquiryPriceUpgradeDBInstanceRequest&, InquiryPriceUpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceUpgradeDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountPrivilegeResponse> ModifyAccountPrivilegeOutcome;
                typedef std::future<ModifyAccountPrivilegeOutcome> ModifyAccountPrivilegeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyAccountPrivilegeRequest&, ModifyAccountPrivilegeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPrivilegeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountRemarkResponse> ModifyAccountRemarkOutcome;
                typedef std::future<ModifyAccountRemarkOutcome> ModifyAccountRemarkOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyAccountRemarkRequest&, ModifyAccountRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupMigrationResponse> ModifyBackupMigrationOutcome;
                typedef std::future<ModifyBackupMigrationOutcome> ModifyBackupMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyBackupMigrationRequest&, ModifyBackupMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupStrategyResponse> ModifyBackupStrategyOutcome;
                typedef std::future<ModifyBackupStrategyOutcome> ModifyBackupStrategyOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyBackupStrategyRequest&, ModifyBackupStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBEncryptAttributesResponse> ModifyDBEncryptAttributesOutcome;
                typedef std::future<ModifyDBEncryptAttributesOutcome> ModifyDBEncryptAttributesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBEncryptAttributesRequest&, ModifyDBEncryptAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBEncryptAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceNameResponse> ModifyDBInstanceNameOutcome;
                typedef std::future<ModifyDBInstanceNameOutcome> ModifyDBInstanceNameOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBInstanceNameRequest&, ModifyDBInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceNetworkResponse> ModifyDBInstanceNetworkOutcome;
                typedef std::future<ModifyDBInstanceNetworkOutcome> ModifyDBInstanceNetworkOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBInstanceNetworkRequest&, ModifyDBInstanceNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNetworkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceProjectResponse> ModifyDBInstanceProjectOutcome;
                typedef std::future<ModifyDBInstanceProjectOutcome> ModifyDBInstanceProjectOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBInstanceProjectRequest&, ModifyDBInstanceProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBNameResponse> ModifyDBNameOutcome;
                typedef std::future<ModifyDBNameOutcome> ModifyDBNameOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBNameRequest&, ModifyDBNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBRemarkResponse> ModifyDBRemarkOutcome;
                typedef std::future<ModifyDBRemarkOutcome> ModifyDBRemarkOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBRemarkRequest&, ModifyDBRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatabaseCDCResponse> ModifyDatabaseCDCOutcome;
                typedef std::future<ModifyDatabaseCDCOutcome> ModifyDatabaseCDCOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDatabaseCDCRequest&, ModifyDatabaseCDCOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseCDCAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatabaseCTResponse> ModifyDatabaseCTOutcome;
                typedef std::future<ModifyDatabaseCTOutcome> ModifyDatabaseCTOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDatabaseCTRequest&, ModifyDatabaseCTOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseCTAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatabaseMdfResponse> ModifyDatabaseMdfOutcome;
                typedef std::future<ModifyDatabaseMdfOutcome> ModifyDatabaseMdfOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDatabaseMdfRequest&, ModifyDatabaseMdfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseMdfAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIncrementalMigrationResponse> ModifyIncrementalMigrationOutcome;
                typedef std::future<ModifyIncrementalMigrationOutcome> ModifyIncrementalMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyIncrementalMigrationRequest&, ModifyIncrementalMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIncrementalMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceEncryptAttributesResponse> ModifyInstanceEncryptAttributesOutcome;
                typedef std::future<ModifyInstanceEncryptAttributesOutcome> ModifyInstanceEncryptAttributesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyInstanceEncryptAttributesRequest&, ModifyInstanceEncryptAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceEncryptAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceParamResponse> ModifyInstanceParamOutcome;
                typedef std::future<ModifyInstanceParamOutcome> ModifyInstanceParamOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyInstanceParamRequest&, ModifyInstanceParamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceParamAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMigrationResponse> ModifyMigrationOutcome;
                typedef std::future<ModifyMigrationOutcome> ModifyMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyMigrationRequest&, ModifyMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenInterCommunicationResponse> OpenInterCommunicationOutcome;
                typedef std::future<OpenInterCommunicationOutcome> OpenInterCommunicationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::OpenInterCommunicationRequest&, OpenInterCommunicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenInterCommunicationAsyncHandler;
                typedef Outcome<Core::Error, Model::RecycleDBInstanceResponse> RecycleDBInstanceOutcome;
                typedef std::future<RecycleDBInstanceOutcome> RecycleDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RecycleDBInstanceRequest&, RecycleDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecycleDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAccountPasswordResponse> ResetAccountPasswordOutcome;
                typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ResetAccountPasswordRequest&, ResetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartDBInstanceResponse> RestartDBInstanceOutcome;
                typedef std::future<RestartDBInstanceOutcome> RestartDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RestartDBInstanceRequest&, RestartDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RestoreInstanceResponse> RestoreInstanceOutcome;
                typedef std::future<RestoreInstanceOutcome> RestoreInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RestoreInstanceRequest&, RestoreInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestoreInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackInstanceResponse> RollbackInstanceOutcome;
                typedef std::future<RollbackInstanceOutcome> RollbackInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RollbackInstanceRequest&, RollbackInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RunMigrationResponse> RunMigrationOutcome;
                typedef std::future<RunMigrationOutcome> RunMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RunMigrationRequest&, RunMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::StartBackupMigrationResponse> StartBackupMigrationOutcome;
                typedef std::future<StartBackupMigrationOutcome> StartBackupMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::StartBackupMigrationRequest&, StartBackupMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartBackupMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::StartIncrementalMigrationResponse> StartIncrementalMigrationOutcome;
                typedef std::future<StartIncrementalMigrationOutcome> StartIncrementalMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::StartIncrementalMigrationRequest&, StartIncrementalMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartIncrementalMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::StartInstanceXEventResponse> StartInstanceXEventOutcome;
                typedef std::future<StartInstanceXEventOutcome> StartInstanceXEventOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::StartInstanceXEventRequest&, StartInstanceXEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartInstanceXEventAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateDBInstanceResponse> TerminateDBInstanceOutcome;
                typedef std::future<TerminateDBInstanceOutcome> TerminateDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::TerminateDBInstanceRequest&, TerminateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDBInstanceResponse> UpgradeDBInstanceOutcome;
                typedef std::future<UpgradeDBInstanceOutcome> UpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::UpgradeDBInstanceRequest&, UpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceAsyncHandler;



                /**
                 *This API is used to clone and rename databases of an instance. The clones are still in the instance from which they are cloned.
                 * @param req CloneDBRequest
                 * @return CloneDBOutcome
                 */
                CloneDBOutcome CloneDB(const Model::CloneDBRequest &request);
                void CloneDBAsync(const Model::CloneDBRequest& request, const CloneDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneDBOutcomeCallable CloneDBCallable(const Model::CloneDBRequest& request);

                /**
                 *This API is used to disable instance interconnection.
                 * @param req CloseInterCommunicationRequest
                 * @return CloseInterCommunicationOutcome
                 */
                CloseInterCommunicationOutcome CloseInterCommunication(const Model::CloseInterCommunicationRequest &request);
                void CloseInterCommunicationAsync(const Model::CloseInterCommunicationRequest& request, const CloseInterCommunicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseInterCommunicationOutcomeCallable CloseInterCommunicationCallable(const Model::CloseInterCommunicationRequest& request);

                /**
                 *This API is used to create an instance account.
                 * @param req CreateAccountRequest
                 * @return CreateAccountOutcome
                 */
                CreateAccountOutcome CreateAccount(const Model::CreateAccountRequest &request);
                void CreateAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccountOutcomeCallable CreateAccountCallable(const Model::CreateAccountRequest& request);

                /**
                 *This API is used to create a backup.
                 * @param req CreateBackupRequest
                 * @return CreateBackupOutcome
                 */
                CreateBackupOutcome CreateBackup(const Model::CreateBackupRequest &request);
                void CreateBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupOutcomeCallable CreateBackupCallable(const Model::CreateBackupRequest& request);

                /**
                 *This API is used to create a backup import task.
                 * @param req CreateBackupMigrationRequest
                 * @return CreateBackupMigrationOutcome
                 */
                CreateBackupMigrationOutcome CreateBackupMigration(const Model::CreateBackupMigrationRequest &request);
                void CreateBackupMigrationAsync(const Model::CreateBackupMigrationRequest& request, const CreateBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupMigrationOutcomeCallable CreateBackupMigrationCallable(const Model::CreateBackupMigrationRequest& request);

                /**
                 *This API is used to create a business intelligence service instance.
                 * @param req CreateBusinessDBInstancesRequest
                 * @return CreateBusinessDBInstancesOutcome
                 */
                CreateBusinessDBInstancesOutcome CreateBusinessDBInstances(const Model::CreateBusinessDBInstancesRequest &request);
                void CreateBusinessDBInstancesAsync(const Model::CreateBusinessDBInstancesRequest& request, const CreateBusinessDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBusinessDBInstancesOutcomeCallable CreateBusinessDBInstancesCallable(const Model::CreateBusinessDBInstancesRequest& request);

                /**
                 *This API is used to add a business intelligence service file.
                 * @param req CreateBusinessIntelligenceFileRequest
                 * @return CreateBusinessIntelligenceFileOutcome
                 */
                CreateBusinessIntelligenceFileOutcome CreateBusinessIntelligenceFile(const Model::CreateBusinessIntelligenceFileRequest &request);
                void CreateBusinessIntelligenceFileAsync(const Model::CreateBusinessIntelligenceFileRequest& request, const CreateBusinessIntelligenceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBusinessIntelligenceFileOutcomeCallable CreateBusinessIntelligenceFileCallable(const Model::CreateBusinessIntelligenceFileRequest& request);

                /**
                 *This API is used to create a high-availability instance of cloud disk edition.
                 * @param req CreateCloudDBInstancesRequest
                 * @return CreateCloudDBInstancesOutcome
                 */
                CreateCloudDBInstancesOutcome CreateCloudDBInstances(const Model::CreateCloudDBInstancesRequest &request);
                void CreateCloudDBInstancesAsync(const Model::CreateCloudDBInstancesRequest& request, const CreateCloudDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudDBInstancesOutcomeCallable CreateCloudDBInstancesCallable(const Model::CreateCloudDBInstancesRequest& request);

                /**
                 *This API is used to add a read-only replica instance of cloud disk edition.
                 * @param req CreateCloudReadOnlyDBInstancesRequest
                 * @return CreateCloudReadOnlyDBInstancesOutcome
                 */
                CreateCloudReadOnlyDBInstancesOutcome CreateCloudReadOnlyDBInstances(const Model::CreateCloudReadOnlyDBInstancesRequest &request);
                void CreateCloudReadOnlyDBInstancesAsync(const Model::CreateCloudReadOnlyDBInstancesRequest& request, const CreateCloudReadOnlyDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudReadOnlyDBInstancesOutcomeCallable CreateCloudReadOnlyDBInstancesCallable(const Model::CreateCloudReadOnlyDBInstancesRequest& request);

                /**
                 *This API is used to create a database.
                 * @param req CreateDBRequest
                 * @return CreateDBOutcome
                 */
                CreateDBOutcome CreateDB(const Model::CreateDBRequest &request);
                void CreateDBAsync(const Model::CreateDBRequest& request, const CreateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBOutcomeCallable CreateDBCallable(const Model::CreateDBRequest& request);

                /**
                 *This API is used to create an instance.
                 * @param req CreateDBInstancesRequest
                 * @return CreateDBInstancesOutcome
                 */
                CreateDBInstancesOutcome CreateDBInstances(const Model::CreateDBInstancesRequest &request);
                void CreateDBInstancesAsync(const Model::CreateDBInstancesRequest& request, const CreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstancesOutcomeCallable CreateDBInstancesCallable(const Model::CreateDBInstancesRequest& request);

                /**
                 *This API is used to create an incremental backup import task.
                 * @param req CreateIncrementalMigrationRequest
                 * @return CreateIncrementalMigrationOutcome
                 */
                CreateIncrementalMigrationOutcome CreateIncrementalMigration(const Model::CreateIncrementalMigrationRequest &request);
                void CreateIncrementalMigrationAsync(const Model::CreateIncrementalMigrationRequest& request, const CreateIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIncrementalMigrationOutcomeCallable CreateIncrementalMigrationCallable(const Model::CreateIncrementalMigrationRequest& request);

                /**
                 *This API is used to create a migration task.
                 * @param req CreateMigrationRequest
                 * @return CreateMigrationOutcome
                 */
                CreateMigrationOutcome CreateMigration(const Model::CreateMigrationRequest &request);
                void CreateMigrationAsync(const Model::CreateMigrationRequest& request, const CreateMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMigrationOutcomeCallable CreateMigrationCallable(const Model::CreateMigrationRequest& request);

                /**
                 *This API is used to delete an instance account.
                 * @param req DeleteAccountRequest
                 * @return DeleteAccountOutcome
                 */
                DeleteAccountOutcome DeleteAccount(const Model::DeleteAccountRequest &request);
                void DeleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccountOutcomeCallable DeleteAccountCallable(const Model::DeleteAccountRequest& request);

                /**
                 *This API is used to delete a backup import task.
                 * @param req DeleteBackupMigrationRequest
                 * @return DeleteBackupMigrationOutcome
                 */
                DeleteBackupMigrationOutcome DeleteBackupMigration(const Model::DeleteBackupMigrationRequest &request);
                void DeleteBackupMigrationAsync(const Model::DeleteBackupMigrationRequest& request, const DeleteBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBackupMigrationOutcomeCallable DeleteBackupMigrationCallable(const Model::DeleteBackupMigrationRequest& request);

                /**
                 *This API is used to delete a business intelligence service file.
                 * @param req DeleteBusinessIntelligenceFileRequest
                 * @return DeleteBusinessIntelligenceFileOutcome
                 */
                DeleteBusinessIntelligenceFileOutcome DeleteBusinessIntelligenceFile(const Model::DeleteBusinessIntelligenceFileRequest &request);
                void DeleteBusinessIntelligenceFileAsync(const Model::DeleteBusinessIntelligenceFileRequest& request, const DeleteBusinessIntelligenceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBusinessIntelligenceFileOutcomeCallable DeleteBusinessIntelligenceFileCallable(const Model::DeleteBusinessIntelligenceFileRequest& request);

                /**
                 *This API is used to drop a database.
                 * @param req DeleteDBRequest
                 * @return DeleteDBOutcome
                 */
                DeleteDBOutcome DeleteDB(const Model::DeleteDBRequest &request);
                void DeleteDBAsync(const Model::DeleteDBRequest& request, const DeleteDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDBOutcomeCallable DeleteDBCallable(const Model::DeleteDBRequest& request);

                /**
                 *This API is used to delete an incremental backup import task.
                 * @param req DeleteIncrementalMigrationRequest
                 * @return DeleteIncrementalMigrationOutcome
                 */
                DeleteIncrementalMigrationOutcome DeleteIncrementalMigration(const Model::DeleteIncrementalMigrationRequest &request);
                void DeleteIncrementalMigrationAsync(const Model::DeleteIncrementalMigrationRequest& request, const DeleteIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIncrementalMigrationOutcomeCallable DeleteIncrementalMigrationCallable(const Model::DeleteIncrementalMigrationRequest& request);

                /**
                 *This API is used to delete a migration task.
                 * @param req DeleteMigrationRequest
                 * @return DeleteMigrationOutcome
                 */
                DeleteMigrationOutcome DeleteMigration(const Model::DeleteMigrationRequest &request);
                void DeleteMigrationAsync(const Model::DeleteMigrationRequest& request, const DeleteMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMigrationOutcomeCallable DeleteMigrationCallable(const Model::DeleteMigrationRequest& request);

                /**
                 *This API is used to pull the list of instance accounts.
                 * @param req DescribeAccountsRequest
                 * @return DescribeAccountsOutcome
                 */
                DescribeAccountsOutcome DescribeAccounts(const Model::DescribeAccountsRequest &request);
                void DescribeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountsOutcomeCallable DescribeAccountsCallable(const Model::DescribeAccountsRequest& request);

                /**
                 *This API is used to query the commands of creating backups canonically.
                 * @param req DescribeBackupCommandRequest
                 * @return DescribeBackupCommandOutcome
                 */
                DescribeBackupCommandOutcome DescribeBackupCommand(const Model::DescribeBackupCommandRequest &request);
                void DescribeBackupCommandAsync(const Model::DescribeBackupCommandRequest& request, const DescribeBackupCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupCommandOutcomeCallable DescribeBackupCommandCallable(const Model::DescribeBackupCommandRequest& request);

                /**
                 *This API is used to query the details of an unarchived backup.
                 * @param req DescribeBackupFilesRequest
                 * @return DescribeBackupFilesOutcome
                 */
                DescribeBackupFilesOutcome DescribeBackupFiles(const Model::DescribeBackupFilesRequest &request);
                void DescribeBackupFilesAsync(const Model::DescribeBackupFilesRequest& request, const DescribeBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupFilesOutcomeCallable DescribeBackupFilesCallable(const Model::DescribeBackupFilesRequest& request);

                /**
                 *This API is used to create an incremental backup import task.
                 * @param req DescribeBackupMigrationRequest
                 * @return DescribeBackupMigrationOutcome
                 */
                DescribeBackupMigrationOutcome DescribeBackupMigration(const Model::DescribeBackupMigrationRequest &request);
                void DescribeBackupMigrationAsync(const Model::DescribeBackupMigrationRequest& request, const DescribeBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupMigrationOutcomeCallable DescribeBackupMigrationCallable(const Model::DescribeBackupMigrationRequest& request);

                /**
                 *This API is used to query the size of uploaded backup files. It is valid if the backup file type is `COS_UPLOAD` (the file is stored in COS).
                 * @param req DescribeBackupUploadSizeRequest
                 * @return DescribeBackupUploadSizeOutcome
                 */
                DescribeBackupUploadSizeOutcome DescribeBackupUploadSize(const Model::DescribeBackupUploadSizeRequest &request);
                void DescribeBackupUploadSizeAsync(const Model::DescribeBackupUploadSizeRequest& request, const DescribeBackupUploadSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupUploadSizeOutcomeCallable DescribeBackupUploadSizeCallable(const Model::DescribeBackupUploadSizeRequest& request);

                /**
                 *This API is used to query the list of backups.
                 * @param req DescribeBackupsRequest
                 * @return DescribeBackupsOutcome
                 */
                DescribeBackupsOutcome DescribeBackups(const Model::DescribeBackupsRequest &request);
                void DescribeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupsOutcomeCallable DescribeBackupsCallable(const Model::DescribeBackupsRequest& request);

                /**
                 *This API is used to query the files required by business intelligence service.
                 * @param req DescribeBusinessIntelligenceFileRequest
                 * @return DescribeBusinessIntelligenceFileOutcome
                 */
                DescribeBusinessIntelligenceFileOutcome DescribeBusinessIntelligenceFile(const Model::DescribeBusinessIntelligenceFileRequest &request);
                void DescribeBusinessIntelligenceFileAsync(const Model::DescribeBusinessIntelligenceFileRequest& request, const DescribeBusinessIntelligenceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBusinessIntelligenceFileOutcomeCallable DescribeBusinessIntelligenceFileCallable(const Model::DescribeBusinessIntelligenceFileRequest& request);

                /**
                 *This API is used to query the database character sets supported by an instance.
                 * @param req DescribeDBCharsetsRequest
                 * @return DescribeDBCharsetsOutcome
                 */
                DescribeDBCharsetsOutcome DescribeDBCharsets(const Model::DescribeDBCharsetsRequest &request);
                void DescribeDBCharsetsAsync(const Model::DescribeDBCharsetsRequest& request, const DescribeDBCharsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBCharsetsOutcomeCallable DescribeDBCharsetsCallable(const Model::DescribeDBCharsetsRequest& request);

                /**
                 *This API is used to query the information of the interconnected instances.
                 * @param req DescribeDBInstanceInterRequest
                 * @return DescribeDBInstanceInterOutcome
                 */
                DescribeDBInstanceInterOutcome DescribeDBInstanceInter(const Model::DescribeDBInstanceInterRequest &request);
                void DescribeDBInstanceInterAsync(const Model::DescribeDBInstanceInterRequest& request, const DescribeDBInstanceInterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceInterOutcomeCallable DescribeDBInstanceInterCallable(const Model::DescribeDBInstanceInterRequest& request);

                /**
                 *This API is used to query the list of instances.
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *This API is used to query the attributes of an instance.
                 * @param req DescribeDBInstancesAttributeRequest
                 * @return DescribeDBInstancesAttributeOutcome
                 */
                DescribeDBInstancesAttributeOutcome DescribeDBInstancesAttribute(const Model::DescribeDBInstancesAttributeRequest &request);
                void DescribeDBInstancesAttributeAsync(const Model::DescribeDBInstancesAttributeRequest& request, const DescribeDBInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesAttributeOutcomeCallable DescribeDBInstancesAttributeCallable(const Model::DescribeDBInstancesAttributeRequest& request);

                /**
                 *This API is used to query the list of databases
                 * @param req DescribeDBsRequest
                 * @return DescribeDBsOutcome
                 */
                DescribeDBsOutcome DescribeDBs(const Model::DescribeDBsRequest &request);
                void DescribeDBsAsync(const Model::DescribeDBsRequest& request, const DescribeDBsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBsOutcomeCallable DescribeDBsCallable(const Model::DescribeDBsRequest& request);

                /**
                 *This API is used to query database configurations. It does not return information of the accounts that have permissions to operate the database.
                 * @param req DescribeDBsNormalRequest
                 * @return DescribeDBsNormalOutcome
                 */
                DescribeDBsNormalOutcome DescribeDBsNormal(const Model::DescribeDBsNormalRequest &request);
                void DescribeDBsNormalAsync(const Model::DescribeDBsNormalRequest& request, const DescribeDBsNormalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBsNormalOutcomeCallable DescribeDBsNormalCallable(const Model::DescribeDBsNormalRequest& request);

                /**
                 *This API is used to query flow status.
                 * @param req DescribeFlowStatusRequest
                 * @return DescribeFlowStatusOutcome
                 */
                DescribeFlowStatusOutcome DescribeFlowStatus(const Model::DescribeFlowStatusRequest &request);
                void DescribeFlowStatusAsync(const Model::DescribeFlowStatusRequest& request, const DescribeFlowStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowStatusOutcomeCallable DescribeFlowStatusCallable(const Model::DescribeFlowStatusRequest& request);

                /**
                 *This API is used to query an incremental backup import task.
                 * @param req DescribeIncrementalMigrationRequest
                 * @return DescribeIncrementalMigrationOutcome
                 */
                DescribeIncrementalMigrationOutcome DescribeIncrementalMigration(const Model::DescribeIncrementalMigrationRequest &request);
                void DescribeIncrementalMigrationAsync(const Model::DescribeIncrementalMigrationRequest& request, const DescribeIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIncrementalMigrationOutcomeCallable DescribeIncrementalMigrationCallable(const Model::DescribeIncrementalMigrationRequest& request);

                /**
                 *This API is used to query the instance ID by the order number.
                 * @param req DescribeInstanceByOrdersRequest
                 * @return DescribeInstanceByOrdersOutcome
                 */
                DescribeInstanceByOrdersOutcome DescribeInstanceByOrders(const Model::DescribeInstanceByOrdersRequest &request);
                void DescribeInstanceByOrdersAsync(const Model::DescribeInstanceByOrdersRequest& request, const DescribeInstanceByOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceByOrdersOutcomeCallable DescribeInstanceByOrdersCallable(const Model::DescribeInstanceByOrdersRequest& request);

                /**
                 *This API is used to query the parameter modification records of an instance.
                 * @param req DescribeInstanceParamRecordsRequest
                 * @return DescribeInstanceParamRecordsOutcome
                 */
                DescribeInstanceParamRecordsOutcome DescribeInstanceParamRecords(const Model::DescribeInstanceParamRecordsRequest &request);
                void DescribeInstanceParamRecordsAsync(const Model::DescribeInstanceParamRecordsRequest& request, const DescribeInstanceParamRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceParamRecordsOutcomeCallable DescribeInstanceParamRecordsCallable(const Model::DescribeInstanceParamRecordsRequest& request);

                /**
                 *This API is used to query the parameter list of an instance.
                 * @param req DescribeInstanceParamsRequest
                 * @return DescribeInstanceParamsOutcome
                 */
                DescribeInstanceParamsOutcome DescribeInstanceParams(const Model::DescribeInstanceParamsRequest &request);
                void DescribeInstanceParamsAsync(const Model::DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceParamsOutcomeCallable DescribeInstanceParamsCallable(const Model::DescribeInstanceParamsRequest& request);

                /**
                 *This API is used to query migration task details.
                 * @param req DescribeMigrationDetailRequest
                 * @return DescribeMigrationDetailOutcome
                 */
                DescribeMigrationDetailOutcome DescribeMigrationDetail(const Model::DescribeMigrationDetailRequest &request);
                void DescribeMigrationDetailAsync(const Model::DescribeMigrationDetailRequest& request, const DescribeMigrationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrationDetailOutcomeCallable DescribeMigrationDetailCallable(const Model::DescribeMigrationDetailRequest& request);

                /**
                 *This API is used to query the list of eligible migration tasks based on the entered criteria.
                 * @param req DescribeMigrationsRequest
                 * @return DescribeMigrationsOutcome
                 */
                DescribeMigrationsOutcome DescribeMigrations(const Model::DescribeMigrationsRequest &request);
                void DescribeMigrationsAsync(const Model::DescribeMigrationsRequest& request, const DescribeMigrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrationsOutcomeCallable DescribeMigrationsCallable(const Model::DescribeMigrationsRequest& request);

                /**
                 *This API is used to query order information.
                 * @param req DescribeOrdersRequest
                 * @return DescribeOrdersOutcome
                 */
                DescribeOrdersOutcome DescribeOrders(const Model::DescribeOrdersRequest &request);
                void DescribeOrdersAsync(const Model::DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrdersOutcomeCallable DescribeOrdersCallable(const Model::DescribeOrdersRequest& request);

                /**
                 *This API is used to query purchasable specification configuration.
                 * @param req DescribeProductConfigRequest
                 * @return DescribeProductConfigOutcome
                 */
                DescribeProductConfigOutcome DescribeProductConfig(const Model::DescribeProductConfigRequest &request);
                void DescribeProductConfigAsync(const Model::DescribeProductConfigRequest& request, const DescribeProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductConfigOutcomeCallable DescribeProductConfigCallable(const Model::DescribeProductConfigRequest& request);

                /**
                 *This API is used to query purchasable regions.
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *This API is used to query the time range available for instance rollback.
                 * @param req DescribeRollbackTimeRequest
                 * @return DescribeRollbackTimeOutcome
                 */
                DescribeRollbackTimeOutcome DescribeRollbackTime(const Model::DescribeRollbackTimeRequest &request);
                void DescribeRollbackTimeAsync(const Model::DescribeRollbackTimeRequest& request, const DescribeRollbackTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRollbackTimeOutcomeCallable DescribeRollbackTimeCallable(const Model::DescribeRollbackTimeRequest& request);

                /**
                 *This API is used to get file information of slow query logs.
                 * @param req DescribeSlowlogsRequest
                 * @return DescribeSlowlogsOutcome
                 */
                DescribeSlowlogsOutcome DescribeSlowlogs(const Model::DescribeSlowlogsRequest &request);
                void DescribeSlowlogsAsync(const Model::DescribeSlowlogsRequest& request, const DescribeSlowlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowlogsOutcomeCallable DescribeSlowlogsCallable(const Model::DescribeSlowlogsRequest& request);

                /**
                 *This API is used to query a backup upload permission.
                 * @param req DescribeUploadBackupInfoRequest
                 * @return DescribeUploadBackupInfoOutcome
                 */
                DescribeUploadBackupInfoOutcome DescribeUploadBackupInfo(const Model::DescribeUploadBackupInfoRequest &request);
                void DescribeUploadBackupInfoAsync(const Model::DescribeUploadBackupInfoRequest& request, const DescribeUploadBackupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUploadBackupInfoOutcomeCallable DescribeUploadBackupInfoCallable(const Model::DescribeUploadBackupInfoRequest& request);

                /**
                 *This API is used to query the list of extended events.
                 * @param req DescribeXEventsRequest
                 * @return DescribeXEventsOutcome
                 */
                DescribeXEventsOutcome DescribeXEvents(const Model::DescribeXEventsRequest &request);
                void DescribeXEventsAsync(const Model::DescribeXEventsRequest& request, const DescribeXEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeXEventsOutcomeCallable DescribeXEventsCallable(const Model::DescribeXEventsRequest& request);

                /**
                 *This API is used to query currently purchasable AZs.
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *This API is used to query the price of requested instances.
                 * @param req InquiryPriceCreateDBInstancesRequest
                 * @return InquiryPriceCreateDBInstancesOutcome
                 */
                InquiryPriceCreateDBInstancesOutcome InquiryPriceCreateDBInstances(const Model::InquiryPriceCreateDBInstancesRequest &request);
                void InquiryPriceCreateDBInstancesAsync(const Model::InquiryPriceCreateDBInstancesRequest& request, const InquiryPriceCreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateDBInstancesOutcomeCallable InquiryPriceCreateDBInstancesCallable(const Model::InquiryPriceCreateDBInstancesRequest& request);

                /**
                 *This API is used to query the upgrade prices of a monthly subscribed instance
.
                 * @param req InquiryPriceUpgradeDBInstanceRequest
                 * @return InquiryPriceUpgradeDBInstanceOutcome
                 */
                InquiryPriceUpgradeDBInstanceOutcome InquiryPriceUpgradeDBInstance(const Model::InquiryPriceUpgradeDBInstanceRequest &request);
                void InquiryPriceUpgradeDBInstanceAsync(const Model::InquiryPriceUpgradeDBInstanceRequest& request, const InquiryPriceUpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceUpgradeDBInstanceOutcomeCallable InquiryPriceUpgradeDBInstanceCallable(const Model::InquiryPriceUpgradeDBInstanceRequest& request);

                /**
                 *This API is used to modify instance account permissions.
                 * @param req ModifyAccountPrivilegeRequest
                 * @return ModifyAccountPrivilegeOutcome
                 */
                ModifyAccountPrivilegeOutcome ModifyAccountPrivilege(const Model::ModifyAccountPrivilegeRequest &request);
                void ModifyAccountPrivilegeAsync(const Model::ModifyAccountPrivilegeRequest& request, const ModifyAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountPrivilegeOutcomeCallable ModifyAccountPrivilegeCallable(const Model::ModifyAccountPrivilegeRequest& request);

                /**
                 *This API is used to modify account remarks.
                 * @param req ModifyAccountRemarkRequest
                 * @return ModifyAccountRemarkOutcome
                 */
                ModifyAccountRemarkOutcome ModifyAccountRemark(const Model::ModifyAccountRemarkRequest &request);
                void ModifyAccountRemarkAsync(const Model::ModifyAccountRemarkRequest& request, const ModifyAccountRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountRemarkOutcomeCallable ModifyAccountRemarkCallable(const Model::ModifyAccountRemarkRequest& request);

                /**
                 *This API is used to modify a backup import task.
                 * @param req ModifyBackupMigrationRequest
                 * @return ModifyBackupMigrationOutcome
                 */
                ModifyBackupMigrationOutcome ModifyBackupMigration(const Model::ModifyBackupMigrationRequest &request);
                void ModifyBackupMigrationAsync(const Model::ModifyBackupMigrationRequest& request, const ModifyBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupMigrationOutcomeCallable ModifyBackupMigrationCallable(const Model::ModifyBackupMigrationRequest& request);

                /**
                 *This API is used to modify the backup policy.
                 * @param req ModifyBackupStrategyRequest
                 * @return ModifyBackupStrategyOutcome
                 */
                ModifyBackupStrategyOutcome ModifyBackupStrategy(const Model::ModifyBackupStrategyRequest &request);
                void ModifyBackupStrategyAsync(const Model::ModifyBackupStrategyRequest& request, const ModifyBackupStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupStrategyOutcomeCallable ModifyBackupStrategyCallable(const Model::ModifyBackupStrategyRequest& request);

                /**
                 *This API is used to u200denable or disable TDE of a database.
                 * @param req ModifyDBEncryptAttributesRequest
                 * @return ModifyDBEncryptAttributesOutcome
                 */
                ModifyDBEncryptAttributesOutcome ModifyDBEncryptAttributes(const Model::ModifyDBEncryptAttributesRequest &request);
                void ModifyDBEncryptAttributesAsync(const Model::ModifyDBEncryptAttributesRequest& request, const ModifyDBEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBEncryptAttributesOutcomeCallable ModifyDBEncryptAttributesCallable(const Model::ModifyDBEncryptAttributesRequest& request);

                /**
                 *This API is used to rename an instance.
                 * @param req ModifyDBInstanceNameRequest
                 * @return ModifyDBInstanceNameOutcome
                 */
                ModifyDBInstanceNameOutcome ModifyDBInstanceName(const Model::ModifyDBInstanceNameRequest &request);
                void ModifyDBInstanceNameAsync(const Model::ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceNameOutcomeCallable ModifyDBInstanceNameCallable(const Model::ModifyDBInstanceNameRequest& request);

                /**
                 *This API is used to switch a running instance from a VPC to another.
                 * @param req ModifyDBInstanceNetworkRequest
                 * @return ModifyDBInstanceNetworkOutcome
                 */
                ModifyDBInstanceNetworkOutcome ModifyDBInstanceNetwork(const Model::ModifyDBInstanceNetworkRequest &request);
                void ModifyDBInstanceNetworkAsync(const Model::ModifyDBInstanceNetworkRequest& request, const ModifyDBInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceNetworkOutcomeCallable ModifyDBInstanceNetworkCallable(const Model::ModifyDBInstanceNetworkRequest& request);

                /**
                 *This API is used to modify the project to which a database instance belongs.
                 * @param req ModifyDBInstanceProjectRequest
                 * @return ModifyDBInstanceProjectOutcome
                 */
                ModifyDBInstanceProjectOutcome ModifyDBInstanceProject(const Model::ModifyDBInstanceProjectRequest &request);
                void ModifyDBInstanceProjectAsync(const Model::ModifyDBInstanceProjectRequest& request, const ModifyDBInstanceProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceProjectOutcomeCallable ModifyDBInstanceProjectCallable(const Model::ModifyDBInstanceProjectRequest& request);

                /**
                 *This API is used to rename a database.
                 * @param req ModifyDBNameRequest
                 * @return ModifyDBNameOutcome
                 */
                ModifyDBNameOutcome ModifyDBName(const Model::ModifyDBNameRequest &request);
                void ModifyDBNameAsync(const Model::ModifyDBNameRequest& request, const ModifyDBNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBNameOutcomeCallable ModifyDBNameCallable(const Model::ModifyDBNameRequest& request);

                /**
                 *This API is used to modify database remarks.
                 * @param req ModifyDBRemarkRequest
                 * @return ModifyDBRemarkOutcome
                 */
                ModifyDBRemarkOutcome ModifyDBRemark(const Model::ModifyDBRemarkRequest &request);
                void ModifyDBRemarkAsync(const Model::ModifyDBRemarkRequest& request, const ModifyDBRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBRemarkOutcomeCallable ModifyDBRemarkCallable(const Model::ModifyDBRemarkRequest& request);

                /**
                 *This API is used to enable or disable the change data capture (CDC) feature.
                 * @param req ModifyDatabaseCDCRequest
                 * @return ModifyDatabaseCDCOutcome
                 */
                ModifyDatabaseCDCOutcome ModifyDatabaseCDC(const Model::ModifyDatabaseCDCRequest &request);
                void ModifyDatabaseCDCAsync(const Model::ModifyDatabaseCDCRequest& request, const ModifyDatabaseCDCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatabaseCDCOutcomeCallable ModifyDatabaseCDCCallable(const Model::ModifyDatabaseCDCRequest& request);

                /**
                 *This API is used to enable or disable the change tracking (CT) feature.
                 * @param req ModifyDatabaseCTRequest
                 * @return ModifyDatabaseCTOutcome
                 */
                ModifyDatabaseCTOutcome ModifyDatabaseCT(const Model::ModifyDatabaseCTRequest &request);
                void ModifyDatabaseCTAsync(const Model::ModifyDatabaseCTRequest& request, const ModifyDatabaseCTAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatabaseCTOutcomeCallable ModifyDatabaseCTCallable(const Model::ModifyDatabaseCTRequest& request);

                /**
                 *This API is used to shrink database MDF files.
                 * @param req ModifyDatabaseMdfRequest
                 * @return ModifyDatabaseMdfOutcome
                 */
                ModifyDatabaseMdfOutcome ModifyDatabaseMdf(const Model::ModifyDatabaseMdfRequest &request);
                void ModifyDatabaseMdfAsync(const Model::ModifyDatabaseMdfRequest& request, const ModifyDatabaseMdfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatabaseMdfOutcomeCallable ModifyDatabaseMdfCallable(const Model::ModifyDatabaseMdfRequest& request);

                /**
                 *This API is used to modify an incremental backup import task.
                 * @param req ModifyIncrementalMigrationRequest
                 * @return ModifyIncrementalMigrationOutcome
                 */
                ModifyIncrementalMigrationOutcome ModifyIncrementalMigration(const Model::ModifyIncrementalMigrationRequest &request);
                void ModifyIncrementalMigrationAsync(const Model::ModifyIncrementalMigrationRequest& request, const ModifyIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIncrementalMigrationOutcomeCallable ModifyIncrementalMigrationCallable(const Model::ModifyIncrementalMigrationRequest& request);

                /**
                 *This API is used to enable TDE of an instance.
                 * @param req ModifyInstanceEncryptAttributesRequest
                 * @return ModifyInstanceEncryptAttributesOutcome
                 */
                ModifyInstanceEncryptAttributesOutcome ModifyInstanceEncryptAttributes(const Model::ModifyInstanceEncryptAttributesRequest &request);
                void ModifyInstanceEncryptAttributesAsync(const Model::ModifyInstanceEncryptAttributesRequest& request, const ModifyInstanceEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceEncryptAttributesOutcomeCallable ModifyInstanceEncryptAttributesCallable(const Model::ModifyInstanceEncryptAttributesRequest& request);

                /**
                 *This API is used to modify instance parameters.
<b>Note</b>: if <b>the instance needs to be restarted</b> for the modified parameter to take effect, <b>it will be restarted</b> immediately or during the maintenance time according to the `WaitSwitch` parameter.
Before you modify a parameter, you can use the `DescribeInstanceParams` API to query whether the instance needs to be restarted.
                 * @param req ModifyInstanceParamRequest
                 * @return ModifyInstanceParamOutcome
                 */
                ModifyInstanceParamOutcome ModifyInstanceParam(const Model::ModifyInstanceParamRequest &request);
                void ModifyInstanceParamAsync(const Model::ModifyInstanceParamRequest& request, const ModifyInstanceParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceParamOutcomeCallable ModifyInstanceParamCallable(const Model::ModifyInstanceParamRequest& request);

                /**
                 *This API is used to modify an existing migration task.
                 * @param req ModifyMigrationRequest
                 * @return ModifyMigrationOutcome
                 */
                ModifyMigrationOutcome ModifyMigration(const Model::ModifyMigrationRequest &request);
                void ModifyMigrationAsync(const Model::ModifyMigrationRequest& request, const ModifyMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMigrationOutcomeCallable ModifyMigrationCallable(const Model::ModifyMigrationRequest& request);

                /**
                 *This API is used to enable instance interconnection, which can interconnect business intelligence services.
                 * @param req OpenInterCommunicationRequest
                 * @return OpenInterCommunicationOutcome
                 */
                OpenInterCommunicationOutcome OpenInterCommunication(const Model::OpenInterCommunicationRequest &request);
                void OpenInterCommunicationAsync(const Model::OpenInterCommunicationRequest& request, const OpenInterCommunicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenInterCommunicationOutcomeCallable OpenInterCommunicationCallable(const Model::OpenInterCommunicationRequest& request);

                /**
                 *This API is used to return a deactivated SQL Server instance.
                 * @param req RecycleDBInstanceRequest
                 * @return RecycleDBInstanceOutcome
                 */
                RecycleDBInstanceOutcome RecycleDBInstance(const Model::RecycleDBInstanceRequest &request);
                void RecycleDBInstanceAsync(const Model::RecycleDBInstanceRequest& request, const RecycleDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecycleDBInstanceOutcomeCallable RecycleDBInstanceCallable(const Model::RecycleDBInstanceRequest& request);

                /**
                 *This API is used to reset the account password of an instance.
                 * @param req ResetAccountPasswordRequest
                 * @return ResetAccountPasswordOutcome
                 */
                ResetAccountPasswordOutcome ResetAccountPassword(const Model::ResetAccountPasswordRequest &request);
                void ResetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAccountPasswordOutcomeCallable ResetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request);

                /**
                 *This API is used to restart a database instance.
                 * @param req RestartDBInstanceRequest
                 * @return RestartDBInstanceOutcome
                 */
                RestartDBInstanceOutcome RestartDBInstance(const Model::RestartDBInstanceRequest &request);
                void RestartDBInstanceAsync(const Model::RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartDBInstanceOutcomeCallable RestartDBInstanceCallable(const Model::RestartDBInstanceRequest& request);

                /**
                 *This API is used to roll back the database by backup set.
                 * @param req RestoreInstanceRequest
                 * @return RestoreInstanceOutcome
                 */
                RestoreInstanceOutcome RestoreInstance(const Model::RestoreInstanceRequest &request);
                void RestoreInstanceAsync(const Model::RestoreInstanceRequest& request, const RestoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestoreInstanceOutcomeCallable RestoreInstanceCallable(const Model::RestoreInstanceRequest& request);

                /**
                 *This API is used to roll back the instance by time point.
                 * @param req RollbackInstanceRequest
                 * @return RollbackInstanceOutcome
                 */
                RollbackInstanceOutcome RollbackInstance(const Model::RollbackInstanceRequest &request);
                void RollbackInstanceAsync(const Model::RollbackInstanceRequest& request, const RollbackInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackInstanceOutcomeCallable RollbackInstanceCallable(const Model::RollbackInstanceRequest& request);

                /**
                 *This API is used to start running a migration task.
                 * @param req RunMigrationRequest
                 * @return RunMigrationOutcome
                 */
                RunMigrationOutcome RunMigration(const Model::RunMigrationRequest &request);
                void RunMigrationAsync(const Model::RunMigrationRequest& request, const RunMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunMigrationOutcomeCallable RunMigrationCallable(const Model::RunMigrationRequest& request);

                /**
                 *This API is used to start a backup import task.
                 * @param req StartBackupMigrationRequest
                 * @return StartBackupMigrationOutcome
                 */
                StartBackupMigrationOutcome StartBackupMigration(const Model::StartBackupMigrationRequest &request);
                void StartBackupMigrationAsync(const Model::StartBackupMigrationRequest& request, const StartBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartBackupMigrationOutcomeCallable StartBackupMigrationCallable(const Model::StartBackupMigrationRequest& request);

                /**
                 *This API is used to start an incremental backup import task.
                 * @param req StartIncrementalMigrationRequest
                 * @return StartIncrementalMigrationOutcome
                 */
                StartIncrementalMigrationOutcome StartIncrementalMigration(const Model::StartIncrementalMigrationRequest &request);
                void StartIncrementalMigrationAsync(const Model::StartIncrementalMigrationRequest& request, const StartIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartIncrementalMigrationOutcomeCallable StartIncrementalMigrationCallable(const Model::StartIncrementalMigrationRequest& request);

                /**
                 *This API is used to start and stop an extended event.
                 * @param req StartInstanceXEventRequest
                 * @return StartInstanceXEventOutcome
                 */
                StartInstanceXEventOutcome StartInstanceXEvent(const Model::StartInstanceXEventRequest &request);
                void StartInstanceXEventAsync(const Model::StartInstanceXEventRequest& request, const StartInstanceXEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartInstanceXEventOutcomeCallable StartInstanceXEventCallable(const Model::StartInstanceXEventRequest& request);

                /**
                 *This API is used to isolate an instance to move it into a recycle bin.
                 * @param req TerminateDBInstanceRequest
                 * @return TerminateDBInstanceOutcome
                 */
                TerminateDBInstanceOutcome TerminateDBInstance(const Model::TerminateDBInstanceRequest &request);
                void TerminateDBInstanceAsync(const Model::TerminateDBInstanceRequest& request, const TerminateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateDBInstanceOutcomeCallable TerminateDBInstanceCallable(const Model::TerminateDBInstanceRequest& request);

                /**
                 *This API is used to upgrade an instance.
                 * @param req UpgradeDBInstanceRequest
                 * @return UpgradeDBInstanceOutcome
                 */
                UpgradeDBInstanceOutcome UpgradeDBInstance(const Model::UpgradeDBInstanceRequest &request);
                void UpgradeDBInstanceAsync(const Model::UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceOutcomeCallable UpgradeDBInstanceCallable(const Model::UpgradeDBInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_SQLSERVERCLIENT_H_
