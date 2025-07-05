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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERCHECKTASKITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERCHECKTASKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Input parameters for a cluster check task
                */
                class ClusterCheckTaskItem : public AbstractModel
                {
                public:
                    ClusterCheckTaskItem();
                    ~ClusterCheckTaskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the specified cluster to be scanned
                     * @return ClusterId ID of the specified cluster to be scanned
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the specified cluster to be scanned
                     * @param _clusterId ID of the specified cluster to be scanned
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
                     * 获取Cluster region
                     * @return ClusterRegion Cluster region
                     * 
                     */
                    std::string GetClusterRegion() const;

                    /**
                     * 设置Cluster region
                     * @param _clusterRegion Cluster region
                     * 
                     */
                    void SetClusterRegion(const std::string& _clusterRegion);

                    /**
                     * 判断参数 ClusterRegion 是否已赋值
                     * @return ClusterRegion 是否已赋值
                     * 
                     */
                    bool ClusterRegionHasBeenSet() const;

                    /**
                     * 获取IP of the specified node to be scanned
                     * @return NodeIp IP of the specified node to be scanned
                     * 
                     */
                    std::string GetNodeIp() const;

                    /**
                     * 设置IP of the specified node to be scanned
                     * @param _nodeIp IP of the specified node to be scanned
                     * 
                     */
                    void SetNodeIp(const std::string& _nodeIp);

                    /**
                     * 判断参数 NodeIp 是否已赋值
                     * @return NodeIp 是否已赋值
                     * 
                     */
                    bool NodeIpHasBeenSet() const;

                    /**
                     * 获取Name of the specified workload to be scanned
                     * @return WorkloadName Name of the specified workload to be scanned
                     * 
                     */
                    std::string GetWorkloadName() const;

                    /**
                     * 设置Name of the specified workload to be scanned
                     * @param _workloadName Name of the specified workload to be scanned
                     * 
                     */
                    void SetWorkloadName(const std::string& _workloadName);

                    /**
                     * 判断参数 WorkloadName 是否已赋值
                     * @return WorkloadName 是否已赋值
                     * 
                     */
                    bool WorkloadNameHasBeenSet() const;

                private:

                    /**
                     * ID of the specified cluster to be scanned
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster region
                     */
                    std::string m_clusterRegion;
                    bool m_clusterRegionHasBeenSet;

                    /**
                     * IP of the specified node to be scanned
                     */
                    std::string m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                    /**
                     * Name of the specified workload to be scanned
                     */
                    std::string m_workloadName;
                    bool m_workloadNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERCHECKTASKITEM_H_
