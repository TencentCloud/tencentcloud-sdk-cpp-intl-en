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

#ifndef TENCENTCLOUD_IMS_V20201229_IMSCLIENT_H_
#define TENCENTCLOUD_IMS_V20201229_IMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ims/v20201229/model/ImageModerationRequest.h>
#include <tencentcloud/ims/v20201229/model/ImageModerationResponse.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            class ImsClient : public AbstractClient
            {
            public:
                ImsClient(const Credential &credential, const std::string &region);
                ImsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ImageModerationResponse> ImageModerationOutcome;
                typedef std::future<ImageModerationOutcome> ImageModerationOutcomeCallable;
                typedef std::function<void(const ImsClient*, const Model::ImageModerationRequest&, ImageModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageModerationAsyncHandler;



                /**
                 *This API is used to submit an image for smart moderation. Before using it, you need to log in to the console with the Tencent Cloud root account [to activate IMS](https://console.cloud.tencent.com/cms/image/package) and adjust the business configuration.
### API use instructions
- Go to the "[CMS console - IMS](https://console.cloud.tencent.com/cms/image/package)" to activate IMS.
- This API is a paid API. For its billing mode, see [IMS Pricing](https://www.tencentcloud.com/document/product/1122/43810).

### API feature description
- It can detect images or links and recognize content that may be offensive, unsafe, or inappropriate based on the deep learning technology;
- It can capture frames from or split GIF/long images for detection;
- It can recognize various non-compliant scenarios, including vulgarity, law or regulation violations, pornography, and advertising;
- It can detect multiple types of objects (such as object, advertising logo, and QR code) and recognize text in images based on OCR;
- It allows you to customize moderation policies based on different business scenarios;
- You can select image risk libraries to filter non-compliant images of custom types (currently, only blocklist configuration is supported);
- You can associate account or device information when moderating an image to recognize the account or device involved.

### API call description
- Supported image file size: **< 5 MB**
- Supported image file resolution: **a resolution of 256x256 or higher** is recommended; otherwise, the recognition effect may be affected.
- Supported image file formats: PNG, JPG, JPEG, BMP, GIF, and WEBP.
- Supported image URL transfer protocols: HTTP and HTTPS.
- If you pass in the access URL of an image, you need to **limit the image download time to 3 seconds**. To ensure the stability and reliability of the image to be detected, we recommend you use Tencent Cloud COS for storage or CDN for caching.
- Default API request rate limit: **100 requests/sec**. If this limit is exceeded, an error will be reported.

<div class="rno-api-explorer" style="margin-bottom:20px">
    <div class="rno-api-explorer-inner">
        <div class="rno-api-explorer-hd">
            <div class="rno-api-explorer-title">
                </p>
            </div>
        </div>
    </div>
</div>
                 * @param req ImageModerationRequest
                 * @return ImageModerationOutcome
                 */
                ImageModerationOutcome ImageModeration(const Model::ImageModerationRequest &request);
                void ImageModerationAsync(const Model::ImageModerationRequest& request, const ImageModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageModerationOutcomeCallable ImageModerationCallable(const Model::ImageModerationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_IMSCLIENT_H_
