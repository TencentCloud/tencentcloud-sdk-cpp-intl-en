/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTER_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Edge compute cluster information
                */
                class EdgeCluster : public AbstractModel
                {
                public:
                    EdgeCluster();
                    ~EdgeCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param ClusterName Cluster name
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param VpcId VPC ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Cluster Pod CIDR block
                     * @return PodCIDR Cluster Pod CIDR block
                     */
                    std::string GetPodCIDR() const;

                    /**
                     * 设置Cluster Pod CIDR block
                     * @param PodCIDR Cluster Pod CIDR block
                     */
                    void SetPodCIDR(const std::string& _podCIDR);

                    /**
                     * 判断参数 PodCIDR 是否已赋值
                     * @return PodCIDR 是否已赋值
                     */
                    bool PodCIDRHasBeenSet() const;

                    /**
                     * 获取Cluster service CIDR block
                     * @return ServiceCIDR Cluster service CIDR block
                     */
                    std::string GetServiceCIDR() const;

                    /**
                     * 设置Cluster service CIDR block
                     * @param ServiceCIDR Cluster service CIDR block
                     */
                    void SetServiceCIDR(const std::string& _serviceCIDR);

                    /**
                     * 判断参数 ServiceCIDR 是否已赋值
                     * @return ServiceCIDR 是否已赋值
                     */
                    bool ServiceCIDRHasBeenSet() const;

                    /**
                     * 获取
                     * @return K8SVersion 
                     */
                    std::string GetK8SVersion() const;

                    /**
                     * 设置
                     * @param K8SVersion 
                     */
                    void SetK8SVersion(const std::string& _k8SVersion);

                    /**
                     * 判断参数 K8SVersion 是否已赋值
                     * @return K8SVersion 是否已赋值
                     */
                    bool K8SVersionHasBeenSet() const;

                    /**
                     * 获取Cluster status
                     * @return Status Cluster status
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Cluster status
                     * @param Status Cluster status
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Cluster description
                     * @return ClusterDesc Cluster description
                     */
                    std::string GetClusterDesc() const;

                    /**
                     * 设置Cluster description
                     * @param ClusterDesc Cluster description
                     */
                    void SetClusterDesc(const std::string& _clusterDesc);

                    /**
                     * 判断参数 ClusterDesc 是否已赋值
                     * @return ClusterDesc 是否已赋值
                     */
                    bool ClusterDescHasBeenSet() const;

                    /**
                     * 获取Cluster creation time
                     * @return CreatedTime Cluster creation time
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Cluster creation time
                     * @param CreatedTime Cluster creation time
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Edge cluster version
                     * @return EdgeClusterVersion Edge cluster version
                     */
                    std::string GetEdgeClusterVersion() const;

                    /**
                     * 设置Edge cluster version
                     * @param EdgeClusterVersion Edge cluster version
                     */
                    void SetEdgeClusterVersion(const std::string& _edgeClusterVersion);

                    /**
                     * 判断参数 EdgeClusterVersion 是否已赋值
                     * @return EdgeClusterVersion 是否已赋值
                     */
                    bool EdgeClusterVersionHasBeenSet() const;

                    /**
                     * 获取Maximum number of Pods on the node
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return MaxNodePodNum Maximum number of Pods on the node
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetMaxNodePodNum() const;

                    /**
                     * 设置Maximum number of Pods on the node
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param MaxNodePodNum Maximum number of Pods on the node
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetMaxNodePodNum(const int64_t& _maxNodePodNum);

                    /**
                     * 判断参数 MaxNodePodNum 是否已赋值
                     * @return MaxNodePodNum 是否已赋值
                     */
                    bool MaxNodePodNumHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Cluster Pod CIDR block
                     */
                    std::string m_podCIDR;
                    bool m_podCIDRHasBeenSet;

                    /**
                     * Cluster service CIDR block
                     */
                    std::string m_serviceCIDR;
                    bool m_serviceCIDRHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_k8SVersion;
                    bool m_k8SVersionHasBeenSet;

                    /**
                     * Cluster status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Cluster description
                     */
                    std::string m_clusterDesc;
                    bool m_clusterDescHasBeenSet;

                    /**
                     * Cluster creation time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Edge cluster version
                     */
                    std::string m_edgeClusterVersion;
                    bool m_edgeClusterVersionHasBeenSet;

                    /**
                     * Maximum number of Pods on the node
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxNodePodNum;
                    bool m_maxNodePodNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTER_H_
