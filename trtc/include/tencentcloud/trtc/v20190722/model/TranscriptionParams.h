/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * AI Transcription Params
                */
                class TranscriptionParams : public AbstractModel
                {
                public:
                    TranscriptionParams();
                    ~TranscriptionParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The robot's UserId is used to enter a room and initiate tasks. [Note] This UserId cannot be repeated with the host viewer [UserId](https://cloud.tencent.com/document/product/647/46351#userid) in the current room. If multiple tasks are initiated in a room, the robot's UserId cannot be repeated, otherwise the previous task will be interrupted. The robot's UserId must be unique in the room.
                     * @return UserId The robot's UserId is used to enter a room and initiate tasks. [Note] This UserId cannot be repeated with the host viewer [UserId](https://cloud.tencent.com/document/product/647/46351#userid) in the current room. If multiple tasks are initiated in a room, the robot's UserId cannot be repeated, otherwise the previous task will be interrupted. The robot's UserId must be unique in the room.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The robot's UserId is used to enter a room and initiate tasks. [Note] This UserId cannot be repeated with the host viewer [UserId](https://cloud.tencent.com/document/product/647/46351#userid) in the current room. If multiple tasks are initiated in a room, the robot's UserId cannot be repeated, otherwise the previous task will be interrupted. The robot's UserId must be unique in the room.
                     * @param _userId The robot's UserId is used to enter a room and initiate tasks. [Note] This UserId cannot be repeated with the host viewer [UserId](https://cloud.tencent.com/document/product/647/46351#userid) in the current room. If multiple tasks are initiated in a room, the robot's UserId cannot be repeated, otherwise the previous task will be interrupted. The robot's UserId must be unique in the room.
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
                     * 获取The verification signature corresponding to the robot's UserId, that is, UserId and UserSig are equivalent to the robot's login password to enter the room. For the specific calculation method, please refer to the TRTC calculation [UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig) solution.
                     * @return UserSig The verification signature corresponding to the robot's UserId, that is, UserId and UserSig are equivalent to the robot's login password to enter the room. For the specific calculation method, please refer to the TRTC calculation [UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig) solution.
                     * 
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置The verification signature corresponding to the robot's UserId, that is, UserId and UserSig are equivalent to the robot's login password to enter the room. For the specific calculation method, please refer to the TRTC calculation [UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig) solution.
                     * @param _userSig The verification signature corresponding to the robot's UserId, that is, UserId and UserSig are equivalent to the robot's login password to enter the room. For the specific calculation method, please refer to the TRTC calculation [UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig) solution.
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
                     * 获取If there is no streaming in the room for more than MaxIdleTime, the background will automatically close the task. The default value is 60s.
                     * @return MaxIdleTime If there is no streaming in the room for more than MaxIdleTime, the background will automatically close the task. The default value is 60s.
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置If there is no streaming in the room for more than MaxIdleTime, the background will automatically close the task. The default value is 60s.
                     * @param _maxIdleTime If there is no streaming in the room for more than MaxIdleTime, the background will automatically close the task. The default value is 60s.
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
                     * 获取1 means the robot subscribes to the stream of only one person, 0 means the robot subscribes to the stream of the entire room. If it is not filled in, the robot subscribes to the stream of the entire room by default.
                     * @return TranscriptionMode 1 means the robot subscribes to the stream of only one person, 0 means the robot subscribes to the stream of the entire room. If it is not filled in, the robot subscribes to the stream of the entire room by default.
                     * 
                     */
                    uint64_t GetTranscriptionMode() const;

                    /**
                     * 设置1 means the robot subscribes to the stream of only one person, 0 means the robot subscribes to the stream of the entire room. If it is not filled in, the robot subscribes to the stream of the entire room by default.
                     * @param _transcriptionMode 1 means the robot subscribes to the stream of only one person, 0 means the robot subscribes to the stream of the entire room. If it is not filled in, the robot subscribes to the stream of the entire room by default.
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
                     * 获取Required when TranscriptionMode is 1. The robot will only pull the stream of the userid and ignore other users in the room.
                     * @return TargetUserId Required when TranscriptionMode is 1. The robot will only pull the stream of the userid and ignore other users in the room.
                     * 
                     */
                    std::string GetTargetUserId() const;

                    /**
                     * 设置Required when TranscriptionMode is 1. The robot will only pull the stream of the userid and ignore other users in the room.
                     * @param _targetUserId Required when TranscriptionMode is 1. The robot will only pull the stream of the userid and ignore other users in the room.
                     * 
                     */
                    void SetTargetUserId(const std::string& _targetUserId);

                    /**
                     * 判断参数 TargetUserId 是否已赋值
                     * @return TargetUserId 是否已赋值
                     * 
                     */
                    bool TargetUserIdHasBeenSet() const;

                private:

                    /**
                     * The robot's UserId is used to enter a room and initiate tasks. [Note] This UserId cannot be repeated with the host viewer [UserId](https://cloud.tencent.com/document/product/647/46351#userid) in the current room. If multiple tasks are initiated in a room, the robot's UserId cannot be repeated, otherwise the previous task will be interrupted. The robot's UserId must be unique in the room.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * The verification signature corresponding to the robot's UserId, that is, UserId and UserSig are equivalent to the robot's login password to enter the room. For the specific calculation method, please refer to the TRTC calculation [UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig) solution.
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * If there is no streaming in the room for more than MaxIdleTime, the background will automatically close the task. The default value is 60s.
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * 1 means the robot subscribes to the stream of only one person, 0 means the robot subscribes to the stream of the entire room. If it is not filled in, the robot subscribes to the stream of the entire room by default.
                     */
                    uint64_t m_transcriptionMode;
                    bool m_transcriptionModeHasBeenSet;

                    /**
                     * Required when TranscriptionMode is 1. The robot will only pull the stream of the userid and ignore other users in the room.
                     */
                    std::string m_targetUserId;
                    bool m_targetUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSCRIPTIONPARAMS_H_
