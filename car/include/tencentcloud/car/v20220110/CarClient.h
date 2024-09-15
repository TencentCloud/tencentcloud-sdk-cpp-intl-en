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

#ifndef TENCENTCLOUD_CAR_V20220110_CARCLIENT_H_
#define TENCENTCLOUD_CAR_V20220110_CARCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/car/v20220110/model/ApplyConcurrentRequest.h>
#include <tencentcloud/car/v20220110/model/ApplyConcurrentResponse.h>
#include <tencentcloud/car/v20220110/model/BindConcurrentPackagesToProjectRequest.h>
#include <tencentcloud/car/v20220110/model/BindConcurrentPackagesToProjectResponse.h>
#include <tencentcloud/car/v20220110/model/CreateApplicationRequest.h>
#include <tencentcloud/car/v20220110/model/CreateApplicationResponse.h>
#include <tencentcloud/car/v20220110/model/CreateApplicationProjectRequest.h>
#include <tencentcloud/car/v20220110/model/CreateApplicationProjectResponse.h>
#include <tencentcloud/car/v20220110/model/CreateApplicationSnapshotRequest.h>
#include <tencentcloud/car/v20220110/model/CreateApplicationSnapshotResponse.h>
#include <tencentcloud/car/v20220110/model/CreateApplicationVersionRequest.h>
#include <tencentcloud/car/v20220110/model/CreateApplicationVersionResponse.h>
#include <tencentcloud/car/v20220110/model/CreateSessionRequest.h>
#include <tencentcloud/car/v20220110/model/CreateSessionResponse.h>
#include <tencentcloud/car/v20220110/model/DeleteApplicationRequest.h>
#include <tencentcloud/car/v20220110/model/DeleteApplicationResponse.h>
#include <tencentcloud/car/v20220110/model/DeleteApplicationProjectsRequest.h>
#include <tencentcloud/car/v20220110/model/DeleteApplicationProjectsResponse.h>
#include <tencentcloud/car/v20220110/model/DeleteApplicationVersionRequest.h>
#include <tencentcloud/car/v20220110/model/DeleteApplicationVersionResponse.h>
#include <tencentcloud/car/v20220110/model/DescribeApplicationFileInfoRequest.h>
#include <tencentcloud/car/v20220110/model/DescribeApplicationFileInfoResponse.h>
#include <tencentcloud/car/v20220110/model/DescribeApplicationListRequest.h>
#include <tencentcloud/car/v20220110/model/DescribeApplicationListResponse.h>
#include <tencentcloud/car/v20220110/model/DescribeApplicationPathListRequest.h>
#include <tencentcloud/car/v20220110/model/DescribeApplicationPathListResponse.h>
#include <tencentcloud/car/v20220110/model/DescribeApplicationProjectAdvancedConfigRequest.h>
#include <tencentcloud/car/v20220110/model/DescribeApplicationProjectAdvancedConfigResponse.h>
#include <tencentcloud/car/v20220110/model/DescribeApplicationProjectsRequest.h>
#include <tencentcloud/car/v20220110/model/DescribeApplicationProjectsResponse.h>
#include <tencentcloud/car/v20220110/model/DescribeApplicationStatusRequest.h>
#include <tencentcloud/car/v20220110/model/DescribeApplicationStatusResponse.h>
#include <tencentcloud/car/v20220110/model/DescribeApplicationVersionRequest.h>
#include <tencentcloud/car/v20220110/model/DescribeApplicationVersionResponse.h>
#include <tencentcloud/car/v20220110/model/DescribeConcurrentCountRequest.h>
#include <tencentcloud/car/v20220110/model/DescribeConcurrentCountResponse.h>
#include <tencentcloud/car/v20220110/model/DescribeConcurrentPackagesRequest.h>
#include <tencentcloud/car/v20220110/model/DescribeConcurrentPackagesResponse.h>
#include <tencentcloud/car/v20220110/model/DescribeConcurrentSummaryRequest.h>
#include <tencentcloud/car/v20220110/model/DescribeConcurrentSummaryResponse.h>
#include <tencentcloud/car/v20220110/model/DescribeCosCredentialRequest.h>
#include <tencentcloud/car/v20220110/model/DescribeCosCredentialResponse.h>
#include <tencentcloud/car/v20220110/model/DestroySessionRequest.h>
#include <tencentcloud/car/v20220110/model/DestroySessionResponse.h>
#include <tencentcloud/car/v20220110/model/ModifyApplicationBaseInfoRequest.h>
#include <tencentcloud/car/v20220110/model/ModifyApplicationBaseInfoResponse.h>
#include <tencentcloud/car/v20220110/model/ModifyApplicationProjectRequest.h>
#include <tencentcloud/car/v20220110/model/ModifyApplicationProjectResponse.h>
#include <tencentcloud/car/v20220110/model/ModifyApplicationVersionRequest.h>
#include <tencentcloud/car/v20220110/model/ModifyApplicationVersionResponse.h>
#include <tencentcloud/car/v20220110/model/ModifyConcurrentPackageRequest.h>
#include <tencentcloud/car/v20220110/model/ModifyConcurrentPackageResponse.h>
#include <tencentcloud/car/v20220110/model/ModifyMobileApplicationInfoRequest.h>
#include <tencentcloud/car/v20220110/model/ModifyMobileApplicationInfoResponse.h>
#include <tencentcloud/car/v20220110/model/ResetConcurrentPackagesRequest.h>
#include <tencentcloud/car/v20220110/model/ResetConcurrentPackagesResponse.h>
#include <tencentcloud/car/v20220110/model/SetApplicationVersionOnlineRequest.h>
#include <tencentcloud/car/v20220110/model/SetApplicationVersionOnlineResponse.h>
#include <tencentcloud/car/v20220110/model/StartPublishStreamRequest.h>
#include <tencentcloud/car/v20220110/model/StartPublishStreamResponse.h>
#include <tencentcloud/car/v20220110/model/StartPublishStreamWithURLRequest.h>
#include <tencentcloud/car/v20220110/model/StartPublishStreamWithURLResponse.h>
#include <tencentcloud/car/v20220110/model/StopPublishStreamRequest.h>
#include <tencentcloud/car/v20220110/model/StopPublishStreamResponse.h>
#include <tencentcloud/car/v20220110/model/UnbindConcurrentPackagesFromProjectRequest.h>
#include <tencentcloud/car/v20220110/model/UnbindConcurrentPackagesFromProjectResponse.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            class CarClient : public AbstractClient
            {
            public:
                CarClient(const Credential &credential, const std::string &region);
                CarClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyConcurrentResponse> ApplyConcurrentOutcome;
                typedef std::future<ApplyConcurrentOutcome> ApplyConcurrentOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::ApplyConcurrentRequest&, ApplyConcurrentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyConcurrentAsyncHandler;
                typedef Outcome<Core::Error, Model::BindConcurrentPackagesToProjectResponse> BindConcurrentPackagesToProjectOutcome;
                typedef std::future<BindConcurrentPackagesToProjectOutcome> BindConcurrentPackagesToProjectOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::BindConcurrentPackagesToProjectRequest&, BindConcurrentPackagesToProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindConcurrentPackagesToProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationResponse> CreateApplicationOutcome;
                typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::CreateApplicationRequest&, CreateApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationProjectResponse> CreateApplicationProjectOutcome;
                typedef std::future<CreateApplicationProjectOutcome> CreateApplicationProjectOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::CreateApplicationProjectRequest&, CreateApplicationProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationSnapshotResponse> CreateApplicationSnapshotOutcome;
                typedef std::future<CreateApplicationSnapshotOutcome> CreateApplicationSnapshotOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::CreateApplicationSnapshotRequest&, CreateApplicationSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationVersionResponse> CreateApplicationVersionOutcome;
                typedef std::future<CreateApplicationVersionOutcome> CreateApplicationVersionOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::CreateApplicationVersionRequest&, CreateApplicationVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSessionResponse> CreateSessionOutcome;
                typedef std::future<CreateSessionOutcome> CreateSessionOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::CreateSessionRequest&, CreateSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationResponse> DeleteApplicationOutcome;
                typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DeleteApplicationRequest&, DeleteApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationProjectsResponse> DeleteApplicationProjectsOutcome;
                typedef std::future<DeleteApplicationProjectsOutcome> DeleteApplicationProjectsOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DeleteApplicationProjectsRequest&, DeleteApplicationProjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationProjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationVersionResponse> DeleteApplicationVersionOutcome;
                typedef std::future<DeleteApplicationVersionOutcome> DeleteApplicationVersionOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DeleteApplicationVersionRequest&, DeleteApplicationVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationFileInfoResponse> DescribeApplicationFileInfoOutcome;
                typedef std::future<DescribeApplicationFileInfoOutcome> DescribeApplicationFileInfoOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DescribeApplicationFileInfoRequest&, DescribeApplicationFileInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationFileInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationListResponse> DescribeApplicationListOutcome;
                typedef std::future<DescribeApplicationListOutcome> DescribeApplicationListOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DescribeApplicationListRequest&, DescribeApplicationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationPathListResponse> DescribeApplicationPathListOutcome;
                typedef std::future<DescribeApplicationPathListOutcome> DescribeApplicationPathListOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DescribeApplicationPathListRequest&, DescribeApplicationPathListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationPathListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationProjectAdvancedConfigResponse> DescribeApplicationProjectAdvancedConfigOutcome;
                typedef std::future<DescribeApplicationProjectAdvancedConfigOutcome> DescribeApplicationProjectAdvancedConfigOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DescribeApplicationProjectAdvancedConfigRequest&, DescribeApplicationProjectAdvancedConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationProjectAdvancedConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationProjectsResponse> DescribeApplicationProjectsOutcome;
                typedef std::future<DescribeApplicationProjectsOutcome> DescribeApplicationProjectsOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DescribeApplicationProjectsRequest&, DescribeApplicationProjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationProjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationStatusResponse> DescribeApplicationStatusOutcome;
                typedef std::future<DescribeApplicationStatusOutcome> DescribeApplicationStatusOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DescribeApplicationStatusRequest&, DescribeApplicationStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationVersionResponse> DescribeApplicationVersionOutcome;
                typedef std::future<DescribeApplicationVersionOutcome> DescribeApplicationVersionOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DescribeApplicationVersionRequest&, DescribeApplicationVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConcurrentCountResponse> DescribeConcurrentCountOutcome;
                typedef std::future<DescribeConcurrentCountOutcome> DescribeConcurrentCountOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DescribeConcurrentCountRequest&, DescribeConcurrentCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConcurrentCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConcurrentPackagesResponse> DescribeConcurrentPackagesOutcome;
                typedef std::future<DescribeConcurrentPackagesOutcome> DescribeConcurrentPackagesOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DescribeConcurrentPackagesRequest&, DescribeConcurrentPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConcurrentPackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConcurrentSummaryResponse> DescribeConcurrentSummaryOutcome;
                typedef std::future<DescribeConcurrentSummaryOutcome> DescribeConcurrentSummaryOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DescribeConcurrentSummaryRequest&, DescribeConcurrentSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConcurrentSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosCredentialResponse> DescribeCosCredentialOutcome;
                typedef std::future<DescribeCosCredentialOutcome> DescribeCosCredentialOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DescribeCosCredentialRequest&, DescribeCosCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroySessionResponse> DestroySessionOutcome;
                typedef std::future<DestroySessionOutcome> DestroySessionOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DestroySessionRequest&, DestroySessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroySessionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationBaseInfoResponse> ModifyApplicationBaseInfoOutcome;
                typedef std::future<ModifyApplicationBaseInfoOutcome> ModifyApplicationBaseInfoOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::ModifyApplicationBaseInfoRequest&, ModifyApplicationBaseInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationBaseInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationProjectResponse> ModifyApplicationProjectOutcome;
                typedef std::future<ModifyApplicationProjectOutcome> ModifyApplicationProjectOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::ModifyApplicationProjectRequest&, ModifyApplicationProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationVersionResponse> ModifyApplicationVersionOutcome;
                typedef std::future<ModifyApplicationVersionOutcome> ModifyApplicationVersionOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::ModifyApplicationVersionRequest&, ModifyApplicationVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConcurrentPackageResponse> ModifyConcurrentPackageOutcome;
                typedef std::future<ModifyConcurrentPackageOutcome> ModifyConcurrentPackageOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::ModifyConcurrentPackageRequest&, ModifyConcurrentPackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConcurrentPackageAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMobileApplicationInfoResponse> ModifyMobileApplicationInfoOutcome;
                typedef std::future<ModifyMobileApplicationInfoOutcome> ModifyMobileApplicationInfoOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::ModifyMobileApplicationInfoRequest&, ModifyMobileApplicationInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMobileApplicationInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetConcurrentPackagesResponse> ResetConcurrentPackagesOutcome;
                typedef std::future<ResetConcurrentPackagesOutcome> ResetConcurrentPackagesOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::ResetConcurrentPackagesRequest&, ResetConcurrentPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetConcurrentPackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::SetApplicationVersionOnlineResponse> SetApplicationVersionOnlineOutcome;
                typedef std::future<SetApplicationVersionOnlineOutcome> SetApplicationVersionOnlineOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::SetApplicationVersionOnlineRequest&, SetApplicationVersionOnlineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetApplicationVersionOnlineAsyncHandler;
                typedef Outcome<Core::Error, Model::StartPublishStreamResponse> StartPublishStreamOutcome;
                typedef std::future<StartPublishStreamOutcome> StartPublishStreamOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::StartPublishStreamRequest&, StartPublishStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartPublishStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::StartPublishStreamWithURLResponse> StartPublishStreamWithURLOutcome;
                typedef std::future<StartPublishStreamWithURLOutcome> StartPublishStreamWithURLOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::StartPublishStreamWithURLRequest&, StartPublishStreamWithURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartPublishStreamWithURLAsyncHandler;
                typedef Outcome<Core::Error, Model::StopPublishStreamResponse> StopPublishStreamOutcome;
                typedef std::future<StopPublishStreamOutcome> StopPublishStreamOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::StopPublishStreamRequest&, StopPublishStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopPublishStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindConcurrentPackagesFromProjectResponse> UnbindConcurrentPackagesFromProjectOutcome;
                typedef std::future<UnbindConcurrentPackagesFromProjectOutcome> UnbindConcurrentPackagesFromProjectOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::UnbindConcurrentPackagesFromProjectRequest&, UnbindConcurrentPackagesFromProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindConcurrentPackagesFromProjectAsyncHandler;



                /**
                 *This API is used to request concurrency quota. The timeout period of the API is 20 seconds.
                 * @param req ApplyConcurrentRequest
                 * @return ApplyConcurrentOutcome
                 */
                ApplyConcurrentOutcome ApplyConcurrent(const Model::ApplyConcurrentRequest &request);
                void ApplyConcurrentAsync(const Model::ApplyConcurrentRequest& request, const ApplyConcurrentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyConcurrentOutcomeCallable ApplyConcurrentCallable(const Model::ApplyConcurrentRequest& request);

                /**
                 *This API is used to bind a concurrency pack to a project.
                 * @param req BindConcurrentPackagesToProjectRequest
                 * @return BindConcurrentPackagesToProjectOutcome
                 */
                BindConcurrentPackagesToProjectOutcome BindConcurrentPackagesToProject(const Model::BindConcurrentPackagesToProjectRequest &request);
                void BindConcurrentPackagesToProjectAsync(const Model::BindConcurrentPackagesToProjectRequest& request, const BindConcurrentPackagesToProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindConcurrentPackagesToProjectOutcomeCallable BindConcurrentPackagesToProjectCallable(const Model::BindConcurrentPackagesToProjectRequest& request);

                /**
                 *This API is used to create an application.
                 * @param req CreateApplicationRequest
                 * @return CreateApplicationOutcome
                 */
                CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest &request);
                void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request);

                /**
                 *This API is used to create a cloud application project.
                 * @param req CreateApplicationProjectRequest
                 * @return CreateApplicationProjectOutcome
                 */
                CreateApplicationProjectOutcome CreateApplicationProject(const Model::CreateApplicationProjectRequest &request);
                void CreateApplicationProjectAsync(const Model::CreateApplicationProjectRequest& request, const CreateApplicationProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationProjectOutcomeCallable CreateApplicationProjectCallable(const Model::CreateApplicationProjectRequest& request);

                /**
                 *This API is used to create a cloud application version snapshot.
                 * @param req CreateApplicationSnapshotRequest
                 * @return CreateApplicationSnapshotOutcome
                 */
                CreateApplicationSnapshotOutcome CreateApplicationSnapshot(const Model::CreateApplicationSnapshotRequest &request);
                void CreateApplicationSnapshotAsync(const Model::CreateApplicationSnapshotRequest& request, const CreateApplicationSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationSnapshotOutcomeCallable CreateApplicationSnapshotCallable(const Model::CreateApplicationSnapshotRequest& request);

                /**
                 *This API is used to create a cloud application version.
                 * @param req CreateApplicationVersionRequest
                 * @return CreateApplicationVersionOutcome
                 */
                CreateApplicationVersionOutcome CreateApplicationVersion(const Model::CreateApplicationVersionRequest &request);
                void CreateApplicationVersionAsync(const Model::CreateApplicationVersionRequest& request, const CreateApplicationVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationVersionOutcomeCallable CreateApplicationVersionCallable(const Model::CreateApplicationVersionRequest& request);

                /**
                 *This API is used to create a session. The timeout period of the API is 5 seconds.
                 * @param req CreateSessionRequest
                 * @return CreateSessionOutcome
                 */
                CreateSessionOutcome CreateSession(const Model::CreateSessionRequest &request);
                void CreateSessionAsync(const Model::CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSessionOutcomeCallable CreateSessionCallable(const Model::CreateSessionRequest& request);

                /**
                 *This API is used to delete a cloud application.
                 * @param req DeleteApplicationRequest
                 * @return DeleteApplicationOutcome
                 */
                DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest &request);
                void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request);

                /**
                 *This API is used to delete cloud application projects in batches.
                 * @param req DeleteApplicationProjectsRequest
                 * @return DeleteApplicationProjectsOutcome
                 */
                DeleteApplicationProjectsOutcome DeleteApplicationProjects(const Model::DeleteApplicationProjectsRequest &request);
                void DeleteApplicationProjectsAsync(const Model::DeleteApplicationProjectsRequest& request, const DeleteApplicationProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationProjectsOutcomeCallable DeleteApplicationProjectsCallable(const Model::DeleteApplicationProjectsRequest& request);

                /**
                 *This API is used to delete a cloud application version.
                 * @param req DeleteApplicationVersionRequest
                 * @return DeleteApplicationVersionOutcome
                 */
                DeleteApplicationVersionOutcome DeleteApplicationVersion(const Model::DeleteApplicationVersionRequest &request);
                void DeleteApplicationVersionAsync(const Model::DeleteApplicationVersionRequest& request, const DeleteApplicationVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationVersionOutcomeCallable DeleteApplicationVersionCallable(const Model::DeleteApplicationVersionRequest& request);

                /**
                 *This API is used to query application file information.
                 * @param req DescribeApplicationFileInfoRequest
                 * @return DescribeApplicationFileInfoOutcome
                 */
                DescribeApplicationFileInfoOutcome DescribeApplicationFileInfo(const Model::DescribeApplicationFileInfoRequest &request);
                void DescribeApplicationFileInfoAsync(const Model::DescribeApplicationFileInfoRequest& request, const DescribeApplicationFileInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationFileInfoOutcomeCallable DescribeApplicationFileInfoCallable(const Model::DescribeApplicationFileInfoRequest& request);

                /**
                 *This API is used to query the cloud application list.
                 * @param req DescribeApplicationListRequest
                 * @return DescribeApplicationListOutcome
                 */
                DescribeApplicationListOutcome DescribeApplicationList(const Model::DescribeApplicationListRequest &request);
                void DescribeApplicationListAsync(const Model::DescribeApplicationListRequest& request, const DescribeApplicationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationListOutcomeCallable DescribeApplicationListCallable(const Model::DescribeApplicationListRequest& request);

                /**
                 *This API is used to query the cloud application startup path list.
                 * @param req DescribeApplicationPathListRequest
                 * @return DescribeApplicationPathListOutcome
                 */
                DescribeApplicationPathListOutcome DescribeApplicationPathList(const Model::DescribeApplicationPathListRequest &request);
                void DescribeApplicationPathListAsync(const Model::DescribeApplicationPathListRequest& request, const DescribeApplicationPathListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationPathListOutcomeCallable DescribeApplicationPathListCallable(const Model::DescribeApplicationPathListRequest& request);

                /**
                 *This API is used to obtain the advanced configuration information of a cloud application project.
                 * @param req DescribeApplicationProjectAdvancedConfigRequest
                 * @return DescribeApplicationProjectAdvancedConfigOutcome
                 */
                DescribeApplicationProjectAdvancedConfigOutcome DescribeApplicationProjectAdvancedConfig(const Model::DescribeApplicationProjectAdvancedConfigRequest &request);
                void DescribeApplicationProjectAdvancedConfigAsync(const Model::DescribeApplicationProjectAdvancedConfigRequest& request, const DescribeApplicationProjectAdvancedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationProjectAdvancedConfigOutcomeCallable DescribeApplicationProjectAdvancedConfigCallable(const Model::DescribeApplicationProjectAdvancedConfigRequest& request);

                /**
                 *This API is used to obtain the cloud application project list.
                 * @param req DescribeApplicationProjectsRequest
                 * @return DescribeApplicationProjectsOutcome
                 */
                DescribeApplicationProjectsOutcome DescribeApplicationProjects(const Model::DescribeApplicationProjectsRequest &request);
                void DescribeApplicationProjectsAsync(const Model::DescribeApplicationProjectsRequest& request, const DescribeApplicationProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationProjectsOutcomeCallable DescribeApplicationProjectsCallable(const Model::DescribeApplicationProjectsRequest& request);

                /**
                 *This API is used to query the running status of a cloud application and update status information.
                 * @param req DescribeApplicationStatusRequest
                 * @return DescribeApplicationStatusOutcome
                 */
                DescribeApplicationStatusOutcome DescribeApplicationStatus(const Model::DescribeApplicationStatusRequest &request);
                void DescribeApplicationStatusAsync(const Model::DescribeApplicationStatusRequest& request, const DescribeApplicationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationStatusOutcomeCallable DescribeApplicationStatusCallable(const Model::DescribeApplicationStatusRequest& request);

                /**
                 *This API is used to query the version information of a cloud application.
                 * @param req DescribeApplicationVersionRequest
                 * @return DescribeApplicationVersionOutcome
                 */
                DescribeApplicationVersionOutcome DescribeApplicationVersion(const Model::DescribeApplicationVersionRequest &request);
                void DescribeApplicationVersionAsync(const Model::DescribeApplicationVersionRequest& request, const DescribeApplicationVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationVersionOutcomeCallable DescribeApplicationVersionCallable(const Model::DescribeApplicationVersionRequest& request);

                /**
                 *This API is used to obtain the concurrency count.
                 * @param req DescribeConcurrentCountRequest
                 * @return DescribeConcurrentCountOutcome
                 */
                DescribeConcurrentCountOutcome DescribeConcurrentCount(const Model::DescribeConcurrentCountRequest &request);
                void DescribeConcurrentCountAsync(const Model::DescribeConcurrentCountRequest& request, const DescribeConcurrentCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConcurrentCountOutcomeCallable DescribeConcurrentCountCallable(const Model::DescribeConcurrentCountRequest& request);

                /**
                 *This API is used to obtain the cloud application concurrency pack list.
                 * @param req DescribeConcurrentPackagesRequest
                 * @return DescribeConcurrentPackagesOutcome
                 */
                DescribeConcurrentPackagesOutcome DescribeConcurrentPackages(const Model::DescribeConcurrentPackagesRequest &request);
                void DescribeConcurrentPackagesAsync(const Model::DescribeConcurrentPackagesRequest& request, const DescribeConcurrentPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConcurrentPackagesOutcomeCallable DescribeConcurrentPackagesCallable(const Model::DescribeConcurrentPackagesRequest& request);

                /**
                 *This API is used to query the concurrency overview.
                 * @param req DescribeConcurrentSummaryRequest
                 * @return DescribeConcurrentSummaryOutcome
                 */
                DescribeConcurrentSummaryOutcome DescribeConcurrentSummary(const Model::DescribeConcurrentSummaryRequest &request);
                void DescribeConcurrentSummaryAsync(const Model::DescribeConcurrentSummaryRequest& request, const DescribeConcurrentSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConcurrentSummaryOutcomeCallable DescribeConcurrentSummaryCallable(const Model::DescribeConcurrentSummaryRequest& request);

                /**
                 *This API is used to query COS key information.
                 * @param req DescribeCosCredentialRequest
                 * @return DescribeCosCredentialOutcome
                 */
                DescribeCosCredentialOutcome DescribeCosCredential(const Model::DescribeCosCredentialRequest &request);
                void DescribeCosCredentialAsync(const Model::DescribeCosCredentialRequest& request, const DescribeCosCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosCredentialOutcomeCallable DescribeCosCredentialCallable(const Model::DescribeCosCredentialRequest& request);

                /**
                 *This API is used to terminate a session. If cloud-based streaming has been enabled for this session, the cloud-based streaming will end upon session termination.
                 * @param req DestroySessionRequest
                 * @return DestroySessionOutcome
                 */
                DestroySessionOutcome DestroySession(const Model::DestroySessionRequest &request);
                void DestroySessionAsync(const Model::DestroySessionRequest& request, const DestroySessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroySessionOutcomeCallable DestroySessionCallable(const Model::DestroySessionRequest& request);

                /**
                 *This API is used to modify basic information of a cloud application.
                 * @param req ModifyApplicationBaseInfoRequest
                 * @return ModifyApplicationBaseInfoOutcome
                 */
                ModifyApplicationBaseInfoOutcome ModifyApplicationBaseInfo(const Model::ModifyApplicationBaseInfoRequest &request);
                void ModifyApplicationBaseInfoAsync(const Model::ModifyApplicationBaseInfoRequest& request, const ModifyApplicationBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationBaseInfoOutcomeCallable ModifyApplicationBaseInfoCallable(const Model::ModifyApplicationBaseInfoRequest& request);

                /**
                 *This API is used to modify a cloud application project.
                 * @param req ModifyApplicationProjectRequest
                 * @return ModifyApplicationProjectOutcome
                 */
                ModifyApplicationProjectOutcome ModifyApplicationProject(const Model::ModifyApplicationProjectRequest &request);
                void ModifyApplicationProjectAsync(const Model::ModifyApplicationProjectRequest& request, const ModifyApplicationProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationProjectOutcomeCallable ModifyApplicationProjectCallable(const Model::ModifyApplicationProjectRequest& request);

                /**
                 *This API is used to modify the version information of a cloud application.
                 * @param req ModifyApplicationVersionRequest
                 * @return ModifyApplicationVersionOutcome
                 */
                ModifyApplicationVersionOutcome ModifyApplicationVersion(const Model::ModifyApplicationVersionRequest &request);
                void ModifyApplicationVersionAsync(const Model::ModifyApplicationVersionRequest& request, const ModifyApplicationVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationVersionOutcomeCallable ModifyApplicationVersionCallable(const Model::ModifyApplicationVersionRequest& request);

                /**
                 *This API is used to modify a cloud application concurrency pack.
                 * @param req ModifyConcurrentPackageRequest
                 * @return ModifyConcurrentPackageOutcome
                 */
                ModifyConcurrentPackageOutcome ModifyConcurrentPackage(const Model::ModifyConcurrentPackageRequest &request);
                void ModifyConcurrentPackageAsync(const Model::ModifyConcurrentPackageRequest& request, const ModifyConcurrentPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConcurrentPackageOutcomeCallable ModifyConcurrentPackageCallable(const Model::ModifyConcurrentPackageRequest& request);

                /**
                 *This API is used to modify the mobile application data.
                 * @param req ModifyMobileApplicationInfoRequest
                 * @return ModifyMobileApplicationInfoOutcome
                 */
                ModifyMobileApplicationInfoOutcome ModifyMobileApplicationInfo(const Model::ModifyMobileApplicationInfoRequest &request);
                void ModifyMobileApplicationInfoAsync(const Model::ModifyMobileApplicationInfoRequest& request, const ModifyMobileApplicationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMobileApplicationInfoOutcomeCallable ModifyMobileApplicationInfoCallable(const Model::ModifyMobileApplicationInfoRequest& request);

                /**
                 *This API is used to reset a concurrency pack and disconnect all user connections.
                 * @param req ResetConcurrentPackagesRequest
                 * @return ResetConcurrentPackagesOutcome
                 */
                ResetConcurrentPackagesOutcome ResetConcurrentPackages(const Model::ResetConcurrentPackagesRequest &request);
                void ResetConcurrentPackagesAsync(const Model::ResetConcurrentPackagesRequest& request, const ResetConcurrentPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetConcurrentPackagesOutcomeCallable ResetConcurrentPackagesCallable(const Model::ResetConcurrentPackagesRequest& request);

                /**
                 *This API is used to launch an application version.
                 * @param req SetApplicationVersionOnlineRequest
                 * @return SetApplicationVersionOnlineOutcome
                 */
                SetApplicationVersionOnlineOutcome SetApplicationVersionOnline(const Model::SetApplicationVersionOnlineRequest &request);
                void SetApplicationVersionOnlineAsync(const Model::SetApplicationVersionOnlineRequest& request, const SetApplicationVersionOnlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetApplicationVersionOnlineOutcomeCallable SetApplicationVersionOnlineCallable(const Model::SetApplicationVersionOnlineRequest& request);

                /**
                 *This API is used to start pushing your cloud application's video streams in real time to CSS. The codec for the streaming is automatically selected based on the client's (SDK) capabilities, with a default order of H.265, H.264, VP8, and VP9.
                 * @param req StartPublishStreamRequest
                 * @return StartPublishStreamOutcome
                 */
                StartPublishStreamOutcome StartPublishStream(const Model::StartPublishStreamRequest &request);
                void StartPublishStreamAsync(const Model::StartPublishStreamRequest& request, const StartPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartPublishStreamOutcomeCallable StartPublishStreamCallable(const Model::StartPublishStreamRequest& request);

                /**
                 *This API is used to start pushing your cloud application's video streams to a specified URL. The codec for the streaming is automatically selected based on the client's (SDK) capabilities, with a default order of H.265, H.264, VP8, and VP9. This streaming method will be billed separately. For details about the billing method, see [Charging for Streaming to Specified URL](https://intl.cloud.tencent.com/document/product/1547/72168?from_cn_redirect=1#98ac188a-d122-4caf-88be-05268ecefdf6).
                 * @param req StartPublishStreamWithURLRequest
                 * @return StartPublishStreamWithURLOutcome
                 */
                StartPublishStreamWithURLOutcome StartPublishStreamWithURL(const Model::StartPublishStreamWithURLRequest &request);
                void StartPublishStreamWithURLAsync(const Model::StartPublishStreamWithURLRequest& request, const StartPublishStreamWithURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartPublishStreamWithURLOutcomeCallable StartPublishStreamWithURLCallable(const Model::StartPublishStreamWithURLRequest& request);

                /**
                 *This API is used to stop pushing streams.
                 * @param req StopPublishStreamRequest
                 * @return StopPublishStreamOutcome
                 */
                StopPublishStreamOutcome StopPublishStream(const Model::StopPublishStreamRequest &request);
                void StopPublishStreamAsync(const Model::StopPublishStreamRequest& request, const StopPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopPublishStreamOutcomeCallable StopPublishStreamCallable(const Model::StopPublishStreamRequest& request);

                /**
                 *This API is used to unbind a concurrency pack from a project.
                 * @param req UnbindConcurrentPackagesFromProjectRequest
                 * @return UnbindConcurrentPackagesFromProjectOutcome
                 */
                UnbindConcurrentPackagesFromProjectOutcome UnbindConcurrentPackagesFromProject(const Model::UnbindConcurrentPackagesFromProjectRequest &request);
                void UnbindConcurrentPackagesFromProjectAsync(const Model::UnbindConcurrentPackagesFromProjectRequest& request, const UnbindConcurrentPackagesFromProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindConcurrentPackagesFromProjectOutcomeCallable UnbindConcurrentPackagesFromProjectCallable(const Model::UnbindConcurrentPackagesFromProjectRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_CARCLIENT_H_
