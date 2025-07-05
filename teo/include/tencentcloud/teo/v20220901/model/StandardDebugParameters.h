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
                * Debug structure.
                */
                class StandardDebugParameters : public AbstractModel
                {
                public:
                    StandardDebugParameters();
                    ~StandardDebugParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable standard debugging. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * @return Switch Whether to enable standard debugging. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable standard debugging. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * @param _switch Whether to enable standard debugging. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
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
                     * 获取The client ip to allow. it can be an ipv4/ipv6 address or a cidr block. 0.0.0.0/0 means to allow all ipv4 clients for debugging; ::/0 means to allow all ipv6 clients for debugging; 127.0.0.1 is not allowed. <br>note: this field is required when `switch=on` and the number of entries should be 1-100. when `switch=off`, this field is not required and any value specified will not take effect.
                     * @return AllowClientIPList The client ip to allow. it can be an ipv4/ipv6 address or a cidr block. 0.0.0.0/0 means to allow all ipv4 clients for debugging; ::/0 means to allow all ipv6 clients for debugging; 127.0.0.1 is not allowed. <br>note: this field is required when `switch=on` and the number of entries should be 1-100. when `switch=off`, this field is not required and any value specified will not take effect.
                     * 
                     */
                    std::vector<std::string> GetAllowClientIPList() const;

                    /**
                     * 设置The client ip to allow. it can be an ipv4/ipv6 address or a cidr block. 0.0.0.0/0 means to allow all ipv4 clients for debugging; ::/0 means to allow all ipv6 clients for debugging; 127.0.0.1 is not allowed. <br>note: this field is required when `switch=on` and the number of entries should be 1-100. when `switch=off`, this field is not required and any value specified will not take effect.
                     * @param _allowClientIPList The client ip to allow. it can be an ipv4/ipv6 address or a cidr block. 0.0.0.0/0 means to allow all ipv4 clients for debugging; ::/0 means to allow all ipv6 clients for debugging; 127.0.0.1 is not allowed. <br>note: this field is required when `switch=on` and the number of entries should be 1-100. when `switch=off`, this field is not required and any value specified will not take effect.
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
                     * 获取Debug feature expiration time. the feature will be disabled after the set time. <br>note: this field is required when `switch=on`. when `switch=off`, this field is not required and any value specified will not take effect.
                     * @return Expires Debug feature expiration time. the feature will be disabled after the set time. <br>note: this field is required when `switch=on`. when `switch=off`, this field is not required and any value specified will not take effect.
                     * 
                     */
                    std::string GetExpires() const;

                    /**
                     * 设置Debug feature expiration time. the feature will be disabled after the set time. <br>note: this field is required when `switch=on`. when `switch=off`, this field is not required and any value specified will not take effect.
                     * @param _expires Debug feature expiration time. the feature will be disabled after the set time. <br>note: this field is required when `switch=on`. when `switch=off`, this field is not required and any value specified will not take effect.
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
                     * Whether to enable standard debugging. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The client ip to allow. it can be an ipv4/ipv6 address or a cidr block. 0.0.0.0/0 means to allow all ipv4 clients for debugging; ::/0 means to allow all ipv6 clients for debugging; 127.0.0.1 is not allowed. <br>note: this field is required when `switch=on` and the number of entries should be 1-100. when `switch=off`, this field is not required and any value specified will not take effect.
                     */
                    std::vector<std::string> m_allowClientIPList;
                    bool m_allowClientIPListHasBeenSet;

                    /**
                     * Debug feature expiration time. the feature will be disabled after the set time. <br>note: this field is required when `switch=on`. when `switch=off`, this field is not required and any value specified will not take effect.
                     */
                    std::string m_expires;
                    bool m_expiresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_STANDARDDEBUGPARAMETERS_H_
