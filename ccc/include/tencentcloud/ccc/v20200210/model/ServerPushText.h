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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_SERVERPUSHTEXT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_SERVERPUSHTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Server controls the chatbot to broadcast specified text.
                */
                class ServerPushText : public AbstractModel
                {
                public:
                    ServerPushText();
                    ~ServerPushText() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the server push broadcast text.
                     * @return Text Specifies the server push broadcast text.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Specifies the server push broadcast text.
                     * @param _text Specifies the server push broadcast text.
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取Whether to allow the text to interrupt the robot's speaking.
                     * @return Interrupt Whether to allow the text to interrupt the robot's speaking.
                     * 
                     */
                    bool GetInterrupt() const;

                    /**
                     * 设置Whether to allow the text to interrupt the robot's speaking.
                     * @param _interrupt Whether to allow the text to interrupt the robot's speaking.
                     * 
                     */
                    void SetInterrupt(const bool& _interrupt);

                    /**
                     * 判断参数 Interrupt 是否已赋值
                     * @return Interrupt 是否已赋值
                     * 
                     */
                    bool InterruptHasBeenSet() const;

                    /**
                     * 获取Specifies whether to automatically close the dialogue task after broadcasting the text.
                     * @return StopAfterPlay Specifies whether to automatically close the dialogue task after broadcasting the text.
                     * 
                     */
                    bool GetStopAfterPlay() const;

                    /**
                     * 设置Specifies whether to automatically close the dialogue task after broadcasting the text.
                     * @param _stopAfterPlay Specifies whether to automatically close the dialogue task after broadcasting the text.
                     * 
                     */
                    void SetStopAfterPlay(const bool& _stopAfterPlay);

                    /**
                     * 判断参数 StopAfterPlay 是否已赋值
                     * @return StopAfterPlay 是否已赋值
                     * 
                     */
                    bool StopAfterPlayHasBeenSet() const;

                    /**
                     * 获取Specifies the server push broadcast audio.
Format description: audio must be mono, sampling rate should be consistent with the corresponding TTS, and coded as a Base64 string.
Input rules: when the Audio field is provided, the system will not accept input in the Text field. the system will play the Audio content in the Audio field directly.
                     * @return Audio Specifies the server push broadcast audio.
Format description: audio must be mono, sampling rate should be consistent with the corresponding TTS, and coded as a Base64 string.
Input rules: when the Audio field is provided, the system will not accept input in the Text field. the system will play the Audio content in the Audio field directly.
                     * 
                     */
                    std::string GetAudio() const;

                    /**
                     * 设置Specifies the server push broadcast audio.
Format description: audio must be mono, sampling rate should be consistent with the corresponding TTS, and coded as a Base64 string.
Input rules: when the Audio field is provided, the system will not accept input in the Text field. the system will play the Audio content in the Audio field directly.
                     * @param _audio Specifies the server push broadcast audio.
Format description: audio must be mono, sampling rate should be consistent with the corresponding TTS, and coded as a Base64 string.
Input rules: when the Audio field is provided, the system will not accept input in the Text field. the system will play the Audio content in the Audio field directly.
                     * 
                     */
                    void SetAudio(const std::string& _audio);

                    /**
                     * 判断参数 Audio 是否已赋值
                     * @return Audio 是否已赋值
                     * 
                     */
                    bool AudioHasBeenSet() const;

                    /**
                     * 获取Defaults to 0. valid only when Interrupt is false.
-0 indicates that messages with Interrupt set to false will be dropped when there is an interaction.
-Indicates that when there is an interaction in progress, messages with Interrupt set to false will not be dropped but cached and processed after the current interaction is completed.

Note: when DropMode is 1, the cache allows multiple messages. if an interruption occurs subsequently, cached messages will be cleared.
                     * @return DropMode Defaults to 0. valid only when Interrupt is false.
-0 indicates that messages with Interrupt set to false will be dropped when there is an interaction.
-Indicates that when there is an interaction in progress, messages with Interrupt set to false will not be dropped but cached and processed after the current interaction is completed.

Note: when DropMode is 1, the cache allows multiple messages. if an interruption occurs subsequently, cached messages will be cleared.
                     * 
                     */
                    uint64_t GetDropMode() const;

                    /**
                     * 设置Defaults to 0. valid only when Interrupt is false.
-0 indicates that messages with Interrupt set to false will be dropped when there is an interaction.
-Indicates that when there is an interaction in progress, messages with Interrupt set to false will not be dropped but cached and processed after the current interaction is completed.

Note: when DropMode is 1, the cache allows multiple messages. if an interruption occurs subsequently, cached messages will be cleared.
                     * @param _dropMode Defaults to 0. valid only when Interrupt is false.
-0 indicates that messages with Interrupt set to false will be dropped when there is an interaction.
-Indicates that when there is an interaction in progress, messages with Interrupt set to false will not be dropped but cached and processed after the current interaction is completed.

Note: when DropMode is 1, the cache allows multiple messages. if an interruption occurs subsequently, cached messages will be cleared.
                     * 
                     */
                    void SetDropMode(const uint64_t& _dropMode);

                    /**
                     * 判断参数 DropMode 是否已赋值
                     * @return DropMode 是否已赋值
                     * 
                     */
                    bool DropModeHasBeenSet() const;

                    /**
                     * 获取Message priority of ServerPushText. 0 means interruptible. 1 means not interruptible.
Note: after receiving a message with Priority=1, any other messages will be ignored (including messages with Priority=1) until the message processing of Priority=1 is complete. this field can be used together with the Interrupt and DropMode fields.
Example.
-Priority=1, Interrupt=true. specifies to Interrupt existing interaction and broadcast immediately. the broadcast will not be interrupted during the process.
-Priority=1, Interrupt=false, DropMode=1. waits for the current interaction to complete before broadcasting. the broadcast will not be interrupted during the process.

                     * @return Priority Message priority of ServerPushText. 0 means interruptible. 1 means not interruptible.
Note: after receiving a message with Priority=1, any other messages will be ignored (including messages with Priority=1) until the message processing of Priority=1 is complete. this field can be used together with the Interrupt and DropMode fields.
Example.
-Priority=1, Interrupt=true. specifies to Interrupt existing interaction and broadcast immediately. the broadcast will not be interrupted during the process.
-Priority=1, Interrupt=false, DropMode=1. waits for the current interaction to complete before broadcasting. the broadcast will not be interrupted during the process.

                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置Message priority of ServerPushText. 0 means interruptible. 1 means not interruptible.
Note: after receiving a message with Priority=1, any other messages will be ignored (including messages with Priority=1) until the message processing of Priority=1 is complete. this field can be used together with the Interrupt and DropMode fields.
Example.
-Priority=1, Interrupt=true. specifies to Interrupt existing interaction and broadcast immediately. the broadcast will not be interrupted during the process.
-Priority=1, Interrupt=false, DropMode=1. waits for the current interaction to complete before broadcasting. the broadcast will not be interrupted during the process.

                     * @param _priority Message priority of ServerPushText. 0 means interruptible. 1 means not interruptible.
Note: after receiving a message with Priority=1, any other messages will be ignored (including messages with Priority=1) until the message processing of Priority=1 is complete. this field can be used together with the Interrupt and DropMode fields.
Example.
-Priority=1, Interrupt=true. specifies to Interrupt existing interaction and broadcast immediately. the broadcast will not be interrupted during the process.
-Priority=1, Interrupt=false, DropMode=1. waits for the current interaction to complete before broadcasting. the broadcast will not be interrupted during the process.

                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Specifies whether the text is added to the llm history context.
                     * @return AddHistory Specifies whether the text is added to the llm history context.
                     * 
                     */
                    bool GetAddHistory() const;

                    /**
                     * 设置Specifies whether the text is added to the llm history context.
                     * @param _addHistory Specifies whether the text is added to the llm history context.
                     * 
                     */
                    void SetAddHistory(const bool& _addHistory);

                    /**
                     * 判断参数 AddHistory 是否已赋值
                     * @return AddHistory 是否已赋值
                     * 
                     */
                    bool AddHistoryHasBeenSet() const;

                private:

                    /**
                     * Specifies the server push broadcast text.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Whether to allow the text to interrupt the robot's speaking.
                     */
                    bool m_interrupt;
                    bool m_interruptHasBeenSet;

                    /**
                     * Specifies whether to automatically close the dialogue task after broadcasting the text.
                     */
                    bool m_stopAfterPlay;
                    bool m_stopAfterPlayHasBeenSet;

                    /**
                     * Specifies the server push broadcast audio.
Format description: audio must be mono, sampling rate should be consistent with the corresponding TTS, and coded as a Base64 string.
Input rules: when the Audio field is provided, the system will not accept input in the Text field. the system will play the Audio content in the Audio field directly.
                     */
                    std::string m_audio;
                    bool m_audioHasBeenSet;

                    /**
                     * Defaults to 0. valid only when Interrupt is false.
-0 indicates that messages with Interrupt set to false will be dropped when there is an interaction.
-Indicates that when there is an interaction in progress, messages with Interrupt set to false will not be dropped but cached and processed after the current interaction is completed.

Note: when DropMode is 1, the cache allows multiple messages. if an interruption occurs subsequently, cached messages will be cleared.
                     */
                    uint64_t m_dropMode;
                    bool m_dropModeHasBeenSet;

                    /**
                     * Message priority of ServerPushText. 0 means interruptible. 1 means not interruptible.
Note: after receiving a message with Priority=1, any other messages will be ignored (including messages with Priority=1) until the message processing of Priority=1 is complete. this field can be used together with the Interrupt and DropMode fields.
Example.
-Priority=1, Interrupt=true. specifies to Interrupt existing interaction and broadcast immediately. the broadcast will not be interrupted during the process.
-Priority=1, Interrupt=false, DropMode=1. waits for the current interaction to complete before broadcasting. the broadcast will not be interrupted during the process.

                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Specifies whether the text is added to the llm history context.
                     */
                    bool m_addHistory;
                    bool m_addHistoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SERVERPUSHTEXT_H_
