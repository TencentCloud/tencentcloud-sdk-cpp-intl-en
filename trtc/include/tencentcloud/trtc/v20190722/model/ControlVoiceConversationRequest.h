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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CONTROLVOICECONVERSATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CONTROLVOICECONVERSATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationInvokeLLM.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationInvokeTTS.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * ControlVoiceConversation request structure.
                */
                class ControlVoiceConversationRequest : public AbstractModel
                {
                public:
                    ControlVoiceConversationRequest();
                    ~ControlVoiceConversationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The TRTC [SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid). It must be the same SdkAppId as the conversation room.
                     * @return SdkAppId The TRTC [SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid). It must be the same SdkAppId as the conversation room.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The TRTC [SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid). It must be the same SdkAppId as the conversation room.
                     * @param _sdkAppId The TRTC [SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid). It must be the same SdkAppId as the conversation room.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Unique ID of the conversation task. Returned when the conversation task starts successfully.
                     * @return TaskId Unique ID of the conversation task. Returned when the conversation task starts successfully.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Unique ID of the conversation task. Returned when the conversation task starts successfully.
                     * @param _taskId Unique ID of the conversation task. Returned when the conversation task starts successfully.
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
                     * 获取Control command.
Valid values:

- `Interrupt`: Force-interrupt the AI bot's current speech.
- `invokellm`: Inject text into the current conversation context to trigger one LLM response. Not supported in `S2S` mode.
- `invoketts`: Inject text into the current TTS so the AI bot broadcasts it. Not supported in `S2S` mode.
                     * @return Command Control command.
Valid values:

- `Interrupt`: Force-interrupt the AI bot's current speech.
- `invokellm`: Inject text into the current conversation context to trigger one LLM response. Not supported in `S2S` mode.
- `invoketts`: Inject text into the current TTS so the AI bot broadcasts it. Not supported in `S2S` mode.
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置Control command.
Valid values:

- `Interrupt`: Force-interrupt the AI bot's current speech.
- `invokellm`: Inject text into the current conversation context to trigger one LLM response. Not supported in `S2S` mode.
- `invoketts`: Inject text into the current TTS so the AI bot broadcasts it. Not supported in `S2S` mode.
                     * @param _command Control command.
Valid values:

- `Interrupt`: Force-interrupt the AI bot's current speech.
- `invokellm`: Inject text into the current conversation context to trigger one LLM response. Not supported in `S2S` mode.
- `invoketts`: Inject text into the current TTS so the AI bot broadcasts it. Not supported in `S2S` mode.
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取Configuration for injecting text into the LLM. Required when `Command` is `invokellm`.
                     * @return InvokeLLM Configuration for injecting text into the LLM. Required when `Command` is `invokellm`.
                     * 
                     */
                    VoiceConversationInvokeLLM GetInvokeLLM() const;

                    /**
                     * 设置Configuration for injecting text into the LLM. Required when `Command` is `invokellm`.
                     * @param _invokeLLM Configuration for injecting text into the LLM. Required when `Command` is `invokellm`.
                     * 
                     */
                    void SetInvokeLLM(const VoiceConversationInvokeLLM& _invokeLLM);

                    /**
                     * 判断参数 InvokeLLM 是否已赋值
                     * @return InvokeLLM 是否已赋值
                     * 
                     */
                    bool InvokeLLMHasBeenSet() const;

                    /**
                     * 获取Configuration for injecting text into TTS. Required when `Command` is `invoketts`.
                     * @return InvokeTTS Configuration for injecting text into TTS. Required when `Command` is `invoketts`.
                     * 
                     */
                    VoiceConversationInvokeTTS GetInvokeTTS() const;

                    /**
                     * 设置Configuration for injecting text into TTS. Required when `Command` is `invoketts`.
                     * @param _invokeTTS Configuration for injecting text into TTS. Required when `Command` is `invoketts`.
                     * 
                     */
                    void SetInvokeTTS(const VoiceConversationInvokeTTS& _invokeTTS);

                    /**
                     * 判断参数 InvokeTTS 是否已赋值
                     * @return InvokeTTS 是否已赋值
                     * 
                     */
                    bool InvokeTTSHasBeenSet() const;

                private:

                    /**
                     * The TRTC [SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid). It must be the same SdkAppId as the conversation room.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Unique ID of the conversation task. Returned when the conversation task starts successfully.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Control command.
Valid values:

- `Interrupt`: Force-interrupt the AI bot's current speech.
- `invokellm`: Inject text into the current conversation context to trigger one LLM response. Not supported in `S2S` mode.
- `invoketts`: Inject text into the current TTS so the AI bot broadcasts it. Not supported in `S2S` mode.
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * Configuration for injecting text into the LLM. Required when `Command` is `invokellm`.
                     */
                    VoiceConversationInvokeLLM m_invokeLLM;
                    bool m_invokeLLMHasBeenSet;

                    /**
                     * Configuration for injecting text into TTS. Required when `Command` is `invoketts`.
                     */
                    VoiceConversationInvokeTTS m_invokeTTS;
                    bool m_invokeTTSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CONTROLVOICECONVERSATIONREQUEST_H_
