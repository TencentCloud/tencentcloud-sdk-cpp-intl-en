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
#include <tencentcloud/tmt/v20180321/model/TextTranslateRequest.h>
#include <tencentcloud/tmt/v20180321/model/TextTranslateResponse.h>


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

                typedef Outcome<Core::Error, Model::TextTranslateResponse> TextTranslateOutcome;
                typedef std::future<TextTranslateOutcome> TextTranslateOutcomeCallable;
                typedef std::function<void(const TmtClient*, const Model::TextTranslateRequest&, TextTranslateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextTranslateAsyncHandler;



                /**
                 *This API is used to translate text in multiple language pairs, such as Chinese-English.<br />
Note: We recommend that you simplify your development with the SDK integration mode. For how to use the SDK, see Section 5 "Developer Resources".
                 * @param req TextTranslateRequest
                 * @return TextTranslateOutcome
                 */
                TextTranslateOutcome TextTranslate(const Model::TextTranslateRequest &request);
                void TextTranslateAsync(const Model::TextTranslateRequest& request, const TextTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextTranslateOutcomeCallable TextTranslateCallable(const Model::TextTranslateRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_TMTCLIENT_H_
