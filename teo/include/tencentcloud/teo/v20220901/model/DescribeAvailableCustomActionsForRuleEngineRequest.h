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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEAVAILABLECUSTOMACTIONSFORRULEENGINEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEAVAILABLECUSTOMACTIONSFORRULEENGINEREQUEST_H_

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
                * DescribeAvailableCustomActionsForRuleEngine request structure.
                */
                class DescribeAvailableCustomActionsForRuleEngineRequest : public AbstractModel
                {
                public:
                    DescribeAvailableCustomActionsForRuleEngineRequest();
                    ~DescribeAvailableCustomActionsForRuleEngineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Zone ID.</p>
                     * @return ZoneId <p>Zone ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Zone ID.</p>
                     * @param _zoneId <p>Zone ID.</p>
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
                     * 获取<p>Filter criteria. Multiple conditions have an AND relationship. The maximum number of Filters.Values is 20. If this parameter is left empty, return all available rule engine custom configurations under the current site. Detailed filter criteria:</p><li>action-id: Filter by the unique identification ID of the custom configuration.</li><li>name: Filter by the name of the custom configuration.</a></li>Fuzzy query only supports filtering fields named <code>name</code>.<p></p>
                     * @return Filters <p>Filter criteria. Multiple conditions have an AND relationship. The maximum number of Filters.Values is 20. If this parameter is left empty, return all available rule engine custom configurations under the current site. Detailed filter criteria:</p><li>action-id: Filter by the unique identification ID of the custom configuration.</li><li>name: Filter by the name of the custom configuration.</a></li>Fuzzy query only supports filtering fields named <code>name</code>.<p></p>
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置<p>Filter criteria. Multiple conditions have an AND relationship. The maximum number of Filters.Values is 20. If this parameter is left empty, return all available rule engine custom configurations under the current site. Detailed filter criteria:</p><li>action-id: Filter by the unique identification ID of the custom configuration.</li><li>name: Filter by the name of the custom configuration.</a></li>Fuzzy query only supports filtering fields named <code>name</code>.<p></p>
                     * @param _filters <p>Filter criteria. Multiple conditions have an AND relationship. The maximum number of Filters.Values is 20. If this parameter is left empty, return all available rule engine custom configurations under the current site. Detailed filter criteria:</p><li>action-id: Filter by the unique identification ID of the custom configuration.</li><li>name: Filter by the name of the custom configuration.</a></li>Fuzzy query only supports filtering fields named <code>name</code>.<p></p>
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
                     * 获取<p>Paginated query limit.</p><p>Value ranges from 0 to 1000.</p><p>Default value: 20.</p>
                     * @return Limit <p>Paginated query limit.</p><p>Value ranges from 0 to 1000.</p><p>Default value: 20.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Paginated query limit.</p><p>Value ranges from 0 to 1000.</p><p>Default value: 20.</p>
                     * @param _limit <p>Paginated query limit.</p><p>Value ranges from 0 to 1000.</p><p>Default value: 20.</p>
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
                     * 获取<p>Paging offset.</p><p>Default value: 0.</p>
                     * @return Offset <p>Paging offset.</p><p>Default value: 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Paging offset.</p><p>Default value: 0.</p>
                     * @param _offset <p>Paging offset.</p><p>Default value: 0.</p>
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
                     * 获取<p>Sorting field. Valid values:</p><li>action-id: Sort by custom configuration unique identification ID.</li><li>create-time: Sort by custom configuration creation time.</li>Default value: <code>action-id</code>.<p></p>
                     * @return SortBy <p>Sorting field. Valid values:</p><li>action-id: Sort by custom configuration unique identification ID.</li><li>create-time: Sort by custom configuration creation time.</li>Default value: <code>action-id</code>.<p></p>
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置<p>Sorting field. Valid values:</p><li>action-id: Sort by custom configuration unique identification ID.</li><li>create-time: Sort by custom configuration creation time.</li>Default value: <code>action-id</code>.<p></p>
                     * @param _sortBy <p>Sorting field. Valid values:</p><li>action-id: Sort by custom configuration unique identification ID.</li><li>create-time: Sort by custom configuration creation time.</li>Default value: <code>action-id</code>.<p></p>
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
                     * 获取<p>Sorting method. Valid values:</p><li>asc: ascending sort;</li><li>desc: sort in descending order.</li>Default value: desc.<p></p>
                     * @return SortOrder <p>Sorting method. Valid values:</p><li>asc: ascending sort;</li><li>desc: sort in descending order.</li>Default value: desc.<p></p>
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置<p>Sorting method. Valid values:</p><li>asc: ascending sort;</li><li>desc: sort in descending order.</li>Default value: desc.<p></p>
                     * @param _sortOrder <p>Sorting method. Valid values:</p><li>asc: ascending sort;</li><li>desc: sort in descending order.</li>Default value: desc.<p></p>
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * <p>Zone ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Filter criteria. Multiple conditions have an AND relationship. The maximum number of Filters.Values is 20. If this parameter is left empty, return all available rule engine custom configurations under the current site. Detailed filter criteria:</p><li>action-id: Filter by the unique identification ID of the custom configuration.</li><li>name: Filter by the name of the custom configuration.</a></li>Fuzzy query only supports filtering fields named <code>name</code>.<p></p>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Paginated query limit.</p><p>Value ranges from 0 to 1000.</p><p>Default value: 20.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Paging offset.</p><p>Default value: 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Sorting field. Valid values:</p><li>action-id: Sort by custom configuration unique identification ID.</li><li>create-time: Sort by custom configuration creation time.</li>Default value: <code>action-id</code>.<p></p>
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * <p>Sorting method. Valid values:</p><li>asc: ascending sort;</li><li>desc: sort in descending order.</li>Default value: desc.<p></p>
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEAVAILABLECUSTOMACTIONSFORRULEENGINEREQUEST_H_
