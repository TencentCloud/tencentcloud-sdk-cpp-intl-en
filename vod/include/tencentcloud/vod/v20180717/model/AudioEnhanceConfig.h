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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOENHANCECONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOENHANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AudioDenoiseInfo.h>
#include <tencentcloud/vod/v20180717/model/AudioSeparateInfo.h>
#include <tencentcloud/vod/v20180717/model/AudioVolumeBalanceInfo.h>
#include <tencentcloud/vod/v20180717/model/AudioBeautifyInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Audio enhancement configuration.
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
                    AudioDenoiseInfo GetDenoise() const;

                    /**
                     * 设置Audio noise reduction configuration.
                     * @param _denoise Audio noise reduction configuration.
                     * 
                     */
                    void SetDenoise(const AudioDenoiseInfo& _denoise);

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
                    AudioSeparateInfo GetSeparate() const;

                    /**
                     * 设置Audio separation configuration.
                     * @param _separate Audio separation configuration.
                     * 
                     */
                    void SetSeparate(const AudioSeparateInfo& _separate);

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
                    AudioVolumeBalanceInfo GetVolumeBalance() const;

                    /**
                     * 设置Volume equalization configuration.
                     * @param _volumeBalance Volume equalization configuration.
                     * 
                     */
                    void SetVolumeBalance(const AudioVolumeBalanceInfo& _volumeBalance);

                    /**
                     * 判断参数 VolumeBalance 是否已赋值
                     * @return VolumeBalance 是否已赋值
                     * 
                     */
                    bool VolumeBalanceHasBeenSet() const;

                    /**
                     * 获取Volume beautification configuration.
                     * @return Beautify Volume beautification configuration.
                     * 
                     */
                    AudioBeautifyInfo GetBeautify() const;

                    /**
                     * 设置Volume beautification configuration.
                     * @param _beautify Volume beautification configuration.
                     * 
                     */
                    void SetBeautify(const AudioBeautifyInfo& _beautify);

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
                    AudioDenoiseInfo m_denoise;
                    bool m_denoiseHasBeenSet;

                    /**
                     * Audio separation configuration.
                     */
                    AudioSeparateInfo m_separate;
                    bool m_separateHasBeenSet;

                    /**
                     * Volume equalization configuration.
                     */
                    AudioVolumeBalanceInfo m_volumeBalance;
                    bool m_volumeBalanceHasBeenSet;

                    /**
                     * Volume beautification configuration.
                     */
                    AudioBeautifyInfo m_beautify;
                    bool m_beautifyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOENHANCECONFIG_H_
