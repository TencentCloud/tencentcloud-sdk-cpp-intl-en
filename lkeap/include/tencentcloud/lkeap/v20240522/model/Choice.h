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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_CHOICE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_CHOICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/Delta.h>
#include <tencentcloud/lkeap/v20240522/model/Message.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * The returned response. Supports multiple responses.
                */
                class Choice : public AbstractModel
                {
                public:
                    Choice();
                    ~Choice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The end flag, which can be "stop" or "content_filter."
"Stop" indicates normal output end.
"Content_filter" appears only when streaming output review is enabled, indicating that the security review has not passed.
                     * @return FinishReason The end flag, which can be "stop" or "content_filter."
"Stop" indicates normal output end.
"Content_filter" appears only when streaming output review is enabled, indicating that the security review has not passed.
                     * 
                     */
                    std::string GetFinishReason() const;

                    /**
                     * 设置The end flag, which can be "stop" or "content_filter."
"Stop" indicates normal output end.
"Content_filter" appears only when streaming output review is enabled, indicating that the security review has not passed.
                     * @param _finishReason The end flag, which can be "stop" or "content_filter."
"Stop" indicates normal output end.
"Content_filter" appears only when streaming output review is enabled, indicating that the security review has not passed.
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
                     * 获取Incremental return value, used when making streaming calls.
                     * @return Delta Incremental return value, used when making streaming calls.
                     * 
                     */
                    Delta GetDelta() const;

                    /**
                     * 设置Incremental return value, used when making streaming calls.
                     * @param _delta Incremental return value, used when making streaming calls.
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
                     * 获取Return value, used when making non-streaming calls.
                     * @return Message Return value, used when making non-streaming calls.
                     * 
                     */
                    Message GetMessage() const;

                    /**
                     * 设置Return value, used when making non-streaming calls.
                     * @param _message Return value, used when making non-streaming calls.
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
                     * 获取Index value, used when making streaming calls.
                     * @return Index Index value, used when making streaming calls.
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置Index value, used when making streaming calls.
                     * @param _index Index value, used when making streaming calls.
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
                     * The end flag, which can be "stop" or "content_filter."
"Stop" indicates normal output end.
"Content_filter" appears only when streaming output review is enabled, indicating that the security review has not passed.
                     */
                    std::string m_finishReason;
                    bool m_finishReasonHasBeenSet;

                    /**
                     * Incremental return value, used when making streaming calls.
                     */
                    Delta m_delta;
                    bool m_deltaHasBeenSet;

                    /**
                     * Return value, used when making non-streaming calls.
                     */
                    Message m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Index value, used when making streaming calls.
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_CHOICE_H_
