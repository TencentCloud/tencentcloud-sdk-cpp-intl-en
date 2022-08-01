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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DOWNSTREAMCAPPING_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DOWNSTREAMCAPPING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/CappingRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Single link downstream speed limit configuration. This is disabled by default.
                */
                class DownstreamCapping : public AbstractModel
                {
                public:
                    DownstreamCapping();
                    ~DownstreamCapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Downstream speed configuration switch
`on`: Enable
`off`: Disable
                     * @return Switch Downstream speed configuration switch
`on`: Enable
`off`: Disable
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Downstream speed configuration switch
`on`: Enable
`off`: Disable
                     * @param Switch Downstream speed configuration switch
`on`: Enable
`off`: Disable
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Downstream speed limiting rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CappingRules Downstream speed limiting rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<CappingRule> GetCappingRules() const;

                    /**
                     * 设置Downstream speed limiting rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param CappingRules Downstream speed limiting rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCappingRules(const std::vector<CappingRule>& _cappingRules);

                    /**
                     * 判断参数 CappingRules 是否已赋值
                     * @return CappingRules 是否已赋值
                     */
                    bool CappingRulesHasBeenSet() const;

                private:

                    /**
                     * Downstream speed configuration switch
`on`: Enable
`off`: Disable
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Downstream speed limiting rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<CappingRule> m_cappingRules;
                    bool m_cappingRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DOWNSTREAMCAPPING_H_
