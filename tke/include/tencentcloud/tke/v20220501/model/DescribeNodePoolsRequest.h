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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBENODEPOOLSREQUEST_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBENODEPOOLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/Filter.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * DescribeNodePools request structure.
                */
                class DescribeNodePoolsRequest : public AbstractModel
                {
                public:
                    DescribeNodePoolsRequest();
                    ~DescribeNodePoolsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Query filter criteria:
·  NodePoolsName
    Filter by [Node Pool Name].
    Type: String
        Required: No



·  NodePoolsId
    Filter by [Node Pool id].
    Type: String
        Required: No



·  tags
    Filter by [Tag Key-value Pairs].
    Type: String
        Required: No



·  tag:tag-key
    Filter by [Tag Key-value Pairs].
    Type: String
        Required: No
                     * @return Filters Query filter criteria:
·  NodePoolsName
    Filter by [Node Pool Name].
    Type: String
        Required: No



·  NodePoolsId
    Filter by [Node Pool id].
    Type: String
        Required: No



·  tags
    Filter by [Tag Key-value Pairs].
    Type: String
        Required: No



·  tag:tag-key
    Filter by [Tag Key-value Pairs].
    Type: String
        Required: No
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Query filter criteria:
·  NodePoolsName
    Filter by [Node Pool Name].
    Type: String
        Required: No



·  NodePoolsId
    Filter by [Node Pool id].
    Type: String
        Required: No



·  tags
    Filter by [Tag Key-value Pairs].
    Type: String
        Required: No



·  tag:tag-key
    Filter by [Tag Key-value Pairs].
    Type: String
        Required: No
                     * @param _filters Query filter criteria:
·  NodePoolsName
    Filter by [Node Pool Name].
    Type: String
        Required: No



·  NodePoolsId
    Filter by [Node Pool id].
    Type: String
        Required: No



·  tags
    Filter by [Tag Key-value Pairs].
    Type: String
        Required: No



·  tag:tag-key
    Filter by [Tag Key-value Pairs].
    Type: String
        Required: No
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
                     * 获取Offset. Default value: 0
                     * @return Offset Offset. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0
                     * @param _offset Offset. Default value: 0
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
                     * 获取Maximum number of output entries. Default value: 20; maximum value: 100.
                     * @return Limit Maximum number of output entries. Default value: 20; maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of output entries. Default value: 20; maximum value: 100.
                     * @param _limit Maximum number of output entries. Default value: 20; maximum value: 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Query filter criteria:
·  NodePoolsName
    Filter by [Node Pool Name].
    Type: String
        Required: No



·  NodePoolsId
    Filter by [Node Pool id].
    Type: String
        Required: No



·  tags
    Filter by [Tag Key-value Pairs].
    Type: String
        Required: No



·  tag:tag-key
    Filter by [Tag Key-value Pairs].
    Type: String
        Required: No
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of output entries. Default value: 20; maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBENODEPOOLSREQUEST_H_
