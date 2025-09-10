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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEOWASPWHITERULESRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEOWASPWHITERULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/OwaspWhiteRule.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeOwaspWhiteRules response structure.
                */
                class DescribeOwaspWhiteRulesResponse : public AbstractModel
                {
                public:
                    DescribeOwaspWhiteRulesResponse();
                    ~DescribeOwaspWhiteRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of rules.
                     * @return Total Total number of rules.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Rule allowlist list
                     * @return List Rule allowlist list
                     * 
                     */
                    std::vector<OwaspWhiteRule> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * Total number of rules.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Rule allowlist list
                     */
                    std::vector<OwaspWhiteRule> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEOWASPWHITERULESRESPONSE_H_
