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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_AGENTCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_AGENTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/AmbientSound.h>
#include <tencentcloud/trtc/v20190722/model/VoicePrint.h>
#include <tencentcloud/trtc/v20190722/model/TurnDetection.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Bot parameters.
                */
                class AgentConfig : public AbstractModel
                {
                public:
                    AgentConfig();
                    ~AgentConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The robot's UserId is used to enter a room and initiate a task. note that this UserId cannot be duplicated with the host or audience [UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#UserId) in the current room. if multiple tasks are initiated in a room, the robot's UserId cannot be mutually duplicated. otherwise, the previous task will be interrupted. ensure the robot's UserId is unique in the room.
                     * @return UserId The robot's UserId is used to enter a room and initiate a task. note that this UserId cannot be duplicated with the host or audience [UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#UserId) in the current room. if multiple tasks are initiated in a room, the robot's UserId cannot be mutually duplicated. otherwise, the previous task will be interrupted. ensure the robot's UserId is unique in the room.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The robot's UserId is used to enter a room and initiate a task. note that this UserId cannot be duplicated with the host or audience [UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#UserId) in the current room. if multiple tasks are initiated in a room, the robot's UserId cannot be mutually duplicated. otherwise, the previous task will be interrupted. ensure the robot's UserId is unique in the room.
                     * @param _userId The robot's UserId is used to enter a room and initiate a task. note that this UserId cannot be duplicated with the host or audience [UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#UserId) in the current room. if multiple tasks are initiated in a room, the robot's UserId cannot be mutually duplicated. otherwise, the previous task will be interrupted. ensure the robot's UserId is unique in the room.
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
                     * 获取Signature verification corresponding to the chatbot's UserId, namely, the UserId and UserSig serve as the login password for the chatbot to enter the room. for specific calculation methods, see TRTC solution for calculating [UserSig](https://www.tencentcloud.com/document/product/647/45910?from_cn_redirect=1#UserSig).
                     * @return UserSig Signature verification corresponding to the chatbot's UserId, namely, the UserId and UserSig serve as the login password for the chatbot to enter the room. for specific calculation methods, see TRTC solution for calculating [UserSig](https://www.tencentcloud.com/document/product/647/45910?from_cn_redirect=1#UserSig).
                     * 
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置Signature verification corresponding to the chatbot's UserId, namely, the UserId and UserSig serve as the login password for the chatbot to enter the room. for specific calculation methods, see TRTC solution for calculating [UserSig](https://www.tencentcloud.com/document/product/647/45910?from_cn_redirect=1#UserSig).
                     * @param _userSig Signature verification corresponding to the chatbot's UserId, namely, the UserId and UserSig serve as the login password for the chatbot to enter the room. for specific calculation methods, see TRTC solution for calculating [UserSig](https://www.tencentcloud.com/document/product/647/45910?from_cn_redirect=1#UserSig).
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
                     * 获取UserId for robot stream pulling. after fill, the robot performs stream pulling and processes in real time.
                     * @return TargetUserId UserId for robot stream pulling. after fill, the robot performs stream pulling and processes in real time.
                     * 
                     */
                    std::string GetTargetUserId() const;

                    /**
                     * 设置UserId for robot stream pulling. after fill, the robot performs stream pulling and processes in real time.
                     * @param _targetUserId UserId for robot stream pulling. after fill, the robot performs stream pulling and processes in real time.
                     * 
                     */
                    void SetTargetUserId(const std::string& _targetUserId);

                    /**
                     * 判断参数 TargetUserId 是否已赋值
                     * @return TargetUserId 是否已赋值
                     * 
                     */
                    bool TargetUserIdHasBeenSet() const;

                    /**
                     * 获取Exceeding MaxIdleTime in the room with no streaming automatically shuts down the backend task. default value is 60s.
                     * @return MaxIdleTime Exceeding MaxIdleTime in the room with no streaming automatically shuts down the backend task. default value is 60s.
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置Exceeding MaxIdleTime in the room with no streaming automatically shuts down the backend task. default value is 60s.
                     * @param _maxIdleTime Exceeding MaxIdleTime in the room with no streaming automatically shuts down the backend task. default value is 60s.
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
                     * 获取Robot'S greeting.
                     * @return WelcomeMessage Robot'S greeting.
                     * 
                     */
                    std::string GetWelcomeMessage() const;

                    /**
                     * 设置Robot'S greeting.
                     * @param _welcomeMessage Robot'S greeting.
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
                     * 获取Intelligent interruption mode, defaults to 0. 0 means server-side automatic interruption. 1 means the server does not interrupt, and the client sends an interruption signal to perform interruption.
                     * @return InterruptMode Intelligent interruption mode, defaults to 0. 0 means server-side automatic interruption. 1 means the server does not interrupt, and the client sends an interruption signal to perform interruption.
                     * 
                     */
                    uint64_t GetInterruptMode() const;

                    /**
                     * 设置Intelligent interruption mode, defaults to 0. 0 means server-side automatic interruption. 1 means the server does not interrupt, and the client sends an interruption signal to perform interruption.
                     * @param _interruptMode Intelligent interruption mode, defaults to 0. 0 means server-side automatic interruption. 1 means the server does not interrupt, and the client sends an interruption signal to perform interruption.
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
                     * 获取Used when InterruptMode is 0, in milliseconds, defaults to 500ms. indicates the server will interrupt when it detects continuous voice for InterruptSpeechDuration milliseconds.
                     * @return InterruptSpeechDuration Used when InterruptMode is 0, in milliseconds, defaults to 500ms. indicates the server will interrupt when it detects continuous voice for InterruptSpeechDuration milliseconds.
                     * 
                     */
                    uint64_t GetInterruptSpeechDuration() const;

                    /**
                     * 设置Used when InterruptMode is 0, in milliseconds, defaults to 500ms. indicates the server will interrupt when it detects continuous voice for InterruptSpeechDuration milliseconds.
                     * @param _interruptSpeechDuration Used when InterruptMode is 0, in milliseconds, defaults to 500ms. indicates the server will interrupt when it detects continuous voice for InterruptSpeechDuration milliseconds.
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
                     * 获取Controls the trigger mode for a new dialogue. default is 0.
-0 means a new dialogue is automatically triggered when the server detects a complete sentence through automatic speech recognition.
-1 indicates the client determines whether to manually send a chat signaling trigger for a new dialogue upon receiving the caption message.
                     * @return TurnDetectionMode Controls the trigger mode for a new dialogue. default is 0.
-0 means a new dialogue is automatically triggered when the server detects a complete sentence through automatic speech recognition.
-1 indicates the client determines whether to manually send a chat signaling trigger for a new dialogue upon receiving the caption message.
                     * 
                     */
                    uint64_t GetTurnDetectionMode() const;

                    /**
                     * 设置Controls the trigger mode for a new dialogue. default is 0.
-0 means a new dialogue is automatically triggered when the server detects a complete sentence through automatic speech recognition.
-1 indicates the client determines whether to manually send a chat signaling trigger for a new dialogue upon receiving the caption message.
                     * @param _turnDetectionMode Controls the trigger mode for a new dialogue. default is 0.
-0 means a new dialogue is automatically triggered when the server detects a complete sentence through automatic speech recognition.
-1 indicates the client determines whether to manually send a chat signaling trigger for a new dialogue upon receiving the caption message.
                     * 
                     */
                    void SetTurnDetectionMode(const uint64_t& _turnDetectionMode);

                    /**
                     * 判断参数 TurnDetectionMode 是否已赋值
                     * @return TurnDetectionMode 是否已赋值
                     * 
                     */
                    bool TurnDetectionModeHasBeenSet() const;

                    /**
                     * 获取Whether to filter out sentences where the user only says one word. true indicates filtering, false indicates no filtering. default value is true.
                     * @return FilterOneWord Whether to filter out sentences where the user only says one word. true indicates filtering, false indicates no filtering. default value is true.
                     * 
                     */
                    bool GetFilterOneWord() const;

                    /**
                     * 设置Whether to filter out sentences where the user only says one word. true indicates filtering, false indicates no filtering. default value is true.
                     * @param _filterOneWord Whether to filter out sentences where the user only says one word. true indicates filtering, false indicates no filtering. default value is true.
                     * 
                     */
                    void SetFilterOneWord(const bool& _filterOneWord);

                    /**
                     * 判断参数 FilterOneWord 是否已赋值
                     * @return FilterOneWord 是否已赋值
                     * 
                     */
                    bool FilterOneWordHasBeenSet() const;

                    /**
                     * 获取Welcome message priority. valid values: 0 (default), 1 (high priority). high priority messages cannot be interrupted.
                     * @return WelcomeMessagePriority Welcome message priority. valid values: 0 (default), 1 (high priority). high priority messages cannot be interrupted.
                     * 
                     */
                    uint64_t GetWelcomeMessagePriority() const;

                    /**
                     * 设置Welcome message priority. valid values: 0 (default), 1 (high priority). high priority messages cannot be interrupted.
                     * @param _welcomeMessagePriority Welcome message priority. valid values: 0 (default), 1 (high priority). high priority messages cannot be interrupted.
                     * 
                     */
                    void SetWelcomeMessagePriority(const uint64_t& _welcomeMessagePriority);

                    /**
                     * 判断参数 WelcomeMessagePriority 是否已赋值
                     * @return WelcomeMessagePriority 是否已赋值
                     * 
                     */
                    bool WelcomeMessagePriorityHasBeenSet() const;

                    /**
                     * 获取For filtering LLM return content, do not play the content in brackets.
Chinese bracket ().
2: english parentheses.
3: chinese square brackets [].
4: english square brackets [].
5: english curly braces {}.
Empty by default, means no filtering.
                     * @return FilterBracketsContent For filtering LLM return content, do not play the content in brackets.
Chinese bracket ().
2: english parentheses.
3: chinese square brackets [].
4: english square brackets [].
5: english curly braces {}.
Empty by default, means no filtering.
                     * 
                     */
                    uint64_t GetFilterBracketsContent() const;

                    /**
                     * 设置For filtering LLM return content, do not play the content in brackets.
Chinese bracket ().
2: english parentheses.
3: chinese square brackets [].
4: english square brackets [].
5: english curly braces {}.
Empty by default, means no filtering.
                     * @param _filterBracketsContent For filtering LLM return content, do not play the content in brackets.
Chinese bracket ().
2: english parentheses.
3: chinese square brackets [].
4: english square brackets [].
5: english curly braces {}.
Empty by default, means no filtering.
                     * 
                     */
                    void SetFilterBracketsContent(const uint64_t& _filterBracketsContent);

                    /**
                     * 判断参数 FilterBracketsContent 是否已赋值
                     * @return FilterBracketsContent 是否已赋值
                     * 
                     */
                    bool FilterBracketsContentHasBeenSet() const;

                    /**
                     * 获取Ambient sound settings.
                     * @return AmbientSound Ambient sound settings.
                     * 
                     */
                    AmbientSound GetAmbientSound() const;

                    /**
                     * 设置Ambient sound settings.
                     * @param _ambientSound Ambient sound settings.
                     * 
                     */
                    void SetAmbientSound(const AmbientSound& _ambientSound);

                    /**
                     * 判断参数 AmbientSound 是否已赋值
                     * @return AmbientSound 是否已赋值
                     * 
                     */
                    bool AmbientSoundHasBeenSet() const;

                    /**
                     * 获取Voiceprint configuration.
                     * @return VoicePrint Voiceprint configuration.
                     * 
                     */
                    VoicePrint GetVoicePrint() const;

                    /**
                     * 设置Voiceprint configuration.
                     * @param _voicePrint Voiceprint configuration.
                     * 
                     */
                    void SetVoicePrint(const VoicePrint& _voicePrint);

                    /**
                     * 判断参数 VoicePrint 是否已赋值
                     * @return VoicePrint 是否已赋值
                     * 
                     */
                    bool VoicePrintHasBeenSet() const;

                    /**
                     * 获取Semantic sentence segmentation detection.
                     * @return TurnDetection Semantic sentence segmentation detection.
                     * 
                     */
                    TurnDetection GetTurnDetection() const;

                    /**
                     * 设置Semantic sentence segmentation detection.
                     * @param _turnDetection Semantic sentence segmentation detection.
                     * 
                     */
                    void SetTurnDetection(const TurnDetection& _turnDetection);

                    /**
                     * 判断参数 TurnDetection 是否已赋值
                     * @return TurnDetection 是否已赋值
                     * 
                     */
                    bool TurnDetectionHasBeenSet() const;

                    /**
                     * 获取Robot subtitle display mode.
-0 means display as soon as possible without synchronizing with audio playback. at this point, subtitles are fully delivered, and subsequent subtitles will include previous ones.
-1 indicates sentence-level real-time display, which synchronizes with audio playback. only when the current sentence's corresponding audio playback is complete will the next subtitle be delivered. at this point, subtitles are delivered incrementally, and the terminal needs to concatenate the leading and trailing subtitles to form a complete subtitle.
                     * @return SubtitleMode Robot subtitle display mode.
-0 means display as soon as possible without synchronizing with audio playback. at this point, subtitles are fully delivered, and subsequent subtitles will include previous ones.
-1 indicates sentence-level real-time display, which synchronizes with audio playback. only when the current sentence's corresponding audio playback is complete will the next subtitle be delivered. at this point, subtitles are delivered incrementally, and the terminal needs to concatenate the leading and trailing subtitles to form a complete subtitle.
                     * 
                     */
                    uint64_t GetSubtitleMode() const;

                    /**
                     * 设置Robot subtitle display mode.
-0 means display as soon as possible without synchronizing with audio playback. at this point, subtitles are fully delivered, and subsequent subtitles will include previous ones.
-1 indicates sentence-level real-time display, which synchronizes with audio playback. only when the current sentence's corresponding audio playback is complete will the next subtitle be delivered. at this point, subtitles are delivered incrementally, and the terminal needs to concatenate the leading and trailing subtitles to form a complete subtitle.
                     * @param _subtitleMode Robot subtitle display mode.
-0 means display as soon as possible without synchronizing with audio playback. at this point, subtitles are fully delivered, and subsequent subtitles will include previous ones.
-1 indicates sentence-level real-time display, which synchronizes with audio playback. only when the current sentence's corresponding audio playback is complete will the next subtitle be delivered. at this point, subtitles are delivered incrementally, and the terminal needs to concatenate the leading and trailing subtitles to form a complete subtitle.
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
                     * 获取Interruption word list. during AI speaking, only speak words in the list to interrupt AI speaking.
Note: interrupt words avoid triggering AI reply.
                     * @return InterruptWordList Interruption word list. during AI speaking, only speak words in the list to interrupt AI speaking.
Note: interrupt words avoid triggering AI reply.
                     * 
                     */
                    std::vector<std::string> GetInterruptWordList() const;

                    /**
                     * 设置Interruption word list. during AI speaking, only speak words in the list to interrupt AI speaking.
Note: interrupt words avoid triggering AI reply.
                     * @param _interruptWordList Interruption word list. during AI speaking, only speak words in the list to interrupt AI speaking.
Note: interrupt words avoid triggering AI reply.
                     * 
                     */
                    void SetInterruptWordList(const std::vector<std::string>& _interruptWordList);

                    /**
                     * 判断参数 InterruptWordList 是否已赋值
                     * @return InterruptWordList 是否已赋值
                     * 
                     */
                    bool InterruptWordListHasBeenSet() const;

                private:

                    /**
                     * The robot's UserId is used to enter a room and initiate a task. note that this UserId cannot be duplicated with the host or audience [UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#UserId) in the current room. if multiple tasks are initiated in a room, the robot's UserId cannot be mutually duplicated. otherwise, the previous task will be interrupted. ensure the robot's UserId is unique in the room.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Signature verification corresponding to the chatbot's UserId, namely, the UserId and UserSig serve as the login password for the chatbot to enter the room. for specific calculation methods, see TRTC solution for calculating [UserSig](https://www.tencentcloud.com/document/product/647/45910?from_cn_redirect=1#UserSig).
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * UserId for robot stream pulling. after fill, the robot performs stream pulling and processes in real time.
                     */
                    std::string m_targetUserId;
                    bool m_targetUserIdHasBeenSet;

                    /**
                     * Exceeding MaxIdleTime in the room with no streaming automatically shuts down the backend task. default value is 60s.
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * Robot'S greeting.
                     */
                    std::string m_welcomeMessage;
                    bool m_welcomeMessageHasBeenSet;

                    /**
                     * Intelligent interruption mode, defaults to 0. 0 means server-side automatic interruption. 1 means the server does not interrupt, and the client sends an interruption signal to perform interruption.
                     */
                    uint64_t m_interruptMode;
                    bool m_interruptModeHasBeenSet;

                    /**
                     * Used when InterruptMode is 0, in milliseconds, defaults to 500ms. indicates the server will interrupt when it detects continuous voice for InterruptSpeechDuration milliseconds.
                     */
                    uint64_t m_interruptSpeechDuration;
                    bool m_interruptSpeechDurationHasBeenSet;

                    /**
                     * Controls the trigger mode for a new dialogue. default is 0.
-0 means a new dialogue is automatically triggered when the server detects a complete sentence through automatic speech recognition.
-1 indicates the client determines whether to manually send a chat signaling trigger for a new dialogue upon receiving the caption message.
                     */
                    uint64_t m_turnDetectionMode;
                    bool m_turnDetectionModeHasBeenSet;

                    /**
                     * Whether to filter out sentences where the user only says one word. true indicates filtering, false indicates no filtering. default value is true.
                     */
                    bool m_filterOneWord;
                    bool m_filterOneWordHasBeenSet;

                    /**
                     * Welcome message priority. valid values: 0 (default), 1 (high priority). high priority messages cannot be interrupted.
                     */
                    uint64_t m_welcomeMessagePriority;
                    bool m_welcomeMessagePriorityHasBeenSet;

                    /**
                     * For filtering LLM return content, do not play the content in brackets.
Chinese bracket ().
2: english parentheses.
3: chinese square brackets [].
4: english square brackets [].
5: english curly braces {}.
Empty by default, means no filtering.
                     */
                    uint64_t m_filterBracketsContent;
                    bool m_filterBracketsContentHasBeenSet;

                    /**
                     * Ambient sound settings.
                     */
                    AmbientSound m_ambientSound;
                    bool m_ambientSoundHasBeenSet;

                    /**
                     * Voiceprint configuration.
                     */
                    VoicePrint m_voicePrint;
                    bool m_voicePrintHasBeenSet;

                    /**
                     * Semantic sentence segmentation detection.
                     */
                    TurnDetection m_turnDetection;
                    bool m_turnDetectionHasBeenSet;

                    /**
                     * Robot subtitle display mode.
-0 means display as soon as possible without synchronizing with audio playback. at this point, subtitles are fully delivered, and subsequent subtitles will include previous ones.
-1 indicates sentence-level real-time display, which synchronizes with audio playback. only when the current sentence's corresponding audio playback is complete will the next subtitle be delivered. at this point, subtitles are delivered incrementally, and the terminal needs to concatenate the leading and trailing subtitles to form a complete subtitle.
                     */
                    uint64_t m_subtitleMode;
                    bool m_subtitleModeHasBeenSet;

                    /**
                     * Interruption word list. during AI speaking, only speak words in the list to interrupt AI speaking.
Note: interrupt words avoid triggering AI reply.
                     */
                    std::vector<std::string> m_interruptWordList;
                    bool m_interruptWordListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_AGENTCONFIG_H_
