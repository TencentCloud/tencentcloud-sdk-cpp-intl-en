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
#include <tencentcloud/mariadb/v20170312/model/CloneAccountRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CloneAccountResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CloseDBExtranetAccessRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CloseDBExtranetAccessResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CopyAccountPrivilegesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CopyAccountPrivilegesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/CreateAccountRequest.h>
#include <tencentcloud/mariadb/v20170312/model/CreateAccountResponse.h>
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
#include <tencentcloud/mariadb/v20170312/model/DescribeDBSlowLogsRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDBSlowLogsResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDatabasesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeDatabasesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeFlowRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeFlowResponse.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeLogFileRetentionPeriodRequest.h>
#include <tencentcloud/mariadb/v20170312/model/DescribeLogFileRetentionPeriodResponse.h>
#include <tencentcloud/mariadb/v20170312/model/GrantAccountPrivilegesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/GrantAccountPrivilegesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/InitDBInstancesRequest.h>
#include <tencentcloud/mariadb/v20170312/model/InitDBInstancesResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyAccountDescriptionRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyAccountDescriptionResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyBackupTimeRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyBackupTimeResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBInstanceNameRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBInstanceNameResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBInstancesProjectRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBInstancesProjectResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBParametersRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyDBParametersResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyLogFileRetentionPeriodRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ModifyLogFileRetentionPeriodResponse.h>
#include <tencentcloud/mariadb/v20170312/model/OpenDBExtranetAccessRequest.h>
#include <tencentcloud/mariadb/v20170312/model/OpenDBExtranetAccessResponse.h>
#include <tencentcloud/mariadb/v20170312/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/mariadb/v20170312/model/ResetAccountPasswordResponse.h>


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

                typedef Outcome<Error, Model::CloneAccountResponse> CloneAccountOutcome;
                typedef std::future<CloneAccountOutcome> CloneAccountOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CloneAccountRequest&, CloneAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneAccountAsyncHandler;
                typedef Outcome<Error, Model::CloseDBExtranetAccessResponse> CloseDBExtranetAccessOutcome;
                typedef std::future<CloseDBExtranetAccessOutcome> CloseDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CloseDBExtranetAccessRequest&, CloseDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseDBExtranetAccessAsyncHandler;
                typedef Outcome<Error, Model::CopyAccountPrivilegesResponse> CopyAccountPrivilegesOutcome;
                typedef std::future<CopyAccountPrivilegesOutcome> CopyAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CopyAccountPrivilegesRequest&, CopyAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyAccountPrivilegesAsyncHandler;
                typedef Outcome<Error, Model::CreateAccountResponse> CreateAccountOutcome;
                typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::CreateAccountRequest&, CreateAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
                typedef Outcome<Error, Model::DeleteAccountResponse> DeleteAccountOutcome;
                typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DeleteAccountRequest&, DeleteAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccountPrivilegesResponse> DescribeAccountPrivilegesOutcome;
                typedef std::future<DescribeAccountPrivilegesOutcome> DescribeAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeAccountPrivilegesRequest&, DescribeAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountPrivilegesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Error, Model::DescribeBackupTimeResponse> DescribeBackupTimeOutcome;
                typedef std::future<DescribeBackupTimeOutcome> DescribeBackupTimeOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeBackupTimeRequest&, DescribeBackupTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupTimeAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBLogFilesResponse> DescribeDBLogFilesOutcome;
                typedef std::future<DescribeDBLogFilesOutcome> DescribeDBLogFilesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBLogFilesRequest&, DescribeDBLogFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBLogFilesAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBParametersResponse> DescribeDBParametersOutcome;
                typedef std::future<DescribeDBParametersOutcome> DescribeDBParametersOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBParametersRequest&, DescribeDBParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBParametersAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBPerformanceResponse> DescribeDBPerformanceOutcome;
                typedef std::future<DescribeDBPerformanceOutcome> DescribeDBPerformanceOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBPerformanceRequest&, DescribeDBPerformanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBPerformanceAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBPerformanceDetailsResponse> DescribeDBPerformanceDetailsOutcome;
                typedef std::future<DescribeDBPerformanceDetailsOutcome> DescribeDBPerformanceDetailsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBPerformanceDetailsRequest&, DescribeDBPerformanceDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBPerformanceDetailsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBResourceUsageResponse> DescribeDBResourceUsageOutcome;
                typedef std::future<DescribeDBResourceUsageOutcome> DescribeDBResourceUsageOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBResourceUsageRequest&, DescribeDBResourceUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBResourceUsageAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBResourceUsageDetailsResponse> DescribeDBResourceUsageDetailsOutcome;
                typedef std::future<DescribeDBResourceUsageDetailsOutcome> DescribeDBResourceUsageDetailsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBResourceUsageDetailsRequest&, DescribeDBResourceUsageDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBResourceUsageDetailsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBSlowLogsResponse> DescribeDBSlowLogsOutcome;
                typedef std::future<DescribeDBSlowLogsOutcome> DescribeDBSlowLogsOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDBSlowLogsRequest&, DescribeDBSlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSlowLogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDatabasesResponse> DescribeDatabasesOutcome;
                typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeDatabasesRequest&, DescribeDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
                typedef Outcome<Error, Model::DescribeFlowResponse> DescribeFlowOutcome;
                typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeFlowRequest&, DescribeFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowAsyncHandler;
                typedef Outcome<Error, Model::DescribeLogFileRetentionPeriodResponse> DescribeLogFileRetentionPeriodOutcome;
                typedef std::future<DescribeLogFileRetentionPeriodOutcome> DescribeLogFileRetentionPeriodOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::DescribeLogFileRetentionPeriodRequest&, DescribeLogFileRetentionPeriodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogFileRetentionPeriodAsyncHandler;
                typedef Outcome<Error, Model::GrantAccountPrivilegesResponse> GrantAccountPrivilegesOutcome;
                typedef std::future<GrantAccountPrivilegesOutcome> GrantAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::GrantAccountPrivilegesRequest&, GrantAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GrantAccountPrivilegesAsyncHandler;
                typedef Outcome<Error, Model::InitDBInstancesResponse> InitDBInstancesOutcome;
                typedef std::future<InitDBInstancesOutcome> InitDBInstancesOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::InitDBInstancesRequest&, InitDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InitDBInstancesAsyncHandler;
                typedef Outcome<Error, Model::ModifyAccountDescriptionResponse> ModifyAccountDescriptionOutcome;
                typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyAccountDescriptionRequest&, ModifyAccountDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
                typedef Outcome<Error, Model::ModifyBackupTimeResponse> ModifyBackupTimeOutcome;
                typedef std::future<ModifyBackupTimeOutcome> ModifyBackupTimeOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyBackupTimeRequest&, ModifyBackupTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupTimeAsyncHandler;
                typedef Outcome<Error, Model::ModifyDBInstanceNameResponse> ModifyDBInstanceNameOutcome;
                typedef std::future<ModifyDBInstanceNameOutcome> ModifyDBInstanceNameOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyDBInstanceNameRequest&, ModifyDBInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNameAsyncHandler;
                typedef Outcome<Error, Model::ModifyDBInstancesProjectResponse> ModifyDBInstancesProjectOutcome;
                typedef std::future<ModifyDBInstancesProjectOutcome> ModifyDBInstancesProjectOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyDBInstancesProjectRequest&, ModifyDBInstancesProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstancesProjectAsyncHandler;
                typedef Outcome<Error, Model::ModifyDBParametersResponse> ModifyDBParametersOutcome;
                typedef std::future<ModifyDBParametersOutcome> ModifyDBParametersOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyDBParametersRequest&, ModifyDBParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBParametersAsyncHandler;
                typedef Outcome<Error, Model::ModifyLogFileRetentionPeriodResponse> ModifyLogFileRetentionPeriodOutcome;
                typedef std::future<ModifyLogFileRetentionPeriodOutcome> ModifyLogFileRetentionPeriodOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ModifyLogFileRetentionPeriodRequest&, ModifyLogFileRetentionPeriodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogFileRetentionPeriodAsyncHandler;
                typedef Outcome<Error, Model::OpenDBExtranetAccessResponse> OpenDBExtranetAccessOutcome;
                typedef std::future<OpenDBExtranetAccessOutcome> OpenDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::OpenDBExtranetAccessRequest&, OpenDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenDBExtranetAccessAsyncHandler;
                typedef Outcome<Error, Model::ResetAccountPasswordResponse> ResetAccountPasswordOutcome;
                typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
                typedef std::function<void(const MariadbClient*, const Model::ResetAccountPasswordRequest&, ResetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;



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
                 *This API is used to query the slow query log list.
                 * @param req DescribeDBSlowLogsRequest
                 * @return DescribeDBSlowLogsOutcome
                 */
                DescribeDBSlowLogsOutcome DescribeDBSlowLogs(const Model::DescribeDBSlowLogsRequest &request);
                void DescribeDBSlowLogsAsync(const Model::DescribeDBSlowLogsRequest& request, const DescribeDBSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSlowLogsOutcomeCallable DescribeDBSlowLogsCallable(const Model::DescribeDBSlowLogsRequest& request);

                /**
                 *This API is used to query the list of databases of a TencentDB instance.
                 * @param req DescribeDatabasesRequest
                 * @return DescribeDatabasesOutcome
                 */
                DescribeDatabasesOutcome DescribeDatabases(const Model::DescribeDatabasesRequest &request);
                void DescribeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabasesOutcomeCallable DescribeDatabasesCallable(const Model::DescribeDatabasesRequest& request);

                /**
                 *This API is used to query flow status.
                 * @param req DescribeFlowRequest
                 * @return DescribeFlowOutcome
                 */
                DescribeFlowOutcome DescribeFlow(const Model::DescribeFlowRequest &request);
                void DescribeFlowAsync(const Model::DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowOutcomeCallable DescribeFlowCallable(const Model::DescribeFlowRequest& request);

                /**
                 *This API is used to view the configured number of days for retention of database backup logs.
                 * @param req DescribeLogFileRetentionPeriodRequest
                 * @return DescribeLogFileRetentionPeriodOutcome
                 */
                DescribeLogFileRetentionPeriodOutcome DescribeLogFileRetentionPeriod(const Model::DescribeLogFileRetentionPeriodRequest &request);
                void DescribeLogFileRetentionPeriodAsync(const Model::DescribeLogFileRetentionPeriodRequest& request, const DescribeLogFileRetentionPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogFileRetentionPeriodOutcomeCallable DescribeLogFileRetentionPeriodCallable(const Model::DescribeLogFileRetentionPeriodRequest& request);

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
                 *This API is used to modify the number of days for retention of database backup logs.
                 * @param req ModifyLogFileRetentionPeriodRequest
                 * @return ModifyLogFileRetentionPeriodOutcome
                 */
                ModifyLogFileRetentionPeriodOutcome ModifyLogFileRetentionPeriod(const Model::ModifyLogFileRetentionPeriodRequest &request);
                void ModifyLogFileRetentionPeriodAsync(const Model::ModifyLogFileRetentionPeriodRequest& request, const ModifyLogFileRetentionPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLogFileRetentionPeriodOutcomeCallable ModifyLogFileRetentionPeriodCallable(const Model::ModifyLogFileRetentionPeriodRequest& request);

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

            };
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MARIADBCLIENT_H_
