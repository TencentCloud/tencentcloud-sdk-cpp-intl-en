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
                * Intelligent frame interpolation control parameters
                */
                class VideoFrameInterpolationInfo : public AbstractModel
                {
                public:
                    VideoFrameInterpolationInfo();
                    ~VideoFrameInterpolationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Intelligent frame interpolation control switch. Valid values:
<li>ON: enable intelligent frame interpolation;</li>
<li>OFF: disables intelligent frame interpolation.</li>
                     * @return Switch Intelligent frame interpolation control switch. Valid values:
<li>ON: enable intelligent frame interpolation;</li>
<li>OFF: disables intelligent frame interpolation.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Intelligent frame interpolation control switch. Valid values:
<li>ON: enable intelligent frame interpolation;</li>
<li>OFF: disables intelligent frame interpolation.</li>
                     * @param _switch Intelligent frame interpolation control switch. Valid values:
<li>ON: enable intelligent frame interpolation;</li>
<li>OFF: disables intelligent frame interpolation.</li>
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
                     * 获取Intelligent frame interpolation frame rate. Frame rate range: (0, 100]. Valid only when the intelligent frame interpolation control switch is ON. Default: same as the source file frame rate.
                     * @return Fps Intelligent frame interpolation frame rate. Frame rate range: (0, 100]. Valid only when the intelligent frame interpolation control switch is ON. Default: same as the source file frame rate.
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置Intelligent frame interpolation frame rate. Frame rate range: (0, 100]. Valid only when the intelligent frame interpolation control switch is ON. Default: same as the source file frame rate.
                     * @param _fps Intelligent frame interpolation frame rate. Frame rate range: (0, 100]. Valid only when the intelligent frame interpolation control switch is ON. Default: same as the source file frame rate.
                     * 
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                private:

                    /**
                     * Intelligent frame interpolation control switch. Valid values:
<li>ON: enable intelligent frame interpolation;</li>
<li>OFF: disables intelligent frame interpolation.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Intelligent frame interpolation frame rate. Frame rate range: (0, 100]. Valid only when the intelligent frame interpolation control switch is ON. Default: same as the source file frame rate.
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOFRAMEINTERPOLATIONINFO_H_
