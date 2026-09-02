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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESANDBOXACLSYSTEMRULELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESANDBOXACLSYSTEMRULELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSandboxACLSystemRuleList request structure.
                */
                class DescribeSandboxACLSystemRuleListRequest : public AbstractModel
                {
                public:
                    DescribeSandboxACLSystemRuleListRequest();
                    ~DescribeSandboxACLSystemRuleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of items per page. Default: 10. Upper limit: 200.
                     * @return Limit Number of items per page. Default: 10. Upper limit: 200.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items per page. Default: 10. Upper limit: 200.
                     * @param _limit Number of items per page. Default: 10. Upper limit: 200.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter criteria.
Supported filter items:
RuleName: Search by rule name
                     * @return Filters Filter criteria.
Supported filter items:
RuleName: Search by rule name
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria.
Supported filter items:
RuleName: Search by rule name
                     * @param _filters Filter criteria.
Supported filter items:
RuleName: Search by rule name
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of items per page. Default: 10. Upper limit: 200.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria.
Supported filter items:
RuleName: Search by rule name
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESANDBOXACLSYSTEMRULELISTREQUEST_H_
