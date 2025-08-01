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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSAGENTINSTANCESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSAGENTINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusAgentInstances request structure.
                */
                class DescribePrometheusAgentInstancesRequest : public AbstractModel
                {
                public:
                    DescribePrometheusAgentInstancesRequest();
                    ~DescribePrometheusAgentInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
It can be the ID of a TKE, EKS, or edge cluster.
                     * @return ClusterId Cluster ID
It can be the ID of a TKE, EKS, or edge cluster.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
It can be the ID of a TKE, EKS, or edge cluster.
                     * @param _clusterId Cluster ID
It can be the ID of a TKE, EKS, or edge cluster.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
It can be the ID of a TKE, EKS, or edge cluster.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSAGENTINSTANCESREQUEST_H_
