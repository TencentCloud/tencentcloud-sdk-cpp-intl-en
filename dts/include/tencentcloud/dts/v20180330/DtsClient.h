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

#ifndef TENCENTCLOUD_DTS_V20180330_DTSCLIENT_H_
#define TENCENTCLOUD_DTS_V20180330_DTSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dts/v20180330/model/ActivateSubscribeRequest.h>
#include <tencentcloud/dts/v20180330/model/ActivateSubscribeResponse.h>
#include <tencentcloud/dts/v20180330/model/CompleteMigrateJobRequest.h>
#include <tencentcloud/dts/v20180330/model/CompleteMigrateJobResponse.h>
#include <tencentcloud/dts/v20180330/model/CreateMigrateCheckJobRequest.h>
#include <tencentcloud/dts/v20180330/model/CreateMigrateCheckJobResponse.h>
#include <tencentcloud/dts/v20180330/model/CreateMigrateJobRequest.h>
#include <tencentcloud/dts/v20180330/model/CreateMigrateJobResponse.h>
#include <tencentcloud/dts/v20180330/model/CreateSubscribeRequest.h>
#include <tencentcloud/dts/v20180330/model/CreateSubscribeResponse.h>
#include <tencentcloud/dts/v20180330/model/CreateSyncCheckJobRequest.h>
#include <tencentcloud/dts/v20180330/model/CreateSyncCheckJobResponse.h>
#include <tencentcloud/dts/v20180330/model/CreateSyncJobRequest.h>
#include <tencentcloud/dts/v20180330/model/CreateSyncJobResponse.h>
#include <tencentcloud/dts/v20180330/model/DeleteMigrateJobRequest.h>
#include <tencentcloud/dts/v20180330/model/DeleteMigrateJobResponse.h>
#include <tencentcloud/dts/v20180330/model/DeleteSyncJobRequest.h>
#include <tencentcloud/dts/v20180330/model/DeleteSyncJobResponse.h>
#include <tencentcloud/dts/v20180330/model/DescribeAsyncRequestInfoRequest.h>
#include <tencentcloud/dts/v20180330/model/DescribeAsyncRequestInfoResponse.h>
#include <tencentcloud/dts/v20180330/model/DescribeMigrateCheckJobRequest.h>
#include <tencentcloud/dts/v20180330/model/DescribeMigrateCheckJobResponse.h>
#include <tencentcloud/dts/v20180330/model/DescribeMigrateJobsRequest.h>
#include <tencentcloud/dts/v20180330/model/DescribeMigrateJobsResponse.h>
#include <tencentcloud/dts/v20180330/model/DescribeRegionConfRequest.h>
#include <tencentcloud/dts/v20180330/model/DescribeRegionConfResponse.h>
#include <tencentcloud/dts/v20180330/model/DescribeSubscribeConfRequest.h>
#include <tencentcloud/dts/v20180330/model/DescribeSubscribeConfResponse.h>
#include <tencentcloud/dts/v20180330/model/DescribeSubscribesRequest.h>
#include <tencentcloud/dts/v20180330/model/DescribeSubscribesResponse.h>
#include <tencentcloud/dts/v20180330/model/DescribeSyncCheckJobRequest.h>
#include <tencentcloud/dts/v20180330/model/DescribeSyncCheckJobResponse.h>
#include <tencentcloud/dts/v20180330/model/DescribeSyncJobsRequest.h>
#include <tencentcloud/dts/v20180330/model/DescribeSyncJobsResponse.h>
#include <tencentcloud/dts/v20180330/model/IsolateSubscribeRequest.h>
#include <tencentcloud/dts/v20180330/model/IsolateSubscribeResponse.h>
#include <tencentcloud/dts/v20180330/model/ModifyMigrateJobRequest.h>
#include <tencentcloud/dts/v20180330/model/ModifyMigrateJobResponse.h>
#include <tencentcloud/dts/v20180330/model/ModifySubscribeConsumeTimeRequest.h>
#include <tencentcloud/dts/v20180330/model/ModifySubscribeConsumeTimeResponse.h>
#include <tencentcloud/dts/v20180330/model/ModifySubscribeNameRequest.h>
#include <tencentcloud/dts/v20180330/model/ModifySubscribeNameResponse.h>
#include <tencentcloud/dts/v20180330/model/ModifySubscribeObjectsRequest.h>
#include <tencentcloud/dts/v20180330/model/ModifySubscribeObjectsResponse.h>
#include <tencentcloud/dts/v20180330/model/ModifySubscribeVipVportRequest.h>
#include <tencentcloud/dts/v20180330/model/ModifySubscribeVipVportResponse.h>
#include <tencentcloud/dts/v20180330/model/ModifySyncJobRequest.h>
#include <tencentcloud/dts/v20180330/model/ModifySyncJobResponse.h>
#include <tencentcloud/dts/v20180330/model/OfflineIsolatedSubscribeRequest.h>
#include <tencentcloud/dts/v20180330/model/OfflineIsolatedSubscribeResponse.h>
#include <tencentcloud/dts/v20180330/model/ResetSubscribeRequest.h>
#include <tencentcloud/dts/v20180330/model/ResetSubscribeResponse.h>
#include <tencentcloud/dts/v20180330/model/StartMigrateJobRequest.h>
#include <tencentcloud/dts/v20180330/model/StartMigrateJobResponse.h>
#include <tencentcloud/dts/v20180330/model/StartSyncJobRequest.h>
#include <tencentcloud/dts/v20180330/model/StartSyncJobResponse.h>
#include <tencentcloud/dts/v20180330/model/StopMigrateJobRequest.h>
#include <tencentcloud/dts/v20180330/model/StopMigrateJobResponse.h>
#include <tencentcloud/dts/v20180330/model/SwitchDrToMasterRequest.h>
#include <tencentcloud/dts/v20180330/model/SwitchDrToMasterResponse.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            class DtsClient : public AbstractClient
            {
            public:
                DtsClient(const Credential &credential, const std::string &region);
                DtsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::ActivateSubscribeResponse> ActivateSubscribeOutcome;
                typedef std::future<ActivateSubscribeOutcome> ActivateSubscribeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ActivateSubscribeRequest&, ActivateSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ActivateSubscribeAsyncHandler;
                typedef Outcome<Error, Model::CompleteMigrateJobResponse> CompleteMigrateJobOutcome;
                typedef std::future<CompleteMigrateJobOutcome> CompleteMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CompleteMigrateJobRequest&, CompleteMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompleteMigrateJobAsyncHandler;
                typedef Outcome<Error, Model::CreateMigrateCheckJobResponse> CreateMigrateCheckJobOutcome;
                typedef std::future<CreateMigrateCheckJobOutcome> CreateMigrateCheckJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateMigrateCheckJobRequest&, CreateMigrateCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrateCheckJobAsyncHandler;
                typedef Outcome<Error, Model::CreateMigrateJobResponse> CreateMigrateJobOutcome;
                typedef std::future<CreateMigrateJobOutcome> CreateMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateMigrateJobRequest&, CreateMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrateJobAsyncHandler;
                typedef Outcome<Error, Model::CreateSubscribeResponse> CreateSubscribeOutcome;
                typedef std::future<CreateSubscribeOutcome> CreateSubscribeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateSubscribeRequest&, CreateSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubscribeAsyncHandler;
                typedef Outcome<Error, Model::CreateSyncCheckJobResponse> CreateSyncCheckJobOutcome;
                typedef std::future<CreateSyncCheckJobOutcome> CreateSyncCheckJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateSyncCheckJobRequest&, CreateSyncCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSyncCheckJobAsyncHandler;
                typedef Outcome<Error, Model::CreateSyncJobResponse> CreateSyncJobOutcome;
                typedef std::future<CreateSyncJobOutcome> CreateSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::CreateSyncJobRequest&, CreateSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSyncJobAsyncHandler;
                typedef Outcome<Error, Model::DeleteMigrateJobResponse> DeleteMigrateJobOutcome;
                typedef std::future<DeleteMigrateJobOutcome> DeleteMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DeleteMigrateJobRequest&, DeleteMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMigrateJobAsyncHandler;
                typedef Outcome<Error, Model::DeleteSyncJobResponse> DeleteSyncJobOutcome;
                typedef std::future<DeleteSyncJobOutcome> DeleteSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DeleteSyncJobRequest&, DeleteSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSyncJobAsyncHandler;
                typedef Outcome<Error, Model::DescribeAsyncRequestInfoResponse> DescribeAsyncRequestInfoOutcome;
                typedef std::future<DescribeAsyncRequestInfoOutcome> DescribeAsyncRequestInfoOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeAsyncRequestInfoRequest&, DescribeAsyncRequestInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAsyncRequestInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeMigrateCheckJobResponse> DescribeMigrateCheckJobOutcome;
                typedef std::future<DescribeMigrateCheckJobOutcome> DescribeMigrateCheckJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeMigrateCheckJobRequest&, DescribeMigrateCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrateCheckJobAsyncHandler;
                typedef Outcome<Error, Model::DescribeMigrateJobsResponse> DescribeMigrateJobsOutcome;
                typedef std::future<DescribeMigrateJobsOutcome> DescribeMigrateJobsOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeMigrateJobsRequest&, DescribeMigrateJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrateJobsAsyncHandler;
                typedef Outcome<Error, Model::DescribeRegionConfResponse> DescribeRegionConfOutcome;
                typedef std::future<DescribeRegionConfOutcome> DescribeRegionConfOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeRegionConfRequest&, DescribeRegionConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionConfAsyncHandler;
                typedef Outcome<Error, Model::DescribeSubscribeConfResponse> DescribeSubscribeConfOutcome;
                typedef std::future<DescribeSubscribeConfOutcome> DescribeSubscribeConfOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeSubscribeConfRequest&, DescribeSubscribeConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscribeConfAsyncHandler;
                typedef Outcome<Error, Model::DescribeSubscribesResponse> DescribeSubscribesOutcome;
                typedef std::future<DescribeSubscribesOutcome> DescribeSubscribesOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeSubscribesRequest&, DescribeSubscribesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscribesAsyncHandler;
                typedef Outcome<Error, Model::DescribeSyncCheckJobResponse> DescribeSyncCheckJobOutcome;
                typedef std::future<DescribeSyncCheckJobOutcome> DescribeSyncCheckJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeSyncCheckJobRequest&, DescribeSyncCheckJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSyncCheckJobAsyncHandler;
                typedef Outcome<Error, Model::DescribeSyncJobsResponse> DescribeSyncJobsOutcome;
                typedef std::future<DescribeSyncJobsOutcome> DescribeSyncJobsOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::DescribeSyncJobsRequest&, DescribeSyncJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSyncJobsAsyncHandler;
                typedef Outcome<Error, Model::IsolateSubscribeResponse> IsolateSubscribeOutcome;
                typedef std::future<IsolateSubscribeOutcome> IsolateSubscribeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::IsolateSubscribeRequest&, IsolateSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateSubscribeAsyncHandler;
                typedef Outcome<Error, Model::ModifyMigrateJobResponse> ModifyMigrateJobOutcome;
                typedef std::future<ModifyMigrateJobOutcome> ModifyMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifyMigrateJobRequest&, ModifyMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrateJobAsyncHandler;
                typedef Outcome<Error, Model::ModifySubscribeConsumeTimeResponse> ModifySubscribeConsumeTimeOutcome;
                typedef std::future<ModifySubscribeConsumeTimeOutcome> ModifySubscribeConsumeTimeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifySubscribeConsumeTimeRequest&, ModifySubscribeConsumeTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubscribeConsumeTimeAsyncHandler;
                typedef Outcome<Error, Model::ModifySubscribeNameResponse> ModifySubscribeNameOutcome;
                typedef std::future<ModifySubscribeNameOutcome> ModifySubscribeNameOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifySubscribeNameRequest&, ModifySubscribeNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubscribeNameAsyncHandler;
                typedef Outcome<Error, Model::ModifySubscribeObjectsResponse> ModifySubscribeObjectsOutcome;
                typedef std::future<ModifySubscribeObjectsOutcome> ModifySubscribeObjectsOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifySubscribeObjectsRequest&, ModifySubscribeObjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubscribeObjectsAsyncHandler;
                typedef Outcome<Error, Model::ModifySubscribeVipVportResponse> ModifySubscribeVipVportOutcome;
                typedef std::future<ModifySubscribeVipVportOutcome> ModifySubscribeVipVportOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifySubscribeVipVportRequest&, ModifySubscribeVipVportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubscribeVipVportAsyncHandler;
                typedef Outcome<Error, Model::ModifySyncJobResponse> ModifySyncJobOutcome;
                typedef std::future<ModifySyncJobOutcome> ModifySyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ModifySyncJobRequest&, ModifySyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySyncJobAsyncHandler;
                typedef Outcome<Error, Model::OfflineIsolatedSubscribeResponse> OfflineIsolatedSubscribeOutcome;
                typedef std::future<OfflineIsolatedSubscribeOutcome> OfflineIsolatedSubscribeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::OfflineIsolatedSubscribeRequest&, OfflineIsolatedSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OfflineIsolatedSubscribeAsyncHandler;
                typedef Outcome<Error, Model::ResetSubscribeResponse> ResetSubscribeOutcome;
                typedef std::future<ResetSubscribeOutcome> ResetSubscribeOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::ResetSubscribeRequest&, ResetSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetSubscribeAsyncHandler;
                typedef Outcome<Error, Model::StartMigrateJobResponse> StartMigrateJobOutcome;
                typedef std::future<StartMigrateJobOutcome> StartMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StartMigrateJobRequest&, StartMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMigrateJobAsyncHandler;
                typedef Outcome<Error, Model::StartSyncJobResponse> StartSyncJobOutcome;
                typedef std::future<StartSyncJobOutcome> StartSyncJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StartSyncJobRequest&, StartSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartSyncJobAsyncHandler;
                typedef Outcome<Error, Model::StopMigrateJobResponse> StopMigrateJobOutcome;
                typedef std::future<StopMigrateJobOutcome> StopMigrateJobOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::StopMigrateJobRequest&, StopMigrateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMigrateJobAsyncHandler;
                typedef Outcome<Error, Model::SwitchDrToMasterResponse> SwitchDrToMasterOutcome;
                typedef std::future<SwitchDrToMasterOutcome> SwitchDrToMasterOutcomeCallable;
                typedef std::function<void(const DtsClient*, const Model::SwitchDrToMasterRequest&, SwitchDrToMasterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDrToMasterAsyncHandler;



                /**
                 *This API is used to configure a data subscription, which can be called only for subscription instances in unconfigured status.
                 * @param req ActivateSubscribeRequest
                 * @return ActivateSubscribeOutcome
                 */
                ActivateSubscribeOutcome ActivateSubscribe(const Model::ActivateSubscribeRequest &request);
                void ActivateSubscribeAsync(const Model::ActivateSubscribeRequest& request, const ActivateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ActivateSubscribeOutcomeCallable ActivateSubscribeCallable(const Model::ActivateSubscribeRequest& request);

                /**
                 *This API (CompleteMigrateJob) is used to complete a data migration task.
For tasks in incremental migration mode, you need to call this API before migration gets ready, so as to stop migrating incremental data.
If the task status queried through the (DescribeMigrateJobs) API is ready (status=8), you can call this API to complete the migration task.

                 * @param req CompleteMigrateJobRequest
                 * @return CompleteMigrateJobOutcome
                 */
                CompleteMigrateJobOutcome CompleteMigrateJob(const Model::CompleteMigrateJobRequest &request);
                void CompleteMigrateJobAsync(const Model::CompleteMigrateJobRequest& request, const CompleteMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CompleteMigrateJobOutcomeCallable CompleteMigrateJobCallable(const Model::CompleteMigrateJobRequest& request);

                /**
                 *This API is used to create a migration check task.
Before migration, you should call this API to create a check. Migration will start only if the check succeeds. You can view the check result through the DescribeMigrateCheckJob API.
After successful check, if the migration task needs to be modified, a new check task should be created and migration will begin only after the new check succeeds.
                 * @param req CreateMigrateCheckJobRequest
                 * @return CreateMigrateCheckJobOutcome
                 */
                CreateMigrateCheckJobOutcome CreateMigrateCheckJob(const Model::CreateMigrateCheckJobRequest &request);
                void CreateMigrateCheckJobAsync(const Model::CreateMigrateCheckJobRequest& request, const CreateMigrateCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMigrateCheckJobOutcomeCallable CreateMigrateCheckJobCallable(const Model::CreateMigrateCheckJobRequest& request);

                /**
                 *This API (CreateMigrateJob) is used to create a data migration task.

For a finance zone linkage, please use the domain name dts.ap-shenzhen-fsi.tencentcloudapi.com.
                 * @param req CreateMigrateJobRequest
                 * @return CreateMigrateJobOutcome
                 */
                CreateMigrateJobOutcome CreateMigrateJob(const Model::CreateMigrateJobRequest &request);
                void CreateMigrateJobAsync(const Model::CreateMigrateJobRequest& request, const CreateMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMigrateJobOutcomeCallable CreateMigrateJobCallable(const Model::CreateMigrateJobRequest& request);

                /**
                 *This API is used to create a data subscription instance.
                 * @param req CreateSubscribeRequest
                 * @return CreateSubscribeOutcome
                 */
                CreateSubscribeOutcome CreateSubscribe(const Model::CreateSubscribeRequest &request);
                void CreateSubscribeAsync(const Model::CreateSubscribeRequest& request, const CreateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubscribeOutcomeCallable CreateSubscribeCallable(const Model::CreateSubscribeRequest& request);

                /**
                 *Before the StartSyncJob API is called to start disaster recovery sync, this API should be called first to create a check. Data sync can start only if the check succeeds. You can view the check result through the DescribeSyncCheckJob API.
Sync can begin only if the check succeeds.
                 * @param req CreateSyncCheckJobRequest
                 * @return CreateSyncCheckJobOutcome
                 */
                CreateSyncCheckJobOutcome CreateSyncCheckJob(const Model::CreateSyncCheckJobRequest &request);
                void CreateSyncCheckJobAsync(const Model::CreateSyncCheckJobRequest& request, const CreateSyncCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSyncCheckJobOutcomeCallable CreateSyncCheckJobCallable(const Model::CreateSyncCheckJobRequest& request);

                /**
                 *This API (CreateSyncJob) is used to create a disaster recovery sync task.
After successful creation, check can be initiated through the CreateSyncCheckJob API. The sync task can be started through the StartSyncJob API only if the check succeeds.
                 * @param req CreateSyncJobRequest
                 * @return CreateSyncJobOutcome
                 */
                CreateSyncJobOutcome CreateSyncJob(const Model::CreateSyncJobRequest &request);
                void CreateSyncJobAsync(const Model::CreateSyncJobRequest& request, const CreateSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSyncJobOutcomeCallable CreateSyncJobCallable(const Model::CreateSyncJobRequest& request);

                /**
                 *This API (DeleteMigrationJob) is used to delete a data migration task. If the task status queried through the DescribeMigrateJobs API is checking (status=3), running (status=7), ready (status=8), canceling (status=11), or completing (status=12), the task cannot be deleted.
                 * @param req DeleteMigrateJobRequest
                 * @return DeleteMigrateJobOutcome
                 */
                DeleteMigrateJobOutcome DeleteMigrateJob(const Model::DeleteMigrateJobRequest &request);
                void DeleteMigrateJobAsync(const Model::DeleteMigrateJobRequest& request, const DeleteMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMigrateJobOutcomeCallable DeleteMigrateJobCallable(const Model::DeleteMigrateJobRequest& request);

                /**
                 *This API is used to delete a disaster recovery sync task. Sync tasks that are running cannot be deleted.
                 * @param req DeleteSyncJobRequest
                 * @return DeleteSyncJobOutcome
                 */
                DeleteSyncJobOutcome DeleteSyncJob(const Model::DeleteSyncJobRequest &request);
                void DeleteSyncJobAsync(const Model::DeleteSyncJobRequest& request, const DeleteSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSyncJobOutcomeCallable DeleteSyncJobCallable(const Model::DeleteSyncJobRequest& request);

                /**
                 *This API is used to query the execution result of a task.
                 * @param req DescribeAsyncRequestInfoRequest
                 * @return DescribeAsyncRequestInfoOutcome
                 */
                DescribeAsyncRequestInfoOutcome DescribeAsyncRequestInfo(const Model::DescribeAsyncRequestInfoRequest &request);
                void DescribeAsyncRequestInfoAsync(const Model::DescribeAsyncRequestInfoRequest& request, const DescribeAsyncRequestInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAsyncRequestInfoOutcomeCallable DescribeAsyncRequestInfoCallable(const Model::DescribeAsyncRequestInfoRequest& request);

                /**
                 *This API is used to get the check result and query check status and progress after a check is created. 
If the check succeeds, you can call the StartMigrateJob API to start migration.
If the check fails, the reason can be queried. Please modify the migration configuration or adjust relevant parameters of the source/target instances through the ModifyMigrateJob API based on the error message.
                 * @param req DescribeMigrateCheckJobRequest
                 * @return DescribeMigrateCheckJobOutcome
                 */
                DescribeMigrateCheckJobOutcome DescribeMigrateCheckJob(const Model::DescribeMigrateCheckJobRequest &request);
                void DescribeMigrateCheckJobAsync(const Model::DescribeMigrateCheckJobRequest& request, const DescribeMigrateCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrateCheckJobOutcomeCallable DescribeMigrateCheckJobCallable(const Model::DescribeMigrateCheckJobRequest& request);

                /**
                 *This API is used to query data migration tasks.
For a finance zone linkage, please use the domain name https://dts.ap-shenzhen-fsi.tencentcloudapi.com.
                 * @param req DescribeMigrateJobsRequest
                 * @return DescribeMigrateJobsOutcome
                 */
                DescribeMigrateJobsOutcome DescribeMigrateJobs(const Model::DescribeMigrateJobsRequest &request);
                void DescribeMigrateJobsAsync(const Model::DescribeMigrateJobsRequest& request, const DescribeMigrateJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrateJobsOutcomeCallable DescribeMigrateJobsCallable(const Model::DescribeMigrateJobsRequest& request);

                /**
                 *This API is used to query the purchasable subscription instance regions.
                 * @param req DescribeRegionConfRequest
                 * @return DescribeRegionConfOutcome
                 */
                DescribeRegionConfOutcome DescribeRegionConf(const Model::DescribeRegionConfRequest &request);
                void DescribeRegionConfAsync(const Model::DescribeRegionConfRequest& request, const DescribeRegionConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionConfOutcomeCallable DescribeRegionConfCallable(const Model::DescribeRegionConfRequest& request);

                /**
                 *This API is used to query the subscription instance configuration.
                 * @param req DescribeSubscribeConfRequest
                 * @return DescribeSubscribeConfOutcome
                 */
                DescribeSubscribeConfOutcome DescribeSubscribeConf(const Model::DescribeSubscribeConfRequest &request);
                void DescribeSubscribeConfAsync(const Model::DescribeSubscribeConfRequest& request, const DescribeSubscribeConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubscribeConfOutcomeCallable DescribeSubscribeConfCallable(const Model::DescribeSubscribeConfRequest& request);

                /**
                 *This API is used to get the information list of data subscription instances. Pagination is enabled by default with 20 results returned each time.
                 * @param req DescribeSubscribesRequest
                 * @return DescribeSubscribesOutcome
                 */
                DescribeSubscribesOutcome DescribeSubscribes(const Model::DescribeSubscribesRequest &request);
                void DescribeSubscribesAsync(const Model::DescribeSubscribesRequest& request, const DescribeSubscribesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubscribesOutcomeCallable DescribeSubscribesCallable(const Model::DescribeSubscribesRequest& request);

                /**
                 *This API is used to get the check result after a disaster recovery sync check task is created through the CreateSyncCheckJob API. Check status and progress can be queried.
If the check succeeds, you can call the StartSyncJob API to start the sync task.
If the check fails, the reason will be returned. You can modify the configuration through the ModifySyncJob API and initiate check again.
It takes about 30 seconds to complete the check task. If the returned status is not "finished", the check has not been completed, and this API needs to be polled.
If Status=finished and CheckFlag=1, the check succeeds.
If Status=finished and CheckFlag !=1, the check fails.
                 * @param req DescribeSyncCheckJobRequest
                 * @return DescribeSyncCheckJobOutcome
                 */
                DescribeSyncCheckJobOutcome DescribeSyncCheckJob(const Model::DescribeSyncCheckJobRequest &request);
                void DescribeSyncCheckJobAsync(const Model::DescribeSyncCheckJobRequest& request, const DescribeSyncCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSyncCheckJobOutcomeCallable DescribeSyncCheckJobCallable(const Model::DescribeSyncCheckJobRequest& request);

                /**
                 *This API is used to query disaster recovery sync tasks initiated on the DTS platform.
                 * @param req DescribeSyncJobsRequest
                 * @return DescribeSyncJobsOutcome
                 */
                DescribeSyncJobsOutcome DescribeSyncJobs(const Model::DescribeSyncJobsRequest &request);
                void DescribeSyncJobsAsync(const Model::DescribeSyncJobsRequest& request, const DescribeSyncJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSyncJobsOutcomeCallable DescribeSyncJobsCallable(const Model::DescribeSyncJobsRequest& request);

                /**
                 *This API is used to isolate an hourly billed subscription instance. After this API is called, the instance will become unavailable and billing will stop for it.
                 * @param req IsolateSubscribeRequest
                 * @return IsolateSubscribeOutcome
                 */
                IsolateSubscribeOutcome IsolateSubscribe(const Model::IsolateSubscribeRequest &request);
                void IsolateSubscribeAsync(const Model::IsolateSubscribeRequest& request, const IsolateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateSubscribeOutcomeCallable IsolateSubscribeCallable(const Model::IsolateSubscribeRequest& request);

                /**
                 *This API (ModifyMigrateJob) is used to modify a data migration task.
If the status of a migration task is creating (status=1), check succeeded (status=4), check failed (status=5), or migration failed (status=10), this API can be called to modify the task, but the type of the source and target instances and the region of the target instance cannot be modified.

For a finance zone linkage, please use the domain name dts.ap-shenzhen-fsi.tencentcloudapi.com.
                 * @param req ModifyMigrateJobRequest
                 * @return ModifyMigrateJobOutcome
                 */
                ModifyMigrateJobOutcome ModifyMigrateJob(const Model::ModifyMigrateJobRequest &request);
                void ModifyMigrateJobAsync(const Model::ModifyMigrateJobRequest& request, const ModifyMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMigrateJobOutcomeCallable ModifyMigrateJobCallable(const Model::ModifyMigrateJobRequest& request);

                /**
                 *This API is used to modify the consumption time point of a data subscription channel.
                 * @param req ModifySubscribeConsumeTimeRequest
                 * @return ModifySubscribeConsumeTimeOutcome
                 */
                ModifySubscribeConsumeTimeOutcome ModifySubscribeConsumeTime(const Model::ModifySubscribeConsumeTimeRequest &request);
                void ModifySubscribeConsumeTimeAsync(const Model::ModifySubscribeConsumeTimeRequest& request, const ModifySubscribeConsumeTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubscribeConsumeTimeOutcomeCallable ModifySubscribeConsumeTimeCallable(const Model::ModifySubscribeConsumeTimeRequest& request);

                /**
                 *This API is used to rename a data subscription instance.
                 * @param req ModifySubscribeNameRequest
                 * @return ModifySubscribeNameOutcome
                 */
                ModifySubscribeNameOutcome ModifySubscribeName(const Model::ModifySubscribeNameRequest &request);
                void ModifySubscribeNameAsync(const Model::ModifySubscribeNameRequest& request, const ModifySubscribeNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubscribeNameOutcomeCallable ModifySubscribeNameCallable(const Model::ModifySubscribeNameRequest& request);

                /**
                 *This API is used to modify the subscription rule of a data subscription channel.
                 * @param req ModifySubscribeObjectsRequest
                 * @return ModifySubscribeObjectsOutcome
                 */
                ModifySubscribeObjectsOutcome ModifySubscribeObjects(const Model::ModifySubscribeObjectsRequest &request);
                void ModifySubscribeObjectsAsync(const Model::ModifySubscribeObjectsRequest& request, const ModifySubscribeObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubscribeObjectsOutcomeCallable ModifySubscribeObjectsCallable(const Model::ModifySubscribeObjectsRequest& request);

                /**
                 *This API is used to modify the IP and port number of a data subscription instance.
                 * @param req ModifySubscribeVipVportRequest
                 * @return ModifySubscribeVipVportOutcome
                 */
                ModifySubscribeVipVportOutcome ModifySubscribeVipVport(const Model::ModifySubscribeVipVportRequest &request);
                void ModifySubscribeVipVportAsync(const Model::ModifySubscribeVipVportRequest& request, const ModifySubscribeVipVportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubscribeVipVportOutcomeCallable ModifySubscribeVipVportCallable(const Model::ModifySubscribeVipVportRequest& request);

                /**
                 *This API is used to modify a disaster recovery sync task. 
If the status of a sync task is creating, created, check succeeded, or check failed, this API can be called to modify the task. 
The information of the source and target instances cannot be modified, but the task name and the tables to be synced can.
                 * @param req ModifySyncJobRequest
                 * @return ModifySyncJobOutcome
                 */
                ModifySyncJobOutcome ModifySyncJob(const Model::ModifySyncJobRequest &request);
                void ModifySyncJobAsync(const Model::ModifySyncJobRequest& request, const ModifySyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySyncJobOutcomeCallable ModifySyncJobCallable(const Model::ModifySyncJobRequest& request);

                /**
                 *This API is used to deactivate an isolated data subscription instance.
                 * @param req OfflineIsolatedSubscribeRequest
                 * @return OfflineIsolatedSubscribeOutcome
                 */
                OfflineIsolatedSubscribeOutcome OfflineIsolatedSubscribe(const Model::OfflineIsolatedSubscribeRequest &request);
                void OfflineIsolatedSubscribeAsync(const Model::OfflineIsolatedSubscribeRequest& request, const OfflineIsolatedSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OfflineIsolatedSubscribeOutcomeCallable OfflineIsolatedSubscribeCallable(const Model::OfflineIsolatedSubscribeRequest& request);

                /**
                 *This API is used to reset a data subscription instance. Once reset, an activated instance can be bound to other database instances through the `ActivateSubscribe` API.
                 * @param req ResetSubscribeRequest
                 * @return ResetSubscribeOutcome
                 */
                ResetSubscribeOutcome ResetSubscribe(const Model::ResetSubscribeRequest &request);
                void ResetSubscribeAsync(const Model::ResetSubscribeRequest& request, const ResetSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetSubscribeOutcomeCallable ResetSubscribeCallable(const Model::ResetSubscribeRequest& request);

                /**
                 *This API (StartMigrationJob) is used to start a migration task. After the API is called, non-scheduled migration tasks will start the migration immediately, while scheduled tasks will start the countdown.
Before calling this API, be sure to use the CreateMigrateCheckJob API to check the data migration task, which can be started only if its status queried through the DescribeMigrateJobs API is check succeeded (status=4).
                 * @param req StartMigrateJobRequest
                 * @return StartMigrateJobOutcome
                 */
                StartMigrateJobOutcome StartMigrateJob(const Model::StartMigrateJobRequest &request);
                void StartMigrateJobAsync(const Model::StartMigrateJobRequest& request, const StartMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartMigrateJobOutcomeCallable StartMigrateJobCallable(const Model::StartMigrateJobRequest& request);

                /**
                 *This API is used to start a disaster recovery sync task after it is successfully checked through the CreateSyncCheckJob and DescribeSyncCheckJob APIs.
                 * @param req StartSyncJobRequest
                 * @return StartSyncJobOutcome
                 */
                StartSyncJobOutcome StartSyncJob(const Model::StartSyncJobRequest &request);
                void StartSyncJobAsync(const Model::StartSyncJobRequest& request, const StartSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartSyncJobOutcomeCallable StartSyncJobCallable(const Model::StartSyncJobRequest& request);

                /**
                 *This API (StopMigrateJob) is used to cancel a data migration task.
During migration, this API can be used to cancel migration if the task status queried through the DescribeMigrateJobs API is running (status=7) or ready (status=8), and the migration task will fail.
                 * @param req StopMigrateJobRequest
                 * @return StopMigrateJobOutcome
                 */
                StopMigrateJobOutcome StopMigrateJob(const Model::StopMigrateJobRequest &request);
                void StopMigrateJobAsync(const Model::StopMigrateJobRequest& request, const StopMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopMigrateJobOutcomeCallable StopMigrateJobCallable(const Model::StopMigrateJobRequest& request);

                /**
                 *This API is used to promote a disaster recovery instance to a master instance, which will stop sync from the original master instance and end the master/slave relationship.
                 * @param req SwitchDrToMasterRequest
                 * @return SwitchDrToMasterOutcome
                 */
                SwitchDrToMasterOutcome SwitchDrToMaster(const Model::SwitchDrToMasterRequest &request);
                void SwitchDrToMasterAsync(const Model::SwitchDrToMasterRequest& request, const SwitchDrToMasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchDrToMasterOutcomeCallable SwitchDrToMasterCallable(const Model::SwitchDrToMasterRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_DTSCLIENT_H_
