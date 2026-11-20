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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MODIFYVOICECONVERSATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MODIFYVOICECONVERSATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationLLMConfig.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationS2SConfig.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationDialogConfig.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * ModifyVoiceConversation request structure.
                */
                class ModifyVoiceConversationRequest : public AbstractModel
                {
                public:
                    ModifyVoiceConversationRequest();
                    ~ModifyVoiceConversationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>The <a href="https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid">SdkAppId</a> of TRTC, which is the same as the SdkAppId corresponding to the conversation room.</p>
                     * @return SdkAppId <p>The <a href="https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid">SdkAppId</a> of TRTC, which is the same as the SdkAppId corresponding to the conversation room.</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>The <a href="https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid">SdkAppId</a> of TRTC, which is the same as the SdkAppId corresponding to the conversation room.</p>
                     * @param _sdkAppId <p>The <a href="https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid">SdkAppId</a> of TRTC, which is the same as the SdkAppId corresponding to the conversation room.</p>
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
                     * 获取For the same task, `SequenceNumber` must increase with each modification request. This prevents requests from being applied out of order.
                     * @return SequenceNumber For the same task, `SequenceNumber` must increase with each modification request. This prevents requests from being applied out of order.
                     * 
                     */
                    uint64_t GetSequenceNumber() const;

                    /**
                     * 设置For the same task, `SequenceNumber` must increase with each modification request. This prevents requests from being applied out of order.
                     * @param _sequenceNumber For the same task, `SequenceNumber` must increase with each modification request. This prevents requests from being applied out of order.
                     * 
                     */
                    void SetSequenceNumber(const uint64_t& _sequenceNumber);

                    /**
                     * 判断参数 SequenceNumber 是否已赋值
                     * @return SequenceNumber 是否已赋值
                     * 
                     */
                    bool SequenceNumberHasBeenSet() const;

                    /**
                     * 获取Large language model (LLM) configuration. Applies only in `Cascade` mode. In `S2S` mode, the request returns an error.
                     * @return LLMConfig Large language model (LLM) configuration. Applies only in `Cascade` mode. In `S2S` mode, the request returns an error.
                     * 
                     */
                    VoiceConversationLLMConfig GetLLMConfig() const;

                    /**
                     * 设置Large language model (LLM) configuration. Applies only in `Cascade` mode. In `S2S` mode, the request returns an error.
                     * @param _lLMConfig Large language model (LLM) configuration. Applies only in `Cascade` mode. In `S2S` mode, the request returns an error.
                     * 
                     */
                    void SetLLMConfig(const VoiceConversationLLMConfig& _lLMConfig);

                    /**
                     * 判断参数 LLMConfig 是否已赋值
                     * @return LLMConfig 是否已赋值
                     * 
                     */
                    bool LLMConfigHasBeenSet() const;

                    /**
                     * 获取End-to-end speech-to-speech model configuration. Applies only in `S2S` mode. In `Cascade` mode, the request returns an error.
                     * @return S2SConfig End-to-end speech-to-speech model configuration. Applies only in `S2S` mode. In `Cascade` mode, the request returns an error.
                     * 
                     */
                    VoiceConversationS2SConfig GetS2SConfig() const;

                    /**
                     * 设置End-to-end speech-to-speech model configuration. Applies only in `S2S` mode. In `Cascade` mode, the request returns an error.
                     * @param _s2SConfig End-to-end speech-to-speech model configuration. Applies only in `S2S` mode. In `Cascade` mode, the request returns an error.
                     * 
                     */
                    void SetS2SConfig(const VoiceConversationS2SConfig& _s2SConfig);

                    /**
                     * 判断参数 S2SConfig 是否已赋值
                     * @return S2SConfig 是否已赋值
                     * 
                     */
                    bool S2SConfigHasBeenSet() const;

                    /**
                     * 获取Conversation control configuration. Applies only in `Cascade` mode.
                     * @return DialogConfig Conversation control configuration. Applies only in `Cascade` mode.
                     * 
                     */
                    VoiceConversationDialogConfig GetDialogConfig() const;

                    /**
                     * 设置Conversation control configuration. Applies only in `Cascade` mode.
                     * @param _dialogConfig Conversation control configuration. Applies only in `Cascade` mode.
                     * 
                     */
                    void SetDialogConfig(const VoiceConversationDialogConfig& _dialogConfig);

                    /**
                     * 判断参数 DialogConfig 是否已赋值
                     * @return DialogConfig 是否已赋值
                     * 
                     */
                    bool DialogConfigHasBeenSet() const;

                private:

                    /**
                     * <p>The <a href="https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid">SdkAppId</a> of TRTC, which is the same as the SdkAppId corresponding to the conversation room.</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Unique ID of the conversation task. Returned when the conversation task starts successfully.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * For the same task, `SequenceNumber` must increase with each modification request. This prevents requests from being applied out of order.
                     */
                    uint64_t m_sequenceNumber;
                    bool m_sequenceNumberHasBeenSet;

                    /**
                     * Large language model (LLM) configuration. Applies only in `Cascade` mode. In `S2S` mode, the request returns an error.
                     */
                    VoiceConversationLLMConfig m_lLMConfig;
                    bool m_lLMConfigHasBeenSet;

                    /**
                     * End-to-end speech-to-speech model configuration. Applies only in `S2S` mode. In `Cascade` mode, the request returns an error.
                     */
                    VoiceConversationS2SConfig m_s2SConfig;
                    bool m_s2SConfigHasBeenSet;

                    /**
                     * Conversation control configuration. Applies only in `Cascade` mode.
                     */
                    VoiceConversationDialogConfig m_dialogConfig;
                    bool m_dialogConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MODIFYVOICECONVERSATIONREQUEST_H_
