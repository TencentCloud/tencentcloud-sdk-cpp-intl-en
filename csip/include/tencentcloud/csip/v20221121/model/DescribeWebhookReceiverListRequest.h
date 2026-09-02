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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEWEBHOOKRECEIVERLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEWEBHOOKRECEIVERLISTREQUEST_H_

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
                * DescribeWebhookReceiverList request structure.
                */
                class DescribeWebhookReceiverListRequest : public AbstractModel
                {
                public:
                    DescribeWebhookReceiverListRequest();
                    ~DescribeWebhookReceiverListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination offset.
Valid values: [0, +∞)
Default value: 0
                     * @return Offset Pagination offset.
Valid values: [0, +∞)
Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset.
Valid values: [0, +∞)
Default value: 0
                     * @param _offset Pagination offset.
Valid values: [0, +∞)
Default value: 0
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
                     * 获取Number of results per page
Valid values: [1, 200]
Default value: 20
                     * @return Limit Number of results per page
Valid values: [1, 200]
Default value: 20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results per page
Valid values: [1, 200]
Default value: 20
                     * @param _limit Number of results per page
Valid values: [1, 200]
Default value: 20
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
Name: Fuzzy search by robot name
Type: Robot type. Available values: WEBHOOK (webhook) / SCF (function)
                     * @return Filters Filter criteria.
Supported filter items:
Name: Fuzzy search by robot name
Type: Robot type. Available values: WEBHOOK (webhook) / SCF (function)
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria.
Supported filter items:
Name: Fuzzy search by robot name
Type: Robot type. Available values: WEBHOOK (webhook) / SCF (function)
                     * @param _filters Filter criteria.
Supported filter items:
Name: Fuzzy search by robot name
Type: Robot type. Available values: WEBHOOK (webhook) / SCF (function)
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
                     * 获取Sorting field.
Enumeration values:
InsertTime: Creation time
UpdateTime: Update time
Default value: UpdateTime.
                     * @return Order Sorting field.
Enumeration values:
InsertTime: Creation time
UpdateTime: Update time
Default value: UpdateTime.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting field.
Enumeration values:
InsertTime: Creation time
UpdateTime: Update time
Default value: UpdateTime.
                     * @param _order Sorting field.
Enumeration values:
InsertTime: Creation time
UpdateTime: Update time
Default value: UpdateTime.
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
                     * 获取Sorting method.
Enumeration values:
asc: Ascending
desc: Descending
Default value: desc
                     * @return By Sorting method.
Enumeration values:
asc: Ascending
desc: Descending
Default value: desc
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting method.
Enumeration values:
asc: Ascending
desc: Descending
Default value: desc
                     * @param _by Sorting method.
Enumeration values:
asc: Ascending
desc: Descending
Default value: desc
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
                     * Pagination offset.
Valid values: [0, +∞)
Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results per page
Valid values: [1, 200]
Default value: 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria.
Supported filter items:
Name: Fuzzy search by robot name
Type: Robot type. Available values: WEBHOOK (webhook) / SCF (function)
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting field.
Enumeration values:
InsertTime: Creation time
UpdateTime: Update time
Default value: UpdateTime.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting method.
Enumeration values:
asc: Ascending
desc: Descending
Default value: desc
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEWEBHOOKRECEIVERLISTREQUEST_H_
