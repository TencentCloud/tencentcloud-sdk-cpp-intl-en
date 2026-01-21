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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SERVERPUSHTEXT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SERVERPUSHTEXT_H_

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
                * The server controls the chatbot to broadcast the specified text.
                */
                class ServerPushText : public AbstractModel
                {
                public:
                    ServerPushText();
                    ~ServerPushText() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Server push broadcast text.
                     * @return Text Server push broadcast text.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Server push broadcast text.
                     * @param _text Server push broadcast text.
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
                     * 获取Broadcast the text and automatically close the dialogue task.
                     * @return StopAfterPlay Broadcast the text and automatically close the dialogue task.
                     * 
                     */
                    bool GetStopAfterPlay() const;

                    /**
                     * 设置Broadcast the text and automatically close the dialogue task.
                     * @param _stopAfterPlay Broadcast the text and automatically close the dialogue task.
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
                     * 获取Server push broadcast audio.
Format description: audio must be mono, sampling rate must be consistent with the corresponding TTS sampling rate, and coded as a Base64 string.
Input rule: when the Audio field is provided, the system will not accept user-submitted input in the Text field. the system will play the Audio content in the Audio field directly.
                     * @return Audio Server push broadcast audio.
Format description: audio must be mono, sampling rate must be consistent with the corresponding TTS sampling rate, and coded as a Base64 string.
Input rule: when the Audio field is provided, the system will not accept user-submitted input in the Text field. the system will play the Audio content in the Audio field directly.
                     * 
                     */
                    std::string GetAudio() const;

                    /**
                     * 设置Server push broadcast audio.
Format description: audio must be mono, sampling rate must be consistent with the corresponding TTS sampling rate, and coded as a Base64 string.
Input rule: when the Audio field is provided, the system will not accept user-submitted input in the Text field. the system will play the Audio content in the Audio field directly.
                     * @param _audio Server push broadcast audio.
Format description: audio must be mono, sampling rate must be consistent with the corresponding TTS sampling rate, and coded as a Base64 string.
Input rule: when the Audio field is provided, the system will not accept user-submitted input in the Text field. the system will play the Audio content in the Audio field directly.
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
                     * 获取Defaults to 0. valid at that time only when Interrupt is false.
-0 means drop messages with Interrupt set to false during the occurrence of interaction.
-1 indicates that during the occurrence of an interaction, messages with Interrupt as false will not be dropped but cached, waiting to be processed when finished.

Note: if DropMode is 1, multiple messages can be cached. if an interruption occurs subsequently, the cache of messages will be cleared.
                     * @return DropMode Defaults to 0. valid at that time only when Interrupt is false.
-0 means drop messages with Interrupt set to false during the occurrence of interaction.
-1 indicates that during the occurrence of an interaction, messages with Interrupt as false will not be dropped but cached, waiting to be processed when finished.

Note: if DropMode is 1, multiple messages can be cached. if an interruption occurs subsequently, the cache of messages will be cleared.
                     * 
                     */
                    uint64_t GetDropMode() const;

                    /**
                     * 设置Defaults to 0. valid at that time only when Interrupt is false.
-0 means drop messages with Interrupt set to false during the occurrence of interaction.
-1 indicates that during the occurrence of an interaction, messages with Interrupt as false will not be dropped but cached, waiting to be processed when finished.

Note: if DropMode is 1, multiple messages can be cached. if an interruption occurs subsequently, the cache of messages will be cleared.
                     * @param _dropMode Defaults to 0. valid at that time only when Interrupt is false.
-0 means drop messages with Interrupt set to false during the occurrence of interaction.
-1 indicates that during the occurrence of an interaction, messages with Interrupt as false will not be dropped but cached, waiting to be processed when finished.

Note: if DropMode is 1, multiple messages can be cached. if an interruption occurs subsequently, the cache of messages will be cleared.
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
                     * 获取The message priority of ServerPushText. 0 means interruptible, 1 means not interruptible. currently only support 0. if you need to input 1, submit a ticket to contact us to grant permission.
Note: after receiving a message with Priority=1, any other messages will be ignored (including messages with Priority=1) until the message processing of Priority=1 is complete. this field can be used together with the Interrupt and DropMode fields.
Example:.
-Priority=1, Interrupt=true, interrupts existing interaction and broadcasts immediately. the broadcast will not be interrupted during the process.
-Priority=1, Interrupt=false, DropMode=1. wait for the current interaction to complete before broadcasting. the broadcast will not be interrupted during the process.

                     * @return Priority The message priority of ServerPushText. 0 means interruptible, 1 means not interruptible. currently only support 0. if you need to input 1, submit a ticket to contact us to grant permission.
Note: after receiving a message with Priority=1, any other messages will be ignored (including messages with Priority=1) until the message processing of Priority=1 is complete. this field can be used together with the Interrupt and DropMode fields.
Example:.
-Priority=1, Interrupt=true, interrupts existing interaction and broadcasts immediately. the broadcast will not be interrupted during the process.
-Priority=1, Interrupt=false, DropMode=1. wait for the current interaction to complete before broadcasting. the broadcast will not be interrupted during the process.

                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置The message priority of ServerPushText. 0 means interruptible, 1 means not interruptible. currently only support 0. if you need to input 1, submit a ticket to contact us to grant permission.
Note: after receiving a message with Priority=1, any other messages will be ignored (including messages with Priority=1) until the message processing of Priority=1 is complete. this field can be used together with the Interrupt and DropMode fields.
Example:.
-Priority=1, Interrupt=true, interrupts existing interaction and broadcasts immediately. the broadcast will not be interrupted during the process.
-Priority=1, Interrupt=false, DropMode=1. wait for the current interaction to complete before broadcasting. the broadcast will not be interrupted during the process.

                     * @param _priority The message priority of ServerPushText. 0 means interruptible, 1 means not interruptible. currently only support 0. if you need to input 1, submit a ticket to contact us to grant permission.
Note: after receiving a message with Priority=1, any other messages will be ignored (including messages with Priority=1) until the message processing of Priority=1 is complete. this field can be used together with the Interrupt and DropMode fields.
Example:.
-Priority=1, Interrupt=true, interrupts existing interaction and broadcasts immediately. the broadcast will not be interrupted during the process.
-Priority=1, Interrupt=false, DropMode=1. wait for the current interaction to complete before broadcasting. the broadcast will not be interrupted during the process.

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
                     * 获取Whether to add the text to the llm history context.
                     * @return AddHistory Whether to add the text to the llm history context.
                     * 
                     */
                    bool GetAddHistory() const;

                    /**
                     * 设置Whether to add the text to the llm history context.
                     * @param _addHistory Whether to add the text to the llm history context.
                     * 
                     */
                    void SetAddHistory(const bool& _addHistory);

                    /**
                     * 判断参数 AddHistory 是否已赋值
                     * @return AddHistory 是否已赋值
                     * 
                     */
                    bool AddHistoryHasBeenSet() const;

                    /**
                     * 获取If filled, it will be bound to the subtitle and sent to the terminal. note that the content must be a json string.
                     * @return MetaInfo If filled, it will be bound to the subtitle and sent to the terminal. note that the content must be a json string.
                     * 
                     */
                    std::string GetMetaInfo() const;

                    /**
                     * 设置If filled, it will be bound to the subtitle and sent to the terminal. note that the content must be a json string.
                     * @param _metaInfo If filled, it will be bound to the subtitle and sent to the terminal. note that the content must be a json string.
                     * 
                     */
                    void SetMetaInfo(const std::string& _metaInfo);

                    /**
                     * 判断参数 MetaInfo 是否已赋值
                     * @return MetaInfo 是否已赋值
                     * 
                     */
                    bool MetaInfoHasBeenSet() const;

                private:

                    /**
                     * Server push broadcast text.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Whether to allow the text to interrupt the robot's speaking.
                     */
                    bool m_interrupt;
                    bool m_interruptHasBeenSet;

                    /**
                     * Broadcast the text and automatically close the dialogue task.
                     */
                    bool m_stopAfterPlay;
                    bool m_stopAfterPlayHasBeenSet;

                    /**
                     * Server push broadcast audio.
Format description: audio must be mono, sampling rate must be consistent with the corresponding TTS sampling rate, and coded as a Base64 string.
Input rule: when the Audio field is provided, the system will not accept user-submitted input in the Text field. the system will play the Audio content in the Audio field directly.
                     */
                    std::string m_audio;
                    bool m_audioHasBeenSet;

                    /**
                     * Defaults to 0. valid at that time only when Interrupt is false.
-0 means drop messages with Interrupt set to false during the occurrence of interaction.
-1 indicates that during the occurrence of an interaction, messages with Interrupt as false will not be dropped but cached, waiting to be processed when finished.

Note: if DropMode is 1, multiple messages can be cached. if an interruption occurs subsequently, the cache of messages will be cleared.
                     */
                    uint64_t m_dropMode;
                    bool m_dropModeHasBeenSet;

                    /**
                     * The message priority of ServerPushText. 0 means interruptible, 1 means not interruptible. currently only support 0. if you need to input 1, submit a ticket to contact us to grant permission.
Note: after receiving a message with Priority=1, any other messages will be ignored (including messages with Priority=1) until the message processing of Priority=1 is complete. this field can be used together with the Interrupt and DropMode fields.
Example:.
-Priority=1, Interrupt=true, interrupts existing interaction and broadcasts immediately. the broadcast will not be interrupted during the process.
-Priority=1, Interrupt=false, DropMode=1. wait for the current interaction to complete before broadcasting. the broadcast will not be interrupted during the process.

                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Whether to add the text to the llm history context.
                     */
                    bool m_addHistory;
                    bool m_addHistoryHasBeenSet;

                    /**
                     * If filled, it will be bound to the subtitle and sent to the terminal. note that the content must be a json string.
                     */
                    std::string m_metaInfo;
                    bool m_metaInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SERVERPUSHTEXT_H_
