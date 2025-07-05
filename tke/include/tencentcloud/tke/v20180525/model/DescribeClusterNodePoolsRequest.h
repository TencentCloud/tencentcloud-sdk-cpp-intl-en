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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERNODEPOOLSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERNODEPOOLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Filter.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterNodePools request structure.
                */
                class DescribeClusterNodePoolsRequest : public AbstractModel
                {
                public:
                    DescribeClusterNodePoolsRequest();
                    ~DescribeClusterNodePoolsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ClusterId (cluster ID)
                     * @return ClusterId ClusterId (cluster ID)
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ClusterId (cluster ID)
                     * @param _clusterId ClusterId (cluster ID)
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
                     * 获取· "Name":"NodePoolsName","Values": ["test"]
    Filter by [Node Pool Name].
    Type: String
        Required: No



·  "Name":"NodePoolsId","Values": ["np-d2mb2zb"]
    Filter by [Node Pool ID].
    Type: String
        Required: No



·  "Name":"Tags","Values": ["abc:1"]
    Filter by [Key-value Pairs of Tags].
    Type: String
        Required: No
                     * @return Filters · "Name":"NodePoolsName","Values": ["test"]
    Filter by [Node Pool Name].
    Type: String
        Required: No



·  "Name":"NodePoolsId","Values": ["np-d2mb2zb"]
    Filter by [Node Pool ID].
    Type: String
        Required: No



·  "Name":"Tags","Values": ["abc:1"]
    Filter by [Key-value Pairs of Tags].
    Type: String
        Required: No
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置· "Name":"NodePoolsName","Values": ["test"]
    Filter by [Node Pool Name].
    Type: String
        Required: No



·  "Name":"NodePoolsId","Values": ["np-d2mb2zb"]
    Filter by [Node Pool ID].
    Type: String
        Required: No



·  "Name":"Tags","Values": ["abc:1"]
    Filter by [Key-value Pairs of Tags].
    Type: String
        Required: No
                     * @param _filters · "Name":"NodePoolsName","Values": ["test"]
    Filter by [Node Pool Name].
    Type: String
        Required: No



·  "Name":"NodePoolsId","Values": ["np-d2mb2zb"]
    Filter by [Node Pool ID].
    Type: String
        Required: No



·  "Name":"Tags","Values": ["abc:1"]
    Filter by [Key-value Pairs of Tags].
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

                private:

                    /**
                     * ClusterId (cluster ID)
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * · "Name":"NodePoolsName","Values": ["test"]
    Filter by [Node Pool Name].
    Type: String
        Required: No



·  "Name":"NodePoolsId","Values": ["np-d2mb2zb"]
    Filter by [Node Pool ID].
    Type: String
        Required: No



·  "Name":"Tags","Values": ["abc:1"]
    Filter by [Key-value Pairs of Tags].
    Type: String
        Required: No
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERNODEPOOLSREQUEST_H_
