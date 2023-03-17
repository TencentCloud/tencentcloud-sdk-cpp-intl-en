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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACLCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AclUserRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ACL configuration
                */
                class AclConfig : public AbstractModel
                {
                public:
                    AclConfig();
                    ~AclConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @return Switch Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @param Switch Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取The custom rule.
                     * @return AclUserRules The custom rule.
                     */
                    std::vector<AclUserRule> GetAclUserRules() const;

                    /**
                     * 设置The custom rule.
                     * @param AclUserRules The custom rule.
                     */
                    void SetAclUserRules(const std::vector<AclUserRule>& _aclUserRules);

                    /**
                     * 判断参数 AclUserRules 是否已赋值
                     * @return AclUserRules 是否已赋值
                     */
                    bool AclUserRulesHasBeenSet() const;

                    /**
                     * 获取Custom managed rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Customizes Custom managed rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<AclUserRule> GetCustomizes() const;

                    /**
                     * 设置Custom managed rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Customizes Custom managed rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCustomizes(const std::vector<AclUserRule>& _customizes);

                    /**
                     * 判断参数 Customizes 是否已赋值
                     * @return Customizes 是否已赋值
                     */
                    bool CustomizesHasBeenSet() const;

                private:

                    /**
                     * Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The custom rule.
                     */
                    std::vector<AclUserRule> m_aclUserRules;
                    bool m_aclUserRulesHasBeenSet;

                    /**
                     * Custom managed rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<AclUserRule> m_customizes;
                    bool m_customizesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACLCONFIG_H_
