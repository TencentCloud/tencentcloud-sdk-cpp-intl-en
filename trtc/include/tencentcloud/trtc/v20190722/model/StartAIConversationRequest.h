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
                     * 获取[SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#SdkAppId) of TRTC, which is the same as the SdkAppId used by the room with transcription task enabled.
                     * @return SdkAppId [SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#SdkAppId) of TRTC, which is the same as the SdkAppId used by the room with transcription task enabled.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置[SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#SdkAppId) of TRTC, which is the same as the SdkAppId used by the room with transcription task enabled.
                     * @param _sdkAppId [SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#SdkAppId) of TRTC, which is the same as the SdkAppId used by the room with transcription task enabled.
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
                     * 获取[RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#RoomId) of TRTC refers to the room number that enables the conversation task.
                     * @return RoomId [RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#RoomId) of TRTC refers to the room number that enables the conversation task.
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置[RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#RoomId) of TRTC refers to the room number that enables the conversation task.
                     * @param _roomId [RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#RoomId) of TRTC refers to the room number that enables the conversation task.
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
                     * 获取Bot parameters.
                     * @return AgentConfig Bot parameters.
                     * 
                     */
                    AgentConfig GetAgentConfig() const;

                    /**
                     * 设置Bot parameters.
                     * @param _agentConfig Bot parameters.
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
                     * 获取The unique Id passed by the caller can be used to prevent duplication of task initiation on the client side as well as query task status through this field.
                     * @return SessionId The unique Id passed by the caller can be used to prevent duplication of task initiation on the client side as well as query task status through this field.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The unique Id passed by the caller can be used to prevent duplication of task initiation on the client side as well as query task status through this field.
                     * @param _sessionId The unique Id passed by the caller can be used to prevent duplication of task initiation on the client side as well as query task status through this field.
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
                     * 获取Type of the TRTC room number. 0 indicates digit room number, 1 indicates string room number. by default if left blank, it is digit room number.
                     * @return RoomIdType Type of the TRTC room number. 0 indicates digit room number, 1 indicates string room number. by default if left blank, it is digit room number.
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置Type of the TRTC room number. 0 indicates digit room number, 1 indicates string room number. by default if left blank, it is digit room number.
                     * @param _roomIdType Type of the TRTC room number. 0 indicates digit room number, 1 indicates string room number. by default if left blank, it is digit room number.
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
                     * 获取Required parameter, LLM configuration. it must comply with the openai standard and be a JSON String. example: <pre> { <br> &emsp;  "LLMType": "Model type",  // String required, for example: "openai" <br> &emsp;  "Model": "your Model name", // String required, specifies the Model to be used<br>    "APIKey": "your LLM API key", // String required <br> &emsp;  "APIUrl": "https://API.xxx.com/chat/completions", // String required, the URL for LLM API access<br> &emsp;  "History": 10, // Integer optional, sets the context rounds for LLM, default value is 0, maximum value is 50<br> &emsp;  "HistoryMode": 1, // Integer optional, 1 means the content in the LLM context will synchronize with playback audio, and text corresponding to unplayed audio will not appear in the context. 0 means no synchronization, default value is 0<br> &emsp;  "Streaming": true // Boolean optional, whether to use Streaming<br> &emsp;} </pre>.
                     * @return LLMConfig Required parameter, LLM configuration. it must comply with the openai standard and be a JSON String. example: <pre> { <br> &emsp;  "LLMType": "Model type",  // String required, for example: "openai" <br> &emsp;  "Model": "your Model name", // String required, specifies the Model to be used<br>    "APIKey": "your LLM API key", // String required <br> &emsp;  "APIUrl": "https://API.xxx.com/chat/completions", // String required, the URL for LLM API access<br> &emsp;  "History": 10, // Integer optional, sets the context rounds for LLM, default value is 0, maximum value is 50<br> &emsp;  "HistoryMode": 1, // Integer optional, 1 means the content in the LLM context will synchronize with playback audio, and text corresponding to unplayed audio will not appear in the context. 0 means no synchronization, default value is 0<br> &emsp;  "Streaming": true // Boolean optional, whether to use Streaming<br> &emsp;} </pre>.
                     * 
                     */
                    std::string GetLLMConfig() const;

                    /**
                     * 设置Required parameter, LLM configuration. it must comply with the openai standard and be a JSON String. example: <pre> { <br> &emsp;  "LLMType": "Model type",  // String required, for example: "openai" <br> &emsp;  "Model": "your Model name", // String required, specifies the Model to be used<br>    "APIKey": "your LLM API key", // String required <br> &emsp;  "APIUrl": "https://API.xxx.com/chat/completions", // String required, the URL for LLM API access<br> &emsp;  "History": 10, // Integer optional, sets the context rounds for LLM, default value is 0, maximum value is 50<br> &emsp;  "HistoryMode": 1, // Integer optional, 1 means the content in the LLM context will synchronize with playback audio, and text corresponding to unplayed audio will not appear in the context. 0 means no synchronization, default value is 0<br> &emsp;  "Streaming": true // Boolean optional, whether to use Streaming<br> &emsp;} </pre>.
                     * @param _lLMConfig Required parameter, LLM configuration. it must comply with the openai standard and be a JSON String. example: <pre> { <br> &emsp;  "LLMType": "Model type",  // String required, for example: "openai" <br> &emsp;  "Model": "your Model name", // String required, specifies the Model to be used<br>    "APIKey": "your LLM API key", // String required <br> &emsp;  "APIUrl": "https://API.xxx.com/chat/completions", // String required, the URL for LLM API access<br> &emsp;  "History": 10, // Integer optional, sets the context rounds for LLM, default value is 0, maximum value is 50<br> &emsp;  "HistoryMode": 1, // Integer optional, 1 means the content in the LLM context will synchronize with playback audio, and text corresponding to unplayed audio will not appear in the context. 0 means no synchronization, default value is 0<br> &emsp;  "Streaming": true // Boolean optional, whether to use Streaming<br> &emsp;} </pre>.
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
                     * 获取Required parameter, TTS configuration. it is a JSON string: TRTC TTS configuration as follows:.  
<pre> { <br> &emsp;  "TTSType": "flow",  // [required] fixed to this value.  <br> &emsp;  "VoiceId": "v-female-R2s4N9qJ", // [required] premium timbre ID/clone voice ID. selectable different timbres. refer to the following timbre list for ID library.   <br> &emsp;  "Model": "flow_01_turbo", // (required) current default TTS Model version (corresponds to Flash version).  <br> &emsp;  "Speed": 1.0,    // [option] adjust the speaking rate. value range [0.5-2.0]. default 1.0. the larger the value, the faster the speech speed. <br> &emsp;  "Volume": 1.0,   // [optional] adjust volume [0,10]. default: 1.0. a larger value indicates higher volume.   <br> &emsp;  "Pitch": 0,   // [optional] adjusts the tone [-12,12]. default value is 0. among them, 0 outputs the original voice type. <br> &emsp;  "Language": "zh" // [optional] recommend filling in. currently supports filling in chinese: zh, english: en, cantonese dialect: yue. parameter reference: (ISO 639-1). <br> &emsp;} </pre>
                     * @return TTSConfig Required parameter, TTS configuration. it is a JSON string: TRTC TTS configuration as follows:.  
<pre> { <br> &emsp;  "TTSType": "flow",  // [required] fixed to this value.  <br> &emsp;  "VoiceId": "v-female-R2s4N9qJ", // [required] premium timbre ID/clone voice ID. selectable different timbres. refer to the following timbre list for ID library.   <br> &emsp;  "Model": "flow_01_turbo", // (required) current default TTS Model version (corresponds to Flash version).  <br> &emsp;  "Speed": 1.0,    // [option] adjust the speaking rate. value range [0.5-2.0]. default 1.0. the larger the value, the faster the speech speed. <br> &emsp;  "Volume": 1.0,   // [optional] adjust volume [0,10]. default: 1.0. a larger value indicates higher volume.   <br> &emsp;  "Pitch": 0,   // [optional] adjusts the tone [-12,12]. default value is 0. among them, 0 outputs the original voice type. <br> &emsp;  "Language": "zh" // [optional] recommend filling in. currently supports filling in chinese: zh, english: en, cantonese dialect: yue. parameter reference: (ISO 639-1). <br> &emsp;} </pre>
                     * 
                     */
                    std::string GetTTSConfig() const;

                    /**
                     * 设置Required parameter, TTS configuration. it is a JSON string: TRTC TTS configuration as follows:.  
<pre> { <br> &emsp;  "TTSType": "flow",  // [required] fixed to this value.  <br> &emsp;  "VoiceId": "v-female-R2s4N9qJ", // [required] premium timbre ID/clone voice ID. selectable different timbres. refer to the following timbre list for ID library.   <br> &emsp;  "Model": "flow_01_turbo", // (required) current default TTS Model version (corresponds to Flash version).  <br> &emsp;  "Speed": 1.0,    // [option] adjust the speaking rate. value range [0.5-2.0]. default 1.0. the larger the value, the faster the speech speed. <br> &emsp;  "Volume": 1.0,   // [optional] adjust volume [0,10]. default: 1.0. a larger value indicates higher volume.   <br> &emsp;  "Pitch": 0,   // [optional] adjusts the tone [-12,12]. default value is 0. among them, 0 outputs the original voice type. <br> &emsp;  "Language": "zh" // [optional] recommend filling in. currently supports filling in chinese: zh, english: en, cantonese dialect: yue. parameter reference: (ISO 639-1). <br> &emsp;} </pre>
                     * @param _tTSConfig Required parameter, TTS configuration. it is a JSON string: TRTC TTS configuration as follows:.  
<pre> { <br> &emsp;  "TTSType": "flow",  // [required] fixed to this value.  <br> &emsp;  "VoiceId": "v-female-R2s4N9qJ", // [required] premium timbre ID/clone voice ID. selectable different timbres. refer to the following timbre list for ID library.   <br> &emsp;  "Model": "flow_01_turbo", // (required) current default TTS Model version (corresponds to Flash version).  <br> &emsp;  "Speed": 1.0,    // [option] adjust the speaking rate. value range [0.5-2.0]. default 1.0. the larger the value, the faster the speech speed. <br> &emsp;  "Volume": 1.0,   // [optional] adjust volume [0,10]. default: 1.0. a larger value indicates higher volume.   <br> &emsp;  "Pitch": 0,   // [optional] adjusts the tone [-12,12]. default value is 0. among them, 0 outputs the original voice type. <br> &emsp;  "Language": "zh" // [optional] recommend filling in. currently supports filling in chinese: zh, english: en, cantonese dialect: yue. parameter reference: (ISO 639-1). <br> &emsp;} </pre>
                     * 
                     */
                    void SetTTSConfig(const std::string& _tTSConfig);

                    /**
                     * 判断参数 TTSConfig 是否已赋值
                     * @return TTSConfig 是否已赋值
                     * 
                     */
                    bool TTSConfigHasBeenSet() const;

                    /**
                     * 获取Experimental parameter, contact for background usage.
                     * @return ExperimentalParams Experimental parameter, contact for background usage.
                     * 
                     */
                    std::string GetExperimentalParams() const;

                    /**
                     * 设置Experimental parameter, contact for background usage.
                     * @param _experimentalParams Experimental parameter, contact for background usage.
                     * 
                     */
                    void SetExperimentalParams(const std::string& _experimentalParams);

                    /**
                     * 判断参数 ExperimentalParams 是否已赋值
                     * @return ExperimentalParams 是否已赋值
                     * 
                     */
                    bool ExperimentalParamsHasBeenSet() const;

                private:

                    /**
                     * [SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#SdkAppId) of TRTC, which is the same as the SdkAppId used by the room with transcription task enabled.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * [RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#RoomId) of TRTC refers to the room number that enables the conversation task.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Bot parameters.
                     */
                    AgentConfig m_agentConfig;
                    bool m_agentConfigHasBeenSet;

                    /**
                     * The unique Id passed by the caller can be used to prevent duplication of task initiation on the client side as well as query task status through this field.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Type of the TRTC room number. 0 indicates digit room number, 1 indicates string room number. by default if left blank, it is digit room number.
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * Speech recognition configuration.
                     */
                    STTConfig m_sTTConfig;
                    bool m_sTTConfigHasBeenSet;

                    /**
                     * Required parameter, LLM configuration. it must comply with the openai standard and be a JSON String. example: <pre> { <br> &emsp;  "LLMType": "Model type",  // String required, for example: "openai" <br> &emsp;  "Model": "your Model name", // String required, specifies the Model to be used<br>    "APIKey": "your LLM API key", // String required <br> &emsp;  "APIUrl": "https://API.xxx.com/chat/completions", // String required, the URL for LLM API access<br> &emsp;  "History": 10, // Integer optional, sets the context rounds for LLM, default value is 0, maximum value is 50<br> &emsp;  "HistoryMode": 1, // Integer optional, 1 means the content in the LLM context will synchronize with playback audio, and text corresponding to unplayed audio will not appear in the context. 0 means no synchronization, default value is 0<br> &emsp;  "Streaming": true // Boolean optional, whether to use Streaming<br> &emsp;} </pre>.
                     */
                    std::string m_lLMConfig;
                    bool m_lLMConfigHasBeenSet;

                    /**
                     * Required parameter, TTS configuration. it is a JSON string: TRTC TTS configuration as follows:.  
<pre> { <br> &emsp;  "TTSType": "flow",  // [required] fixed to this value.  <br> &emsp;  "VoiceId": "v-female-R2s4N9qJ", // [required] premium timbre ID/clone voice ID. selectable different timbres. refer to the following timbre list for ID library.   <br> &emsp;  "Model": "flow_01_turbo", // (required) current default TTS Model version (corresponds to Flash version).  <br> &emsp;  "Speed": 1.0,    // [option] adjust the speaking rate. value range [0.5-2.0]. default 1.0. the larger the value, the faster the speech speed. <br> &emsp;  "Volume": 1.0,   // [optional] adjust volume [0,10]. default: 1.0. a larger value indicates higher volume.   <br> &emsp;  "Pitch": 0,   // [optional] adjusts the tone [-12,12]. default value is 0. among them, 0 outputs the original voice type. <br> &emsp;  "Language": "zh" // [optional] recommend filling in. currently supports filling in chinese: zh, english: en, cantonese dialect: yue. parameter reference: (ISO 639-1). <br> &emsp;} </pre>
                     */
                    std::string m_tTSConfig;
                    bool m_tTSConfigHasBeenSet;

                    /**
                     * Experimental parameter, contact for background usage.
                     */
                    std::string m_experimentalParams;
                    bool m_experimentalParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTAICONVERSATIONREQUEST_H_
