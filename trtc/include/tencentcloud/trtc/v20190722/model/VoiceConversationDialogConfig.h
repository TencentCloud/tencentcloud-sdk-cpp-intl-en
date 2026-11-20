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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONDIALOGCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONDIALOGCONFIG_H_

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
                * Configuration for AI conversation.
                */
                class VoiceConversationDialogConfig : public AbstractModel
                {
                public:
                    VoiceConversationDialogConfig();
                    ~VoiceConversationDialogConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Interrupt mode. Default: 0.
Valid values:
- 0: Automatic. When STT returns text, it interrupts TTS playback. Use this mode with InterruptSpeechDuration.
- 1: Manual. The bot is interrupted only by the Interrupt command from the server or client API.
- 2: Keyword.
                     * @return InterruptMode Interrupt mode. Default: 0.
Valid values:
- 0: Automatic. When STT returns text, it interrupts TTS playback. Use this mode with InterruptSpeechDuration.
- 1: Manual. The bot is interrupted only by the Interrupt command from the server or client API.
- 2: Keyword.
                     * 
                     */
                    uint64_t GetInterruptMode() const;

                    /**
                     * 设置Interrupt mode. Default: 0.
Valid values:
- 0: Automatic. When STT returns text, it interrupts TTS playback. Use this mode with InterruptSpeechDuration.
- 1: Manual. The bot is interrupted only by the Interrupt command from the server or client API.
- 2: Keyword.
                     * @param _interruptMode Interrupt mode. Default: 0.
Valid values:
- 0: Automatic. When STT returns text, it interrupts TTS playback. Use this mode with InterruptSpeechDuration.
- 1: Manual. The bot is interrupted only by the Interrupt command from the server or client API.
- 2: Keyword.
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
                     * 获取Minimum duration of user speech that triggers an automatic interrupt. Default: 200. Unit: ms.
                     * @return InterruptSpeechDuration Minimum duration of user speech that triggers an automatic interrupt. Default: 200. Unit: ms.
                     * 
                     */
                    uint64_t GetInterruptSpeechDuration() const;

                    /**
                     * 设置Minimum duration of user speech that triggers an automatic interrupt. Default: 200. Unit: ms.
                     * @param _interruptSpeechDuration Minimum duration of user speech that triggers an automatic interrupt. Default: 200. Unit: ms.
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
                     * 获取Preset keywords that interrupt the bot. Use them when the user must explicitly indicate the intent to interrupt. You can set up to 128 keywords. Applies only when `InterruptMode` is 2.
                     * @return InterruptKeywords Preset keywords that interrupt the bot. Use them when the user must explicitly indicate the intent to interrupt. You can set up to 128 keywords. Applies only when `InterruptMode` is 2.
                     * 
                     */
                    std::vector<std::string> GetInterruptKeywords() const;

                    /**
                     * 设置Preset keywords that interrupt the bot. Use them when the user must explicitly indicate the intent to interrupt. You can set up to 128 keywords. Applies only when `InterruptMode` is 2.
                     * @param _interruptKeywords Preset keywords that interrupt the bot. Use them when the user must explicitly indicate the intent to interrupt. You can set up to 128 keywords. Applies only when `InterruptMode` is 2.
                     * 
                     */
                    void SetInterruptKeywords(const std::vector<std::string>& _interruptKeywords);

                    /**
                     * 判断参数 InterruptKeywords 是否已赋值
                     * @return InterruptKeywords 是否已赋值
                     * 
                     */
                    bool InterruptKeywordsHasBeenSet() const;

                    /**
                     * 获取How long the user is silent before the bot asks a follow-up question. Valid range: 0 to 300. 0 turns this off. Default: 0. Unit: seconds.


                     * @return SilenceFollowUp How long the user is silent before the bot asks a follow-up question. Valid range: 0 to 300. 0 turns this off. Default: 0. Unit: seconds.


                     * 
                     */
                    uint64_t GetSilenceFollowUp() const;

                    /**
                     * 设置How long the user is silent before the bot asks a follow-up question. Valid range: 0 to 300. 0 turns this off. Default: 0. Unit: seconds.


                     * @param _silenceFollowUp How long the user is silent before the bot asks a follow-up question. Valid range: 0 to 300. 0 turns this off. Default: 0. Unit: seconds.


                     * 
                     */
                    void SetSilenceFollowUp(const uint64_t& _silenceFollowUp);

                    /**
                     * 判断参数 SilenceFollowUp 是否已赋值
                     * @return SilenceFollowUp 是否已赋值
                     * 
                     */
                    bool SilenceFollowUpHasBeenSet() const;

                    /**
                     * 获取<p>Text of the proactive follow-up question.</p>
                     * @return SilenceFollowUpText <p>Text of the proactive follow-up question.</p>
                     * 
                     */
                    std::string GetSilenceFollowUpText() const;

                    /**
                     * 设置<p>Text of the proactive follow-up question.</p>
                     * @param _silenceFollowUpText <p>Text of the proactive follow-up question.</p>
                     * 
                     */
                    void SetSilenceFollowUpText(const std::string& _silenceFollowUpText);

                    /**
                     * 判断参数 SilenceFollowUpText 是否已赋值
                     * @return SilenceFollowUpText 是否已赋值
                     * 
                     */
                    bool SilenceFollowUpTextHasBeenSet() const;

                    /**
                     * 获取Welcome message the bot broadcasts when an anchor enters the room for the first time. It is broadcast again when the anchor leaves the room and enters again.
                     * @return WelcomeMessage Welcome message the bot broadcasts when an anchor enters the room for the first time. It is broadcast again when the anchor leaves the room and enters again.
                     * 
                     */
                    std::string GetWelcomeMessage() const;

                    /**
                     * 设置Welcome message the bot broadcasts when an anchor enters the room for the first time. It is broadcast again when the anchor leaves the room and enters again.
                     * @param _welcomeMessage Welcome message the bot broadcasts when an anchor enters the room for the first time. It is broadcast again when the anchor leaves the room and enters again.
                     * 
                     */
                    void SetWelcomeMessage(const std::string& _welcomeMessage);

                    /**
                     * 判断参数 WelcomeMessage 是否已赋值
                     * @return WelcomeMessage 是否已赋值
                     * 
                     */
                    bool WelcomeMessageHasBeenSet() const;

                private:

                    /**
                     * Interrupt mode. Default: 0.
Valid values:
- 0: Automatic. When STT returns text, it interrupts TTS playback. Use this mode with InterruptSpeechDuration.
- 1: Manual. The bot is interrupted only by the Interrupt command from the server or client API.
- 2: Keyword.
                     */
                    uint64_t m_interruptMode;
                    bool m_interruptModeHasBeenSet;

                    /**
                     * Minimum duration of user speech that triggers an automatic interrupt. Default: 200. Unit: ms.
                     */
                    uint64_t m_interruptSpeechDuration;
                    bool m_interruptSpeechDurationHasBeenSet;

                    /**
                     * Preset keywords that interrupt the bot. Use them when the user must explicitly indicate the intent to interrupt. You can set up to 128 keywords. Applies only when `InterruptMode` is 2.
                     */
                    std::vector<std::string> m_interruptKeywords;
                    bool m_interruptKeywordsHasBeenSet;

                    /**
                     * How long the user is silent before the bot asks a follow-up question. Valid range: 0 to 300. 0 turns this off. Default: 0. Unit: seconds.


                     */
                    uint64_t m_silenceFollowUp;
                    bool m_silenceFollowUpHasBeenSet;

                    /**
                     * <p>Text of the proactive follow-up question.</p>
                     */
                    std::string m_silenceFollowUpText;
                    bool m_silenceFollowUpTextHasBeenSet;

                    /**
                     * Welcome message the bot broadcasts when an anchor enters the room for the first time. It is broadcast again when the anchor leaves the room and enters again.
                     */
                    std::string m_welcomeMessage;
                    bool m_welcomeMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONDIALOGCONFIG_H_
