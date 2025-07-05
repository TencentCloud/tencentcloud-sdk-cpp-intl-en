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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQCLUSTERSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQCLUSTERSREQUEST_H_

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
                * DescribeRocketMQClusters request structure.
                */
                class DescribeRocketMQClustersRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQClustersRequest();
                    ~DescribeRocketMQClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
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
                     * 获取The max number of returned results.
                     * @return Limit The max number of returned results.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The max number of returned results.
                     * @param _limit The max number of returned results.
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
                     * 获取Search by cluster ID.
                     * @return IdKeyword Search by cluster ID.
                     * 
                     */
                    std::string GetIdKeyword() const;

                    /**
                     * 设置Search by cluster ID.
                     * @param _idKeyword Search by cluster ID.
                     * 
                     */
                    void SetIdKeyword(const std::string& _idKeyword);

                    /**
                     * 判断参数 IdKeyword 是否已赋值
                     * @return IdKeyword 是否已赋值
                     * 
                     */
                    bool IdKeywordHasBeenSet() const;

                    /**
                     * 获取Search by cluster name.
                     * @return NameKeyword Search by cluster name.
                     * 
                     */
                    std::string GetNameKeyword() const;

                    /**
                     * 设置Search by cluster name.
                     * @param _nameKeyword Search by cluster name.
                     * 
                     */
                    void SetNameKeyword(const std::string& _nameKeyword);

                    /**
                     * 判断参数 NameKeyword 是否已赋值
                     * @return NameKeyword 是否已赋值
                     * 
                     */
                    bool NameKeywordHasBeenSet() const;

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
                     * 获取For filtering by tag, this parameter must be set to `true`.
                     * @return IsTagFilter For filtering by tag, this parameter must be set to `true`.
                     * 
                     */
                    bool GetIsTagFilter() const;

                    /**
                     * 设置For filtering by tag, this parameter must be set to `true`.
                     * @param _isTagFilter For filtering by tag, this parameter must be set to `true`.
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
                     * 获取Filter. Currently, you can filter only by tag.
                     * @return Filters Filter. Currently, you can filter only by tag.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter. Currently, you can filter only by tag.
                     * @param _filters Filter. Currently, you can filter only by tag.
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
                     * Offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The max number of returned results.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Search by cluster ID.
                     */
                    std::string m_idKeyword;
                    bool m_idKeywordHasBeenSet;

                    /**
                     * Search by cluster name.
                     */
                    std::string m_nameKeyword;
                    bool m_nameKeywordHasBeenSet;

                    /**
                     * Filter by cluster ID.
                     */
                    std::vector<std::string> m_clusterIdList;
                    bool m_clusterIdListHasBeenSet;

                    /**
                     * For filtering by tag, this parameter must be set to `true`.
                     */
                    bool m_isTagFilter;
                    bool m_isTagFilterHasBeenSet;

                    /**
                     * Filter. Currently, you can filter only by tag.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQCLUSTERSREQUEST_H_
