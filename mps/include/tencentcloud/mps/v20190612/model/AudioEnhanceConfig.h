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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOENHANCECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOENHANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AudioDenoiseConfig.h>
#include <tencentcloud/mps/v20190612/model/AudioSeparateConfig.h>
#include <tencentcloud/mps/v20190612/model/VolumeBalanceConfig.h>
#include <tencentcloud/mps/v20190612/model/AudioBeautifyConfig.h>
#include <tencentcloud/mps/v20190612/model/AudioEnhanceEditConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Audio enhancement configuration
                */
                class AudioEnhanceConfig : public AbstractModel
                {
                public:
                    AudioEnhanceConfig();
                    ~AudioEnhanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Audio noise reduction configuration.</p>
                     * @return Denoise <p>Audio noise reduction configuration.</p>
                     * 
                     */
                    AudioDenoiseConfig GetDenoise() const;

                    /**
                     * 设置<p>Audio noise reduction configuration.</p>
                     * @param _denoise <p>Audio noise reduction configuration.</p>
                     * 
                     */
                    void SetDenoise(const AudioDenoiseConfig& _denoise);

                    /**
                     * 判断参数 Denoise 是否已赋值
                     * @return Denoise 是否已赋值
                     * 
                     */
                    bool DenoiseHasBeenSet() const;

                    /**
                     * 获取<p>Audio separation configuration.</p>
                     * @return Separate <p>Audio separation configuration.</p>
                     * 
                     */
                    AudioSeparateConfig GetSeparate() const;

                    /**
                     * 设置<p>Audio separation configuration.</p>
                     * @param _separate <p>Audio separation configuration.</p>
                     * 
                     */
                    void SetSeparate(const AudioSeparateConfig& _separate);

                    /**
                     * 判断参数 Separate 是否已赋值
                     * @return Separate 是否已赋值
                     * 
                     */
                    bool SeparateHasBeenSet() const;

                    /**
                     * 获取<p>Volume equalization configuration.</p>
                     * @return VolumeBalance <p>Volume equalization configuration.</p>
                     * 
                     */
                    VolumeBalanceConfig GetVolumeBalance() const;

                    /**
                     * 设置<p>Volume equalization configuration.</p>
                     * @param _volumeBalance <p>Volume equalization configuration.</p>
                     * 
                     */
                    void SetVolumeBalance(const VolumeBalanceConfig& _volumeBalance);

                    /**
                     * 判断参数 VolumeBalance 是否已赋值
                     * @return VolumeBalance 是否已赋值
                     * 
                     */
                    bool VolumeBalanceHasBeenSet() const;

                    /**
                     * 获取<p>Audio improvement configuration.</p>
                     * @return Beautify <p>Audio improvement configuration.</p>
                     * 
                     */
                    AudioBeautifyConfig GetBeautify() const;

                    /**
                     * 设置<p>Audio improvement configuration.</p>
                     * @param _beautify <p>Audio improvement configuration.</p>
                     * 
                     */
                    void SetBeautify(const AudioBeautifyConfig& _beautify);

                    /**
                     * 判断参数 Beautify 是否已赋值
                     * @return Beautify 是否已赋值
                     * 
                     */
                    bool BeautifyHasBeenSet() const;

                    /**
                     * 获取<p>Audio enhancement edit.</p>
                     * @return AudioEnhanceEdit <p>Audio enhancement edit.</p>
                     * 
                     */
                    AudioEnhanceEditConfig GetAudioEnhanceEdit() const;

                    /**
                     * 设置<p>Audio enhancement edit.</p>
                     * @param _audioEnhanceEdit <p>Audio enhancement edit.</p>
                     * 
                     */
                    void SetAudioEnhanceEdit(const AudioEnhanceEditConfig& _audioEnhanceEdit);

                    /**
                     * 判断参数 AudioEnhanceEdit 是否已赋值
                     * @return AudioEnhanceEdit 是否已赋值
                     * 
                     */
                    bool AudioEnhanceEditHasBeenSet() const;

                private:

                    /**
                     * <p>Audio noise reduction configuration.</p>
                     */
                    AudioDenoiseConfig m_denoise;
                    bool m_denoiseHasBeenSet;

                    /**
                     * <p>Audio separation configuration.</p>
                     */
                    AudioSeparateConfig m_separate;
                    bool m_separateHasBeenSet;

                    /**
                     * <p>Volume equalization configuration.</p>
                     */
                    VolumeBalanceConfig m_volumeBalance;
                    bool m_volumeBalanceHasBeenSet;

                    /**
                     * <p>Audio improvement configuration.</p>
                     */
                    AudioBeautifyConfig m_beautify;
                    bool m_beautifyHasBeenSet;

                    /**
                     * <p>Audio enhancement edit.</p>
                     */
                    AudioEnhanceEditConfig m_audioEnhanceEdit;
                    bool m_audioEnhanceEditHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOENHANCECONFIG_H_
