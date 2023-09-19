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

#ifndef TENCENTCLOUD_DLC_V20210125_DLCCLIENT_H_
#define TENCENTCLOUD_DLC_V20210125_DLCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dlc/v20210125/model/CancelSparkSessionBatchSQLRequest.h>
#include <tencentcloud/dlc/v20210125/model/CancelSparkSessionBatchSQLResponse.h>
#include <tencentcloud/dlc/v20210125/model/CancelTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CancelTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateInternalTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateInternalTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateResultDownloadRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateResultDownloadResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkAppRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkAppResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkAppTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkAppTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkSessionBatchSQLRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateSparkSessionBatchSQLResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateTasksRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateTasksResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteSparkAppRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteSparkAppResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeEngineUsageInfoRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeEngineUsageInfoResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeForbiddenTableProRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeForbiddenTableProResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeLakeFsDirSummaryRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeLakeFsDirSummaryResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeLakeFsInfoRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeLakeFsInfoResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeResultDownloadRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeResultDownloadResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppJobRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppJobResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppJobsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppJobsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppTasksRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppTasksResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkSessionBatchSqlLogRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeSparkSessionBatchSqlLogResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTaskResultRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTaskResultResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTasksRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTasksResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUserRolesRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeUserRolesResponse.h>
#include <tencentcloud/dlc/v20210125/model/GenerateCreateMangedTableSqlRequest.h>
#include <tencentcloud/dlc/v20210125/model/GenerateCreateMangedTableSqlResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifyGovernEventRuleRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifyGovernEventRuleResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifySparkAppRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifySparkAppResponse.h>
#include <tencentcloud/dlc/v20210125/model/ModifySparkAppBatchRequest.h>
#include <tencentcloud/dlc/v20210125/model/ModifySparkAppBatchResponse.h>
#include <tencentcloud/dlc/v20210125/model/SuspendResumeDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/SuspendResumeDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/SwitchDataEngineRequest.h>
#include <tencentcloud/dlc/v20210125/model/SwitchDataEngineResponse.h>
#include <tencentcloud/dlc/v20210125/model/UpdateRowFilterRequest.h>
#include <tencentcloud/dlc/v20210125/model/UpdateRowFilterResponse.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            class DlcClient : public AbstractClient
            {
            public:
                DlcClient(const Credential &credential, const std::string &region);
                DlcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CancelSparkSessionBatchSQLResponse> CancelSparkSessionBatchSQLOutcome;
                typedef std::future<CancelSparkSessionBatchSQLOutcome> CancelSparkSessionBatchSQLOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CancelSparkSessionBatchSQLRequest&, CancelSparkSessionBatchSQLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelSparkSessionBatchSQLAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelTaskResponse> CancelTaskOutcome;
                typedef std::future<CancelTaskOutcome> CancelTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CancelTaskRequest&, CancelTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDataEngineResponse> CreateDataEngineOutcome;
                typedef std::future<CreateDataEngineOutcome> CreateDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateDataEngineRequest&, CreateDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInternalTableResponse> CreateInternalTableOutcome;
                typedef std::future<CreateInternalTableOutcome> CreateInternalTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateInternalTableRequest&, CreateInternalTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInternalTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateResultDownloadResponse> CreateResultDownloadOutcome;
                typedef std::future<CreateResultDownloadOutcome> CreateResultDownloadOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateResultDownloadRequest&, CreateResultDownloadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateResultDownloadAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSparkAppResponse> CreateSparkAppOutcome;
                typedef std::future<CreateSparkAppOutcome> CreateSparkAppOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateSparkAppRequest&, CreateSparkAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSparkAppAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSparkAppTaskResponse> CreateSparkAppTaskOutcome;
                typedef std::future<CreateSparkAppTaskOutcome> CreateSparkAppTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateSparkAppTaskRequest&, CreateSparkAppTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSparkAppTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSparkSessionBatchSQLResponse> CreateSparkSessionBatchSQLOutcome;
                typedef std::future<CreateSparkSessionBatchSQLOutcome> CreateSparkSessionBatchSQLOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateSparkSessionBatchSQLRequest&, CreateSparkSessionBatchSQLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSparkSessionBatchSQLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskResponse> CreateTaskOutcome;
                typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateTaskRequest&, CreateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTasksResponse> CreateTasksOutcome;
                typedef std::future<CreateTasksOutcome> CreateTasksOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateTasksRequest&, CreateTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSparkAppResponse> DeleteSparkAppOutcome;
                typedef std::future<DeleteSparkAppOutcome> DeleteSparkAppOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteSparkAppRequest&, DeleteSparkAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSparkAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEngineUsageInfoResponse> DescribeEngineUsageInfoOutcome;
                typedef std::future<DescribeEngineUsageInfoOutcome> DescribeEngineUsageInfoOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeEngineUsageInfoRequest&, DescribeEngineUsageInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEngineUsageInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeForbiddenTableProResponse> DescribeForbiddenTableProOutcome;
                typedef std::future<DescribeForbiddenTableProOutcome> DescribeForbiddenTableProOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeForbiddenTableProRequest&, DescribeForbiddenTableProOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeForbiddenTableProAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLakeFsDirSummaryResponse> DescribeLakeFsDirSummaryOutcome;
                typedef std::future<DescribeLakeFsDirSummaryOutcome> DescribeLakeFsDirSummaryOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeLakeFsDirSummaryRequest&, DescribeLakeFsDirSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLakeFsDirSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLakeFsInfoResponse> DescribeLakeFsInfoOutcome;
                typedef std::future<DescribeLakeFsInfoOutcome> DescribeLakeFsInfoOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeLakeFsInfoRequest&, DescribeLakeFsInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLakeFsInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResultDownloadResponse> DescribeResultDownloadOutcome;
                typedef std::future<DescribeResultDownloadOutcome> DescribeResultDownloadOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeResultDownloadRequest&, DescribeResultDownloadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResultDownloadAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSparkAppJobResponse> DescribeSparkAppJobOutcome;
                typedef std::future<DescribeSparkAppJobOutcome> DescribeSparkAppJobOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSparkAppJobRequest&, DescribeSparkAppJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkAppJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSparkAppJobsResponse> DescribeSparkAppJobsOutcome;
                typedef std::future<DescribeSparkAppJobsOutcome> DescribeSparkAppJobsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSparkAppJobsRequest&, DescribeSparkAppJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkAppJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSparkAppTasksResponse> DescribeSparkAppTasksOutcome;
                typedef std::future<DescribeSparkAppTasksOutcome> DescribeSparkAppTasksOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSparkAppTasksRequest&, DescribeSparkAppTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkAppTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSparkSessionBatchSqlLogResponse> DescribeSparkSessionBatchSqlLogOutcome;
                typedef std::future<DescribeSparkSessionBatchSqlLogOutcome> DescribeSparkSessionBatchSqlLogOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeSparkSessionBatchSqlLogRequest&, DescribeSparkSessionBatchSqlLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSparkSessionBatchSqlLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskResultResponse> DescribeTaskResultOutcome;
                typedef std::future<DescribeTaskResultOutcome> DescribeTaskResultOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTaskResultRequest&, DescribeTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserRolesResponse> DescribeUserRolesOutcome;
                typedef std::future<DescribeUserRolesOutcome> DescribeUserRolesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeUserRolesRequest&, DescribeUserRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateCreateMangedTableSqlResponse> GenerateCreateMangedTableSqlOutcome;
                typedef std::future<GenerateCreateMangedTableSqlOutcome> GenerateCreateMangedTableSqlOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::GenerateCreateMangedTableSqlRequest&, GenerateCreateMangedTableSqlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateCreateMangedTableSqlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGovernEventRuleResponse> ModifyGovernEventRuleOutcome;
                typedef std::future<ModifyGovernEventRuleOutcome> ModifyGovernEventRuleOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifyGovernEventRuleRequest&, ModifyGovernEventRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGovernEventRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySparkAppResponse> ModifySparkAppOutcome;
                typedef std::future<ModifySparkAppOutcome> ModifySparkAppOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifySparkAppRequest&, ModifySparkAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySparkAppAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySparkAppBatchResponse> ModifySparkAppBatchOutcome;
                typedef std::future<ModifySparkAppBatchOutcome> ModifySparkAppBatchOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::ModifySparkAppBatchRequest&, ModifySparkAppBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySparkAppBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::SuspendResumeDataEngineResponse> SuspendResumeDataEngineOutcome;
                typedef std::future<SuspendResumeDataEngineOutcome> SuspendResumeDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::SuspendResumeDataEngineRequest&, SuspendResumeDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SuspendResumeDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchDataEngineResponse> SwitchDataEngineOutcome;
                typedef std::future<SwitchDataEngineOutcome> SwitchDataEngineOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::SwitchDataEngineRequest&, SwitchDataEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDataEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRowFilterResponse> UpdateRowFilterOutcome;
                typedef std::future<UpdateRowFilterOutcome> UpdateRowFilterOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::UpdateRowFilterRequest&, UpdateRowFilterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRowFilterAsyncHandler;



                /**
                 *This API is used to cancel a Spark SQL batch task.
                 * @param req CancelSparkSessionBatchSQLRequest
                 * @return CancelSparkSessionBatchSQLOutcome
                 */
                CancelSparkSessionBatchSQLOutcome CancelSparkSessionBatchSQL(const Model::CancelSparkSessionBatchSQLRequest &request);
                void CancelSparkSessionBatchSQLAsync(const Model::CancelSparkSessionBatchSQLRequest& request, const CancelSparkSessionBatchSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelSparkSessionBatchSQLOutcomeCallable CancelSparkSessionBatchSQLCallable(const Model::CancelSparkSessionBatchSQLRequest& request);

                /**
                 *This API is used to cancel a task.
                 * @param req CancelTaskRequest
                 * @return CancelTaskOutcome
                 */
                CancelTaskOutcome CancelTask(const Model::CancelTaskRequest &request);
                void CancelTaskAsync(const Model::CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelTaskOutcomeCallable CancelTaskCallable(const Model::CancelTaskRequest& request);

                /**
                 *This API is used to create a data engine.
                 * @param req CreateDataEngineRequest
                 * @return CreateDataEngineOutcome
                 */
                CreateDataEngineOutcome CreateDataEngine(const Model::CreateDataEngineRequest &request);
                void CreateDataEngineAsync(const Model::CreateDataEngineRequest& request, const CreateDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDataEngineOutcomeCallable CreateDataEngineCallable(const Model::CreateDataEngineRequest& request);

                /**
                 *This API is used to create a managed internal table. It has been disused.
                 * @param req CreateInternalTableRequest
                 * @return CreateInternalTableOutcome
                 */
                CreateInternalTableOutcome CreateInternalTable(const Model::CreateInternalTableRequest &request);
                void CreateInternalTableAsync(const Model::CreateInternalTableRequest& request, const CreateInternalTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInternalTableOutcomeCallable CreateInternalTableCallable(const Model::CreateInternalTableRequest& request);

                /**
                 *This API is used to create a query result download task.
                 * @param req CreateResultDownloadRequest
                 * @return CreateResultDownloadOutcome
                 */
                CreateResultDownloadOutcome CreateResultDownload(const Model::CreateResultDownloadRequest &request);
                void CreateResultDownloadAsync(const Model::CreateResultDownloadRequest& request, const CreateResultDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateResultDownloadOutcomeCallable CreateResultDownloadCallable(const Model::CreateResultDownloadRequest& request);

                /**
                 *This API is used to create a Spark job.
                 * @param req CreateSparkAppRequest
                 * @return CreateSparkAppOutcome
                 */
                CreateSparkAppOutcome CreateSparkApp(const Model::CreateSparkAppRequest &request);
                void CreateSparkAppAsync(const Model::CreateSparkAppRequest& request, const CreateSparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSparkAppOutcomeCallable CreateSparkAppCallable(const Model::CreateSparkAppRequest& request);

                /**
                 *This API is used to start a Spark job.
                 * @param req CreateSparkAppTaskRequest
                 * @return CreateSparkAppTaskOutcome
                 */
                CreateSparkAppTaskOutcome CreateSparkAppTask(const Model::CreateSparkAppTaskRequest &request);
                void CreateSparkAppTaskAsync(const Model::CreateSparkAppTaskRequest& request, const CreateSparkAppTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSparkAppTaskOutcomeCallable CreateSparkAppTaskCallable(const Model::CreateSparkAppTaskRequest& request);

                /**
                 *This API is used to submit a Spark SQL batch task to the job engine.
                 * @param req CreateSparkSessionBatchSQLRequest
                 * @return CreateSparkSessionBatchSQLOutcome
                 */
                CreateSparkSessionBatchSQLOutcome CreateSparkSessionBatchSQL(const Model::CreateSparkSessionBatchSQLRequest &request);
                void CreateSparkSessionBatchSQLAsync(const Model::CreateSparkSessionBatchSQLRequest& request, const CreateSparkSessionBatchSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSparkSessionBatchSQLOutcomeCallable CreateSparkSessionBatchSQLCallable(const Model::CreateSparkSessionBatchSQLRequest& request);

                /**
                 *This API is used to create and execute a SQL task. (`CreateTasks` is recommended.)
                 * @param req CreateTaskRequest
                 * @return CreateTaskOutcome
                 */
                CreateTaskOutcome CreateTask(const Model::CreateTaskRequest &request);
                void CreateTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskOutcomeCallable CreateTaskCallable(const Model::CreateTaskRequest& request);

                /**
                 *This API is used to create and execute SQL tasks in batches.
                 * @param req CreateTasksRequest
                 * @return CreateTasksOutcome
                 */
                CreateTasksOutcome CreateTasks(const Model::CreateTasksRequest &request);
                void CreateTasksAsync(const Model::CreateTasksRequest& request, const CreateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTasksOutcomeCallable CreateTasksCallable(const Model::CreateTasksRequest& request);

                /**
                 *This API is used to delete a Spark job.
                 * @param req DeleteSparkAppRequest
                 * @return DeleteSparkAppOutcome
                 */
                DeleteSparkAppOutcome DeleteSparkApp(const Model::DeleteSparkAppRequest &request);
                void DeleteSparkAppAsync(const Model::DeleteSparkAppRequest& request, const DeleteSparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSparkAppOutcomeCallable DeleteSparkAppCallable(const Model::DeleteSparkAppRequest& request);

                /**
                 *This API is used to query the resource usage of a data engine based on its ID.
                 * @param req DescribeEngineUsageInfoRequest
                 * @return DescribeEngineUsageInfoOutcome
                 */
                DescribeEngineUsageInfoOutcome DescribeEngineUsageInfo(const Model::DescribeEngineUsageInfoRequest &request);
                void DescribeEngineUsageInfoAsync(const Model::DescribeEngineUsageInfoRequest& request, const DescribeEngineUsageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEngineUsageInfoOutcomeCallable DescribeEngineUsageInfoCallable(const Model::DescribeEngineUsageInfoRequest& request);

                /**
                 *This API is used to get the list of disabled table attributes (new).
                 * @param req DescribeForbiddenTableProRequest
                 * @return DescribeForbiddenTableProOutcome
                 */
                DescribeForbiddenTableProOutcome DescribeForbiddenTablePro(const Model::DescribeForbiddenTableProRequest &request);
                void DescribeForbiddenTableProAsync(const Model::DescribeForbiddenTableProRequest& request, const DescribeForbiddenTableProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeForbiddenTableProOutcomeCallable DescribeForbiddenTableProCallable(const Model::DescribeForbiddenTableProRequest& request);

                /**
                 *This API is used to query the summary of a specified directory in a managed storage.
                 * @param req DescribeLakeFsDirSummaryRequest
                 * @return DescribeLakeFsDirSummaryOutcome
                 */
                DescribeLakeFsDirSummaryOutcome DescribeLakeFsDirSummary(const Model::DescribeLakeFsDirSummaryRequest &request);
                void DescribeLakeFsDirSummaryAsync(const Model::DescribeLakeFsDirSummaryRequest& request, const DescribeLakeFsDirSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLakeFsDirSummaryOutcomeCallable DescribeLakeFsDirSummaryCallable(const Model::DescribeLakeFsDirSummaryRequest& request);

                /**
                 *This API is used to query managed storage information.
                 * @param req DescribeLakeFsInfoRequest
                 * @return DescribeLakeFsInfoOutcome
                 */
                DescribeLakeFsInfoOutcome DescribeLakeFsInfo(const Model::DescribeLakeFsInfoRequest &request);
                void DescribeLakeFsInfoAsync(const Model::DescribeLakeFsInfoRequest& request, const DescribeLakeFsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLakeFsInfoOutcomeCallable DescribeLakeFsInfoCallable(const Model::DescribeLakeFsInfoRequest& request);

                /**
                 *This API is used to get a query result download task.
                 * @param req DescribeResultDownloadRequest
                 * @return DescribeResultDownloadOutcome
                 */
                DescribeResultDownloadOutcome DescribeResultDownload(const Model::DescribeResultDownloadRequest &request);
                void DescribeResultDownloadAsync(const Model::DescribeResultDownloadRequest& request, const DescribeResultDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResultDownloadOutcomeCallable DescribeResultDownloadCallable(const Model::DescribeResultDownloadRequest& request);

                /**
                 *u200cThis API is used to query the information of a Spark job.
                 * @param req DescribeSparkAppJobRequest
                 * @return DescribeSparkAppJobOutcome
                 */
                DescribeSparkAppJobOutcome DescribeSparkAppJob(const Model::DescribeSparkAppJobRequest &request);
                void DescribeSparkAppJobAsync(const Model::DescribeSparkAppJobRequest& request, const DescribeSparkAppJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSparkAppJobOutcomeCallable DescribeSparkAppJobCallable(const Model::DescribeSparkAppJobRequest& request);

                /**
                 *This API is used to query the list of Spark jobs.
                 * @param req DescribeSparkAppJobsRequest
                 * @return DescribeSparkAppJobsOutcome
                 */
                DescribeSparkAppJobsOutcome DescribeSparkAppJobs(const Model::DescribeSparkAppJobsRequest &request);
                void DescribeSparkAppJobsAsync(const Model::DescribeSparkAppJobsRequest& request, const DescribeSparkAppJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSparkAppJobsOutcomeCallable DescribeSparkAppJobsCallable(const Model::DescribeSparkAppJobsRequest& request);

                /**
                 *This API is used to query the list of running task instances of a Spark job.
                 * @param req DescribeSparkAppTasksRequest
                 * @return DescribeSparkAppTasksOutcome
                 */
                DescribeSparkAppTasksOutcome DescribeSparkAppTasks(const Model::DescribeSparkAppTasksRequest &request);
                void DescribeSparkAppTasksAsync(const Model::DescribeSparkAppTasksRequest& request, const DescribeSparkAppTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSparkAppTasksOutcomeCallable DescribeSparkAppTasksCallable(const Model::DescribeSparkAppTasksRequest& request);

                /**
                 *This API is used to obtain the logs of a Spark SQL batch task.
                 * @param req DescribeSparkSessionBatchSqlLogRequest
                 * @return DescribeSparkSessionBatchSqlLogOutcome
                 */
                DescribeSparkSessionBatchSqlLogOutcome DescribeSparkSessionBatchSqlLog(const Model::DescribeSparkSessionBatchSqlLogRequest &request);
                void DescribeSparkSessionBatchSqlLogAsync(const Model::DescribeSparkSessionBatchSqlLogRequest& request, const DescribeSparkSessionBatchSqlLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSparkSessionBatchSqlLogOutcomeCallable DescribeSparkSessionBatchSqlLogCallable(const Model::DescribeSparkSessionBatchSqlLogRequest& request);

                /**
                 *This API is used to query the result of a task.
                 * @param req DescribeTaskResultRequest
                 * @return DescribeTaskResultOutcome
                 */
                DescribeTaskResultOutcome DescribeTaskResult(const Model::DescribeTaskResultRequest &request);
                void DescribeTaskResultAsync(const Model::DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskResultOutcomeCallable DescribeTaskResultCallable(const Model::DescribeTaskResultRequest& request);

                /**
                 *This API is used to query the list of tasks.
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *This API is used to enumerate user roles.
                 * @param req DescribeUserRolesRequest
                 * @return DescribeUserRolesOutcome
                 */
                DescribeUserRolesOutcome DescribeUserRoles(const Model::DescribeUserRolesRequest &request);
                void DescribeUserRolesAsync(const Model::DescribeUserRolesRequest& request, const DescribeUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserRolesOutcomeCallable DescribeUserRolesCallable(const Model::DescribeUserRolesRequest& request);

                /**
                 *This API is used to generate SQL statements for creating a managed table.
                 * @param req GenerateCreateMangedTableSqlRequest
                 * @return GenerateCreateMangedTableSqlOutcome
                 */
                GenerateCreateMangedTableSqlOutcome GenerateCreateMangedTableSql(const Model::GenerateCreateMangedTableSqlRequest &request);
                void GenerateCreateMangedTableSqlAsync(const Model::GenerateCreateMangedTableSqlRequest& request, const GenerateCreateMangedTableSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateCreateMangedTableSqlOutcomeCallable GenerateCreateMangedTableSqlCallable(const Model::GenerateCreateMangedTableSqlRequest& request);

                /**
                 *This API is used to change data governance event thresholds.
                 * @param req ModifyGovernEventRuleRequest
                 * @return ModifyGovernEventRuleOutcome
                 */
                ModifyGovernEventRuleOutcome ModifyGovernEventRule(const Model::ModifyGovernEventRuleRequest &request);
                void ModifyGovernEventRuleAsync(const Model::ModifyGovernEventRuleRequest& request, const ModifyGovernEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGovernEventRuleOutcomeCallable ModifyGovernEventRuleCallable(const Model::ModifyGovernEventRuleRequest& request);

                /**
                 *This API is used to update a Spark job.
                 * @param req ModifySparkAppRequest
                 * @return ModifySparkAppOutcome
                 */
                ModifySparkAppOutcome ModifySparkApp(const Model::ModifySparkAppRequest &request);
                void ModifySparkAppAsync(const Model::ModifySparkAppRequest& request, const ModifySparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySparkAppOutcomeCallable ModifySparkAppCallable(const Model::ModifySparkAppRequest& request);

                /**
                 *This API is used to modify Spark job parameters in batches.
                 * @param req ModifySparkAppBatchRequest
                 * @return ModifySparkAppBatchOutcome
                 */
                ModifySparkAppBatchOutcome ModifySparkAppBatch(const Model::ModifySparkAppBatchRequest &request);
                void ModifySparkAppBatchAsync(const Model::ModifySparkAppBatchRequest& request, const ModifySparkAppBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySparkAppBatchOutcomeCallable ModifySparkAppBatchCallable(const Model::ModifySparkAppBatchRequest& request);

                /**
                 *This API is used to suspend or start a data engine.
                 * @param req SuspendResumeDataEngineRequest
                 * @return SuspendResumeDataEngineOutcome
                 */
                SuspendResumeDataEngineOutcome SuspendResumeDataEngine(const Model::SuspendResumeDataEngineRequest &request);
                void SuspendResumeDataEngineAsync(const Model::SuspendResumeDataEngineRequest& request, const SuspendResumeDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SuspendResumeDataEngineOutcomeCallable SuspendResumeDataEngineCallable(const Model::SuspendResumeDataEngineRequest& request);

                /**
                 *This API is used to switch between the primary and standby clusters.
                 * @param req SwitchDataEngineRequest
                 * @return SwitchDataEngineOutcome
                 */
                SwitchDataEngineOutcome SwitchDataEngine(const Model::SwitchDataEngineRequest &request);
                void SwitchDataEngineAsync(const Model::SwitchDataEngineRequest& request, const SwitchDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchDataEngineOutcomeCallable SwitchDataEngineCallable(const Model::SwitchDataEngineRequest& request);

                /**
                 *This API is used to update row filters. Please note that it updates filters only but not catalogs, databases, or tables.
                 * @param req UpdateRowFilterRequest
                 * @return UpdateRowFilterOutcome
                 */
                UpdateRowFilterOutcome UpdateRowFilter(const Model::UpdateRowFilterRequest &request);
                void UpdateRowFilterAsync(const Model::UpdateRowFilterRequest& request, const UpdateRowFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRowFilterOutcomeCallable UpdateRowFilterCallable(const Model::UpdateRowFilterRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_DLCCLIENT_H_
