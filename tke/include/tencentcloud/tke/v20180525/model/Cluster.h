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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTER_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ClusterNetworkSettings.h>
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
                * Cluster information struct
                */
                class Cluster : public AbstractModel
                {
                public:
                    Cluster();
                    ~Cluster() = default;
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
                     * 获取Cluster description
                     * @return ClusterDescription Cluster description
                     */
                    std::string GetClusterDescription() const;

                    /**
                     * 设置Cluster description
                     * @param ClusterDescription Cluster description
                     */
                    void SetClusterDescription(const std::string& _clusterDescription);

                    /**
                     * 判断参数 ClusterDescription 是否已赋值
                     * @return ClusterDescription 是否已赋值
                     */
                    bool ClusterDescriptionHasBeenSet() const;

                    /**
                     * 获取Cluster version. The default value is 1.10.5.
                     * @return ClusterVersion Cluster version. The default value is 1.10.5.
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置Cluster version. The default value is 1.10.5.
                     * @param ClusterVersion Cluster version. The default value is 1.10.5.
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取Cluster operating system. centOS 7.2x86_64 or ubuntu 16.04.1 LTSx86_64. Default value: ubuntu 16.04.1 LTSx86_64
                     * @return ClusterOs Cluster operating system. centOS 7.2x86_64 or ubuntu 16.04.1 LTSx86_64. Default value: ubuntu 16.04.1 LTSx86_64
                     */
                    std::string GetClusterOs() const;

                    /**
                     * 设置Cluster operating system. centOS 7.2x86_64 or ubuntu 16.04.1 LTSx86_64. Default value: ubuntu 16.04.1 LTSx86_64
                     * @param ClusterOs Cluster operating system. centOS 7.2x86_64 or ubuntu 16.04.1 LTSx86_64. Default value: ubuntu 16.04.1 LTSx86_64
                     */
                    void SetClusterOs(const std::string& _clusterOs);

                    /**
                     * 判断参数 ClusterOs 是否已赋值
                     * @return ClusterOs 是否已赋值
                     */
                    bool ClusterOsHasBeenSet() const;

                    /**
                     * 获取Cluster type. Managed cluster: MANAGED_CLUSTER; Self-deployed cluster: INDEPENDENT_CLUSTER.
                     * @return ClusterType Cluster type. Managed cluster: MANAGED_CLUSTER; Self-deployed cluster: INDEPENDENT_CLUSTER.
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Cluster type. Managed cluster: MANAGED_CLUSTER; Self-deployed cluster: INDEPENDENT_CLUSTER.
                     * @param ClusterType Cluster type. Managed cluster: MANAGED_CLUSTER; Self-deployed cluster: INDEPENDENT_CLUSTER.
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Cluster network-related parameters
                     * @return ClusterNetworkSettings Cluster network-related parameters
                     */
                    ClusterNetworkSettings GetClusterNetworkSettings() const;

                    /**
                     * 设置Cluster network-related parameters
                     * @param ClusterNetworkSettings Cluster network-related parameters
                     */
                    void SetClusterNetworkSettings(const ClusterNetworkSettings& _clusterNetworkSettings);

                    /**
                     * 判断参数 ClusterNetworkSettings 是否已赋值
                     * @return ClusterNetworkSettings 是否已赋值
                     */
                    bool ClusterNetworkSettingsHasBeenSet() const;

                    /**
                     * 获取Current number of nodes in the cluster
                     * @return ClusterNodeNum Current number of nodes in the cluster
                     */
                    uint64_t GetClusterNodeNum() const;

                    /**
                     * 设置Current number of nodes in the cluster
                     * @param ClusterNodeNum Current number of nodes in the cluster
                     */
                    void SetClusterNodeNum(const uint64_t& _clusterNodeNum);

                    /**
                     * 判断参数 ClusterNodeNum 是否已赋值
                     * @return ClusterNodeNum 是否已赋值
                     */
                    bool ClusterNodeNumHasBeenSet() const;

                    /**
                     * 获取ID of the project to which the cluster belongs
                     * @return ProjectId ID of the project to which the cluster belongs
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置ID of the project to which the cluster belongs
                     * @param ProjectId ID of the project to which the cluster belongs
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Tag description list.
                     * @return TagSpecification Tag description list.
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置Tag description list.
                     * @param TagSpecification Tag description list.
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取Cluster status (`Running`, `Creating`, `Idling` or `Abnormal`)
                     * @return ClusterStatus Cluster status (`Running`, `Creating`, `Idling` or `Abnormal`)
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置Cluster status (`Running`, `Creating`, `Idling` or `Abnormal`)
                     * @param ClusterStatus Cluster status (`Running`, `Creating`, `Idling` or `Abnormal`)
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取Cluster attributes (including a map of different cluster attributes, with attribute fields including NodeNameType (lan-ip mode and hostname mode, with lan-ip mode as default))
                     * @return Property Cluster attributes (including a map of different cluster attributes, with attribute fields including NodeNameType (lan-ip mode and hostname mode, with lan-ip mode as default))
                     */
                    std::string GetProperty() const;

                    /**
                     * 设置Cluster attributes (including a map of different cluster attributes, with attribute fields including NodeNameType (lan-ip mode and hostname mode, with lan-ip mode as default))
                     * @param Property Cluster attributes (including a map of different cluster attributes, with attribute fields including NodeNameType (lan-ip mode and hostname mode, with lan-ip mode as default))
                     */
                    void SetProperty(const std::string& _property);

                    /**
                     * 判断参数 Property 是否已赋值
                     * @return Property 是否已赋值
                     */
                    bool PropertyHasBeenSet() const;

                    /**
                     * 获取Number of primary nodes currently in the cluster
                     * @return ClusterMaterNodeNum Number of primary nodes currently in the cluster
                     */
                    uint64_t GetClusterMaterNodeNum() const;

                    /**
                     * 设置Number of primary nodes currently in the cluster
                     * @param ClusterMaterNodeNum Number of primary nodes currently in the cluster
                     */
                    void SetClusterMaterNodeNum(const uint64_t& _clusterMaterNodeNum);

                    /**
                     * 判断参数 ClusterMaterNodeNum 是否已赋值
                     * @return ClusterMaterNodeNum 是否已赋值
                     */
                    bool ClusterMaterNodeNumHasBeenSet() const;

                    /**
                     * 获取ID of the image used by the cluster
Note: this field may return null, indicating that no valid value is obtained.
                     * @return ImageId ID of the image used by the cluster
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置ID of the image used by the cluster
Note: this field may return null, indicating that no valid value is obtained.
                     * @param ImageId ID of the image used by the cluster
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取Container image tag
Note: This field may return null, indicating that no valid value was found.
                     * @return OsCustomizeType Container image tag
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetOsCustomizeType() const;

                    /**
                     * 设置Container image tag
Note: This field may return null, indicating that no valid value was found.
                     * @param OsCustomizeType Container image tag
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetOsCustomizeType(const std::string& _osCustomizeType);

                    /**
                     * 判断参数 OsCustomizeType 是否已赋值
                     * @return OsCustomizeType 是否已赋值
                     */
                    bool OsCustomizeTypeHasBeenSet() const;

                    /**
                     * 获取Runtime environment of the cluster. Values can be `docker` or `containerd`.
Note: this field may return null, indicating that no valid value is obtained.
                     * @return ContainerRuntime Runtime environment of the cluster. Values can be `docker` or `containerd`.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string GetContainerRuntime() const;

                    /**
                     * 设置Runtime environment of the cluster. Values can be `docker` or `containerd`.
Note: this field may return null, indicating that no valid value is obtained.
                     * @param ContainerRuntime Runtime environment of the cluster. Values can be `docker` or `containerd`.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetContainerRuntime(const std::string& _containerRuntime);

                    /**
                     * 判断参数 ContainerRuntime 是否已赋值
                     * @return ContainerRuntime 是否已赋值
                     */
                    bool ContainerRuntimeHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: this field may return null, indicating that no valid value is obtained.
                     * @return CreatedTime Creation time
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time
Note: this field may return null, indicating that no valid value is obtained.
                     * @param CreatedTime Creation time
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Whether Deletion Protection is enabled
Note: this field may return null, indicating that no valid value is obtained.
                     * @return DeletionProtection Whether Deletion Protection is enabled
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置Whether Deletion Protection is enabled
Note: this field may return null, indicating that no valid value is obtained.
                     * @param DeletionProtection Whether Deletion Protection is enabled
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取Specifies whether the cluster supports external nodes.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return EnableExternalNode Specifies whether the cluster supports external nodes.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool GetEnableExternalNode() const;

                    /**
                     * 设置Specifies whether the cluster supports external nodes.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param EnableExternalNode Specifies whether the cluster supports external nodes.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetEnableExternalNode(const bool& _enableExternalNode);

                    /**
                     * 判断参数 EnableExternalNode 是否已赋值
                     * @return EnableExternalNode 是否已赋值
                     */
                    bool EnableExternalNodeHasBeenSet() const;

                    /**
                     * 获取Cluster models. It’s valid for managed clusters.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ClusterLevel Cluster models. It’s valid for managed clusters.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetClusterLevel() const;

                    /**
                     * 设置Cluster models. It’s valid for managed clusters.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ClusterLevel Cluster models. It’s valid for managed clusters.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetClusterLevel(const std::string& _clusterLevel);

                    /**
                     * 判断参数 ClusterLevel 是否已赋值
                     * @return ClusterLevel 是否已赋值
                     */
                    bool ClusterLevelHasBeenSet() const;

                    /**
                     * 获取The target cluster model for auto-upgrade
Note: this field may return null, indicating that no valid value is obtained.
                     * @return AutoUpgradeClusterLevel The target cluster model for auto-upgrade
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    bool GetAutoUpgradeClusterLevel() const;

                    /**
                     * 设置The target cluster model for auto-upgrade
Note: this field may return null, indicating that no valid value is obtained.
                     * @param AutoUpgradeClusterLevel The target cluster model for auto-upgrade
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetAutoUpgradeClusterLevel(const bool& _autoUpgradeClusterLevel);

                    /**
                     * 判断参数 AutoUpgradeClusterLevel 是否已赋值
                     * @return AutoUpgradeClusterLevel 是否已赋值
                     */
                    bool AutoUpgradeClusterLevelHasBeenSet() const;

                    /**
                     * 获取Whether to enable qGPU Sharing
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return QGPUShareEnable Whether to enable qGPU Sharing
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetQGPUShareEnable() const;

                    /**
                     * 设置Whether to enable qGPU Sharing
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param QGPUShareEnable Whether to enable qGPU Sharing
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetQGPUShareEnable(const bool& _qGPUShareEnable);

                    /**
                     * 判断参数 QGPUShareEnable 是否已赋值
                     * @return QGPUShareEnable 是否已赋值
                     */
                    bool QGPUShareEnableHasBeenSet() const;

                    /**
                     * 获取Runtime version
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RuntimeVersion Runtime version
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetRuntimeVersion() const;

                    /**
                     * 设置Runtime version
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param RuntimeVersion Runtime version
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetRuntimeVersion(const std::string& _runtimeVersion);

                    /**
                     * 判断参数 RuntimeVersion 是否已赋值
                     * @return RuntimeVersion 是否已赋值
                     */
                    bool RuntimeVersionHasBeenSet() const;

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
                     * Cluster description
                     */
                    std::string m_clusterDescription;
                    bool m_clusterDescriptionHasBeenSet;

                    /**
                     * Cluster version. The default value is 1.10.5.
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * Cluster operating system. centOS 7.2x86_64 or ubuntu 16.04.1 LTSx86_64. Default value: ubuntu 16.04.1 LTSx86_64
                     */
                    std::string m_clusterOs;
                    bool m_clusterOsHasBeenSet;

                    /**
                     * Cluster type. Managed cluster: MANAGED_CLUSTER; Self-deployed cluster: INDEPENDENT_CLUSTER.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Cluster network-related parameters
                     */
                    ClusterNetworkSettings m_clusterNetworkSettings;
                    bool m_clusterNetworkSettingsHasBeenSet;

                    /**
                     * Current number of nodes in the cluster
                     */
                    uint64_t m_clusterNodeNum;
                    bool m_clusterNodeNumHasBeenSet;

                    /**
                     * ID of the project to which the cluster belongs
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Tag description list.
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * Cluster status (`Running`, `Creating`, `Idling` or `Abnormal`)
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * Cluster attributes (including a map of different cluster attributes, with attribute fields including NodeNameType (lan-ip mode and hostname mode, with lan-ip mode as default))
                     */
                    std::string m_property;
                    bool m_propertyHasBeenSet;

                    /**
                     * Number of primary nodes currently in the cluster
                     */
                    uint64_t m_clusterMaterNodeNum;
                    bool m_clusterMaterNodeNumHasBeenSet;

                    /**
                     * ID of the image used by the cluster
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Container image tag
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_osCustomizeType;
                    bool m_osCustomizeTypeHasBeenSet;

                    /**
                     * Runtime environment of the cluster. Values can be `docker` or `containerd`.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string m_containerRuntime;
                    bool m_containerRuntimeHasBeenSet;

                    /**
                     * Creation time
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Whether Deletion Protection is enabled
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * Specifies whether the cluster supports external nodes.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool m_enableExternalNode;
                    bool m_enableExternalNodeHasBeenSet;

                    /**
                     * Cluster models. It’s valid for managed clusters.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterLevel;
                    bool m_clusterLevelHasBeenSet;

                    /**
                     * The target cluster model for auto-upgrade
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    bool m_autoUpgradeClusterLevel;
                    bool m_autoUpgradeClusterLevelHasBeenSet;

                    /**
                     * Whether to enable qGPU Sharing
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_qGPUShareEnable;
                    bool m_qGPUShareEnableHasBeenSet;

                    /**
                     * Runtime version
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_runtimeVersion;
                    bool m_runtimeVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTER_H_
