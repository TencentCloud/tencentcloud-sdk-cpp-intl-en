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

#ifndef TENCENTCLOUD_TEM_V20210701_TEMCLIENT_H_
#define TENCENTCLOUD_TEM_V20210701_TEMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tem/v20210701/model/CreateApplicationRequest.h>
#include <tencentcloud/tem/v20210701/model/CreateApplicationResponse.h>
#include <tencentcloud/tem/v20210701/model/CreateApplicationAutoscalerRequest.h>
#include <tencentcloud/tem/v20210701/model/CreateApplicationAutoscalerResponse.h>
#include <tencentcloud/tem/v20210701/model/CreateApplicationServiceRequest.h>
#include <tencentcloud/tem/v20210701/model/CreateApplicationServiceResponse.h>
#include <tencentcloud/tem/v20210701/model/CreateConfigDataRequest.h>
#include <tencentcloud/tem/v20210701/model/CreateConfigDataResponse.h>
#include <tencentcloud/tem/v20210701/model/CreateCosTokenRequest.h>
#include <tencentcloud/tem/v20210701/model/CreateCosTokenResponse.h>
#include <tencentcloud/tem/v20210701/model/CreateEnvironmentRequest.h>
#include <tencentcloud/tem/v20210701/model/CreateEnvironmentResponse.h>
#include <tencentcloud/tem/v20210701/model/CreateLogConfigRequest.h>
#include <tencentcloud/tem/v20210701/model/CreateLogConfigResponse.h>
#include <tencentcloud/tem/v20210701/model/CreateResourceRequest.h>
#include <tencentcloud/tem/v20210701/model/CreateResourceResponse.h>
#include <tencentcloud/tem/v20210701/model/DeleteApplicationRequest.h>
#include <tencentcloud/tem/v20210701/model/DeleteApplicationResponse.h>
#include <tencentcloud/tem/v20210701/model/DeleteApplicationAutoscalerRequest.h>
#include <tencentcloud/tem/v20210701/model/DeleteApplicationAutoscalerResponse.h>
#include <tencentcloud/tem/v20210701/model/DeleteApplicationServiceRequest.h>
#include <tencentcloud/tem/v20210701/model/DeleteApplicationServiceResponse.h>
#include <tencentcloud/tem/v20210701/model/DeleteIngressRequest.h>
#include <tencentcloud/tem/v20210701/model/DeleteIngressResponse.h>
#include <tencentcloud/tem/v20210701/model/DeployApplicationRequest.h>
#include <tencentcloud/tem/v20210701/model/DeployApplicationResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationAutoscalerListRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationAutoscalerListResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationInfoRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationInfoResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationPodsRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationPodsResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationServiceListRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationServiceListResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationsRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationsResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationsStatusRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationsStatusResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeConfigDataRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeConfigDataResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeConfigDataListRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeConfigDataListResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeEnvironmentRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeEnvironmentResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeEnvironmentStatusRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeEnvironmentStatusResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeEnvironmentsRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeEnvironmentsResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeIngressRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeIngressResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeIngressesRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeIngressesResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeLogConfigRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeLogConfigResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribePagedLogConfigListRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribePagedLogConfigListResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeRelatedIngressesRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeRelatedIngressesResponse.h>
#include <tencentcloud/tem/v20210701/model/DestroyConfigDataRequest.h>
#include <tencentcloud/tem/v20210701/model/DestroyConfigDataResponse.h>
#include <tencentcloud/tem/v20210701/model/DestroyEnvironmentRequest.h>
#include <tencentcloud/tem/v20210701/model/DestroyEnvironmentResponse.h>
#include <tencentcloud/tem/v20210701/model/DestroyLogConfigRequest.h>
#include <tencentcloud/tem/v20210701/model/DestroyLogConfigResponse.h>
#include <tencentcloud/tem/v20210701/model/DisableApplicationAutoscalerRequest.h>
#include <tencentcloud/tem/v20210701/model/DisableApplicationAutoscalerResponse.h>
#include <tencentcloud/tem/v20210701/model/EnableApplicationAutoscalerRequest.h>
#include <tencentcloud/tem/v20210701/model/EnableApplicationAutoscalerResponse.h>
#include <tencentcloud/tem/v20210701/model/GenerateApplicationPackageDownloadUrlRequest.h>
#include <tencentcloud/tem/v20210701/model/GenerateApplicationPackageDownloadUrlResponse.h>
#include <tencentcloud/tem/v20210701/model/ModifyApplicationAutoscalerRequest.h>
#include <tencentcloud/tem/v20210701/model/ModifyApplicationAutoscalerResponse.h>
#include <tencentcloud/tem/v20210701/model/ModifyApplicationInfoRequest.h>
#include <tencentcloud/tem/v20210701/model/ModifyApplicationInfoResponse.h>
#include <tencentcloud/tem/v20210701/model/ModifyApplicationServiceRequest.h>
#include <tencentcloud/tem/v20210701/model/ModifyApplicationServiceResponse.h>
#include <tencentcloud/tem/v20210701/model/ModifyConfigDataRequest.h>
#include <tencentcloud/tem/v20210701/model/ModifyConfigDataResponse.h>
#include <tencentcloud/tem/v20210701/model/ModifyEnvironmentRequest.h>
#include <tencentcloud/tem/v20210701/model/ModifyEnvironmentResponse.h>
#include <tencentcloud/tem/v20210701/model/ModifyIngressRequest.h>
#include <tencentcloud/tem/v20210701/model/ModifyIngressResponse.h>
#include <tencentcloud/tem/v20210701/model/ModifyLogConfigRequest.h>
#include <tencentcloud/tem/v20210701/model/ModifyLogConfigResponse.h>
#include <tencentcloud/tem/v20210701/model/RestartApplicationRequest.h>
#include <tencentcloud/tem/v20210701/model/RestartApplicationResponse.h>
#include <tencentcloud/tem/v20210701/model/RestartApplicationPodRequest.h>
#include <tencentcloud/tem/v20210701/model/RestartApplicationPodResponse.h>
#include <tencentcloud/tem/v20210701/model/RollingUpdateApplicationByVersionRequest.h>
#include <tencentcloud/tem/v20210701/model/RollingUpdateApplicationByVersionResponse.h>
#include <tencentcloud/tem/v20210701/model/StopApplicationRequest.h>
#include <tencentcloud/tem/v20210701/model/StopApplicationResponse.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            class TemClient : public AbstractClient
            {
            public:
                TemClient(const Credential &credential, const std::string &region);
                TemClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateApplicationResponse> CreateApplicationOutcome;
                typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateApplicationRequest&, CreateApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationAutoscalerResponse> CreateApplicationAutoscalerOutcome;
                typedef std::future<CreateApplicationAutoscalerOutcome> CreateApplicationAutoscalerOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateApplicationAutoscalerRequest&, CreateApplicationAutoscalerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAutoscalerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationServiceResponse> CreateApplicationServiceOutcome;
                typedef std::future<CreateApplicationServiceOutcome> CreateApplicationServiceOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateApplicationServiceRequest&, CreateApplicationServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConfigDataResponse> CreateConfigDataOutcome;
                typedef std::future<CreateConfigDataOutcome> CreateConfigDataOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateConfigDataRequest&, CreateConfigDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigDataAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCosTokenResponse> CreateCosTokenOutcome;
                typedef std::future<CreateCosTokenOutcome> CreateCosTokenOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateCosTokenRequest&, CreateCosTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCosTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEnvironmentResponse> CreateEnvironmentOutcome;
                typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateEnvironmentRequest&, CreateEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLogConfigResponse> CreateLogConfigOutcome;
                typedef std::future<CreateLogConfigOutcome> CreateLogConfigOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateLogConfigRequest&, CreateLogConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateResourceResponse> CreateResourceOutcome;
                typedef std::future<CreateResourceOutcome> CreateResourceOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateResourceRequest&, CreateResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationResponse> DeleteApplicationOutcome;
                typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DeleteApplicationRequest&, DeleteApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationAutoscalerResponse> DeleteApplicationAutoscalerOutcome;
                typedef std::future<DeleteApplicationAutoscalerOutcome> DeleteApplicationAutoscalerOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DeleteApplicationAutoscalerRequest&, DeleteApplicationAutoscalerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAutoscalerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationServiceResponse> DeleteApplicationServiceOutcome;
                typedef std::future<DeleteApplicationServiceOutcome> DeleteApplicationServiceOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DeleteApplicationServiceRequest&, DeleteApplicationServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIngressResponse> DeleteIngressOutcome;
                typedef std::future<DeleteIngressOutcome> DeleteIngressOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DeleteIngressRequest&, DeleteIngressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIngressAsyncHandler;
                typedef Outcome<Core::Error, Model::DeployApplicationResponse> DeployApplicationOutcome;
                typedef std::future<DeployApplicationOutcome> DeployApplicationOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DeployApplicationRequest&, DeployApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationAutoscalerListResponse> DescribeApplicationAutoscalerListOutcome;
                typedef std::future<DescribeApplicationAutoscalerListOutcome> DescribeApplicationAutoscalerListOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeApplicationAutoscalerListRequest&, DescribeApplicationAutoscalerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationAutoscalerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationInfoResponse> DescribeApplicationInfoOutcome;
                typedef std::future<DescribeApplicationInfoOutcome> DescribeApplicationInfoOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeApplicationInfoRequest&, DescribeApplicationInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationPodsResponse> DescribeApplicationPodsOutcome;
                typedef std::future<DescribeApplicationPodsOutcome> DescribeApplicationPodsOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeApplicationPodsRequest&, DescribeApplicationPodsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationPodsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationServiceListResponse> DescribeApplicationServiceListOutcome;
                typedef std::future<DescribeApplicationServiceListOutcome> DescribeApplicationServiceListOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeApplicationServiceListRequest&, DescribeApplicationServiceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationServiceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationsResponse> DescribeApplicationsOutcome;
                typedef std::future<DescribeApplicationsOutcome> DescribeApplicationsOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeApplicationsRequest&, DescribeApplicationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationsStatusResponse> DescribeApplicationsStatusOutcome;
                typedef std::future<DescribeApplicationsStatusOutcome> DescribeApplicationsStatusOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeApplicationsStatusRequest&, DescribeApplicationsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigDataResponse> DescribeConfigDataOutcome;
                typedef std::future<DescribeConfigDataOutcome> DescribeConfigDataOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeConfigDataRequest&, DescribeConfigDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigDataListResponse> DescribeConfigDataListOutcome;
                typedef std::future<DescribeConfigDataListOutcome> DescribeConfigDataListOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeConfigDataListRequest&, DescribeConfigDataListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigDataListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvironmentResponse> DescribeEnvironmentOutcome;
                typedef std::future<DescribeEnvironmentOutcome> DescribeEnvironmentOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeEnvironmentRequest&, DescribeEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvironmentStatusResponse> DescribeEnvironmentStatusOutcome;
                typedef std::future<DescribeEnvironmentStatusOutcome> DescribeEnvironmentStatusOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeEnvironmentStatusRequest&, DescribeEnvironmentStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvironmentStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvironmentsResponse> DescribeEnvironmentsOutcome;
                typedef std::future<DescribeEnvironmentsOutcome> DescribeEnvironmentsOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeEnvironmentsRequest&, DescribeEnvironmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvironmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIngressResponse> DescribeIngressOutcome;
                typedef std::future<DescribeIngressOutcome> DescribeIngressOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeIngressRequest&, DescribeIngressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIngressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIngressesResponse> DescribeIngressesOutcome;
                typedef std::future<DescribeIngressesOutcome> DescribeIngressesOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeIngressesRequest&, DescribeIngressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIngressesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogConfigResponse> DescribeLogConfigOutcome;
                typedef std::future<DescribeLogConfigOutcome> DescribeLogConfigOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeLogConfigRequest&, DescribeLogConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePagedLogConfigListResponse> DescribePagedLogConfigListOutcome;
                typedef std::future<DescribePagedLogConfigListOutcome> DescribePagedLogConfigListOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribePagedLogConfigListRequest&, DescribePagedLogConfigListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePagedLogConfigListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRelatedIngressesResponse> DescribeRelatedIngressesOutcome;
                typedef std::future<DescribeRelatedIngressesOutcome> DescribeRelatedIngressesOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeRelatedIngressesRequest&, DescribeRelatedIngressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRelatedIngressesAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyConfigDataResponse> DestroyConfigDataOutcome;
                typedef std::future<DestroyConfigDataOutcome> DestroyConfigDataOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DestroyConfigDataRequest&, DestroyConfigDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyConfigDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyEnvironmentResponse> DestroyEnvironmentOutcome;
                typedef std::future<DestroyEnvironmentOutcome> DestroyEnvironmentOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DestroyEnvironmentRequest&, DestroyEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyLogConfigResponse> DestroyLogConfigOutcome;
                typedef std::future<DestroyLogConfigOutcome> DestroyLogConfigOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DestroyLogConfigRequest&, DestroyLogConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyLogConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableApplicationAutoscalerResponse> DisableApplicationAutoscalerOutcome;
                typedef std::future<DisableApplicationAutoscalerOutcome> DisableApplicationAutoscalerOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DisableApplicationAutoscalerRequest&, DisableApplicationAutoscalerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableApplicationAutoscalerAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableApplicationAutoscalerResponse> EnableApplicationAutoscalerOutcome;
                typedef std::future<EnableApplicationAutoscalerOutcome> EnableApplicationAutoscalerOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::EnableApplicationAutoscalerRequest&, EnableApplicationAutoscalerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableApplicationAutoscalerAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateApplicationPackageDownloadUrlResponse> GenerateApplicationPackageDownloadUrlOutcome;
                typedef std::future<GenerateApplicationPackageDownloadUrlOutcome> GenerateApplicationPackageDownloadUrlOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::GenerateApplicationPackageDownloadUrlRequest&, GenerateApplicationPackageDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateApplicationPackageDownloadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationAutoscalerResponse> ModifyApplicationAutoscalerOutcome;
                typedef std::future<ModifyApplicationAutoscalerOutcome> ModifyApplicationAutoscalerOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyApplicationAutoscalerRequest&, ModifyApplicationAutoscalerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationAutoscalerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationInfoResponse> ModifyApplicationInfoOutcome;
                typedef std::future<ModifyApplicationInfoOutcome> ModifyApplicationInfoOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyApplicationInfoRequest&, ModifyApplicationInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationServiceResponse> ModifyApplicationServiceOutcome;
                typedef std::future<ModifyApplicationServiceOutcome> ModifyApplicationServiceOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyApplicationServiceRequest&, ModifyApplicationServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConfigDataResponse> ModifyConfigDataOutcome;
                typedef std::future<ModifyConfigDataOutcome> ModifyConfigDataOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyConfigDataRequest&, ModifyConfigDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConfigDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEnvironmentResponse> ModifyEnvironmentOutcome;
                typedef std::future<ModifyEnvironmentOutcome> ModifyEnvironmentOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyEnvironmentRequest&, ModifyEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIngressResponse> ModifyIngressOutcome;
                typedef std::future<ModifyIngressOutcome> ModifyIngressOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyIngressRequest&, ModifyIngressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIngressAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLogConfigResponse> ModifyLogConfigOutcome;
                typedef std::future<ModifyLogConfigOutcome> ModifyLogConfigOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyLogConfigRequest&, ModifyLogConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartApplicationResponse> RestartApplicationOutcome;
                typedef std::future<RestartApplicationOutcome> RestartApplicationOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::RestartApplicationRequest&, RestartApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartApplicationPodResponse> RestartApplicationPodOutcome;
                typedef std::future<RestartApplicationPodOutcome> RestartApplicationPodOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::RestartApplicationPodRequest&, RestartApplicationPodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartApplicationPodAsyncHandler;
                typedef Outcome<Core::Error, Model::RollingUpdateApplicationByVersionResponse> RollingUpdateApplicationByVersionOutcome;
                typedef std::future<RollingUpdateApplicationByVersionOutcome> RollingUpdateApplicationByVersionOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::RollingUpdateApplicationByVersionRequest&, RollingUpdateApplicationByVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollingUpdateApplicationByVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::StopApplicationResponse> StopApplicationOutcome;
                typedef std::future<StopApplicationOutcome> StopApplicationOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::StopApplicationRequest&, StopApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopApplicationAsyncHandler;



                /**
                 *This API is used to create an application.
                 * @param req CreateApplicationRequest
                 * @return CreateApplicationOutcome
                 */
                CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest &request);
                void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request);

                /**
                 *This API is used to create a scaling rule.
                 * @param req CreateApplicationAutoscalerRequest
                 * @return CreateApplicationAutoscalerOutcome
                 */
                CreateApplicationAutoscalerOutcome CreateApplicationAutoscaler(const Model::CreateApplicationAutoscalerRequest &request);
                void CreateApplicationAutoscalerAsync(const Model::CreateApplicationAutoscalerRequest& request, const CreateApplicationAutoscalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationAutoscalerOutcomeCallable CreateApplicationAutoscalerCallable(const Model::CreateApplicationAutoscalerRequest& request);

                /**
                 *This API is used to create an access policy. 
                 * @param req CreateApplicationServiceRequest
                 * @return CreateApplicationServiceOutcome
                 */
                CreateApplicationServiceOutcome CreateApplicationService(const Model::CreateApplicationServiceRequest &request);
                void CreateApplicationServiceAsync(const Model::CreateApplicationServiceRequest& request, const CreateApplicationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationServiceOutcomeCallable CreateApplicationServiceCallable(const Model::CreateApplicationServiceRequest& request);

                /**
                 *This API is used to create a configuration.
                 * @param req CreateConfigDataRequest
                 * @return CreateConfigDataOutcome
                 */
                CreateConfigDataOutcome CreateConfigData(const Model::CreateConfigDataRequest &request);
                void CreateConfigDataAsync(const Model::CreateConfigDataRequest& request, const CreateConfigDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConfigDataOutcomeCallable CreateConfigDataCallable(const Model::CreateConfigDataRequest& request);

                /**
                 *This API is used to generate a COS temporary key.
                 * @param req CreateCosTokenRequest
                 * @return CreateCosTokenOutcome
                 */
                CreateCosTokenOutcome CreateCosToken(const Model::CreateCosTokenRequest &request);
                void CreateCosTokenAsync(const Model::CreateCosTokenRequest& request, const CreateCosTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCosTokenOutcomeCallable CreateCosTokenCallable(const Model::CreateCosTokenRequest& request);

                /**
                 *This API is used to create an environment.
                 * @param req CreateEnvironmentRequest
                 * @return CreateEnvironmentOutcome
                 */
                CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest &request);
                void CreateEnvironmentAsync(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const Model::CreateEnvironmentRequest& request);

                /**
                 *This API is used to create a log collecting configuration.
                 * @param req CreateLogConfigRequest
                 * @return CreateLogConfigOutcome
                 */
                CreateLogConfigOutcome CreateLogConfig(const Model::CreateLogConfigRequest &request);
                void CreateLogConfigAsync(const Model::CreateLogConfigRequest& request, const CreateLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLogConfigOutcomeCallable CreateLogConfigCallable(const Model::CreateLogConfigRequest& request);

                /**
                 *This API is used to bind a cloud resource.
                 * @param req CreateResourceRequest
                 * @return CreateResourceOutcome
                 */
                CreateResourceOutcome CreateResource(const Model::CreateResourceRequest &request);
                void CreateResourceAsync(const Model::CreateResourceRequest& request, const CreateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateResourceOutcomeCallable CreateResourceCallable(const Model::CreateResourceRequest& request);

                /**
                 *This API is used to delete an application.
  - Stop running the current application
  - Delete resources related to the application
  - Delete the application
                 * @param req DeleteApplicationRequest
                 * @return DeleteApplicationOutcome
                 */
                DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest &request);
                void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request);

                /**
                 *This API is used to delete a scaling rule.
                 * @param req DeleteApplicationAutoscalerRequest
                 * @return DeleteApplicationAutoscalerOutcome
                 */
                DeleteApplicationAutoscalerOutcome DeleteApplicationAutoscaler(const Model::DeleteApplicationAutoscalerRequest &request);
                void DeleteApplicationAutoscalerAsync(const Model::DeleteApplicationAutoscalerRequest& request, const DeleteApplicationAutoscalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationAutoscalerOutcomeCallable DeleteApplicationAutoscalerCallable(const Model::DeleteApplicationAutoscalerRequest& request);

                /**
                 *This API is used to delete an access policy.
                 * @param req DeleteApplicationServiceRequest
                 * @return DeleteApplicationServiceOutcome
                 */
                DeleteApplicationServiceOutcome DeleteApplicationService(const Model::DeleteApplicationServiceRequest &request);
                void DeleteApplicationServiceAsync(const Model::DeleteApplicationServiceRequest& request, const DeleteApplicationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationServiceOutcomeCallable DeleteApplicationServiceCallable(const Model::DeleteApplicationServiceRequest& request);

                /**
                 *This API is used to delete an ingress rule.
                 * @param req DeleteIngressRequest
                 * @return DeleteIngressOutcome
                 */
                DeleteIngressOutcome DeleteIngress(const Model::DeleteIngressRequest &request);
                void DeleteIngressAsync(const Model::DeleteIngressRequest& request, const DeleteIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIngressOutcomeCallable DeleteIngressCallable(const Model::DeleteIngressRequest& request);

                /**
                 *This API is used to deploy an application.
                 * @param req DeployApplicationRequest
                 * @return DeployApplicationOutcome
                 */
                DeployApplicationOutcome DeployApplication(const Model::DeployApplicationRequest &request);
                void DeployApplicationAsync(const Model::DeployApplicationRequest& request, const DeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeployApplicationOutcomeCallable DeployApplicationCallable(const Model::DeployApplicationRequest& request);

                /**
                 *This API is used to query the scaling rules of an application.
                 * @param req DescribeApplicationAutoscalerListRequest
                 * @return DescribeApplicationAutoscalerListOutcome
                 */
                DescribeApplicationAutoscalerListOutcome DescribeApplicationAutoscalerList(const Model::DescribeApplicationAutoscalerListRequest &request);
                void DescribeApplicationAutoscalerListAsync(const Model::DescribeApplicationAutoscalerListRequest& request, const DescribeApplicationAutoscalerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationAutoscalerListOutcomeCallable DescribeApplicationAutoscalerListCallable(const Model::DescribeApplicationAutoscalerListRequest& request);

                /**
                 *This API is used to check the basic information of an application.
                 * @param req DescribeApplicationInfoRequest
                 * @return DescribeApplicationInfoOutcome
                 */
                DescribeApplicationInfoOutcome DescribeApplicationInfo(const Model::DescribeApplicationInfoRequest &request);
                void DescribeApplicationInfoAsync(const Model::DescribeApplicationInfoRequest& request, const DescribeApplicationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationInfoOutcomeCallable DescribeApplicationInfoCallable(const Model::DescribeApplicationInfoRequest& request);

                /**
                 *This API is used to get the list of application pods.
                 * @param req DescribeApplicationPodsRequest
                 * @return DescribeApplicationPodsOutcome
                 */
                DescribeApplicationPodsOutcome DescribeApplicationPods(const Model::DescribeApplicationPodsRequest &request);
                void DescribeApplicationPodsAsync(const Model::DescribeApplicationPodsRequest& request, const DescribeApplicationPodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationPodsOutcomeCallable DescribeApplicationPodsCallable(const Model::DescribeApplicationPodsRequest& request);

                /**
                 *This API is used to query the list of access policies.
                 * @param req DescribeApplicationServiceListRequest
                 * @return DescribeApplicationServiceListOutcome
                 */
                DescribeApplicationServiceListOutcome DescribeApplicationServiceList(const Model::DescribeApplicationServiceListRequest &request);
                void DescribeApplicationServiceListAsync(const Model::DescribeApplicationServiceListRequest& request, const DescribeApplicationServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationServiceListOutcomeCallable DescribeApplicationServiceListCallable(const Model::DescribeApplicationServiceListRequest& request);

                /**
                 *This API is to query the list of running applications.
                 * @param req DescribeApplicationsRequest
                 * @return DescribeApplicationsOutcome
                 */
                DescribeApplicationsOutcome DescribeApplications(const Model::DescribeApplicationsRequest &request);
                void DescribeApplicationsAsync(const Model::DescribeApplicationsRequest& request, const DescribeApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationsOutcomeCallable DescribeApplicationsCallable(const Model::DescribeApplicationsRequest& request);

                /**
                 *This API is used to query the status of all applications in an envrionment.
                 * @param req DescribeApplicationsStatusRequest
                 * @return DescribeApplicationsStatusOutcome
                 */
                DescribeApplicationsStatusOutcome DescribeApplicationsStatus(const Model::DescribeApplicationsStatusRequest &request);
                void DescribeApplicationsStatusAsync(const Model::DescribeApplicationsStatusRequest& request, const DescribeApplicationsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationsStatusOutcomeCallable DescribeApplicationsStatusCallable(const Model::DescribeApplicationsStatusRequest& request);

                /**
                 *This API is used to query details of a configuration.
                 * @param req DescribeConfigDataRequest
                 * @return DescribeConfigDataOutcome
                 */
                DescribeConfigDataOutcome DescribeConfigData(const Model::DescribeConfigDataRequest &request);
                void DescribeConfigDataAsync(const Model::DescribeConfigDataRequest& request, const DescribeConfigDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigDataOutcomeCallable DescribeConfigDataCallable(const Model::DescribeConfigDataRequest& request);

                /**
                 *This API is used to query the list of configurations.
                 * @param req DescribeConfigDataListRequest
                 * @return DescribeConfigDataListOutcome
                 */
                DescribeConfigDataListOutcome DescribeConfigDataList(const Model::DescribeConfigDataListRequest &request);
                void DescribeConfigDataListAsync(const Model::DescribeConfigDataListRequest& request, const DescribeConfigDataListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigDataListOutcomeCallable DescribeConfigDataListCallable(const Model::DescribeConfigDataListRequest& request);

                /**
                 *This API is used to obtain the basic information of an environment.
                 * @param req DescribeEnvironmentRequest
                 * @return DescribeEnvironmentOutcome
                 */
                DescribeEnvironmentOutcome DescribeEnvironment(const Model::DescribeEnvironmentRequest &request);
                void DescribeEnvironmentAsync(const Model::DescribeEnvironmentRequest& request, const DescribeEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvironmentOutcomeCallable DescribeEnvironmentCallable(const Model::DescribeEnvironmentRequest& request);

                /**
                 *This API is used to obtain the environment status.
                 * @param req DescribeEnvironmentStatusRequest
                 * @return DescribeEnvironmentStatusOutcome
                 */
                DescribeEnvironmentStatusOutcome DescribeEnvironmentStatus(const Model::DescribeEnvironmentStatusRequest &request);
                void DescribeEnvironmentStatusAsync(const Model::DescribeEnvironmentStatusRequest& request, const DescribeEnvironmentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvironmentStatusOutcomeCallable DescribeEnvironmentStatusCallable(const Model::DescribeEnvironmentStatusRequest& request);

                /**
                 *This API is used to obtain the list of environments. 
                 * @param req DescribeEnvironmentsRequest
                 * @return DescribeEnvironmentsOutcome
                 */
                DescribeEnvironmentsOutcome DescribeEnvironments(const Model::DescribeEnvironmentsRequest &request);
                void DescribeEnvironmentsAsync(const Model::DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvironmentsOutcomeCallable DescribeEnvironmentsCallable(const Model::DescribeEnvironmentsRequest& request);

                /**
                 *This API is used to query an ingress rule.
                 * @param req DescribeIngressRequest
                 * @return DescribeIngressOutcome
                 */
                DescribeIngressOutcome DescribeIngress(const Model::DescribeIngressRequest &request);
                void DescribeIngressAsync(const Model::DescribeIngressRequest& request, const DescribeIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIngressOutcomeCallable DescribeIngressCallable(const Model::DescribeIngressRequest& request);

                /**
                 *This API is used to query the list of ingress rules.
                 * @param req DescribeIngressesRequest
                 * @return DescribeIngressesOutcome
                 */
                DescribeIngressesOutcome DescribeIngresses(const Model::DescribeIngressesRequest &request);
                void DescribeIngressesAsync(const Model::DescribeIngressesRequest& request, const DescribeIngressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIngressesOutcomeCallable DescribeIngressesCallable(const Model::DescribeIngressesRequest& request);

                /**
                 *This API is used to query details of a log collecting configuration.
                 * @param req DescribeLogConfigRequest
                 * @return DescribeLogConfigOutcome
                 */
                DescribeLogConfigOutcome DescribeLogConfig(const Model::DescribeLogConfigRequest &request);
                void DescribeLogConfigAsync(const Model::DescribeLogConfigRequest& request, const DescribeLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogConfigOutcomeCallable DescribeLogConfigCallable(const Model::DescribeLogConfigRequest& request);

                /**
                 *This API is used to querying the list of log collecting configurations.
                 * @param req DescribePagedLogConfigListRequest
                 * @return DescribePagedLogConfigListOutcome
                 */
                DescribePagedLogConfigListOutcome DescribePagedLogConfigList(const Model::DescribePagedLogConfigListRequest &request);
                void DescribePagedLogConfigListAsync(const Model::DescribePagedLogConfigListRequest& request, const DescribePagedLogConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePagedLogConfigListOutcomeCallable DescribePagedLogConfigListCallable(const Model::DescribePagedLogConfigListRequest& request);

                /**
                 *This API is used to query the list of ingress rules associated with the application.
                 * @param req DescribeRelatedIngressesRequest
                 * @return DescribeRelatedIngressesOutcome
                 */
                DescribeRelatedIngressesOutcome DescribeRelatedIngresses(const Model::DescribeRelatedIngressesRequest &request);
                void DescribeRelatedIngressesAsync(const Model::DescribeRelatedIngressesRequest& request, const DescribeRelatedIngressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRelatedIngressesOutcomeCallable DescribeRelatedIngressesCallable(const Model::DescribeRelatedIngressesRequest& request);

                /**
                 *This API is used to terminate a configuration.
                 * @param req DestroyConfigDataRequest
                 * @return DestroyConfigDataOutcome
                 */
                DestroyConfigDataOutcome DestroyConfigData(const Model::DestroyConfigDataRequest &request);
                void DestroyConfigDataAsync(const Model::DestroyConfigDataRequest& request, const DestroyConfigDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyConfigDataOutcomeCallable DestroyConfigDataCallable(const Model::DestroyConfigDataRequest& request);

                /**
                 *This API is used to terminate an environment.
                 * @param req DestroyEnvironmentRequest
                 * @return DestroyEnvironmentOutcome
                 */
                DestroyEnvironmentOutcome DestroyEnvironment(const Model::DestroyEnvironmentRequest &request);
                void DestroyEnvironmentAsync(const Model::DestroyEnvironmentRequest& request, const DestroyEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyEnvironmentOutcomeCallable DestroyEnvironmentCallable(const Model::DestroyEnvironmentRequest& request);

                /**
                 *This API is used to terminate a log collecting configuration.
                 * @param req DestroyLogConfigRequest
                 * @return DestroyLogConfigOutcome
                 */
                DestroyLogConfigOutcome DestroyLogConfig(const Model::DestroyLogConfigRequest &request);
                void DestroyLogConfigAsync(const Model::DestroyLogConfigRequest& request, const DestroyLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyLogConfigOutcomeCallable DestroyLogConfigCallable(const Model::DestroyLogConfigRequest& request);

                /**
                 *This API is used to disable a scaling rule.
                 * @param req DisableApplicationAutoscalerRequest
                 * @return DisableApplicationAutoscalerOutcome
                 */
                DisableApplicationAutoscalerOutcome DisableApplicationAutoscaler(const Model::DisableApplicationAutoscalerRequest &request);
                void DisableApplicationAutoscalerAsync(const Model::DisableApplicationAutoscalerRequest& request, const DisableApplicationAutoscalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableApplicationAutoscalerOutcomeCallable DisableApplicationAutoscalerCallable(const Model::DisableApplicationAutoscalerRequest& request);

                /**
                 *This API is used to enable a scaling rule.
                 * @param req EnableApplicationAutoscalerRequest
                 * @return EnableApplicationAutoscalerOutcome
                 */
                EnableApplicationAutoscalerOutcome EnableApplicationAutoscaler(const Model::EnableApplicationAutoscalerRequest &request);
                void EnableApplicationAutoscalerAsync(const Model::EnableApplicationAutoscalerRequest& request, const EnableApplicationAutoscalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableApplicationAutoscalerOutcomeCallable EnableApplicationAutoscalerCallable(const Model::EnableApplicationAutoscalerRequest& request);

                /**
                 *This API is used to generate the pre-signed download URL for the specified application package.
                 * @param req GenerateApplicationPackageDownloadUrlRequest
                 * @return GenerateApplicationPackageDownloadUrlOutcome
                 */
                GenerateApplicationPackageDownloadUrlOutcome GenerateApplicationPackageDownloadUrl(const Model::GenerateApplicationPackageDownloadUrlRequest &request);
                void GenerateApplicationPackageDownloadUrlAsync(const Model::GenerateApplicationPackageDownloadUrlRequest& request, const GenerateApplicationPackageDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateApplicationPackageDownloadUrlOutcomeCallable GenerateApplicationPackageDownloadUrlCallable(const Model::GenerateApplicationPackageDownloadUrlRequest& request);

                /**
                 *This API is used to modify a scaling rule.
                 * @param req ModifyApplicationAutoscalerRequest
                 * @return ModifyApplicationAutoscalerOutcome
                 */
                ModifyApplicationAutoscalerOutcome ModifyApplicationAutoscaler(const Model::ModifyApplicationAutoscalerRequest &request);
                void ModifyApplicationAutoscalerAsync(const Model::ModifyApplicationAutoscalerRequest& request, const ModifyApplicationAutoscalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationAutoscalerOutcomeCallable ModifyApplicationAutoscalerCallable(const Model::ModifyApplicationAutoscalerRequest& request);

                /**
                 *This API is used to modify the basic information of an application.
                 * @param req ModifyApplicationInfoRequest
                 * @return ModifyApplicationInfoOutcome
                 */
                ModifyApplicationInfoOutcome ModifyApplicationInfo(const Model::ModifyApplicationInfoRequest &request);
                void ModifyApplicationInfoAsync(const Model::ModifyApplicationInfoRequest& request, const ModifyApplicationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationInfoOutcomeCallable ModifyApplicationInfoCallable(const Model::ModifyApplicationInfoRequest& request);

                /**
                 *This API is used to modify an access policy.
                 * @param req ModifyApplicationServiceRequest
                 * @return ModifyApplicationServiceOutcome
                 */
                ModifyApplicationServiceOutcome ModifyApplicationService(const Model::ModifyApplicationServiceRequest &request);
                void ModifyApplicationServiceAsync(const Model::ModifyApplicationServiceRequest& request, const ModifyApplicationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationServiceOutcomeCallable ModifyApplicationServiceCallable(const Model::ModifyApplicationServiceRequest& request);

                /**
                 *This API is used to modify a configuration.
                 * @param req ModifyConfigDataRequest
                 * @return ModifyConfigDataOutcome
                 */
                ModifyConfigDataOutcome ModifyConfigData(const Model::ModifyConfigDataRequest &request);
                void ModifyConfigDataAsync(const Model::ModifyConfigDataRequest& request, const ModifyConfigDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConfigDataOutcomeCallable ModifyConfigDataCallable(const Model::ModifyConfigDataRequest& request);

                /**
                 *This API is used to edit an environment.
                 * @param req ModifyEnvironmentRequest
                 * @return ModifyEnvironmentOutcome
                 */
                ModifyEnvironmentOutcome ModifyEnvironment(const Model::ModifyEnvironmentRequest &request);
                void ModifyEnvironmentAsync(const Model::ModifyEnvironmentRequest& request, const ModifyEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEnvironmentOutcomeCallable ModifyEnvironmentCallable(const Model::ModifyEnvironmentRequest& request);

                /**
                 *This API is used to create or update an ingress rule.
                 * @param req ModifyIngressRequest
                 * @return ModifyIngressOutcome
                 */
                ModifyIngressOutcome ModifyIngress(const Model::ModifyIngressRequest &request);
                void ModifyIngressAsync(const Model::ModifyIngressRequest& request, const ModifyIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIngressOutcomeCallable ModifyIngressCallable(const Model::ModifyIngressRequest& request);

                /**
                 *This API is used to modify a log collecting configuration.
                 * @param req ModifyLogConfigRequest
                 * @return ModifyLogConfigOutcome
                 */
                ModifyLogConfigOutcome ModifyLogConfig(const Model::ModifyLogConfigRequest &request);
                void ModifyLogConfigAsync(const Model::ModifyLogConfigRequest& request, const ModifyLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLogConfigOutcomeCallable ModifyLogConfigCallable(const Model::ModifyLogConfigRequest& request);

                /**
                 *This API is used to restart an application.
                 * @param req RestartApplicationRequest
                 * @return RestartApplicationOutcome
                 */
                RestartApplicationOutcome RestartApplication(const Model::RestartApplicationRequest &request);
                void RestartApplicationAsync(const Model::RestartApplicationRequest& request, const RestartApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartApplicationOutcomeCallable RestartApplicationCallable(const Model::RestartApplicationRequest& request);

                /**
                 *This API is used to restart an application pod.
                 * @param req RestartApplicationPodRequest
                 * @return RestartApplicationPodOutcome
                 */
                RestartApplicationPodOutcome RestartApplicationPod(const Model::RestartApplicationPodRequest &request);
                void RestartApplicationPodAsync(const Model::RestartApplicationPodRequest& request, const RestartApplicationPodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartApplicationPodOutcomeCallable RestartApplicationPodCallable(const Model::RestartApplicationPodRequest& request);

                /**
                 *This API is used to configure the rolling update policy for an application.
                 * @param req RollingUpdateApplicationByVersionRequest
                 * @return RollingUpdateApplicationByVersionOutcome
                 */
                RollingUpdateApplicationByVersionOutcome RollingUpdateApplicationByVersion(const Model::RollingUpdateApplicationByVersionRequest &request);
                void RollingUpdateApplicationByVersionAsync(const Model::RollingUpdateApplicationByVersionRequest& request, const RollingUpdateApplicationByVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollingUpdateApplicationByVersionOutcomeCallable RollingUpdateApplicationByVersionCallable(const Model::RollingUpdateApplicationByVersionRequest& request);

                /**
                 *This API is used to stop an application.
                 * @param req StopApplicationRequest
                 * @return StopApplicationOutcome
                 */
                StopApplicationOutcome StopApplication(const Model::StopApplicationRequest &request);
                void StopApplicationAsync(const Model::StopApplicationRequest& request, const StopApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopApplicationOutcomeCallable StopApplicationCallable(const Model::StopApplicationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_TEMCLIENT_H_
