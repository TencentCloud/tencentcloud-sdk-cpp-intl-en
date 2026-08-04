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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AdvancedFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeInferenceServices request structure.
                */
                class DescribeInferenceServicesRequest : public AbstractModel
                {
                public:
                    DescribeInferenceServicesRequest();
                    ~DescribeInferenceServicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Filtering Conditions, maximum 20, multiple conditions have an AND relationship, the maximum for Filters.Values is 20. Detailed filter criteria are as follows: <li>service-name: filter by service name;</li><li>service-id: filter by service ID;</li><li>status: filter by service status.</li> Only the field named service-name supports filtering during a fuzzy query.</p>
                     * @return Filters <p>Filtering Conditions, maximum 20, multiple conditions have an AND relationship, the maximum for Filters.Values is 20. Detailed filter criteria are as follows: <li>service-name: filter by service name;</li><li>service-id: filter by service ID;</li><li>status: filter by service status.</li> Only the field named service-name supports filtering during a fuzzy query.</p>
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置<p>Filtering Conditions, maximum 20, multiple conditions have an AND relationship, the maximum for Filters.Values is 20. Detailed filter criteria are as follows: <li>service-name: filter by service name;</li><li>service-id: filter by service ID;</li><li>status: filter by service status.</li> Only the field named service-name supports filtering during a fuzzy query.</p>
                     * @param _filters <p>Filtering Conditions, maximum 20, multiple conditions have an AND relationship, the maximum for Filters.Values is 20. Detailed filter criteria are as follows: <li>service-name: filter by service name;</li><li>service-id: filter by service ID;</li><li>status: filter by service status.</li> Only the field named service-name supports filtering during a fuzzy query.</p>
                     * 
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Paginated query offset. Default value: 0.</p>
                     * @return Offset <p>Paginated query offset. Default value: 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Paginated query offset. Default value: 0.</p>
                     * @param _offset <p>Paginated query offset. Default value: 0.</p>
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
                     * 获取<p>Paginated query limit. Default value: 20, maximum value: 200.</p>
                     * @return Limit <p>Paginated query limit. Default value: 20, maximum value: 200.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Paginated query limit. Default value: 20, maximum value: 200.</p>
                     * @param _limit <p>Paginated query limit. Default value: 20, maximum value: 200.</p>
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
                     * 获取<p>Sort returned results based on this field. Valid values: <li>create-time: Creation time.</li>Default sorting order is by create-time if left empty.</p>
                     * @return Order <p>Sort returned results based on this field. Valid values: <li>create-time: Creation time.</li>Default sorting order is by create-time if left empty.</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sort returned results based on this field. Valid values: <li>create-time: Creation time.</li>Default sorting order is by create-time if left empty.</p>
                     * @param _order <p>Sort returned results based on this field. Valid values: <li>create-time: Creation time.</li>Default sorting order is by create-time if left empty.</p>
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
                     * 获取<p>Sorting order. If the field value is a number, sort based on its size; if the field value is text, sort based on ASCII code size. Valid values: <li>asc: sort in ascending order;</li><li>desc: sort in descending order.</li>Use default value if not specified.</p>
                     * @return Direction <p>Sorting order. If the field value is a number, sort based on its size; if the field value is text, sort based on ASCII code size. Valid values: <li>asc: sort in ascending order;</li><li>desc: sort in descending order.</li>Use default value if not specified.</p>
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置<p>Sorting order. If the field value is a number, sort based on its size; if the field value is text, sort based on ASCII code size. Valid values: <li>asc: sort in ascending order;</li><li>desc: sort in descending order.</li>Use default value if not specified.</p>
                     * @param _direction <p>Sorting order. If the field value is a number, sort based on its size; if the field value is text, sort based on ASCII code size. Valid values: <li>asc: sort in ascending order;</li><li>desc: sort in descending order.</li>Use default value if not specified.</p>
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Filtering Conditions, maximum 20, multiple conditions have an AND relationship, the maximum for Filters.Values is 20. Detailed filter criteria are as follows: <li>service-name: filter by service name;</li><li>service-id: filter by service ID;</li><li>status: filter by service status.</li> Only the field named service-name supports filtering during a fuzzy query.</p>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Paginated query offset. Default value: 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Paginated query limit. Default value: 20, maximum value: 200.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Sort returned results based on this field. Valid values: <li>create-time: Creation time.</li>Default sorting order is by create-time if left empty.</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Sorting order. If the field value is a number, sort based on its size; if the field value is text, sort based on ASCII code size. Valid values: <li>asc: sort in ascending order;</li><li>desc: sort in descending order.</li>Use default value if not specified.</p>
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICESREQUEST_H_
