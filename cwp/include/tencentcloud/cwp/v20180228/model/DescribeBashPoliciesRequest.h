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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASHPOLICIESREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASHPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBashPolicies request structure.
                */
                class DescribeBashPoliciesRequest : public AbstractModel
                {
                public:
                    DescribeBashPoliciesRequest();
                    ~DescribeBashPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Quantity of returned entries. The maximum value is 100.
                     * @return Limit Quantity of returned entries. The maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Quantity of returned entries. The maximum value is 100.
                     * @param _limit Quantity of returned entries. The maximum value is 100.
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
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Filtering criteria
<li>Name - String - required: no - rule name</li>
<li>Rule - String - required: no - rule content</li>
<li>Level - Int - required: no - threat level</li>
<li>White - Int - required: no - allowlist type</li>
<li>Category - Int - required: no - policy type</li>
<li>BashAction - Int - required: no - action</li>
<li>Enable - Int - required: no - enabling status</li>
<li>Id - Int - required: no - policy ID</li>
<li>PolicyId - Int - required: no - policy ID</li>
<li>RuleId - Int - required: no - rule ID</li>
                     * @return Filters Filtering criteria
<li>Name - String - required: no - rule name</li>
<li>Rule - String - required: no - rule content</li>
<li>Level - Int - required: no - threat level</li>
<li>White - Int - required: no - allowlist type</li>
<li>Category - Int - required: no - policy type</li>
<li>BashAction - Int - required: no - action</li>
<li>Enable - Int - required: no - enabling status</li>
<li>Id - Int - required: no - policy ID</li>
<li>PolicyId - Int - required: no - policy ID</li>
<li>RuleId - Int - required: no - rule ID</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filtering criteria
<li>Name - String - required: no - rule name</li>
<li>Rule - String - required: no - rule content</li>
<li>Level - Int - required: no - threat level</li>
<li>White - Int - required: no - allowlist type</li>
<li>Category - Int - required: no - policy type</li>
<li>BashAction - Int - required: no - action</li>
<li>Enable - Int - required: no - enabling status</li>
<li>Id - Int - required: no - policy ID</li>
<li>PolicyId - Int - required: no - policy ID</li>
<li>RuleId - Int - required: no - rule ID</li>
                     * @param _filters Filtering criteria
<li>Name - String - required: no - rule name</li>
<li>Rule - String - required: no - rule content</li>
<li>Level - Int - required: no - threat level</li>
<li>White - Int - required: no - allowlist type</li>
<li>Category - Int - required: no - policy type</li>
<li>BashAction - Int - required: no - action</li>
<li>Enable - Int - required: no - enabling status</li>
<li>Id - Int - required: no - policy ID</li>
<li>PolicyId - Int - required: no - policy ID</li>
<li>RuleId - Int - required: no - rule ID</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Quantity of returned entries. The maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filtering criteria
<li>Name - String - required: no - rule name</li>
<li>Rule - String - required: no - rule content</li>
<li>Level - Int - required: no - threat level</li>
<li>White - Int - required: no - allowlist type</li>
<li>Category - Int - required: no - policy type</li>
<li>BashAction - Int - required: no - action</li>
<li>Enable - Int - required: no - enabling status</li>
<li>Id - Int - required: no - policy ID</li>
<li>PolicyId - Int - required: no - policy ID</li>
<li>RuleId - Int - required: no - rule ID</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASHPOLICIESREQUEST_H_
