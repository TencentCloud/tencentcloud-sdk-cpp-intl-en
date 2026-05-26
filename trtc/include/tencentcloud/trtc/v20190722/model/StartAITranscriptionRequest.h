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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STARTAITRANSCRIPTIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STARTAITRANSCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TranscriptionParams.h>
#include <tencentcloud/trtc/v20190722/model/RecognizeConfig.h>
#include <tencentcloud/trtc/v20190722/model/TranslationConfig.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * StartAITranscription request structure.
                */
                class StartAITranscriptionRequest : public AbstractModel
                {
                public:
                    StartAITranscriptionRequest();
                    ~StartAITranscriptionRequest() = default;
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
                     * 获取[RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#RoomId) of TRTC refers to the room number that enables the transcription task.
                     * @return RoomId [RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#RoomId) of TRTC refers to the room number that enables the transcription task.
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置[RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#RoomId) of TRTC refers to the room number that enables the transcription task.
                     * @param _roomId [RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#RoomId) of TRTC refers to the room number that enables the transcription task.
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
                     * 获取Transcription robot parameters.
                     * @return TranscriptionParams Transcription robot parameters.
                     * 
                     */
                    TranscriptionParams GetTranscriptionParams() const;

                    /**
                     * 设置Transcription robot parameters.
                     * @param _transcriptionParams Transcription robot parameters.
                     * 
                     */
                    void SetTranscriptionParams(const TranscriptionParams& _transcriptionParams);

                    /**
                     * 判断参数 TranscriptionParams 是否已赋值
                     * @return TranscriptionParams 是否已赋值
                     * 
                     */
                    bool TranscriptionParamsHasBeenSet() const;

                    /**
                     * 获取Unique Id passed by the caller, used by the server for task deduplication. duplicate tasks will fail to initiate. the server uses SdkAppId+RoomId+RoomIdType+RobotUserId for deduplication by default. if SessionId is provided, it will also be used for deduplication.
Note:.
When TranscriptionMode is 0, ensure only one task is initiated in a room. if multiple tasks are initiated, robots will subscribe to each other. unless the task is stopped proactively, it will timeout exit after 10 hours. in such cases, it is advisable to fill in SessionId to ensure subsequent repeated tasks fail.
                     * @return SessionId Unique Id passed by the caller, used by the server for task deduplication. duplicate tasks will fail to initiate. the server uses SdkAppId+RoomId+RoomIdType+RobotUserId for deduplication by default. if SessionId is provided, it will also be used for deduplication.
Note:.
When TranscriptionMode is 0, ensure only one task is initiated in a room. if multiple tasks are initiated, robots will subscribe to each other. unless the task is stopped proactively, it will timeout exit after 10 hours. in such cases, it is advisable to fill in SessionId to ensure subsequent repeated tasks fail.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Unique Id passed by the caller, used by the server for task deduplication. duplicate tasks will fail to initiate. the server uses SdkAppId+RoomId+RoomIdType+RobotUserId for deduplication by default. if SessionId is provided, it will also be used for deduplication.
Note:.
When TranscriptionMode is 0, ensure only one task is initiated in a room. if multiple tasks are initiated, robots will subscribe to each other. unless the task is stopped proactively, it will timeout exit after 10 hours. in such cases, it is advisable to fill in SessionId to ensure subsequent repeated tasks fail.
                     * @param _sessionId Unique Id passed by the caller, used by the server for task deduplication. duplicate tasks will fail to initiate. the server uses SdkAppId+RoomId+RoomIdType+RobotUserId for deduplication by default. if SessionId is provided, it will also be used for deduplication.
Note:.
When TranscriptionMode is 0, ensure only one task is initiated in a room. if multiple tasks are initiated, robots will subscribe to each other. unless the task is stopped proactively, it will timeout exit after 10 hours. in such cases, it is advisable to fill in SessionId to ensure subsequent repeated tasks fail.
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
                     * @return RecognizeConfig Speech recognition configuration.
                     * 
                     */
                    RecognizeConfig GetRecognizeConfig() const;

                    /**
                     * 设置Speech recognition configuration.
                     * @param _recognizeConfig Speech recognition configuration.
                     * 
                     */
                    void SetRecognizeConfig(const RecognizeConfig& _recognizeConfig);

                    /**
                     * 判断参数 RecognizeConfig 是否已赋值
                     * @return RecognizeConfig 是否已赋值
                     * 
                     */
                    bool RecognizeConfigHasBeenSet() const;

                    /**
                     * 获取Translate configuration details.
                     * @return TranslationConfig Translate configuration details.
                     * 
                     */
                    TranslationConfig GetTranslationConfig() const;

                    /**
                     * 设置Translate configuration details.
                     * @param _translationConfig Translate configuration details.
                     * 
                     */
                    void SetTranslationConfig(const TranslationConfig& _translationConfig);

                    /**
                     * 判断参数 TranslationConfig 是否已赋值
                     * @return TranslationConfig 是否已赋值
                     * 
                     */
                    bool TranslationConfigHasBeenSet() const;

                private:

                    /**
                     * [SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#SdkAppId) of TRTC, which is the same as the SdkAppId used by the room with transcription task enabled.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * [RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#RoomId) of TRTC refers to the room number that enables the transcription task.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Transcription robot parameters.
                     */
                    TranscriptionParams m_transcriptionParams;
                    bool m_transcriptionParamsHasBeenSet;

                    /**
                     * Unique Id passed by the caller, used by the server for task deduplication. duplicate tasks will fail to initiate. the server uses SdkAppId+RoomId+RoomIdType+RobotUserId for deduplication by default. if SessionId is provided, it will also be used for deduplication.
Note:.
When TranscriptionMode is 0, ensure only one task is initiated in a room. if multiple tasks are initiated, robots will subscribe to each other. unless the task is stopped proactively, it will timeout exit after 10 hours. in such cases, it is advisable to fill in SessionId to ensure subsequent repeated tasks fail.
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
                    RecognizeConfig m_recognizeConfig;
                    bool m_recognizeConfigHasBeenSet;

                    /**
                     * Translate configuration details.
                     */
                    TranslationConfig m_translationConfig;
                    bool m_translationConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTAITRANSCRIPTIONREQUEST_H_
