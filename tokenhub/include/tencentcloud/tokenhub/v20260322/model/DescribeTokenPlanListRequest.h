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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANLISTREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/RequestFilter.h>
#include <tencentcloud/tokenhub/v20260322/model/RequestSort.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeTokenPlanList request structure.
                */
                class DescribeTokenPlanListRequest : public AbstractModel
                {
                public:
                    DescribeTokenPlanListRequest();
                    ~DescribeTokenPlanListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset of paginated query. Default value: 0.
                     * @return Offset Offset of paginated query. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset of paginated query. Default value: 0.
                     * @param _offset Offset of paginated query. Default value: 0.
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
                     * 获取Number of results returned by paging query. Default value: 20. Maximum value: 100.
                     * @return Limit Number of results returned by paging query. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results returned by paging query. Default value: 20. Maximum value: 100.
                     * @param _limit Number of results returned by paging query. Default value: 20. Maximum value: 100.
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
                     * 获取Paginate the query filter criteria list. Supported filter fields: TeamId (Package ID), Name (package name), StopReason (disable reason), ProductType (package type).
                     * @return Filters Paginate the query filter criteria list. Supported filter fields: TeamId (Package ID), Name (package name), StopReason (disable reason), ProductType (package type).
                     * 
                     */
                    std::vector<RequestFilter> GetFilters() const;

                    /**
                     * 设置Paginate the query filter criteria list. Supported filter fields: TeamId (Package ID), Name (package name), StopReason (disable reason), ProductType (package type).
                     * @param _filters Paginate the query filter criteria list. Supported filter fields: TeamId (Package ID), Name (package name), StopReason (disable reason), ProductType (package type).
                     * 
                     */
                    void SetFilters(const std::vector<RequestFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取List of sorting criteria. Supported sorting fields: CreatedAt (creation time) and UpdatedAt (update time). By default, results are sorted by CreatedAt in descending order.
                     * @return Sorts List of sorting criteria. Supported sorting fields: CreatedAt (creation time) and UpdatedAt (update time). By default, results are sorted by CreatedAt in descending order.
                     * 
                     */
                    std::vector<RequestSort> GetSorts() const;

                    /**
                     * 设置List of sorting criteria. Supported sorting fields: CreatedAt (creation time) and UpdatedAt (update time). By default, results are sorted by CreatedAt in descending order.
                     * @param _sorts List of sorting criteria. Supported sorting fields: CreatedAt (creation time) and UpdatedAt (update time). By default, results are sorted by CreatedAt in descending order.
                     * 
                     */
                    void SetSorts(const std::vector<RequestSort>& _sorts);

                    /**
                     * 判断参数 Sorts 是否已赋值
                     * @return Sorts 是否已赋值
                     * 
                     */
                    bool SortsHasBeenSet() const;

                private:

                    /**
                     * Offset of paginated query. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results returned by paging query. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Paginate the query filter criteria list. Supported filter fields: TeamId (Package ID), Name (package name), StopReason (disable reason), ProductType (package type).
                     */
                    std::vector<RequestFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * List of sorting criteria. Supported sorting fields: CreatedAt (creation time) and UpdatedAt (update time). By default, results are sorted by CreatedAt in descending order.
                     */
                    std::vector<RequestSort> m_sorts;
                    bool m_sortsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANLISTREQUEST_H_
