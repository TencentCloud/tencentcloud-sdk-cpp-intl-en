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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONINVOKELLM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONINVOKELLM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The server proactively sends a request to the LLM.
                */
                class VoiceConversationInvokeLLM : public AbstractModel
                {
                public:
                    VoiceConversationInvokeLLM();
                    ~VoiceConversationInvokeLLM() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The injected content.</p>
                     * @return Content <p>The injected content.</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>The injected content.</p>
                     * @param _content <p>The injected content.</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Priority. If no conversation is in progress, the injected content is sent to the LLM. Otherwise, the behavior depends on this value. Default: 0.
Valid values:
- 0: High. Interrupt the current conversation, clear the waiting queue, and send the injected content to the LLM.
- 1: Medium. Do not interrupt the current conversation. Clear the waiting queue and queue the injected content. If no conversation is in progress, the injected content is still queued.
- 2: Low. Discard the injected content.
                     * @return Priority Priority. If no conversation is in progress, the injected content is sent to the LLM. Otherwise, the behavior depends on this value. Default: 0.
Valid values:
- 0: High. Interrupt the current conversation, clear the waiting queue, and send the injected content to the LLM.
- 1: Medium. Do not interrupt the current conversation. Clear the waiting queue and queue the injected content. If no conversation is in progress, the injected content is still queued.
- 2: Low. Discard the injected content.
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置Priority. If no conversation is in progress, the injected content is sent to the LLM. Otherwise, the behavior depends on this value. Default: 0.
Valid values:
- 0: High. Interrupt the current conversation, clear the waiting queue, and send the injected content to the LLM.
- 1: Medium. Do not interrupt the current conversation. Clear the waiting queue and queue the injected content. If no conversation is in progress, the injected content is still queued.
- 2: Low. Discard the injected content.
                     * @param _priority Priority. If no conversation is in progress, the injected content is sent to the LLM. Otherwise, the behavior depends on this value. Default: 0.
Valid values:
- 0: High. Interrupt the current conversation, clear the waiting queue, and send the injected content to the LLM.
- 1: Medium. Do not interrupt the current conversation. Clear the waiting queue and queue the injected content. If no conversation is in progress, the injected content is still queued.
- 2: Low. Discard the injected content.
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * <p>The injected content.</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Priority. If no conversation is in progress, the injected content is sent to the LLM. Otherwise, the behavior depends on this value. Default: 0.
Valid values:
- 0: High. Interrupt the current conversation, clear the waiting queue, and send the injected content to the LLM.
- 1: Medium. Do not interrupt the current conversation. Clear the waiting queue and queue the injected content. If no conversation is in progress, the injected content is still queued.
- 2: Low. Discard the injected content.
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONINVOKELLM_H_
