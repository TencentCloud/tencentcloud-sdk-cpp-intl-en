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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_AMBIENTSOUND_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_AMBIENTSOUND_H_

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
                * Background sound settings will add environmental sound effects during a call to make the experience more realistic. currently support the following options:.
Coffee_shops: chat in a coffee shop communication environment with background chatter.
busy office: customer service center.
Street traffic: outdoors street.
evening_mountain: outdoors mountain.
                */
                class AmbientSound : public AbstractModel
                {
                public:
                    AmbientSound();
                    ~AmbientSound() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scenario selection.
                     * @return Scene Scenario selection.
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置Scenario selection.
                     * @param _scene Scenario selection.
                     * 
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取Control the volume of ambient sound. value ranges from [0,2]. the lower the value, the softer the ambient sound; the higher the value, the louder the ambient sound. if not set, use the default value 1.
                     * @return Volume Control the volume of ambient sound. value ranges from [0,2]. the lower the value, the softer the ambient sound; the higher the value, the louder the ambient sound. if not set, use the default value 1.
                     * 
                     */
                    double GetVolume() const;

                    /**
                     * 设置Control the volume of ambient sound. value ranges from [0,2]. the lower the value, the softer the ambient sound; the higher the value, the louder the ambient sound. if not set, use the default value 1.
                     * @param _volume Control the volume of ambient sound. value ranges from [0,2]. the lower the value, the softer the ambient sound; the higher the value, the louder the ambient sound. if not set, use the default value 1.
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
                     * Scenario selection.
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * Control the volume of ambient sound. value ranges from [0,2]. the lower the value, the softer the ambient sound; the higher the value, the louder the ambient sound. if not set, use the default value 1.
                     */
                    double m_volume;
                    bool m_volumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_AMBIENTSOUND_H_
