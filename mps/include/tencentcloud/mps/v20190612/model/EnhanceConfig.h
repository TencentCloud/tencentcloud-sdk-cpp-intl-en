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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ENHANCECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ENHANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/VideoEnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/AudioEnhanceConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Audio/Video enhancement configuration.
                */
                class EnhanceConfig : public AbstractModel
                {
                public:
                    EnhanceConfig();
                    ~EnhanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VideoEnhance Video enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VideoEnhanceConfig GetVideoEnhance() const;

                    /**
                     * 设置Video enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _videoEnhance Video enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVideoEnhance(const VideoEnhanceConfig& _videoEnhance);

                    /**
                     * 判断参数 VideoEnhance 是否已赋值
                     * @return VideoEnhance 是否已赋值
                     * 
                     */
                    bool VideoEnhanceHasBeenSet() const;

                    /**
                     * 获取The audio enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AudioEnhance The audio enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AudioEnhanceConfig GetAudioEnhance() const;

                    /**
                     * 设置The audio enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _audioEnhance The audio enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAudioEnhance(const AudioEnhanceConfig& _audioEnhance);

                    /**
                     * 判断参数 AudioEnhance 是否已赋值
                     * @return AudioEnhance 是否已赋值
                     * 
                     */
                    bool AudioEnhanceHasBeenSet() const;

                private:

                    /**
                     * Video enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VideoEnhanceConfig m_videoEnhance;
                    bool m_videoEnhanceHasBeenSet;

                    /**
                     * The audio enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AudioEnhanceConfig m_audioEnhance;
                    bool m_audioEnhanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ENHANCECONFIG_H_
