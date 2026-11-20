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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TranscriptionUserInfoParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Task parameters for an AI conversation.
                */
                class VoiceConversationConfig : public AbstractModel
                {
                public:
                    VoiceConversationConfig();
                    ~VoiceConversationConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取[UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#userid) used by the conversation service in the TRTC room. It must not match a UserId already used by another TRTC user or by the conversation service. Include the room ID in the UserId.
                     * @return UserId [UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#userid) used by the conversation service in the TRTC room. It must not match a UserId already used by another TRTC user or by the conversation service. Include the room ID in the UserId.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置[UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#userid) used by the conversation service in the TRTC room. It must not match a UserId already used by another TRTC user or by the conversation service. Include the room ID in the UserId.
                     * @param _userId [UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#userid) used by the conversation service in the TRTC room. It must not match a UserId already used by another TRTC user or by the conversation service. Include the room ID in the UserId.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取[UserSig](https://www.tencentcloud.com/document/product/647/45910?from_cn_redirect=1#UserSig) for the conversation service to join the TRTC room. It is the authentication signature of this UserId and works like a login password. For how to calculate UserSig, see the linked topic.
                     * @return UserSig [UserSig](https://www.tencentcloud.com/document/product/647/45910?from_cn_redirect=1#UserSig) for the conversation service to join the TRTC room. It is the authentication signature of this UserId and works like a login password. For how to calculate UserSig, see the linked topic.
                     * 
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置[UserSig](https://www.tencentcloud.com/document/product/647/45910?from_cn_redirect=1#UserSig) for the conversation service to join the TRTC room. It is the authentication signature of this UserId and works like a login password. For how to calculate UserSig, see the linked topic.
                     * @param _userSig [UserSig](https://www.tencentcloud.com/document/product/647/45910?from_cn_redirect=1#UserSig) for the conversation service to join the TRTC room. It is the authentication signature of this UserId and works like a login password. For how to calculate UserSig, see the linked topic.
                     * 
                     */
                    void SetUserSig(const std::string& _userSig);

                    /**
                     * 判断参数 UserSig 是否已赋值
                     * @return UserSig 是否已赋值
                     * 
                     */
                    bool UserSigHasBeenSet() const;

                    /**
                     * 获取<p>UserId of the anchor whose audio the conversation service subscribes to. Specify one anchor only.</p>
                     * @return TargetUserId <p>UserId of the anchor whose audio the conversation service subscribes to. Specify one anchor only.</p>
                     * 
                     */
                    std::vector<std::string> GetTargetUserId() const;

                    /**
                     * 设置<p>UserId of the anchor whose audio the conversation service subscribes to. Specify one anchor only.</p>
                     * @param _targetUserId <p>UserId of the anchor whose audio the conversation service subscribes to. Specify one anchor only.</p>
                     * 
                     */
                    void SetTargetUserId(const std::vector<std::string>& _targetUserId);

                    /**
                     * 判断参数 TargetUserId 是否已赋值
                     * @return TargetUserId 是否已赋值
                     * 
                     */
                    bool TargetUserIdHasBeenSet() const;

                    /**
                     * 获取<p>Parameters of the bot that publishes TTS audio back to the room.</p>
                     * @return TTSPushRoomParams <p>Parameters of the bot that publishes TTS audio back to the room.</p>
                     * 
                     */
                    TranscriptionUserInfoParams GetTTSPushRoomParams() const;

                    /**
                     * 设置<p>Parameters of the bot that publishes TTS audio back to the room.</p>
                     * @param _tTSPushRoomParams <p>Parameters of the bot that publishes TTS audio back to the room.</p>
                     * 
                     */
                    void SetTTSPushRoomParams(const TranscriptionUserInfoParams& _tTSPushRoomParams);

                    /**
                     * 判断参数 TTSPushRoomParams 是否已赋值
                     * @return TTSPushRoomParams 是否已赋值
                     * 
                     */
                    bool TTSPushRoomParamsHasBeenSet() const;

                    /**
                     * 获取<p>If an anchor in the conversation stays out of the TRTC room, or stays in the audience role, for longer than `MaxIdleTime`, the conversation task stops automatically. Valid range: 5 to 86400 (24 hours). Default: 30. Unit: seconds.</p>
                     * @return MaxIdleTime <p>If an anchor in the conversation stays out of the TRTC room, or stays in the audience role, for longer than `MaxIdleTime`, the conversation task stops automatically. Valid range: 5 to 86400 (24 hours). Default: 30. Unit: seconds.</p>
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置<p>If an anchor in the conversation stays out of the TRTC room, or stays in the audience role, for longer than `MaxIdleTime`, the conversation task stops automatically. Valid range: 5 to 86400 (24 hours). Default: 30. Unit: seconds.</p>
                     * @param _maxIdleTime <p>If an anchor in the conversation stays out of the TRTC room, or stays in the audience role, for longer than `MaxIdleTime`, the conversation task stops automatically. Valid range: 5 to 86400 (24 hours). Default: 30. Unit: seconds.</p>
                     * 
                     */
                    void SetMaxIdleTime(const uint64_t& _maxIdleTime);

                    /**
                     * 判断参数 MaxIdleTime 是否已赋值
                     * @return MaxIdleTime 是否已赋值
                     * 
                     */
                    bool MaxIdleTimeHasBeenSet() const;

                    /**
                     * 获取Filters content returned by the LLM. Text inside the specified brackets is not played. If this parameter is not set, nothing is filtered. Valid range: 1 to 5. Example: 1. 
Not supported in S2S mode.
Valid values:
- 1: Chinese parentheses 
- 2: English parentheses
- 3: Chinese square brackets
- 4: English square brackets
- 5: English curly braces
                     * @return FilterBracketsContent Filters content returned by the LLM. Text inside the specified brackets is not played. If this parameter is not set, nothing is filtered. Valid range: 1 to 5. Example: 1. 
Not supported in S2S mode.
Valid values:
- 1: Chinese parentheses 
- 2: English parentheses
- 3: Chinese square brackets
- 4: English square brackets
- 5: English curly braces
                     * 
                     */
                    std::vector<uint64_t> GetFilterBracketsContent() const;

                    /**
                     * 设置Filters content returned by the LLM. Text inside the specified brackets is not played. If this parameter is not set, nothing is filtered. Valid range: 1 to 5. Example: 1. 
Not supported in S2S mode.
Valid values:
- 1: Chinese parentheses 
- 2: English parentheses
- 3: Chinese square brackets
- 4: English square brackets
- 5: English curly braces
                     * @param _filterBracketsContent Filters content returned by the LLM. Text inside the specified brackets is not played. If this parameter is not set, nothing is filtered. Valid range: 1 to 5. Example: 1. 
Not supported in S2S mode.
Valid values:
- 1: Chinese parentheses 
- 2: English parentheses
- 3: Chinese square brackets
- 4: English square brackets
- 5: English curly braces
                     * 
                     */
                    void SetFilterBracketsContent(const std::vector<uint64_t>& _filterBracketsContent);

                    /**
                     * 判断参数 FilterBracketsContent 是否已赋值
                     * @return FilterBracketsContent 是否已赋值
                     * 
                     */
                    bool FilterBracketsContentHasBeenSet() const;

                    /**
                     * 获取Subtitle display mode. Not supported in S2S mode.
Valid values:
- 0: Show subtitles as soon as possible.
- 1: Show subtitles sentence by sentence in real time.
                     * @return SubtitleMode Subtitle display mode. Not supported in S2S mode.
Valid values:
- 0: Show subtitles as soon as possible.
- 1: Show subtitles sentence by sentence in real time.
                     * 
                     */
                    uint64_t GetSubtitleMode() const;

                    /**
                     * 设置Subtitle display mode. Not supported in S2S mode.
Valid values:
- 0: Show subtitles as soon as possible.
- 1: Show subtitles sentence by sentence in real time.
                     * @param _subtitleMode Subtitle display mode. Not supported in S2S mode.
Valid values:
- 0: Show subtitles as soon as possible.
- 1: Show subtitles sentence by sentence in real time.
                     * 
                     */
                    void SetSubtitleMode(const uint64_t& _subtitleMode);

                    /**
                     * 判断参数 SubtitleMode 是否已赋值
                     * @return SubtitleMode 是否已赋值
                     * 
                     */
                    bool SubtitleModeHasBeenSet() const;

                    /**
                     * 获取Controls how a new conversation turn starts. Default: `auto`. Not supported in S2S mode.
Valid values:

- `auto`: The backend detects the end of a sentence from the silence duration, and then calls the LLM.
                     * @return TurnDetectionMode Controls how a new conversation turn starts. Default: `auto`. Not supported in S2S mode.
Valid values:

- `auto`: The backend detects the end of a sentence from the silence duration, and then calls the LLM.
                     * 
                     */
                    std::string GetTurnDetectionMode() const;

                    /**
                     * 设置Controls how a new conversation turn starts. Default: `auto`. Not supported in S2S mode.
Valid values:

- `auto`: The backend detects the end of a sentence from the silence duration, and then calls the LLM.
                     * @param _turnDetectionMode Controls how a new conversation turn starts. Default: `auto`. Not supported in S2S mode.
Valid values:

- `auto`: The backend detects the end of a sentence from the silence duration, and then calls the LLM.
                     * 
                     */
                    void SetTurnDetectionMode(const std::string& _turnDetectionMode);

                    /**
                     * 判断参数 TurnDetectionMode 是否已赋值
                     * @return TurnDetectionMode 是否已赋值
                     * 
                     */
                    bool TurnDetectionModeHasBeenSet() const;

                private:

                    /**
                     * [UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#userid) used by the conversation service in the TRTC room. It must not match a UserId already used by another TRTC user or by the conversation service. Include the room ID in the UserId.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * [UserSig](https://www.tencentcloud.com/document/product/647/45910?from_cn_redirect=1#UserSig) for the conversation service to join the TRTC room. It is the authentication signature of this UserId and works like a login password. For how to calculate UserSig, see the linked topic.
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * <p>UserId of the anchor whose audio the conversation service subscribes to. Specify one anchor only.</p>
                     */
                    std::vector<std::string> m_targetUserId;
                    bool m_targetUserIdHasBeenSet;

                    /**
                     * <p>Parameters of the bot that publishes TTS audio back to the room.</p>
                     */
                    TranscriptionUserInfoParams m_tTSPushRoomParams;
                    bool m_tTSPushRoomParamsHasBeenSet;

                    /**
                     * <p>If an anchor in the conversation stays out of the TRTC room, or stays in the audience role, for longer than `MaxIdleTime`, the conversation task stops automatically. Valid range: 5 to 86400 (24 hours). Default: 30. Unit: seconds.</p>
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * Filters content returned by the LLM. Text inside the specified brackets is not played. If this parameter is not set, nothing is filtered. Valid range: 1 to 5. Example: 1. 
Not supported in S2S mode.
Valid values:
- 1: Chinese parentheses 
- 2: English parentheses
- 3: Chinese square brackets
- 4: English square brackets
- 5: English curly braces
                     */
                    std::vector<uint64_t> m_filterBracketsContent;
                    bool m_filterBracketsContentHasBeenSet;

                    /**
                     * Subtitle display mode. Not supported in S2S mode.
Valid values:
- 0: Show subtitles as soon as possible.
- 1: Show subtitles sentence by sentence in real time.
                     */
                    uint64_t m_subtitleMode;
                    bool m_subtitleModeHasBeenSet;

                    /**
                     * Controls how a new conversation turn starts. Default: `auto`. Not supported in S2S mode.
Valid values:

- `auto`: The backend detects the end of a sentence from the silence duration, and then calls the LLM.
                     */
                    std::string m_turnDetectionMode;
                    bool m_turnDetectionModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONCONFIG_H_
