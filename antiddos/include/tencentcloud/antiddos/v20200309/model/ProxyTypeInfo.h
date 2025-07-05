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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROXYTYPEINFO_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROXYTYPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Forwarding type
                */
                class ProxyTypeInfo : public AbstractModel
                {
                public:
                    ProxyTypeInfo();
                    ~ProxyTypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of forwarding listening ports. Value range: 1–65535.
                     * @return ProxyPorts List of forwarding listening ports. Value range: 1–65535.
                     * 
                     */
                    std::vector<int64_t> GetProxyPorts() const;

                    /**
                     * 设置List of forwarding listening ports. Value range: 1–65535.
                     * @param _proxyPorts List of forwarding listening ports. Value range: 1–65535.
                     * 
                     */
                    void SetProxyPorts(const std::vector<int64_t>& _proxyPorts);

                    /**
                     * 判断参数 ProxyPorts 是否已赋值
                     * @return ProxyPorts 是否已赋值
                     * 
                     */
                    bool ProxyPortsHasBeenSet() const;

                    /**
                     * 获取Forwarding protocol:
`http`: HTTP protocol
`https`: HTTPS protocol
]
                     * @return ProxyType Forwarding protocol:
`http`: HTTP protocol
`https`: HTTPS protocol
]
                     * 
                     */
                    std::string GetProxyType() const;

                    /**
                     * 设置Forwarding protocol:
`http`: HTTP protocol
`https`: HTTPS protocol
]
                     * @param _proxyType Forwarding protocol:
`http`: HTTP protocol
`https`: HTTPS protocol
]
                     * 
                     */
                    void SetProxyType(const std::string& _proxyType);

                    /**
                     * 判断参数 ProxyType 是否已赋值
                     * @return ProxyType 是否已赋值
                     * 
                     */
                    bool ProxyTypeHasBeenSet() const;

                private:

                    /**
                     * List of forwarding listening ports. Value range: 1–65535.
                     */
                    std::vector<int64_t> m_proxyPorts;
                    bool m_proxyPortsHasBeenSet;

                    /**
                     * Forwarding protocol:
`http`: HTTP protocol
`https`: HTTPS protocol
]
                     */
                    std::string m_proxyType;
                    bool m_proxyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROXYTYPEINFO_H_
