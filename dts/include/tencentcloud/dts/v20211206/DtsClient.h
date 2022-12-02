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
#include <tencentcloud/dts/v20211206/model/ConfigureSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/ConfigureSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateCheckSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateCheckSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateCompareTaskRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateCompareTaskResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateMigrateCheckJobRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateMigrateCheckJobResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateMigrationServiceRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateMigrationServiceResponse.h>
#include <tencentcloud/dts/v20211206/model/CreateSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/CreateSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/DeleteCompareTaskRequest.h>
#include <tencentcloud/dts/v20211206/model/DeleteCompareTaskResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeCheckSyncJobResultRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeCheckSyncJobResultResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeCompareReportRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeCompareReportResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeCompareTasksRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeCompareTasksResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrateDBInstancesRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrateDBInstancesResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrationCheckJobRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrationCheckJobResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrationDetailRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrationDetailResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrationJobsRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeMigrationJobsResponse.h>
#include <tencentcloud/dts/v20211206/model/DescribeSyncJobsRequest.h>
#include <tencentcloud/dts/v20211206/model/DescribeSyncJobsResponse.h>
#include <tencentcloud/dts/v20211206/model/DestroyMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/DestroyMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/DestroySyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/DestroySyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/IsolateMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/IsolateMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/IsolateSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/IsolateSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyCompareTaskRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyCompareTaskResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyCompareTaskNameRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyCompareTaskNameResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrateJobSpecRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrateJobSpecResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrateNameRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrateNameResponse.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrationJobRequest.h>
#include <tencentcloud/dts/v20211206/model/ModifyMigrationJobResponse.h>
#include <tencentcloud/dts/v20211206/model/RecoverMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/RecoverMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/RecoverSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/RecoverSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/ResizeSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/ResizeSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/ResumeMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/ResumeMigrateJobResponse.h>
#include <tencentcloud/dts/v20211206/model/ResumeSyncJobRequest.h>
#include <tencentcloud/dts/v20211206/model/ResumeSyncJobResponse.h>
#include <tencentcloud/dts/v20211206/model/StartCompareRequest.h>
#include <tencentcloud/dts/v20211206/model/StartCompareResponse.h>
#include <tencentcloud/dts/v20211206/model/StartMigrateJobRequest.h>
#include <tencentcloud/dts/v20211206/model/StartMigrateJobResponse.h>
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
                typedef Outcome<Core::Error, Model::ConfigureSyncJobResponse> ConfigureSyncJobOutcome;
                typedef std::future<ConfigureSyncJobOutcome> ConfigureSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ConfigureSyncJobRequest&, ConfigureSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCheckSyncJobResponse> CreateCheckSyncJobOutcome;
                typedef std::future<CreateCheckSyncJobOutcome> CreateCheckSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateCheckSyncJobRequest&, CreateCheckSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCheckSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCompareTaskResponse> CreateCompareTaskOutcome;
                typedef std::future<CreateCompareTaskOutcome> CreateCompareTaskOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateCompareTaskRequest&, CreateCompareTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCompareTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMigrateCheckJobResponse> CreateMigrateCheckJobOutcome;
                typedef std::future<CreateMigrateCheckJobOutcome> CreateMigrateCheckJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateMigrateCheckJobRequest&, CreateMigrateCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrateCheckJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMigrationServiceResponse> CreateMigrationServiceOutcome;
                typedef std::future<CreateMigrationServiceOutcome> CreateMigrationServiceOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateMigrationServiceRequest&, CreateMigrationServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrationServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSyncJobResponse> CreateSyncJobOutcome;
                typedef std::future<CreateSyncJobOutcome> CreateSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateSyncJobRequest&, CreateSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCompareTaskResponse> DeleteCompareTaskOutcome;
                typedef std::future<DeleteCompareTaskOutcome> DeleteCompareTaskOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DeleteCompareTaskRequest&, DeleteCompareTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCompareTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCheckSyncJobResultResponse> DescribeCheckSyncJobResultOutcome;
                typedef std::future<DescribeCheckSyncJobResultOutcome> DescribeCheckSyncJobResultOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeCheckSyncJobResultRequest&, DescribeCheckSyncJobResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckSyncJobResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCompareReportResponse> DescribeCompareReportOutcome;
                typedef std::future<DescribeCompareReportOutcome> DescribeCompareReportOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeCompareReportRequest&, DescribeCompareReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCompareReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCompareTasksResponse> DescribeCompareTasksOutcome;
                typedef std::future<DescribeCompareTasksOutcome> DescribeCompareTasksOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeCompareTasksRequest&, DescribeCompareTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCompareTasksAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeSyncJobsResponse> DescribeSyncJobsOutcome;
                typedef std::future<DescribeSyncJobsOutcome> DescribeSyncJobsOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeSyncJobsRequest&, DescribeSyncJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSyncJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyMigrateJobResponse> DestroyMigrateJobOutcome;
                typedef std::future<DestroyMigrateJobOutcome> DestroyMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DestroyMigrateJobRequest&, DestroyMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroySyncJobResponse> DestroySyncJobOutcome;
                typedef std::future<DestroySyncJobOutcome> DestroySyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DestroySyncJobRequest&, DestroySyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroySyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateMigrateJobResponse> IsolateMigrateJobOutcome;
                typedef std::future<IsolateMigrateJobOutcome> IsolateMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::IsolateMigrateJobRequest&, IsolateMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateSyncJobResponse> IsolateSyncJobOutcome;
                typedef std::future<IsolateSyncJobOutcome> IsolateSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::IsolateSyncJobRequest&, IsolateSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCompareTaskResponse> ModifyCompareTaskOutcome;
                typedef std::future<ModifyCompareTaskOutcome> ModifyCompareTaskOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyCompareTaskRequest&, ModifyCompareTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCompareTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCompareTaskNameResponse> ModifyCompareTaskNameOutcome;
                typedef std::future<ModifyCompareTaskNameOutcome> ModifyCompareTaskNameOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyCompareTaskNameRequest&, ModifyCompareTaskNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCompareTaskNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMigrateJobSpecResponse> ModifyMigrateJobSpecOutcome;
                typedef std::future<ModifyMigrateJobSpecOutcome> ModifyMigrateJobSpecOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyMigrateJobSpecRequest&, ModifyMigrateJobSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrateJobSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMigrateNameResponse> ModifyMigrateNameOutcome;
                typedef std::future<ModifyMigrateNameOutcome> ModifyMigrateNameOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyMigrateNameRequest&, ModifyMigrateNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrateNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMigrationJobResponse> ModifyMigrationJobOutcome;
                typedef std::future<ModifyMigrationJobOutcome> ModifyMigrationJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyMigrationJobRequest&, ModifyMigrationJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrationJobAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverMigrateJobResponse> RecoverMigrateJobOutcome;
                typedef std::future<RecoverMigrateJobOutcome> RecoverMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::RecoverMigrateJobRequest&, RecoverMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverSyncJobResponse> RecoverSyncJobOutcome;
                typedef std::future<RecoverSyncJobOutcome> RecoverSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::RecoverSyncJobRequest&, RecoverSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ResizeSyncJobResponse> ResizeSyncJobOutcome;
                typedef std::future<ResizeSyncJobOutcome> ResizeSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ResizeSyncJobRequest&, ResizeSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResizeSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeMigrateJobResponse> ResumeMigrateJobOutcome;
                typedef std::future<ResumeMigrateJobOutcome> ResumeMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ResumeMigrateJobRequest&, ResumeMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeMigrateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeSyncJobResponse> ResumeSyncJobOutcome;
                typedef std::future<ResumeSyncJobOutcome> ResumeSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ResumeSyncJobRequest&, ResumeSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::StartCompareResponse> StartCompareOutcome;
                typedef std::future<StartCompareOutcome> StartCompareOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StartCompareRequest&, StartCompareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartCompareAsyncHandler;
                typedef Outcome<Core::Error, Model::StartMigrateJobResponse> StartMigrateJobOutcome;
                typedef std::future<StartMigrateJobOutcome> StartMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StartMigrateJobRequest&, StartMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMigrateJobAsyncHandler;
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
If the task status queried through the `DescribeMigrationJobs` API is ready (`Status` = `readyComplete), you can call this API to complete the migration task.

                 * @param req CompleteMigrateJobRequest
                 * @return CompleteMigrateJobOutcome
                 */
                CompleteMigrateJobOutcome CompleteMigrateJob(const Model::CompleteMigrateJobRequest &request);
                void CompleteMigrateJobAsync(const Model::CompleteMigrateJobRequest& request, const CompleteMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CompleteMigrateJobOutcomeCallable CompleteMigrateJobCallable(const Model::CompleteMigrateJobRequest& request);

                /**
                 *This API is used to configure a sync task.
                 * @param req ConfigureSyncJobRequest
                 * @return ConfigureSyncJobOutcome
                 */
                ConfigureSyncJobOutcome ConfigureSyncJob(const Model::ConfigureSyncJobRequest &request);
                void ConfigureSyncJobAsync(const Model::ConfigureSyncJobRequest& request, const ConfigureSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfigureSyncJobOutcomeCallable ConfigureSyncJobCallable(const Model::ConfigureSyncJobRequest& request);

                /**
                 *This API is used to verify a sync task by checking required parameters and peripheral information.
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
                 *This API is used to create a sync task.
                 * @param req CreateSyncJobRequest
                 * @return CreateSyncJobOutcome
                 */
                CreateSyncJobOutcome CreateSyncJob(const Model::CreateSyncJobRequest &request);
                void CreateSyncJobAsync(const Model::CreateSyncJobRequest& request, const CreateSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSyncJobOutcomeCallable CreateSyncJobCallable(const Model::CreateSyncJobRequest& request);

                /**
                 *This API is used to delete a data consistency check task.
                 * @param req DeleteCompareTaskRequest
                 * @return DeleteCompareTaskOutcome
                 */
                DeleteCompareTaskOutcome DeleteCompareTask(const Model::DeleteCompareTaskRequest &request);
                void DeleteCompareTaskAsync(const Model::DeleteCompareTaskRequest& request, const DeleteCompareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCompareTaskOutcomeCallable DeleteCompareTaskCallable(const Model::DeleteCompareTaskRequest& request);

                /**
                 *This API is used to query the result of a sync check task.
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
                 *This API is used to query the details of a data migration task.
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
                 *This API is used to query the information of a sync task.
                 * @param req DescribeSyncJobsRequest
                 * @return DescribeSyncJobsOutcome
                 */
                DescribeSyncJobsOutcome DescribeSyncJobs(const Model::DescribeSyncJobsRequest &request);
                void DescribeSyncJobsAsync(const Model::DescribeSyncJobsRequest& request, const DescribeSyncJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSyncJobsOutcomeCallable DescribeSyncJobsCallable(const Model::DescribeSyncJobsRequest& request);

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
                 *This API is used to configure a migration task. After it is configured successfully, you can call the `CreateMigrationCheckJob` API to create a check task, and only after it passes the check can it be started.
                 * @param req ModifyMigrationJobRequest
                 * @return ModifyMigrationJobOutcome
                 */
                ModifyMigrationJobOutcome ModifyMigrationJob(const Model::ModifyMigrationJobRequest &request);
                void ModifyMigrationJobAsync(const Model::ModifyMigrationJobRequest& request, const ModifyMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMigrationJobOutcomeCallable ModifyMigrationJobCallable(const Model::ModifyMigrationJobRequest& request);

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
                 *This API is used to adjust the specification of a pay-as-you-go sync task. After this API is called, the backend needs to take about 3-5 minutes to implement the adjustment. You can call the `DescribeSyncJobs` API to query the latest task status.
                 * @param req ResizeSyncJobRequest
                 * @return ResizeSyncJobOutcome
                 */
                ResizeSyncJobOutcome ResizeSyncJob(const Model::ResizeSyncJobRequest &request);
                void ResizeSyncJobAsync(const Model::ResizeSyncJobRequest& request, const ResizeSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResizeSyncJobOutcomeCallable ResizeSyncJobCallable(const Model::ResizeSyncJobRequest& request);

                /**
                 *This API is used to retry a failed Redis data migration task. Note that this operation will skip the check stage and directly start the task, just like by calling `StartMigrationJob`. After calling this API, you can call the `DescribeMigrationJobs` API to query the latest task status.
                 * @param req ResumeMigrateJobRequest
                 * @return ResumeMigrateJobOutcome
                 */
                ResumeMigrateJobOutcome ResumeMigrateJob(const Model::ResumeMigrateJobRequest &request);
                void ResumeMigrateJobAsync(const Model::ResumeMigrateJobRequest& request, const ResumeMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeMigrateJobOutcomeCallable ResumeMigrateJobCallable(const Model::ResumeMigrateJobRequest& request);

                /**
                 *This API is used to retry a sync task after certain resolvable errors are reported. After calling this API, you can call the `DescribeSyncJobs` API to query the latest task status.
                 * @param req ResumeSyncJobRequest
                 * @return ResumeSyncJobOutcome
                 */
                ResumeSyncJobOutcome ResumeSyncJob(const Model::ResumeSyncJobRequest &request);
                void ResumeSyncJobAsync(const Model::ResumeSyncJobRequest& request, const ResumeSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeSyncJobOutcomeCallable ResumeSyncJobCallable(const Model::ResumeSyncJobRequest& request);

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
                 *This API is used to stop a sync task.
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
