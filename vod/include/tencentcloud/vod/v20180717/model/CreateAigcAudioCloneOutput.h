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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOCLONEOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOCLONEOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class CreateAigcAudioCloneOutput : public AbstractModel
                {
                public:
                    CreateAigcAudioCloneOutput();
                    ~CreateAigcAudioCloneOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return TaskId 
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置
                     * @param _taskId 
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return State 
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置
                     * @param _state 
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取
                     * @return VoiceId 
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置
                     * @param _voiceId 
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return DemoAudio 
                     * 
                     */
                    std::string GetDemoAudio() const;

                    /**
                     * 设置
                     * @param _demoAudio 
                     * 
                     */
                    void SetDemoAudio(const std::string& _demoAudio);

                    /**
                     * 判断参数 DemoAudio 是否已赋值
                     * @return DemoAudio 是否已赋值
                     * 
                     */
                    bool DemoAudioHasBeenSet() const;

                    /**
                     * 获取
                     * @return Payload 
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置
                     * @param _payload 
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取
                     * @return CreatedAt 
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置
                     * @param _createdAt 
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_demoAudio;
                    bool m_demoAudioHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOCLONEOUTPUT_H_
