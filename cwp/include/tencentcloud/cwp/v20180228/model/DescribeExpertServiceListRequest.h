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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEXPERTSERVICELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEXPERTSERVICELISTREQUEST_H_

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
                * DescribeExpertServiceList request structure.
                */
                class DescribeExpertServiceListRequest : public AbstractModel
                {
                public:
                    DescribeExpertServiceListRequest();
                    ~DescribeExpertServiceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria
<li>Keyword - String - whether required: no - filter by keyword</li>
<li>Uuids - String - whether required: no - filter by host ID</li>
                     * @return Filters Filter criteria
<li>Keyword - String - whether required: no - filter by keyword</li>
<li>Uuids - String - whether required: no - filter by host ID</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>Keyword - String - whether required: no - filter by keyword</li>
<li>Uuids - String - whether required: no - filter by host ID</li>
                     * @param _filters Filter criteria
<li>Keyword - String - whether required: no - filter by keyword</li>
<li>Uuids - String - whether required: no - filter by host ID</li>
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
                     * 获取Number of items to be returned. The maximum value is 100.
                     * @return Limit Number of items to be returned. The maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of items to be returned. The maximum value is 100.
                     * @param _limit Number of items to be returned. The maximum value is 100.
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
                     * 获取Sorting step size
                     * @return Offset Sorting step size
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Sorting step size
                     * @param _offset Sorting step size
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
                     * 获取Sort method
                     * @return Order Sort method
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sort method
                     * @param _order Sort method
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
                     * 获取Sorting field: StartTime, EndTime
                     * @return By Sorting field: StartTime, EndTime
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field: StartTime, EndTime
                     * @param _by Sorting field: StartTime, EndTime
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
                     * Filter criteria
<li>Keyword - String - whether required: no - filter by keyword</li>
<li>Uuids - String - whether required: no - filter by host ID</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of items to be returned. The maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting step size
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sort method
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field: StartTime, EndTime
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEXPERTSERVICELISTREQUEST_H_
