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
                * 
                */
                class AICallConfig : public AbstractModel
                {
                public:
                    AICallConfig();
                    ~AICallConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return EnableVoiceInteract 
                     * 
                     */
                    bool GetEnableVoiceInteract() const;

                    /**
                     * 设置
                     * @param _enableVoiceInteract 
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
                     * 获取
                     * @return EnableVoiceCall 
                     * 
                     */
                    bool GetEnableVoiceCall() const;

                    /**
                     * 设置
                     * @param _enableVoiceCall 
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
                     * 获取
                     * @return EnableDigitalHuman 
                     * 
                     */
                    bool GetEnableDigitalHuman() const;

                    /**
                     * 设置
                     * @param _enableDigitalHuman 
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
                     * 获取
                     * @return Voice 
                     * 
                     */
                    VoiceConfig GetVoice() const;

                    /**
                     * 设置
                     * @param _voice 
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
                     * 获取
                     * @return DigitalHuman 
                     * 
                     */
                    DigitalHumanConfig GetDigitalHuman() const;

                    /**
                     * 设置
                     * @param _digitalHuman 
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
                     * 
                     */
                    bool m_enableVoiceInteract;
                    bool m_enableVoiceInteractHasBeenSet;

                    /**
                     * 
                     */
                    bool m_enableVoiceCall;
                    bool m_enableVoiceCallHasBeenSet;

                    /**
                     * 
                     */
                    bool m_enableDigitalHuman;
                    bool m_enableDigitalHumanHasBeenSet;

                    /**
                     * 
                     */
                    VoiceConfig m_voice;
                    bool m_voiceHasBeenSet;

                    /**
                     * 
                     */
                    DigitalHumanConfig m_digitalHuman;
                    bool m_digitalHumanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AICALLCONFIG_H_
