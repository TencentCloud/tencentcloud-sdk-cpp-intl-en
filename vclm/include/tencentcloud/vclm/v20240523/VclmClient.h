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

#ifndef TENCENTCLOUD_VCLM_V20240523_VCLMCLIENT_H_
#define TENCENTCLOUD_VCLM_V20240523_VCLMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vclm/v20240523/model/DescribeImageAnimateJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/DescribeImageAnimateJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/SubmitImageAnimateJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/SubmitImageAnimateJobResponse.h>
#include <tencentcloud/vclm/v20240523/model/SubmitImageToVideoViduJobRequest.h>
#include <tencentcloud/vclm/v20240523/model/SubmitImageToVideoViduJobResponse.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            class VclmClient : public AbstractClient
            {
            public:
                VclmClient(const Credential &credential, const std::string &region);
                VclmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeImageAnimateJobResponse> DescribeImageAnimateJobOutcome;
                typedef std::future<DescribeImageAnimateJobOutcome> DescribeImageAnimateJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::DescribeImageAnimateJobRequest&, DescribeImageAnimateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAnimateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitImageAnimateJobResponse> SubmitImageAnimateJobOutcome;
                typedef std::future<SubmitImageAnimateJobOutcome> SubmitImageAnimateJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::SubmitImageAnimateJobRequest&, SubmitImageAnimateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitImageAnimateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitImageToVideoViduJobResponse> SubmitImageToVideoViduJobOutcome;
                typedef std::future<SubmitImageToVideoViduJobOutcome> SubmitImageToVideoViduJobOutcomeCallable;
                typedef std::function<void(const VclmClient*, const Model::SubmitImageToVideoViduJobRequest&, SubmitImageToVideoViduJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitImageToVideoViduJobAsyncHandler;



                /**
                 *This API is used to query image animation tasks. The image animation feature supports generating videos based on dance movements and images to meet the needs of scenarios such as social entertainment and interactive marketing.
                 * @param req DescribeImageAnimateJobRequest
                 * @return DescribeImageAnimateJobOutcome
                 */
                DescribeImageAnimateJobOutcome DescribeImageAnimateJob(const Model::DescribeImageAnimateJobRequest &request);
                void DescribeImageAnimateJobAsync(const Model::DescribeImageAnimateJobRequest& request, const DescribeImageAnimateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAnimateJobOutcomeCallable DescribeImageAnimateJobCallable(const Model::DescribeImageAnimateJobRequest& request);

                /**
                 *This API is used to submit image animation tasks. The image animation feature supports generating videos based on dance movements and images to meet the needs of scenarios such as social entertainment and interactive marketing.
                 * @param req SubmitImageAnimateJobRequest
                 * @return SubmitImageAnimateJobOutcome
                 */
                SubmitImageAnimateJobOutcome SubmitImageAnimateJob(const Model::SubmitImageAnimateJobRequest &request);
                void SubmitImageAnimateJobAsync(const Model::SubmitImageAnimateJobRequest& request, const SubmitImageAnimateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitImageAnimateJobOutcomeCallable SubmitImageAnimateJobCallable(const Model::SubmitImageAnimateJobRequest& request);

                /**
                 *Submit a Vidu image-to-video task API
                 * @param req SubmitImageToVideoViduJobRequest
                 * @return SubmitImageToVideoViduJobOutcome
                 */
                SubmitImageToVideoViduJobOutcome SubmitImageToVideoViduJob(const Model::SubmitImageToVideoViduJobRequest &request);
                void SubmitImageToVideoViduJobAsync(const Model::SubmitImageToVideoViduJobRequest& request, const SubmitImageToVideoViduJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitImageToVideoViduJobOutcomeCallable SubmitImageToVideoViduJobCallable(const Model::SubmitImageToVideoViduJobRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_VCLMCLIENT_H_
