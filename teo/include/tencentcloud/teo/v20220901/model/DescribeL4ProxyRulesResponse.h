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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL4PROXYRULESRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL4PROXYRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/L4ProxyRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeL4ProxyRules response structure.
                */
                class DescribeL4ProxyRulesResponse : public AbstractModel
                {
                public:
                    DescribeL4ProxyRulesResponse();
                    ~DescribeL4ProxyRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total count of forwarding rules.
                     * @return TotalCount The total count of forwarding rules.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of forwarding rules.	
                     * @return L4ProxyRules List of forwarding rules.	
                     * 
                     */
                    std::vector<L4ProxyRule> GetL4ProxyRules() const;

                    /**
                     * 判断参数 L4ProxyRules 是否已赋值
                     * @return L4ProxyRules 是否已赋值
                     * 
                     */
                    bool L4ProxyRulesHasBeenSet() const;

                private:

                    /**
                     * The total count of forwarding rules.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of forwarding rules.	
                     */
                    std::vector<L4ProxyRule> m_l4ProxyRules;
                    bool m_l4ProxyRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL4PROXYRULESRESPONSE_H_
