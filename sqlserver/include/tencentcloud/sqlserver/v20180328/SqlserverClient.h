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
#include <tencentcloud/sqlserver/v20180328/model/CreateAccountRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateAccountResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBackupRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBackupResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateDBRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateDBResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteAccountRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteAccountResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteDBRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteDBResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeAccountsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeAccountsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeFlowStatusRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeFlowStatusResponse.h>
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
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNameRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNameResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceProjectRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceProjectResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBNameRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBNameResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBRemarkRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBRemarkResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyMigrationResponse.h>
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

                typedef Outcome<Error, Model::CreateAccountResponse> CreateAccountOutcome;
                typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateAccountRequest&, CreateAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
                typedef Outcome<Error, Model::CreateBackupResponse> CreateBackupOutcome;
                typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateBackupRequest&, CreateBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupAsyncHandler;
                typedef Outcome<Error, Model::CreateDBResponse> CreateDBOutcome;
                typedef std::future<CreateDBOutcome> CreateDBOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateDBRequest&, CreateDBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBAsyncHandler;
                typedef Outcome<Error, Model::CreateDBInstancesResponse> CreateDBInstancesOutcome;
                typedef std::future<CreateDBInstancesOutcome> CreateDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateDBInstancesRequest&, CreateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstancesAsyncHandler;
                typedef Outcome<Error, Model::CreateMigrationResponse> CreateMigrationOutcome;
                typedef std::future<CreateMigrationOutcome> CreateMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateMigrationRequest&, CreateMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrationAsyncHandler;
                typedef Outcome<Error, Model::DeleteAccountResponse> DeleteAccountOutcome;
                typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteAccountRequest&, DeleteAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
                typedef Outcome<Error, Model::DeleteDBResponse> DeleteDBOutcome;
                typedef std::future<DeleteDBOutcome> DeleteDBOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteDBRequest&, DeleteDBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBAsyncHandler;
                typedef Outcome<Error, Model::DeleteMigrationResponse> DeleteMigrationOutcome;
                typedef std::future<DeleteMigrationOutcome> DeleteMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteMigrationRequest&, DeleteMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMigrationAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Error, Model::DescribeBackupsResponse> DescribeBackupsOutcome;
                typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupsRequest&, DescribeBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBsResponse> DescribeDBsOutcome;
                typedef std::future<DescribeDBsOutcome> DescribeDBsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBsRequest&, DescribeDBsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBsAsyncHandler;
                typedef Outcome<Error, Model::DescribeFlowStatusResponse> DescribeFlowStatusOutcome;
                typedef std::future<DescribeFlowStatusOutcome> DescribeFlowStatusOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeFlowStatusRequest&, DescribeFlowStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeMigrationDetailResponse> DescribeMigrationDetailOutcome;
                typedef std::future<DescribeMigrationDetailOutcome> DescribeMigrationDetailOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeMigrationDetailRequest&, DescribeMigrationDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeMigrationsResponse> DescribeMigrationsOutcome;
                typedef std::future<DescribeMigrationsOutcome> DescribeMigrationsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeMigrationsRequest&, DescribeMigrationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationsAsyncHandler;
                typedef Outcome<Error, Model::DescribeOrdersResponse> DescribeOrdersOutcome;
                typedef std::future<DescribeOrdersOutcome> DescribeOrdersOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeOrdersRequest&, DescribeOrdersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrdersAsyncHandler;
                typedef Outcome<Error, Model::DescribeProductConfigResponse> DescribeProductConfigOutcome;
                typedef std::future<DescribeProductConfigOutcome> DescribeProductConfigOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeProductConfigRequest&, DescribeProductConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Error, Model::DescribeRollbackTimeResponse> DescribeRollbackTimeOutcome;
                typedef std::future<DescribeRollbackTimeOutcome> DescribeRollbackTimeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeRollbackTimeRequest&, DescribeRollbackTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRollbackTimeAsyncHandler;
                typedef Outcome<Error, Model::DescribeSlowlogsResponse> DescribeSlowlogsOutcome;
                typedef std::future<DescribeSlowlogsOutcome> DescribeSlowlogsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeSlowlogsRequest&, DescribeSlowlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowlogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Error, Model::InquiryPriceCreateDBInstancesResponse> InquiryPriceCreateDBInstancesOutcome;
                typedef std::future<InquiryPriceCreateDBInstancesOutcome> InquiryPriceCreateDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::InquiryPriceCreateDBInstancesRequest&, InquiryPriceCreateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateDBInstancesAsyncHandler;
                typedef Outcome<Error, Model::InquiryPriceUpgradeDBInstanceResponse> InquiryPriceUpgradeDBInstanceOutcome;
                typedef std::future<InquiryPriceUpgradeDBInstanceOutcome> InquiryPriceUpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::InquiryPriceUpgradeDBInstanceRequest&, InquiryPriceUpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceUpgradeDBInstanceAsyncHandler;
                typedef Outcome<Error, Model::ModifyAccountPrivilegeResponse> ModifyAccountPrivilegeOutcome;
                typedef std::future<ModifyAccountPrivilegeOutcome> ModifyAccountPrivilegeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyAccountPrivilegeRequest&, ModifyAccountPrivilegeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPrivilegeAsyncHandler;
                typedef Outcome<Error, Model::ModifyAccountRemarkResponse> ModifyAccountRemarkOutcome;
                typedef std::future<ModifyAccountRemarkOutcome> ModifyAccountRemarkOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyAccountRemarkRequest&, ModifyAccountRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountRemarkAsyncHandler;
                typedef Outcome<Error, Model::ModifyDBInstanceNameResponse> ModifyDBInstanceNameOutcome;
                typedef std::future<ModifyDBInstanceNameOutcome> ModifyDBInstanceNameOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBInstanceNameRequest&, ModifyDBInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNameAsyncHandler;
                typedef Outcome<Error, Model::ModifyDBInstanceProjectResponse> ModifyDBInstanceProjectOutcome;
                typedef std::future<ModifyDBInstanceProjectOutcome> ModifyDBInstanceProjectOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBInstanceProjectRequest&, ModifyDBInstanceProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceProjectAsyncHandler;
                typedef Outcome<Error, Model::ModifyDBNameResponse> ModifyDBNameOutcome;
                typedef std::future<ModifyDBNameOutcome> ModifyDBNameOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBNameRequest&, ModifyDBNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBNameAsyncHandler;
                typedef Outcome<Error, Model::ModifyDBRemarkResponse> ModifyDBRemarkOutcome;
                typedef std::future<ModifyDBRemarkOutcome> ModifyDBRemarkOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBRemarkRequest&, ModifyDBRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBRemarkAsyncHandler;
                typedef Outcome<Error, Model::ModifyMigrationResponse> ModifyMigrationOutcome;
                typedef std::future<ModifyMigrationOutcome> ModifyMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyMigrationRequest&, ModifyMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrationAsyncHandler;
                typedef Outcome<Error, Model::ResetAccountPasswordResponse> ResetAccountPasswordOutcome;
                typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ResetAccountPasswordRequest&, ResetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
                typedef Outcome<Error, Model::RestartDBInstanceResponse> RestartDBInstanceOutcome;
                typedef std::future<RestartDBInstanceOutcome> RestartDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RestartDBInstanceRequest&, RestartDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstanceAsyncHandler;
                typedef Outcome<Error, Model::RestoreInstanceResponse> RestoreInstanceOutcome;
                typedef std::future<RestoreInstanceOutcome> RestoreInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RestoreInstanceRequest&, RestoreInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestoreInstanceAsyncHandler;
                typedef Outcome<Error, Model::RollbackInstanceResponse> RollbackInstanceOutcome;
                typedef std::future<RollbackInstanceOutcome> RollbackInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RollbackInstanceRequest&, RollbackInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackInstanceAsyncHandler;
                typedef Outcome<Error, Model::RunMigrationResponse> RunMigrationOutcome;
                typedef std::future<RunMigrationOutcome> RunMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RunMigrationRequest&, RunMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunMigrationAsyncHandler;
                typedef Outcome<Error, Model::TerminateDBInstanceResponse> TerminateDBInstanceOutcome;
                typedef std::future<TerminateDBInstanceOutcome> TerminateDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::TerminateDBInstanceRequest&, TerminateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateDBInstanceAsyncHandler;
                typedef Outcome<Error, Model::UpgradeDBInstanceResponse> UpgradeDBInstanceOutcome;
                typedef std::future<UpgradeDBInstanceOutcome> UpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::UpgradeDBInstanceRequest&, UpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceAsyncHandler;



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
                 *This API is used to drop a database.
                 * @param req DeleteDBRequest
                 * @return DeleteDBOutcome
                 */
                DeleteDBOutcome DeleteDB(const Model::DeleteDBRequest &request);
                void DeleteDBAsync(const Model::DeleteDBRequest& request, const DeleteDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDBOutcomeCallable DeleteDBCallable(const Model::DeleteDBRequest& request);

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
                 *This API is used to query the list of backups.
                 * @param req DescribeBackupsRequest
                 * @return DescribeBackupsOutcome
                 */
                DescribeBackupsOutcome DescribeBackups(const Model::DescribeBackupsRequest &request);
                void DescribeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupsOutcomeCallable DescribeBackupsCallable(const Model::DescribeBackupsRequest& request);

                /**
                 *This API is used to query the list of instances.
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *This API is used to query the list of databases
                 * @param req DescribeDBsRequest
                 * @return DescribeDBsOutcome
                 */
                DescribeDBsOutcome DescribeDBs(const Model::DescribeDBsRequest &request);
                void DescribeDBsAsync(const Model::DescribeDBsRequest& request, const DescribeDBsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBsOutcomeCallable DescribeDBsCallable(const Model::DescribeDBsRequest& request);

                /**
                 *This API is used to query flow status.
                 * @param req DescribeFlowStatusRequest
                 * @return DescribeFlowStatusOutcome
                 */
                DescribeFlowStatusOutcome DescribeFlowStatus(const Model::DescribeFlowStatusRequest &request);
                void DescribeFlowStatusAsync(const Model::DescribeFlowStatusRequest& request, const DescribeFlowStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowStatusOutcomeCallable DescribeFlowStatusCallable(const Model::DescribeFlowStatusRequest& request);

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
                 *This API is used to query the upgrade price of an instance.
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
                 *This API is used to rename an instance.
                 * @param req ModifyDBInstanceNameRequest
                 * @return ModifyDBInstanceNameOutcome
                 */
                ModifyDBInstanceNameOutcome ModifyDBInstanceName(const Model::ModifyDBInstanceNameRequest &request);
                void ModifyDBInstanceNameAsync(const Model::ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceNameOutcomeCallable ModifyDBInstanceNameCallable(const Model::ModifyDBInstanceNameRequest& request);

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
                 *This API is used to modify an existing migration task.
                 * @param req ModifyMigrationRequest
                 * @return ModifyMigrationOutcome
                 */
                ModifyMigrationOutcome ModifyMigration(const Model::ModifyMigrationRequest &request);
                void ModifyMigrationAsync(const Model::ModifyMigrationRequest& request, const ModifyMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMigrationOutcomeCallable ModifyMigrationCallable(const Model::ModifyMigrationRequest& request);

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
                 *This API is used to restore an instance from a backup file.
                 * @param req RestoreInstanceRequest
                 * @return RestoreInstanceOutcome
                 */
                RestoreInstanceOutcome RestoreInstance(const Model::RestoreInstanceRequest &request);
                void RestoreInstanceAsync(const Model::RestoreInstanceRequest& request, const RestoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestoreInstanceOutcomeCallable RestoreInstanceCallable(const Model::RestoreInstanceRequest& request);

                /**
                 *This API is used to roll back an instance.
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
                 *This API is used to manually terminate a pay-as-you-go instance.
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
