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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_VOICECONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_VOICECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
                class VoiceConfig : public AbstractModel
                {
                public:
                    VoiceConfig();
                    ~VoiceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return VoiceType 
                     * 
                     */
                    uint64_t GetVoiceType() const;

                    /**
                     * 设置
                     * @param _voiceType 
                     * 
                     */
                    void SetVoiceType(const uint64_t& _voiceType);

                    /**
                     * 判断参数 VoiceType 是否已赋值
                     * @return VoiceType 是否已赋值
                     * 
                     */
                    bool VoiceTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return TimbreKey 
                     * 
                     */
                    std::string GetTimbreKey() const;

                    /**
                     * 设置
                     * @param _timbreKey 
                     * 
                     */
                    void SetTimbreKey(const std::string& _timbreKey);

                    /**
                     * 判断参数 TimbreKey 是否已赋值
                     * @return TimbreKey 是否已赋值
                     * 
                     */
                    bool TimbreKeyHasBeenSet() const;

                    /**
                     * 获取
                     * @return VoiceName 
                     * 
                     */
                    std::string GetVoiceName() const;

                    /**
                     * 设置
                     * @param _voiceName 
                     * 
                     */
                    void SetVoiceName(const std::string& _voiceName);

                    /**
                     * 判断参数 VoiceName 是否已赋值
                     * @return VoiceName 是否已赋值
                     * 
                     */
                    bool VoiceNameHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    uint64_t m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_timbreKey;
                    bool m_timbreKeyHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_voiceName;
                    bool m_voiceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_VOICECONFIG_H_
