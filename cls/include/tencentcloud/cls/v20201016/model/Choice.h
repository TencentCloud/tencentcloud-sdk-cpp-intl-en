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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CHOICE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CHOICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Delta.h>
#include <tencentcloud/cls/v20201016/model/Message.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Reply, supporting multiple values
                */
                class Choice : public AbstractModel
                {
                public:
                    Choice();
                    ~Choice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>End flag, which may be stop, sensitive, or tool_calls.<br>stop means the output ends normally.<br>sensitive means the security review is not passed.<br>tool_calls identifies a function call.</p><p>Note:<br>Partial content may have been output, but if the FinishReason value in the middle of the response is sensitive, it means the security review is not passed. If the business scenario requires real-time text display on the screen, manually withdraw the displayed content and recommend replacing it with a custom reminder, such as "I can't answer this issue. Let's try another topic," to ensure terminal experience.</p>
                     * @return FinishReason <p>End flag, which may be stop, sensitive, or tool_calls.<br>stop means the output ends normally.<br>sensitive means the security review is not passed.<br>tool_calls identifies a function call.</p><p>Note:<br>Partial content may have been output, but if the FinishReason value in the middle of the response is sensitive, it means the security review is not passed. If the business scenario requires real-time text display on the screen, manually withdraw the displayed content and recommend replacing it with a custom reminder, such as "I can't answer this issue. Let's try another topic," to ensure terminal experience.</p>
                     * 
                     */
                    std::string GetFinishReason() const;

                    /**
                     * 设置<p>End flag, which may be stop, sensitive, or tool_calls.<br>stop means the output ends normally.<br>sensitive means the security review is not passed.<br>tool_calls identifies a function call.</p><p>Note:<br>Partial content may have been output, but if the FinishReason value in the middle of the response is sensitive, it means the security review is not passed. If the business scenario requires real-time text display on the screen, manually withdraw the displayed content and recommend replacing it with a custom reminder, such as "I can't answer this issue. Let's try another topic," to ensure terminal experience.</p>
                     * @param _finishReason <p>End flag, which may be stop, sensitive, or tool_calls.<br>stop means the output ends normally.<br>sensitive means the security review is not passed.<br>tool_calls identifies a function call.</p><p>Note:<br>Partial content may have been output, but if the FinishReason value in the middle of the response is sensitive, it means the security review is not passed. If the business scenario requires real-time text display on the screen, manually withdraw the displayed content and recommend replacing it with a custom reminder, such as "I can't answer this issue. Let's try another topic," to ensure terminal experience.</p>
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
                     * 获取<p>Incremental return value. This field is used when streaming.</p>
                     * @return Delta <p>Incremental return value. This field is used when streaming.</p>
                     * 
                     */
                    Delta GetDelta() const;

                    /**
                     * 设置<p>Incremental return value. This field is used when streaming.</p>
                     * @param _delta <p>Incremental return value. This field is used when streaming.</p>
                     * 
                     */
                    void SetDelta(const Delta& _delta);

                    /**
                     * 判断参数 Delta 是否已赋值
                     * @return Delta 是否已赋值
                     * 
                     */
                    bool DeltaHasBeenSet() const;

                    /**
                     * 获取<p>Return value, used when Non-streaming calls.</p>
                     * @return Message <p>Return value, used when Non-streaming calls.</p>
                     * 
                     */
                    Message GetMessage() const;

                    /**
                     * 设置<p>Return value, used when Non-streaming calls.</p>
                     * @param _message <p>Return value, used when Non-streaming calls.</p>
                     * 
                     */
                    void SetMessage(const Message& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>Index value. This field is used when streaming.</p>
                     * @return Index <p>Index value. This field is used when streaming.</p>
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置<p>Index value. This field is used when streaming.</p>
                     * @param _index <p>Index value. This field is used when streaming.</p>
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * <p>End flag, which may be stop, sensitive, or tool_calls.<br>stop means the output ends normally.<br>sensitive means the security review is not passed.<br>tool_calls identifies a function call.</p><p>Note:<br>Partial content may have been output, but if the FinishReason value in the middle of the response is sensitive, it means the security review is not passed. If the business scenario requires real-time text display on the screen, manually withdraw the displayed content and recommend replacing it with a custom reminder, such as "I can't answer this issue. Let's try another topic," to ensure terminal experience.</p>
                     */
                    std::string m_finishReason;
                    bool m_finishReasonHasBeenSet;

                    /**
                     * <p>Incremental return value. This field is used when streaming.</p>
                     */
                    Delta m_delta;
                    bool m_deltaHasBeenSet;

                    /**
                     * <p>Return value, used when Non-streaming calls.</p>
                     */
                    Message m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>Index value. This field is used when streaming.</p>
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CHOICE_H_
