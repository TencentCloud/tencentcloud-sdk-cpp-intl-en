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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATETKEEDGECLUSTERREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATETKEEDGECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/EdgeClusterAdvancedSettings.h>
#include <tencentcloud/tke/v20180525/model/EdgeClusterPublicLB.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateTKEEdgeCluster request structure.
                */
                class CreateTKEEdgeClusterRequest : public AbstractModel
                {
                public:
                    CreateTKEEdgeClusterRequest();
                    ~CreateTKEEdgeClusterRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Cluster advanced settings
                     * @return ClusterAdvancedSettings Cluster advanced settings
                     */
                    EdgeClusterAdvancedSettings GetClusterAdvancedSettings() const;

                    /**
                     * 设置Cluster advanced settings
                     * @param ClusterAdvancedSettings Cluster advanced settings
                     */
                    void SetClusterAdvancedSettings(const EdgeClusterAdvancedSettings& _clusterAdvancedSettings);

                    /**
                     * 判断参数 ClusterAdvancedSettings 是否已赋值
                     * @return ClusterAdvancedSettings 是否已赋值
                     */
                    bool ClusterAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取Maximum number of Pods on the node
                     * @return MaxNodePodNum Maximum number of Pods on the node
                     */
                    int64_t GetMaxNodePodNum() const;

                    /**
                     * 设置Maximum number of Pods on the node
                     * @param MaxNodePodNum Maximum number of Pods on the node
                     */
                    void SetMaxNodePodNum(const int64_t& _maxNodePodNum);

                    /**
                     * 判断参数 MaxNodePodNum 是否已赋值
                     * @return MaxNodePodNum 是否已赋值
                     */
                    bool MaxNodePodNumHasBeenSet() const;

                    /**
                     * 获取Public LB of the TKE Edge cluster
                     * @return PublicLB Public LB of the TKE Edge cluster
                     */
                    EdgeClusterPublicLB GetPublicLB() const;

                    /**
                     * 设置Public LB of the TKE Edge cluster
                     * @param PublicLB Public LB of the TKE Edge cluster
                     */
                    void SetPublicLB(const EdgeClusterPublicLB& _publicLB);

                    /**
                     * 判断参数 PublicLB 是否已赋值
                     * @return PublicLB 是否已赋值
                     */
                    bool PublicLBHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_k8SVersion;
                    bool m_k8SVersionHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

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
                     * Cluster description
                     */
                    std::string m_clusterDesc;
                    bool m_clusterDescHasBeenSet;

                    /**
                     * Cluster advanced settings
                     */
                    EdgeClusterAdvancedSettings m_clusterAdvancedSettings;
                    bool m_clusterAdvancedSettingsHasBeenSet;

                    /**
                     * Maximum number of Pods on the node
                     */
                    int64_t m_maxNodePodNum;
                    bool m_maxNodePodNumHasBeenSet;

                    /**
                     * Public LB of the TKE Edge cluster
                     */
                    EdgeClusterPublicLB m_publicLB;
                    bool m_publicLBHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATETKEEDGECLUSTERREQUEST_H_
