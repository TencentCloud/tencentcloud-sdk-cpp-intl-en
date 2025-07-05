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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEWORKGROUPSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEWORKGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Filter.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeWorkGroups request structure.
                */
                class DescribeWorkGroupsRequest : public AbstractModel
                {
                public:
                    DescribeWorkGroupsRequest();
                    ~DescribeWorkGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IDs of working groups that are queried. If it is not filled in or is 0, this means no need for filtering.
                     * @return WorkGroupId IDs of working groups that are queried. If it is not filled in or is 0, this means no need for filtering.
                     * 
                     */
                    int64_t GetWorkGroupId() const;

                    /**
                     * 设置IDs of working groups that are queried. If it is not filled in or is 0, this means no need for filtering.
                     * @param _workGroupId IDs of working groups that are queried. If it is not filled in or is 0, this means no need for filtering.
                     * 
                     */
                    void SetWorkGroupId(const int64_t& _workGroupId);

                    /**
                     * 判断参数 WorkGroupId 是否已赋值
                     * @return WorkGroupId 是否已赋值
                     * 
                     */
                    bool WorkGroupIdHasBeenSet() const;

                    /**
                     * 获取Filter criteria. Only the fuzzy search according to working group names is supported. The key is workgroup-name.
                     * @return Filters Filter criteria. Only the fuzzy search according to working group names is supported. The key is workgroup-name.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria. Only the fuzzy search according to working group names is supported. The key is workgroup-name.
                     * @param _filters Filter criteria. Only the fuzzy search according to working group names is supported. The key is workgroup-name.
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
                     * 获取Offset, which is 0 by default.
                     * @return Offset Offset, which is 0 by default.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset, which is 0 by default.
                     * @param _offset Offset, which is 0 by default.
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
                     * 获取Quantity of returns. It is 20 by default, and the maximum value is 100.
                     * @return Limit Quantity of returns. It is 20 by default, and the maximum value is 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Quantity of returns. It is 20 by default, and the maximum value is 100.
                     * @param _limit Quantity of returns. It is 20 by default, and the maximum value is 100.
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
                     * 获取Sorting fields, which support the following type: create-time
                     * @return SortBy Sorting fields, which support the following type: create-time
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置Sorting fields, which support the following type: create-time
                     * @param _sortBy Sorting fields, which support the following type: create-time
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
                     * 获取Sorting methods; desc means in order; asc means in reverse order; it is asc by default.
                     * @return Sorting Sorting methods; desc means in order; asc means in reverse order; it is asc by default.
                     * 
                     */
                    std::string GetSorting() const;

                    /**
                     * 设置Sorting methods; desc means in order; asc means in reverse order; it is asc by default.
                     * @param _sorting Sorting methods; desc means in order; asc means in reverse order; it is asc by default.
                     * 
                     */
                    void SetSorting(const std::string& _sorting);

                    /**
                     * 判断参数 Sorting 是否已赋值
                     * @return Sorting 是否已赋值
                     * 
                     */
                    bool SortingHasBeenSet() const;

                private:

                    /**
                     * IDs of working groups that are queried. If it is not filled in or is 0, this means no need for filtering.
                     */
                    int64_t m_workGroupId;
                    bool m_workGroupIdHasBeenSet;

                    /**
                     * Filter criteria. Only the fuzzy search according to working group names is supported. The key is workgroup-name.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset, which is 0 by default.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Quantity of returns. It is 20 by default, and the maximum value is 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting fields, which support the following type: create-time
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * Sorting methods; desc means in order; asc means in reverse order; it is asc by default.
                     */
                    std::string m_sorting;
                    bool m_sortingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEWORKGROUPSREQUEST_H_
