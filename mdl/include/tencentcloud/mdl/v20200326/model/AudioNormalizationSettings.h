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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_AUDIONORMALIZATIONSETTINGS_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_AUDIONORMALIZATIONSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Special configuration information for audio transcoding.
                */
                class AudioNormalizationSettings : public AbstractModel
                {
                public:
                    AudioNormalizationSettings();
                    ~AudioNormalizationSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable special configuration for audio transcoding: 1: Enable 0: Disable, the default value is 0.
                     * @return AudioNormalizationEnabled Whether to enable special configuration for audio transcoding: 1: Enable 0: Disable, the default value is 0.
                     * 
                     */
                    uint64_t GetAudioNormalizationEnabled() const;

                    /**
                     * 设置Whether to enable special configuration for audio transcoding: 1: Enable 0: Disable, the default value is 0.
                     * @param _audioNormalizationEnabled Whether to enable special configuration for audio transcoding: 1: Enable 0: Disable, the default value is 0.
                     * 
                     */
                    void SetAudioNormalizationEnabled(const uint64_t& _audioNormalizationEnabled);

                    /**
                     * 判断参数 AudioNormalizationEnabled 是否已赋值
                     * @return AudioNormalizationEnabled 是否已赋值
                     * 
                     */
                    bool AudioNormalizationEnabledHasBeenSet() const;

                    /**
                     * 获取Loudness value, floating-point number, rounded to one decimal place, range -5 to -70.
                     * @return TargetLUFS Loudness value, floating-point number, rounded to one decimal place, range -5 to -70.
                     * 
                     */
                    double GetTargetLUFS() const;

                    /**
                     * 设置Loudness value, floating-point number, rounded to one decimal place, range -5 to -70.
                     * @param _targetLUFS Loudness value, floating-point number, rounded to one decimal place, range -5 to -70.
                     * 
                     */
                    void SetTargetLUFS(const double& _targetLUFS);

                    /**
                     * 判断参数 TargetLUFS 是否已赋值
                     * @return TargetLUFS 是否已赋值
                     * 
                     */
                    bool TargetLUFSHasBeenSet() const;

                private:

                    /**
                     * Whether to enable special configuration for audio transcoding: 1: Enable 0: Disable, the default value is 0.
                     */
                    uint64_t m_audioNormalizationEnabled;
                    bool m_audioNormalizationEnabledHasBeenSet;

                    /**
                     * Loudness value, floating-point number, rounded to one decimal place, range -5 to -70.
                     */
                    double m_targetLUFS;
                    bool m_targetLUFSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_AUDIONORMALIZATIONSETTINGS_H_
