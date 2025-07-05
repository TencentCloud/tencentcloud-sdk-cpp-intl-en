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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERASGROUPSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERASGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ClusterAsGroup.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterAsGroups response structure.
                */
                class DescribeClusterAsGroupsResponse : public AbstractModel
                {
                public:
                    DescribeClusterAsGroupsResponse();
                    ~DescribeClusterAsGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of scaling groups associated with the cluster
                     * @return TotalCount Total number of scaling groups associated with the cluster
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Cluster-associated scaling group list
                     * @return ClusterAsGroupSet Cluster-associated scaling group list
                     * 
                     */
                    std::vector<ClusterAsGroup> GetClusterAsGroupSet() const;

                    /**
                     * 判断参数 ClusterAsGroupSet 是否已赋值
                     * @return ClusterAsGroupSet 是否已赋值
                     * 
                     */
                    bool ClusterAsGroupSetHasBeenSet() const;

                private:

                    /**
                     * Total number of scaling groups associated with the cluster
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Cluster-associated scaling group list
                     */
                    std::vector<ClusterAsGroup> m_clusterAsGroupSet;
                    bool m_clusterAsGroupSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERASGROUPSRESPONSE_H_
