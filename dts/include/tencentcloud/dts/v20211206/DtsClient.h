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

#ifndef TENCENTCLOUD_DTS_V20211206_DTSCLIENT_H_
#define TENCENTCLOUD_DTS_V20211206_DTSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dts/v20211206/model/CompleteMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/CompleteMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/ConfigureSubscribeJobRequest.h>
#include <tencentcloud/dts/v20211206/model/ConfigureSubscribeJobResponse.h>
#include <tencentcloud/dts/v20211206/model/ConfigureSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/ConfigureSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/ContinueMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/ContinueMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/ContinueSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/ContinueSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateCheckSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateCheckSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateCompareTaskRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateCompareTaskResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateConsumerGroupRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateConsumerGroupResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateMigrateCheckJobRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateMigrateCheckJobResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateMigrationServiceRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateMigrationServiceResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateModifyCheckSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateModifyCheckSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateSubscribeRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateSubscribeResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateSubscribeCheckJobRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateSubscribeCheckJobResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/DeleteCompareTaskRequest.h>
#include <tencentcloud/dts/v20211206/model/DeleteCompareTaskResponse.h>
#include <tencentcloud/dts/v20211206/model/DeleteConsumerGroupRequest.h>
#include <tencentcloud/dts/v20211206/model/DeleteConsumerGroupResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeCheckSyncJobResultRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeCheckSyncJobResultResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeCompareReportRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeCompareReportResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeCompareTasksRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeCompareTasksResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeConsumerGroupsRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeConsumerGroupsResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrateDBInstancesRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrateDBInstancesResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrationCheckJobRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrationCheckJobResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrationDetailRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrationDetailResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrationJobsRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrationJobsResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeModifyCheckSyncJobResultRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeModifyCheckSyncJobResultResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeOffsetByTimeRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeOffsetByTimeResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeSubscribeCheckJobRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeSubscribeCheckJobResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeSubscribeDetailRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeSubscribeDetailResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeSubscribeJobsRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeSubscribeJobsResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeSubscribeReturnableRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeSubscribeReturnableResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeSyncJobsRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeSyncJobsResponse.h>
#include <tencentcloud/dts/v20211206/model/DestroyIsolatedSubscribeRequest.h>
#include <tencentcloud/dts/v20211206/model/DestroyIsolatedSubscribeResponse.h>
#include <tencentcloud/dts/v20211206/model/DestroyMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/DestroyMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/DestroySyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/DestroySyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/IsolateMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/IsolateMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/IsolateSubscribeRequest.h>
#include <tencentcloud/dts/v20211206/model/IsolateSubscribeResponse.h>
#include <tencentcloud/dts/v20211206/model/IsolateSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/IsolateSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyCompareTaskRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyCompareTaskResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyCompareTaskNameRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyCompareTaskNameResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyConsumerGroupDescriptionRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyConsumerGroupDescriptionResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyConsumerGroupPasswordRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyConsumerGroupPasswordResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrateJobSpecRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrateJobSpecResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrateNameRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrateNameResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrateRateLimitRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrateRateLimitResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrateRuntimeAttributeRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrateRuntimeAttributeResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrationJobRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrationJobResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifySubscribeAutoRenewFlagRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifySubscribeAutoRenewFlagResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifySubscribeNameRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifySubscribeNameResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifySubscribeObjectsRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifySubscribeObjectsResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifySyncJobConfigRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifySyncJobConfigResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifySyncRateLimitRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifySyncRateLimitResponse.h>
#include <tencentcloud/dts/v20211206/model/PauseMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/PauseMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/PauseSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/PauseSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/RecoverMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/RecoverMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/RecoverSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/RecoverSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/ResetConsumerGroupOffsetRequest.h>
#include <tencentcloud/dts/v20211206/model/ResetConsumerGroupOffsetResponse.h>
#include <tencentcloud/dts/v20211206/model/ResetSubscribeRequest.h>
#include <tencentcloud/dts/v20211206/model/ResetSubscribeResponse.h>
#include <tencentcloud/dts/v20211206/model/ResizeSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/ResizeSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/ResumeMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/ResumeMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/ResumeSubscribeRequest.h>
#include <tencentcloud/dts/v20211206/model/ResumeSubscribeResponse.h>
#include <tencentcloud/dts/v20211206/model/ResumeSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/ResumeSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/SkipCheckItemRequest.h>
#include <tencentcloud/dts/v20211206/model/SkipCheckItemResponse.h>
#include <tencentcloud/dts/v20211206/model/SkipSyncCheckItemRequest.h>
#include <tencentcloud/dts/v20211206/model/SkipSyncCheckItemResponse.h>
#include <tencentcloud/dts/v20211206/model/StartCompareRequest.h>
#include <tencentcloud/dts/v20211206/model/StartCompareResponse.h>
#include <tencentcloud/dts/v20211206/model/StartMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/StartMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/StartModifySyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/StartModifySyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/StartSubscribeRequest.h>
#include <tencentcloud/dts/v20211206/model/StartSubscribeResponse.h>
#include <tencentcloud/dts/v20211206/model/StartSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/StartSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/StopCompareRequest.h>
#include <tencentcloud/dts/v20211206/model/StopCompareResponse.h>
#include <tencentcloud/dts/v20211206/model/StopMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/StopMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/StopSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/StopSyncJobResponse.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            class DtsClient : public AbstractClient
            {
            public:
                DtsClient(const Credential &credential, const std::string &region);
                DtsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CompleteMigrateJobResponse> CompleteMigrateJobOutcome;
                typedef std::future<CompleteMigrateJobOutcome> CompleteMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CompleteMigrateJobRequest&, CompleteMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompleteMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ConfigureSubscribeJobResponse> ConfigureSubscribeJobOutcome;
                typedef std::future<ConfigureSubscribeJobOutcome> ConfigureSubscribeJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ConfigureSubscribeJobRequest&, ConfigureSubscribeJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureSubscribeJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ConfigureSyncJobResponse> ConfigureSyncJobOutcome;
                typedef std::future<ConfigureSyncJobOutcome> ConfigureSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ConfigureSyncJobRequest&, ConfigureSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ContinueMigrateJobResponse> ContinueMigrateJobOutcome;
                typedef std::future<ContinueMigrateJobOutcome> ContinueMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ContinueMigrateJobRequest&, ContinueMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ContinueMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ContinueSyncJobResponse> ContinueSyncJobOutcome;
                typedef std::future<ContinueSyncJobOutcome> ContinueSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ContinueSyncJobRequest&, ContinueSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ContinueSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCheckSyncJobResponse> CreateCheckSyncJobOutcome;
                typedef std::future<CreateCheckSyncJobOutcome> CreateCheckSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateCheckSyncJobRequest&, CreateCheckSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCheckSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCompareTaskResponse> CreateCompareTaskOutcome;
                typedef std::future<CreateCompareTaskOutcome> CreateCompareTaskOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateCompareTaskRequest&, CreateCompareTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCompareTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConsumerGroupResponse> CreateConsumerGroupOutcome;
                typedef std::future<CreateConsumerGroupOutcome> CreateConsumerGroupOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateConsumerGroupRequest&, CreateConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMigrateCheckJobResponse> CreateMigrateCheckJobOutcome;
                typedef std::future<CreateMigrateCheckJobOutcome> CreateMigrateCheckJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateMigrateCheckJobRequest&, CreateMigrateCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrateCheckJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMigrationServiceResponse> CreateMigrationServiceOutcome;
                typedef std::future<CreateMigrationServiceOutcome> CreateMigrationServiceOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateMigrationServiceRequest&, CreateMigrationServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrationServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateModifyCheckSyncJobResponse> CreateModifyCheckSyncJobOutcome;
                typedef std::future<CreateModifyCheckSyncJobOutcome> CreateModifyCheckSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateModifyCheckSyncJobRequest&, CreateModifyCheckSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModifyCheckSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSubscribeResponse> CreateSubscribeOutcome;
                typedef std::future<CreateSubscribeOutcome> CreateSubscribeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateSubscribeRequest&, CreateSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSubscribeCheckJobResponse> CreateSubscribeCheckJobOutcome;
                typedef std::future<CreateSubscribeCheckJobOutcome> CreateSubscribeCheckJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateSubscribeCheckJobRequest&, CreateSubscribeCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubscribeCheckJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSyncJobResponse> CreateSyncJobOutcome;
                typedef std::future<CreateSyncJobOutcome> CreateSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateSyncJobRequest&, CreateSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCompareTaskResponse> DeleteCompareTaskOutcome;
                typedef std::future<DeleteCompareTaskOutcome> DeleteCompareTaskOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DeleteCompareTaskRequest&, DeleteCompareTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCompareTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConsumerGroupResponse> DeleteConsumerGroupOutcome;
                typedef std::future<DeleteConsumerGroupOutcome> DeleteConsumerGroupOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DeleteConsumerGroupRequest&, DeleteConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCheckSyncJobResultResponse> DescribeCheckSyncJobResultOutcome;
                typedef std::future<DescribeCheckSyncJobResultOutcome> DescribeCheckSyncJobResultOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeCheckSyncJobResultRequest&, DescribeCheckSyncJobResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckSyncJobResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCompareReportResponse> DescribeCompareReportOutcome;
                typedef std::future<DescribeCompareReportOutcome> DescribeCompareReportOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeCompareReportRequest&, DescribeCompareReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCompareReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCompareTasksResponse> DescribeCompareTasksOutcome;
                typedef std::future<DescribeCompareTasksOutcome> DescribeCompareTasksOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeCompareTasksRequest&, DescribeCompareTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCompareTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumerGroupsResponse> DescribeConsumerGroupsOutcome;
                typedef std::future<DescribeConsumerGroupsOutcome> DescribeConsumerGroupsOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeConsumerGroupsRequest&, DescribeConsumerGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrateDBInstancesResponse> DescribeMigrateDBInstancesOutcome;
                typedef std::future<DescribeMigrateDBInstancesOutcome> DescribeMigrateDBInstancesOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeMigrateDBInstancesRequest&, DescribeMigrateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrationCheckJobResponse> DescribeMigrationCheckJobOutcome;
                typedef std::future<DescribeMigrationCheckJobOutcome> DescribeMigrationCheckJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeMigrationCheckJobRequest&, DescribeMigrationCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationCheckJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrationDetailResponse> DescribeMigrationDetailOutcome;
                typedef std::future<DescribeMigrationDetailOutcome> DescribeMigrationDetailOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeMigrationDetailRequest&, DescribeMigrationDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrationJobsResponse> DescribeMigrationJobsOutcome;
                typedef std::future<DescribeMigrationJobsOutcome> DescribeMigrationJobsOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeMigrationJobsRequest&, DescribeMigrationJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModifyCheckSyncJobResultResponse> DescribeModifyCheckSyncJobResultOutcome;
                typedef std::future<DescribeModifyCheckSyncJobResultOutcome> DescribeModifyCheckSyncJobResultOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeModifyCheckSyncJobResultRequest&, DescribeModifyCheckSyncJobResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModifyCheckSyncJobResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOffsetByTimeResponse> DescribeOffsetByTimeOutcome;
                typedef std::future<DescribeOffsetByTimeOutcome> DescribeOffsetByTimeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeOffsetByTimeRequest&, DescribeOffsetByTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOffsetByTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubscribeCheckJobResponse> DescribeSubscribeCheckJobOutcome;
                typedef std::future<DescribeSubscribeCheckJobOutcome> DescribeSubscribeCheckJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeSubscribeCheckJobRequest&, DescribeSubscribeCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscribeCheckJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubscribeDetailResponse> DescribeSubscribeDetailOutcome;
                typedef std::future<DescribeSubscribeDetailOutcome> DescribeSubscribeDetailOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeSubscribeDetailRequest&, DescribeSubscribeDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscribeDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubscribeJobsResponse> DescribeSubscribeJobsOutcome;
                typedef std::future<DescribeSubscribeJobsOutcome> DescribeSubscribeJobsOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeSubscribeJobsRequest&, DescribeSubscribeJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscribeJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubscribeReturnableResponse> DescribeSubscribeReturnableOutcome;
                typedef std::future<DescribeSubscribeReturnableOutcome> DescribeSubscribeReturnableOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeSubscribeReturnableRequest&, DescribeSubscribeReturnableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscribeReturnableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSyncJobsResponse> DescribeSyncJobsOutcome;
                typedef std::future<DescribeSyncJobsOutcome> DescribeSyncJobsOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeSyncJobsRequest&, DescribeSyncJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSyncJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyIsolatedSubscribeResponse> DestroyIsolatedSubscribeOutcome;
                typedef std::future<DestroyIsolatedSubscribeOutcome> DestroyIsolatedSubscribeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DestroyIsolatedSubscribeRequest&, DestroyIsolatedSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyIsolatedSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyMigrateJobResponse> DestroyMigrateJobOutcome;
                typedef std::future<DestroyMigrateJobOutcome> DestroyMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DestroyMigrateJobRequest&, DestroyMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroySyncJobResponse> DestroySyncJobOutcome;
                typedef std::future<DestroySyncJobOutcome> DestroySyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DestroySyncJobRequest&, DestroySyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroySyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateMigrateJobResponse> IsolateMigrateJobOutcome;
                typedef std::future<IsolateMigrateJobOutcome> IsolateMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::IsolateMigrateJobRequest&, IsolateMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateSubscribeResponse> IsolateSubscribeOutcome;
                typedef std::future<IsolateSubscribeOutcome> IsolateSubscribeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::IsolateSubscribeRequest&, IsolateSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateSyncJobResponse> IsolateSyncJobOutcome;
                typedef std::future<IsolateSyncJobOutcome> IsolateSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::IsolateSyncJobRequest&, IsolateSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCompareTaskResponse> ModifyCompareTaskOutcome;
                typedef std::future<ModifyCompareTaskOutcome> ModifyCompareTaskOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyCompareTaskRequest&, ModifyCompareTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCompareTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCompareTaskNameResponse> ModifyCompareTaskNameOutcome;
                typedef std::future<ModifyCompareTaskNameOutcome> ModifyCompareTaskNameOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyCompareTaskNameRequest&, ModifyCompareTaskNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCompareTaskNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConsumerGroupDescriptionResponse> ModifyConsumerGroupDescriptionOutcome;
                typedef std::future<ModifyConsumerGroupDescriptionOutcome> ModifyConsumerGroupDescriptionOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyConsumerGroupDescriptionRequest&, ModifyConsumerGroupDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConsumerGroupDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConsumerGroupPasswordResponse> ModifyConsumerGroupPasswordOutcome;
                typedef std::future<ModifyConsumerGroupPasswordOutcome> ModifyConsumerGroupPasswordOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyConsumerGroupPasswordRequest&, ModifyConsumerGroupPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConsumerGroupPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMigrateJobSpecResponse> ModifyMigrateJobSpecOutcome;
                typedef std::future<ModifyMigrateJobSpecOutcome> ModifyMigrateJobSpecOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyMigrateJobSpecRequest&, ModifyMigrateJobSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrateJobSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMigrateNameResponse> ModifyMigrateNameOutcome;
                typedef std::future<ModifyMigrateNameOutcome> ModifyMigrateNameOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyMigrateNameRequest&, ModifyMigrateNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrateNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMigrateRateLimitResponse> ModifyMigrateRateLimitOutcome;
                typedef std::future<ModifyMigrateRateLimitOutcome> ModifyMigrateRateLimitOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyMigrateRateLimitRequest&, ModifyMigrateRateLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrateRateLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMigrateRuntimeAttributeResponse> ModifyMigrateRuntimeAttributeOutcome;
                typedef std::future<ModifyMigrateRuntimeAttributeOutcome> ModifyMigrateRuntimeAttributeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyMigrateRuntimeAttributeRequest&, ModifyMigrateRuntimeAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrateRuntimeAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMigrationJobResponse> ModifyMigrationJobOutcome;
                typedef std::future<ModifyMigrationJobOutcome> ModifyMigrationJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyMigrationJobRequest&, ModifyMigrationJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrationJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubscribeAutoRenewFlagResponse> ModifySubscribeAutoRenewFlagOutcome;
                typedef std::future<ModifySubscribeAutoRenewFlagOutcome> ModifySubscribeAutoRenewFlagOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifySubscribeAutoRenewFlagRequest&, ModifySubscribeAutoRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubscribeAutoRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubscribeNameResponse> ModifySubscribeNameOutcome;
                typedef std::future<ModifySubscribeNameOutcome> ModifySubscribeNameOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifySubscribeNameRequest&, ModifySubscribeNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubscribeNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubscribeObjectsResponse> ModifySubscribeObjectsOutcome;
                typedef std::future<ModifySubscribeObjectsOutcome> ModifySubscribeObjectsOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifySubscribeObjectsRequest&, ModifySubscribeObjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubscribeObjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySyncJobConfigResponse> ModifySyncJobConfigOutcome;
                typedef std::future<ModifySyncJobConfigOutcome> ModifySyncJobConfigOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifySyncJobConfigRequest&, ModifySyncJobConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySyncJobConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySyncRateLimitResponse> ModifySyncRateLimitOutcome;
                typedef std::future<ModifySyncRateLimitOutcome> ModifySyncRateLimitOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifySyncRateLimitRequest&, ModifySyncRateLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySyncRateLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::PauseMigrateJobResponse> PauseMigrateJobOutcome;
                typedef std::future<PauseMigrateJobOutcome> PauseMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::PauseMigrateJobRequest&, PauseMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PauseMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::PauseSyncJobResponse> PauseSyncJobOutcome;
                typedef std::future<PauseSyncJobOutcome> PauseSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::PauseSyncJobRequest&, PauseSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PauseSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverMigrateJobResponse> RecoverMigrateJobOutcome;
                typedef std::future<RecoverMigrateJobOutcome> RecoverMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::RecoverMigrateJobRequest&, RecoverMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverSyncJobResponse> RecoverSyncJobOutcome;
                typedef std::future<RecoverSyncJobOutcome> RecoverSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::RecoverSyncJobRequest&, RecoverSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetConsumerGroupOffsetResponse> ResetConsumerGroupOffsetOutcome;
                typedef std::future<ResetConsumerGroupOffsetOutcome> ResetConsumerGroupOffsetOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ResetConsumerGroupOffsetRequest&, ResetConsumerGroupOffsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetConsumerGroupOffsetAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetSubscribeResponse> ResetSubscribeOutcome;
                typedef std::future<ResetSubscribeOutcome> ResetSubscribeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ResetSubscribeRequest&, ResetSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::ResizeSyncJobResponse> ResizeSyncJobOutcome;
                typedef std::future<ResizeSyncJobOutcome> ResizeSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ResizeSyncJobRequest&, ResizeSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResizeSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeMigrateJobResponse> ResumeMigrateJobOutcome;
                typedef std::future<ResumeMigrateJobOutcome> ResumeMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ResumeMigrateJobRequest&, ResumeMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeSubscribeResponse> ResumeSubscribeOutcome;
                typedef std::future<ResumeSubscribeOutcome> ResumeSubscribeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ResumeSubscribeRequest&, ResumeSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeSyncJobResponse> ResumeSyncJobOutcome;
                typedef std::future<ResumeSyncJobOutcome> ResumeSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ResumeSyncJobRequest&, ResumeSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SkipCheckItemResponse> SkipCheckItemOutcome;
                typedef std::future<SkipCheckItemOutcome> SkipCheckItemOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::SkipCheckItemRequest&, SkipCheckItemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SkipCheckItemAsyncHandler;
                typedef Outcome<Core::Error, Model::SkipSyncCheckItemResponse> SkipSyncCheckItemOutcome;
                typedef std::future<SkipSyncCheckItemOutcome> SkipSyncCheckItemOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::SkipSyncCheckItemRequest&, SkipSyncCheckItemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SkipSyncCheckItemAsyncHandler;
                typedef Outcome<Core::Error, Model::StartCompareResponse> StartCompareOutcome;
                typedef std::future<StartCompareOutcome> StartCompareOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StartCompareRequest&, StartCompareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartCompareAsyncHandler;
                typedef Outcome<Core::Error, Model::StartMigrateJobResponse> StartMigrateJobOutcome;
                typedef std::future<StartMigrateJobOutcome> StartMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StartMigrateJobRequest&, StartMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::StartModifySyncJobResponse> StartModifySyncJobOutcome;
                typedef std::future<StartModifySyncJobOutcome> StartModifySyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StartModifySyncJobRequest&, StartModifySyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartModifySyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::StartSubscribeResponse> StartSubscribeOutcome;
                typedef std::future<StartSubscribeOutcome> StartSubscribeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StartSubscribeRequest&, StartSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::StartSyncJobResponse> StartSyncJobOutcome;
                typedef std::future<StartSyncJobOutcome> StartSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StartSyncJobRequest&, StartSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::StopCompareResponse> StopCompareOutcome;
                typedef std::future<StopCompareOutcome> StopCompareOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StopCompareRequest&, StopCompareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopCompareAsyncHandler;
                typedef Outcome<Core::Error, Model::StopMigrateJobResponse> StopMigrateJobOutcome;
                typedef std::future<StopMigrateJobOutcome> StopMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StopMigrateJobRequest&, StopMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::StopSyncJobResponse> StopSyncJobOutcome;
                typedef std::future<StopSyncJobOutcome> StopSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StopSyncJobRequest&, StopSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopSyncJobAsyncHandler;



                /**
                 *This API is used to complete a data migration task.
For tasks in incremental migration mode, you need to call this API before migration gets ready for completion to stop migrating incremental data.
If the task status queried through the `DescribeMigrationJobs` API is ready (`Status` = `readyComplete`), you can call this API to complete the migration task.
                 * @param req CompleteMigrateJobRequest
                 * @return CompleteMigrateJobOutcome
                 */
                CompleteMigrateJobOutcome CompleteMigrateJob(const Model::CompleteMigrateJobRequest &request);
                void CompleteMigrateJobAsync(const Model::CompleteMigrateJobRequest& request, const CompleteMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CompleteMigrateJobOutcomeCallable CompleteMigrateJobCallable(const Model::CompleteMigrateJobRequest& request);

                /**
                 *This API is used to configure data subscription instances.
                 * @param req ConfigureSubscribeJobRequest
                 * @return ConfigureSubscribeJobOutcome
                 */
                ConfigureSubscribeJobOutcome ConfigureSubscribeJob(const Model::ConfigureSubscribeJobRequest &request);
                void ConfigureSubscribeJobAsync(const Model::ConfigureSubscribeJobRequest& request, const ConfigureSubscribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfigureSubscribeJobOutcomeCallable ConfigureSubscribeJobCallable(const Model::ConfigureSubscribeJobRequest& request);

                /**
                 *This API is used to configure a sync task.
                 * @param req ConfigureSyncJobRequest
                 * @return ConfigureSyncJobOutcome
                 */
                ConfigureSyncJobOutcome ConfigureSyncJob(const Model::ConfigureSyncJobRequest &request);
                void ConfigureSyncJobAsync(const Model::ConfigureSyncJobRequest& request, const ConfigureSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfigureSyncJobOutcomeCallable ConfigureSyncJobCallable(const Model::ConfigureSyncJobRequest& request);

                /**
                 *This API is used to resume a paused migration task.
                 * @param req ContinueMigrateJobRequest
                 * @return ContinueMigrateJobOutcome
                 */
                ContinueMigrateJobOutcome ContinueMigrateJob(const Model::ContinueMigrateJobRequest &request);
                void ContinueMigrateJobAsync(const Model::ContinueMigrateJobRequest& request, const ContinueMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ContinueMigrateJobOutcomeCallable ContinueMigrateJobCallable(const Model::ContinueMigrateJobRequest& request);

                /**
                 *This API is used to resume a paused data sync task.
                 * @param req ContinueSyncJobRequest
                 * @return ContinueSyncJobOutcome
                 */
                ContinueSyncJobOutcome ContinueSyncJob(const Model::ContinueSyncJobRequest &request);
                void ContinueSyncJobAsync(const Model::ContinueSyncJobRequest& request, const ContinueSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ContinueSyncJobOutcomeCallable ContinueSyncJobCallable(const Model::ContinueSyncJobRequest& request);

                /**
                 *This API is used to verify a sync task by checking required parameters and peripheral configuration.
                 * @param req CreateCheckSyncJobRequest
                 * @return CreateCheckSyncJobOutcome
                 */
                CreateCheckSyncJobOutcome CreateCheckSyncJob(const Model::CreateCheckSyncJobRequest &request);
                void CreateCheckSyncJobAsync(const Model::CreateCheckSyncJobRequest& request, const CreateCheckSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCheckSyncJobOutcomeCallable CreateCheckSyncJobCallable(const Model::CreateCheckSyncJobRequest& request);

                /**
                 *This API is used to create a data consistency check task. After the task is successfully created, its ID will be returned in the format of `dts-8yv4w2i1-cmp-37skmii9`, and you can call `StartCompare` to start it.
                 * @param req CreateCompareTaskRequest
                 * @return CreateCompareTaskOutcome
                 */
                CreateCompareTaskOutcome CreateCompareTask(const Model::CreateCompareTaskRequest &request);
                void CreateCompareTaskAsync(const Model::CreateCompareTaskRequest& request, const CreateCompareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCompareTaskOutcomeCallable CreateCompareTaskCallable(const Model::CreateCompareTaskRequest& request);

                /**
                 *This API is used to creat a consumer group for the subscription instance.
                 * @param req CreateConsumerGroupRequest
                 * @return CreateConsumerGroupOutcome
                 */
                CreateConsumerGroupOutcome CreateConsumerGroup(const Model::CreateConsumerGroupRequest &request);
                void CreateConsumerGroupAsync(const Model::CreateConsumerGroupRequest& request, const CreateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsumerGroupOutcomeCallable CreateConsumerGroupCallable(const Model::CreateConsumerGroupRequest& request);

                /**
                 *This API is used to verify a migration task.
Before migration, you should call this API to create a check task. Migration will start only if the check succeeds. You can view the check result through the `DescribeMigrationCheckJob` API.
After successful check, if the migration task needs to be modified, a new check task should be created, and migration will start only after the new check succeeds.

                 * @param req CreateMigrateCheckJobRequest
                 * @return CreateMigrateCheckJobOutcome
                 */
                CreateMigrateCheckJobOutcome CreateMigrateCheckJob(const Model::CreateMigrateCheckJobRequest &request);
                void CreateMigrateCheckJobAsync(const Model::CreateMigrateCheckJobRequest& request, const CreateMigrateCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMigrateCheckJobOutcomeCallable CreateMigrateCheckJobCallable(const Model::CreateMigrateCheckJobRequest& request);

                /**
                 *This API is used to purchase migration tasks. After the tasks are purchased successfully, a randomly generated list of task IDs will be returned. You can also call the `DescribeMigrationJobs` API to query the IDs of the successfully purchased tasks. Note that once a task is purchased successfully, the types and regions of the source and target databases cannot be changed.
                 * @param req CreateMigrationServiceRequest
                 * @return CreateMigrationServiceOutcome
                 */
                CreateMigrationServiceOutcome CreateMigrationService(const Model::CreateMigrationServiceRequest &request);
                void CreateMigrationServiceAsync(const Model::CreateMigrationServiceRequest& request, const CreateMigrationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMigrationServiceOutcomeCallable CreateMigrationServiceCallable(const Model::CreateMigrationServiceRequest& request);

                /**
                 *This API is used to check whether the current data sync task supports object modification after the task configuration is modified.
                 * @param req CreateModifyCheckSyncJobRequest
                 * @return CreateModifyCheckSyncJobOutcome
                 */
                CreateModifyCheckSyncJobOutcome CreateModifyCheckSyncJob(const Model::CreateModifyCheckSyncJobRequest &request);
                void CreateModifyCheckSyncJobAsync(const Model::CreateModifyCheckSyncJobRequest& request, const CreateModifyCheckSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateModifyCheckSyncJobOutcomeCallable CreateModifyCheckSyncJobCallable(const Model::CreateModifyCheckSyncJobRequest& request);

                /**
                 *This API is used to create a data subscription task.
                 * @param req CreateSubscribeRequest
                 * @return CreateSubscribeOutcome
                 */
                CreateSubscribeOutcome CreateSubscribe(const Model::CreateSubscribeRequest &request);
                void CreateSubscribeAsync(const Model::CreateSubscribeRequest& request, const CreateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubscribeOutcomeCallable CreateSubscribeCallable(const Model::CreateSubscribeRequest& request);

                /**
                 *This API is used to create a subscription check task. The task must have successfully called the ConfigureSubscribeJob interface to configure all necessary information before starting the check.
                 * @param req CreateSubscribeCheckJobRequest
                 * @return CreateSubscribeCheckJobOutcome
                 */
                CreateSubscribeCheckJobOutcome CreateSubscribeCheckJob(const Model::CreateSubscribeCheckJobRequest &request);
                void CreateSubscribeCheckJobAsync(const Model::CreateSubscribeCheckJobRequest& request, const CreateSubscribeCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubscribeCheckJobOutcomeCallable CreateSubscribeCheckJobCallable(const Model::CreateSubscribeCheckJobRequest& request);

                /**
                 *This API is used to create a sync task.
                 * @param req CreateSyncJobRequest
                 * @return CreateSyncJobOutcome
                 */
                CreateSyncJobOutcome CreateSyncJob(const Model::CreateSyncJobRequest &request);
                void CreateSyncJobAsync(const Model::CreateSyncJobRequest& request, const CreateSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSyncJobOutcomeCallable CreateSyncJobCallable(const Model::CreateSyncJobRequest& request);

                /**
                 *This API is used to delete a data consistency check task, which can be called when the task status is `success`, `failed`, or `canceled`.
                 * @param req DeleteCompareTaskRequest
                 * @return DeleteCompareTaskOutcome
                 */
                DeleteCompareTaskOutcome DeleteCompareTask(const Model::DeleteCompareTaskRequest &request);
                void DeleteCompareTaskAsync(const Model::DeleteCompareTaskRequest& request, const DeleteCompareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCompareTaskOutcomeCallable DeleteCompareTaskCallable(const Model::DeleteCompareTaskRequest& request);

                /**
                 *This API is used to delete a consumer group of a subscription task.
                 * @param req DeleteConsumerGroupRequest
                 * @return DeleteConsumerGroupOutcome
                 */
                DeleteConsumerGroupOutcome DeleteConsumerGroup(const Model::DeleteConsumerGroupRequest &request);
                void DeleteConsumerGroupAsync(const Model::DeleteConsumerGroupRequest& request, const DeleteConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConsumerGroupOutcomeCallable DeleteConsumerGroupCallable(const Model::DeleteConsumerGroupRequest& request);

                /**
                 *This API is used to query the result of the sync check task and check the required parameters and peripheral configurations.
                 * @param req DescribeCheckSyncJobResultRequest
                 * @return DescribeCheckSyncJobResultOutcome
                 */
                DescribeCheckSyncJobResultOutcome DescribeCheckSyncJobResult(const Model::DescribeCheckSyncJobResultRequest &request);
                void DescribeCheckSyncJobResultAsync(const Model::DescribeCheckSyncJobResultRequest& request, const DescribeCheckSyncJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCheckSyncJobResultOutcomeCallable DescribeCheckSyncJobResultCallable(const Model::DescribeCheckSyncJobResultRequest& request);

                /**
                 *This API is used to query the details of a data consistency check task.
                 * @param req DescribeCompareReportRequest
                 * @return DescribeCompareReportOutcome
                 */
                DescribeCompareReportOutcome DescribeCompareReport(const Model::DescribeCompareReportRequest &request);
                void DescribeCompareReportAsync(const Model::DescribeCompareReportRequest& request, const DescribeCompareReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCompareReportOutcomeCallable DescribeCompareReportCallable(const Model::DescribeCompareReportRequest& request);

                /**
                 *This API is used to query the list of data consistency check tasks under the current task.
                 * @param req DescribeCompareTasksRequest
                 * @return DescribeCompareTasksOutcome
                 */
                DescribeCompareTasksOutcome DescribeCompareTasks(const Model::DescribeCompareTasksRequest &request);
                void DescribeCompareTasksAsync(const Model::DescribeCompareTasksRequest& request, const DescribeCompareTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCompareTasksOutcomeCallable DescribeCompareTasksCallable(const Model::DescribeCompareTasksRequest& request);

                /**
                 *This API is used to get consumer group details for the subscription instance configuration.
                 * @param req DescribeConsumerGroupsRequest
                 * @return DescribeConsumerGroupsOutcome
                 */
                DescribeConsumerGroupsOutcome DescribeConsumerGroups(const Model::DescribeConsumerGroupsRequest &request);
                void DescribeConsumerGroupsAsync(const Model::DescribeConsumerGroupsRequest& request, const DescribeConsumerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumerGroupsOutcomeCallable DescribeConsumerGroupsCallable(const Model::DescribeConsumerGroupsRequest& request);

                /**
                 *This API is used to query migratable database instances.
                 * @param req DescribeMigrateDBInstancesRequest
                 * @return DescribeMigrateDBInstancesOutcome
                 */
                DescribeMigrateDBInstancesOutcome DescribeMigrateDBInstances(const Model::DescribeMigrateDBInstancesRequest &request);
                void DescribeMigrateDBInstancesAsync(const Model::DescribeMigrateDBInstancesRequest& request, const DescribeMigrateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrateDBInstancesOutcomeCallable DescribeMigrateDBInstancesCallable(const Model::DescribeMigrateDBInstancesRequest& request);

                /**
                 *This API is used to get the check result and query the check status and progress after a check is created. 
If the check succeeds, you can call the `StartMigrateJob` API to start migration.
If the check fails, the cause can be queried. Modify the migration configuration or adjust relevant parameters of the source/target instances through the `ModifyMigrationJob` API based on the error message.
                 * @param req DescribeMigrationCheckJobRequest
                 * @return DescribeMigrationCheckJobOutcome
                 */
                DescribeMigrationCheckJobOutcome DescribeMigrationCheckJob(const Model::DescribeMigrationCheckJobRequest &request);
                void DescribeMigrationCheckJobAsync(const Model::DescribeMigrationCheckJobRequest& request, const DescribeMigrationCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrationCheckJobOutcomeCallable DescribeMigrationCheckJobCallable(const Model::DescribeMigrationCheckJobRequest& request);

                /**
                 *This API is used to query the details of a migration task.
                 * @param req DescribeMigrationDetailRequest
                 * @return DescribeMigrationDetailOutcome
                 */
                DescribeMigrationDetailOutcome DescribeMigrationDetail(const Model::DescribeMigrationDetailRequest &request);
                void DescribeMigrationDetailAsync(const Model::DescribeMigrationDetailRequest& request, const DescribeMigrationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrationDetailOutcomeCallable DescribeMigrationDetailCallable(const Model::DescribeMigrationDetailRequest& request);

                /**
                 *This API is used to query the list of data migration tasks.
                 * @param req DescribeMigrationJobsRequest
                 * @return DescribeMigrationJobsOutcome
                 */
                DescribeMigrationJobsOutcome DescribeMigrationJobs(const Model::DescribeMigrationJobsRequest &request);
                void DescribeMigrationJobsAsync(const Model::DescribeMigrationJobsRequest& request, const DescribeMigrationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrationJobsOutcomeCallable DescribeMigrationJobsCallable(const Model::DescribeMigrationJobsRequest& request);

                /**
                 *This API is used to query the result of the created check task for object modification.
                 * @param req DescribeModifyCheckSyncJobResultRequest
                 * @return DescribeModifyCheckSyncJobResultOutcome
                 */
                DescribeModifyCheckSyncJobResultOutcome DescribeModifyCheckSyncJobResult(const Model::DescribeModifyCheckSyncJobResultRequest &request);
                void DescribeModifyCheckSyncJobResultAsync(const Model::DescribeModifyCheckSyncJobResultRequest& request, const DescribeModifyCheckSyncJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModifyCheckSyncJobResultOutcomeCallable DescribeModifyCheckSyncJobResultCallable(const Model::DescribeModifyCheckSyncJobResultRequest& request);

                /**
                 *This API is used to query the latest offset before the specified time in KafkaTopic.The offset output by the interface is the closest offset to this time.If the input time is much later than the current time, the output is equivalent to the latest offset;If the input time is much earlier than the current time, the output is equivalent to the oldest offset;If the input is empty, the default time is 0, which is the oldest offset to be queried.
                 * @param req DescribeOffsetByTimeRequest
                 * @return DescribeOffsetByTimeOutcome
                 */
                DescribeOffsetByTimeOutcome DescribeOffsetByTime(const Model::DescribeOffsetByTimeRequest &request);
                void DescribeOffsetByTimeAsync(const Model::DescribeOffsetByTimeRequest& request, const DescribeOffsetByTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOffsetByTimeOutcomeCallable DescribeOffsetByTimeCallable(const Model::DescribeOffsetByTimeRequest& request);

                /**
                 *This API is used to query the results of a subscription check task.
                 * @param req DescribeSubscribeCheckJobRequest
                 * @return DescribeSubscribeCheckJobOutcome
                 */
                DescribeSubscribeCheckJobOutcome DescribeSubscribeCheckJob(const Model::DescribeSubscribeCheckJobRequest &request);
                void DescribeSubscribeCheckJobAsync(const Model::DescribeSubscribeCheckJobRequest& request, const DescribeSubscribeCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubscribeCheckJobOutcomeCallable DescribeSubscribeCheckJobCallable(const Model::DescribeSubscribeCheckJobRequest& request);

                /**
                 *This API is used to get the configuration information of the data subscription instance.
                 * @param req DescribeSubscribeDetailRequest
                 * @return DescribeSubscribeDetailOutcome
                 */
                DescribeSubscribeDetailOutcome DescribeSubscribeDetail(const Model::DescribeSubscribeDetailRequest &request);
                void DescribeSubscribeDetailAsync(const Model::DescribeSubscribeDetailRequest& request, const DescribeSubscribeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubscribeDetailOutcomeCallable DescribeSubscribeDetailCallable(const Model::DescribeSubscribeDetailRequest& request);

                /**
                 *This API is used to get the information list of data subscription instances. Pagination is enabled by default with 20 results returned each time.
                 * @param req DescribeSubscribeJobsRequest
                 * @return DescribeSubscribeJobsOutcome
                 */
                DescribeSubscribeJobsOutcome DescribeSubscribeJobs(const Model::DescribeSubscribeJobsRequest &request);
                void DescribeSubscribeJobsAsync(const Model::DescribeSubscribeJobsRequest& request, const DescribeSubscribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubscribeJobsOutcomeCallable DescribeSubscribeJobsCallable(const Model::DescribeSubscribeJobsRequest& request);

                /**
                 *This API is used to query whether a subscription task can be terminated and returned.
                 * @param req DescribeSubscribeReturnableRequest
                 * @return DescribeSubscribeReturnableOutcome
                 */
                DescribeSubscribeReturnableOutcome DescribeSubscribeReturnable(const Model::DescribeSubscribeReturnableRequest &request);
                void DescribeSubscribeReturnableAsync(const Model::DescribeSubscribeReturnableRequest& request, const DescribeSubscribeReturnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubscribeReturnableOutcomeCallable DescribeSubscribeReturnableCallable(const Model::DescribeSubscribeReturnableRequest& request);

                /**
                 *This API is used to query the information of a sync task.
                 * @param req DescribeSyncJobsRequest
                 * @return DescribeSyncJobsOutcome
                 */
                DescribeSyncJobsOutcome DescribeSyncJobs(const Model::DescribeSyncJobsRequest &request);
                void DescribeSyncJobsAsync(const Model::DescribeSyncJobsRequest& request, const DescribeSyncJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSyncJobsOutcomeCallable DescribeSyncJobsCallable(const Model::DescribeSyncJobsRequest& request);

                /**
                 *This API is used to deactivate an isolated data subscription instance.
                 * @param req DestroyIsolatedSubscribeRequest
                 * @return DestroyIsolatedSubscribeOutcome
                 */
                DestroyIsolatedSubscribeOutcome DestroyIsolatedSubscribe(const Model::DestroyIsolatedSubscribeRequest &request);
                void DestroyIsolatedSubscribeAsync(const Model::DestroyIsolatedSubscribeRequest& request, const DestroyIsolatedSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyIsolatedSubscribeOutcomeCallable DestroyIsolatedSubscribeCallable(const Model::DestroyIsolatedSubscribeRequest& request);

                /**
                 *This API is used to delete a data migration task. For a billed task, you must first call the `IsolateMigrateJob` API to isolate it and make sure that it is in **Isolated** status before calling this API to delete it. For a free task, you can directly call the `IsolateMigrateJob` API to delete it.
                 * @param req DestroyMigrateJobRequest
                 * @return DestroyMigrateJobOutcome
                 */
                DestroyMigrateJobOutcome DestroyMigrateJob(const Model::DestroyMigrateJobRequest &request);
                void DestroyMigrateJobAsync(const Model::DestroyMigrateJobRequest& request, const DestroyMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyMigrateJobOutcomeCallable DestroyMigrateJobCallable(const Model::DestroyMigrateJobRequest& request);

                /**
                 *This API is used to delete a sync task. Only tasks in **Isolated** status can be completely deleted. After deletion, you can call the `DescribeSyncJobs` API to get the task list. If the deleted task is not in the list, it is deleted successfully.
                 * @param req DestroySyncJobRequest
                 * @return DestroySyncJobOutcome
                 */
                DestroySyncJobOutcome DestroySyncJob(const Model::DestroySyncJobRequest &request);
                void DestroySyncJobAsync(const Model::DestroySyncJobRequest& request, const DestroySyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroySyncJobOutcomeCallable DestroySyncJobCallable(const Model::DestroySyncJobRequest& request);

                /**
                 * This API is used to isolate and return a data migration task. After calling this API, you can call the `DescribeMigrationJobs` API to query the latest task status. For a billed task, after isolating it, you can call `RecoverMigrationJob` to recover it or call `DestroyMigrateJob` to delete it. For a free task, calling this API will directly delete it permanently.
                 * @param req IsolateMigrateJobRequest
                 * @return IsolateMigrateJobOutcome
                 */
                IsolateMigrateJobOutcome IsolateMigrateJob(const Model::IsolateMigrateJobRequest &request);
                void IsolateMigrateJobAsync(const Model::IsolateMigrateJobRequest& request, const IsolateMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateMigrateJobOutcomeCallable IsolateMigrateJobCallable(const Model::IsolateMigrateJobRequest& request);

                /**
                 *This API is used to isolate the subscription task. After calling, the subscription task will not be available. Pay-as-you-go tasks will stop billing, and monthly subscription tasks will refund automatically.
                 * @param req IsolateSubscribeRequest
                 * @return IsolateSubscribeOutcome
                 */
                IsolateSubscribeOutcome IsolateSubscribe(const Model::IsolateSubscribeRequest &request);
                void IsolateSubscribeAsync(const Model::IsolateSubscribeRequest& request, const IsolateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateSubscribeOutcomeCallable IsolateSubscribeCallable(const Model::IsolateSubscribeRequest& request);

                /**
                 *This API is used to isolate a sync task. After the task is isolated, you can call the `DescribeSyncJobs` API to query its status, call `RecoverSyncJob` to recover it, or directly delete it. For a free task, calling this API will directly delete it permanently.
                 * @param req IsolateSyncJobRequest
                 * @return IsolateSyncJobOutcome
                 */
                IsolateSyncJobOutcome IsolateSyncJob(const Model::IsolateSyncJobRequest &request);
                void IsolateSyncJobAsync(const Model::IsolateSyncJobRequest& request, const IsolateSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateSyncJobOutcomeCallable IsolateSyncJobCallable(const Model::IsolateSyncJobRequest& request);

                /**
                 *This API is used to modify the parameters of a data consistency check task after it is created and before it starts.
                 * @param req ModifyCompareTaskRequest
                 * @return ModifyCompareTaskOutcome
                 */
                ModifyCompareTaskOutcome ModifyCompareTask(const Model::ModifyCompareTaskRequest &request);
                void ModifyCompareTaskAsync(const Model::ModifyCompareTaskRequest& request, const ModifyCompareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCompareTaskOutcomeCallable ModifyCompareTaskCallable(const Model::ModifyCompareTaskRequest& request);

                /**
                 *This API is used to rename a data consistency check task.
                 * @param req ModifyCompareTaskNameRequest
                 * @return ModifyCompareTaskNameOutcome
                 */
                ModifyCompareTaskNameOutcome ModifyCompareTaskName(const Model::ModifyCompareTaskNameRequest &request);
                void ModifyCompareTaskNameAsync(const Model::ModifyCompareTaskNameRequest& request, const ModifyCompareTaskNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCompareTaskNameOutcomeCallable ModifyCompareTaskNameCallable(const Model::ModifyCompareTaskNameRequest& request);

                /**
                 *This API is used to modify the description of the specified subscription consumption group.
                 * @param req ModifyConsumerGroupDescriptionRequest
                 * @return ModifyConsumerGroupDescriptionOutcome
                 */
                ModifyConsumerGroupDescriptionOutcome ModifyConsumerGroupDescription(const Model::ModifyConsumerGroupDescriptionRequest &request);
                void ModifyConsumerGroupDescriptionAsync(const Model::ModifyConsumerGroupDescriptionRequest& request, const ModifyConsumerGroupDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConsumerGroupDescriptionOutcomeCallable ModifyConsumerGroupDescriptionCallable(const Model::ModifyConsumerGroupDescriptionRequest& request);

                /**
                 *This API is used to modify the password of the specified subscription consumer group.
                 * @param req ModifyConsumerGroupPasswordRequest
                 * @return ModifyConsumerGroupPasswordOutcome
                 */
                ModifyConsumerGroupPasswordOutcome ModifyConsumerGroupPassword(const Model::ModifyConsumerGroupPasswordRequest &request);
                void ModifyConsumerGroupPasswordAsync(const Model::ModifyConsumerGroupPasswordRequest& request, const ModifyConsumerGroupPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConsumerGroupPasswordOutcomeCallable ModifyConsumerGroupPasswordCallable(const Model::ModifyConsumerGroupPasswordRequest& request);

                /**
                 *This API is used to adjust the specification of a pay-as-you-go task. After calling this API, you can call the `DescribeMigrationJobs` API to query the latest task status.
                 * @param req ModifyMigrateJobSpecRequest
                 * @return ModifyMigrateJobSpecOutcome
                 */
                ModifyMigrateJobSpecOutcome ModifyMigrateJobSpec(const Model::ModifyMigrateJobSpecRequest &request);
                void ModifyMigrateJobSpecAsync(const Model::ModifyMigrateJobSpecRequest& request, const ModifyMigrateJobSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMigrateJobSpecOutcomeCallable ModifyMigrateJobSpecCallable(const Model::ModifyMigrateJobSpecRequest& request);

                /**
                 *This API is used to rename a migration task.
                 * @param req ModifyMigrateNameRequest
                 * @return ModifyMigrateNameOutcome
                 */
                ModifyMigrateNameOutcome ModifyMigrateName(const Model::ModifyMigrateNameRequest &request);
                void ModifyMigrateNameAsync(const Model::ModifyMigrateNameRequest& request, const ModifyMigrateNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMigrateNameOutcomeCallable ModifyMigrateNameCallable(const Model::ModifyMigrateNameRequest& request);

                /**
                 *This API is used to restrict the rate limit of the task, when a user finds that migration task has a large impact on the load of user's database.
                 * @param req ModifyMigrateRateLimitRequest
                 * @return ModifyMigrateRateLimitOutcome
                 */
                ModifyMigrateRateLimitOutcome ModifyMigrateRateLimit(const Model::ModifyMigrateRateLimitRequest &request);
                void ModifyMigrateRateLimitAsync(const Model::ModifyMigrateRateLimitRequest& request, const ModifyMigrateRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMigrateRateLimitOutcomeCallable ModifyMigrateRateLimitCallable(const Model::ModifyMigrateRateLimitRequest& request);

                /**
                 *This API is used to modify task runtime attributes. This interface is different from the configuration class interface and does not perform state machine evaluation.
                 * @param req ModifyMigrateRuntimeAttributeRequest
                 * @return ModifyMigrateRuntimeAttributeOutcome
                 */
                ModifyMigrateRuntimeAttributeOutcome ModifyMigrateRuntimeAttribute(const Model::ModifyMigrateRuntimeAttributeRequest &request);
                void ModifyMigrateRuntimeAttributeAsync(const Model::ModifyMigrateRuntimeAttributeRequest& request, const ModifyMigrateRuntimeAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMigrateRuntimeAttributeOutcomeCallable ModifyMigrateRuntimeAttributeCallable(const Model::ModifyMigrateRuntimeAttributeRequest& request);

                /**
                 *This API is used to configure a migration task. After it is configured successfully, you can call the `CreateMigrationCheckJob` API to create a check task, and only after it passes the check can it be started.
                 * @param req ModifyMigrationJobRequest
                 * @return ModifyMigrationJobOutcome
                 */
                ModifyMigrationJobOutcome ModifyMigrationJob(const Model::ModifyMigrationJobRequest &request);
                void ModifyMigrationJobAsync(const Model::ModifyMigrationJobRequest& request, const ModifyMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMigrationJobOutcomeCallable ModifyMigrationJobCallable(const Model::ModifyMigrationJobRequest& request);

                /**
                 *This API is used to modify the auto-renewal flag of your subscription instance. Only the monthly subscription modification task makes sense. After modifying, the pay-as-you-go task has no impact.
                 * @param req ModifySubscribeAutoRenewFlagRequest
                 * @return ModifySubscribeAutoRenewFlagOutcome
                 */
                ModifySubscribeAutoRenewFlagOutcome ModifySubscribeAutoRenewFlag(const Model::ModifySubscribeAutoRenewFlagRequest &request);
                void ModifySubscribeAutoRenewFlagAsync(const Model::ModifySubscribeAutoRenewFlagRequest& request, const ModifySubscribeAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubscribeAutoRenewFlagOutcomeCallable ModifySubscribeAutoRenewFlagCallable(const Model::ModifySubscribeAutoRenewFlagRequest& request);

                /**
                 *This API is used to modify the name of the data subscription instance.
                 * @param req ModifySubscribeNameRequest
                 * @return ModifySubscribeNameOutcome
                 */
                ModifySubscribeNameOutcome ModifySubscribeName(const Model::ModifySubscribeNameRequest &request);
                void ModifySubscribeNameAsync(const Model::ModifySubscribeNameRequest& request, const ModifySubscribeNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubscribeNameOutcomeCallable ModifySubscribeNameCallable(const Model::ModifySubscribeNameRequest& request);

                /**
                 *This API is used to modify the data subscription object and Kafka partition rule. For MongoDB subscription, you can also modify the output aggregation rule.
                 * @param req ModifySubscribeObjectsRequest
                 * @return ModifySubscribeObjectsOutcome
                 */
                ModifySubscribeObjectsOutcome ModifySubscribeObjects(const Model::ModifySubscribeObjectsRequest &request);
                void ModifySubscribeObjectsAsync(const Model::ModifySubscribeObjectsRequest& request, const ModifySubscribeObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubscribeObjectsOutcomeCallable ModifySubscribeObjectsCallable(const Model::ModifySubscribeObjectsRequest& request);

                /**
                 *This API is used to modify the configuration of a data sync task after the task is started.\n Configuration modification steps:  Modify sync task configuration -> Create a modification check task -> Query the check task result -> Start the configuration modification check task
                 * @param req ModifySyncJobConfigRequest
                 * @return ModifySyncJobConfigOutcome
                 */
                ModifySyncJobConfigOutcome ModifySyncJobConfig(const Model::ModifySyncJobConfigRequest &request);
                void ModifySyncJobConfigAsync(const Model::ModifySyncJobConfigRequest& request, const ModifySyncJobConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySyncJobConfigOutcomeCallable ModifySyncJobConfigCallable(const Model::ModifySyncJobConfigRequest& request);

                /**
                 *This API is used to restrict the rate limit of the task, when a user finds that the sync task has a large impact on the load of user's database.
                 * @param req ModifySyncRateLimitRequest
                 * @return ModifySyncRateLimitOutcome
                 */
                ModifySyncRateLimitOutcome ModifySyncRateLimit(const Model::ModifySyncRateLimitRequest &request);
                void ModifySyncRateLimitAsync(const Model::ModifySyncRateLimitRequest& request, const ModifySyncRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySyncRateLimitOutcomeCallable ModifySyncRateLimitCallable(const Model::ModifySyncRateLimitRequest& request);

                /**
                 *This API is used to pause a migration task.
                 * @param req PauseMigrateJobRequest
                 * @return PauseMigrateJobOutcome
                 */
                PauseMigrateJobOutcome PauseMigrateJob(const Model::PauseMigrateJobRequest &request);
                void PauseMigrateJobAsync(const Model::PauseMigrateJobRequest& request, const PauseMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PauseMigrateJobOutcomeCallable PauseMigrateJobCallable(const Model::PauseMigrateJobRequest& request);

                /**
                 *This API is used to pause a data sync task.
                 * @param req PauseSyncJobRequest
                 * @return PauseSyncJobOutcome
                 */
                PauseSyncJobOutcome PauseSyncJob(const Model::PauseSyncJobRequest &request);
                void PauseSyncJobAsync(const Model::PauseSyncJobRequest& request, const PauseSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PauseSyncJobOutcomeCallable PauseSyncJobCallable(const Model::PauseSyncJobRequest& request);

                /**
                 *This API is used to recover a data migration task in **Isolated** status. After calling this API, you can call the `DescribeMigrationJobs` API to query the latest task status.
                 * @param req RecoverMigrateJobRequest
                 * @return RecoverMigrateJobOutcome
                 */
                RecoverMigrateJobOutcome RecoverMigrateJob(const Model::RecoverMigrateJobRequest &request);
                void RecoverMigrateJobAsync(const Model::RecoverMigrateJobRequest& request, const RecoverMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverMigrateJobOutcomeCallable RecoverMigrateJobCallable(const Model::RecoverMigrateJobRequest& request);

                /**
                 *This API is used to recover a sync task in **Isolated** status. After calling this API, you can call the `DescribeSyncJobs` API to query the latest task status.
                 * @param req RecoverSyncJobRequest
                 * @return RecoverSyncJobOutcome
                 */
                RecoverSyncJobOutcome RecoverSyncJob(const Model::RecoverSyncJobRequest &request);
                void RecoverSyncJobAsync(const Model::RecoverSyncJobRequest& request, const RecoverSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverSyncJobOutcomeCallable RecoverSyncJobCallable(const Model::RecoverSyncJobRequest& request);

                /**
                 *This API is used to reset the offset of the subscription consumer group. Call the DescribeConsumerGroups API to query the status of the consumer group, only when the status is Dead or Empty can this operation be executed. Otherwise, the reset will not be effective and the API will not return any error.
                 * @param req ResetConsumerGroupOffsetRequest
                 * @return ResetConsumerGroupOffsetOutcome
                 */
                ResetConsumerGroupOffsetOutcome ResetConsumerGroupOffset(const Model::ResetConsumerGroupOffsetRequest &request);
                void ResetConsumerGroupOffsetAsync(const Model::ResetConsumerGroupOffsetRequest& request, const ResetConsumerGroupOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetConsumerGroupOffsetOutcomeCallable ResetConsumerGroupOffsetCallable(const Model::ResetConsumerGroupOffsetRequest& request);

                /**
                 *This API is used to reset the subscription instance. After resetting, the subscription task can be reconfigured.You can call DescribeSubscribeDetail to query the subscription information to determine whether the subscription is successful. When SubsStatus changes to notStarted, it means the reset is successful.
                 * @param req ResetSubscribeRequest
                 * @return ResetSubscribeOutcome
                 */
                ResetSubscribeOutcome ResetSubscribe(const Model::ResetSubscribeRequest &request);
                void ResetSubscribeAsync(const Model::ResetSubscribeRequest& request, const ResetSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetSubscribeOutcomeCallable ResetSubscribeCallable(const Model::ResetSubscribeRequest& request);

                /**
                 *This API is used to adjust the specification of a pay-as-you-go sync task. After this API is called, the backend needs to take about 3-5 minutes to implement the adjustment. You can call the `DescribeSyncJobs` API to query the latest task status.
                 * @param req ResizeSyncJobRequest
                 * @return ResizeSyncJobOutcome
                 */
                ResizeSyncJobOutcome ResizeSyncJob(const Model::ResizeSyncJobRequest &request);
                void ResizeSyncJobAsync(const Model::ResizeSyncJobRequest& request, const ResizeSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResizeSyncJobOutcomeCallable ResizeSyncJobCallable(const Model::ResizeSyncJobRequest& request);

                /**
                 *This API is used to retry an abnormal or failed Redis data migration task. Note that this operation will skip the check stage and directly start the task, just like by calling `StartMigrationJob`. After calling this API, you can call the `DescribeMigrationJobs` API to query the latest task status.
                 * @param req ResumeMigrateJobRequest
                 * @return ResumeMigrateJobOutcome
                 */
                ResumeMigrateJobOutcome ResumeMigrateJob(const Model::ResumeMigrateJobRequest &request);
                void ResumeMigrateJobAsync(const Model::ResumeMigrateJobRequest& request, const ResumeMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeMigrateJobOutcomeCallable ResumeMigrateJobCallable(const Model::ResumeMigrateJobRequest& request);

                /**
                 *This API is used to resume faulty subscription tasks. When the status of the subscription task is set to error, you can resume task via this API.
                 * @param req ResumeSubscribeRequest
                 * @return ResumeSubscribeOutcome
                 */
                ResumeSubscribeOutcome ResumeSubscribe(const Model::ResumeSubscribeRequest &request);
                void ResumeSubscribeAsync(const Model::ResumeSubscribeRequest& request, const ResumeSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeSubscribeOutcomeCallable ResumeSubscribeCallable(const Model::ResumeSubscribeRequest& request);

                /**
                 *This API is used to retry a sync task after certain resolvable errors are reported. After calling this API, you can call the `DescribeSyncJobs` API to query the latest task status.
                 * @param req ResumeSyncJobRequest
                 * @return ResumeSyncJobOutcome
                 */
                ResumeSyncJobOutcome ResumeSyncJob(const Model::ResumeSyncJobRequest &request);
                void ResumeSyncJobAsync(const Model::ResumeSyncJobRequest& request, const ResumeSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeSyncJobOutcomeCallable ResumeSyncJobCallable(const Model::ResumeSyncJobRequest& request);

                /**
                 *This API is used for the backend to skip a failed check item. Theoretically, to execute a migration task normally, any check step cannot be skipped, and the check must be passed. For products or links that support check item skipping, see [Check Item Overview](https://www.tencentcloud.com/document/product/571/42551).
                 * @param req SkipCheckItemRequest
                 * @return SkipCheckItemOutcome
                 */
                SkipCheckItemOutcome SkipCheckItem(const Model::SkipCheckItemRequest &request);
                void SkipCheckItemAsync(const Model::SkipCheckItemRequest& request, const SkipCheckItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SkipCheckItemOutcomeCallable SkipCheckItemCallable(const Model::SkipCheckItemRequest& request);

                /**
                 *This API is used for the backend to skip a failed check item. Theoretically, to execute a sync task normally, any check step cannot be skipped, and the check must be passed. For products or links that support check item skipping, see [Check Item Overview](https://www.tencentcloud.com/document/product/571/42551).
                 * @param req SkipSyncCheckItemRequest
                 * @return SkipSyncCheckItemOutcome
                 */
                SkipSyncCheckItemOutcome SkipSyncCheckItem(const Model::SkipSyncCheckItemRequest &request);
                void SkipSyncCheckItemAsync(const Model::SkipSyncCheckItemRequest& request, const SkipSyncCheckItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SkipSyncCheckItemOutcomeCallable SkipSyncCheckItemCallable(const Model::SkipSyncCheckItemRequest& request);

                /**
                 *This API is used to start a data consistency check task after creating it by calling the `CreateCompareTask` API. After calling this API, you can call the `DescribeCompareTasks` API to query the latest task status.
                 * @param req StartCompareRequest
                 * @return StartCompareOutcome
                 */
                StartCompareOutcome StartCompare(const Model::StartCompareRequest &request);
                void StartCompareAsync(const Model::StartCompareRequest& request, const StartCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartCompareOutcomeCallable StartCompareCallable(const Model::StartCompareRequest& request);

                /**
                 *This API (`StartMigrationJob`) is used to start a migration task. After calling this API, you can call the `DescribeMigrationJobs` API to query the latest task status.
                 * @param req StartMigrateJobRequest
                 * @return StartMigrateJobOutcome
                 */
                StartMigrateJobOutcome StartMigrateJob(const Model::StartMigrateJobRequest &request);
                void StartMigrateJobAsync(const Model::StartMigrateJobRequest& request, const StartMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartMigrateJobOutcomeCallable StartMigrateJobCallable(const Model::StartMigrateJobRequest& request);

                /**
                 *This API is used to start the configuration modification process when the modification check task status becomes “success”.
                 * @param req StartModifySyncJobRequest
                 * @return StartModifySyncJobOutcome
                 */
                StartModifySyncJobOutcome StartModifySyncJob(const Model::StartModifySyncJobRequest &request);
                void StartModifySyncJobAsync(const Model::StartModifySyncJobRequest& request, const StartModifySyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartModifySyncJobOutcomeCallable StartModifySyncJobCallable(const Model::StartModifySyncJobRequest& request);

                /**
                 *This API is used to start a Kafka version of the data subscription instance. This interface can be called only when the status of the subscription task is checkPass.
                 * @param req StartSubscribeRequest
                 * @return StartSubscribeOutcome
                 */
                StartSubscribeOutcome StartSubscribe(const Model::StartSubscribeRequest &request);
                void StartSubscribeAsync(const Model::StartSubscribeRequest& request, const StartSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartSubscribeOutcomeCallable StartSubscribeCallable(const Model::StartSubscribeRequest& request);

                /**
                 *This API is used to start a sync task.
                 * @param req StartSyncJobRequest
                 * @return StartSyncJobOutcome
                 */
                StartSyncJobOutcome StartSyncJob(const Model::StartSyncJobRequest &request);
                void StartSyncJobAsync(const Model::StartSyncJobRequest& request, const StartSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartSyncJobOutcomeCallable StartSyncJobCallable(const Model::StartSyncJobRequest& request);

                /**
                 *This API is used to stop a data consistency check task.
                 * @param req StopCompareRequest
                 * @return StopCompareOutcome
                 */
                StopCompareOutcome StopCompare(const Model::StopCompareRequest &request);
                void StopCompareAsync(const Model::StopCompareRequest& request, const StopCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopCompareOutcomeCallable StopCompareCallable(const Model::StopCompareRequest& request);

                /**
                 *This API is used to stop a data migration task.
After calling this API, you can call the `DescribeMigrationJobs` API to query the latest task status.
                 * @param req StopMigrateJobRequest
                 * @return StopMigrateJobOutcome
                 */
                StopMigrateJobOutcome StopMigrateJob(const Model::StopMigrateJobRequest &request);
                void StopMigrateJobAsync(const Model::StopMigrateJobRequest& request, const StopMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopMigrateJobOutcomeCallable StopMigrateJobCallable(const Model::StopMigrateJobRequest& request);

                /**
                 *This API is used to stop a sync task. After calling this API, you can call the `DescribeSyncJobs` API to query the latest task status.
                 * @param req StopSyncJobRequest
                 * @return StopSyncJobOutcome
                 */
                StopSyncJobOutcome StopSyncJob(const Model::StopSyncJobRequest &request);
                void StopSyncJobAsync(const Model::StopSyncJobRequest& request, const StopSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopSyncJobOutcomeCallable StopSyncJobCallable(const Model::StopSyncJobRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_DTSCLIENT_H_
