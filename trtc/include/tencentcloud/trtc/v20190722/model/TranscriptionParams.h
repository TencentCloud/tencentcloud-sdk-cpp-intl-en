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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSCRIPTIONPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSCRIPTIONPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * AI transcribe parameters.
                */
                class TranscriptionParams : public AbstractModel
                {
                public:
                    TranscriptionParams();
                    ~TranscriptionParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The transcription robot's UserId is used to enter the room and trigger a transcription task. note that this UserId cannot be the same as the host or audience [UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#UserId) in the current room. if multiple transcription tasks are initiated in a room, the robot's UserId must also be unique to avoid interrupting the previous task. ensure the transcription robot's UserId is unique in the room.
                     * @return UserId The transcription robot's UserId is used to enter the room and trigger a transcription task. note that this UserId cannot be the same as the host or audience [UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#UserId) in the current room. if multiple transcription tasks are initiated in a room, the robot's UserId must also be unique to avoid interrupting the previous task. ensure the transcription robot's UserId is unique in the room.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The transcription robot's UserId is used to enter the room and trigger a transcription task. note that this UserId cannot be the same as the host or audience [UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#UserId) in the current room. if multiple transcription tasks are initiated in a room, the robot's UserId must also be unique to avoid interrupting the previous task. ensure the transcription robot's UserId is unique in the room.
                     * @param _userId The transcription robot's UserId is used to enter the room and trigger a transcription task. note that this UserId cannot be the same as the host or audience [UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#UserId) in the current room. if multiple transcription tasks are initiated in a room, the robot's UserId must also be unique to avoid interrupting the previous task. ensure the transcription robot's UserId is unique in the room.
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
                     * 获取Verification signature corresponding to the transcription bot's UserId, namely, the UserId and UserSig serve as the login password for the transcription bot to enter the room. for specific calculation methods, see TRTC solution for calculating.
                     * @return UserSig Verification signature corresponding to the transcription bot's UserId, namely, the UserId and UserSig serve as the login password for the transcription bot to enter the room. for specific calculation methods, see TRTC solution for calculating.
                     * 
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置Verification signature corresponding to the transcription bot's UserId, namely, the UserId and UserSig serve as the login password for the transcription bot to enter the room. for specific calculation methods, see TRTC solution for calculating.
                     * @param _userSig Verification signature corresponding to the transcription bot's UserId, namely, the UserId and UserSig serve as the login password for the transcription bot to enter the room. for specific calculation methods, see TRTC solution for calculating.
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
                     * 获取After all push users exit the room and exceed MaxIdleTime seconds, the backend automation shuts down the transcription task. default value is 60s.
                     * @return MaxIdleTime After all push users exit the room and exceed MaxIdleTime seconds, the backend automation shuts down the transcription task. default value is 60s.
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置After all push users exit the room and exceed MaxIdleTime seconds, the backend automation shuts down the transcription task. default value is 60s.
                     * @param _maxIdleTime After all push users exit the room and exceed MaxIdleTime seconds, the backend automation shuts down the transcription task. default value is 60s.
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
                     * 获取1 means the robot subscribes to the stream of an individual, and 0 means the robot subscribes to the stream of the entire room. if left empty, it defaults to subscribing to the stream of the entire room.
                     * @return TranscriptionMode 1 means the robot subscribes to the stream of an individual, and 0 means the robot subscribes to the stream of the entire room. if left empty, it defaults to subscribing to the stream of the entire room.
                     * 
                     */
                    uint64_t GetTranscriptionMode() const;

                    /**
                     * 设置1 means the robot subscribes to the stream of an individual, and 0 means the robot subscribes to the stream of the entire room. if left empty, it defaults to subscribing to the stream of the entire room.
                     * @param _transcriptionMode 1 means the robot subscribes to the stream of an individual, and 0 means the robot subscribes to the stream of the entire room. if left empty, it defaults to subscribing to the stream of the entire room.
                     * 
                     */
                    void SetTranscriptionMode(const uint64_t& _transcriptionMode);

                    /**
                     * 判断参数 TranscriptionMode 是否已赋值
                     * @return TranscriptionMode 是否已赋值
                     * 
                     */
                    bool TranscriptionModeHasBeenSet() const;

                    /**
                     * 获取Required when TranscriptionMode is 1, the robot only pulls streams from this userid and ignores other users in the room.
                     * @return TargetUserId Required when TranscriptionMode is 1, the robot only pulls streams from this userid and ignores other users in the room.
                     * 
                     */
                    std::string GetTargetUserId() const;

                    /**
                     * 设置Required when TranscriptionMode is 1, the robot only pulls streams from this userid and ignores other users in the room.
                     * @param _targetUserId Required when TranscriptionMode is 1, the robot only pulls streams from this userid and ignores other users in the room.
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

                private:

                    /**
                     * The transcription robot's UserId is used to enter the room and trigger a transcription task. note that this UserId cannot be the same as the host or audience [UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#UserId) in the current room. if multiple transcription tasks are initiated in a room, the robot's UserId must also be unique to avoid interrupting the previous task. ensure the transcription robot's UserId is unique in the room.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Verification signature corresponding to the transcription bot's UserId, namely, the UserId and UserSig serve as the login password for the transcription bot to enter the room. for specific calculation methods, see TRTC solution for calculating.
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * After all push users exit the room and exceed MaxIdleTime seconds, the backend automation shuts down the transcription task. default value is 60s.
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * 1 means the robot subscribes to the stream of an individual, and 0 means the robot subscribes to the stream of the entire room. if left empty, it defaults to subscribing to the stream of the entire room.
                     */
                    uint64_t m_transcriptionMode;
                    bool m_transcriptionModeHasBeenSet;

                    /**
                     * Required when TranscriptionMode is 1, the robot only pulls streams from this userid and ignores other users in the room.
                     */
                    std::string m_targetUserId;
                    bool m_targetUserIdHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSCRIPTIONPARAMS_H_
