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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AICALLCONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AICALLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/VoiceConfig.h>
#include <tencentcloud/lke/v20231130/model/DigitalHumanConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Smart Conversation
                */
                class AICallConfig : public AbstractModel
                {
                public:
                    AICallConfig();
                    ~AICallConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enable voice interaction feature
                     * @return EnableVoiceInteract Enable voice interaction feature
                     * 
                     */
                    bool GetEnableVoiceInteract() const;

                    /**
                     * 设置Enable voice interaction feature
                     * @param _enableVoiceInteract Enable voice interaction feature
                     * 
                     */
                    void SetEnableVoiceInteract(const bool& _enableVoiceInteract);

                    /**
                     * 判断参数 EnableVoiceInteract 是否已赋值
                     * @return EnableVoiceInteract 是否已赋值
                     * 
                     */
                    bool EnableVoiceInteractHasBeenSet() const;

                    /**
                     * 获取Enable voice call
                     * @return EnableVoiceCall Enable voice call
                     * 
                     */
                    bool GetEnableVoiceCall() const;

                    /**
                     * 设置Enable voice call
                     * @param _enableVoiceCall Enable voice call
                     * 
                     */
                    void SetEnableVoiceCall(const bool& _enableVoiceCall);

                    /**
                     * 判断参数 EnableVoiceCall 是否已赋值
                     * @return EnableVoiceCall 是否已赋值
                     * 
                     */
                    bool EnableVoiceCallHasBeenSet() const;

                    /**
                     * 获取Enable digital human
                     * @return EnableDigitalHuman Enable digital human
                     * 
                     */
                    bool GetEnableDigitalHuman() const;

                    /**
                     * 设置Enable digital human
                     * @param _enableDigitalHuman Enable digital human
                     * 
                     */
                    void SetEnableDigitalHuman(const bool& _enableDigitalHuman);

                    /**
                     * 判断参数 EnableDigitalHuman 是否已赋值
                     * @return EnableDigitalHuman 是否已赋值
                     * 
                     */
                    bool EnableDigitalHumanHasBeenSet() const;

                    /**
                     * 获取Timbre Configuration
                     * @return Voice Timbre Configuration
                     * 
                     */
                    VoiceConfig GetVoice() const;

                    /**
                     * 设置Timbre Configuration
                     * @param _voice Timbre Configuration
                     * 
                     */
                    void SetVoice(const VoiceConfig& _voice);

                    /**
                     * 判断参数 Voice 是否已赋值
                     * @return Voice 是否已赋值
                     * 
                     */
                    bool VoiceHasBeenSet() const;

                    /**
                     * 获取Digital Human Configuration
                     * @return DigitalHuman Digital Human Configuration
                     * 
                     */
                    DigitalHumanConfig GetDigitalHuman() const;

                    /**
                     * 设置Digital Human Configuration
                     * @param _digitalHuman Digital Human Configuration
                     * 
                     */
                    void SetDigitalHuman(const DigitalHumanConfig& _digitalHuman);

                    /**
                     * 判断参数 DigitalHuman 是否已赋值
                     * @return DigitalHuman 是否已赋值
                     * 
                     */
                    bool DigitalHumanHasBeenSet() const;

                private:

                    /**
                     * Enable voice interaction feature
                     */
                    bool m_enableVoiceInteract;
                    bool m_enableVoiceInteractHasBeenSet;

                    /**
                     * Enable voice call
                     */
                    bool m_enableVoiceCall;
                    bool m_enableVoiceCallHasBeenSet;

                    /**
                     * Enable digital human
                     */
                    bool m_enableDigitalHuman;
                    bool m_enableDigitalHumanHasBeenSet;

                    /**
                     * Timbre Configuration
                     */
                    VoiceConfig m_voice;
                    bool m_voiceHasBeenSet;

                    /**
                     * Digital Human Configuration
                     */
                    DigitalHumanConfig m_digitalHuman;
                    bool m_digitalHumanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AICALLCONFIG_H_
