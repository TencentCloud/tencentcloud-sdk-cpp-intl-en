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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIGNOREBASELINERULEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIGNOREBASELINERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeIgnoreBaselineRule request structure.
                */
                class DescribeIgnoreBaselineRuleRequest : public AbstractModel
                {
                public:
                    DescribeIgnoreBaselineRuleRequest();
                    ~DescribeIgnoreBaselineRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination parameters (The maximum quantity is 100)
                     * @return Limit Pagination parameters (The maximum quantity is 100)
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Pagination parameters (The maximum quantity is 100)
                     * @param _limit Pagination parameters (The maximum quantity is 100)
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination parameter
                     * @return Offset Pagination parameter
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination parameter
                     * @param _offset Pagination parameter
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Detection item name
                     * @return RuleName Detection item name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Detection item name
                     * @param _ruleName Detection item name
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                private:

                    /**
                     * Pagination parameters (The maximum quantity is 100)
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination parameter
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Detection item name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIGNOREBASELINERULEREQUEST_H_
