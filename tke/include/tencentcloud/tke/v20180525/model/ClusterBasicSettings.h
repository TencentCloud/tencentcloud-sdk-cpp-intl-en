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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERBASICSETTINGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERBASICSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/TagSpecification.h>
#include <tencentcloud/tke/v20180525/model/AutoUpgradeClusterLevel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Describes the basic configuration information of a cluster
                */
                class ClusterBasicSettings : public AbstractModel
                {
                public:
                    ClusterBasicSettings();
                    ~ClusterBasicSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster operating system. Public image (enter the image ID) and custom image (enter the image name) are supported. For details, see https://intl.cloud.tencent.com/document/product/457/68289?from_cn_redirect=1
                     * @return ClusterOs Cluster operating system. Public image (enter the image ID) and custom image (enter the image name) are supported. For details, see https://intl.cloud.tencent.com/document/product/457/68289?from_cn_redirect=1
                     */
                    std::string GetClusterOs() const;

                    /**
                     * 设置Cluster operating system. Public image (enter the image ID) and custom image (enter the image name) are supported. For details, see https://intl.cloud.tencent.com/document/product/457/68289?from_cn_redirect=1
                     * @param ClusterOs Cluster operating system. Public image (enter the image ID) and custom image (enter the image name) are supported. For details, see https://intl.cloud.tencent.com/document/product/457/68289?from_cn_redirect=1
                     */
                    void SetClusterOs(const std::string& _clusterOs);

                    /**
                     * 判断参数 ClusterOs 是否已赋值
                     * @return ClusterOs 是否已赋值
                     */
                    bool ClusterOsHasBeenSet() const;

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
                     * 获取VPC ID, in the format of vpc-xxx, which is required when you create an empty managed cluster.
                     * @return VpcId VPC ID, in the format of vpc-xxx, which is required when you create an empty managed cluster.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID, in the format of vpc-xxx, which is required when you create an empty managed cluster.
                     * @param VpcId VPC ID, in the format of vpc-xxx, which is required when you create an empty managed cluster.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取ID of the project to which the new resources in the cluster belong.
                     * @return ProjectId ID of the project to which the new resources in the cluster belong.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置ID of the project to which the new resources in the cluster belong.
                     * @param ProjectId ID of the project to which the new resources in the cluster belong.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Tag description list. This parameter is used to bind a tag to a resource instance. Currently, a tag can only be bound to cluster instances.
                     * @return TagSpecification Tag description list. This parameter is used to bind a tag to a resource instance. Currently, a tag can only be bound to cluster instances.
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置Tag description list. This parameter is used to bind a tag to a resource instance. Currently, a tag can only be bound to cluster instances.
                     * @param TagSpecification Tag description list. This parameter is used to bind a tag to a resource instance. Currently, a tag can only be bound to cluster instances.
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
                     * @return OsCustomizeType Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
                     */
                    std::string GetOsCustomizeType() const;

                    /**
                     * 设置Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
                     * @param OsCustomizeType Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
                     */
                    void SetOsCustomizeType(const std::string& _osCustomizeType);

                    /**
                     * 判断参数 OsCustomizeType 是否已赋值
                     * @return OsCustomizeType 是否已赋值
                     */
                    bool OsCustomizeTypeHasBeenSet() const;

                    /**
                     * 获取Whether to enable the node’s default security group (default: `No`, Alpha feature)
                     * @return NeedWorkSecurityGroup Whether to enable the node’s default security group (default: `No`, Alpha feature)
                     */
                    bool GetNeedWorkSecurityGroup() const;

                    /**
                     * 设置Whether to enable the node’s default security group (default: `No`, Alpha feature)
                     * @param NeedWorkSecurityGroup Whether to enable the node’s default security group (default: `No`, Alpha feature)
                     */
                    void SetNeedWorkSecurityGroup(const bool& _needWorkSecurityGroup);

                    /**
                     * 判断参数 NeedWorkSecurityGroup 是否已赋值
                     * @return NeedWorkSecurityGroup 是否已赋值
                     */
                    bool NeedWorkSecurityGroupHasBeenSet() const;

                    /**
                     * 获取When the Cilium Overlay add-on is selected, TKE will take two IPs from the subnet to create the private network CLB.
                     * @return SubnetId When the Cilium Overlay add-on is selected, TKE will take two IPs from the subnet to create the private network CLB.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置When the Cilium Overlay add-on is selected, TKE will take two IPs from the subnet to create the private network CLB.
                     * @param SubnetId When the Cilium Overlay add-on is selected, TKE will take two IPs from the subnet to create the private network CLB.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Cluster specifications available for managed clusters
                     * @return ClusterLevel Cluster specifications available for managed clusters
                     */
                    std::string GetClusterLevel() const;

                    /**
                     * 设置Cluster specifications available for managed clusters
                     * @param ClusterLevel Cluster specifications available for managed clusters
                     */
                    void SetClusterLevel(const std::string& _clusterLevel);

                    /**
                     * 判断参数 ClusterLevel 是否已赋值
                     * @return ClusterLevel 是否已赋值
                     */
                    bool ClusterLevelHasBeenSet() const;

                    /**
                     * 获取Auto cluster upgrade for managed clusters
                     * @return AutoUpgradeClusterLevel Auto cluster upgrade for managed clusters
                     */
                    AutoUpgradeClusterLevel GetAutoUpgradeClusterLevel() const;

                    /**
                     * 设置Auto cluster upgrade for managed clusters
                     * @param AutoUpgradeClusterLevel Auto cluster upgrade for managed clusters
                     */
                    void SetAutoUpgradeClusterLevel(const AutoUpgradeClusterLevel& _autoUpgradeClusterLevel);

                    /**
                     * 判断参数 AutoUpgradeClusterLevel 是否已赋值
                     * @return AutoUpgradeClusterLevel 是否已赋值
                     */
                    bool AutoUpgradeClusterLevelHasBeenSet() const;

                private:

                    /**
                     * Cluster operating system. Public image (enter the image ID) and custom image (enter the image name) are supported. For details, see https://intl.cloud.tencent.com/document/product/457/68289?from_cn_redirect=1
                     */
                    std::string m_clusterOs;
                    bool m_clusterOsHasBeenSet;

                    /**
                     * Cluster version. The default value is 1.10.5.
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

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
                     * VPC ID, in the format of vpc-xxx, which is required when you create an empty managed cluster.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * ID of the project to which the new resources in the cluster belong.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Tag description list. This parameter is used to bind a tag to a resource instance. Currently, a tag can only be bound to cluster instances.
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
                     */
                    std::string m_osCustomizeType;
                    bool m_osCustomizeTypeHasBeenSet;

                    /**
                     * Whether to enable the node’s default security group (default: `No`, Alpha feature)
                     */
                    bool m_needWorkSecurityGroup;
                    bool m_needWorkSecurityGroupHasBeenSet;

                    /**
                     * When the Cilium Overlay add-on is selected, TKE will take two IPs from the subnet to create the private network CLB.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Cluster specifications available for managed clusters
                     */
                    std::string m_clusterLevel;
                    bool m_clusterLevelHasBeenSet;

                    /**
                     * Auto cluster upgrade for managed clusters
                     */
                    AutoUpgradeClusterLevel m_autoUpgradeClusterLevel;
                    bool m_autoUpgradeClusterLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERBASICSETTINGS_H_
