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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_IPTABLECONFIG_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_IPTABLECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/IpTableRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * IP/Region blocklist/allowlist configuration
                */
                class IpTableConfig : public AbstractModel
                {
                public:
                    IpTableConfig();
                    ~IpTableConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Switch Switch
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Switch Switch
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取[]
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Rules []
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<IpTableRule> GetRules() const;

                    /**
                     * 设置[]
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Rules []
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRules(const std::vector<IpTableRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * Switch
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * []
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<IpTableRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_IPTABLECONFIG_H_
