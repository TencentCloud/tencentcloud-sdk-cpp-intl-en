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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STARTAICONVERSATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STARTAICONVERSATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/AgentConfig.h>
#include <tencentcloud/trtc/v20190722/model/STTConfig.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * StartAIConversation request structure.
                */
                class StartAIConversationRequest : public AbstractModel
                {
                public:
                    StartAIConversationRequest();
                    ~StartAIConversationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TRTC's [SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid) is the same as the SdkAppId used by the room that starts the conversation task.
                     * @return SdkAppId TRTC's [SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid) is the same as the SdkAppId used by the room that starts the conversation task.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置TRTC's [SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid) is the same as the SdkAppId used by the room that starts the conversation task.
                     * @param _sdkAppId TRTC's [SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid) is the same as the SdkAppId used by the room that starts the conversation task.
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
                     * 获取TRTC's [RoomId](https://cloud.tencent.com/document/product/647/46351#roomid), which indicates the room number where the conversation task is started.
                     * @return RoomId TRTC's [RoomId](https://cloud.tencent.com/document/product/647/46351#roomid), which indicates the room number where the conversation task is started.
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置TRTC's [RoomId](https://cloud.tencent.com/document/product/647/46351#roomid), which indicates the room number where the conversation task is started.
                     * @param _roomId TRTC's [RoomId](https://cloud.tencent.com/document/product/647/46351#roomid), which indicates the room number where the conversation task is started.
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
                     * 获取Robot parameters
                     * @return AgentConfig Robot parameters
                     * 
                     */
                    AgentConfig GetAgentConfig() const;

                    /**
                     * 设置Robot parameters
                     * @param _agentConfig Robot parameters
                     * 
                     */
                    void SetAgentConfig(const AgentConfig& _agentConfig);

                    /**
                     * 判断参数 AgentConfig 是否已赋值
                     * @return AgentConfig 是否已赋值
                     * 
                     */
                    bool AgentConfigHasBeenSet() const;

                    /**
                     * 获取The unique ID passed in by the caller can be used by the client to prevent repeated task initiation and to query the task status through this field.
                     * @return SessionId The unique ID passed in by the caller can be used by the client to prevent repeated task initiation and to query the task status through this field.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The unique ID passed in by the caller can be used by the client to prevent repeated task initiation and to query the task status through this field.
                     * @param _sessionId The unique ID passed in by the caller can be used by the client to prevent repeated task initiation and to query the task status through this field.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取The type of TRTC room number. 0 represents a numeric room number, and 1 represents a string room number. If not filled in, the default is a numeric room number.
                     * @return RoomIdType The type of TRTC room number. 0 represents a numeric room number, and 1 represents a string room number. If not filled in, the default is a numeric room number.
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置The type of TRTC room number. 0 represents a numeric room number, and 1 represents a string room number. If not filled in, the default is a numeric room number.
                     * @param _roomIdType The type of TRTC room number. 0 represents a numeric room number, and 1 represents a string room number. If not filled in, the default is a numeric room number.
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
                     * 获取Speech recognition configuration.
                     * @return STTConfig Speech recognition configuration.
                     * 
                     */
                    STTConfig GetSTTConfig() const;

                    /**
                     * 设置Speech recognition configuration.
                     * @param _sTTConfig Speech recognition configuration.
                     * 
                     */
                    void SetSTTConfig(const STTConfig& _sTTConfig);

                    /**
                     * 判断参数 STTConfig 是否已赋值
                     * @return STTConfig 是否已赋值
                     * 
                     */
                    bool STTConfigHasBeenSet() const;

                    /**
                     * 获取LLM configuration. It must comply with the openai specification and be a JSON string. The example is as follows: <pre> { <br> &emsp; "LLMType": "Large model type", // String required, such as: "openai" <br> &emsp; "Model": "Your model name", // String required, specify the model to be used<br> "APIKey": "Your LLM API key", // String required <br> &emsp; "APIUrl": "https://api.xxx.com/chat/completions", // String required, URL for LLM API access<br> &emsp; "Streaming": true // Boolean optional, specify whether to use streaming<br> &emsp;} </pre>
                     * @return LLMConfig LLM configuration. It must comply with the openai specification and be a JSON string. The example is as follows: <pre> { <br> &emsp; "LLMType": "Large model type", // String required, such as: "openai" <br> &emsp; "Model": "Your model name", // String required, specify the model to be used<br> "APIKey": "Your LLM API key", // String required <br> &emsp; "APIUrl": "https://api.xxx.com/chat/completions", // String required, URL for LLM API access<br> &emsp; "Streaming": true // Boolean optional, specify whether to use streaming<br> &emsp;} </pre>
                     * 
                     */
                    std::string GetLLMConfig() const;

                    /**
                     * 设置LLM configuration. It must comply with the openai specification and be a JSON string. The example is as follows: <pre> { <br> &emsp; "LLMType": "Large model type", // String required, such as: "openai" <br> &emsp; "Model": "Your model name", // String required, specify the model to be used<br> "APIKey": "Your LLM API key", // String required <br> &emsp; "APIUrl": "https://api.xxx.com/chat/completions", // String required, URL for LLM API access<br> &emsp; "Streaming": true // Boolean optional, specify whether to use streaming<br> &emsp;} </pre>
                     * @param _lLMConfig LLM configuration. It must comply with the openai specification and be a JSON string. The example is as follows: <pre> { <br> &emsp; "LLMType": "Large model type", // String required, such as: "openai" <br> &emsp; "Model": "Your model name", // String required, specify the model to be used<br> "APIKey": "Your LLM API key", // String required <br> &emsp; "APIUrl": "https://api.xxx.com/chat/completions", // String required, URL for LLM API access<br> &emsp; "Streaming": true // Boolean optional, specify whether to use streaming<br> &emsp;} </pre>
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
                     * 获取TTS configuration, which is a JSON string. The Tencent Cloud TTS example is as follows: <pre>{ <br> &emsp; "AppId": your application ID, // Integer Required<br> &emsp; "TTSType": "TTS type", // String TTS type, fixed to "tencent"<br> &emsp; "SecretId": "Your key ID", // String Required<br> &emsp; "SecretKey": "Your keyKey", // String Required<br> &emsp; "VoiceType": 101001, // Integer Required, voice ID, including standard voice and premium voice. Premium voice has higher fidelity and different price from standard voice. For details, please refer to <a href="https://cloud.tencent.com/document/product/1073/34112">Overview of Speech Synthesis Billing</a>. For a complete list of timbre IDs, see <a href="https://cloud.tencent.com/document/product/1073/92668#55924b56-1a73-4663-a7a1-a8dd82d6e823">List of speech synthesis timbre IDs</a>. <br> &emsp; "Speed": 1.25, // Integer Optional, speaking speed, range: [-2, 6], corresponding to different speaking speeds: -2: 0.6 times -1: 0.8 times 0: 1.0 times (default) 1: 1.2 times 2: 1.5 times 6: 2.5 times If a more detailed speaking speed is required, 2 decimal places can be retained, such as 0.5/1.25/2.81, etc. For the conversion between parameter value and actual speech speed, please refer to <a href="https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz">Speed Conversion</a><br> &emsp; "Volume": 5, // Integer Optional, volume size, range: [0, 10], corresponding to 11 levels of volume, the default value is 0, representing normal volume. <br> &emsp; "PrimaryLanguage": "zh-CN" // String Optional, primary language<br> &emsp;}</pre>
                     * @return TTSConfig TTS configuration, which is a JSON string. The Tencent Cloud TTS example is as follows: <pre>{ <br> &emsp; "AppId": your application ID, // Integer Required<br> &emsp; "TTSType": "TTS type", // String TTS type, fixed to "tencent"<br> &emsp; "SecretId": "Your key ID", // String Required<br> &emsp; "SecretKey": "Your keyKey", // String Required<br> &emsp; "VoiceType": 101001, // Integer Required, voice ID, including standard voice and premium voice. Premium voice has higher fidelity and different price from standard voice. For details, please refer to <a href="https://cloud.tencent.com/document/product/1073/34112">Overview of Speech Synthesis Billing</a>. For a complete list of timbre IDs, see <a href="https://cloud.tencent.com/document/product/1073/92668#55924b56-1a73-4663-a7a1-a8dd82d6e823">List of speech synthesis timbre IDs</a>. <br> &emsp; "Speed": 1.25, // Integer Optional, speaking speed, range: [-2, 6], corresponding to different speaking speeds: -2: 0.6 times -1: 0.8 times 0: 1.0 times (default) 1: 1.2 times 2: 1.5 times 6: 2.5 times If a more detailed speaking speed is required, 2 decimal places can be retained, such as 0.5/1.25/2.81, etc. For the conversion between parameter value and actual speech speed, please refer to <a href="https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz">Speed Conversion</a><br> &emsp; "Volume": 5, // Integer Optional, volume size, range: [0, 10], corresponding to 11 levels of volume, the default value is 0, representing normal volume. <br> &emsp; "PrimaryLanguage": "zh-CN" // String Optional, primary language<br> &emsp;}</pre>
                     * 
                     */
                    std::string GetTTSConfig() const;

                    /**
                     * 设置TTS configuration, which is a JSON string. The Tencent Cloud TTS example is as follows: <pre>{ <br> &emsp; "AppId": your application ID, // Integer Required<br> &emsp; "TTSType": "TTS type", // String TTS type, fixed to "tencent"<br> &emsp; "SecretId": "Your key ID", // String Required<br> &emsp; "SecretKey": "Your keyKey", // String Required<br> &emsp; "VoiceType": 101001, // Integer Required, voice ID, including standard voice and premium voice. Premium voice has higher fidelity and different price from standard voice. For details, please refer to <a href="https://cloud.tencent.com/document/product/1073/34112">Overview of Speech Synthesis Billing</a>. For a complete list of timbre IDs, see <a href="https://cloud.tencent.com/document/product/1073/92668#55924b56-1a73-4663-a7a1-a8dd82d6e823">List of speech synthesis timbre IDs</a>. <br> &emsp; "Speed": 1.25, // Integer Optional, speaking speed, range: [-2, 6], corresponding to different speaking speeds: -2: 0.6 times -1: 0.8 times 0: 1.0 times (default) 1: 1.2 times 2: 1.5 times 6: 2.5 times If a more detailed speaking speed is required, 2 decimal places can be retained, such as 0.5/1.25/2.81, etc. For the conversion between parameter value and actual speech speed, please refer to <a href="https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz">Speed Conversion</a><br> &emsp; "Volume": 5, // Integer Optional, volume size, range: [0, 10], corresponding to 11 levels of volume, the default value is 0, representing normal volume. <br> &emsp; "PrimaryLanguage": "zh-CN" // String Optional, primary language<br> &emsp;}</pre>
                     * @param _tTSConfig TTS configuration, which is a JSON string. The Tencent Cloud TTS example is as follows: <pre>{ <br> &emsp; "AppId": your application ID, // Integer Required<br> &emsp; "TTSType": "TTS type", // String TTS type, fixed to "tencent"<br> &emsp; "SecretId": "Your key ID", // String Required<br> &emsp; "SecretKey": "Your keyKey", // String Required<br> &emsp; "VoiceType": 101001, // Integer Required, voice ID, including standard voice and premium voice. Premium voice has higher fidelity and different price from standard voice. For details, please refer to <a href="https://cloud.tencent.com/document/product/1073/34112">Overview of Speech Synthesis Billing</a>. For a complete list of timbre IDs, see <a href="https://cloud.tencent.com/document/product/1073/92668#55924b56-1a73-4663-a7a1-a8dd82d6e823">List of speech synthesis timbre IDs</a>. <br> &emsp; "Speed": 1.25, // Integer Optional, speaking speed, range: [-2, 6], corresponding to different speaking speeds: -2: 0.6 times -1: 0.8 times 0: 1.0 times (default) 1: 1.2 times 2: 1.5 times 6: 2.5 times If a more detailed speaking speed is required, 2 decimal places can be retained, such as 0.5/1.25/2.81, etc. For the conversion between parameter value and actual speech speed, please refer to <a href="https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz">Speed Conversion</a><br> &emsp; "Volume": 5, // Integer Optional, volume size, range: [0, 10], corresponding to 11 levels of volume, the default value is 0, representing normal volume. <br> &emsp; "PrimaryLanguage": "zh-CN" // String Optional, primary language<br> &emsp;}</pre>
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
                     * TRTC's [SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid) is the same as the SdkAppId used by the room that starts the conversation task.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * TRTC's [RoomId](https://cloud.tencent.com/document/product/647/46351#roomid), which indicates the room number where the conversation task is started.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Robot parameters
                     */
                    AgentConfig m_agentConfig;
                    bool m_agentConfigHasBeenSet;

                    /**
                     * The unique ID passed in by the caller can be used by the client to prevent repeated task initiation and to query the task status through this field.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * The type of TRTC room number. 0 represents a numeric room number, and 1 represents a string room number. If not filled in, the default is a numeric room number.
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * Speech recognition configuration.
                     */
                    STTConfig m_sTTConfig;
                    bool m_sTTConfigHasBeenSet;

                    /**
                     * LLM configuration. It must comply with the openai specification and be a JSON string. The example is as follows: <pre> { <br> &emsp; "LLMType": "Large model type", // String required, such as: "openai" <br> &emsp; "Model": "Your model name", // String required, specify the model to be used<br> "APIKey": "Your LLM API key", // String required <br> &emsp; "APIUrl": "https://api.xxx.com/chat/completions", // String required, URL for LLM API access<br> &emsp; "Streaming": true // Boolean optional, specify whether to use streaming<br> &emsp;} </pre>
                     */
                    std::string m_lLMConfig;
                    bool m_lLMConfigHasBeenSet;

                    /**
                     * TTS configuration, which is a JSON string. The Tencent Cloud TTS example is as follows: <pre>{ <br> &emsp; "AppId": your application ID, // Integer Required<br> &emsp; "TTSType": "TTS type", // String TTS type, fixed to "tencent"<br> &emsp; "SecretId": "Your key ID", // String Required<br> &emsp; "SecretKey": "Your keyKey", // String Required<br> &emsp; "VoiceType": 101001, // Integer Required, voice ID, including standard voice and premium voice. Premium voice has higher fidelity and different price from standard voice. For details, please refer to <a href="https://cloud.tencent.com/document/product/1073/34112">Overview of Speech Synthesis Billing</a>. For a complete list of timbre IDs, see <a href="https://cloud.tencent.com/document/product/1073/92668#55924b56-1a73-4663-a7a1-a8dd82d6e823">List of speech synthesis timbre IDs</a>. <br> &emsp; "Speed": 1.25, // Integer Optional, speaking speed, range: [-2, 6], corresponding to different speaking speeds: -2: 0.6 times -1: 0.8 times 0: 1.0 times (default) 1: 1.2 times 2: 1.5 times 6: 2.5 times If a more detailed speaking speed is required, 2 decimal places can be retained, such as 0.5/1.25/2.81, etc. For the conversion between parameter value and actual speech speed, please refer to <a href="https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz">Speed Conversion</a><br> &emsp; "Volume": 5, // Integer Optional, volume size, range: [0, 10], corresponding to 11 levels of volume, the default value is 0, representing normal volume. <br> &emsp; "PrimaryLanguage": "zh-CN" // String Optional, primary language<br> &emsp;}</pre>
                     */
                    std::string m_tTSConfig;
                    bool m_tTSConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTAICONVERSATIONREQUEST_H_
