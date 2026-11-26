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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_STANDARDDEBUGPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_STANDARDDEBUGPARAMETERS_H_

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
                * Debug struct.
                */
                class StandardDebugParameters : public AbstractModel
                {
                public:
                    StandardDebugParameters();
                    ~StandardDebugParameters() = default;
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
                     * 获取Allowed client source. Supports filling in IPv4 and IPv6 IP ranges. 0.0.0.0/0 indicates permission for all IPv4 clients to debug; ::/0 indicates permission for all IPv6 clients to debug; 127.0.0.1 cannot be filled in.<br>Note: When the Switch field is on, this field is required, and the number of writes is 1–100; when Switch is off, no need to specify this field, and if filled in, it does not take effect.
                     * @return AllowClientIPList Allowed client source. Supports filling in IPv4 and IPv6 IP ranges. 0.0.0.0/0 indicates permission for all IPv4 clients to debug; ::/0 indicates permission for all IPv6 clients to debug; 127.0.0.1 cannot be filled in.<br>Note: When the Switch field is on, this field is required, and the number of writes is 1–100; when Switch is off, no need to specify this field, and if filled in, it does not take effect.
                     * 
                     */
                    std::vector<std::string> GetAllowClientIPList() const;

                    /**
                     * 设置Allowed client source. Supports filling in IPv4 and IPv6 IP ranges. 0.0.0.0/0 indicates permission for all IPv4 clients to debug; ::/0 indicates permission for all IPv6 clients to debug; 127.0.0.1 cannot be filled in.<br>Note: When the Switch field is on, this field is required, and the number of writes is 1–100; when Switch is off, no need to specify this field, and if filled in, it does not take effect.
                     * @param _allowClientIPList Allowed client source. Supports filling in IPv4 and IPv6 IP ranges. 0.0.0.0/0 indicates permission for all IPv4 clients to debug; ::/0 indicates permission for all IPv6 clients to debug; 127.0.0.1 cannot be filled in.<br>Note: When the Switch field is on, this field is required, and the number of writes is 1–100; when Switch is off, no need to specify this field, and if filled in, it does not take effect.
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
                     * 获取Expiration time of the Debug feature. If the set time is exceeded, the feature becomes invalid.<br>Note: When Switch is on, this field is required; when Switch is off, this field is not required. If filled in, it does not take effect.
                     * @return Expires Expiration time of the Debug feature. If the set time is exceeded, the feature becomes invalid.<br>Note: When Switch is on, this field is required; when Switch is off, this field is not required. If filled in, it does not take effect.
                     * 
                     */
                    std::string GetExpires() const;

                    /**
                     * 设置Expiration time of the Debug feature. If the set time is exceeded, the feature becomes invalid.<br>Note: When Switch is on, this field is required; when Switch is off, this field is not required. If filled in, it does not take effect.
                     * @param _expires Expiration time of the Debug feature. If the set time is exceeded, the feature becomes invalid.<br>Note: When Switch is on, this field is required; when Switch is off, this field is not required. If filled in, it does not take effect.
                     * 
                     */
                    void SetExpires(const std::string& _expires);

                    /**
                     * 判断参数 Expires 是否已赋值
                     * @return Expires 是否已赋值
                     * 
                     */
                    bool ExpiresHasBeenSet() const;

                private:

                    /**
                     * Debug feature switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Allowed client source. Supports filling in IPv4 and IPv6 IP ranges. 0.0.0.0/0 indicates permission for all IPv4 clients to debug; ::/0 indicates permission for all IPv6 clients to debug; 127.0.0.1 cannot be filled in.<br>Note: When the Switch field is on, this field is required, and the number of writes is 1–100; when Switch is off, no need to specify this field, and if filled in, it does not take effect.
                     */
                    std::vector<std::string> m_allowClientIPList;
                    bool m_allowClientIPListHasBeenSet;

                    /**
                     * Expiration time of the Debug feature. If the set time is exceeded, the feature becomes invalid.<br>Note: When Switch is on, this field is required; when Switch is off, this field is not required. If filled in, it does not take effect.
                     */
                    std::string m_expires;
                    bool m_expiresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_STANDARDDEBUGPARAMETERS_H_
