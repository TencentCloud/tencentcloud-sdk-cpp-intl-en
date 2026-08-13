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


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The audio enhancement configuration.
                */
                class AudioEnhanceConfig : public AbstractModel
                {
                public:
                    AudioEnhanceConfig();
                    ~AudioEnhanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audio noise reduction configuration.
                     * @return Denoise Audio noise reduction configuration.
                     * 
                     */
                    AudioDenoiseConfig GetDenoise() const;

                    /**
                     * 设置Audio noise reduction configuration.
                     * @param _denoise Audio noise reduction configuration.
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
                     * 获取Audio separation configuration.
                     * @return Separate Audio separation configuration.
                     * 
                     */
                    AudioSeparateConfig GetSeparate() const;

                    /**
                     * 设置Audio separation configuration.
                     * @param _separate Audio separation configuration.
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
                     * 获取Volume equalization configuration.
                     * @return VolumeBalance Volume equalization configuration.
                     * 
                     */
                    VolumeBalanceConfig GetVolumeBalance() const;

                    /**
                     * 设置Volume equalization configuration.
                     * @param _volumeBalance Volume equalization configuration.
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
                     * 获取Audio beautification configuration.
                     * @return Beautify Audio beautification configuration.
                     * 
                     */
                    AudioBeautifyConfig GetBeautify() const;

                    /**
                     * 设置Audio beautification configuration.
                     * @param _beautify Audio beautification configuration.
                     * 
                     */
                    void SetBeautify(const AudioBeautifyConfig& _beautify);

                    /**
                     * 判断参数 Beautify 是否已赋值
                     * @return Beautify 是否已赋值
                     * 
                     */
                    bool BeautifyHasBeenSet() const;

                private:

                    /**
                     * Audio noise reduction configuration.
                     */
                    AudioDenoiseConfig m_denoise;
                    bool m_denoiseHasBeenSet;

                    /**
                     * Audio separation configuration.
                     */
                    AudioSeparateConfig m_separate;
                    bool m_separateHasBeenSet;

                    /**
                     * Volume equalization configuration.
                     */
                    VolumeBalanceConfig m_volumeBalance;
                    bool m_volumeBalanceHasBeenSet;

                    /**
                     * Audio beautification configuration.
                     */
                    AudioBeautifyConfig m_beautify;
                    bool m_beautifyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOENHANCECONFIG_H_
