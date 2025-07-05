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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_MAXAGE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_MAXAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/MaxAgeRule.h>
#include <tencentcloud/cdn/v20180606/model/MaxAgeCodeRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Browser cache rule configuration, which is used to set the default value of `MaxAge` and is disabled by default.
                */
                class MaxAge : public AbstractModel
                {
                public:
                    MaxAge();
                    ~MaxAge() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable browser caching. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Switch Whether to enable browser caching. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable browser caching. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _switch Whether to enable browser caching. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取MaxAge rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return MaxAgeRules MaxAge rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<MaxAgeRule> GetMaxAgeRules() const;

                    /**
                     * 设置MaxAge rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _maxAgeRules MaxAge rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMaxAgeRules(const std::vector<MaxAgeRule>& _maxAgeRules);

                    /**
                     * 判断参数 MaxAgeRules 是否已赋值
                     * @return MaxAgeRules 是否已赋值
                     * 
                     */
                    bool MaxAgeRulesHasBeenSet() const;

                    /**
                     * 获取MaxAge status code
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return MaxAgeCodeRule MaxAge status code
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    MaxAgeCodeRule GetMaxAgeCodeRule() const;

                    /**
                     * 设置MaxAge status code
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _maxAgeCodeRule MaxAge status code
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMaxAgeCodeRule(const MaxAgeCodeRule& _maxAgeCodeRule);

                    /**
                     * 判断参数 MaxAgeCodeRule 是否已赋值
                     * @return MaxAgeCodeRule 是否已赋值
                     * 
                     */
                    bool MaxAgeCodeRuleHasBeenSet() const;

                private:

                    /**
                     * Whether to enable browser caching. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * MaxAge rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<MaxAgeRule> m_maxAgeRules;
                    bool m_maxAgeRulesHasBeenSet;

                    /**
                     * MaxAge status code
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    MaxAgeCodeRule m_maxAgeCodeRule;
                    bool m_maxAgeCodeRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_MAXAGE_H_
