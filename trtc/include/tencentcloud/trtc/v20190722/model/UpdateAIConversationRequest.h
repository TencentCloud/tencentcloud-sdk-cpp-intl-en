/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATEAICONVERSATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATEAICONVERSATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UpdateAIConversation request structure.
                */
                class UpdateAIConversationRequest : public AbstractModel
                {
                public:
                    UpdateAIConversationRequest();
                    ~UpdateAIConversationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task Unique ID
                     * @return TaskId Task Unique ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task Unique ID
                     * @param _taskId Task Unique ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取If you do not fill in the form, no update will be performed. Welcome message from the robot
                     * @return WelcomeMessage If you do not fill in the form, no update will be performed. Welcome message from the robot
                     * 
                     */
                    std::string GetWelcomeMessage() const;

                    /**
                     * 设置If you do not fill in the form, no update will be performed. Welcome message from the robot
                     * @param _welcomeMessage If you do not fill in the form, no update will be performed. Welcome message from the robot
                     * 
                     */
                    void SetWelcomeMessage(const std::string& _welcomeMessage);

                    /**
                     * 判断参数 WelcomeMessage 是否已赋值
                     * @return WelcomeMessage 是否已赋值
                     * 
                     */
                    bool WelcomeMessageHasBeenSet() const;

                    /**
                     * 获取If not filled in, no update will be performed. Intelligent interruption mode, 0 means the server automatically interrupts, 1 means the server does not interrupt, and the client sends an interrupt signal to interrupt
                     * @return InterruptMode If not filled in, no update will be performed. Intelligent interruption mode, 0 means the server automatically interrupts, 1 means the server does not interrupt, and the client sends an interrupt signal to interrupt
                     * 
                     */
                    uint64_t GetInterruptMode() const;

                    /**
                     * 设置If not filled in, no update will be performed. Intelligent interruption mode, 0 means the server automatically interrupts, 1 means the server does not interrupt, and the client sends an interrupt signal to interrupt
                     * @param _interruptMode If not filled in, no update will be performed. Intelligent interruption mode, 0 means the server automatically interrupts, 1 means the server does not interrupt, and the client sends an interrupt signal to interrupt
                     * 
                     */
                    void SetInterruptMode(const uint64_t& _interruptMode);

                    /**
                     * 判断参数 InterruptMode 是否已赋值
                     * @return InterruptMode 是否已赋值
                     * 
                     */
                    bool InterruptModeHasBeenSet() const;

                    /**
                     * 获取If not filled in, no update will be performed. Used when InterruptMode is 0, the unit is milliseconds, and the default is 500ms. It means that the server will interrupt when it detects a voice that lasts for InterruptSpeechDuration milliseconds.
                     * @return InterruptSpeechDuration If not filled in, no update will be performed. Used when InterruptMode is 0, the unit is milliseconds, and the default is 500ms. It means that the server will interrupt when it detects a voice that lasts for InterruptSpeechDuration milliseconds.
                     * 
                     */
                    uint64_t GetInterruptSpeechDuration() const;

                    /**
                     * 设置If not filled in, no update will be performed. Used when InterruptMode is 0, the unit is milliseconds, and the default is 500ms. It means that the server will interrupt when it detects a voice that lasts for InterruptSpeechDuration milliseconds.
                     * @param _interruptSpeechDuration If not filled in, no update will be performed. Used when InterruptMode is 0, the unit is milliseconds, and the default is 500ms. It means that the server will interrupt when it detects a voice that lasts for InterruptSpeechDuration milliseconds.
                     * 
                     */
                    void SetInterruptSpeechDuration(const uint64_t& _interruptSpeechDuration);

                    /**
                     * 判断参数 InterruptSpeechDuration 是否已赋值
                     * @return InterruptSpeechDuration 是否已赋值
                     * 
                     */
                    bool InterruptSpeechDurationHasBeenSet() const;

                    /**
                     * 获取If not filled in, no update will be performed. For LLM configuration, see the StartAIConversation API for details.
                     * @return LLMConfig If not filled in, no update will be performed. For LLM configuration, see the StartAIConversation API for details.
                     * 
                     */
                    std::string GetLLMConfig() const;

                    /**
                     * 设置If not filled in, no update will be performed. For LLM configuration, see the StartAIConversation API for details.
                     * @param _lLMConfig If not filled in, no update will be performed. For LLM configuration, see the StartAIConversation API for details.
                     * 
                     */
                    void SetLLMConfig(const std::string& _lLMConfig);

                    /**
                     * 判断参数 LLMConfig 是否已赋值
                     * @return LLMConfig 是否已赋值
                     * 
                     */
                    bool LLMConfigHasBeenSet() const;

                    /**
                     * 获取If not filled in, no update will be performed. For TTS configuration, see the StartAIConversation API for details.
                     * @return TTSConfig If not filled in, no update will be performed. For TTS configuration, see the StartAIConversation API for details.
                     * 
                     */
                    std::string GetTTSConfig() const;

                    /**
                     * 设置If not filled in, no update will be performed. For TTS configuration, see the StartAIConversation API for details.
                     * @param _tTSConfig If not filled in, no update will be performed. For TTS configuration, see the StartAIConversation API for details.
                     * 
                     */
                    void SetTTSConfig(const std::string& _tTSConfig);

                    /**
                     * 判断参数 TTSConfig 是否已赋值
                     * @return TTSConfig 是否已赋值
                     * 
                     */
                    bool TTSConfigHasBeenSet() const;

                private:

                    /**
                     * Task Unique ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * If you do not fill in the form, no update will be performed. Welcome message from the robot
                     */
                    std::string m_welcomeMessage;
                    bool m_welcomeMessageHasBeenSet;

                    /**
                     * If not filled in, no update will be performed. Intelligent interruption mode, 0 means the server automatically interrupts, 1 means the server does not interrupt, and the client sends an interrupt signal to interrupt
                     */
                    uint64_t m_interruptMode;
                    bool m_interruptModeHasBeenSet;

                    /**
                     * If not filled in, no update will be performed. Used when InterruptMode is 0, the unit is milliseconds, and the default is 500ms. It means that the server will interrupt when it detects a voice that lasts for InterruptSpeechDuration milliseconds.
                     */
                    uint64_t m_interruptSpeechDuration;
                    bool m_interruptSpeechDurationHasBeenSet;

                    /**
                     * If not filled in, no update will be performed. For LLM configuration, see the StartAIConversation API for details.
                     */
                    std::string m_lLMConfig;
                    bool m_lLMConfigHasBeenSet;

                    /**
                     * If not filled in, no update will be performed. For TTS configuration, see the StartAIConversation API for details.
                     */
                    std::string m_tTSConfig;
                    bool m_tTSConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATEAICONVERSATIONREQUEST_H_
