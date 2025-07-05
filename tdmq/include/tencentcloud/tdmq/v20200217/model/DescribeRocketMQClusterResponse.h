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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQCLUSTERRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQCLUSTERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQClusterInfo.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQClusterConfig.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQClusterRecentStats.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQCluster response structure.
                */
                class DescribeRocketMQClusterResponse : public AbstractModel
                {
                public:
                    DescribeRocketMQClusterResponse();
                    ~DescribeRocketMQClusterResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster information
                     * @return ClusterInfo Cluster information
                     * 
                     */
                    RocketMQClusterInfo GetClusterInfo() const;

                    /**
                     * 判断参数 ClusterInfo 是否已赋值
                     * @return ClusterInfo 是否已赋值
                     * 
                     */
                    bool ClusterInfoHasBeenSet() const;

                    /**
                     * 获取Cluster configuration
                     * @return ClusterConfig Cluster configuration
                     * 
                     */
                    RocketMQClusterConfig GetClusterConfig() const;

                    /**
                     * 判断参数 ClusterConfig 是否已赋值
                     * @return ClusterConfig 是否已赋值
                     * 
                     */
                    bool ClusterConfigHasBeenSet() const;

                    /**
                     * 获取Recent cluster usage
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClusterStats Recent cluster usage
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RocketMQClusterRecentStats GetClusterStats() const;

                    /**
                     * 判断参数 ClusterStats 是否已赋值
                     * @return ClusterStats 是否已赋值
                     * 
                     */
                    bool ClusterStatsHasBeenSet() const;

                private:

                    /**
                     * Cluster information
                     */
                    RocketMQClusterInfo m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * Cluster configuration
                     */
                    RocketMQClusterConfig m_clusterConfig;
                    bool m_clusterConfigHasBeenSet;

                    /**
                     * Recent cluster usage
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    RocketMQClusterRecentStats m_clusterStats;
                    bool m_clusterStatsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQCLUSTERRESPONSE_H_
