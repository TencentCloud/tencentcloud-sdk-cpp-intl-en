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

#ifndef TENCENTCLOUD_OMICS_V20221128_OMICSCLIENT_H_
#define TENCENTCLOUD_OMICS_V20221128_OMICSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/omics/v20221128/model/CreateEnvironmentRequest.h>
#include <tencentcloud/omics/v20221128/model/CreateEnvironmentResponse.h>
#include <tencentcloud/omics/v20221128/model/CreateVolumeRequest.h>
#include <tencentcloud/omics/v20221128/model/CreateVolumeResponse.h>
#include <tencentcloud/omics/v20221128/model/DeleteEnvironmentRequest.h>
#include <tencentcloud/omics/v20221128/model/DeleteEnvironmentResponse.h>
#include <tencentcloud/omics/v20221128/model/DeleteVolumeRequest.h>
#include <tencentcloud/omics/v20221128/model/DeleteVolumeResponse.h>
#include <tencentcloud/omics/v20221128/model/DeleteVolumeDataRequest.h>
#include <tencentcloud/omics/v20221128/model/DeleteVolumeDataResponse.h>
#include <tencentcloud/omics/v20221128/model/DescribeEnvironmentsRequest.h>
#include <tencentcloud/omics/v20221128/model/DescribeEnvironmentsResponse.h>
#include <tencentcloud/omics/v20221128/model/DescribeRunGroupsRequest.h>
#include <tencentcloud/omics/v20221128/model/DescribeRunGroupsResponse.h>
#include <tencentcloud/omics/v20221128/model/DescribeRunsRequest.h>
#include <tencentcloud/omics/v20221128/model/DescribeRunsResponse.h>
#include <tencentcloud/omics/v20221128/model/DescribeTablesRequest.h>
#include <tencentcloud/omics/v20221128/model/DescribeTablesResponse.h>
#include <tencentcloud/omics/v20221128/model/DescribeTablesRowsRequest.h>
#include <tencentcloud/omics/v20221128/model/DescribeTablesRowsResponse.h>
#include <tencentcloud/omics/v20221128/model/DescribeVolumesRequest.h>
#include <tencentcloud/omics/v20221128/model/DescribeVolumesResponse.h>
#include <tencentcloud/omics/v20221128/model/GetRunCallsRequest.h>
#include <tencentcloud/omics/v20221128/model/GetRunCallsResponse.h>
#include <tencentcloud/omics/v20221128/model/GetRunMetadataFileRequest.h>
#include <tencentcloud/omics/v20221128/model/GetRunMetadataFileResponse.h>
#include <tencentcloud/omics/v20221128/model/GetRunStatusRequest.h>
#include <tencentcloud/omics/v20221128/model/GetRunStatusResponse.h>
#include <tencentcloud/omics/v20221128/model/ImportTableFileRequest.h>
#include <tencentcloud/omics/v20221128/model/ImportTableFileResponse.h>
#include <tencentcloud/omics/v20221128/model/ModifyVolumeRequest.h>
#include <tencentcloud/omics/v20221128/model/ModifyVolumeResponse.h>
#include <tencentcloud/omics/v20221128/model/RetryRunsRequest.h>
#include <tencentcloud/omics/v20221128/model/RetryRunsResponse.h>
#include <tencentcloud/omics/v20221128/model/RunApplicationRequest.h>
#include <tencentcloud/omics/v20221128/model/RunApplicationResponse.h>
#include <tencentcloud/omics/v20221128/model/RunWorkflowRequest.h>
#include <tencentcloud/omics/v20221128/model/RunWorkflowResponse.h>
#include <tencentcloud/omics/v20221128/model/TerminateRunGroupRequest.h>
#include <tencentcloud/omics/v20221128/model/TerminateRunGroupResponse.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            class OmicsClient : public AbstractClient
            {
            public:
                OmicsClient(const Credential &credential, const std::string &region);
                OmicsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateEnvironmentResponse> CreateEnvironmentOutcome;
                typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::CreateEnvironmentRequest&, CreateEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVolumeResponse> CreateVolumeOutcome;
                typedef std::future<CreateVolumeOutcome> CreateVolumeOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::CreateVolumeRequest&, CreateVolumeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVolumeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEnvironmentResponse> DeleteEnvironmentOutcome;
                typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::DeleteEnvironmentRequest&, DeleteEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVolumeResponse> DeleteVolumeOutcome;
                typedef std::future<DeleteVolumeOutcome> DeleteVolumeOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::DeleteVolumeRequest&, DeleteVolumeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVolumeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVolumeDataResponse> DeleteVolumeDataOutcome;
                typedef std::future<DeleteVolumeDataOutcome> DeleteVolumeDataOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::DeleteVolumeDataRequest&, DeleteVolumeDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVolumeDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvironmentsResponse> DescribeEnvironmentsOutcome;
                typedef std::future<DescribeEnvironmentsOutcome> DescribeEnvironmentsOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::DescribeEnvironmentsRequest&, DescribeEnvironmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvironmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRunGroupsResponse> DescribeRunGroupsOutcome;
                typedef std::future<DescribeRunGroupsOutcome> DescribeRunGroupsOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::DescribeRunGroupsRequest&, DescribeRunGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRunGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRunsResponse> DescribeRunsOutcome;
                typedef std::future<DescribeRunsOutcome> DescribeRunsOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::DescribeRunsRequest&, DescribeRunsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRunsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTablesResponse> DescribeTablesOutcome;
                typedef std::future<DescribeTablesOutcome> DescribeTablesOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::DescribeTablesRequest&, DescribeTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTablesRowsResponse> DescribeTablesRowsOutcome;
                typedef std::future<DescribeTablesRowsOutcome> DescribeTablesRowsOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::DescribeTablesRowsRequest&, DescribeTablesRowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesRowsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVolumesResponse> DescribeVolumesOutcome;
                typedef std::future<DescribeVolumesOutcome> DescribeVolumesOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::DescribeVolumesRequest&, DescribeVolumesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVolumesAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRunCallsResponse> GetRunCallsOutcome;
                typedef std::future<GetRunCallsOutcome> GetRunCallsOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::GetRunCallsRequest&, GetRunCallsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRunCallsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRunMetadataFileResponse> GetRunMetadataFileOutcome;
                typedef std::future<GetRunMetadataFileOutcome> GetRunMetadataFileOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::GetRunMetadataFileRequest&, GetRunMetadataFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRunMetadataFileAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRunStatusResponse> GetRunStatusOutcome;
                typedef std::future<GetRunStatusOutcome> GetRunStatusOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::GetRunStatusRequest&, GetRunStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRunStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportTableFileResponse> ImportTableFileOutcome;
                typedef std::future<ImportTableFileOutcome> ImportTableFileOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::ImportTableFileRequest&, ImportTableFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportTableFileAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVolumeResponse> ModifyVolumeOutcome;
                typedef std::future<ModifyVolumeOutcome> ModifyVolumeOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::ModifyVolumeRequest&, ModifyVolumeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVolumeAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryRunsResponse> RetryRunsOutcome;
                typedef std::future<RetryRunsOutcome> RetryRunsOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::RetryRunsRequest&, RetryRunsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryRunsAsyncHandler;
                typedef Outcome<Core::Error, Model::RunApplicationResponse> RunApplicationOutcome;
                typedef std::future<RunApplicationOutcome> RunApplicationOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::RunApplicationRequest&, RunApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::RunWorkflowResponse> RunWorkflowOutcome;
                typedef std::future<RunWorkflowOutcome> RunWorkflowOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::RunWorkflowRequest&, RunWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateRunGroupResponse> TerminateRunGroupOutcome;
                typedef std::future<TerminateRunGroupOutcome> TerminateRunGroupOutcomeCallable;
                typedef std::function<void(const OmicsClient*, const Model::TerminateRunGroupRequest&, TerminateRunGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateRunGroupAsyncHandler;



                /**
                 *This API is used to create an environment for Tencent Healthcare Omics Platform.
                 * @param req CreateEnvironmentRequest
                 * @return CreateEnvironmentOutcome
                 */
                CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest &request);
                void CreateEnvironmentAsync(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const Model::CreateEnvironmentRequest& request);

                /**
                 *This API is used to create a volume.
                 * @param req CreateVolumeRequest
                 * @return CreateVolumeOutcome
                 */
                CreateVolumeOutcome CreateVolume(const Model::CreateVolumeRequest &request);
                void CreateVolumeAsync(const Model::CreateVolumeRequest& request, const CreateVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVolumeOutcomeCallable CreateVolumeCallable(const Model::CreateVolumeRequest& request);

                /**
                 *This API is used to delete the environment.
                 * @param req DeleteEnvironmentRequest
                 * @return DeleteEnvironmentOutcome
                 */
                DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest &request);
                void DeleteEnvironmentAsync(const Model::DeleteEnvironmentRequest& request, const DeleteEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const Model::DeleteEnvironmentRequest& request);

                /**
                 *This API is used to delete the volume.
                 * @param req DeleteVolumeRequest
                 * @return DeleteVolumeOutcome
                 */
                DeleteVolumeOutcome DeleteVolume(const Model::DeleteVolumeRequest &request);
                void DeleteVolumeAsync(const Model::DeleteVolumeRequest& request, const DeleteVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVolumeOutcomeCallable DeleteVolumeCallable(const Model::DeleteVolumeRequest& request);

                /**
                 *This API is used to delete the volume data.
                 * @param req DeleteVolumeDataRequest
                 * @return DeleteVolumeDataOutcome
                 */
                DeleteVolumeDataOutcome DeleteVolumeData(const Model::DeleteVolumeDataRequest &request);
                void DeleteVolumeDataAsync(const Model::DeleteVolumeDataRequest& request, const DeleteVolumeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVolumeDataOutcomeCallable DeleteVolumeDataCallable(const Model::DeleteVolumeDataRequest& request);

                /**
                 *This API is used to query the environment list.
                 * @param req DescribeEnvironmentsRequest
                 * @return DescribeEnvironmentsOutcome
                 */
                DescribeEnvironmentsOutcome DescribeEnvironments(const Model::DescribeEnvironmentsRequest &request);
                void DescribeEnvironmentsAsync(const Model::DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvironmentsOutcomeCallable DescribeEnvironmentsCallable(const Model::DescribeEnvironmentsRequest& request);

                /**
                 *This API is used to query the run group list.
                 * @param req DescribeRunGroupsRequest
                 * @return DescribeRunGroupsOutcome
                 */
                DescribeRunGroupsOutcome DescribeRunGroups(const Model::DescribeRunGroupsRequest &request);
                void DescribeRunGroupsAsync(const Model::DescribeRunGroupsRequest& request, const DescribeRunGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRunGroupsOutcomeCallable DescribeRunGroupsCallable(const Model::DescribeRunGroupsRequest& request);

                /**
                 *This API is used to query the run list.
                 * @param req DescribeRunsRequest
                 * @return DescribeRunsOutcome
                 */
                DescribeRunsOutcome DescribeRuns(const Model::DescribeRunsRequest &request);
                void DescribeRunsAsync(const Model::DescribeRunsRequest& request, const DescribeRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRunsOutcomeCallable DescribeRunsCallable(const Model::DescribeRunsRequest& request);

                /**
                 *This API is used to query the table.
                 * @param req DescribeTablesRequest
                 * @return DescribeTablesOutcome
                 */
                DescribeTablesOutcome DescribeTables(const Model::DescribeTablesRequest &request);
                void DescribeTablesAsync(const Model::DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTablesOutcomeCallable DescribeTablesCallable(const Model::DescribeTablesRequest& request);

                /**
                 *This API is used to query the table row data.
                 * @param req DescribeTablesRowsRequest
                 * @return DescribeTablesRowsOutcome
                 */
                DescribeTablesRowsOutcome DescribeTablesRows(const Model::DescribeTablesRowsRequest &request);
                void DescribeTablesRowsAsync(const Model::DescribeTablesRowsRequest& request, const DescribeTablesRowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTablesRowsOutcomeCallable DescribeTablesRowsCallable(const Model::DescribeTablesRowsRequest& request);

                /**
                 *This API is used to query the volume list.
                 * @param req DescribeVolumesRequest
                 * @return DescribeVolumesOutcome
                 */
                DescribeVolumesOutcome DescribeVolumes(const Model::DescribeVolumesRequest &request);
                void DescribeVolumesAsync(const Model::DescribeVolumesRequest& request, const DescribeVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVolumesOutcomeCallable DescribeVolumesCallable(const Model::DescribeVolumesRequest& request);

                /**
                 *This API is used to query job details.
                 * @param req GetRunCallsRequest
                 * @return GetRunCallsOutcome
                 */
                GetRunCallsOutcome GetRunCalls(const Model::GetRunCallsRequest &request);
                void GetRunCallsAsync(const Model::GetRunCallsRequest& request, const GetRunCallsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRunCallsOutcomeCallable GetRunCallsCallable(const Model::GetRunCallsRequest& request);

                /**
                 *This API is used to get the run details file.
                 * @param req GetRunMetadataFileRequest
                 * @return GetRunMetadataFileOutcome
                 */
                GetRunMetadataFileOutcome GetRunMetadataFile(const Model::GetRunMetadataFileRequest &request);
                void GetRunMetadataFileAsync(const Model::GetRunMetadataFileRequest& request, const GetRunMetadataFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRunMetadataFileOutcomeCallable GetRunMetadataFileCallable(const Model::GetRunMetadataFileRequest& request);

                /**
                 *This API is used to query run details.
                 * @param req GetRunStatusRequest
                 * @return GetRunStatusOutcome
                 */
                GetRunStatusOutcome GetRunStatus(const Model::GetRunStatusRequest &request);
                void GetRunStatusAsync(const Model::GetRunStatusRequest& request, const GetRunStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRunStatusOutcomeCallable GetRunStatusCallable(const Model::GetRunStatusRequest& request);

                /**
                 *This API is used to import the table file.
                 * @param req ImportTableFileRequest
                 * @return ImportTableFileOutcome
                 */
                ImportTableFileOutcome ImportTableFile(const Model::ImportTableFileRequest &request);
                void ImportTableFileAsync(const Model::ImportTableFileRequest& request, const ImportTableFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportTableFileOutcomeCallable ImportTableFileCallable(const Model::ImportTableFileRequest& request);

                /**
                 *This API is used to modify the volume.
                 * @param req ModifyVolumeRequest
                 * @return ModifyVolumeOutcome
                 */
                ModifyVolumeOutcome ModifyVolume(const Model::ModifyVolumeRequest &request);
                void ModifyVolumeAsync(const Model::ModifyVolumeRequest& request, const ModifyVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVolumeOutcomeCallable ModifyVolumeCallable(const Model::ModifyVolumeRequest& request);

                /**
                 *This API is used to retry the run.
                 * @param req RetryRunsRequest
                 * @return RetryRunsOutcome
                 */
                RetryRunsOutcome RetryRuns(const Model::RetryRunsRequest &request);
                void RetryRunsAsync(const Model::RetryRunsRequest& request, const RetryRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryRunsOutcomeCallable RetryRunsCallable(const Model::RetryRunsRequest& request);

                /**
                 *This API is used to run the application.
                 * @param req RunApplicationRequest
                 * @return RunApplicationOutcome
                 */
                RunApplicationOutcome RunApplication(const Model::RunApplicationRequest &request);
                void RunApplicationAsync(const Model::RunApplicationRequest& request, const RunApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunApplicationOutcomeCallable RunApplicationCallable(const Model::RunApplicationRequest& request);

                /**
                 *This API is used to run the workflow.
                 * @param req RunWorkflowRequest
                 * @return RunWorkflowOutcome
                 */
                RunWorkflowOutcome RunWorkflow(const Model::RunWorkflowRequest &request);
                void RunWorkflowAsync(const Model::RunWorkflowRequest& request, const RunWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunWorkflowOutcomeCallable RunWorkflowCallable(const Model::RunWorkflowRequest& request);

                /**
                 *This API is used to terminate the run group.
                 * @param req TerminateRunGroupRequest
                 * @return TerminateRunGroupOutcome
                 */
                TerminateRunGroupOutcome TerminateRunGroup(const Model::TerminateRunGroupRequest &request);
                void TerminateRunGroupAsync(const Model::TerminateRunGroupRequest& request, const TerminateRunGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateRunGroupOutcomeCallable TerminateRunGroupCallable(const Model::TerminateRunGroupRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_OMICSCLIENT_H_
