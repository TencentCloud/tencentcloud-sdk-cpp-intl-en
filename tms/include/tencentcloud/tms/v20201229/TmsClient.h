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

#ifndef TENCENTCLOUD_TMS_V20201229_TMSCLIENT_H_
#define TENCENTCLOUD_TMS_V20201229_TMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tms/v20201229/model/TextModerationRequest.h>
#include <tencentcloud/tms/v20201229/model/TextModerationResponse.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            class TmsClient : public AbstractClient
            {
            public:
                TmsClient(const Credential &credential, const std::string &region);
                TmsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::TextModerationResponse> TextModerationOutcome;
                typedef std::future<TextModerationOutcome> TextModerationOutcomeCallable;
                typedef std::function<void(const TmsClient*, const Model::TextModerationRequest&, TextModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextModerationAsyncHandler;



                /**
                 *This API is used to submit text content for intelligent moderation. 

### Notes
- Before invoking this API, be sure you have activated Tencent Cloud Text Moderation System in the [Content Moderation - Text Moderation System](https://console.cloud.tencent.com/cms/text/package) console.
- This is a paid API. For the billing details, see [Text Moderation System Pricing](https://intl.cloud.tencent.com/product/tms/pricing?from_cn_redirect=1).

 
 
 
 
 
 

### Use limits
- The submitted texts can not be longer than 10,000 unicode characters.
- English letters, digits and Chinese characters are supported for moderation.
- The API request frequency limit: **1,000 times/second**.
                 * @param req TextModerationRequest
                 * @return TextModerationOutcome
                 */
                TextModerationOutcome TextModeration(const Model::TextModerationRequest &request);
                void TextModerationAsync(const Model::TextModerationRequest& request, const TextModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextModerationOutcomeCallable TextModerationCallable(const Model::TextModerationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_TMSCLIENT_H_
