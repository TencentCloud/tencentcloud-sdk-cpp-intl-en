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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEEDGEKVNAMESPACESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEEDGEKVNAMESPACESREQUEST_H_

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
                * DescribeEdgeKVNamespaces request structure.
                */
                class DescribeEdgeKVNamespacesRequest : public AbstractModel
                {
                public:
                    DescribeEdgeKVNamespacesRequest();
                    ~DescribeEdgeKVNamespacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
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
                     * 获取The offset of paginated query. Default value: 0.
                     * @return Offset The offset of paginated query. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The offset of paginated query. Default value: 0.
                     * @param _offset The offset of paginated query. Default value: 0.
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
                     * 获取The limit of paginated query. Default value: 20. Maximum value: 1,000.
                     * @return Limit The limit of paginated query. Default value: 20. Maximum value: 1,000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The limit of paginated query. Default value: 20. Maximum value: 1,000.
                     * @param _limit The limit of paginated query. Default value: 20. Maximum value: 1,000.
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
                     * 获取Sorting basis. Valid values:
<li>created-on: creation time;</li>
<li>updated-on: Update time.</li>
Default value is created-on.
                     * @return SortBy Sorting basis. Valid values:
<li>created-on: creation time;</li>
<li>updated-on: Update time.</li>
Default value is created-on.
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置Sorting basis. Valid values:
<li>created-on: creation time;</li>
<li>updated-on: Update time.</li>
Default value is created-on.
                     * @param _sortBy Sorting basis. Valid values:
<li>created-on: creation time;</li>
<li>updated-on: Update time.</li>
Default value is created-on.
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取List sort method. Valid values:
<li>asc: ascending order;</li>
<li>desc: descending order.</li>
Default value is desc.

                     * @return SortOrder List sort method. Valid values:
<li>asc: ascending order;</li>
<li>desc: descending order.</li>
Default value is desc.

                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置List sort method. Valid values:
<li>asc: ascending order;</li>
<li>desc: descending order.</li>
Default value is desc.

                     * @param _sortOrder List sort method. Valid values:
<li>asc: ascending order;</li>
<li>desc: descending order.</li>
Default value is desc.

                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取Filter criteria. The maximum of Filters.Values is 20. If this parameter is left empty, return all KV namespaces under the site ID. Detailed filter criteria:
<li>Namespace: Filter by KV namespace name. Fuzzy query is supported.</li>
<li>remark: Filter by namespace description. Fuzzy query is supported.</li>

                     * @return Filters Filter criteria. The maximum of Filters.Values is 20. If this parameter is left empty, return all KV namespaces under the site ID. Detailed filter criteria:
<li>Namespace: Filter by KV namespace name. Fuzzy query is supported.</li>
<li>remark: Filter by namespace description. Fuzzy query is supported.</li>

                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filter criteria. The maximum of Filters.Values is 20. If this parameter is left empty, return all KV namespaces under the site ID. Detailed filter criteria:
<li>Namespace: Filter by KV namespace name. Fuzzy query is supported.</li>
<li>remark: Filter by namespace description. Fuzzy query is supported.</li>

                     * @param _filters Filter criteria. The maximum of Filters.Values is 20. If this parameter is left empty, return all KV namespaces under the site ID. Detailed filter criteria:
<li>Namespace: Filter by KV namespace name. Fuzzy query is supported.</li>
<li>remark: Filter by namespace description. Fuzzy query is supported.</li>

                     * 
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The offset of paginated query. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The limit of paginated query. Default value: 20. Maximum value: 1,000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting basis. Valid values:
<li>created-on: creation time;</li>
<li>updated-on: Update time.</li>
Default value is created-on.
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * List sort method. Valid values:
<li>asc: ascending order;</li>
<li>desc: descending order.</li>
Default value is desc.

                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * Filter criteria. The maximum of Filters.Values is 20. If this parameter is left empty, return all KV namespaces under the site ID. Detailed filter criteria:
<li>Namespace: Filter by KV namespace name. Fuzzy query is supported.</li>
<li>remark: Filter by namespace description. Fuzzy query is supported.</li>

                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEEDGEKVNAMESPACESREQUEST_H_
