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

#ifndef TENCENTCLOUD_TEM_V20210701_TEMCLIENT_H_
#define TENCENTCLOUD_TEM_V20210701_TEMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tem/v20210701/model/CreateCosTokenRequest.h>
#include <tencentcloud/tem/v20210701/model/CreateCosTokenResponse.h>
#include <tencentcloud/tem/v20210701/model/CreateEnvironmentRequest.h>
#include <tencentcloud/tem/v20210701/model/CreateEnvironmentResponse.h>
#include <tencentcloud/tem/v20210701/model/CreateResourceRequest.h>
#include <tencentcloud/tem/v20210701/model/CreateResourceResponse.h>
#include <tencentcloud/tem/v20210701/model/DeleteIngressRequest.h>
#include <tencentcloud/tem/v20210701/model/DeleteIngressResponse.h>
#include <tencentcloud/tem/v20210701/model/DeployApplicationRequest.h>
#include <tencentcloud/tem/v20210701/model/DeployApplicationResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationPodsRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationPodsResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeEnvironmentsRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeEnvironmentsResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeIngressRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeIngressResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeIngressesRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeIngressesResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeRelatedIngressesRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeRelatedIngressesResponse.h>
#include <tencentcloud/tem/v20210701/model/GenerateApplicationPackageDownloadUrlRequest.h>
#include <tencentcloud/tem/v20210701/model/GenerateApplicationPackageDownloadUrlResponse.h>
#include <tencentcloud/tem/v20210701/model/ModifyApplicationInfoRequest.h>
#include <tencentcloud/tem/v20210701/model/ModifyApplicationInfoResponse.h>
#include <tencentcloud/tem/v20210701/model/ModifyEnvironmentRequest.h>
#include <tencentcloud/tem/v20210701/model/ModifyEnvironmentResponse.h>
#include <tencentcloud/tem/v20210701/model/ModifyIngressRequest.h>
#include <tencentcloud/tem/v20210701/model/ModifyIngressResponse.h>
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

                typedef Outcome<Core::Error, Model::CreateCosTokenResponse> CreateCosTokenOutcome;
                typedef std::future<CreateCosTokenOutcome> CreateCosTokenOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateCosTokenRequest&, CreateCosTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCosTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEnvironmentResponse> CreateEnvironmentOutcome;
                typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateEnvironmentRequest&, CreateEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateResourceResponse> CreateResourceOutcome;
                typedef std::future<CreateResourceOutcome> CreateResourceOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateResourceRequest&, CreateResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIngressResponse> DeleteIngressOutcome;
                typedef std::future<DeleteIngressOutcome> DeleteIngressOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DeleteIngressRequest&, DeleteIngressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIngressAsyncHandler;
                typedef Outcome<Core::Error, Model::DeployApplicationResponse> DeployApplicationOutcome;
                typedef std::future<DeployApplicationOutcome> DeployApplicationOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DeployApplicationRequest&, DeployApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationPodsResponse> DescribeApplicationPodsOutcome;
                typedef std::future<DescribeApplicationPodsOutcome> DescribeApplicationPodsOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeApplicationPodsRequest&, DescribeApplicationPodsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationPodsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvironmentsResponse> DescribeEnvironmentsOutcome;
                typedef std::future<DescribeEnvironmentsOutcome> DescribeEnvironmentsOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeEnvironmentsRequest&, DescribeEnvironmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvironmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIngressResponse> DescribeIngressOutcome;
                typedef std::future<DescribeIngressOutcome> DescribeIngressOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeIngressRequest&, DescribeIngressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIngressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIngressesResponse> DescribeIngressesOutcome;
                typedef std::future<DescribeIngressesOutcome> DescribeIngressesOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeIngressesRequest&, DescribeIngressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIngressesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRelatedIngressesResponse> DescribeRelatedIngressesOutcome;
                typedef std::future<DescribeRelatedIngressesOutcome> DescribeRelatedIngressesOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeRelatedIngressesRequest&, DescribeRelatedIngressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRelatedIngressesAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateApplicationPackageDownloadUrlResponse> GenerateApplicationPackageDownloadUrlOutcome;
                typedef std::future<GenerateApplicationPackageDownloadUrlOutcome> GenerateApplicationPackageDownloadUrlOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::GenerateApplicationPackageDownloadUrlRequest&, GenerateApplicationPackageDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateApplicationPackageDownloadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationInfoResponse> ModifyApplicationInfoOutcome;
                typedef std::future<ModifyApplicationInfoOutcome> ModifyApplicationInfoOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyApplicationInfoRequest&, ModifyApplicationInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEnvironmentResponse> ModifyEnvironmentOutcome;
                typedef std::future<ModifyEnvironmentOutcome> ModifyEnvironmentOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyEnvironmentRequest&, ModifyEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIngressResponse> ModifyIngressOutcome;
                typedef std::future<ModifyIngressOutcome> ModifyIngressOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyIngressRequest&, ModifyIngressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIngressAsyncHandler;
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
                 *This API is used to bind a cloud resource.
                 * @param req CreateResourceRequest
                 * @return CreateResourceOutcome
                 */
                CreateResourceOutcome CreateResource(const Model::CreateResourceRequest &request);
                void CreateResourceAsync(const Model::CreateResourceRequest& request, const CreateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateResourceOutcomeCallable CreateResourceCallable(const Model::CreateResourceRequest& request);

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
                 *This API is used to get the list of application pods.
                 * @param req DescribeApplicationPodsRequest
                 * @return DescribeApplicationPodsOutcome
                 */
                DescribeApplicationPodsOutcome DescribeApplicationPods(const Model::DescribeApplicationPodsRequest &request);
                void DescribeApplicationPodsAsync(const Model::DescribeApplicationPodsRequest& request, const DescribeApplicationPodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationPodsOutcomeCallable DescribeApplicationPodsCallable(const Model::DescribeApplicationPodsRequest& request);

                /**
                 *This API is used to get the list of tenant environments.
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
                 *This API is used to query the list of ingress rules associated with the application.
                 * @param req DescribeRelatedIngressesRequest
                 * @return DescribeRelatedIngressesOutcome
                 */
                DescribeRelatedIngressesOutcome DescribeRelatedIngresses(const Model::DescribeRelatedIngressesRequest &request);
                void DescribeRelatedIngressesAsync(const Model::DescribeRelatedIngressesRequest& request, const DescribeRelatedIngressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRelatedIngressesOutcomeCallable DescribeRelatedIngressesCallable(const Model::DescribeRelatedIngressesRequest& request);

                /**
                 *This API is used to generate the pre-signed download URL for the specified application package.
                 * @param req GenerateApplicationPackageDownloadUrlRequest
                 * @return GenerateApplicationPackageDownloadUrlOutcome
                 */
                GenerateApplicationPackageDownloadUrlOutcome GenerateApplicationPackageDownloadUrl(const Model::GenerateApplicationPackageDownloadUrlRequest &request);
                void GenerateApplicationPackageDownloadUrlAsync(const Model::GenerateApplicationPackageDownloadUrlRequest& request, const GenerateApplicationPackageDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateApplicationPackageDownloadUrlOutcomeCallable GenerateApplicationPackageDownloadUrlCallable(const Model::GenerateApplicationPackageDownloadUrlRequest& request);

                /**
                 *This API is used to modify the basic information of an application.
                 * @param req ModifyApplicationInfoRequest
                 * @return ModifyApplicationInfoOutcome
                 */
                ModifyApplicationInfoOutcome ModifyApplicationInfo(const Model::ModifyApplicationInfoRequest &request);
                void ModifyApplicationInfoAsync(const Model::ModifyApplicationInfoRequest& request, const ModifyApplicationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationInfoOutcomeCallable ModifyApplicationInfoCallable(const Model::ModifyApplicationInfoRequest& request);

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
