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


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Robot parameters
                */
                class AgentConfig : public AbstractModel
                {
                public:
                    AgentConfig();
                    ~AgentConfig() = default;
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
                     * 获取The UserId of the robot pulling the media stream. After filling in, the robot will pull the media stream of the UserId for real-time processing
                     * @return TargetUserId The UserId of the robot pulling the media stream. After filling in, the robot will pull the media stream of the UserId for real-time processing
                     * 
                     */
                    std::string GetTargetUserId() const;

                    /**
                     * 设置The UserId of the robot pulling the media stream. After filling in, the robot will pull the media stream of the UserId for real-time processing
                     * @param _targetUserId The UserId of the robot pulling the media stream. After filling in, the robot will pull the media stream of the UserId for real-time processing
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
                     * 获取If there is no streaming in the room for more than MaxIdleTime, the Service will automatically close the task. The default value is 60s.
                     * @return MaxIdleTime If there is no streaming in the room for more than MaxIdleTime, the Service will automatically close the task. The default value is 60s.
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置If there is no streaming in the room for more than MaxIdleTime, the Service will automatically close the task. The default value is 60s.
                     * @param _maxIdleTime If there is no streaming in the room for more than MaxIdleTime, the Service will automatically close the task. The default value is 60s.
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
                     * 获取Robot's welcome message
                     * @return WelcomeMessage Robot's welcome message
                     * 
                     */
                    std::string GetWelcomeMessage() const;

                    /**
                     * 设置Robot's welcome message
                     * @param _welcomeMessage Robot's welcome message
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
                     * 获取Intelligent interruption mode, the default value is 0, 0 means the server automatically interrupts, 1 means the server does not interrupt, and the client sends an interrupt signal to interrupt
                     * @return InterruptMode Intelligent interruption mode, the default value is 0, 0 means the server automatically interrupts, 1 means the server does not interrupt, and the client sends an interrupt signal to interrupt
                     * 
                     */
                    uint64_t GetInterruptMode() const;

                    /**
                     * 设置Intelligent interruption mode, the default value is 0, 0 means the server automatically interrupts, 1 means the server does not interrupt, and the client sends an interrupt signal to interrupt
                     * @param _interruptMode Intelligent interruption mode, the default value is 0, 0 means the server automatically interrupts, 1 means the server does not interrupt, and the client sends an interrupt signal to interrupt
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
                     * 获取Used when InterruptMode is 0, in milliseconds, with a default value of 500ms. This means that the server will interrupt when it detects a human voice that lasts for InterruptSpeechDuration milliseconds.
                     * @return InterruptSpeechDuration Used when InterruptMode is 0, in milliseconds, with a default value of 500ms. This means that the server will interrupt when it detects a human voice that lasts for InterruptSpeechDuration milliseconds.
                     * 
                     */
                    uint64_t GetInterruptSpeechDuration() const;

                    /**
                     * 设置Used when InterruptMode is 0, in milliseconds, with a default value of 500ms. This means that the server will interrupt when it detects a human voice that lasts for InterruptSpeechDuration milliseconds.
                     * @param _interruptSpeechDuration Used when InterruptMode is 0, in milliseconds, with a default value of 500ms. This means that the server will interrupt when it detects a human voice that lasts for InterruptSpeechDuration milliseconds.
                     * 
                     */
                    void SetInterruptSpeechDuration(const uint64_t& _interruptSpeechDuration);

                    /**
                     * 判断参数 InterruptSpeechDuration 是否已赋值
                     * @return InterruptSpeechDuration 是否已赋值
                     * 
                     */
                    bool InterruptSpeechDurationHasBeenSet() const;

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
                     * The UserId of the robot pulling the media stream. After filling in, the robot will pull the media stream of the UserId for real-time processing
                     */
                    std::string m_targetUserId;
                    bool m_targetUserIdHasBeenSet;

                    /**
                     * If there is no streaming in the room for more than MaxIdleTime, the Service will automatically close the task. The default value is 60s.
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * Robot's welcome message
                     */
                    std::string m_welcomeMessage;
                    bool m_welcomeMessageHasBeenSet;

                    /**
                     * Intelligent interruption mode, the default value is 0, 0 means the server automatically interrupts, 1 means the server does not interrupt, and the client sends an interrupt signal to interrupt
                     */
                    uint64_t m_interruptMode;
                    bool m_interruptModeHasBeenSet;

                    /**
                     * Used when InterruptMode is 0, in milliseconds, with a default value of 500ms. This means that the server will interrupt when it detects a human voice that lasts for InterruptSpeechDuration milliseconds.
                     */
                    uint64_t m_interruptSpeechDuration;
                    bool m_interruptSpeechDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_AGENTCONFIG_H_
