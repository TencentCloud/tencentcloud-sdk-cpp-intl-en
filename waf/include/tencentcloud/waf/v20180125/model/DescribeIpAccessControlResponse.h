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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEIPACCESSCONTROLRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEIPACCESSCONTROLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/IpAccessControlData.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeIpAccessControl response structure.
                */
                class DescribeIpAccessControlResponse : public AbstractModel
                {
                public:
                    DescribeIpAccessControlResponse();
                    ~DescribeIpAccessControlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data Output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    IpAccessControlData GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Total number of IP addresses in the used IP allowlist/blocklist.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UsedTotal Total number of IP addresses in the used IP allowlist/blocklist.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetUsedTotal() const;

                    /**
                     * 判断参数 UsedTotal 是否已赋值
                     * @return UsedTotal 是否已赋值
                     * 
                     */
                    bool UsedTotalHasBeenSet() const;

                private:

                    /**
                     * Output.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    IpAccessControlData m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Total number of IP addresses in the used IP allowlist/blocklist.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_usedTotal;
                    bool m_usedTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEIPACCESSCONTROLRESPONSE_H_
