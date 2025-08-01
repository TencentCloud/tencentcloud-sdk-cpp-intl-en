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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINPULLOPTIMIZATION_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINPULLOPTIMIZATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * (Disused) Cross-border origin-pull optimization
                */
                class OriginPullOptimization : public AbstractModel
                {
                public:
                    OriginPullOptimization();
                    ~OriginPullOptimization() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable cross-MLC-border origin-pull optimization. Values:
`on`: Enable
`off`: Disable
                     * @return Switch Whether to enable cross-MLC-border origin-pull optimization. Values:
`on`: Enable
`off`: Disable
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable cross-MLC-border origin-pull optimization. Values:
`on`: Enable
`off`: Disable
                     * @param _switch Whether to enable cross-MLC-border origin-pull optimization. Values:
`on`: Enable
`off`: Disable
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
                     * 获取Cross-border types
OVToCN: origin-pull from outside mainland China to inside mainland China
CNToOV: origin-pull from inside mainland China to outside mainland China
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OptimizationType Cross-border types
OVToCN: origin-pull from outside mainland China to inside mainland China
CNToOV: origin-pull from inside mainland China to outside mainland China
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOptimizationType() const;

                    /**
                     * 设置Cross-border types
OVToCN: origin-pull from outside mainland China to inside mainland China
CNToOV: origin-pull from inside mainland China to outside mainland China
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _optimizationType Cross-border types
OVToCN: origin-pull from outside mainland China to inside mainland China
CNToOV: origin-pull from inside mainland China to outside mainland China
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOptimizationType(const std::string& _optimizationType);

                    /**
                     * 判断参数 OptimizationType 是否已赋值
                     * @return OptimizationType 是否已赋值
                     * 
                     */
                    bool OptimizationTypeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable cross-MLC-border origin-pull optimization. Values:
`on`: Enable
`off`: Disable
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Cross-border types
OVToCN: origin-pull from outside mainland China to inside mainland China
CNToOV: origin-pull from inside mainland China to outside mainland China
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_optimizationType;
                    bool m_optimizationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINPULLOPTIMIZATION_H_
