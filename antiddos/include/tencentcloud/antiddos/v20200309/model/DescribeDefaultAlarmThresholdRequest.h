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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDEFAULTALARMTHRESHOLDREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDEFAULTALARMTHRESHOLDREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDefaultAlarmThreshold request structure.
                */
                class DescribeDefaultAlarmThresholdRequest : public AbstractModel
                {
                public:
                    DescribeDefaultAlarmThresholdRequest();
                    ~DescribeDefaultAlarmThresholdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Product category. Valid values:
`bgp`: Anti-DDoS Pro
`bgpip`: Anti-DDoS Advanced
]
                     * @return InstanceType Product category. Valid values:
`bgp`: Anti-DDoS Pro
`bgpip`: Anti-DDoS Advanced
]
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Product category. Valid values:
`bgp`: Anti-DDoS Pro
`bgpip`: Anti-DDoS Advanced
]
                     * @param InstanceType Product category. Valid values:
`bgp`: Anti-DDoS Pro
`bgpip`: Anti-DDoS Advanced
]
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Alarm threshold type filter. Valid values:
`1`: alarm threshold for inbound traffic
`2`: alarm threshold for cleansing attack traffic
]
                     * @return FilterAlarmType Alarm threshold type filter. Valid values:
`1`: alarm threshold for inbound traffic
`2`: alarm threshold for cleansing attack traffic
]
                     */
                    int64_t GetFilterAlarmType() const;

                    /**
                     * 设置Alarm threshold type filter. Valid values:
`1`: alarm threshold for inbound traffic
`2`: alarm threshold for cleansing attack traffic
]
                     * @param FilterAlarmType Alarm threshold type filter. Valid values:
`1`: alarm threshold for inbound traffic
`2`: alarm threshold for cleansing attack traffic
]
                     */
                    void SetFilterAlarmType(const int64_t& _filterAlarmType);

                    /**
                     * 判断参数 FilterAlarmType 是否已赋值
                     * @return FilterAlarmType 是否已赋值
                     */
                    bool FilterAlarmTypeHasBeenSet() const;

                private:

                    /**
                     * Product category. Valid values:
`bgp`: Anti-DDoS Pro
`bgpip`: Anti-DDoS Advanced
]
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Alarm threshold type filter. Valid values:
`1`: alarm threshold for inbound traffic
`2`: alarm threshold for cleansing attack traffic
]
                     */
                    int64_t m_filterAlarmType;
                    bool m_filterAlarmTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDEFAULTALARMTHRESHOLDREQUEST_H_
