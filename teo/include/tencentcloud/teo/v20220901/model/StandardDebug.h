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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_STANDARDDEBUG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_STANDARDDEBUG_H_

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
                * Supports the standard debug struct
                */
                class StandardDebug : public AbstractModel
                {
                public:
                    StandardDebug();
                    ~StandardDebug() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Debug feature switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @return Switch Debug feature switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Debug feature switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @param _switch Debug feature switch. Valid values:
<li>`on`: Enable;</li>
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
                     * 获取Allowed client sources. Supports filling in IPv4 and IPv6 IPs or IP ranges. 0.0.0.0/0 indicates that all IPv4 clients are allowed for debugging, and ::/0 indicates that all IPv6 clients are allowed for debugging.
                     * @return AllowClientIPList Allowed client sources. Supports filling in IPv4 and IPv6 IPs or IP ranges. 0.0.0.0/0 indicates that all IPv4 clients are allowed for debugging, and ::/0 indicates that all IPv6 clients are allowed for debugging.
                     * 
                     */
                    std::vector<std::string> GetAllowClientIPList() const;

                    /**
                     * 设置Allowed client sources. Supports filling in IPv4 and IPv6 IPs or IP ranges. 0.0.0.0/0 indicates that all IPv4 clients are allowed for debugging, and ::/0 indicates that all IPv6 clients are allowed for debugging.
                     * @param _allowClientIPList Allowed client sources. Supports filling in IPv4 and IPv6 IPs or IP ranges. 0.0.0.0/0 indicates that all IPv4 clients are allowed for debugging, and ::/0 indicates that all IPv6 clients are allowed for debugging.
                     * 
                     */
                    void SetAllowClientIPList(const std::vector<std::string>& _allowClientIPList);

                    /**
                     * 判断参数 AllowClientIPList 是否已赋值
                     * @return AllowClientIPList 是否已赋值
                     * 
                     */
                    bool AllowClientIPListHasBeenSet() const;

                    /**
                     * 获取Debug feature expiration time. If the set time is exceeded, the feature becomes invalid.
                     * @return ExpireTime Debug feature expiration time. If the set time is exceeded, the feature becomes invalid.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Debug feature expiration time. If the set time is exceeded, the feature becomes invalid.
                     * @param _expireTime Debug feature expiration time. If the set time is exceeded, the feature becomes invalid.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Debug feature switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Allowed client sources. Supports filling in IPv4 and IPv6 IPs or IP ranges. 0.0.0.0/0 indicates that all IPv4 clients are allowed for debugging, and ::/0 indicates that all IPv6 clients are allowed for debugging.
                     */
                    std::vector<std::string> m_allowClientIPList;
                    bool m_allowClientIPListHasBeenSet;

                    /**
                     * Debug feature expiration time. If the set time is exceeded, the feature becomes invalid.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_STANDARDDEBUG_H_
