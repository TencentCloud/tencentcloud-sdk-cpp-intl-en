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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHATTRANSLATIONSRESPONSE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHATTRANSLATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/Usage.h>
#include <tencentcloud/hunyuan/v20230901/model/TranslationChoice.h>
#include <tencentcloud/hunyuan/v20230901/model/ErrorMsg.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * ChatTranslations response structure.
                */
                class ChatTranslationsResponse : public AbstractModel
                {
                public:
                    ChatTranslationsResponse();
                    ~ChatTranslationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Request'S RequestId this time.
                     * @return Id Request'S RequestId this time.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Disclaimer.
                     * @return Note Disclaimer.
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取Unix timestamp, in seconds.
                     * @return Created Unix timestamp, in seconds.
                     * 
                     */
                    int64_t GetCreated() const;

                    /**
                     * 判断参数 Created 是否已赋值
                     * @return Created 是否已赋值
                     * 
                     */
                    bool CreatedHasBeenSet() const;

                    /**
                     * 获取Token statistical information.
Billing by Token quantity.
                     * @return Usage Token statistical information.
Billing by Token quantity.
                     * 
                     */
                    Usage GetUsage() const;

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取Reply content.
                     * @return Choices Reply content.
                     * 
                     */
                    std::vector<TranslationChoice> GetChoices() const;

                    /**
                     * 判断参数 Choices 是否已赋值
                     * @return Choices 是否已赋值
                     * 
                     */
                    bool ChoicesHasBeenSet() const;

                    /**
                     * 获取Error message.
If the service encounters an exception during streaming return, return this error.
                     * @return ErrorMsg Error message.
If the service encounters an exception during streaming return, return this error.
                     * 
                     */
                    ErrorMsg GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * Request'S RequestId this time.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Disclaimer.
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * Unix timestamp, in seconds.
                     */
                    int64_t m_created;
                    bool m_createdHasBeenSet;

                    /**
                     * Token statistical information.
Billing by Token quantity.
                     */
                    Usage m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * Reply content.
                     */
                    std::vector<TranslationChoice> m_choices;
                    bool m_choicesHasBeenSet;

                    /**
                     * Error message.
If the service encounters an exception during streaming return, return this error.
                     */
                    ErrorMsg m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHATTRANSLATIONSRESPONSE_H_
