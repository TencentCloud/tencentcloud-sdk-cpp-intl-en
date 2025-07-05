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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_POSTGRESCLIENT_H_
#define TENCENTCLOUD_POSTGRES_V20170312_POSTGRESCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/postgres/v20170312/model/AddDBInstanceToReadOnlyGroupRequest.h>
#include <tencentcloud/postgres/v20170312/model/AddDBInstanceToReadOnlyGroupResponse.h>
#include <tencentcloud/postgres/v20170312/model/CloneDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/CloneDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/CloseDBExtranetAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/CloseDBExtranetAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/CloseServerlessDBExtranetAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/CloseServerlessDBExtranetAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateBaseBackupRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateBaseBackupResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateDBInstanceNetworkAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateDBInstanceNetworkAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateParameterTemplateRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateParameterTemplateResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyGroupRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyGroupResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyGroupNetworkAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyGroupNetworkAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/CreateServerlessDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/CreateServerlessDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteBaseBackupRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteBaseBackupResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteDBInstanceNetworkAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteDBInstanceNetworkAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteLogBackupRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteLogBackupResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteParameterTemplateRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteParameterTemplateResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteReadOnlyGroupRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteReadOnlyGroupResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteReadOnlyGroupNetworkAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteReadOnlyGroupNetworkAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/DeleteServerlessDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/DeleteServerlessDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAccountsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAccountsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAvailableRecoveryTimeRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeAvailableRecoveryTimeResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupDownloadRestrictionRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupDownloadRestrictionResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupDownloadURLRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupDownloadURLResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupOverviewRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupOverviewResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupPlansRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupPlansResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupSummariesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBackupSummariesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBaseBackupsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeBaseBackupsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeClassesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeClassesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeCloneDBInstanceSpecRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeCloneDBInstanceSpecResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBBackupsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBBackupsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBErrlogsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBErrlogsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceAttributeRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceAttributeResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceHAConfigRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceHAConfigResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceParametersRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceParametersResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBSlowlogsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBSlowlogsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBVersionsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBVersionsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBXlogsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDBXlogsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDatabasesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDatabasesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDefaultParametersRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeDefaultParametersResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeEncryptionKeysRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeEncryptionKeysResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeLogBackupsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeLogBackupsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeOrdersRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeOrdersResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeParameterTemplateAttributesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeParameterTemplateAttributesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeParameterTemplatesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeParameterTemplatesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeParamsEventRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeParamsEventResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeProductConfigRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeProductConfigResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeReadOnlyGroupsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeReadOnlyGroupsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeRegionsRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeRegionsResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeServerlessDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeServerlessDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeSlowQueryAnalysisRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeSlowQueryAnalysisResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeSlowQueryListRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeSlowQueryListResponse.h>
#include <tencentcloud/postgres/v20170312/model/DescribeZonesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DescribeZonesResponse.h>
#include <tencentcloud/postgres/v20170312/model/DestroyDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/DestroyDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/DisIsolateDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/DisIsolateDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/InitDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/InitDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceCreateDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceCreateDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceRenewDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceRenewDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceUpgradeDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/InquiryPriceUpgradeDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/IsolateDBInstancesRequest.h>
#include <tencentcloud/postgres/v20170312/model/IsolateDBInstancesResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyAccountRemarkRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyAccountRemarkResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyBackupDownloadRestrictionRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyBackupDownloadRestrictionResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyBackupPlanRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyBackupPlanResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyBaseBackupExpireTimeRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyBaseBackupExpireTimeResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceChargeTypeRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceChargeTypeResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceDeploymentRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceDeploymentResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceHAConfigRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceHAConfigResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceNameRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceNameResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceParametersRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceParametersResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceReadOnlyGroupRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceReadOnlyGroupResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceSpecRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceSpecResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstancesProjectRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyDBInstancesProjectResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyParameterTemplateRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyParameterTemplateResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifyReadOnlyGroupConfigRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifyReadOnlyGroupConfigResponse.h>
#include <tencentcloud/postgres/v20170312/model/ModifySwitchTimePeriodRequest.h>
#include <tencentcloud/postgres/v20170312/model/ModifySwitchTimePeriodResponse.h>
#include <tencentcloud/postgres/v20170312/model/OpenDBExtranetAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/OpenDBExtranetAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/OpenServerlessDBExtranetAccessRequest.h>
#include <tencentcloud/postgres/v20170312/model/OpenServerlessDBExtranetAccessResponse.h>
#include <tencentcloud/postgres/v20170312/model/RebalanceReadOnlyGroupRequest.h>
#include <tencentcloud/postgres/v20170312/model/RebalanceReadOnlyGroupResponse.h>
#include <tencentcloud/postgres/v20170312/model/RemoveDBInstanceFromReadOnlyGroupRequest.h>
#include <tencentcloud/postgres/v20170312/model/RemoveDBInstanceFromReadOnlyGroupResponse.h>
#include <tencentcloud/postgres/v20170312/model/RenewInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/RenewInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/postgres/v20170312/model/ResetAccountPasswordResponse.h>
#include <tencentcloud/postgres/v20170312/model/RestartDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/RestartDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/RestoreDBInstanceObjectsRequest.h>
#include <tencentcloud/postgres/v20170312/model/RestoreDBInstanceObjectsResponse.h>
#include <tencentcloud/postgres/v20170312/model/SetAutoRenewFlagRequest.h>
#include <tencentcloud/postgres/v20170312/model/SetAutoRenewFlagResponse.h>
#include <tencentcloud/postgres/v20170312/model/SwitchDBInstancePrimaryRequest.h>
#include <tencentcloud/postgres/v20170312/model/SwitchDBInstancePrimaryResponse.h>
#include <tencentcloud/postgres/v20170312/model/UpgradeDBInstanceRequest.h>
#include <tencentcloud/postgres/v20170312/model/UpgradeDBInstanceResponse.h>
#include <tencentcloud/postgres/v20170312/model/UpgradeDBInstanceKernelVersionRequest.h>
#include <tencentcloud/postgres/v20170312/model/UpgradeDBInstanceKernelVersionResponse.h>
#include <tencentcloud/postgres/v20170312/model/UpgradeDBInstanceMajorVersionRequest.h>
#include <tencentcloud/postgres/v20170312/model/UpgradeDBInstanceMajorVersionResponse.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            class PostgresClient : public AbstractClient
            {
            public:
                PostgresClient(const Credential &credential, const std::string &region);
                PostgresClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddDBInstanceToReadOnlyGroupResponse> AddDBInstanceToReadOnlyGroupOutcome;
                typedef std::future<AddDBInstanceToReadOnlyGroupOutcome> AddDBInstanceToReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::AddDBInstanceToReadOnlyGroupRequest&, AddDBInstanceToReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddDBInstanceToReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CloneDBInstanceResponse> CloneDBInstanceOutcome;
                typedef std::future<CloneDBInstanceOutcome> CloneDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CloneDBInstanceRequest&, CloneDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseDBExtranetAccessResponse> CloseDBExtranetAccessOutcome;
                typedef std::future<CloseDBExtranetAccessOutcome> CloseDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CloseDBExtranetAccessRequest&, CloseDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseDBExtranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseServerlessDBExtranetAccessResponse> CloseServerlessDBExtranetAccessOutcome;
                typedef std::future<CloseServerlessDBExtranetAccessOutcome> CloseServerlessDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CloseServerlessDBExtranetAccessRequest&, CloseServerlessDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseServerlessDBExtranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBaseBackupResponse> CreateBaseBackupOutcome;
                typedef std::future<CreateBaseBackupOutcome> CreateBaseBackupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateBaseBackupRequest&, CreateBaseBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBaseBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBInstanceNetworkAccessResponse> CreateDBInstanceNetworkAccessOutcome;
                typedef std::future<CreateDBInstanceNetworkAccessOutcome> CreateDBInstanceNetworkAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateDBInstanceNetworkAccessRequest&, CreateDBInstanceNetworkAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceNetworkAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBInstancesResponse> CreateDBInstancesOutcome;
                typedef std::future<CreateDBInstancesOutcome> CreateDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateDBInstancesRequest&, CreateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstancesResponse> CreateInstancesOutcome;
                typedef std::future<CreateInstancesOutcome> CreateInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateInstancesRequest&, CreateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateParameterTemplateResponse> CreateParameterTemplateOutcome;
                typedef std::future<CreateParameterTemplateOutcome> CreateParameterTemplateOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateParameterTemplateRequest&, CreateParameterTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateParameterTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReadOnlyDBInstanceResponse> CreateReadOnlyDBInstanceOutcome;
                typedef std::future<CreateReadOnlyDBInstanceOutcome> CreateReadOnlyDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateReadOnlyDBInstanceRequest&, CreateReadOnlyDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReadOnlyDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReadOnlyGroupResponse> CreateReadOnlyGroupOutcome;
                typedef std::future<CreateReadOnlyGroupOutcome> CreateReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateReadOnlyGroupRequest&, CreateReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReadOnlyGroupNetworkAccessResponse> CreateReadOnlyGroupNetworkAccessOutcome;
                typedef std::future<CreateReadOnlyGroupNetworkAccessOutcome> CreateReadOnlyGroupNetworkAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateReadOnlyGroupNetworkAccessRequest&, CreateReadOnlyGroupNetworkAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReadOnlyGroupNetworkAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServerlessDBInstanceResponse> CreateServerlessDBInstanceOutcome;
                typedef std::future<CreateServerlessDBInstanceOutcome> CreateServerlessDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::CreateServerlessDBInstanceRequest&, CreateServerlessDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServerlessDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBaseBackupResponse> DeleteBaseBackupOutcome;
                typedef std::future<DeleteBaseBackupOutcome> DeleteBaseBackupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteBaseBackupRequest&, DeleteBaseBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBaseBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDBInstanceNetworkAccessResponse> DeleteDBInstanceNetworkAccessOutcome;
                typedef std::future<DeleteDBInstanceNetworkAccessOutcome> DeleteDBInstanceNetworkAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteDBInstanceNetworkAccessRequest&, DeleteDBInstanceNetworkAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBInstanceNetworkAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLogBackupResponse> DeleteLogBackupOutcome;
                typedef std::future<DeleteLogBackupOutcome> DeleteLogBackupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteLogBackupRequest&, DeleteLogBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteParameterTemplateResponse> DeleteParameterTemplateOutcome;
                typedef std::future<DeleteParameterTemplateOutcome> DeleteParameterTemplateOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteParameterTemplateRequest&, DeleteParameterTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteParameterTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReadOnlyGroupResponse> DeleteReadOnlyGroupOutcome;
                typedef std::future<DeleteReadOnlyGroupOutcome> DeleteReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteReadOnlyGroupRequest&, DeleteReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReadOnlyGroupNetworkAccessResponse> DeleteReadOnlyGroupNetworkAccessOutcome;
                typedef std::future<DeleteReadOnlyGroupNetworkAccessOutcome> DeleteReadOnlyGroupNetworkAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteReadOnlyGroupNetworkAccessRequest&, DeleteReadOnlyGroupNetworkAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReadOnlyGroupNetworkAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteServerlessDBInstanceResponse> DeleteServerlessDBInstanceOutcome;
                typedef std::future<DeleteServerlessDBInstanceOutcome> DeleteServerlessDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DeleteServerlessDBInstanceRequest&, DeleteServerlessDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServerlessDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAvailableRecoveryTimeResponse> DescribeAvailableRecoveryTimeOutcome;
                typedef std::future<DescribeAvailableRecoveryTimeOutcome> DescribeAvailableRecoveryTimeOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeAvailableRecoveryTimeRequest&, DescribeAvailableRecoveryTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableRecoveryTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupDownloadRestrictionResponse> DescribeBackupDownloadRestrictionOutcome;
                typedef std::future<DescribeBackupDownloadRestrictionOutcome> DescribeBackupDownloadRestrictionOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeBackupDownloadRestrictionRequest&, DescribeBackupDownloadRestrictionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupDownloadRestrictionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupDownloadURLResponse> DescribeBackupDownloadURLOutcome;
                typedef std::future<DescribeBackupDownloadURLOutcome> DescribeBackupDownloadURLOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeBackupDownloadURLRequest&, DescribeBackupDownloadURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupDownloadURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupOverviewResponse> DescribeBackupOverviewOutcome;
                typedef std::future<DescribeBackupOverviewOutcome> DescribeBackupOverviewOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeBackupOverviewRequest&, DescribeBackupOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupPlansResponse> DescribeBackupPlansOutcome;
                typedef std::future<DescribeBackupPlansOutcome> DescribeBackupPlansOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeBackupPlansRequest&, DescribeBackupPlansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPlansAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupSummariesResponse> DescribeBackupSummariesOutcome;
                typedef std::future<DescribeBackupSummariesOutcome> DescribeBackupSummariesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeBackupSummariesRequest&, DescribeBackupSummariesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupSummariesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaseBackupsResponse> DescribeBaseBackupsOutcome;
                typedef std::future<DescribeBaseBackupsOutcome> DescribeBaseBackupsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeBaseBackupsRequest&, DescribeBaseBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaseBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClassesResponse> DescribeClassesOutcome;
                typedef std::future<DescribeClassesOutcome> DescribeClassesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeClassesRequest&, DescribeClassesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloneDBInstanceSpecResponse> DescribeCloneDBInstanceSpecOutcome;
                typedef std::future<DescribeCloneDBInstanceSpecOutcome> DescribeCloneDBInstanceSpecOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeCloneDBInstanceSpecRequest&, DescribeCloneDBInstanceSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloneDBInstanceSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBBackupsResponse> DescribeDBBackupsOutcome;
                typedef std::future<DescribeDBBackupsOutcome> DescribeDBBackupsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBBackupsRequest&, DescribeDBBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBErrlogsResponse> DescribeDBErrlogsOutcome;
                typedef std::future<DescribeDBErrlogsOutcome> DescribeDBErrlogsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBErrlogsRequest&, DescribeDBErrlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBErrlogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceAttributeResponse> DescribeDBInstanceAttributeOutcome;
                typedef std::future<DescribeDBInstanceAttributeOutcome> DescribeDBInstanceAttributeOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBInstanceAttributeRequest&, DescribeDBInstanceAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceHAConfigResponse> DescribeDBInstanceHAConfigOutcome;
                typedef std::future<DescribeDBInstanceHAConfigOutcome> DescribeDBInstanceHAConfigOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBInstanceHAConfigRequest&, DescribeDBInstanceHAConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceHAConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceParametersResponse> DescribeDBInstanceParametersOutcome;
                typedef std::future<DescribeDBInstanceParametersOutcome> DescribeDBInstanceParametersOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBInstanceParametersRequest&, DescribeDBInstanceParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceSecurityGroupsResponse> DescribeDBInstanceSecurityGroupsOutcome;
                typedef std::future<DescribeDBInstanceSecurityGroupsOutcome> DescribeDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBInstanceSecurityGroupsRequest&, DescribeDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSlowlogsResponse> DescribeDBSlowlogsOutcome;
                typedef std::future<DescribeDBSlowlogsOutcome> DescribeDBSlowlogsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBSlowlogsRequest&, DescribeDBSlowlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSlowlogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBVersionsResponse> DescribeDBVersionsOutcome;
                typedef std::future<DescribeDBVersionsOutcome> DescribeDBVersionsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBVersionsRequest&, DescribeDBVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBXlogsResponse> DescribeDBXlogsOutcome;
                typedef std::future<DescribeDBXlogsOutcome> DescribeDBXlogsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDBXlogsRequest&, DescribeDBXlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBXlogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabasesResponse> DescribeDatabasesOutcome;
                typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDatabasesRequest&, DescribeDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefaultParametersResponse> DescribeDefaultParametersOutcome;
                typedef std::future<DescribeDefaultParametersOutcome> DescribeDefaultParametersOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeDefaultParametersRequest&, DescribeDefaultParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEncryptionKeysResponse> DescribeEncryptionKeysOutcome;
                typedef std::future<DescribeEncryptionKeysOutcome> DescribeEncryptionKeysOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeEncryptionKeysRequest&, DescribeEncryptionKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEncryptionKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogBackupsResponse> DescribeLogBackupsOutcome;
                typedef std::future<DescribeLogBackupsOutcome> DescribeLogBackupsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeLogBackupsRequest&, DescribeLogBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrdersResponse> DescribeOrdersOutcome;
                typedef std::future<DescribeOrdersOutcome> DescribeOrdersOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeOrdersRequest&, DescribeOrdersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrdersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeParameterTemplateAttributesResponse> DescribeParameterTemplateAttributesOutcome;
                typedef std::future<DescribeParameterTemplateAttributesOutcome> DescribeParameterTemplateAttributesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeParameterTemplateAttributesRequest&, DescribeParameterTemplateAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterTemplateAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeParameterTemplatesResponse> DescribeParameterTemplatesOutcome;
                typedef std::future<DescribeParameterTemplatesOutcome> DescribeParameterTemplatesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeParameterTemplatesRequest&, DescribeParameterTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeParamsEventResponse> DescribeParamsEventOutcome;
                typedef std::future<DescribeParamsEventOutcome> DescribeParamsEventOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeParamsEventRequest&, DescribeParamsEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParamsEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductConfigResponse> DescribeProductConfigOutcome;
                typedef std::future<DescribeProductConfigOutcome> DescribeProductConfigOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeProductConfigRequest&, DescribeProductConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReadOnlyGroupsResponse> DescribeReadOnlyGroupsOutcome;
                typedef std::future<DescribeReadOnlyGroupsOutcome> DescribeReadOnlyGroupsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeReadOnlyGroupsRequest&, DescribeReadOnlyGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReadOnlyGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServerlessDBInstancesResponse> DescribeServerlessDBInstancesOutcome;
                typedef std::future<DescribeServerlessDBInstancesOutcome> DescribeServerlessDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeServerlessDBInstancesRequest&, DescribeServerlessDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServerlessDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowQueryAnalysisResponse> DescribeSlowQueryAnalysisOutcome;
                typedef std::future<DescribeSlowQueryAnalysisOutcome> DescribeSlowQueryAnalysisOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeSlowQueryAnalysisRequest&, DescribeSlowQueryAnalysisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowQueryAnalysisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowQueryListResponse> DescribeSlowQueryListOutcome;
                typedef std::future<DescribeSlowQueryListOutcome> DescribeSlowQueryListOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeSlowQueryListRequest&, DescribeSlowQueryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowQueryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyDBInstanceResponse> DestroyDBInstanceOutcome;
                typedef std::future<DestroyDBInstanceOutcome> DestroyDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DestroyDBInstanceRequest&, DestroyDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DisIsolateDBInstancesResponse> DisIsolateDBInstancesOutcome;
                typedef std::future<DisIsolateDBInstancesOutcome> DisIsolateDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::DisIsolateDBInstancesRequest&, DisIsolateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisIsolateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::InitDBInstancesResponse> InitDBInstancesOutcome;
                typedef std::future<InitDBInstancesOutcome> InitDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::InitDBInstancesRequest&, InitDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InitDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceCreateDBInstancesResponse> InquiryPriceCreateDBInstancesOutcome;
                typedef std::future<InquiryPriceCreateDBInstancesOutcome> InquiryPriceCreateDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::InquiryPriceCreateDBInstancesRequest&, InquiryPriceCreateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceRenewDBInstanceResponse> InquiryPriceRenewDBInstanceOutcome;
                typedef std::future<InquiryPriceRenewDBInstanceOutcome> InquiryPriceRenewDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::InquiryPriceRenewDBInstanceRequest&, InquiryPriceRenewDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceUpgradeDBInstanceResponse> InquiryPriceUpgradeDBInstanceOutcome;
                typedef std::future<InquiryPriceUpgradeDBInstanceOutcome> InquiryPriceUpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::InquiryPriceUpgradeDBInstanceRequest&, InquiryPriceUpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceUpgradeDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateDBInstancesResponse> IsolateDBInstancesOutcome;
                typedef std::future<IsolateDBInstancesOutcome> IsolateDBInstancesOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::IsolateDBInstancesRequest&, IsolateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountRemarkResponse> ModifyAccountRemarkOutcome;
                typedef std::future<ModifyAccountRemarkOutcome> ModifyAccountRemarkOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyAccountRemarkRequest&, ModifyAccountRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupDownloadRestrictionResponse> ModifyBackupDownloadRestrictionOutcome;
                typedef std::future<ModifyBackupDownloadRestrictionOutcome> ModifyBackupDownloadRestrictionOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyBackupDownloadRestrictionRequest&, ModifyBackupDownloadRestrictionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupDownloadRestrictionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupPlanResponse> ModifyBackupPlanOutcome;
                typedef std::future<ModifyBackupPlanOutcome> ModifyBackupPlanOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyBackupPlanRequest&, ModifyBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaseBackupExpireTimeResponse> ModifyBaseBackupExpireTimeOutcome;
                typedef std::future<ModifyBaseBackupExpireTimeOutcome> ModifyBaseBackupExpireTimeOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyBaseBackupExpireTimeRequest&, ModifyBaseBackupExpireTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaseBackupExpireTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceChargeTypeResponse> ModifyDBInstanceChargeTypeOutcome;
                typedef std::future<ModifyDBInstanceChargeTypeOutcome> ModifyDBInstanceChargeTypeOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceChargeTypeRequest&, ModifyDBInstanceChargeTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceChargeTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceDeploymentResponse> ModifyDBInstanceDeploymentOutcome;
                typedef std::future<ModifyDBInstanceDeploymentOutcome> ModifyDBInstanceDeploymentOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceDeploymentRequest&, ModifyDBInstanceDeploymentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceDeploymentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceHAConfigResponse> ModifyDBInstanceHAConfigOutcome;
                typedef std::future<ModifyDBInstanceHAConfigOutcome> ModifyDBInstanceHAConfigOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceHAConfigRequest&, ModifyDBInstanceHAConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceHAConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceNameResponse> ModifyDBInstanceNameOutcome;
                typedef std::future<ModifyDBInstanceNameOutcome> ModifyDBInstanceNameOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceNameRequest&, ModifyDBInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceParametersResponse> ModifyDBInstanceParametersOutcome;
                typedef std::future<ModifyDBInstanceParametersOutcome> ModifyDBInstanceParametersOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceParametersRequest&, ModifyDBInstanceParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceReadOnlyGroupResponse> ModifyDBInstanceReadOnlyGroupOutcome;
                typedef std::future<ModifyDBInstanceReadOnlyGroupOutcome> ModifyDBInstanceReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceReadOnlyGroupRequest&, ModifyDBInstanceReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSpecResponse> ModifyDBInstanceSpecOutcome;
                typedef std::future<ModifyDBInstanceSpecOutcome> ModifyDBInstanceSpecOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstanceSpecRequest&, ModifyDBInstanceSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstancesProjectResponse> ModifyDBInstancesProjectOutcome;
                typedef std::future<ModifyDBInstancesProjectOutcome> ModifyDBInstancesProjectOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyDBInstancesProjectRequest&, ModifyDBInstancesProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstancesProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyParameterTemplateResponse> ModifyParameterTemplateOutcome;
                typedef std::future<ModifyParameterTemplateOutcome> ModifyParameterTemplateOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyParameterTemplateRequest&, ModifyParameterTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParameterTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyReadOnlyGroupConfigResponse> ModifyReadOnlyGroupConfigOutcome;
                typedef std::future<ModifyReadOnlyGroupConfigOutcome> ModifyReadOnlyGroupConfigOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifyReadOnlyGroupConfigRequest&, ModifyReadOnlyGroupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReadOnlyGroupConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySwitchTimePeriodResponse> ModifySwitchTimePeriodOutcome;
                typedef std::future<ModifySwitchTimePeriodOutcome> ModifySwitchTimePeriodOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ModifySwitchTimePeriodRequest&, ModifySwitchTimePeriodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySwitchTimePeriodAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenDBExtranetAccessResponse> OpenDBExtranetAccessOutcome;
                typedef std::future<OpenDBExtranetAccessOutcome> OpenDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::OpenDBExtranetAccessRequest&, OpenDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenDBExtranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenServerlessDBExtranetAccessResponse> OpenServerlessDBExtranetAccessOutcome;
                typedef std::future<OpenServerlessDBExtranetAccessOutcome> OpenServerlessDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::OpenServerlessDBExtranetAccessRequest&, OpenServerlessDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenServerlessDBExtranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::RebalanceReadOnlyGroupResponse> RebalanceReadOnlyGroupOutcome;
                typedef std::future<RebalanceReadOnlyGroupOutcome> RebalanceReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::RebalanceReadOnlyGroupRequest&, RebalanceReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebalanceReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveDBInstanceFromReadOnlyGroupResponse> RemoveDBInstanceFromReadOnlyGroupOutcome;
                typedef std::future<RemoveDBInstanceFromReadOnlyGroupOutcome> RemoveDBInstanceFromReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::RemoveDBInstanceFromReadOnlyGroupRequest&, RemoveDBInstanceFromReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveDBInstanceFromReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewInstanceResponse> RenewInstanceOutcome;
                typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::RenewInstanceRequest&, RenewInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAccountPasswordResponse> ResetAccountPasswordOutcome;
                typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::ResetAccountPasswordRequest&, ResetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartDBInstanceResponse> RestartDBInstanceOutcome;
                typedef std::future<RestartDBInstanceOutcome> RestartDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::RestartDBInstanceRequest&, RestartDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RestoreDBInstanceObjectsResponse> RestoreDBInstanceObjectsOutcome;
                typedef std::future<RestoreDBInstanceObjectsOutcome> RestoreDBInstanceObjectsOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::RestoreDBInstanceObjectsRequest&, RestoreDBInstanceObjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestoreDBInstanceObjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::SetAutoRenewFlagResponse> SetAutoRenewFlagOutcome;
                typedef std::future<SetAutoRenewFlagOutcome> SetAutoRenewFlagOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::SetAutoRenewFlagRequest&, SetAutoRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetAutoRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchDBInstancePrimaryResponse> SwitchDBInstancePrimaryOutcome;
                typedef std::future<SwitchDBInstancePrimaryOutcome> SwitchDBInstancePrimaryOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::SwitchDBInstancePrimaryRequest&, SwitchDBInstancePrimaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstancePrimaryAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDBInstanceResponse> UpgradeDBInstanceOutcome;
                typedef std::future<UpgradeDBInstanceOutcome> UpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::UpgradeDBInstanceRequest&, UpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDBInstanceKernelVersionResponse> UpgradeDBInstanceKernelVersionOutcome;
                typedef std::future<UpgradeDBInstanceKernelVersionOutcome> UpgradeDBInstanceKernelVersionOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::UpgradeDBInstanceKernelVersionRequest&, UpgradeDBInstanceKernelVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceKernelVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDBInstanceMajorVersionResponse> UpgradeDBInstanceMajorVersionOutcome;
                typedef std::future<UpgradeDBInstanceMajorVersionOutcome> UpgradeDBInstanceMajorVersionOutcomeCallable;
                typedef std::function<void(const PostgresClient*, const Model::UpgradeDBInstanceMajorVersionRequest&, UpgradeDBInstanceMajorVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceMajorVersionAsyncHandler;



                /**
                 *This API is used to add a read-only replica to an RO group.
                 * @param req AddDBInstanceToReadOnlyGroupRequest
                 * @return AddDBInstanceToReadOnlyGroupOutcome
                 */
                AddDBInstanceToReadOnlyGroupOutcome AddDBInstanceToReadOnlyGroup(const Model::AddDBInstanceToReadOnlyGroupRequest &request);
                void AddDBInstanceToReadOnlyGroupAsync(const Model::AddDBInstanceToReadOnlyGroupRequest& request, const AddDBInstanceToReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddDBInstanceToReadOnlyGroupOutcomeCallable AddDBInstanceToReadOnlyGroupCallable(const Model::AddDBInstanceToReadOnlyGroupRequest& request);

                /**
                 *This API is used to clone an instance by specifying a backup set or a point in time.
                 * @param req CloneDBInstanceRequest
                 * @return CloneDBInstanceOutcome
                 */
                CloneDBInstanceOutcome CloneDBInstance(const Model::CloneDBInstanceRequest &request);
                void CloneDBInstanceAsync(const Model::CloneDBInstanceRequest& request, const CloneDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneDBInstanceOutcomeCallable CloneDBInstanceCallable(const Model::CloneDBInstanceRequest& request);

                /**
                 *This API is used to disable the public network address of an instance.
                 * @param req CloseDBExtranetAccessRequest
                 * @return CloseDBExtranetAccessOutcome
                 */
                CloseDBExtranetAccessOutcome CloseDBExtranetAccess(const Model::CloseDBExtranetAccessRequest &request);
                void CloseDBExtranetAccessAsync(const Model::CloseDBExtranetAccessRequest& request, const CloseDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseDBExtranetAccessOutcomeCallable CloseDBExtranetAccessCallable(const Model::CloseDBExtranetAccessRequest& request);

                /**
                 *This API is used to disable the public network address of a PostgreSQL for Serverless instance.
                 * @param req CloseServerlessDBExtranetAccessRequest
                 * @return CloseServerlessDBExtranetAccessOutcome
                 */
                CloseServerlessDBExtranetAccessOutcome CloseServerlessDBExtranetAccess(const Model::CloseServerlessDBExtranetAccessRequest &request);
                void CloseServerlessDBExtranetAccessAsync(const Model::CloseServerlessDBExtranetAccessRequest& request, const CloseServerlessDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseServerlessDBExtranetAccessOutcomeCallable CloseServerlessDBExtranetAccessCallable(const Model::CloseServerlessDBExtranetAccessRequest& request);

                /**
                 *This API is used to create a data backup of an instance.
                 * @param req CreateBaseBackupRequest
                 * @return CreateBaseBackupOutcome
                 */
                CreateBaseBackupOutcome CreateBaseBackup(const Model::CreateBaseBackupRequest &request);
                void CreateBaseBackupAsync(const Model::CreateBaseBackupRequest& request, const CreateBaseBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBaseBackupOutcomeCallable CreateBaseBackupCallable(const Model::CreateBaseBackupRequest& request);

                /**
                 *This API is used to create a network for an instance.
                 * @param req CreateDBInstanceNetworkAccessRequest
                 * @return CreateDBInstanceNetworkAccessOutcome
                 */
                CreateDBInstanceNetworkAccessOutcome CreateDBInstanceNetworkAccess(const Model::CreateDBInstanceNetworkAccessRequest &request);
                void CreateDBInstanceNetworkAccessAsync(const Model::CreateDBInstanceNetworkAccessRequest& request, const CreateDBInstanceNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstanceNetworkAccessOutcomeCallable CreateDBInstanceNetworkAccessCallable(const Model::CreateDBInstanceNetworkAccessRequest& request);

                /**
                 *This API is used to create (but not initialize) one or more TencentDB for PostgreSQL instances. This API is disused and replaced by the [CreateInstances](https://intl.cloud.tencent.com/document/api/409/56107?from_cn_redirect=1) API.
                 * @param req CreateDBInstancesRequest
                 * @return CreateDBInstancesOutcome
                 */
                CreateDBInstancesOutcome CreateDBInstances(const Model::CreateDBInstancesRequest &request);
                void CreateDBInstancesAsync(const Model::CreateDBInstancesRequest& request, const CreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstancesOutcomeCallable CreateDBInstancesCallable(const Model::CreateDBInstancesRequest& request);

                /**
                 *This API is used to create one or more PostgreSQL instances. Instances created through this interface do not need to be initialized and can be used directly.
<li>After an instance is successfully created, it will automatically start up, and its status changes to "Running".</li>
<li>For prepaid instances, the required amount for the instance purchase will be deducted in advance. For post-paid hourly instances, the amount required for the purchase within the first hour will be temporarily frozen. Please ensure that your account balance is sufficient before calling this interface.</li>
                 * @param req CreateInstancesRequest
                 * @return CreateInstancesOutcome
                 */
                CreateInstancesOutcome CreateInstances(const Model::CreateInstancesRequest &request);
                void CreateInstancesAsync(const Model::CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstancesOutcomeCallable CreateInstancesCallable(const Model::CreateInstancesRequest& request);

                /**
                 *This API is used to create a parameter template.
                 * @param req CreateParameterTemplateRequest
                 * @return CreateParameterTemplateOutcome
                 */
                CreateParameterTemplateOutcome CreateParameterTemplate(const Model::CreateParameterTemplateRequest &request);
                void CreateParameterTemplateAsync(const Model::CreateParameterTemplateRequest& request, const CreateParameterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateParameterTemplateOutcomeCallable CreateParameterTemplateCallable(const Model::CreateParameterTemplateRequest& request);

                /**
                 *This API is used to create read-only replicas.
                 * @param req CreateReadOnlyDBInstanceRequest
                 * @return CreateReadOnlyDBInstanceOutcome
                 */
                CreateReadOnlyDBInstanceOutcome CreateReadOnlyDBInstance(const Model::CreateReadOnlyDBInstanceRequest &request);
                void CreateReadOnlyDBInstanceAsync(const Model::CreateReadOnlyDBInstanceRequest& request, const CreateReadOnlyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReadOnlyDBInstanceOutcomeCallable CreateReadOnlyDBInstanceCallable(const Model::CreateReadOnlyDBInstanceRequest& request);

                /**
                 *This API is used to create an RO group.
                 * @param req CreateReadOnlyGroupRequest
                 * @return CreateReadOnlyGroupOutcome
                 */
                CreateReadOnlyGroupOutcome CreateReadOnlyGroup(const Model::CreateReadOnlyGroupRequest &request);
                void CreateReadOnlyGroupAsync(const Model::CreateReadOnlyGroupRequest& request, const CreateReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReadOnlyGroupOutcomeCallable CreateReadOnlyGroupCallable(const Model::CreateReadOnlyGroupRequest& request);

                /**
                 *This API is used to create a network for an RO group.
                 * @param req CreateReadOnlyGroupNetworkAccessRequest
                 * @return CreateReadOnlyGroupNetworkAccessOutcome
                 */
                CreateReadOnlyGroupNetworkAccessOutcome CreateReadOnlyGroupNetworkAccess(const Model::CreateReadOnlyGroupNetworkAccessRequest &request);
                void CreateReadOnlyGroupNetworkAccessAsync(const Model::CreateReadOnlyGroupNetworkAccessRequest& request, const CreateReadOnlyGroupNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReadOnlyGroupNetworkAccessOutcomeCallable CreateReadOnlyGroupNetworkAccessCallable(const Model::CreateReadOnlyGroupNetworkAccessRequest& request);

                /**
                 *This API is used to create a PostgreSQL for Serverless instance. If the creation succeeds, the instance ID will be returned.
                 * @param req CreateServerlessDBInstanceRequest
                 * @return CreateServerlessDBInstanceOutcome
                 */
                CreateServerlessDBInstanceOutcome CreateServerlessDBInstance(const Model::CreateServerlessDBInstanceRequest &request);
                void CreateServerlessDBInstanceAsync(const Model::CreateServerlessDBInstanceRequest& request, const CreateServerlessDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServerlessDBInstanceOutcomeCallable CreateServerlessDBInstanceCallable(const Model::CreateServerlessDBInstanceRequest& request);

                /**
                 *This API is used to delete a specified data backup for an instance.
                 * @param req DeleteBaseBackupRequest
                 * @return DeleteBaseBackupOutcome
                 */
                DeleteBaseBackupOutcome DeleteBaseBackup(const Model::DeleteBaseBackupRequest &request);
                void DeleteBaseBackupAsync(const Model::DeleteBaseBackupRequest& request, const DeleteBaseBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBaseBackupOutcomeCallable DeleteBaseBackupCallable(const Model::DeleteBaseBackupRequest& request);

                /**
                 *This API is used to delete a network of an instance.
                 * @param req DeleteDBInstanceNetworkAccessRequest
                 * @return DeleteDBInstanceNetworkAccessOutcome
                 */
                DeleteDBInstanceNetworkAccessOutcome DeleteDBInstanceNetworkAccess(const Model::DeleteDBInstanceNetworkAccessRequest &request);
                void DeleteDBInstanceNetworkAccessAsync(const Model::DeleteDBInstanceNetworkAccessRequest& request, const DeleteDBInstanceNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDBInstanceNetworkAccessOutcomeCallable DeleteDBInstanceNetworkAccessCallable(const Model::DeleteDBInstanceNetworkAccessRequest& request);

                /**
                 *This API is used to delete the specified log backup of an instance.
                 * @param req DeleteLogBackupRequest
                 * @return DeleteLogBackupOutcome
                 */
                DeleteLogBackupOutcome DeleteLogBackup(const Model::DeleteLogBackupRequest &request);
                void DeleteLogBackupAsync(const Model::DeleteLogBackupRequest& request, const DeleteLogBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLogBackupOutcomeCallable DeleteLogBackupCallable(const Model::DeleteLogBackupRequest& request);

                /**
                 *This API is used to delete a parameter template.
                 * @param req DeleteParameterTemplateRequest
                 * @return DeleteParameterTemplateOutcome
                 */
                DeleteParameterTemplateOutcome DeleteParameterTemplate(const Model::DeleteParameterTemplateRequest &request);
                void DeleteParameterTemplateAsync(const Model::DeleteParameterTemplateRequest& request, const DeleteParameterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteParameterTemplateOutcomeCallable DeleteParameterTemplateCallable(const Model::DeleteParameterTemplateRequest& request);

                /**
                 *This API is used to delete an RO group.
                 * @param req DeleteReadOnlyGroupRequest
                 * @return DeleteReadOnlyGroupOutcome
                 */
                DeleteReadOnlyGroupOutcome DeleteReadOnlyGroup(const Model::DeleteReadOnlyGroupRequest &request);
                void DeleteReadOnlyGroupAsync(const Model::DeleteReadOnlyGroupRequest& request, const DeleteReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReadOnlyGroupOutcomeCallable DeleteReadOnlyGroupCallable(const Model::DeleteReadOnlyGroupRequest& request);

                /**
                 *This API is used to delete a network of an RO group.
                 * @param req DeleteReadOnlyGroupNetworkAccessRequest
                 * @return DeleteReadOnlyGroupNetworkAccessOutcome
                 */
                DeleteReadOnlyGroupNetworkAccessOutcome DeleteReadOnlyGroupNetworkAccess(const Model::DeleteReadOnlyGroupNetworkAccessRequest &request);
                void DeleteReadOnlyGroupNetworkAccessAsync(const Model::DeleteReadOnlyGroupNetworkAccessRequest& request, const DeleteReadOnlyGroupNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReadOnlyGroupNetworkAccessOutcomeCallable DeleteReadOnlyGroupNetworkAccessCallable(const Model::DeleteReadOnlyGroupNetworkAccessRequest& request);

                /**
                 *This API is used to delete a PostgreSQL for Serverless instance.
                 * @param req DeleteServerlessDBInstanceRequest
                 * @return DeleteServerlessDBInstanceOutcome
                 */
                DeleteServerlessDBInstanceOutcome DeleteServerlessDBInstance(const Model::DeleteServerlessDBInstanceRequest &request);
                void DeleteServerlessDBInstanceAsync(const Model::DeleteServerlessDBInstanceRequest& request, const DeleteServerlessDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServerlessDBInstanceOutcomeCallable DeleteServerlessDBInstanceCallable(const Model::DeleteServerlessDBInstanceRequest& request);

                /**
                 *This API is used to query the list of the database accounts for an instance.
                 * @param req DescribeAccountsRequest
                 * @return DescribeAccountsOutcome
                 */
                DescribeAccountsOutcome DescribeAccounts(const Model::DescribeAccountsRequest &request);
                void DescribeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountsOutcomeCallable DescribeAccountsCallable(const Model::DescribeAccountsRequest& request);

                /**
                 *This API is used to query the available restoration time of an instance.
                 * @param req DescribeAvailableRecoveryTimeRequest
                 * @return DescribeAvailableRecoveryTimeOutcome
                 */
                DescribeAvailableRecoveryTimeOutcome DescribeAvailableRecoveryTime(const Model::DescribeAvailableRecoveryTimeRequest &request);
                void DescribeAvailableRecoveryTimeAsync(const Model::DescribeAvailableRecoveryTimeRequest& request, const DescribeAvailableRecoveryTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableRecoveryTimeOutcomeCallable DescribeAvailableRecoveryTimeCallable(const Model::DescribeAvailableRecoveryTimeRequest& request);

                /**
                 *This API is used to query the backup download restrictions.
                 * @param req DescribeBackupDownloadRestrictionRequest
                 * @return DescribeBackupDownloadRestrictionOutcome
                 */
                DescribeBackupDownloadRestrictionOutcome DescribeBackupDownloadRestriction(const Model::DescribeBackupDownloadRestrictionRequest &request);
                void DescribeBackupDownloadRestrictionAsync(const Model::DescribeBackupDownloadRestrictionRequest& request, const DescribeBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupDownloadRestrictionOutcomeCallable DescribeBackupDownloadRestrictionCallable(const Model::DescribeBackupDownloadRestrictionRequest& request);

                /**
                 *u200cThis API is used to query the download address of a specified backup set, including full backup sets and incremental log backup sets.
                 * @param req DescribeBackupDownloadURLRequest
                 * @return DescribeBackupDownloadURLOutcome
                 */
                DescribeBackupDownloadURLOutcome DescribeBackupDownloadURL(const Model::DescribeBackupDownloadURLRequest &request);
                void DescribeBackupDownloadURLAsync(const Model::DescribeBackupDownloadURLRequest& request, const DescribeBackupDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupDownloadURLOutcomeCallable DescribeBackupDownloadURLCallable(const Model::DescribeBackupDownloadURLRequest& request);

                /**
                 *This API is used to query the backup overview. It will return the current number and size of backups, free backup space size, and paid backup space size (all size values are in bytes).
                 * @param req DescribeBackupOverviewRequest
                 * @return DescribeBackupOverviewOutcome
                 */
                DescribeBackupOverviewOutcome DescribeBackupOverview(const Model::DescribeBackupOverviewRequest &request);
                void DescribeBackupOverviewAsync(const Model::DescribeBackupOverviewRequest& request, const DescribeBackupOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupOverviewOutcomeCallable DescribeBackupOverviewCallable(const Model::DescribeBackupOverviewRequest& request);

                /**
                 *This API is used to query all backup plans of an instance.
                 * @param req DescribeBackupPlansRequest
                 * @return DescribeBackupPlansOutcome
                 */
                DescribeBackupPlansOutcome DescribeBackupPlans(const Model::DescribeBackupPlansRequest &request);
                void DescribeBackupPlansAsync(const Model::DescribeBackupPlansRequest& request, const DescribeBackupPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupPlansOutcomeCallable DescribeBackupPlansCallable(const Model::DescribeBackupPlansRequest& request);

                /**
                 *This API is used to query the backup statistics of an instance. It will return the number and size (bytes) of backups of the instance.
                 * @param req DescribeBackupSummariesRequest
                 * @return DescribeBackupSummariesOutcome
                 */
                DescribeBackupSummariesOutcome DescribeBackupSummaries(const Model::DescribeBackupSummariesRequest &request);
                void DescribeBackupSummariesAsync(const Model::DescribeBackupSummariesRequest& request, const DescribeBackupSummariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupSummariesOutcomeCallable DescribeBackupSummariesCallable(const Model::DescribeBackupSummariesRequest& request);

                /**
                 *This API is used to query the list of data backups.
                 * @param req DescribeBaseBackupsRequest
                 * @return DescribeBaseBackupsOutcome
                 */
                DescribeBaseBackupsOutcome DescribeBaseBackups(const Model::DescribeBaseBackupsRequest &request);
                void DescribeBaseBackupsAsync(const Model::DescribeBaseBackupsRequest& request, const DescribeBaseBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaseBackupsOutcomeCallable DescribeBaseBackupsCallable(const Model::DescribeBaseBackupsRequest& request);

                /**
                 *This API is used to query purchasable instance specifications.
                 * @param req DescribeClassesRequest
                 * @return DescribeClassesOutcome
                 */
                DescribeClassesOutcome DescribeClasses(const Model::DescribeClassesRequest &request);
                void DescribeClassesAsync(const Model::DescribeClassesRequest& request, const DescribeClassesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassesOutcomeCallable DescribeClassesCallable(const Model::DescribeClassesRequest& request);

                /**
                 *This API is used to query the minimum specification required by a cloned instance, including `SpecCode` and disk specification.
                 * @param req DescribeCloneDBInstanceSpecRequest
                 * @return DescribeCloneDBInstanceSpecOutcome
                 */
                DescribeCloneDBInstanceSpecOutcome DescribeCloneDBInstanceSpec(const Model::DescribeCloneDBInstanceSpecRequest &request);
                void DescribeCloneDBInstanceSpecAsync(const Model::DescribeCloneDBInstanceSpecRequest& request, const DescribeCloneDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloneDBInstanceSpecOutcomeCallable DescribeCloneDBInstanceSpecCallable(const Model::DescribeCloneDBInstanceSpecRequest& request);

                /**
                 *This API is used to query the backup list of an instance. This API is disused and replaced by the [DescribeBaseBackups](https://intl.cloud.tencent.com/document/api/409/89022?from_cn_redirect=1) API.
                 * @param req DescribeDBBackupsRequest
                 * @return DescribeDBBackupsOutcome
                 */
                DescribeDBBackupsOutcome DescribeDBBackups(const Model::DescribeDBBackupsRequest &request);
                void DescribeDBBackupsAsync(const Model::DescribeDBBackupsRequest& request, const DescribeDBBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBBackupsOutcomeCallable DescribeDBBackupsCallable(const Model::DescribeDBBackupsRequest& request);

                /**
                 *This API is used to query an error log.
                 * @param req DescribeDBErrlogsRequest
                 * @return DescribeDBErrlogsOutcome
                 */
                DescribeDBErrlogsOutcome DescribeDBErrlogs(const Model::DescribeDBErrlogsRequest &request);
                void DescribeDBErrlogsAsync(const Model::DescribeDBErrlogsRequest& request, const DescribeDBErrlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBErrlogsOutcomeCallable DescribeDBErrlogsCallable(const Model::DescribeDBErrlogsRequest& request);

                /**
                 *This API is used to query the details of one instance.
                 * @param req DescribeDBInstanceAttributeRequest
                 * @return DescribeDBInstanceAttributeOutcome
                 */
                DescribeDBInstanceAttributeOutcome DescribeDBInstanceAttribute(const Model::DescribeDBInstanceAttributeRequest &request);
                void DescribeDBInstanceAttributeAsync(const Model::DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceAttributeOutcomeCallable DescribeDBInstanceAttributeCallable(const Model::DescribeDBInstanceAttributeRequest& request);

                /**
                 *This API is used to query the HA configuration of an instance, which includes:
<li>Allow a standby node to promote to a primary node.
<li>Allow a semi-sync instance to adopt sync or async replication.
                 * @param req DescribeDBInstanceHAConfigRequest
                 * @return DescribeDBInstanceHAConfigOutcome
                 */
                DescribeDBInstanceHAConfigOutcome DescribeDBInstanceHAConfig(const Model::DescribeDBInstanceHAConfigRequest &request);
                void DescribeDBInstanceHAConfigAsync(const Model::DescribeDBInstanceHAConfigRequest& request, const DescribeDBInstanceHAConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceHAConfigOutcomeCallable DescribeDBInstanceHAConfigCallable(const Model::DescribeDBInstanceHAConfigRequest& request);

                /**
                 *This API is used to query the parameters of an instance.
                 * @param req DescribeDBInstanceParametersRequest
                 * @return DescribeDBInstanceParametersOutcome
                 */
                DescribeDBInstanceParametersOutcome DescribeDBInstanceParameters(const Model::DescribeDBInstanceParametersRequest &request);
                void DescribeDBInstanceParametersAsync(const Model::DescribeDBInstanceParametersRequest& request, const DescribeDBInstanceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceParametersOutcomeCallable DescribeDBInstanceParametersCallable(const Model::DescribeDBInstanceParametersRequest& request);

                /**
                 *This API is used to query the security group of an instance.
                 * @param req DescribeDBInstanceSecurityGroupsRequest
                 * @return DescribeDBInstanceSecurityGroupsOutcome
                 */
                DescribeDBInstanceSecurityGroupsOutcome DescribeDBInstanceSecurityGroups(const Model::DescribeDBInstanceSecurityGroupsRequest &request);
                void DescribeDBInstanceSecurityGroupsAsync(const Model::DescribeDBInstanceSecurityGroupsRequest& request, const DescribeDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceSecurityGroupsOutcomeCallable DescribeDBInstanceSecurityGroupsCallable(const Model::DescribeDBInstanceSecurityGroupsRequest& request);

                /**
                 *This API is used to query the details of one or more instances.
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *This API is used to get a slow query log. Since it was deprecated on September 1, 2021, it has no longer returned data. You need to use the [DescribeSlowQueryList](https://intl.cloud.tencent.com/document/product/409/60540?from_cn_redirect=1) API instead to get slow query logs.
                 * @param req DescribeDBSlowlogsRequest
                 * @return DescribeDBSlowlogsOutcome
                 */
                DescribeDBSlowlogsOutcome DescribeDBSlowlogs(const Model::DescribeDBSlowlogsRequest &request);
                void DescribeDBSlowlogsAsync(const Model::DescribeDBSlowlogsRequest& request, const DescribeDBSlowlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSlowlogsOutcomeCallable DescribeDBSlowlogsCallable(const Model::DescribeDBSlowlogsRequest& request);

                /**
                 *This API is used to query the list of supported database versions.
                 * @param req DescribeDBVersionsRequest
                 * @return DescribeDBVersionsOutcome
                 */
                DescribeDBVersionsOutcome DescribeDBVersions(const Model::DescribeDBVersionsRequest &request);
                void DescribeDBVersionsAsync(const Model::DescribeDBVersionsRequest& request, const DescribeDBVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBVersionsOutcomeCallable DescribeDBVersionsCallable(const Model::DescribeDBVersionsRequest& request);

                /**
                 *This API is used to get the instance Xlog list. This API is disused and replaced by the [DescribeBaseBackups](https://www.tencentcloud.com/zh/document/product/409/54343) API.
                 * @param req DescribeDBXlogsRequest
                 * @return DescribeDBXlogsOutcome
                 */
                DescribeDBXlogsOutcome DescribeDBXlogs(const Model::DescribeDBXlogsRequest &request);
                void DescribeDBXlogsAsync(const Model::DescribeDBXlogsRequest& request, const DescribeDBXlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBXlogsOutcomeCallable DescribeDBXlogsCallable(const Model::DescribeDBXlogsRequest& request);

                /**
                 *This API is used to query the database list of an instance.
                 * @param req DescribeDatabasesRequest
                 * @return DescribeDatabasesOutcome
                 */
                DescribeDatabasesOutcome DescribeDatabases(const Model::DescribeDatabasesRequest &request);
                void DescribeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabasesOutcomeCallable DescribeDatabasesCallable(const Model::DescribeDatabasesRequest& request);

                /**
                 *This API is used to query all parameters supported by a database version and engine.
                 * @param req DescribeDefaultParametersRequest
                 * @return DescribeDefaultParametersOutcome
                 */
                DescribeDefaultParametersOutcome DescribeDefaultParameters(const Model::DescribeDefaultParametersRequest &request);
                void DescribeDefaultParametersAsync(const Model::DescribeDefaultParametersRequest& request, const DescribeDefaultParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefaultParametersOutcomeCallable DescribeDefaultParametersCallable(const Model::DescribeDefaultParametersRequest& request);

                /**
                 *This API is used to query the instance key list.
                 * @param req DescribeEncryptionKeysRequest
                 * @return DescribeEncryptionKeysOutcome
                 */
                DescribeEncryptionKeysOutcome DescribeEncryptionKeys(const Model::DescribeEncryptionKeysRequest &request);
                void DescribeEncryptionKeysAsync(const Model::DescribeEncryptionKeysRequest& request, const DescribeEncryptionKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEncryptionKeysOutcomeCallable DescribeEncryptionKeysCallable(const Model::DescribeEncryptionKeysRequest& request);

                /**
                 *This API is used to query the list of log backups.
                 * @param req DescribeLogBackupsRequest
                 * @return DescribeLogBackupsOutcome
                 */
                DescribeLogBackupsOutcome DescribeLogBackups(const Model::DescribeLogBackupsRequest &request);
                void DescribeLogBackupsAsync(const Model::DescribeLogBackupsRequest& request, const DescribeLogBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogBackupsOutcomeCallable DescribeLogBackupsCallable(const Model::DescribeLogBackupsRequest& request);

                /**
                 *This API is used to query the order information.
                 * @param req DescribeOrdersRequest
                 * @return DescribeOrdersOutcome
                 */
                DescribeOrdersOutcome DescribeOrders(const Model::DescribeOrdersRequest &request);
                void DescribeOrdersAsync(const Model::DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrdersOutcomeCallable DescribeOrdersCallable(const Model::DescribeOrdersRequest& request);

                /**
                 *This API is used to query the details of a parameter template, including basic information and parameter information.
                 * @param req DescribeParameterTemplateAttributesRequest
                 * @return DescribeParameterTemplateAttributesOutcome
                 */
                DescribeParameterTemplateAttributesOutcome DescribeParameterTemplateAttributes(const Model::DescribeParameterTemplateAttributesRequest &request);
                void DescribeParameterTemplateAttributesAsync(const Model::DescribeParameterTemplateAttributesRequest& request, const DescribeParameterTemplateAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeParameterTemplateAttributesOutcomeCallable DescribeParameterTemplateAttributesCallable(const Model::DescribeParameterTemplateAttributesRequest& request);

                /**
                 *This API is used to query the list of parameter templates.
                 * @param req DescribeParameterTemplatesRequest
                 * @return DescribeParameterTemplatesOutcome
                 */
                DescribeParameterTemplatesOutcome DescribeParameterTemplates(const Model::DescribeParameterTemplatesRequest &request);
                void DescribeParameterTemplatesAsync(const Model::DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeParameterTemplatesOutcomeCallable DescribeParameterTemplatesCallable(const Model::DescribeParameterTemplatesRequest& request);

                /**
                 *This API is used to query the parameter modification event.
                 * @param req DescribeParamsEventRequest
                 * @return DescribeParamsEventOutcome
                 */
                DescribeParamsEventOutcome DescribeParamsEvent(const Model::DescribeParamsEventRequest &request);
                void DescribeParamsEventAsync(const Model::DescribeParamsEventRequest& request, const DescribeParamsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeParamsEventOutcomeCallable DescribeParamsEventCallable(const Model::DescribeParamsEventRequest& request);

                /**
                 *This API is used to query the purchasable specification configuration. u200cThis API is disused and replaced by the [DescribeClasses](https://intl.cloud.tencent.com/document/api/409/89019?from_cn_redirect=1) API.
                 * @param req DescribeProductConfigRequest
                 * @return DescribeProductConfigOutcome
                 */
                DescribeProductConfigOutcome DescribeProductConfig(const Model::DescribeProductConfigRequest &request);
                void DescribeProductConfigAsync(const Model::DescribeProductConfigRequest& request, const DescribeProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductConfigOutcomeCallable DescribeProductConfigCallable(const Model::DescribeProductConfigRequest& request);

                /**
                 *This API is used to query the list of RO groups.
                 * @param req DescribeReadOnlyGroupsRequest
                 * @return DescribeReadOnlyGroupsOutcome
                 */
                DescribeReadOnlyGroupsOutcome DescribeReadOnlyGroups(const Model::DescribeReadOnlyGroupsRequest &request);
                void DescribeReadOnlyGroupsAsync(const Model::DescribeReadOnlyGroupsRequest& request, const DescribeReadOnlyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReadOnlyGroupsOutcomeCallable DescribeReadOnlyGroupsCallable(const Model::DescribeReadOnlyGroupsRequest& request);

                /**
                 *This API is used to query the purchasable regions.
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *This API is used to query the details of one or more PostgreSQL for Serverless instances.
                 * @param req DescribeServerlessDBInstancesRequest
                 * @return DescribeServerlessDBInstancesOutcome
                 */
                DescribeServerlessDBInstancesOutcome DescribeServerlessDBInstances(const Model::DescribeServerlessDBInstancesRequest &request);
                void DescribeServerlessDBInstancesAsync(const Model::DescribeServerlessDBInstancesRequest& request, const DescribeServerlessDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServerlessDBInstancesOutcomeCallable DescribeServerlessDBInstancesCallable(const Model::DescribeServerlessDBInstancesRequest& request);

                /**
                 *This API is used to count and analyze slow query statements during the specified period of time and return aggregated statistical analysis results which are classified by statement with abstract parameter values.
                 * @param req DescribeSlowQueryAnalysisRequest
                 * @return DescribeSlowQueryAnalysisOutcome
                 */
                DescribeSlowQueryAnalysisOutcome DescribeSlowQueryAnalysis(const Model::DescribeSlowQueryAnalysisRequest &request);
                void DescribeSlowQueryAnalysisAsync(const Model::DescribeSlowQueryAnalysisRequest& request, const DescribeSlowQueryAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowQueryAnalysisOutcomeCallable DescribeSlowQueryAnalysisCallable(const Model::DescribeSlowQueryAnalysisRequest& request);

                /**
                 *This API is used to get the slow queries during the specified period of time.
                 * @param req DescribeSlowQueryListRequest
                 * @return DescribeSlowQueryListOutcome
                 */
                DescribeSlowQueryListOutcome DescribeSlowQueryList(const Model::DescribeSlowQueryListRequest &request);
                void DescribeSlowQueryListAsync(const Model::DescribeSlowQueryListRequest& request, const DescribeSlowQueryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowQueryListOutcomeCallable DescribeSlowQueryListCallable(const Model::DescribeSlowQueryListRequest& request);

                /**
                 *This API is used to query the supported AZs.
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *This API is used to terminate an isolated instance by specifying the `DBInstanceId` parameter. The data of a terminated instance will be deleted and cannot be recovered. Be cautious with this API calling. Only the instance in isolation can be terminated.
                 * @param req DestroyDBInstanceRequest
                 * @return DestroyDBInstanceOutcome
                 */
                DestroyDBInstanceOutcome DestroyDBInstance(const Model::DestroyDBInstanceRequest &request);
                void DestroyDBInstanceAsync(const Model::DestroyDBInstanceRequest& request, const DestroyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyDBInstanceOutcomeCallable DestroyDBInstanceCallable(const Model::DestroyDBInstanceRequest& request);

                /**
                 *This API is used to remove one or more instances from isolation.
                 * @param req DisIsolateDBInstancesRequest
                 * @return DisIsolateDBInstancesOutcome
                 */
                DisIsolateDBInstancesOutcome DisIsolateDBInstances(const Model::DisIsolateDBInstancesRequest &request);
                void DisIsolateDBInstancesAsync(const Model::DisIsolateDBInstancesRequest& request, const DisIsolateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisIsolateDBInstancesOutcomeCallable DisIsolateDBInstancesCallable(const Model::DisIsolateDBInstancesRequest& request);

                /**
                 *This API is used to initialize a TencentDB for PostgreSQL instance. This API is disused and replaced by the [CreateInstances](https://intl.cloud.tencent.com/document/api/409/56107?from_cn_redirect=1) API.
                 * @param req InitDBInstancesRequest
                 * @return InitDBInstancesOutcome
                 */
                InitDBInstancesOutcome InitDBInstances(const Model::InitDBInstancesRequest &request);
                void InitDBInstancesAsync(const Model::InitDBInstancesRequest& request, const InitDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InitDBInstancesOutcomeCallable InitDBInstancesCallable(const Model::InitDBInstancesRequest& request);

                /**
                 *This API is used to query the purchase price of an instance.
                 * @param req InquiryPriceCreateDBInstancesRequest
                 * @return InquiryPriceCreateDBInstancesOutcome
                 */
                InquiryPriceCreateDBInstancesOutcome InquiryPriceCreateDBInstances(const Model::InquiryPriceCreateDBInstancesRequest &request);
                void InquiryPriceCreateDBInstancesAsync(const Model::InquiryPriceCreateDBInstancesRequest& request, const InquiryPriceCreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateDBInstancesOutcomeCallable InquiryPriceCreateDBInstancesCallable(const Model::InquiryPriceCreateDBInstancesRequest& request);

                /**
                 *This API is used to query the renewal price of an instance.
                 * @param req InquiryPriceRenewDBInstanceRequest
                 * @return InquiryPriceRenewDBInstanceOutcome
                 */
                InquiryPriceRenewDBInstanceOutcome InquiryPriceRenewDBInstance(const Model::InquiryPriceRenewDBInstanceRequest &request);
                void InquiryPriceRenewDBInstanceAsync(const Model::InquiryPriceRenewDBInstanceRequest& request, const InquiryPriceRenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRenewDBInstanceOutcomeCallable InquiryPriceRenewDBInstanceCallable(const Model::InquiryPriceRenewDBInstanceRequest& request);

                /**
                 *This API is used to query the fees of upgrading a specified database instance. Only pay-as-you-go instance is supported.
                 * @param req InquiryPriceUpgradeDBInstanceRequest
                 * @return InquiryPriceUpgradeDBInstanceOutcome
                 */
                InquiryPriceUpgradeDBInstanceOutcome InquiryPriceUpgradeDBInstance(const Model::InquiryPriceUpgradeDBInstanceRequest &request);
                void InquiryPriceUpgradeDBInstanceAsync(const Model::InquiryPriceUpgradeDBInstanceRequest& request, const InquiryPriceUpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceUpgradeDBInstanceOutcomeCallable InquiryPriceUpgradeDBInstanceCallable(const Model::InquiryPriceUpgradeDBInstanceRequest& request);

                /**
                 *This API is used to isolate an instance.
                 * @param req IsolateDBInstancesRequest
                 * @return IsolateDBInstancesOutcome
                 */
                IsolateDBInstancesOutcome IsolateDBInstances(const Model::IsolateDBInstancesRequest &request);
                void IsolateDBInstancesAsync(const Model::IsolateDBInstancesRequest& request, const IsolateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDBInstancesOutcomeCallable IsolateDBInstancesCallable(const Model::IsolateDBInstancesRequest& request);

                /**
                 *This API is used to modify account remarks.
                 * @param req ModifyAccountRemarkRequest
                 * @return ModifyAccountRemarkOutcome
                 */
                ModifyAccountRemarkOutcome ModifyAccountRemark(const Model::ModifyAccountRemarkRequest &request);
                void ModifyAccountRemarkAsync(const Model::ModifyAccountRemarkRequest& request, const ModifyAccountRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountRemarkOutcomeCallable ModifyAccountRemarkCallable(const Model::ModifyAccountRemarkRequest& request);

                /**
                 *This API is used to modify the backup download restrictions.
                 * @param req ModifyBackupDownloadRestrictionRequest
                 * @return ModifyBackupDownloadRestrictionOutcome
                 */
                ModifyBackupDownloadRestrictionOutcome ModifyBackupDownloadRestriction(const Model::ModifyBackupDownloadRestrictionRequest &request);
                void ModifyBackupDownloadRestrictionAsync(const Model::ModifyBackupDownloadRestrictionRequest& request, const ModifyBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupDownloadRestrictionOutcomeCallable ModifyBackupDownloadRestrictionCallable(const Model::ModifyBackupDownloadRestrictionRequest& request);

                /**
                 *This API is used to modify the backup plan of an instance, such as modifying the backup start time. By default, a full backup starts at midnight every day and the generated backup files will be retained for seven days.
                 * @param req ModifyBackupPlanRequest
                 * @return ModifyBackupPlanOutcome
                 */
                ModifyBackupPlanOutcome ModifyBackupPlan(const Model::ModifyBackupPlanRequest &request);
                void ModifyBackupPlanAsync(const Model::ModifyBackupPlanRequest& request, const ModifyBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupPlanOutcomeCallable ModifyBackupPlanCallable(const Model::ModifyBackupPlanRequest& request);

                /**
                 *This API is used to modify the expiration time of a specified data backup for an instance.
                 * @param req ModifyBaseBackupExpireTimeRequest
                 * @return ModifyBaseBackupExpireTimeOutcome
                 */
                ModifyBaseBackupExpireTimeOutcome ModifyBaseBackupExpireTime(const Model::ModifyBaseBackupExpireTimeRequest &request);
                void ModifyBaseBackupExpireTimeAsync(const Model::ModifyBaseBackupExpireTimeRequest& request, const ModifyBaseBackupExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaseBackupExpireTimeOutcomeCallable ModifyBaseBackupExpireTimeCallable(const Model::ModifyBaseBackupExpireTimeRequest& request);

                /**
                 *This API is used to switch the instance billing mode from pay-as-you-go to monthly subscription.
                 * @param req ModifyDBInstanceChargeTypeRequest
                 * @return ModifyDBInstanceChargeTypeOutcome
                 */
                ModifyDBInstanceChargeTypeOutcome ModifyDBInstanceChargeType(const Model::ModifyDBInstanceChargeTypeRequest &request);
                void ModifyDBInstanceChargeTypeAsync(const Model::ModifyDBInstanceChargeTypeRequest& request, const ModifyDBInstanceChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceChargeTypeOutcomeCallable ModifyDBInstanceChargeTypeCallable(const Model::ModifyDBInstanceChargeTypeRequest& request);

                /**
                 *This API is used to modify the AZs where the nodes of a source instance reside.
                 * @param req ModifyDBInstanceDeploymentRequest
                 * @return ModifyDBInstanceDeploymentOutcome
                 */
                ModifyDBInstanceDeploymentOutcome ModifyDBInstanceDeployment(const Model::ModifyDBInstanceDeploymentRequest &request);
                void ModifyDBInstanceDeploymentAsync(const Model::ModifyDBInstanceDeploymentRequest& request, const ModifyDBInstanceDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceDeploymentOutcomeCallable ModifyDBInstanceDeploymentCallable(const Model::ModifyDBInstanceDeploymentRequest& request);

                /**
                 *This API is used to modify the HA configuration of an instance. which includes:
<li>Allow the standby node to promote to the primary node.
<li>Allow a semi-sync instance to adopt sync or async replication.
                 * @param req ModifyDBInstanceHAConfigRequest
                 * @return ModifyDBInstanceHAConfigOutcome
                 */
                ModifyDBInstanceHAConfigOutcome ModifyDBInstanceHAConfig(const Model::ModifyDBInstanceHAConfigRequest &request);
                void ModifyDBInstanceHAConfigAsync(const Model::ModifyDBInstanceHAConfigRequest& request, const ModifyDBInstanceHAConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceHAConfigOutcomeCallable ModifyDBInstanceHAConfigCallable(const Model::ModifyDBInstanceHAConfigRequest& request);

                /**
                 *This API is used to rename a TencentDB for PostgreSQL instance.
                 * @param req ModifyDBInstanceNameRequest
                 * @return ModifyDBInstanceNameOutcome
                 */
                ModifyDBInstanceNameOutcome ModifyDBInstanceName(const Model::ModifyDBInstanceNameRequest &request);
                void ModifyDBInstanceNameAsync(const Model::ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceNameOutcomeCallable ModifyDBInstanceNameCallable(const Model::ModifyDBInstanceNameRequest& request);

                /**
                 *This API is used to modify instance parameters.
                 * @param req ModifyDBInstanceParametersRequest
                 * @return ModifyDBInstanceParametersOutcome
                 */
                ModifyDBInstanceParametersOutcome ModifyDBInstanceParameters(const Model::ModifyDBInstanceParametersRequest &request);
                void ModifyDBInstanceParametersAsync(const Model::ModifyDBInstanceParametersRequest& request, const ModifyDBInstanceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceParametersOutcomeCallable ModifyDBInstanceParametersCallable(const Model::ModifyDBInstanceParametersRequest& request);

                /**
                 *This API is used to modify the RO group of an instance.
                 * @param req ModifyDBInstanceReadOnlyGroupRequest
                 * @return ModifyDBInstanceReadOnlyGroupOutcome
                 */
                ModifyDBInstanceReadOnlyGroupOutcome ModifyDBInstanceReadOnlyGroup(const Model::ModifyDBInstanceReadOnlyGroupRequest &request);
                void ModifyDBInstanceReadOnlyGroupAsync(const Model::ModifyDBInstanceReadOnlyGroupRequest& request, const ModifyDBInstanceReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceReadOnlyGroupOutcomeCallable ModifyDBInstanceReadOnlyGroupCallable(const Model::ModifyDBInstanceReadOnlyGroupRequest& request);

                /**
                 *This API is used to modify the security group of an instance.
                 * @param req ModifyDBInstanceSecurityGroupsRequest
                 * @return ModifyDBInstanceSecurityGroupsOutcome
                 */
                ModifyDBInstanceSecurityGroupsOutcome ModifyDBInstanceSecurityGroups(const Model::ModifyDBInstanceSecurityGroupsRequest &request);
                void ModifyDBInstanceSecurityGroupsAsync(const Model::ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSecurityGroupsOutcomeCallable ModifyDBInstanceSecurityGroupsCallable(const Model::ModifyDBInstanceSecurityGroupsRequest& request);

                /**
                 *This API is used to modify instance specifications, including memory and disk size.
                 * @param req ModifyDBInstanceSpecRequest
                 * @return ModifyDBInstanceSpecOutcome
                 */
                ModifyDBInstanceSpecOutcome ModifyDBInstanceSpec(const Model::ModifyDBInstanceSpecRequest &request);
                void ModifyDBInstanceSpecAsync(const Model::ModifyDBInstanceSpecRequest& request, const ModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSpecOutcomeCallable ModifyDBInstanceSpecCallable(const Model::ModifyDBInstanceSpecRequest& request);

                /**
                 *This API is used to modify the project of an instance.
                 * @param req ModifyDBInstancesProjectRequest
                 * @return ModifyDBInstancesProjectOutcome
                 */
                ModifyDBInstancesProjectOutcome ModifyDBInstancesProject(const Model::ModifyDBInstancesProjectRequest &request);
                void ModifyDBInstancesProjectAsync(const Model::ModifyDBInstancesProjectRequest& request, const ModifyDBInstancesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstancesProjectOutcomeCallable ModifyDBInstancesProjectCallable(const Model::ModifyDBInstancesProjectRequest& request);

                /**
                 *This API is used to modify the configurations, such as parameter template name and description. It can also be used to manage the parameter list in the parameter template.
                 * @param req ModifyParameterTemplateRequest
                 * @return ModifyParameterTemplateOutcome
                 */
                ModifyParameterTemplateOutcome ModifyParameterTemplate(const Model::ModifyParameterTemplateRequest &request);
                void ModifyParameterTemplateAsync(const Model::ModifyParameterTemplateRequest& request, const ModifyParameterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyParameterTemplateOutcomeCallable ModifyParameterTemplateCallable(const Model::ModifyParameterTemplateRequest& request);

                /**
                 *This API is used to modify RO group configuration.
                 * @param req ModifyReadOnlyGroupConfigRequest
                 * @return ModifyReadOnlyGroupConfigOutcome
                 */
                ModifyReadOnlyGroupConfigOutcome ModifyReadOnlyGroupConfig(const Model::ModifyReadOnlyGroupConfigRequest &request);
                void ModifyReadOnlyGroupConfigAsync(const Model::ModifyReadOnlyGroupConfigRequest& request, const ModifyReadOnlyGroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyReadOnlyGroupConfigOutcomeCallable ModifyReadOnlyGroupConfigCallable(const Model::ModifyReadOnlyGroupConfigRequest& request);

                /**
                 *This API is used to perform a primary-standby switch for an instance waiting for the switch after it is upgraded.
                 * @param req ModifySwitchTimePeriodRequest
                 * @return ModifySwitchTimePeriodOutcome
                 */
                ModifySwitchTimePeriodOutcome ModifySwitchTimePeriod(const Model::ModifySwitchTimePeriodRequest &request);
                void ModifySwitchTimePeriodAsync(const Model::ModifySwitchTimePeriodRequest& request, const ModifySwitchTimePeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySwitchTimePeriodOutcomeCallable ModifySwitchTimePeriodCallable(const Model::ModifySwitchTimePeriodRequest& request);

                /**
                 *This API is used to enable the public network access of an instance.
                 * @param req OpenDBExtranetAccessRequest
                 * @return OpenDBExtranetAccessOutcome
                 */
                OpenDBExtranetAccessOutcome OpenDBExtranetAccess(const Model::OpenDBExtranetAccessRequest &request);
                void OpenDBExtranetAccessAsync(const Model::OpenDBExtranetAccessRequest& request, const OpenDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenDBExtranetAccessOutcomeCallable OpenDBExtranetAccessCallable(const Model::OpenDBExtranetAccessRequest& request);

                /**
                 *This API is used to enable the public network address of a PostgreSQL for Serverless instance.
                 * @param req OpenServerlessDBExtranetAccessRequest
                 * @return OpenServerlessDBExtranetAccessOutcome
                 */
                OpenServerlessDBExtranetAccessOutcome OpenServerlessDBExtranetAccess(const Model::OpenServerlessDBExtranetAccessRequest &request);
                void OpenServerlessDBExtranetAccessAsync(const Model::OpenServerlessDBExtranetAccessRequest& request, const OpenServerlessDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenServerlessDBExtranetAccessOutcomeCallable OpenServerlessDBExtranetAccessCallable(const Model::OpenServerlessDBExtranetAccessRequest& request);

                /**
                 *This API is used to rebalance the loads of read-only replicas in an RO group. Please note that connections to those read-only replicas will be interrupted transiently; therefore, you should ensure that your application can reconnect to the databases. This operation should be performed with caution.
                 * @param req RebalanceReadOnlyGroupRequest
                 * @return RebalanceReadOnlyGroupOutcome
                 */
                RebalanceReadOnlyGroupOutcome RebalanceReadOnlyGroup(const Model::RebalanceReadOnlyGroupRequest &request);
                void RebalanceReadOnlyGroupAsync(const Model::RebalanceReadOnlyGroupRequest& request, const RebalanceReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebalanceReadOnlyGroupOutcomeCallable RebalanceReadOnlyGroupCallable(const Model::RebalanceReadOnlyGroupRequest& request);

                /**
                 *This API is used to remove a read-only replica from an RO group.
                 * @param req RemoveDBInstanceFromReadOnlyGroupRequest
                 * @return RemoveDBInstanceFromReadOnlyGroupOutcome
                 */
                RemoveDBInstanceFromReadOnlyGroupOutcome RemoveDBInstanceFromReadOnlyGroup(const Model::RemoveDBInstanceFromReadOnlyGroupRequest &request);
                void RemoveDBInstanceFromReadOnlyGroupAsync(const Model::RemoveDBInstanceFromReadOnlyGroupRequest& request, const RemoveDBInstanceFromReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveDBInstanceFromReadOnlyGroupOutcomeCallable RemoveDBInstanceFromReadOnlyGroupCallable(const Model::RemoveDBInstanceFromReadOnlyGroupRequest& request);

                /**
                 *This API is used to renew an instance.
                 * @param req RenewInstanceRequest
                 * @return RenewInstanceOutcome
                 */
                RenewInstanceOutcome RenewInstance(const Model::RenewInstanceRequest &request);
                void RenewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewInstanceOutcomeCallable RenewInstanceCallable(const Model::RenewInstanceRequest& request);

                /**
                 *This API is used to reset the account password of an instance.
                 * @param req ResetAccountPasswordRequest
                 * @return ResetAccountPasswordOutcome
                 */
                ResetAccountPasswordOutcome ResetAccountPassword(const Model::ResetAccountPasswordRequest &request);
                void ResetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAccountPasswordOutcomeCallable ResetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request);

                /**
                 *This API is used to restart an instance.
                 * @param req RestartDBInstanceRequest
                 * @return RestartDBInstanceOutcome
                 */
                RestartDBInstanceOutcome RestartDBInstance(const Model::RestartDBInstanceRequest &request);
                void RestartDBInstanceAsync(const Model::RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartDBInstanceOutcomeCallable RestartDBInstanceCallable(const Model::RestartDBInstanceRequest& request);

                /**
                 *This API is used to recover database-related objects such as databases and tables on the original instance based on the backup set or recovery target time.
                 * @param req RestoreDBInstanceObjectsRequest
                 * @return RestoreDBInstanceObjectsOutcome
                 */
                RestoreDBInstanceObjectsOutcome RestoreDBInstanceObjects(const Model::RestoreDBInstanceObjectsRequest &request);
                void RestoreDBInstanceObjectsAsync(const Model::RestoreDBInstanceObjectsRequest& request, const RestoreDBInstanceObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestoreDBInstanceObjectsOutcomeCallable RestoreDBInstanceObjectsCallable(const Model::RestoreDBInstanceObjectsRequest& request);

                /**
                 *This API is used to set auto-renewal.
                 * @param req SetAutoRenewFlagRequest
                 * @return SetAutoRenewFlagOutcome
                 */
                SetAutoRenewFlagOutcome SetAutoRenewFlag(const Model::SetAutoRenewFlagRequest &request);
                void SetAutoRenewFlagAsync(const Model::SetAutoRenewFlagRequest& request, const SetAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetAutoRenewFlagOutcomeCallable SetAutoRenewFlagCallable(const Model::SetAutoRenewFlagRequest& request);

                /**
                 *This API is used to enable the primary-standby switch of an instance.
<li>By initiating a switch, you can verify whether the primary-standby switch is performed correctly.
<li>By using forced switch, you can forcibly initiate the primary-standby switch when the delay of replica node failed to meet the switch requirement.
<li>This operation can only be performed for the primary instance.
                 * @param req SwitchDBInstancePrimaryRequest
                 * @return SwitchDBInstancePrimaryOutcome
                 */
                SwitchDBInstancePrimaryOutcome SwitchDBInstancePrimary(const Model::SwitchDBInstancePrimaryRequest &request);
                void SwitchDBInstancePrimaryAsync(const Model::SwitchDBInstancePrimaryRequest& request, const SwitchDBInstancePrimaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchDBInstancePrimaryOutcomeCallable SwitchDBInstancePrimaryCallable(const Model::SwitchDBInstancePrimaryRequest& request);

                /**
                 *This API is used to upgrade instance configurations. u200cThis API is disused and replaced by the [ModifyDBInstanceSpec](https://intl.cloud.tencent.com/document/api/409/63689?from_cn_redirect=1) API.
                 * @param req UpgradeDBInstanceRequest
                 * @return UpgradeDBInstanceOutcome
                 */
                UpgradeDBInstanceOutcome UpgradeDBInstance(const Model::UpgradeDBInstanceRequest &request);
                void UpgradeDBInstanceAsync(const Model::UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceOutcomeCallable UpgradeDBInstanceCallable(const Model::UpgradeDBInstanceRequest& request);

                /**
                 *This API is used to upgrade the kernel version of an instance.
                 * @param req UpgradeDBInstanceKernelVersionRequest
                 * @return UpgradeDBInstanceKernelVersionOutcome
                 */
                UpgradeDBInstanceKernelVersionOutcome UpgradeDBInstanceKernelVersion(const Model::UpgradeDBInstanceKernelVersionRequest &request);
                void UpgradeDBInstanceKernelVersionAsync(const Model::UpgradeDBInstanceKernelVersionRequest& request, const UpgradeDBInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceKernelVersionOutcomeCallable UpgradeDBInstanceKernelVersionCallable(const Model::UpgradeDBInstanceKernelVersionRequest& request);

                /**
                 *This API is used to upgrade the major kernel version of an instance, for example, from PostgreSQL 12 to PostgreSQL 15.
                 * @param req UpgradeDBInstanceMajorVersionRequest
                 * @return UpgradeDBInstanceMajorVersionOutcome
                 */
                UpgradeDBInstanceMajorVersionOutcome UpgradeDBInstanceMajorVersion(const Model::UpgradeDBInstanceMajorVersionRequest &request);
                void UpgradeDBInstanceMajorVersionAsync(const Model::UpgradeDBInstanceMajorVersionRequest& request, const UpgradeDBInstanceMajorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceMajorVersionOutcomeCallable UpgradeDBInstanceMajorVersionCallable(const Model::UpgradeDBInstanceMajorVersionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_POSTGRESCLIENT_H_
