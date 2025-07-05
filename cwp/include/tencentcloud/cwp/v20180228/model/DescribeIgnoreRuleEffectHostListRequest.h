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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIGNORERULEEFFECTHOSTLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIGNORERULEEFFECTHOSTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeIgnoreRuleEffectHostList request structure.
                */
                class DescribeIgnoreRuleEffectHostListRequest : public AbstractModel
                {
                public:
                    DescribeIgnoreRuleEffectHostListRequest();
                    ~DescribeIgnoreRuleEffectHostListRequest() = default;
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
                     * 获取Detection Item ID
                     * @return RuleId Detection Item ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Detection Item ID
                     * @param _ruleId Detection Item ID
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Filter criteria
<li>AliasName - String - host alias</li>
                     * @return Filters Filter criteria
<li>AliasName - String - host alias</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>AliasName - String - host alias</li>
                     * @param _filters Filter criteria
<li>AliasName - String - host alias</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Host tag name
                     * @return TagNames Host tag name
                     * 
                     */
                    std::vector<std::string> GetTagNames() const;

                    /**
                     * 设置Host tag name
                     * @param _tagNames Host tag name
                     * 
                     */
                    void SetTagNames(const std::vector<std::string>& _tagNames);

                    /**
                     * 判断参数 TagNames 是否已赋值
                     * @return TagNames 是否已赋值
                     * 
                     */
                    bool TagNamesHasBeenSet() const;

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
                     * Detection Item ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Filter criteria
<li>AliasName - String - host alias</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Host tag name
                     */
                    std::vector<std::string> m_tagNames;
                    bool m_tagNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIGNORERULEEFFECTHOSTLISTREQUEST_H_
