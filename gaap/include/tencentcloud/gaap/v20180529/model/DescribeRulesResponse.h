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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBERULESRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBERULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/DomainRuleSet.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeRules response structure.
                */
                class DescribeRulesResponse : public AbstractModel
                {
                public:
                    DescribeRulesResponse();
                    ~DescribeRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule information list classified by domain name type
                     * @return DomainRuleSet Rule information list classified by domain name type
                     * 
                     */
                    std::vector<DomainRuleSet> GetDomainRuleSet() const;

                    /**
                     * 判断参数 DomainRuleSet 是否已赋值
                     * @return DomainRuleSet 是否已赋值
                     * 
                     */
                    bool DomainRuleSetHasBeenSet() const;

                    /**
                     * 获取Total quantity of domain names under this listener
                     * @return TotalCount Total quantity of domain names under this listener
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Rule information list classified by domain name type
                     */
                    std::vector<DomainRuleSet> m_domainRuleSet;
                    bool m_domainRuleSetHasBeenSet;

                    /**
                     * Total quantity of domain names under this listener
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBERULESRESPONSE_H_
