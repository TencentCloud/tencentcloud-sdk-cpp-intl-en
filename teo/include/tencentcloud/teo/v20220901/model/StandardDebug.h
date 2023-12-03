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
                * Standard debugging
                */
                class StandardDebug : public AbstractModel
                {
                public:
                    StandardDebug();
                    ~StandardDebug() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable standard debugging. Values:
<li>`on`: Enable</li>
<li>`off`: Disable </li>
                     * @return Switch Whether to enable standard debugging. Values:
<li>`on`: Enable</li>
<li>`off`: Disable </li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable standard debugging. Values:
<li>`on`: Enable</li>
<li>`off`: Disable </li>
                     * @param _switch Whether to enable standard debugging. Values:
<li>`on`: Enable</li>
<li>`off`: Disable </li>
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
                     * 获取The client IP to allow. It can be an IPv4/IPv6 address or a CIDR block. If not specified, it means to allow any client IP
                     * @return AllowClientIPList The client IP to allow. It can be an IPv4/IPv6 address or a CIDR block. If not specified, it means to allow any client IP
                     * 
                     */
                    std::vector<std::string> GetAllowClientIPList() const;

                    /**
                     * 设置The client IP to allow. It can be an IPv4/IPv6 address or a CIDR block. If not specified, it means to allow any client IP
                     * @param _allowClientIPList The client IP to allow. It can be an IPv4/IPv6 address or a CIDR block. If not specified, it means to allow any client IP
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
                     * 获取The time when the standard debugging setting expires. If it is exceeded, this feature becomes invalid.
                     * @return ExpireTime The time when the standard debugging setting expires. If it is exceeded, this feature becomes invalid.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置The time when the standard debugging setting expires. If it is exceeded, this feature becomes invalid.
                     * @param _expireTime The time when the standard debugging setting expires. If it is exceeded, this feature becomes invalid.
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
                     * Whether to enable standard debugging. Values:
<li>`on`: Enable</li>
<li>`off`: Disable </li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The client IP to allow. It can be an IPv4/IPv6 address or a CIDR block. If not specified, it means to allow any client IP
                     */
                    std::vector<std::string> m_allowClientIPList;
                    bool m_allowClientIPListHasBeenSet;

                    /**
                     * The time when the standard debugging setting expires. If it is exceeded, this feature becomes invalid.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_STANDARDDEBUG_H_
