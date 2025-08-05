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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPTABLECONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPTABLECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IpTableRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
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
                     * 获取Switch. valid values:.
<li>`on`: Enable;</li>

<li>off: disabled;</li>.
                     * @return Switch Switch. valid values:.
<li>`on`: Enable;</li>

<li>off: disabled;</li>.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch. valid values:.
<li>`on`: Enable;</li>

<li>off: disabled;</li>.
                     * @param _switch Switch. valid values:.
<li>`on`: Enable;</li>

<li>off: disabled;</li>.
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
                     * 获取Basic control rules. if null, historical configuration is used by default.
                     * @return IpTableRules Basic control rules. if null, historical configuration is used by default.
                     * 
                     */
                    std::vector<IpTableRule> GetIpTableRules() const;

                    /**
                     * 设置Basic control rules. if null, historical configuration is used by default.
                     * @param _ipTableRules Basic control rules. if null, historical configuration is used by default.
                     * 
                     */
                    void SetIpTableRules(const std::vector<IpTableRule>& _ipTableRules);

                    /**
                     * 判断参数 IpTableRules 是否已赋值
                     * @return IpTableRules 是否已赋值
                     * 
                     */
                    bool IpTableRulesHasBeenSet() const;

                private:

                    /**
                     * Switch. valid values:.
<li>`on`: Enable;</li>

<li>off: disabled;</li>.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Basic control rules. if null, historical configuration is used by default.
                     */
                    std::vector<IpTableRule> m_ipTableRules;
                    bool m_ipTableRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPTABLECONFIG_H_
