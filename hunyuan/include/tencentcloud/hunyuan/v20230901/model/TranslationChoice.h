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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_TRANSLATIONCHOICE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_TRANSLATIONCHOICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/TranslationDelta.h>
#include <tencentcloud/hunyuan/v20230901/model/TranslationMessage.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * Translate the reply returned by the translation api, support multiple.
                */
                class TranslationChoice : public AbstractModel
                {
                public:
                    TranslationChoice();
                    ~TranslationChoice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取End flag, can be stop or sensitive.
stop means output ends normally.
sensitive only appears when streaming output review is enabled, indicating security review not passed.
                     * @return FinishReason End flag, can be stop or sensitive.
stop means output ends normally.
sensitive only appears when streaming output review is enabled, indicating security review not passed.
                     * 
                     */
                    std::string GetFinishReason() const;

                    /**
                     * 设置End flag, can be stop or sensitive.
stop means output ends normally.
sensitive only appears when streaming output review is enabled, indicating security review not passed.
                     * @param _finishReason End flag, can be stop or sensitive.
stop means output ends normally.
sensitive only appears when streaming output review is enabled, indicating security review not passed.
                     * 
                     */
                    void SetFinishReason(const std::string& _finishReason);

                    /**
                     * 判断参数 FinishReason 是否已赋值
                     * @return FinishReason 是否已赋值
                     * 
                     */
                    bool FinishReasonHasBeenSet() const;

                    /**
                     * 获取Index value, used when streaming.
                     * @return Index Index value, used when streaming.
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置Index value, used when streaming.
                     * @param _index Index value, used when streaming.
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取Incremental return value used when streaming this field.
                     * @return Delta Incremental return value used when streaming this field.
                     * 
                     */
                    TranslationDelta GetDelta() const;

                    /**
                     * 设置Incremental return value used when streaming this field.
                     * @param _delta Incremental return value used when streaming this field.
                     * 
                     */
                    void SetDelta(const TranslationDelta& _delta);

                    /**
                     * 判断参数 Delta 是否已赋值
                     * @return Delta 是否已赋值
                     * 
                     */
                    bool DeltaHasBeenSet() const;

                    /**
                     * 获取Return value, used when non-streaming.
                     * @return Message Return value, used when non-streaming.
                     * 
                     */
                    TranslationMessage GetMessage() const;

                    /**
                     * 设置Return value, used when non-streaming.
                     * @param _message Return value, used when non-streaming.
                     * 
                     */
                    void SetMessage(const TranslationMessage& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * End flag, can be stop or sensitive.
stop means output ends normally.
sensitive only appears when streaming output review is enabled, indicating security review not passed.
                     */
                    std::string m_finishReason;
                    bool m_finishReasonHasBeenSet;

                    /**
                     * Index value, used when streaming.
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * Incremental return value used when streaming this field.
                     */
                    TranslationDelta m_delta;
                    bool m_deltaHasBeenSet;

                    /**
                     * Return value, used when non-streaming.
                     */
                    TranslationMessage m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_TRANSLATIONCHOICE_H_
