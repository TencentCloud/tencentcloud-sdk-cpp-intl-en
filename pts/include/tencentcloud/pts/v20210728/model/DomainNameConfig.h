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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DOMAINNAMECONFIG_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DOMAINNAMECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/HostAlias.h>
#include <tencentcloud/pts/v20210728/model/DNSConfig.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Domain resolution configuration of the pressure machine.
                */
                class DomainNameConfig : public AbstractModel
                {
                public:
                    DomainNameConfig();
                    ~DomainNameConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain configuration.

Note: This field may return null, indicating that no valid value is found.
                     * @return HostAliases Domain configuration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<HostAlias> GetHostAliases() const;

                    /**
                     * 设置Domain configuration.

Note: This field may return null, indicating that no valid value is found.
                     * @param _hostAliases Domain configuration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetHostAliases(const std::vector<HostAlias>& _hostAliases);

                    /**
                     * 判断参数 HostAliases 是否已赋值
                     * @return HostAliases 是否已赋值
                     * 
                     */
                    bool HostAliasesHasBeenSet() const;

                    /**
                     * 获取DNS configuration.

Note: This field may return null, indicating that no valid value is found.
                     * @return DNSConfig DNS configuration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    DNSConfig GetDNSConfig() const;

                    /**
                     * 设置DNS configuration.

Note: This field may return null, indicating that no valid value is found.
                     * @param _dNSConfig DNS configuration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDNSConfig(const DNSConfig& _dNSConfig);

                    /**
                     * 判断参数 DNSConfig 是否已赋值
                     * @return DNSConfig 是否已赋值
                     * 
                     */
                    bool DNSConfigHasBeenSet() const;

                private:

                    /**
                     * Domain configuration.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<HostAlias> m_hostAliases;
                    bool m_hostAliasesHasBeenSet;

                    /**
                     * DNS configuration.

Note: This field may return null, indicating that no valid value is found.
                     */
                    DNSConfig m_dNSConfig;
                    bool m_dNSConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DOMAINNAMECONFIG_H_
