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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TTSCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TTSCONFIG_H_

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
                * TTS configuration.
                */
                class TTSConfig : public AbstractModel
                {
                public:
                    TTSConfig();
                    ~TTSConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Voice type ID.
                     * @return VoiceId Voice type ID.
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置Voice type ID.
                     * @param _voiceId Voice type ID.
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
                     * 获取TTS model: flow_01_turbo is selected by default. options: [flow_01_turbo, flow_01_ex].
                     * @return Model TTS model: flow_01_turbo is selected by default. options: [flow_01_turbo, flow_01_ex].
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置TTS model: flow_01_turbo is selected by default. options: [flow_01_turbo, flow_01_ex].
                     * @param _model TTS model: flow_01_turbo is selected by default. options: [flow_01_turbo, flow_01_ex].
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取Speaking rate. value range: 0.5-2.0. default: 1.0.
                     * @return Speed Speaking rate. value range: 0.5-2.0. default: 1.0.
                     * 
                     */
                    double GetSpeed() const;

                    /**
                     * 设置Speaking rate. value range: 0.5-2.0. default: 1.0.
                     * @param _speed Speaking rate. value range: 0.5-2.0. default: 1.0.
                     * 
                     */
                    void SetSpeed(const double& _speed);

                    /**
                     * 判断参数 Speed 是否已赋值
                     * @return Speed 是否已赋值
                     * 
                     */
                    bool SpeedHasBeenSet() const;

                    /**
                     * 获取Value range: (0, 10]. default value: 1.0.
                     * @return Volume Value range: (0, 10]. default value: 1.0.
                     * 
                     */
                    double GetVolume() const;

                    /**
                     * 设置Value range: (0, 10]. default value: 1.0.
                     * @param _volume Value range: (0, 10]. default value: 1.0.
                     * 
                     */
                    void SetVolume(const double& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                private:

                    /**
                     * Voice type ID.
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * TTS model: flow_01_turbo is selected by default. options: [flow_01_turbo, flow_01_ex].
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * Speaking rate. value range: 0.5-2.0. default: 1.0.
                     */
                    double m_speed;
                    bool m_speedHasBeenSet;

                    /**
                     * Value range: (0, 10]. default value: 1.0.
                     */
                    double m_volume;
                    bool m_volumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TTSCONFIG_H_
