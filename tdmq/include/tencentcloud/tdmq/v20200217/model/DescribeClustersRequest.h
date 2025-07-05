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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECLUSTERSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Filter.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeClusters request structure.
                */
                class DescribeClustersRequest : public AbstractModel
                {
                public:
                    DescribeClustersRequest();
                    ~DescribeClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start offset, which defaults to 0 if left empty.
                     * @return Offset Start offset, which defaults to 0 if left empty.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Start offset, which defaults to 0 if left empty.
                     * @param _offset Start offset, which defaults to 0 if left empty.
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
                     * 获取The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
                     * @return Limit The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
                     * @param _limit The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
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
                     * 获取Filter by cluster ID.
                     * @return ClusterIdList Filter by cluster ID.
                     * 
                     */
                    std::vector<std::string> GetClusterIdList() const;

                    /**
                     * 设置Filter by cluster ID.
                     * @param _clusterIdList Filter by cluster ID.
                     * 
                     */
                    void SetClusterIdList(const std::vector<std::string>& _clusterIdList);

                    /**
                     * 判断参数 ClusterIdList 是否已赋值
                     * @return ClusterIdList 是否已赋值
                     * 
                     */
                    bool ClusterIdListHasBeenSet() const;

                    /**
                     * 获取Whether to filter by tag.
                     * @return IsTagFilter Whether to filter by tag.
                     * 
                     */
                    bool GetIsTagFilter() const;

                    /**
                     * 设置Whether to filter by tag.
                     * @param _isTagFilter Whether to filter by tag.
                     * 
                     */
                    void SetIsTagFilter(const bool& _isTagFilter);

                    /**
                     * 判断参数 IsTagFilter 是否已赋值
                     * @return IsTagFilter 是否已赋值
                     * 
                     */
                    bool IsTagFilterHasBeenSet() const;

                    /**
                     * 获取Filter. Currently, you can filter by tag.
                     * @return Filters Filter. Currently, you can filter by tag.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter. Currently, you can filter by tag.
                     * @param _filters Filter. Currently, you can filter by tag.
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
                     * Start offset, which defaults to 0 if left empty.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter by cluster ID.
                     */
                    std::vector<std::string> m_clusterIdList;
                    bool m_clusterIdListHasBeenSet;

                    /**
                     * Whether to filter by tag.
                     */
                    bool m_isTagFilter;
                    bool m_isTagFilterHasBeenSet;

                    /**
                     * Filter. Currently, you can filter by tag.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECLUSTERSREQUEST_H_
