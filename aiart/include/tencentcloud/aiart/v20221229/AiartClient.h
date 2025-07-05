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

#ifndef TENCENTCLOUD_AIART_V20221229_AIARTCLIENT_H_
#define TENCENTCLOUD_AIART_V20221229_AIARTCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/aiart/v20221229/model/ImageToImageRequest.h>
#include <tencentcloud/aiart/v20221229/model/ImageToImageResponse.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            class AiartClient : public AbstractClient
            {
            public:
                AiartClient(const Credential &credential, const std::string &region);
                AiartClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ImageToImageResponse> ImageToImageOutcome;
                typedef std::future<ImageToImageOutcome> ImageToImageOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::ImageToImageRequest&, ImageToImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageToImageAsyncHandler;



                /**
                 *This API is used to transfer the image style based on the image to image technology. Images with small figures, complex gestures or too many figures are not recommended.
It supports 3 concurrency by default, which means that up to 3 submitted tasks can be processed simultaneously. Subsequent tasks can be processed only after ongoing ones are completed.
                 * @param req ImageToImageRequest
                 * @return ImageToImageOutcome
                 */
                ImageToImageOutcome ImageToImage(const Model::ImageToImageRequest &request);
                void ImageToImageAsync(const Model::ImageToImageRequest& request, const ImageToImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageToImageOutcomeCallable ImageToImageCallable(const Model::ImageToImageRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_AIARTCLIENT_H_
