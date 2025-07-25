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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEDEFAULTALARMTHRESHOLDREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEDEFAULTALARMTHRESHOLDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/DefaultAlarmThreshold.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CreateDefaultAlarmThreshold request structure.
                */
                class CreateDefaultAlarmThresholdRequest : public AbstractModel
                {
                public:
                    CreateDefaultAlarmThresholdRequest();
                    ~CreateDefaultAlarmThresholdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Default alarm threshold configuration
                     * @return DefaultAlarmConfig Default alarm threshold configuration
                     * 
                     */
                    DefaultAlarmThreshold GetDefaultAlarmConfig() const;

                    /**
                     * 设置Default alarm threshold configuration
                     * @param _defaultAlarmConfig Default alarm threshold configuration
                     * 
                     */
                    void SetDefaultAlarmConfig(const DefaultAlarmThreshold& _defaultAlarmConfig);

                    /**
                     * 判断参数 DefaultAlarmConfig 是否已赋值
                     * @return DefaultAlarmConfig 是否已赋值
                     * 
                     */
                    bool DefaultAlarmConfigHasBeenSet() const;

                    /**
                     * 获取Product category. Valid values:
`bgp`: Anti-DDoS Pro
`bgpip`: Anti-DDoS Advanced
]
                     * @return InstanceType Product category. Valid values:
`bgp`: Anti-DDoS Pro
`bgpip`: Anti-DDoS Advanced
]
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Product category. Valid values:
`bgp`: Anti-DDoS Pro
`bgpip`: Anti-DDoS Advanced
]
                     * @param _instanceType Product category. Valid values:
`bgp`: Anti-DDoS Pro
`bgpip`: Anti-DDoS Advanced
]
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                private:

                    /**
                     * Default alarm threshold configuration
                     */
                    DefaultAlarmThreshold m_defaultAlarmConfig;
                    bool m_defaultAlarmConfigHasBeenSet;

                    /**
                     * Product category. Valid values:
`bgp`: Anti-DDoS Pro
`bgpip`: Anti-DDoS Advanced
]
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEDEFAULTALARMTHRESHOLDREQUEST_H_
