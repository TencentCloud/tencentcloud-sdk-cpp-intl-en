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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MONGODBCLIENT_H_
#define TENCENTCLOUD_MONGODB_V20190725_MONGODBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mongodb/v20190725/model/AssignProjectRequest.h>
#include <tencentcloud/mongodb/v20190725/model/AssignProjectResponse.h>
#include <tencentcloud/mongodb/v20190725/model/CreateBackupDBInstanceRequest.h>
#include <tencentcloud/mongodb/v20190725/model/CreateBackupDBInstanceResponse.h>
#include <tencentcloud/mongodb/v20190725/model/CreateBackupDownloadTaskRequest.h>
#include <tencentcloud/mongodb/v20190725/model/CreateBackupDownloadTaskResponse.h>
#include <tencentcloud/mongodb/v20190725/model/CreateDBInstanceRequest.h>
#include <tencentcloud/mongodb/v20190725/model/CreateDBInstanceResponse.h>
#include <tencentcloud/mongodb/v20190725/model/CreateDBInstanceHourRequest.h>
#include <tencentcloud/mongodb/v20190725/model/CreateDBInstanceHourResponse.h>
#include <tencentcloud/mongodb/v20190725/model/CreateLogDownloadTaskRequest.h>
#include <tencentcloud/mongodb/v20190725/model/CreateLogDownloadTaskResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DeleteLogDownloadTaskRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DeleteLogDownloadTaskResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeAsyncRequestInfoRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeAsyncRequestInfoResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeBackupDownloadTaskRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeBackupDownloadTaskResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeClientConnectionsRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeClientConnectionsResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBBackupsRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBBackupsResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstanceDealRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstanceDealResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstanceNamespaceRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstanceNamespaceResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstanceNodePropertyRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstanceNodePropertyResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDetailedSlowLogsRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeDetailedSlowLogsResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeInstanceParamsRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeInstanceParamsResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeInstanceSSLRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeInstanceSSLResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeLogDownloadTasksRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeLogDownloadTasksResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeMongodbLogsRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeMongodbLogsResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeSecurityGroupRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeSecurityGroupResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeSlowLogPatternsRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeSlowLogPatternsResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeSlowLogsRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeSlowLogsResponse.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeSpecInfoRequest.h>
#include <tencentcloud/mongodb/v20190725/model/DescribeSpecInfoResponse.h>
#include <tencentcloud/mongodb/v20190725/model/FlushInstanceRouterConfigRequest.h>
#include <tencentcloud/mongodb/v20190725/model/FlushInstanceRouterConfigResponse.h>
#include <tencentcloud/mongodb/v20190725/model/InquirePriceCreateDBInstancesRequest.h>
#include <tencentcloud/mongodb/v20190725/model/InquirePriceCreateDBInstancesResponse.h>
#include <tencentcloud/mongodb/v20190725/model/InquirePriceModifyDBInstanceSpecRequest.h>
#include <tencentcloud/mongodb/v20190725/model/InquirePriceModifyDBInstanceSpecResponse.h>
#include <tencentcloud/mongodb/v20190725/model/InquirePriceRenewDBInstancesRequest.h>
#include <tencentcloud/mongodb/v20190725/model/InquirePriceRenewDBInstancesResponse.h>
#include <tencentcloud/mongodb/v20190725/model/InstanceEnableSSLRequest.h>
#include <tencentcloud/mongodb/v20190725/model/InstanceEnableSSLResponse.h>
#include <tencentcloud/mongodb/v20190725/model/IsolateDBInstanceRequest.h>
#include <tencentcloud/mongodb/v20190725/model/IsolateDBInstanceResponse.h>
#include <tencentcloud/mongodb/v20190725/model/ModifyDBInstanceNetworkAddressRequest.h>
#include <tencentcloud/mongodb/v20190725/model/ModifyDBInstanceNetworkAddressResponse.h>
#include <tencentcloud/mongodb/v20190725/model/ModifyDBInstanceSecurityGroupRequest.h>
#include <tencentcloud/mongodb/v20190725/model/ModifyDBInstanceSecurityGroupResponse.h>
#include <tencentcloud/mongodb/v20190725/model/ModifyDBInstanceSpecRequest.h>
#include <tencentcloud/mongodb/v20190725/model/ModifyDBInstanceSpecResponse.h>
#include <tencentcloud/mongodb/v20190725/model/OfflineIsolatedDBInstanceRequest.h>
#include <tencentcloud/mongodb/v20190725/model/OfflineIsolatedDBInstanceResponse.h>
#include <tencentcloud/mongodb/v20190725/model/RenameInstanceRequest.h>
#include <tencentcloud/mongodb/v20190725/model/RenameInstanceResponse.h>
#include <tencentcloud/mongodb/v20190725/model/RenewDBInstancesRequest.h>
#include <tencentcloud/mongodb/v20190725/model/RenewDBInstancesResponse.h>
#include <tencentcloud/mongodb/v20190725/model/ResetDBInstancePasswordRequest.h>
#include <tencentcloud/mongodb/v20190725/model/ResetDBInstancePasswordResponse.h>
#include <tencentcloud/mongodb/v20190725/model/SetDBInstanceDeletionProtectionRequest.h>
#include <tencentcloud/mongodb/v20190725/model/SetDBInstanceDeletionProtectionResponse.h>
#include <tencentcloud/mongodb/v20190725/model/TerminateDBInstancesRequest.h>
#include <tencentcloud/mongodb/v20190725/model/TerminateDBInstancesResponse.h>
#include <tencentcloud/mongodb/v20190725/model/UpgradeDBInstanceKernelVersionRequest.h>
#include <tencentcloud/mongodb/v20190725/model/UpgradeDBInstanceKernelVersionResponse.h>
#include <tencentcloud/mongodb/v20190725/model/UpgradeDbInstanceVersionRequest.h>
#include <tencentcloud/mongodb/v20190725/model/UpgradeDbInstanceVersionResponse.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            class MongodbClient : public AbstractClient
            {
            public:
                MongodbClient(const Credential &credential, const std::string &region);
                MongodbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssignProjectResponse> AssignProjectOutcome;
                typedef std::future<AssignProjectOutcome> AssignProjectOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::AssignProjectRequest&, AssignProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupDBInstanceResponse> CreateBackupDBInstanceOutcome;
                typedef std::future<CreateBackupDBInstanceOutcome> CreateBackupDBInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::CreateBackupDBInstanceRequest&, CreateBackupDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupDownloadTaskResponse> CreateBackupDownloadTaskOutcome;
                typedef std::future<CreateBackupDownloadTaskOutcome> CreateBackupDownloadTaskOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::CreateBackupDownloadTaskRequest&, CreateBackupDownloadTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupDownloadTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBInstanceResponse> CreateDBInstanceOutcome;
                typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::CreateDBInstanceRequest&, CreateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBInstanceHourResponse> CreateDBInstanceHourOutcome;
                typedef std::future<CreateDBInstanceHourOutcome> CreateDBInstanceHourOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::CreateDBInstanceHourRequest&, CreateDBInstanceHourOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceHourAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLogDownloadTaskResponse> CreateLogDownloadTaskOutcome;
                typedef std::future<CreateLogDownloadTaskOutcome> CreateLogDownloadTaskOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::CreateLogDownloadTaskRequest&, CreateLogDownloadTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogDownloadTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLogDownloadTaskResponse> DeleteLogDownloadTaskOutcome;
                typedef std::future<DeleteLogDownloadTaskOutcome> DeleteLogDownloadTaskOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DeleteLogDownloadTaskRequest&, DeleteLogDownloadTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogDownloadTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAsyncRequestInfoResponse> DescribeAsyncRequestInfoOutcome;
                typedef std::future<DescribeAsyncRequestInfoOutcome> DescribeAsyncRequestInfoOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeAsyncRequestInfoRequest&, DescribeAsyncRequestInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAsyncRequestInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupDownloadTaskResponse> DescribeBackupDownloadTaskOutcome;
                typedef std::future<DescribeBackupDownloadTaskOutcome> DescribeBackupDownloadTaskOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeBackupDownloadTaskRequest&, DescribeBackupDownloadTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupDownloadTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClientConnectionsResponse> DescribeClientConnectionsOutcome;
                typedef std::future<DescribeClientConnectionsOutcome> DescribeClientConnectionsOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeClientConnectionsRequest&, DescribeClientConnectionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientConnectionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBBackupsResponse> DescribeDBBackupsOutcome;
                typedef std::future<DescribeDBBackupsOutcome> DescribeDBBackupsOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeDBBackupsRequest&, DescribeDBBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceDealResponse> DescribeDBInstanceDealOutcome;
                typedef std::future<DescribeDBInstanceDealOutcome> DescribeDBInstanceDealOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeDBInstanceDealRequest&, DescribeDBInstanceDealOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceDealAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceNamespaceResponse> DescribeDBInstanceNamespaceOutcome;
                typedef std::future<DescribeDBInstanceNamespaceOutcome> DescribeDBInstanceNamespaceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeDBInstanceNamespaceRequest&, DescribeDBInstanceNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceNodePropertyResponse> DescribeDBInstanceNodePropertyOutcome;
                typedef std::future<DescribeDBInstanceNodePropertyOutcome> DescribeDBInstanceNodePropertyOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeDBInstanceNodePropertyRequest&, DescribeDBInstanceNodePropertyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceNodePropertyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDetailedSlowLogsResponse> DescribeDetailedSlowLogsOutcome;
                typedef std::future<DescribeDetailedSlowLogsOutcome> DescribeDetailedSlowLogsOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeDetailedSlowLogsRequest&, DescribeDetailedSlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDetailedSlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceParamsResponse> DescribeInstanceParamsOutcome;
                typedef std::future<DescribeInstanceParamsOutcome> DescribeInstanceParamsOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeInstanceParamsRequest&, DescribeInstanceParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceSSLResponse> DescribeInstanceSSLOutcome;
                typedef std::future<DescribeInstanceSSLOutcome> DescribeInstanceSSLOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeInstanceSSLRequest&, DescribeInstanceSSLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSSLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogDownloadTasksResponse> DescribeLogDownloadTasksOutcome;
                typedef std::future<DescribeLogDownloadTasksOutcome> DescribeLogDownloadTasksOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeLogDownloadTasksRequest&, DescribeLogDownloadTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogDownloadTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMongodbLogsResponse> DescribeMongodbLogsOutcome;
                typedef std::future<DescribeMongodbLogsOutcome> DescribeMongodbLogsOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeMongodbLogsRequest&, DescribeMongodbLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMongodbLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupResponse> DescribeSecurityGroupOutcome;
                typedef std::future<DescribeSecurityGroupOutcome> DescribeSecurityGroupOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeSecurityGroupRequest&, DescribeSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogPatternsResponse> DescribeSlowLogPatternsOutcome;
                typedef std::future<DescribeSlowLogPatternsOutcome> DescribeSlowLogPatternsOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeSlowLogPatternsRequest&, DescribeSlowLogPatternsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogPatternsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogsResponse> DescribeSlowLogsOutcome;
                typedef std::future<DescribeSlowLogsOutcome> DescribeSlowLogsOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeSlowLogsRequest&, DescribeSlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpecInfoResponse> DescribeSpecInfoOutcome;
                typedef std::future<DescribeSpecInfoOutcome> DescribeSpecInfoOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::DescribeSpecInfoRequest&, DescribeSpecInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpecInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::FlushInstanceRouterConfigResponse> FlushInstanceRouterConfigOutcome;
                typedef std::future<FlushInstanceRouterConfigOutcome> FlushInstanceRouterConfigOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::FlushInstanceRouterConfigRequest&, FlushInstanceRouterConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FlushInstanceRouterConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceCreateDBInstancesResponse> InquirePriceCreateDBInstancesOutcome;
                typedef std::future<InquirePriceCreateDBInstancesOutcome> InquirePriceCreateDBInstancesOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::InquirePriceCreateDBInstancesRequest&, InquirePriceCreateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceCreateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceModifyDBInstanceSpecResponse> InquirePriceModifyDBInstanceSpecOutcome;
                typedef std::future<InquirePriceModifyDBInstanceSpecOutcome> InquirePriceModifyDBInstanceSpecOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::InquirePriceModifyDBInstanceSpecRequest&, InquirePriceModifyDBInstanceSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceModifyDBInstanceSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceRenewDBInstancesResponse> InquirePriceRenewDBInstancesOutcome;
                typedef std::future<InquirePriceRenewDBInstancesOutcome> InquirePriceRenewDBInstancesOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::InquirePriceRenewDBInstancesRequest&, InquirePriceRenewDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceRenewDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::InstanceEnableSSLResponse> InstanceEnableSSLOutcome;
                typedef std::future<InstanceEnableSSLOutcome> InstanceEnableSSLOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::InstanceEnableSSLRequest&, InstanceEnableSSLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstanceEnableSSLAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateDBInstanceResponse> IsolateDBInstanceOutcome;
                typedef std::future<IsolateDBInstanceOutcome> IsolateDBInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::IsolateDBInstanceRequest&, IsolateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceNetworkAddressResponse> ModifyDBInstanceNetworkAddressOutcome;
                typedef std::future<ModifyDBInstanceNetworkAddressOutcome> ModifyDBInstanceNetworkAddressOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::ModifyDBInstanceNetworkAddressRequest&, ModifyDBInstanceNetworkAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNetworkAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupResponse> ModifyDBInstanceSecurityGroupOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupOutcome> ModifyDBInstanceSecurityGroupOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::ModifyDBInstanceSecurityGroupRequest&, ModifyDBInstanceSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSpecResponse> ModifyDBInstanceSpecOutcome;
                typedef std::future<ModifyDBInstanceSpecOutcome> ModifyDBInstanceSpecOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::ModifyDBInstanceSpecRequest&, ModifyDBInstanceSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::OfflineIsolatedDBInstanceResponse> OfflineIsolatedDBInstanceOutcome;
                typedef std::future<OfflineIsolatedDBInstanceOutcome> OfflineIsolatedDBInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::OfflineIsolatedDBInstanceRequest&, OfflineIsolatedDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OfflineIsolatedDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RenameInstanceResponse> RenameInstanceOutcome;
                typedef std::future<RenameInstanceOutcome> RenameInstanceOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::RenameInstanceRequest&, RenameInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenameInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewDBInstancesResponse> RenewDBInstancesOutcome;
                typedef std::future<RenewDBInstancesOutcome> RenewDBInstancesOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::RenewDBInstancesRequest&, RenewDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetDBInstancePasswordResponse> ResetDBInstancePasswordOutcome;
                typedef std::future<ResetDBInstancePasswordOutcome> ResetDBInstancePasswordOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::ResetDBInstancePasswordRequest&, ResetDBInstancePasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetDBInstancePasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::SetDBInstanceDeletionProtectionResponse> SetDBInstanceDeletionProtectionOutcome;
                typedef std::future<SetDBInstanceDeletionProtectionOutcome> SetDBInstanceDeletionProtectionOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::SetDBInstanceDeletionProtectionRequest&, SetDBInstanceDeletionProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetDBInstanceDeletionProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateDBInstancesResponse> TerminateDBInstancesOutcome;
                typedef std::future<TerminateDBInstancesOutcome> TerminateDBInstancesOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::TerminateDBInstancesRequest&, TerminateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDBInstanceKernelVersionResponse> UpgradeDBInstanceKernelVersionOutcome;
                typedef std::future<UpgradeDBInstanceKernelVersionOutcome> UpgradeDBInstanceKernelVersionOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::UpgradeDBInstanceKernelVersionRequest&, UpgradeDBInstanceKernelVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceKernelVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDbInstanceVersionResponse> UpgradeDbInstanceVersionOutcome;
                typedef std::future<UpgradeDbInstanceVersionOutcome> UpgradeDbInstanceVersionOutcomeCallable;
                typedef std::function<void(const MongodbClient*, const Model::UpgradeDbInstanceVersionRequest&, UpgradeDbInstanceVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDbInstanceVersionAsyncHandler;



                /**
                 *This API is used to specify the project of a TencentDB for MongoDB instance.
                 * @param req AssignProjectRequest
                 * @return AssignProjectOutcome
                 */
                AssignProjectOutcome AssignProject(const Model::AssignProjectRequest &request);
                void AssignProjectAsync(const Model::AssignProjectRequest& request, const AssignProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignProjectOutcomeCallable AssignProjectCallable(const Model::AssignProjectRequest& request);

                /**
                 *This API is used to back up an instance.
                 * @param req CreateBackupDBInstanceRequest
                 * @return CreateBackupDBInstanceOutcome
                 */
                CreateBackupDBInstanceOutcome CreateBackupDBInstance(const Model::CreateBackupDBInstanceRequest &request);
                void CreateBackupDBInstanceAsync(const Model::CreateBackupDBInstanceRequest& request, const CreateBackupDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupDBInstanceOutcomeCallable CreateBackupDBInstanceCallable(const Model::CreateBackupDBInstanceRequest& request);

                /**
                 *This API is used to create a backup download task.
                 * @param req CreateBackupDownloadTaskRequest
                 * @return CreateBackupDownloadTaskOutcome
                 */
                CreateBackupDownloadTaskOutcome CreateBackupDownloadTask(const Model::CreateBackupDownloadTaskRequest &request);
                void CreateBackupDownloadTaskAsync(const Model::CreateBackupDownloadTaskRequest& request, const CreateBackupDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupDownloadTaskOutcomeCallable CreateBackupDownloadTaskCallable(const Model::CreateBackupDownloadTaskRequest& request);

                /**
                 *This API is used to create a yearly/monthly subscription TencentDB for MongoDB instance. The [DescribeSpecInfo](https://www.tencentcloud.comom/document/product/240/35767?from_cn_redirect=1) API can be called to query and obtain the supported sales specifications.
                 * @param req CreateDBInstanceRequest
                 * @return CreateDBInstanceOutcome
                 */
                CreateDBInstanceOutcome CreateDBInstance(const Model::CreateDBInstanceRequest &request);
                void CreateDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstanceOutcomeCallable CreateDBInstanceCallable(const Model::CreateDBInstanceRequest& request);

                /**
                 *This API is used to create a pay-as-you-go TencentDB for MongoDB instance.
                 * @param req CreateDBInstanceHourRequest
                 * @return CreateDBInstanceHourOutcome
                 */
                CreateDBInstanceHourOutcome CreateDBInstanceHour(const Model::CreateDBInstanceHourRequest &request);
                void CreateDBInstanceHourAsync(const Model::CreateDBInstanceHourRequest& request, const CreateDBInstanceHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstanceHourOutcomeCallable CreateDBInstanceHourCallable(const Model::CreateDBInstanceHourRequest& request);

                /**
                 *This API is used to create a log download task.
                 * @param req CreateLogDownloadTaskRequest
                 * @return CreateLogDownloadTaskOutcome
                 */
                CreateLogDownloadTaskOutcome CreateLogDownloadTask(const Model::CreateLogDownloadTaskRequest &request);
                void CreateLogDownloadTaskAsync(const Model::CreateLogDownloadTaskRequest& request, const CreateLogDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLogDownloadTaskOutcomeCallable CreateLogDownloadTaskCallable(const Model::CreateLogDownloadTaskRequest& request);

                /**
                 *This API is used to delete a log download task.
                 * @param req DeleteLogDownloadTaskRequest
                 * @return DeleteLogDownloadTaskOutcome
                 */
                DeleteLogDownloadTaskOutcome DeleteLogDownloadTask(const Model::DeleteLogDownloadTaskRequest &request);
                void DeleteLogDownloadTaskAsync(const Model::DeleteLogDownloadTaskRequest& request, const DeleteLogDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLogDownloadTaskOutcomeCallable DeleteLogDownloadTaskCallable(const Model::DeleteLogDownloadTaskRequest& request);

                /**
                 *This API is used to query the asynchronous task status.
                 * @param req DescribeAsyncRequestInfoRequest
                 * @return DescribeAsyncRequestInfoOutcome
                 */
                DescribeAsyncRequestInfoOutcome DescribeAsyncRequestInfo(const Model::DescribeAsyncRequestInfoRequest &request);
                void DescribeAsyncRequestInfoAsync(const Model::DescribeAsyncRequestInfoRequest& request, const DescribeAsyncRequestInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAsyncRequestInfoOutcomeCallable DescribeAsyncRequestInfoCallable(const Model::DescribeAsyncRequestInfoRequest& request);

                /**
                 *This API is used to query information about the backup download task.
                 * @param req DescribeBackupDownloadTaskRequest
                 * @return DescribeBackupDownloadTaskOutcome
                 */
                DescribeBackupDownloadTaskOutcome DescribeBackupDownloadTask(const Model::DescribeBackupDownloadTaskRequest &request);
                void DescribeBackupDownloadTaskAsync(const Model::DescribeBackupDownloadTaskRequest& request, const DescribeBackupDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupDownloadTaskOutcomeCallable DescribeBackupDownloadTaskCallable(const Model::DescribeBackupDownloadTaskRequest& request);

                /**
                 *This API is used to query the client connection information on an instance, including the IP address for connection and the number of connections.
                 * @param req DescribeClientConnectionsRequest
                 * @return DescribeClientConnectionsOutcome
                 */
                DescribeClientConnectionsOutcome DescribeClientConnections(const Model::DescribeClientConnectionsRequest &request);
                void DescribeClientConnectionsAsync(const Model::DescribeClientConnectionsRequest& request, const DescribeClientConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClientConnectionsOutcomeCallable DescribeClientConnectionsCallable(const Model::DescribeClientConnectionsRequest& request);

                /**
                 *This API is used to query the list of instance backups. Currently, only backups created in the last seven days can be queried.
                 * @param req DescribeDBBackupsRequest
                 * @return DescribeDBBackupsOutcome
                 */
                DescribeDBBackupsOutcome DescribeDBBackups(const Model::DescribeDBBackupsRequest &request);
                void DescribeDBBackupsAsync(const Model::DescribeDBBackupsRequest& request, const DescribeDBBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBBackupsOutcomeCallable DescribeDBBackupsCallable(const Model::DescribeDBBackupsRequest& request);

                /**
                 *This API is used to get order details of purchase, renewal, and specification adjustment of a MongoDB instance.
                 * @param req DescribeDBInstanceDealRequest
                 * @return DescribeDBInstanceDealOutcome
                 */
                DescribeDBInstanceDealOutcome DescribeDBInstanceDeal(const Model::DescribeDBInstanceDealRequest &request);
                void DescribeDBInstanceDealAsync(const Model::DescribeDBInstanceDealRequest& request, const DescribeDBInstanceDealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceDealOutcomeCallable DescribeDBInstanceDealCallable(const Model::DescribeDBInstanceDealRequest& request);

                /**
                 *This API is used to query the table information on a database.
                 * @param req DescribeDBInstanceNamespaceRequest
                 * @return DescribeDBInstanceNamespaceOutcome
                 */
                DescribeDBInstanceNamespaceOutcome DescribeDBInstanceNamespace(const Model::DescribeDBInstanceNamespaceRequest &request);
                void DescribeDBInstanceNamespaceAsync(const Model::DescribeDBInstanceNamespaceRequest& request, const DescribeDBInstanceNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceNamespaceOutcomeCallable DescribeDBInstanceNamespaceCallable(const Model::DescribeDBInstanceNamespaceRequest& request);

                /**
                 *This API is used to query node attributes, such as the AZ, node name, address, role, status, delay between primary and secondary nodes, priority, voting right, and tags.
                 * @param req DescribeDBInstanceNodePropertyRequest
                 * @return DescribeDBInstanceNodePropertyOutcome
                 */
                DescribeDBInstanceNodePropertyOutcome DescribeDBInstanceNodeProperty(const Model::DescribeDBInstanceNodePropertyRequest &request);
                void DescribeDBInstanceNodePropertyAsync(const Model::DescribeDBInstanceNodePropertyRequest& request, const DescribeDBInstanceNodePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceNodePropertyOutcomeCallable DescribeDBInstanceNodePropertyCallable(const Model::DescribeDBInstanceNodePropertyRequest& request);

                /**
                 *This API is used to query the list of TencentDB for MongoDB instances. It supports filtering primary instances, disaster recovery instances, and read-only instances by project ID, instance ID, instance status, and other conditions.
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *This API is used to query slow log details of the instance.
                 * @param req DescribeDetailedSlowLogsRequest
                 * @return DescribeDetailedSlowLogsOutcome
                 */
                DescribeDetailedSlowLogsOutcome DescribeDetailedSlowLogs(const Model::DescribeDetailedSlowLogsRequest &request);
                void DescribeDetailedSlowLogsAsync(const Model::DescribeDetailedSlowLogsRequest& request, const DescribeDetailedSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDetailedSlowLogsOutcomeCallable DescribeDetailedSlowLogsCallable(const Model::DescribeDetailedSlowLogsRequest& request);

                /**
                 *This API is used to query the list of parameters that can be modified for the current instance.
                 * @param req DescribeInstanceParamsRequest
                 * @return DescribeInstanceParamsOutcome
                 */
                DescribeInstanceParamsOutcome DescribeInstanceParams(const Model::DescribeInstanceParamsRequest &request);
                void DescribeInstanceParamsAsync(const Model::DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceParamsOutcomeCallable DescribeInstanceParamsCallable(const Model::DescribeInstanceParamsRequest& request);

                /**
                 *This API is used to view the enabling status of Secure Sockets Layer (SSL) for an instance.
                 * @param req DescribeInstanceSSLRequest
                 * @return DescribeInstanceSSLOutcome
                 */
                DescribeInstanceSSLOutcome DescribeInstanceSSL(const Model::DescribeInstanceSSLRequest &request);
                void DescribeInstanceSSLAsync(const Model::DescribeInstanceSSLRequest& request, const DescribeInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceSSLOutcomeCallable DescribeInstanceSSLCallable(const Model::DescribeInstanceSSLRequest& request);

                /**
                 *This API is used to query a log download task.
                 * @param req DescribeLogDownloadTasksRequest
                 * @return DescribeLogDownloadTasksOutcome
                 */
                DescribeLogDownloadTasksOutcome DescribeLogDownloadTasks(const Model::DescribeLogDownloadTasksRequest &request);
                void DescribeLogDownloadTasksAsync(const Model::DescribeLogDownloadTasksRequest& request, const DescribeLogDownloadTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogDownloadTasksOutcomeCallable DescribeLogDownloadTasksCallable(const Model::DescribeLogDownloadTasksRequest& request);

                /**
                 *This API is used to query running logs.
                 * @param req DescribeMongodbLogsRequest
                 * @return DescribeMongodbLogsOutcome
                 */
                DescribeMongodbLogsOutcome DescribeMongodbLogs(const Model::DescribeMongodbLogsRequest &request);
                void DescribeMongodbLogsAsync(const Model::DescribeMongodbLogsRequest& request, const DescribeMongodbLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMongodbLogsOutcomeCallable DescribeMongodbLogsCallable(const Model::DescribeMongodbLogsRequest& request);

                /**
                 *This API is used to query security groups bound to an instance.
                 * @param req DescribeSecurityGroupRequest
                 * @return DescribeSecurityGroupOutcome
                 */
                DescribeSecurityGroupOutcome DescribeSecurityGroup(const Model::DescribeSecurityGroupRequest &request);
                void DescribeSecurityGroupAsync(const Model::DescribeSecurityGroupRequest& request, const DescribeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupOutcomeCallable DescribeSecurityGroupCallable(const Model::DescribeSecurityGroupRequest& request);

                /**
                 *This API is used to get the slow log statistics of a database instance.
                 * @param req DescribeSlowLogPatternsRequest
                 * @return DescribeSlowLogPatternsOutcome
                 */
                DescribeSlowLogPatternsOutcome DescribeSlowLogPatterns(const Model::DescribeSlowLogPatternsRequest &request);
                void DescribeSlowLogPatternsAsync(const Model::DescribeSlowLogPatternsRequest& request, const DescribeSlowLogPatternsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogPatternsOutcomeCallable DescribeSlowLogPatternsCallable(const Model::DescribeSlowLogPatternsRequest& request);

                /**
                 *This API is used to get the slow log information of a TencentDB instance. Only slow logs for the last 7 days can be queried.
                 * @param req DescribeSlowLogsRequest
                 * @return DescribeSlowLogsOutcome
                 */
                DescribeSlowLogsOutcome DescribeSlowLogs(const Model::DescribeSlowLogsRequest &request);
                void DescribeSlowLogsAsync(const Model::DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogsOutcomeCallable DescribeSlowLogsCallable(const Model::DescribeSlowLogsRequest& request);

                /**
                 *This API is used to query the sales specification of an instance.
                 * @param req DescribeSpecInfoRequest
                 * @return DescribeSpecInfoOutcome
                 */
                DescribeSpecInfoOutcome DescribeSpecInfo(const Model::DescribeSpecInfoRequest &request);
                void DescribeSpecInfoAsync(const Model::DescribeSpecInfoRequest& request, const DescribeSpecInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpecInfoOutcomeCallable DescribeSpecInfoCallable(const Model::DescribeSpecInfoRequest& request);

                /**
                 *This API is used to run the `FlushRouterConfig` command on all mongos instances.
                 * @param req FlushInstanceRouterConfigRequest
                 * @return FlushInstanceRouterConfigOutcome
                 */
                FlushInstanceRouterConfigOutcome FlushInstanceRouterConfig(const Model::FlushInstanceRouterConfigRequest &request);
                void FlushInstanceRouterConfigAsync(const Model::FlushInstanceRouterConfigRequest& request, const FlushInstanceRouterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FlushInstanceRouterConfigOutcomeCallable FlushInstanceRouterConfigCallable(const Model::FlushInstanceRouterConfigRequest& request);

                /**
                 *This API is used to query price of instance creation. The `region` parameter must be passed in this API, otherwise verification will fail. This API allows queries only for purchasable instance specifications.
                 * @param req InquirePriceCreateDBInstancesRequest
                 * @return InquirePriceCreateDBInstancesOutcome
                 */
                InquirePriceCreateDBInstancesOutcome InquirePriceCreateDBInstances(const Model::InquirePriceCreateDBInstancesRequest &request);
                void InquirePriceCreateDBInstancesAsync(const Model::InquirePriceCreateDBInstancesRequest& request, const InquirePriceCreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceCreateDBInstancesOutcomeCallable InquirePriceCreateDBInstancesCallable(const Model::InquirePriceCreateDBInstancesRequest& request);

                /**
                 *This API is used to query the price of instance specification adjustment.
                 * @param req InquirePriceModifyDBInstanceSpecRequest
                 * @return InquirePriceModifyDBInstanceSpecOutcome
                 */
                InquirePriceModifyDBInstanceSpecOutcome InquirePriceModifyDBInstanceSpec(const Model::InquirePriceModifyDBInstanceSpecRequest &request);
                void InquirePriceModifyDBInstanceSpecAsync(const Model::InquirePriceModifyDBInstanceSpecRequest& request, const InquirePriceModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceModifyDBInstanceSpecOutcomeCallable InquirePriceModifyDBInstanceSpecCallable(const Model::InquirePriceModifyDBInstanceSpecRequest& request);

                /**
                 *This API is used to query the renewal price of a monthly subscription instance.
                 * @param req InquirePriceRenewDBInstancesRequest
                 * @return InquirePriceRenewDBInstancesOutcome
                 */
                InquirePriceRenewDBInstancesOutcome InquirePriceRenewDBInstances(const Model::InquirePriceRenewDBInstancesRequest &request);
                void InquirePriceRenewDBInstancesAsync(const Model::InquirePriceRenewDBInstancesRequest& request, const InquirePriceRenewDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceRenewDBInstancesOutcomeCallable InquirePriceRenewDBInstancesCallable(const Model::InquirePriceRenewDBInstancesRequest& request);

                /**
                 *This API is used to set the SSL status for an instance.
                 * @param req InstanceEnableSSLRequest
                 * @return InstanceEnableSSLOutcome
                 */
                InstanceEnableSSLOutcome InstanceEnableSSL(const Model::InstanceEnableSSLRequest &request);
                void InstanceEnableSSLAsync(const Model::InstanceEnableSSLRequest& request, const InstanceEnableSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstanceEnableSSLOutcomeCallable InstanceEnableSSLCallable(const Model::InstanceEnableSSLRequest& request);

                /**
                 *This API is used to isolate a pay-as-you-go TencentDB for MongoDB instance. After isolation, the instance is retained in the recycle bin, and data cannot be written into it. After a certain period of isolation, the instance is deleted permanently. For the retention time in the recycle bin, see the pay-as-you-go service terms. The deleted pay-as-you-go instance cannot be recovered. Proceed with caution.
                 * @param req IsolateDBInstanceRequest
                 * @return IsolateDBInstanceOutcome
                 */
                IsolateDBInstanceOutcome IsolateDBInstance(const Model::IsolateDBInstanceRequest &request);
                void IsolateDBInstanceAsync(const Model::IsolateDBInstanceRequest& request, const IsolateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDBInstanceOutcomeCallable IsolateDBInstanceCallable(const Model::IsolateDBInstanceRequest& request);

                /**
                 *This API is used to modify the network information on a TencentDB for MongoDB instance. It supports switching from a basic network to a VPC network or from one VPC network to another VPC network.
                 * @param req ModifyDBInstanceNetworkAddressRequest
                 * @return ModifyDBInstanceNetworkAddressOutcome
                 */
                ModifyDBInstanceNetworkAddressOutcome ModifyDBInstanceNetworkAddress(const Model::ModifyDBInstanceNetworkAddressRequest &request);
                void ModifyDBInstanceNetworkAddressAsync(const Model::ModifyDBInstanceNetworkAddressRequest& request, const ModifyDBInstanceNetworkAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceNetworkAddressOutcomeCallable ModifyDBInstanceNetworkAddressCallable(const Model::ModifyDBInstanceNetworkAddressRequest& request);

                /**
                 *This API is used to modify security groups bound to an instance.
                 * @param req ModifyDBInstanceSecurityGroupRequest
                 * @return ModifyDBInstanceSecurityGroupOutcome
                 */
                ModifyDBInstanceSecurityGroupOutcome ModifyDBInstanceSecurityGroup(const Model::ModifyDBInstanceSecurityGroupRequest &request);
                void ModifyDBInstanceSecurityGroupAsync(const Model::ModifyDBInstanceSecurityGroupRequest& request, const ModifyDBInstanceSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSecurityGroupOutcomeCallable ModifyDBInstanceSecurityGroupCallable(const Model::ModifyDBInstanceSecurityGroupRequest& request);

                /**
                 *This API is used to adjust the TencentDB for MongoDB instance configuration. The [DescribeSpecInfo](https://www.tencentcloud.comom/document/product/240/38567?from_cn_redirect=1) API can be called to query and obtain the supported sales specifications.
                 * @param req ModifyDBInstanceSpecRequest
                 * @return ModifyDBInstanceSpecOutcome
                 */
                ModifyDBInstanceSpecOutcome ModifyDBInstanceSpec(const Model::ModifyDBInstanceSpecRequest &request);
                void ModifyDBInstanceSpecAsync(const Model::ModifyDBInstanceSpecRequest& request, const ModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSpecOutcomeCallable ModifyDBInstanceSpecCallable(const Model::ModifyDBInstanceSpecRequest& request);

                /**
                 *This API is used to deactivate isolated TencentDB instances immediately. The instances must be in isolated status.
                 * @param req OfflineIsolatedDBInstanceRequest
                 * @return OfflineIsolatedDBInstanceOutcome
                 */
                OfflineIsolatedDBInstanceOutcome OfflineIsolatedDBInstance(const Model::OfflineIsolatedDBInstanceRequest &request);
                void OfflineIsolatedDBInstanceAsync(const Model::OfflineIsolatedDBInstanceRequest& request, const OfflineIsolatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OfflineIsolatedDBInstanceOutcomeCallable OfflineIsolatedDBInstanceCallable(const Model::OfflineIsolatedDBInstanceRequest& request);

                /**
                 *This API is used to rename a TencentDB instance.
                 * @param req RenameInstanceRequest
                 * @return RenameInstanceOutcome
                 */
                RenameInstanceOutcome RenameInstance(const Model::RenameInstanceRequest &request);
                void RenameInstanceAsync(const Model::RenameInstanceRequest& request, const RenameInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenameInstanceOutcomeCallable RenameInstanceCallable(const Model::RenameInstanceRequest& request);

                /**
                 *This API is used to renew a monthly subscription TencentDB instance. Only monthly subscription instances are supported, while pay-as-you-go instances do not need to be renewed.
                 * @param req RenewDBInstancesRequest
                 * @return RenewDBInstancesOutcome
                 */
                RenewDBInstancesOutcome RenewDBInstances(const Model::RenewDBInstancesRequest &request);
                void RenewDBInstancesAsync(const Model::RenewDBInstancesRequest& request, const RenewDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewDBInstancesOutcomeCallable RenewDBInstancesCallable(const Model::RenewDBInstancesRequest& request);

                /**
                 *This API is used to reset the instance access password.
                 * @param req ResetDBInstancePasswordRequest
                 * @return ResetDBInstancePasswordOutcome
                 */
                ResetDBInstancePasswordOutcome ResetDBInstancePassword(const Model::ResetDBInstancePasswordRequest &request);
                void ResetDBInstancePasswordAsync(const Model::ResetDBInstancePasswordRequest& request, const ResetDBInstancePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetDBInstancePasswordOutcomeCallable ResetDBInstancePasswordCallable(const Model::ResetDBInstancePasswordRequest& request);

                /**
                 *This API is used to set instance termination protection.
                 * @param req SetDBInstanceDeletionProtectionRequest
                 * @return SetDBInstanceDeletionProtectionOutcome
                 */
                SetDBInstanceDeletionProtectionOutcome SetDBInstanceDeletionProtection(const Model::SetDBInstanceDeletionProtectionRequest &request);
                void SetDBInstanceDeletionProtectionAsync(const Model::SetDBInstanceDeletionProtectionRequest& request, const SetDBInstanceDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetDBInstanceDeletionProtectionOutcomeCallable SetDBInstanceDeletionProtectionCallable(const Model::SetDBInstanceDeletionProtectionRequest& request);

                /**
                 *This API is used to terminate monthly subscription billing instances.
                 * @param req TerminateDBInstancesRequest
                 * @return TerminateDBInstancesOutcome
                 */
                TerminateDBInstancesOutcome TerminateDBInstances(const Model::TerminateDBInstancesRequest &request);
                void TerminateDBInstancesAsync(const Model::TerminateDBInstancesRequest& request, const TerminateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateDBInstancesOutcomeCallable TerminateDBInstancesCallable(const Model::TerminateDBInstancesRequest& request);

                /**
                 *This API is used to upgrade the kernel version of the database instance.
                 * @param req UpgradeDBInstanceKernelVersionRequest
                 * @return UpgradeDBInstanceKernelVersionOutcome
                 */
                UpgradeDBInstanceKernelVersionOutcome UpgradeDBInstanceKernelVersion(const Model::UpgradeDBInstanceKernelVersionRequest &request);
                void UpgradeDBInstanceKernelVersionAsync(const Model::UpgradeDBInstanceKernelVersionRequest& request, const UpgradeDBInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceKernelVersionOutcomeCallable UpgradeDBInstanceKernelVersionCallable(const Model::UpgradeDBInstanceKernelVersionRequest& request);

                /**
                 *This API is used to upgrade the database kernel across versions. Currently, it is only supported to upgrade from version 3.6 to 4.0, 4.0 to 4.2, 4.2 to 4.4, and 4.4 to 5.0.
                 * @param req UpgradeDbInstanceVersionRequest
                 * @return UpgradeDbInstanceVersionOutcome
                 */
                UpgradeDbInstanceVersionOutcome UpgradeDbInstanceVersion(const Model::UpgradeDbInstanceVersionRequest &request);
                void UpgradeDbInstanceVersionAsync(const Model::UpgradeDbInstanceVersionRequest& request, const UpgradeDbInstanceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDbInstanceVersionOutcomeCallable UpgradeDbInstanceVersionCallable(const Model::UpgradeDbInstanceVersionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MONGODBCLIENT_H_
