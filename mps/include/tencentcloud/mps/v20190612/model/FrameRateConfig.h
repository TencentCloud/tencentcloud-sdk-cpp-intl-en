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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FRAMERATECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FRAMERATECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Frame interpolation configuration.
                */
                class FrameRateConfig : public AbstractModel
                {
                public:
                    FrameRateConfig();
                    ~FrameRateConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable the feature. Valid values:
<li>ON</li>
<li>OFF</li>
Default value: ON.
                     * @return Switch Whether to enable the feature. Valid values:
<li>ON</li>
<li>OFF</li>
Default value: ON.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable the feature. Valid values:
<li>ON</li>
<li>OFF</li>
Default value: ON.
                     * @param _switch Whether to enable the feature. Valid values:
<li>ON</li>
<li>OFF</li>
Default value: ON.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取The frame rate (Hz). Value range: [0, 100].
Default value: 0.
Note: For transcoding, this parameter will overwrite `Fps` of `VideoTemplate`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Fps The frame rate (Hz). Value range: [0, 100].
Default value: 0.
Note: For transcoding, this parameter will overwrite `Fps` of `VideoTemplate`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置The frame rate (Hz). Value range: [0, 100].
Default value: 0.
Note: For transcoding, this parameter will overwrite `Fps` of `VideoTemplate`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fps The frame rate (Hz). Value range: [0, 100].
Default value: 0.
Note: For transcoding, this parameter will overwrite `Fps` of `VideoTemplate`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFps(const uint64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                private:

                    /**
                     * Whether to enable the feature. Valid values:
<li>ON</li>
<li>OFF</li>
Default value: ON.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The frame rate (Hz). Value range: [0, 100].
Default value: 0.
Note: For transcoding, this parameter will overwrite `Fps` of `VideoTemplate`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FRAMERATECONFIG_H_
