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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEAVAILABLECLUSTERVERSIONREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEAVAILABLECLUSTERVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeAvailableClusterVersion request structure.
                */
                class DescribeAvailableClusterVersionRequest : public AbstractModel
                {
                public:
                    DescribeAvailableClusterVersionRequest();
                    ~DescribeAvailableClusterVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID. If you need to query the upgradable version of a specific cluster, this field is required.
                     * @return ClusterId Cluster ID. If you need to query the upgradable version of a specific cluster, this field is required.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID. If you need to query the upgradable version of a specific cluster, this field is required.
                     * @param _clusterId Cluster ID. If you need to query the upgradable version of a specific cluster, this field is required.
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
                     * 获取Cluster ID list. If you need to query the upgradable versions of multiple clusters, this field is required.
                     * @return ClusterIds Cluster ID list. If you need to query the upgradable versions of multiple clusters, this field is required.
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置Cluster ID list. If you need to query the upgradable versions of multiple clusters, this field is required.
                     * @param _clusterIds Cluster ID list. If you need to query the upgradable versions of multiple clusters, this field is required.
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                private:

                    /**
                     * Cluster ID. If you need to query the upgradable version of a specific cluster, this field is required.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster ID list. If you need to query the upgradable versions of multiple clusters, this field is required.
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEAVAILABLECLUSTERVERSIONREQUEST_H_
