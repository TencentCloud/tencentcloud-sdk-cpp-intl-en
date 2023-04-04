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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOFRAMEINTERPOLATIONINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOFRAMEINTERPOLATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Smart frame interpolation configuration.
                */
                class VideoFrameInterpolationInfo : public AbstractModel
                {
                public:
                    VideoFrameInterpolationInfo();
                    ~VideoFrameInterpolationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable smart frame interpolation. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
                     * @return Switch Whether to enable smart frame interpolation. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable smart frame interpolation. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
                     * @param Switch Whether to enable smart frame interpolation. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取The frame rate. Value range: (0, 100]. This parameter is valid only if `Switch` is `ON`. By default, the original frame rate will be used.
                     * @return Fps The frame rate. Value range: (0, 100]. This parameter is valid only if `Switch` is `ON`. By default, the original frame rate will be used.
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置The frame rate. Value range: (0, 100]. This parameter is valid only if `Switch` is `ON`. By default, the original frame rate will be used.
                     * @param Fps The frame rate. Value range: (0, 100]. This parameter is valid only if `Switch` is `ON`. By default, the original frame rate will be used.
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     */
                    bool FpsHasBeenSet() const;

                private:

                    /**
                     * Whether to enable smart frame interpolation. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The frame rate. Value range: (0, 100]. This parameter is valid only if `Switch` is `ON`. By default, the original frame rate will be used.
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOFRAMEINTERPOLATIONINFO_H_
