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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_VANITYNAMESERVERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_VANITYNAMESERVERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Custom nameservers
                */
                class VanityNameServers : public AbstractModel
                {
                public:
                    VanityNameServers();
                    ~VanityNameServers() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Custom ns switch. Valid values:
<li> on: enabled</li>
<li>off: Disable.</li>
                     * @return Switch Custom ns switch. Valid values:
<li> on: enabled</li>
<li>off: Disable.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Custom ns switch. Valid values:
<li> on: enabled</li>
<li>off: Disable.</li>
                     * @param _switch Custom ns switch. Valid values:
<li> on: enabled</li>
<li>off: Disable.</li>
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
                     * 获取List of custom namespaces.
                     * @return Servers List of custom namespaces.
                     * 
                     */
                    std::vector<std::string> GetServers() const;

                    /**
                     * 设置List of custom namespaces.
                     * @param _servers List of custom namespaces.
                     * 
                     */
                    void SetServers(const std::vector<std::string>& _servers);

                    /**
                     * 判断参数 Servers 是否已赋值
                     * @return Servers 是否已赋值
                     * 
                     */
                    bool ServersHasBeenSet() const;

                private:

                    /**
                     * Custom ns switch. Valid values:
<li> on: enabled</li>
<li>off: Disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * List of custom namespaces.
                     */
                    std::vector<std::string> m_servers;
                    bool m_serversHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_VANITYNAMESERVERS_H_
