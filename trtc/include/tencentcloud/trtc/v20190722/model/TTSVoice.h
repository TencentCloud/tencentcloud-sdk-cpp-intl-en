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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TTSVOICE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TTSVOICE_H_

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
                * Speech parameter configuration for companion transcription TTS
                */
                class TTSVoice : public AbstractModel
                {
                public:
                    TTSVoice();
                    ~TTSVoice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Voice ID.</p>
                     * @return VoiceId <p>Voice ID.</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>Voice ID.</p>
                     * @param _voiceId <p>Voice ID.</p>
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
                     * 获取<p>Speech speed. 0.5 for half speed, 2.0 for 2x speed, 1.0 for normal speed. Value range: [0.5, 2.0]. Default: 1.0.</p>
                     * @return Speed <p>Speech speed. 0.5 for half speed, 2.0 for 2x speed, 1.0 for normal speed. Value range: [0.5, 2.0]. Default: 1.0.</p>
                     * 
                     */
                    double GetSpeed() const;

                    /**
                     * 设置<p>Speech speed. 0.5 for half speed, 2.0 for 2x speed, 1.0 for normal speed. Value range: [0.5, 2.0]. Default: 1.0.</p>
                     * @param _speed <p>Speech speed. 0.5 for half speed, 2.0 for 2x speed, 1.0 for normal speed. Value range: [0.5, 2.0]. Default: 1.0.</p>
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
                     * 获取<p>Audio volume. 0 is mute, 10 is maximum volume. It is recommended to keep the default value to 1.0. Value range: [0, 10]. Default: 1.0.</p>
                     * @return Volume <p>Audio volume. 0 is mute, 10 is maximum volume. It is recommended to keep the default value to 1.0. Value range: [0, 10]. Default: 1.0.</p>
                     * 
                     */
                    double GetVolume() const;

                    /**
                     * 设置<p>Audio volume. 0 is mute, 10 is maximum volume. It is recommended to keep the default value to 1.0. Value range: [0, 10]. Default: 1.0.</p>
                     * @param _volume <p>Audio volume. 0 is mute, 10 is maximum volume. It is recommended to keep the default value to 1.0. Value range: [0, 10]. Default: 1.0.</p>
                     * 
                     */
                    void SetVolume(const double& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取<p>Pitch. Negative value makes the sound low and deep, positive value makes it sharper. 0 indicates the original pitch. Value range: [-12, 12]. Default 0.</p>
                     * @return Pitch <p>Pitch. Negative value makes the sound low and deep, positive value makes it sharper. 0 indicates the original pitch. Value range: [-12, 12]. Default 0.</p>
                     * 
                     */
                    int64_t GetPitch() const;

                    /**
                     * 设置<p>Pitch. Negative value makes the sound low and deep, positive value makes it sharper. 0 indicates the original pitch. Value range: [-12, 12]. Default 0.</p>
                     * @param _pitch <p>Pitch. Negative value makes the sound low and deep, positive value makes it sharper. 0 indicates the original pitch. Value range: [-12, 12]. Default 0.</p>
                     * 
                     */
                    void SetPitch(const int64_t& _pitch);

                    /**
                     * 判断参数 Pitch 是否已赋值
                     * @return Pitch 是否已赋值
                     * 
                     */
                    bool PitchHasBeenSet() const;

                private:

                    /**
                     * <p>Voice ID.</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>Speech speed. 0.5 for half speed, 2.0 for 2x speed, 1.0 for normal speed. Value range: [0.5, 2.0]. Default: 1.0.</p>
                     */
                    double m_speed;
                    bool m_speedHasBeenSet;

                    /**
                     * <p>Audio volume. 0 is mute, 10 is maximum volume. It is recommended to keep the default value to 1.0. Value range: [0, 10]. Default: 1.0.</p>
                     */
                    double m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>Pitch. Negative value makes the sound low and deep, positive value makes it sharper. 0 indicates the original pitch. Value range: [-12, 12]. Default 0.</p>
                     */
                    int64_t m_pitch;
                    bool m_pitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TTSVOICE_H_
