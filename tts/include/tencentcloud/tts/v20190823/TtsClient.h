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

#ifndef TENCENTCLOUD_TTS_V20190823_TTSCLIENT_H_
#define TENCENTCLOUD_TTS_V20190823_TTSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tts/v20190823/model/TextToVoiceRequest.h>
#include <tencentcloud/tts/v20190823/model/TextToVoiceResponse.h>


namespace TencentCloud
{
    namespace Tts
    {
        namespace V20190823
        {
            class TtsClient : public AbstractClient
            {
            public:
                TtsClient(const Credential &credential, const std::string &region);
                TtsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::TextToVoiceResponse> TextToVoiceOutcome;
                typedef std::future<TextToVoiceOutcome> TextToVoiceOutcomeCallable;
                typedef std::function<void(const TtsClient*, const Model::TextToVoiceRequest&, TextToVoiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextToVoiceAsyncHandler;



                /**
                 *This API is used to convert any text to speech, allowing your devices and applications to talk to users.
u200bTencent Cloud Text To Speech (TTS) can synthesize speech from text in real time for many use cases, such as audiobook and news apps, voice reminders on smart devices, quick synthesis of a celebrity's voice based on existing programs or certain voice records available on the internet, and personalized vehicle navigation systems.
It is free for use in beta.
It supports SSML. For syntax details, see [SSML](https://intl.cloud.tencent.com/document/product/1073/49575?from_cn_redirect=1).
Default API request rate limit: 20 requests/sec.
                 * @param req TextToVoiceRequest
                 * @return TextToVoiceOutcome
                 */
                TextToVoiceOutcome TextToVoice(const Model::TextToVoiceRequest &request);
                void TextToVoiceAsync(const Model::TextToVoiceRequest& request, const TextToVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextToVoiceOutcomeCallable TextToVoiceCallable(const Model::TextToVoiceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TTS_V20190823_TTSCLIENT_H_
