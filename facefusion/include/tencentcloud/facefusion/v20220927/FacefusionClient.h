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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_FACEFUSIONCLIENT_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_FACEFUSIONCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/facefusion/v20220927/model/FuseFaceRequest.h>
#include <tencentcloud/facefusion/v20220927/model/FuseFaceResponse.h>
#include <tencentcloud/facefusion/v20220927/model/QueryVideoFaceFusionJobRequest.h>
#include <tencentcloud/facefusion/v20220927/model/QueryVideoFaceFusionJobResponse.h>
#include <tencentcloud/facefusion/v20220927/model/SubmitVideoFaceFusionJobRequest.h>
#include <tencentcloud/facefusion/v20220927/model/SubmitVideoFaceFusionJobResponse.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            class FacefusionClient : public AbstractClient
            {
            public:
                FacefusionClient(const Credential &credential, const std::string &region);
                FacefusionClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::FuseFaceResponse> FuseFaceOutcome;
                typedef std::future<FuseFaceOutcome> FuseFaceOutcomeCallable;
                typedef std::function<void(const FacefusionClient*, const Model::FuseFaceRequest&, FuseFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FuseFaceAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryVideoFaceFusionJobResponse> QueryVideoFaceFusionJobOutcome;
                typedef std::future<QueryVideoFaceFusionJobOutcome> QueryVideoFaceFusionJobOutcomeCallable;
                typedef std::function<void(const FacefusionClient*, const Model::QueryVideoFaceFusionJobRequest&, QueryVideoFaceFusionJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryVideoFaceFusionJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitVideoFaceFusionJobResponse> SubmitVideoFaceFusionJobOutcome;
                typedef std::future<SubmitVideoFaceFusionJobOutcome> SubmitVideoFaceFusionJobOutcomeCallable;
                typedef std::function<void(const FacefusionClient*, const Model::SubmitVideoFaceFusionJobRequest&, SubmitVideoFaceFusionJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitVideoFaceFusionJobAsyncHandler;



                /**
                 *This API is used to perform the fusion of a single face, multiple faces, and specified faces with the material template by uploading face images. Users can add logos to generated images. See <a href="https://intl.cloud.tencent.com/document/product/670/38247?from_cn_redirect=1" target="_blank">Fusion Access Guide</a>.



- The signature method in the public parameters must be specified as the V3 version. In other words, set the SignatureMethod parameter to TC3-HMAC-SHA256.
                 * @param req FuseFaceRequest
                 * @return FuseFaceOutcome
                 */
                FuseFaceOutcome FuseFace(const Model::FuseFaceRequest &request);
                void FuseFaceAsync(const Model::FuseFaceRequest& request, const FuseFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FuseFaceOutcomeCallable FuseFaceCallable(const Model::FuseFaceRequest& request);

                /**
                 *This API is used to query the progress and status of video face fusion tasks by Job ID.
                 * @param req QueryVideoFaceFusionJobRequest
                 * @return QueryVideoFaceFusionJobOutcome
                 */
                QueryVideoFaceFusionJobOutcome QueryVideoFaceFusionJob(const Model::QueryVideoFaceFusionJobRequest &request);
                void QueryVideoFaceFusionJobAsync(const Model::QueryVideoFaceFusionJobRequest& request, const QueryVideoFaceFusionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryVideoFaceFusionJobOutcomeCallable QueryVideoFaceFusionJobCallable(const Model::QueryVideoFaceFusionJobRequest& request);

                /**
                 *This API is used to submit asynchronous processing tasks of video face fusion. After a task is submitted, the Job ID, estimated completion time, and current queue length will be returned.
                 * @param req SubmitVideoFaceFusionJobRequest
                 * @return SubmitVideoFaceFusionJobOutcome
                 */
                SubmitVideoFaceFusionJobOutcome SubmitVideoFaceFusionJob(const Model::SubmitVideoFaceFusionJobRequest &request);
                void SubmitVideoFaceFusionJobAsync(const Model::SubmitVideoFaceFusionJobRequest& request, const SubmitVideoFaceFusionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitVideoFaceFusionJobOutcomeCallable SubmitVideoFaceFusionJobCallable(const Model::SubmitVideoFaceFusionJobRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_FACEFUSIONCLIENT_H_
