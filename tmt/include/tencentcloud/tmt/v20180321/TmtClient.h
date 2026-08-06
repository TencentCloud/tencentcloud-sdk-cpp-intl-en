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

#ifndef TENCENTCLOUD_TMT_V20180321_TMTCLIENT_H_
#define TENCENTCLOUD_TMT_V20180321_TMTCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tmt/v20180321/model/ImageTranslateLLMRequest.h>
#include <tencentcloud/tmt/v20180321/model/ImageTranslateLLMResponse.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            class TmtClient : public AbstractClient
            {
            public:
                TmtClient(const Credential &credential, const std::string &region);
                TmtClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ImageTranslateLLMResponse> ImageTranslateLLMOutcome;
                typedef std::future<ImageTranslateLLMOutcome> ImageTranslateLLMOutcomeCallable;
                typedef std::function<void(const TmtClient*, const Model::ImageTranslateLLMRequest&, ImageTranslateLLMOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageTranslateLLMAsyncHandler;



                /**
                 *This API is used to provide translation service for images in 18 languages. It can automatically recognize text content in images and translate it into the target language. The recognized text is translated line by line, and a version that supports paragraph translation will be offered subsequently.

-Input image format: png, jpg, jpeg and other common image formats. gif animation is not supported.
-Output image format: jpg.

Notification: For general developers, we recommend prioritizing SDK integration to simplify development. For SDK usage introduction, directly view the 5. Developer Resources part.
                 * @param req ImageTranslateLLMRequest
                 * @return ImageTranslateLLMOutcome
                 */
                ImageTranslateLLMOutcome ImageTranslateLLM(const Model::ImageTranslateLLMRequest &request);
                void ImageTranslateLLMAsync(const Model::ImageTranslateLLMRequest& request, const ImageTranslateLLMAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageTranslateLLMOutcomeCallable ImageTranslateLLMCallable(const Model::ImageTranslateLLMRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_TMTCLIENT_H_
