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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBENETWORKFIREWALLNAMESPACELABELLISTRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBENETWORKFIREWALLNAMESPACELABELLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/NetworkClusterNamespaceLabelInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeNetworkFirewallNamespaceLabelList response structure.
                */
                class DescribeNetworkFirewallNamespaceLabelListResponse : public AbstractModel
                {
                public:
                    DescribeNetworkFirewallNamespaceLabelListResponse();
                    ~DescribeNetworkFirewallNamespaceLabelListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of clusters
                     * @return TotalCount Total number of clusters
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
                     * 获取Cluster namespace label details
                     * @return ClusterNamespaceLabelList Cluster namespace label details
                     * 
                     */
                    std::vector<NetworkClusterNamespaceLabelInfo> GetClusterNamespaceLabelList() const;

                    /**
                     * 判断参数 ClusterNamespaceLabelList 是否已赋值
                     * @return ClusterNamespaceLabelList 是否已赋值
                     * 
                     */
                    bool ClusterNamespaceLabelListHasBeenSet() const;

                private:

                    /**
                     * Total number of clusters
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Cluster namespace label details
                     */
                    std::vector<NetworkClusterNamespaceLabelInfo> m_clusterNamespaceLabelList;
                    bool m_clusterNamespaceLabelListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBENETWORKFIREWALLNAMESPACELABELLISTRESPONSE_H_
