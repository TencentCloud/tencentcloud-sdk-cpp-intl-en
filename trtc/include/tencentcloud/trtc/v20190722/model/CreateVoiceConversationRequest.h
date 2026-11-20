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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CREATEVOICECONVERSATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CREATEVOICECONVERSATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationConfig.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationS2SConfig.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationSTTConfig.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationLLMConfig.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationTTSConfig.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationDialogConfig.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationVisionConfig.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * CreateVoiceConversation request structure.
                */
                class CreateVoiceConversationRequest : public AbstractModel
                {
                public:
                    CreateVoiceConversationRequest();
                    ~CreateVoiceConversationRequest() = default;
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
                     * 获取[Room ID](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid) of the TRTC room where the conversation runs. Room IDs are numeric by default. If the room ID is a string, set RoomIdType to 1.
                     * @return RoomId [Room ID](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid) of the TRTC room where the conversation runs. Room IDs are numeric by default. If the room ID is a string, set RoomIdType to 1.
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置[Room ID](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid) of the TRTC room where the conversation runs. Room IDs are numeric by default. If the room ID is a string, set RoomIdType to 1.
                     * @param _roomId [Room ID](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid) of the TRTC room where the conversation runs. Room IDs are numeric by default. If the room ID is a string, set RoomIdType to 1.
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取Room ID type. It must match the room ID type of the conversation room. 0 is a numeric room ID, and 1 is a string room ID.
Valid values:
- 0: numeric room ID (Default)
- 1: string room ID
                     * @return RoomIdType Room ID type. It must match the room ID type of the conversation room. 0 is a numeric room ID, and 1 is a string room ID.
Valid values:
- 0: numeric room ID (Default)
- 1: string room ID
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置Room ID type. It must match the room ID type of the conversation room. 0 is a numeric room ID, and 1 is a string room ID.
Valid values:
- 0: numeric room ID (Default)
- 1: string room ID
                     * @param _roomIdType Room ID type. It must match the room ID type of the conversation room. 0 is a numeric room ID, and 1 is a string room ID.
Valid values:
- 0: numeric room ID (Default)
- 1: string room ID
                     * 
                     */
                    void SetRoomIdType(const uint64_t& _roomIdType);

                    /**
                     * 判断参数 RoomIdType 是否已赋值
                     * @return RoomIdType 是否已赋值
                     * 
                     */
                    bool RoomIdTypeHasBeenSet() const;

                    /**
                     * 获取<p>Chatbot configuration.</p>
                     * @return AgentConfig <p>Chatbot configuration.</p>
                     * 
                     */
                    VoiceConversationConfig GetAgentConfig() const;

                    /**
                     * 设置<p>Chatbot configuration.</p>
                     * @param _agentConfig <p>Chatbot configuration.</p>
                     * 
                     */
                    void SetAgentConfig(const VoiceConversationConfig& _agentConfig);

                    /**
                     * 判断参数 AgentConfig 是否已赋值
                     * @return AgentConfig 是否已赋值
                     * 
                     */
                    bool AgentConfigHasBeenSet() const;

                    /**
                     * 获取Conversation pipeline mode: `Cascade` (default, three-stage pipeline) or `S2S` (end-to-end speech-to-speech model).
Valid values:
- Cascade: three-stage pipeline (default). Speech recognition, a large language model, and text-to-speech.
- S2S: end-to-end speech-to-speech model.
Default: Cascade
                     * @return ConversationMode Conversation pipeline mode: `Cascade` (default, three-stage pipeline) or `S2S` (end-to-end speech-to-speech model).
Valid values:
- Cascade: three-stage pipeline (default). Speech recognition, a large language model, and text-to-speech.
- S2S: end-to-end speech-to-speech model.
Default: Cascade
                     * 
                     */
                    std::string GetConversationMode() const;

                    /**
                     * 设置Conversation pipeline mode: `Cascade` (default, three-stage pipeline) or `S2S` (end-to-end speech-to-speech model).
Valid values:
- Cascade: three-stage pipeline (default). Speech recognition, a large language model, and text-to-speech.
- S2S: end-to-end speech-to-speech model.
Default: Cascade
                     * @param _conversationMode Conversation pipeline mode: `Cascade` (default, three-stage pipeline) or `S2S` (end-to-end speech-to-speech model).
Valid values:
- Cascade: three-stage pipeline (default). Speech recognition, a large language model, and text-to-speech.
- S2S: end-to-end speech-to-speech model.
Default: Cascade
                     * 
                     */
                    void SetConversationMode(const std::string& _conversationMode);

                    /**
                     * 判断参数 ConversationMode 是否已赋值
                     * @return ConversationMode 是否已赋值
                     * 
                     */
                    bool ConversationModeHasBeenSet() const;

                    /**
                     * 获取End-to-end speech-to-speech model configuration. Required only in `S2S` mode. Ignored in `Cascade` mode.
                     * @return S2SConfig End-to-end speech-to-speech model configuration. Required only in `S2S` mode. Ignored in `Cascade` mode.
                     * 
                     */
                    VoiceConversationS2SConfig GetS2SConfig() const;

                    /**
                     * 设置End-to-end speech-to-speech model configuration. Required only in `S2S` mode. Ignored in `Cascade` mode.
                     * @param _s2SConfig End-to-end speech-to-speech model configuration. Required only in `S2S` mode. Ignored in `Cascade` mode.
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
                     * 获取<p>Speech recognition configuration. <strong>Required only in <code>Cascade</code> mode</strong>; ignored in <code>S2S</code> mode.</p>
                     * @return STTConfig <p>Speech recognition configuration. <strong>Required only in <code>Cascade</code> mode</strong>; ignored in <code>S2S</code> mode.</p>
                     * 
                     */
                    VoiceConversationSTTConfig GetSTTConfig() const;

                    /**
                     * 设置<p>Speech recognition configuration. <strong>Required only in <code>Cascade</code> mode</strong>; ignored in <code>S2S</code> mode.</p>
                     * @param _sTTConfig <p>Speech recognition configuration. <strong>Required only in <code>Cascade</code> mode</strong>; ignored in <code>S2S</code> mode.</p>
                     * 
                     */
                    void SetSTTConfig(const VoiceConversationSTTConfig& _sTTConfig);

                    /**
                     * 判断参数 STTConfig 是否已赋值
                     * @return STTConfig 是否已赋值
                     * 
                     */
                    bool STTConfigHasBeenSet() const;

                    /**
                     * 获取Large language model (LLM) configuration. Required only in `Cascade` mode. Ignored in `S2S` mode.
                     * @return LLMConfig Large language model (LLM) configuration. Required only in `Cascade` mode. Ignored in `S2S` mode.
                     * 
                     */
                    VoiceConversationLLMConfig GetLLMConfig() const;

                    /**
                     * 设置Large language model (LLM) configuration. Required only in `Cascade` mode. Ignored in `S2S` mode.
                     * @param _lLMConfig Large language model (LLM) configuration. Required only in `Cascade` mode. Ignored in `S2S` mode.
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
                     * 获取<p>Text to speech configuration. <strong>Required only in <code>Cascade</code> mode</strong>; ignored in <code>S2S</code> mode.</p>
                     * @return TTSConfig <p>Text to speech configuration. <strong>Required only in <code>Cascade</code> mode</strong>; ignored in <code>S2S</code> mode.</p>
                     * 
                     */
                    VoiceConversationTTSConfig GetTTSConfig() const;

                    /**
                     * 设置<p>Text to speech configuration. <strong>Required only in <code>Cascade</code> mode</strong>; ignored in <code>S2S</code> mode.</p>
                     * @param _tTSConfig <p>Text to speech configuration. <strong>Required only in <code>Cascade</code> mode</strong>; ignored in <code>S2S</code> mode.</p>
                     * 
                     */
                    void SetTTSConfig(const VoiceConversationTTSConfig& _tTSConfig);

                    /**
                     * 判断参数 TTSConfig 是否已赋值
                     * @return TTSConfig 是否已赋值
                     * 
                     */
                    bool TTSConfigHasBeenSet() const;

                    /**
                     * 获取Conversation control configuration. Not supported in `S2S` mode.
                     * @return DialogConfig Conversation control configuration. Not supported in `S2S` mode.
                     * 
                     */
                    VoiceConversationDialogConfig GetDialogConfig() const;

                    /**
                     * 设置Conversation control configuration. Not supported in `S2S` mode.
                     * @param _dialogConfig Conversation control configuration. Not supported in `S2S` mode.
                     * 
                     */
                    void SetDialogConfig(const VoiceConversationDialogConfig& _dialogConfig);

                    /**
                     * 判断参数 DialogConfig 是否已赋值
                     * @return DialogConfig 是否已赋值
                     * 
                     */
                    bool DialogConfigHasBeenSet() const;

                    /**
                     * 获取Visual understanding configuration. Not supported in `S2S` mode.
                     * @return VisionConfig Visual understanding configuration. Not supported in `S2S` mode.
                     * 
                     */
                    VoiceConversationVisionConfig GetVisionConfig() const;

                    /**
                     * 设置Visual understanding configuration. Not supported in `S2S` mode.
                     * @param _visionConfig Visual understanding configuration. Not supported in `S2S` mode.
                     * 
                     */
                    void SetVisionConfig(const VoiceConversationVisionConfig& _visionConfig);

                    /**
                     * 判断参数 VisionConfig 是否已赋值
                     * @return VisionConfig 是否已赋值
                     * 
                     */
                    bool VisionConfigHasBeenSet() const;

                private:

                    /**
                     * The TRTC [SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid). It must be the same SdkAppId as the conversation room.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * [Room ID](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid) of the TRTC room where the conversation runs. Room IDs are numeric by default. If the room ID is a string, set RoomIdType to 1.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Room ID type. It must match the room ID type of the conversation room. 0 is a numeric room ID, and 1 is a string room ID.
Valid values:
- 0: numeric room ID (Default)
- 1: string room ID
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * <p>Chatbot configuration.</p>
                     */
                    VoiceConversationConfig m_agentConfig;
                    bool m_agentConfigHasBeenSet;

                    /**
                     * Conversation pipeline mode: `Cascade` (default, three-stage pipeline) or `S2S` (end-to-end speech-to-speech model).
Valid values:
- Cascade: three-stage pipeline (default). Speech recognition, a large language model, and text-to-speech.
- S2S: end-to-end speech-to-speech model.
Default: Cascade
                     */
                    std::string m_conversationMode;
                    bool m_conversationModeHasBeenSet;

                    /**
                     * End-to-end speech-to-speech model configuration. Required only in `S2S` mode. Ignored in `Cascade` mode.
                     */
                    VoiceConversationS2SConfig m_s2SConfig;
                    bool m_s2SConfigHasBeenSet;

                    /**
                     * <p>Speech recognition configuration. <strong>Required only in <code>Cascade</code> mode</strong>; ignored in <code>S2S</code> mode.</p>
                     */
                    VoiceConversationSTTConfig m_sTTConfig;
                    bool m_sTTConfigHasBeenSet;

                    /**
                     * Large language model (LLM) configuration. Required only in `Cascade` mode. Ignored in `S2S` mode.
                     */
                    VoiceConversationLLMConfig m_lLMConfig;
                    bool m_lLMConfigHasBeenSet;

                    /**
                     * <p>Text to speech configuration. <strong>Required only in <code>Cascade</code> mode</strong>; ignored in <code>S2S</code> mode.</p>
                     */
                    VoiceConversationTTSConfig m_tTSConfig;
                    bool m_tTSConfigHasBeenSet;

                    /**
                     * Conversation control configuration. Not supported in `S2S` mode.
                     */
                    VoiceConversationDialogConfig m_dialogConfig;
                    bool m_dialogConfigHasBeenSet;

                    /**
                     * Visual understanding configuration. Not supported in `S2S` mode.
                     */
                    VoiceConversationVisionConfig m_visionConfig;
                    bool m_visionConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CREATEVOICECONVERSATIONREQUEST_H_
