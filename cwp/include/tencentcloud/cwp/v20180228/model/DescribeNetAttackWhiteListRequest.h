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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBENETATTACKWHITELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBENETATTACKWHITELISTREQUEST_H_

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
                * DescribeNetAttackWhiteList request structure.
                */
                class DescribeNetAttackWhiteListRequest : public AbstractModel
                {
                public:
                    DescribeNetAttackWhiteListRequest();
                    ~DescribeNetAttackWhiteListRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Number of returns. The maximum value is 100.
                     * @return Limit Number of returns. The maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returns. The maximum value is 100.
                     * @param _limit Number of returns. The maximum value is 100.
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
                     * 获取Filter criteria
<li>IP - String - required: no - query by host IP</li>
<li>SrcIP- String - required: no - query by allowlisted IP</li>
                     * @return Filters Filter criteria
<li>IP - String - required: no - query by host IP</li>
<li>SrcIP- String - required: no - query by allowlisted IP</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>IP - String - required: no - query by host IP</li>
<li>SrcIP- String - required: no - query by allowlisted IP</li>
                     * @param _filters Filter criteria
<li>IP - String - required: no - query by host IP</li>
<li>SrcIP- String - required: no - query by allowlisted IP</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting Method: [ASC: Ascending Order, DESC: Descending Order]
                     * @return Order Sorting Method: [ASC: Ascending Order, DESC: Descending Order]
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting Method: [ASC: Ascending Order, DESC: Descending Order]
                     * @param _order Sorting Method: [ASC: Ascending Order, DESC: Descending Order]
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Optional sorting column: [CreateTime]
                     * @return By Optional sorting column: [CreateTime]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Optional sorting column: [CreateTime]
                     * @param _by Optional sorting column: [CreateTime]
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returns. The maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria
<li>IP - String - required: no - query by host IP</li>
<li>SrcIP- String - required: no - query by allowlisted IP</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting Method: [ASC: Ascending Order, DESC: Descending Order]
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Optional sorting column: [CreateTime]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBENETATTACKWHITELISTREQUEST_H_
