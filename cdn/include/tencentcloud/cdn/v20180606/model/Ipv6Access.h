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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_IPV6ACCESS_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_IPV6ACCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * IPv6 access configuration
                */
                class Ipv6Access : public AbstractModel
                {
                public:
                    Ipv6Access();
                    ~Ipv6Access() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable IPv6 access. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Switch Whether to enable IPv6 access. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable IPv6 access. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _switch Whether to enable IPv6 access. Values:
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

                private:

                    /**
                     * Whether to enable IPv6 access. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_IPV6ACCESS_H_
