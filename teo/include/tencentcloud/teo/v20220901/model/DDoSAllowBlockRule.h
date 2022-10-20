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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSALLOWBLOCKRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSALLOWBLOCKRULE_H_

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
                * Details of the IP blocklist/allowlist
                */
                class DDoSAllowBlockRule : public AbstractModel
                {
                public:
                    DDoSAllowBlockRule();
                    ~DDoSAllowBlockRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The client IP, which can be a single IP, IP range, or subnet range, such as "1.1.1.1", "1.1.1.2-1.1.1.3", and "1.2.1.0/24-1.2.2.0/24".
                     * @return Ip The client IP, which can be a single IP, IP range, or subnet range, such as "1.1.1.1", "1.1.1.2-1.1.1.3", and "1.2.1.0/24-1.2.2.0/24".
                     */
                    std::string GetIp() const;

                    /**
                     * 设置The client IP, which can be a single IP, IP range, or subnet range, such as "1.1.1.1", "1.1.1.2-1.1.1.3", and "1.2.1.0/24-1.2.2.0/24".
                     * @param Ip The client IP, which can be a single IP, IP range, or subnet range, such as "1.1.1.1", "1.1.1.2-1.1.1.3", and "1.2.1.0/24-1.2.2.0/24".
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取The type. Values:
<li>`block`: Blocklist</li><li>`allow`: Allowlist</li>
                     * @return Type The type. Values:
<li>`block`: Blocklist</li><li>`allow`: Allowlist</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置The type. Values:
<li>`block`: Blocklist</li><li>`allow`: Allowlist</li>
                     * @param Type The type. Values:
<li>`block`: Blocklist</li><li>`allow`: Allowlist</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The 10-digit timestamp, such as `1199116800`. The current time will be used if this field is not specified.
                     * @return UpdateTime The 10-digit timestamp, such as `1199116800`. The current time will be used if this field is not specified.
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置The 10-digit timestamp, such as `1199116800`. The current time will be used if this field is not specified.
                     * @param UpdateTime The 10-digit timestamp, such as `1199116800`. The current time will be used if this field is not specified.
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * The client IP, which can be a single IP, IP range, or subnet range, such as "1.1.1.1", "1.1.1.2-1.1.1.3", and "1.2.1.0/24-1.2.2.0/24".
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * The type. Values:
<li>`block`: Blocklist</li><li>`allow`: Allowlist</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The 10-digit timestamp, such as `1199116800`. The current time will be used if this field is not specified.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSALLOWBLOCKRULE_H_
