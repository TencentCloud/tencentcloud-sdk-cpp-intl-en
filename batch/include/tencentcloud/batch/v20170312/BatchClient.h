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

#ifndef TENCENTCLOUD_BATCH_V20170312_BATCHCLIENT_H_
#define TENCENTCLOUD_BATCH_V20170312_BATCHCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/batch/v20170312/model/AttachInstancesRequest.h>
#include <tencentcloud/batch/v20170312/model/AttachInstancesResponse.h>
#include <tencentcloud/batch/v20170312/model/CreateComputeEnvRequest.h>
#include <tencentcloud/batch/v20170312/model/CreateComputeEnvResponse.h>
#include <tencentcloud/batch/v20170312/model/CreateTaskTemplateRequest.h>
#include <tencentcloud/batch/v20170312/model/CreateTaskTemplateResponse.h>
#include <tencentcloud/batch/v20170312/model/DeleteComputeEnvRequest.h>
#include <tencentcloud/batch/v20170312/model/DeleteComputeEnvResponse.h>
#include <tencentcloud/batch/v20170312/model/DeleteJobRequest.h>
#include <tencentcloud/batch/v20170312/model/DeleteJobResponse.h>
#include <tencentcloud/batch/v20170312/model/DeleteTaskTemplatesRequest.h>
#include <tencentcloud/batch/v20170312/model/DeleteTaskTemplatesResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeAvailableCvmInstanceTypesRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeAvailableCvmInstanceTypesResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvActivitiesRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvActivitiesResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvCreateInfoRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvCreateInfoResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvCreateInfosRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvCreateInfosResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvsRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvsResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeCvmZoneInstanceConfigInfosRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeCvmZoneInstanceConfigInfosResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeInstanceCategoriesRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeInstanceCategoriesResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeJobRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeJobResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeJobSubmitInfoRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeJobSubmitInfoResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeJobsRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeJobsResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeTaskRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeTaskResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeTaskLogsRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeTaskLogsResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeTaskTemplatesRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeTaskTemplatesResponse.h>
#include <tencentcloud/batch/v20170312/model/DetachInstancesRequest.h>
#include <tencentcloud/batch/v20170312/model/DetachInstancesResponse.h>
#include <tencentcloud/batch/v20170312/model/ModifyComputeEnvRequest.h>
#include <tencentcloud/batch/v20170312/model/ModifyComputeEnvResponse.h>
#include <tencentcloud/batch/v20170312/model/ModifyTaskTemplateRequest.h>
#include <tencentcloud/batch/v20170312/model/ModifyTaskTemplateResponse.h>
#include <tencentcloud/batch/v20170312/model/RetryJobsRequest.h>
#include <tencentcloud/batch/v20170312/model/RetryJobsResponse.h>
#include <tencentcloud/batch/v20170312/model/TerminateComputeNodeRequest.h>
#include <tencentcloud/batch/v20170312/model/TerminateComputeNodeResponse.h>
#include <tencentcloud/batch/v20170312/model/TerminateComputeNodesRequest.h>
#include <tencentcloud/batch/v20170312/model/TerminateComputeNodesResponse.h>
#include <tencentcloud/batch/v20170312/model/TerminateJobRequest.h>
#include <tencentcloud/batch/v20170312/model/TerminateJobResponse.h>
#include <tencentcloud/batch/v20170312/model/TerminateTaskInstanceRequest.h>
#include <tencentcloud/batch/v20170312/model/TerminateTaskInstanceResponse.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            class BatchClient : public AbstractClient
            {
            public:
                BatchClient(const Credential &credential, const std::string &region);
                BatchClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AttachInstancesResponse> AttachInstancesOutcome;
                typedef std::future<AttachInstancesOutcome> AttachInstancesOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::AttachInstancesRequest&, AttachInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateComputeEnvResponse> CreateComputeEnvOutcome;
                typedef std::future<CreateComputeEnvOutcome> CreateComputeEnvOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::CreateComputeEnvRequest&, CreateComputeEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateComputeEnvAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskTemplateResponse> CreateTaskTemplateOutcome;
                typedef std::future<CreateTaskTemplateOutcome> CreateTaskTemplateOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::CreateTaskTemplateRequest&, CreateTaskTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteComputeEnvResponse> DeleteComputeEnvOutcome;
                typedef std::future<DeleteComputeEnvOutcome> DeleteComputeEnvOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DeleteComputeEnvRequest&, DeleteComputeEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteComputeEnvAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteJobResponse> DeleteJobOutcome;
                typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DeleteJobRequest&, DeleteJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTaskTemplatesResponse> DeleteTaskTemplatesOutcome;
                typedef std::future<DeleteTaskTemplatesOutcome> DeleteTaskTemplatesOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DeleteTaskTemplatesRequest&, DeleteTaskTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAvailableCvmInstanceTypesResponse> DescribeAvailableCvmInstanceTypesOutcome;
                typedef std::future<DescribeAvailableCvmInstanceTypesOutcome> DescribeAvailableCvmInstanceTypesOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeAvailableCvmInstanceTypesRequest&, DescribeAvailableCvmInstanceTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableCvmInstanceTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComputeEnvResponse> DescribeComputeEnvOutcome;
                typedef std::future<DescribeComputeEnvOutcome> DescribeComputeEnvOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeComputeEnvRequest&, DescribeComputeEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComputeEnvAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComputeEnvActivitiesResponse> DescribeComputeEnvActivitiesOutcome;
                typedef std::future<DescribeComputeEnvActivitiesOutcome> DescribeComputeEnvActivitiesOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeComputeEnvActivitiesRequest&, DescribeComputeEnvActivitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComputeEnvActivitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComputeEnvCreateInfoResponse> DescribeComputeEnvCreateInfoOutcome;
                typedef std::future<DescribeComputeEnvCreateInfoOutcome> DescribeComputeEnvCreateInfoOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeComputeEnvCreateInfoRequest&, DescribeComputeEnvCreateInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComputeEnvCreateInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComputeEnvCreateInfosResponse> DescribeComputeEnvCreateInfosOutcome;
                typedef std::future<DescribeComputeEnvCreateInfosOutcome> DescribeComputeEnvCreateInfosOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeComputeEnvCreateInfosRequest&, DescribeComputeEnvCreateInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComputeEnvCreateInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComputeEnvsResponse> DescribeComputeEnvsOutcome;
                typedef std::future<DescribeComputeEnvsOutcome> DescribeComputeEnvsOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeComputeEnvsRequest&, DescribeComputeEnvsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComputeEnvsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCvmZoneInstanceConfigInfosResponse> DescribeCvmZoneInstanceConfigInfosOutcome;
                typedef std::future<DescribeCvmZoneInstanceConfigInfosOutcome> DescribeCvmZoneInstanceConfigInfosOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeCvmZoneInstanceConfigInfosRequest&, DescribeCvmZoneInstanceConfigInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCvmZoneInstanceConfigInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceCategoriesResponse> DescribeInstanceCategoriesOutcome;
                typedef std::future<DescribeInstanceCategoriesOutcome> DescribeInstanceCategoriesOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeInstanceCategoriesRequest&, DescribeInstanceCategoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceCategoriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobResponse> DescribeJobOutcome;
                typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeJobRequest&, DescribeJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobSubmitInfoResponse> DescribeJobSubmitInfoOutcome;
                typedef std::future<DescribeJobSubmitInfoOutcome> DescribeJobSubmitInfoOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeJobSubmitInfoRequest&, DescribeJobSubmitInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobSubmitInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobsResponse> DescribeJobsOutcome;
                typedef std::future<DescribeJobsOutcome> DescribeJobsOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeJobsRequest&, DescribeJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskResponse> DescribeTaskOutcome;
                typedef std::future<DescribeTaskOutcome> DescribeTaskOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeTaskRequest&, DescribeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskLogsResponse> DescribeTaskLogsOutcome;
                typedef std::future<DescribeTaskLogsOutcome> DescribeTaskLogsOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeTaskLogsRequest&, DescribeTaskLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskTemplatesResponse> DescribeTaskTemplatesOutcome;
                typedef std::future<DescribeTaskTemplatesOutcome> DescribeTaskTemplatesOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeTaskTemplatesRequest&, DescribeTaskTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachInstancesResponse> DetachInstancesOutcome;
                typedef std::future<DetachInstancesOutcome> DetachInstancesOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DetachInstancesRequest&, DetachInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyComputeEnvResponse> ModifyComputeEnvOutcome;
                typedef std::future<ModifyComputeEnvOutcome> ModifyComputeEnvOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::ModifyComputeEnvRequest&, ModifyComputeEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyComputeEnvAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTaskTemplateResponse> ModifyTaskTemplateOutcome;
                typedef std::future<ModifyTaskTemplateOutcome> ModifyTaskTemplateOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::ModifyTaskTemplateRequest&, ModifyTaskTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryJobsResponse> RetryJobsOutcome;
                typedef std::future<RetryJobsOutcome> RetryJobsOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::RetryJobsRequest&, RetryJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateComputeNodeResponse> TerminateComputeNodeOutcome;
                typedef std::future<TerminateComputeNodeOutcome> TerminateComputeNodeOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::TerminateComputeNodeRequest&, TerminateComputeNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateComputeNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateComputeNodesResponse> TerminateComputeNodesOutcome;
                typedef std::future<TerminateComputeNodesOutcome> TerminateComputeNodesOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::TerminateComputeNodesRequest&, TerminateComputeNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateComputeNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateJobResponse> TerminateJobOutcome;
                typedef std::future<TerminateJobOutcome> TerminateJobOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::TerminateJobRequest&, TerminateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateTaskInstanceResponse> TerminateTaskInstanceOutcome;
                typedef std::future<TerminateTaskInstanceOutcome> TerminateTaskInstanceOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::TerminateTaskInstanceRequest&, TerminateTaskInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateTaskInstanceAsyncHandler;



                /**
                 *This API is used to add existing instances to the compute environment.
Considerations: <br/>
1. The instance should not be in the batch compute system.<br/>
2. The instance status should be 'running'.<br/>
3. It supports dedicated CVMs and pay-as-you-go instances that billed on an hourly basis. Spot instances are not supported.<b/>

For instances added to the compute environment, their UserData will be reset and the operating systems will be reinstalled.
                 * @param req AttachInstancesRequest
                 * @return AttachInstancesOutcome
                 */
                AttachInstancesOutcome AttachInstances(const Model::AttachInstancesRequest &request);
                void AttachInstancesAsync(const Model::AttachInstancesRequest& request, const AttachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachInstancesOutcomeCallable AttachInstancesCallable(const Model::AttachInstancesRequest& request);

                /**
                 *This API is used to create a compute environment.
                 * @param req CreateComputeEnvRequest
                 * @return CreateComputeEnvOutcome
                 */
                CreateComputeEnvOutcome CreateComputeEnv(const Model::CreateComputeEnvRequest &request);
                void CreateComputeEnvAsync(const Model::CreateComputeEnvRequest& request, const CreateComputeEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateComputeEnvOutcomeCallable CreateComputeEnvCallable(const Model::CreateComputeEnvRequest& request);

                /**
                 *This API is used to create a task template.
                 * @param req CreateTaskTemplateRequest
                 * @return CreateTaskTemplateOutcome
                 */
                CreateTaskTemplateOutcome CreateTaskTemplate(const Model::CreateTaskTemplateRequest &request);
                void CreateTaskTemplateAsync(const Model::CreateTaskTemplateRequest& request, const CreateTaskTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskTemplateOutcomeCallable CreateTaskTemplateCallable(const Model::CreateTaskTemplateRequest& request);

                /**
                 *This API is used to delete a compute environment.
                 * @param req DeleteComputeEnvRequest
                 * @return DeleteComputeEnvOutcome
                 */
                DeleteComputeEnvOutcome DeleteComputeEnv(const Model::DeleteComputeEnvRequest &request);
                void DeleteComputeEnvAsync(const Model::DeleteComputeEnvRequest& request, const DeleteComputeEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteComputeEnvOutcomeCallable DeleteComputeEnvCallable(const Model::DeleteComputeEnvRequest& request);

                /**
                 *This API is used to delete a job.
Deleting a job is equivalent to deleting all the information related to the job. After successful deletion, all information related to the job cannot be queried.
The job to be deleted must be in a completed state, and all task instances contained in it must also be in a completed state; otherwise, the operation will be prohibited. The completed state can be either SUCCEED or FAILED.
                 * @param req DeleteJobRequest
                 * @return DeleteJobOutcome
                 */
                DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest &request);
                void DeleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteJobOutcomeCallable DeleteJobCallable(const Model::DeleteJobRequest& request);

                /**
                 *This API is used to delete task template information.
                 * @param req DeleteTaskTemplatesRequest
                 * @return DeleteTaskTemplatesOutcome
                 */
                DeleteTaskTemplatesOutcome DeleteTaskTemplates(const Model::DeleteTaskTemplatesRequest &request);
                void DeleteTaskTemplatesAsync(const Model::DeleteTaskTemplatesRequest& request, const DeleteTaskTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTaskTemplatesOutcomeCallable DeleteTaskTemplatesCallable(const Model::DeleteTaskTemplatesRequest& request);

                /**
                 *This API is used to view the information of available CVM model configurations.
                 * @param req DescribeAvailableCvmInstanceTypesRequest
                 * @return DescribeAvailableCvmInstanceTypesOutcome
                 */
                DescribeAvailableCvmInstanceTypesOutcome DescribeAvailableCvmInstanceTypes(const Model::DescribeAvailableCvmInstanceTypesRequest &request);
                void DescribeAvailableCvmInstanceTypesAsync(const Model::DescribeAvailableCvmInstanceTypesRequest& request, const DescribeAvailableCvmInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableCvmInstanceTypesOutcomeCallable DescribeAvailableCvmInstanceTypesCallable(const Model::DescribeAvailableCvmInstanceTypesRequest& request);

                /**
                 *This API is used to query compute environment details.
                 * @param req DescribeComputeEnvRequest
                 * @return DescribeComputeEnvOutcome
                 */
                DescribeComputeEnvOutcome DescribeComputeEnv(const Model::DescribeComputeEnvRequest &request);
                void DescribeComputeEnvAsync(const Model::DescribeComputeEnvRequest& request, const DescribeComputeEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComputeEnvOutcomeCallable DescribeComputeEnvCallable(const Model::DescribeComputeEnvRequest& request);

                /**
                 *This API is used to query the information of activities in the compute environment.
                 * @param req DescribeComputeEnvActivitiesRequest
                 * @return DescribeComputeEnvActivitiesOutcome
                 */
                DescribeComputeEnvActivitiesOutcome DescribeComputeEnvActivities(const Model::DescribeComputeEnvActivitiesRequest &request);
                void DescribeComputeEnvActivitiesAsync(const Model::DescribeComputeEnvActivitiesRequest& request, const DescribeComputeEnvActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComputeEnvActivitiesOutcomeCallable DescribeComputeEnvActivitiesCallable(const Model::DescribeComputeEnvActivitiesRequest& request);

                /**
                 *Views compute environment creation information.
                 * @param req DescribeComputeEnvCreateInfoRequest
                 * @return DescribeComputeEnvCreateInfoOutcome
                 */
                DescribeComputeEnvCreateInfoOutcome DescribeComputeEnvCreateInfo(const Model::DescribeComputeEnvCreateInfoRequest &request);
                void DescribeComputeEnvCreateInfoAsync(const Model::DescribeComputeEnvCreateInfoRequest& request, const DescribeComputeEnvCreateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComputeEnvCreateInfoOutcomeCallable DescribeComputeEnvCreateInfoCallable(const Model::DescribeComputeEnvCreateInfoRequest& request);

                /**
                 *This API is used to view the list of information of compute environment creation, including name, description, type, environment parameters, notifications, and number of desired nodes.
                 * @param req DescribeComputeEnvCreateInfosRequest
                 * @return DescribeComputeEnvCreateInfosOutcome
                 */
                DescribeComputeEnvCreateInfosOutcome DescribeComputeEnvCreateInfos(const Model::DescribeComputeEnvCreateInfosRequest &request);
                void DescribeComputeEnvCreateInfosAsync(const Model::DescribeComputeEnvCreateInfosRequest& request, const DescribeComputeEnvCreateInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComputeEnvCreateInfosOutcomeCallable DescribeComputeEnvCreateInfosCallable(const Model::DescribeComputeEnvCreateInfosRequest& request);

                /**
                 *This API is used to view the list of compute environments.
                 * @param req DescribeComputeEnvsRequest
                 * @return DescribeComputeEnvsOutcome
                 */
                DescribeComputeEnvsOutcome DescribeComputeEnvs(const Model::DescribeComputeEnvsRequest &request);
                void DescribeComputeEnvsAsync(const Model::DescribeComputeEnvsRequest& request, const DescribeComputeEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComputeEnvsOutcomeCallable DescribeComputeEnvsCallable(const Model::DescribeComputeEnvsRequest& request);

                /**
                 *This API is used to get the model configuration information of the availability zone of BatchCompute.
                 * @param req DescribeCvmZoneInstanceConfigInfosRequest
                 * @return DescribeCvmZoneInstanceConfigInfosOutcome
                 */
                DescribeCvmZoneInstanceConfigInfosOutcome DescribeCvmZoneInstanceConfigInfos(const Model::DescribeCvmZoneInstanceConfigInfosRequest &request);
                void DescribeCvmZoneInstanceConfigInfosAsync(const Model::DescribeCvmZoneInstanceConfigInfosRequest& request, const DescribeCvmZoneInstanceConfigInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCvmZoneInstanceConfigInfosOutcomeCallable DescribeCvmZoneInstanceConfigInfosCallable(const Model::DescribeCvmZoneInstanceConfigInfosRequest& request);

                /**
                 *Currently, CVM instance families are classified into different category, and each category contains several instance families. This API is used to query the instance category information.
                 * @param req DescribeInstanceCategoriesRequest
                 * @return DescribeInstanceCategoriesOutcome
                 */
                DescribeInstanceCategoriesOutcome DescribeInstanceCategories(const Model::DescribeInstanceCategoriesRequest &request);
                void DescribeInstanceCategoriesAsync(const Model::DescribeInstanceCategoriesRequest& request, const DescribeInstanceCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceCategoriesOutcomeCallable DescribeInstanceCategoriesCallable(const Model::DescribeInstanceCategoriesRequest& request);

                /**
                 *This API is used to view the details of a job, including internal task (Task) and dependency (Dependence) information.
                 * @param req DescribeJobRequest
                 * @return DescribeJobOutcome
                 */
                DescribeJobOutcome DescribeJob(const Model::DescribeJobRequest &request);
                void DescribeJobAsync(const Model::DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobOutcomeCallable DescribeJobCallable(const Model::DescribeJobRequest& request);

                /**
                 *This API is used to query the submission information of the specified job, with the return including the job submission information used as input parameters in the JobId and SubmitJob APIs.
                 * @param req DescribeJobSubmitInfoRequest
                 * @return DescribeJobSubmitInfoOutcome
                 */
                DescribeJobSubmitInfoOutcome DescribeJobSubmitInfo(const Model::DescribeJobSubmitInfoRequest &request);
                void DescribeJobSubmitInfoAsync(const Model::DescribeJobSubmitInfoRequest& request, const DescribeJobSubmitInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobSubmitInfoOutcomeCallable DescribeJobSubmitInfoCallable(const Model::DescribeJobSubmitInfoRequest& request);

                /**
                 *This API is used to query the overview information of several instances.
                 * @param req DescribeJobsRequest
                 * @return DescribeJobsOutcome
                 */
                DescribeJobsOutcome DescribeJobs(const Model::DescribeJobsRequest &request);
                void DescribeJobsAsync(const Model::DescribeJobsRequest& request, const DescribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobsOutcomeCallable DescribeJobsCallable(const Model::DescribeJobsRequest& request);

                /**
                 *This API is used to query the details of a specified task, including information of the task instances inside the task.
                 * @param req DescribeTaskRequest
                 * @return DescribeTaskOutcome
                 */
                DescribeTaskOutcome DescribeTask(const Model::DescribeTaskRequest &request);
                void DescribeTaskAsync(const Model::DescribeTaskRequest& request, const DescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskOutcomeCallable DescribeTaskCallable(const Model::DescribeTaskRequest& request);

                /**
                 *This API is used to get the standard outputs and standard error logs of multiple task instances.
                 * @param req DescribeTaskLogsRequest
                 * @return DescribeTaskLogsOutcome
                 */
                DescribeTaskLogsOutcome DescribeTaskLogs(const Model::DescribeTaskLogsRequest &request);
                void DescribeTaskLogsAsync(const Model::DescribeTaskLogsRequest& request, const DescribeTaskLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskLogsOutcomeCallable DescribeTaskLogsCallable(const Model::DescribeTaskLogsRequest& request);

                /**
                 *This API is used to query the information of task templates.
                 * @param req DescribeTaskTemplatesRequest
                 * @return DescribeTaskTemplatesOutcome
                 */
                DescribeTaskTemplatesOutcome DescribeTaskTemplates(const Model::DescribeTaskTemplatesRequest &request);
                void DescribeTaskTemplatesAsync(const Model::DescribeTaskTemplatesRequest& request, const DescribeTaskTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskTemplatesOutcomeCallable DescribeTaskTemplatesCallable(const Model::DescribeTaskTemplatesRequest& request);

                /**
                 *This API is used to remove instances that from compute environment. 
                 * @param req DetachInstancesRequest
                 * @return DetachInstancesOutcome
                 */
                DetachInstancesOutcome DetachInstances(const Model::DetachInstancesRequest &request);
                void DetachInstancesAsync(const Model::DetachInstancesRequest& request, const DetachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachInstancesOutcomeCallable DetachInstancesCallable(const Model::DetachInstancesRequest& request);

                /**
                 *This API is used to modify the attributes of a compute environment.
                 * @param req ModifyComputeEnvRequest
                 * @return ModifyComputeEnvOutcome
                 */
                ModifyComputeEnvOutcome ModifyComputeEnv(const Model::ModifyComputeEnvRequest &request);
                void ModifyComputeEnvAsync(const Model::ModifyComputeEnvRequest& request, const ModifyComputeEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyComputeEnvOutcomeCallable ModifyComputeEnvCallable(const Model::ModifyComputeEnvRequest& request);

                /**
                 *This API is used to modify a task template.
                 * @param req ModifyTaskTemplateRequest
                 * @return ModifyTaskTemplateOutcome
                 */
                ModifyTaskTemplateOutcome ModifyTaskTemplate(const Model::ModifyTaskTemplateRequest &request);
                void ModifyTaskTemplateAsync(const Model::ModifyTaskTemplateRequest& request, const ModifyTaskTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskTemplateOutcomeCallable ModifyTaskTemplateCallable(const Model::ModifyTaskTemplateRequest& request);

                /**
                 *This API is used to retry the failing task instance in instances.
Job retry is supported only if a job is in the "FAILED" state. After the retry operation succeeds, the instance will retry the failing task instances in each task in turn according to the task dependencies specified in the "DAG". The history information of the task instances will be reset, the instances will participate in subsequent scheduling and execution as if they are run for the first time.
                 * @param req RetryJobsRequest
                 * @return RetryJobsOutcome
                 */
                RetryJobsOutcome RetryJobs(const Model::RetryJobsRequest &request);
                void RetryJobsAsync(const Model::RetryJobsRequest& request, const RetryJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryJobsOutcomeCallable RetryJobsCallable(const Model::RetryJobsRequest& request);

                /**
                 *This API is used to terminate a compute node.
Termination is allowed for nodes in the CREATED, CREATION_FAILED, RUNNING or ABNORMAL state.
                 * @param req TerminateComputeNodeRequest
                 * @return TerminateComputeNodeOutcome
                 */
                TerminateComputeNodeOutcome TerminateComputeNode(const Model::TerminateComputeNodeRequest &request);
                void TerminateComputeNodeAsync(const Model::TerminateComputeNodeRequest& request, const TerminateComputeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateComputeNodeOutcomeCallable TerminateComputeNodeCallable(const Model::TerminateComputeNodeRequest& request);

                /**
                 *This API is used to terminate compute nodes in batches. It is not allowed to repeatedly terminate the same node.
                 * @param req TerminateComputeNodesRequest
                 * @return TerminateComputeNodesOutcome
                 */
                TerminateComputeNodesOutcome TerminateComputeNodes(const Model::TerminateComputeNodesRequest &request);
                void TerminateComputeNodesAsync(const Model::TerminateComputeNodesRequest& request, const TerminateComputeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateComputeNodesOutcomeCallable TerminateComputeNodesCallable(const Model::TerminateComputeNodesRequest& request);

                /**
                 *This API is used to terminate an instance.
Termination is prohibited if an instance is in the "SUBMITTED" state and does not take effect if it is in the "SUCCEED" state.
Instance termination is an asynchronous process, and the time it takes to complete the entire process is directly proportional to the total number of tasks. The effect of terminating an instance is equivalent to performing the TerminateTaskInstance operation on all the task instances contained in the job. For more information on the specific effect and usage, see TerminateTaskInstance.
                 * @param req TerminateJobRequest
                 * @return TerminateJobOutcome
                 */
                TerminateJobOutcome TerminateJob(const Model::TerminateJobRequest &request);
                void TerminateJobAsync(const Model::TerminateJobRequest& request, const TerminateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateJobOutcomeCallable TerminateJobCallable(const Model::TerminateJobRequest& request);

                /**
                 *This API is used to terminate a task instance.
Task instances in the "SUCCEED" or "FAILED" state will not be processed.
Task instances in the "SUBMITTED", "PENDING", or "RUNNABLE" state will be set to the "FAILED" state.
For task instances in the "STARTING", "RUNNING", or "FAILED_INTERRUPTED" state, there will be two cases: if no compute environment is specified, the CVM instance will be terminated first, and then the state will be set to "FAILED"; if a compute environment's EnvId is specified, the state of the task instances will be set to "FAILED" first, and then the CVM instance that performs the task will be restarted. Both cases takes a certain amount of time to be completed.
For task instances in the "FAILED_INTERRUPTED" state, the related resources and quotas will be released only after the termination actually succeeds.
                 * @param req TerminateTaskInstanceRequest
                 * @return TerminateTaskInstanceOutcome
                 */
                TerminateTaskInstanceOutcome TerminateTaskInstance(const Model::TerminateTaskInstanceRequest &request);
                void TerminateTaskInstanceAsync(const Model::TerminateTaskInstanceRequest& request, const TerminateTaskInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateTaskInstanceOutcomeCallable TerminateTaskInstanceCallable(const Model::TerminateTaskInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_BATCHCLIENT_H_
