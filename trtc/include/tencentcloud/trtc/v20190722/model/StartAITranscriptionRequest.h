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
                     * 获取TRTC's [SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid) is the same as the SdkAppId used by the room that starts the transcription task.
                     * @return SdkAppId TRTC's [SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid) is the same as the SdkAppId used by the room that starts the transcription task.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置TRTC's [SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid) is the same as the SdkAppId used by the room that starts the transcription task.
                     * @param _sdkAppId TRTC's [SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid) is the same as the SdkAppId used by the room that starts the transcription task.
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
                     * 获取TRTC's [RoomId](https://cloud.tencent.com/document/product/647/46351#roomid), which indicates the room number where the transcription task is started.
                     * @return RoomId TRTC's [RoomId](https://cloud.tencent.com/document/product/647/46351#roomid), which indicates the room number where the transcription task is started.
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置TRTC's [RoomId](https://cloud.tencent.com/document/product/647/46351#roomid), which indicates the room number where the transcription task is started.
                     * @param _roomId TRTC's [RoomId](https://cloud.tencent.com/document/product/647/46351#roomid), which indicates the room number where the transcription task is started.
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
                     * 获取Parameters of the transcription robot.
                     * @return TranscriptionParams Parameters of the transcription robot.
                     * 
                     */
                    TranscriptionParams GetTranscriptionParams() const;

                    /**
                     * 设置Parameters of the transcription robot.
                     * @param _transcriptionParams Parameters of the transcription robot.
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
                     * 获取The unique ID passed by the caller is used by the server to deduplicate. Note: If this parameter is passed, the server will use it first to deduplicate. If this parameter is not passed, the server's deduplication strategy is as follows: 
- If the TranscriptionMode field is 0, only one task can be opened in a room
- If the TranscriptionMode field is 1, only one task can be opened in a TargetUserId
                     * @return SessionId The unique ID passed by the caller is used by the server to deduplicate. Note: If this parameter is passed, the server will use it first to deduplicate. If this parameter is not passed, the server's deduplication strategy is as follows: 
- If the TranscriptionMode field is 0, only one task can be opened in a room
- If the TranscriptionMode field is 1, only one task can be opened in a TargetUserId
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The unique ID passed by the caller is used by the server to deduplicate. Note: If this parameter is passed, the server will use it first to deduplicate. If this parameter is not passed, the server's deduplication strategy is as follows: 
- If the TranscriptionMode field is 0, only one task can be opened in a room
- If the TranscriptionMode field is 1, only one task can be opened in a TargetUserId
                     * @param _sessionId The unique ID passed by the caller is used by the server to deduplicate. Note: If this parameter is passed, the server will use it first to deduplicate. If this parameter is not passed, the server's deduplication strategy is as follows: 
- If the TranscriptionMode field is 0, only one task can be opened in a room
- If the TranscriptionMode field is 1, only one task can be opened in a TargetUserId
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
                     * 获取Translation config.
                     * @return TranslationConfig Translation config.
                     * 
                     */
                    TranslationConfig GetTranslationConfig() const;

                    /**
                     * 设置Translation config.
                     * @param _translationConfig Translation config.
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
                     * TRTC's [SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid) is the same as the SdkAppId used by the room that starts the transcription task.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * TRTC's [RoomId](https://cloud.tencent.com/document/product/647/46351#roomid), which indicates the room number where the transcription task is started.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Parameters of the transcription robot.
                     */
                    TranscriptionParams m_transcriptionParams;
                    bool m_transcriptionParamsHasBeenSet;

                    /**
                     * The unique ID passed by the caller is used by the server to deduplicate. Note: If this parameter is passed, the server will use it first to deduplicate. If this parameter is not passed, the server's deduplication strategy is as follows: 
- If the TranscriptionMode field is 0, only one task can be opened in a room
- If the TranscriptionMode field is 1, only one task can be opened in a TargetUserId
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
                    RecognizeConfig m_recognizeConfig;
                    bool m_recognizeConfigHasBeenSet;

                    /**
                     * Translation config.
                     */
                    TranslationConfig m_translationConfig;
                    bool m_translationConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTAITRANSCRIPTIONREQUEST_H_
