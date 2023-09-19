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
#include <tencentcloud/tke/v20180525/model/EdgeClusterAdvancedSettings.h>
#include <tencentcloud/tke/v20180525/model/TagSpecification.h>


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
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param _clusterName Cluster name
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param _vpcId VPC ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Cluster Pod CIDR block
                     * @return PodCIDR Cluster Pod CIDR block
                     * 
                     */
                    std::string GetPodCIDR() const;

                    /**
                     * 设置Cluster Pod CIDR block
                     * @param _podCIDR Cluster Pod CIDR block
                     * 
                     */
                    void SetPodCIDR(const std::string& _podCIDR);

                    /**
                     * 判断参数 PodCIDR 是否已赋值
                     * @return PodCIDR 是否已赋值
                     * 
                     */
                    bool PodCIDRHasBeenSet() const;

                    /**
                     * 获取Cluster service CIDR block
                     * @return ServiceCIDR Cluster service CIDR block
                     * 
                     */
                    std::string GetServiceCIDR() const;

                    /**
                     * 设置Cluster service CIDR block
                     * @param _serviceCIDR Cluster service CIDR block
                     * 
                     */
                    void SetServiceCIDR(const std::string& _serviceCIDR);

                    /**
                     * 判断参数 ServiceCIDR 是否已赋值
                     * @return ServiceCIDR 是否已赋值
                     * 
                     */
                    bool ServiceCIDRHasBeenSet() const;

                    /**
                     * 获取
                     * @return K8SVersion 
                     * 
                     */
                    std::string GetK8SVersion() const;

                    /**
                     * 设置
                     * @param _k8SVersion 
                     * 
                     */
                    void SetK8SVersion(const std::string& _k8SVersion);

                    /**
                     * 判断参数 K8SVersion 是否已赋值
                     * @return K8SVersion 是否已赋值
                     * 
                     */
                    bool K8SVersionHasBeenSet() const;

                    /**
                     * 获取Cluster status
                     * @return Status Cluster status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Cluster status
                     * @param _status Cluster status
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Cluster description
                     * @return ClusterDesc Cluster description
                     * 
                     */
                    std::string GetClusterDesc() const;

                    /**
                     * 设置Cluster description
                     * @param _clusterDesc Cluster description
                     * 
                     */
                    void SetClusterDesc(const std::string& _clusterDesc);

                    /**
                     * 判断参数 ClusterDesc 是否已赋值
                     * @return ClusterDesc 是否已赋值
                     * 
                     */
                    bool ClusterDescHasBeenSet() const;

                    /**
                     * 获取Cluster creation time
                     * @return CreatedTime Cluster creation time
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Cluster creation time
                     * @param _createdTime Cluster creation time
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Edge cluster version
                     * @return EdgeClusterVersion Edge cluster version
                     * 
                     */
                    std::string GetEdgeClusterVersion() const;

                    /**
                     * 设置Edge cluster version
                     * @param _edgeClusterVersion Edge cluster version
                     * 
                     */
                    void SetEdgeClusterVersion(const std::string& _edgeClusterVersion);

                    /**
                     * 判断参数 EdgeClusterVersion 是否已赋值
                     * @return EdgeClusterVersion 是否已赋值
                     * 
                     */
                    bool EdgeClusterVersionHasBeenSet() const;

                    /**
                     * 获取Maximum number of Pods on the node
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return MaxNodePodNum Maximum number of Pods on the node
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxNodePodNum() const;

                    /**
                     * 设置Maximum number of Pods on the node
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _maxNodePodNum Maximum number of Pods on the node
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxNodePodNum(const int64_t& _maxNodePodNum);

                    /**
                     * 判断参数 MaxNodePodNum 是否已赋值
                     * @return MaxNodePodNum 是否已赋值
                     * 
                     */
                    bool MaxNodePodNumHasBeenSet() const;

                    /**
                     * 获取Cluster advanced settings
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ClusterAdvancedSettings Cluster advanced settings
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    EdgeClusterAdvancedSettings GetClusterAdvancedSettings() const;

                    /**
                     * 设置Cluster advanced settings
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _clusterAdvancedSettings Cluster advanced settings
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClusterAdvancedSettings(const EdgeClusterAdvancedSettings& _clusterAdvancedSettings);

                    /**
                     * 判断参数 ClusterAdvancedSettings 是否已赋值
                     * @return ClusterAdvancedSettings 是否已赋值
                     * 
                     */
                    bool ClusterAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取TKE edge cluster level
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Level TKE edge cluster level
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置TKE edge cluster level
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _level TKE edge cluster level
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Whether to support auto upgrade of cluster spec level
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return AutoUpgradeClusterLevel Whether to support auto upgrade of cluster spec level
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAutoUpgradeClusterLevel() const;

                    /**
                     * 设置Whether to support auto upgrade of cluster spec level
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _autoUpgradeClusterLevel Whether to support auto upgrade of cluster spec level
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoUpgradeClusterLevel(const bool& _autoUpgradeClusterLevel);

                    /**
                     * 判断参数 AutoUpgradeClusterLevel 是否已赋值
                     * @return AutoUpgradeClusterLevel 是否已赋值
                     * 
                     */
                    bool AutoUpgradeClusterLevelHasBeenSet() const;

                    /**
                     * 获取Cluster billing mode. Valid values: `POSTPAID_BY_HOUR`, `PREPAID`
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ChargeType Cluster billing mode. Valid values: `POSTPAID_BY_HOUR`, `PREPAID`
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Cluster billing mode. Valid values: `POSTPAID_BY_HOUR`, `PREPAID`
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _chargeType Cluster billing mode. Valid values: `POSTPAID_BY_HOUR`, `PREPAID`
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取Edge cluster component version 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EdgeVersion Edge cluster component version 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEdgeVersion() const;

                    /**
                     * 设置Edge cluster component version 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _edgeVersion Edge cluster component version 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEdgeVersion(const std::string& _edgeVersion);

                    /**
                     * 判断参数 EdgeVersion 是否已赋值
                     * @return EdgeVersion 是否已赋值
                     * 
                     */
                    bool EdgeVersionHasBeenSet() const;

                    /**
                     * 获取u200dTags bound with the cluster
Note: u200dThis field may return `null`, indicating that no valid values can be obtained.
                     * @return TagSpecification u200dTags bound with the cluster
Note: u200dThis field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    TagSpecification GetTagSpecification() const;

                    /**
                     * 设置u200dTags bound with the cluster
Note: u200dThis field may return `null`, indicating that no valid values can be obtained.
                     * @param _tagSpecification u200dTags bound with the cluster
Note: u200dThis field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagSpecification(const TagSpecification& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

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

                    /**
                     * Cluster advanced settings
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    EdgeClusterAdvancedSettings m_clusterAdvancedSettings;
                    bool m_clusterAdvancedSettingsHasBeenSet;

                    /**
                     * TKE edge cluster level
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Whether to support auto upgrade of cluster spec level
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_autoUpgradeClusterLevel;
                    bool m_autoUpgradeClusterLevelHasBeenSet;

                    /**
                     * Cluster billing mode. Valid values: `POSTPAID_BY_HOUR`, `PREPAID`
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Edge cluster component version 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_edgeVersion;
                    bool m_edgeVersionHasBeenSet;

                    /**
                     * u200dTags bound with the cluster
Note: u200dThis field may return `null`, indicating that no valid values can be obtained.
                     */
                    TagSpecification m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTER_H_
