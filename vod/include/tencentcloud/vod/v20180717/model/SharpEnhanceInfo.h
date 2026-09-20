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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SHARPENHANCEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SHARPENHANCEINFO_H_

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
                * Detail enhancement control
                */
                class SharpEnhanceInfo : public AbstractModel
                {
                public:
                    SharpEnhanceInfo();
                    ~SharpEnhanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Detail enhancement control switch. Valid values:
<li>ON: enable detail enhancement</li>
<li>OFF: disable detail enhancement</li>
                     * @return Switch Detail enhancement control switch. Valid values:
<li>ON: enable detail enhancement</li>
<li>OFF: disable detail enhancement</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Detail enhancement control switch. Valid values:
<li>ON: enable detail enhancement</li>
<li>OFF: disable detail enhancement</li>
                     * @param _switch Detail enhancement control switch. Valid values:
<li>ON: enable detail enhancement</li>
<li>OFF: disable detail enhancement</li>
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
                     * 获取Detail enhancement intensity. Valid only when the detail enhancement control switch is ON. Value range: 0.0–1.0.
Default: 0.0.
                     * @return Intensity Detail enhancement intensity. Valid only when the detail enhancement control switch is ON. Value range: 0.0–1.0.
Default: 0.0.
                     * 
                     */
                    double GetIntensity() const;

                    /**
                     * 设置Detail enhancement intensity. Valid only when the detail enhancement control switch is ON. Value range: 0.0–1.0.
Default: 0.0.
                     * @param _intensity Detail enhancement intensity. Valid only when the detail enhancement control switch is ON. Value range: 0.0–1.0.
Default: 0.0.
                     * 
                     */
                    void SetIntensity(const double& _intensity);

                    /**
                     * 判断参数 Intensity 是否已赋值
                     * @return Intensity 是否已赋值
                     * 
                     */
                    bool IntensityHasBeenSet() const;

                private:

                    /**
                     * Detail enhancement control switch. Valid values:
<li>ON: enable detail enhancement</li>
<li>OFF: disable detail enhancement</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Detail enhancement intensity. Valid only when the detail enhancement control switch is ON. Value range: 0.0–1.0.
Default: 0.0.
                     */
                    double m_intensity;
                    bool m_intensityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SHARPENHANCEINFO_H_
