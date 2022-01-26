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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ClusterCIDRSettings.h>
#include <tencentcloud/tke/v20180525/model/RunInstancesForNode.h>
#include <tencentcloud/tke/v20180525/model/ClusterBasicSettings.h>
#include <tencentcloud/tke/v20180525/model/ClusterAdvancedSettings.h>
#include <tencentcloud/tke/v20180525/model/InstanceAdvancedSettings.h>
#include <tencentcloud/tke/v20180525/model/ExistedInstancesForNode.h>
#include <tencentcloud/tke/v20180525/model/InstanceDataDiskMountSetting.h>
#include <tencentcloud/tke/v20180525/model/ExtensionAddon.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateCluster request structure.
                */
                class CreateClusterRequest : public AbstractModel
                {
                public:
                    CreateClusterRequest();
                    ~CreateClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Container networking configuration information for the cluster
                     * @return ClusterCIDRSettings Container networking configuration information for the cluster
                     */
                    ClusterCIDRSettings GetClusterCIDRSettings() const;

                    /**
                     * 设置Container networking configuration information for the cluster
                     * @param ClusterCIDRSettings Container networking configuration information for the cluster
                     */
                    void SetClusterCIDRSettings(const ClusterCIDRSettings& _clusterCIDRSettings);

                    /**
                     * 判断参数 ClusterCIDRSettings 是否已赋值
                     * @return ClusterCIDRSettings 是否已赋值
                     */
                    bool ClusterCIDRSettingsHasBeenSet() const;

                    /**
                     * 获取Cluster type. Managed cluster: MANAGED_CLUSTER; self-deployed cluster: INDEPENDENT_CLUSTER.
                     * @return ClusterType Cluster type. Managed cluster: MANAGED_CLUSTER; self-deployed cluster: INDEPENDENT_CLUSTER.
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Cluster type. Managed cluster: MANAGED_CLUSTER; self-deployed cluster: INDEPENDENT_CLUSTER.
                     * @param ClusterType Cluster type. Managed cluster: MANAGED_CLUSTER; self-deployed cluster: INDEPENDENT_CLUSTER.
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Pass-through parameter for CVM creation in the format of a JSON string. For more information, see the API for [creating a CVM instance](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1).
                     * @return RunInstancesForNode Pass-through parameter for CVM creation in the format of a JSON string. For more information, see the API for [creating a CVM instance](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1).
                     */
                    std::vector<RunInstancesForNode> GetRunInstancesForNode() const;

                    /**
                     * 设置Pass-through parameter for CVM creation in the format of a JSON string. For more information, see the API for [creating a CVM instance](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1).
                     * @param RunInstancesForNode Pass-through parameter for CVM creation in the format of a JSON string. For more information, see the API for [creating a CVM instance](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1).
                     */
                    void SetRunInstancesForNode(const std::vector<RunInstancesForNode>& _runInstancesForNode);

                    /**
                     * 判断参数 RunInstancesForNode 是否已赋值
                     * @return RunInstancesForNode 是否已赋值
                     */
                    bool RunInstancesForNodeHasBeenSet() const;

                    /**
                     * 获取Basic configuration information of the cluster
                     * @return ClusterBasicSettings Basic configuration information of the cluster
                     */
                    ClusterBasicSettings GetClusterBasicSettings() const;

                    /**
                     * 设置Basic configuration information of the cluster
                     * @param ClusterBasicSettings Basic configuration information of the cluster
                     */
                    void SetClusterBasicSettings(const ClusterBasicSettings& _clusterBasicSettings);

                    /**
                     * 判断参数 ClusterBasicSettings 是否已赋值
                     * @return ClusterBasicSettings 是否已赋值
                     */
                    bool ClusterBasicSettingsHasBeenSet() const;

                    /**
                     * 获取Advanced configuration information of the cluster
                     * @return ClusterAdvancedSettings Advanced configuration information of the cluster
                     */
                    ClusterAdvancedSettings GetClusterAdvancedSettings() const;

                    /**
                     * 设置Advanced configuration information of the cluster
                     * @param ClusterAdvancedSettings Advanced configuration information of the cluster
                     */
                    void SetClusterAdvancedSettings(const ClusterAdvancedSettings& _clusterAdvancedSettings);

                    /**
                     * 判断参数 ClusterAdvancedSettings 是否已赋值
                     * @return ClusterAdvancedSettings 是否已赋值
                     */
                    bool ClusterAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取Advanced configuration information of the node
                     * @return InstanceAdvancedSettings Advanced configuration information of the node
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置Advanced configuration information of the node
                     * @param InstanceAdvancedSettings Advanced configuration information of the node
                     */
                    void SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings);

                    /**
                     * 判断参数 InstanceAdvancedSettings 是否已赋值
                     * @return InstanceAdvancedSettings 是否已赋值
                     */
                    bool InstanceAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取The configuration information for existing instances. All instances must be in the same VPC. Up to 100 instances are allowed in one VPC. Spot instances are not supported.
                     * @return ExistedInstancesForNode The configuration information for existing instances. All instances must be in the same VPC. Up to 100 instances are allowed in one VPC. Spot instances are not supported.
                     */
                    std::vector<ExistedInstancesForNode> GetExistedInstancesForNode() const;

                    /**
                     * 设置The configuration information for existing instances. All instances must be in the same VPC. Up to 100 instances are allowed in one VPC. Spot instances are not supported.
                     * @param ExistedInstancesForNode The configuration information for existing instances. All instances must be in the same VPC. Up to 100 instances are allowed in one VPC. Spot instances are not supported.
                     */
                    void SetExistedInstancesForNode(const std::vector<ExistedInstancesForNode>& _existedInstancesForNode);

                    /**
                     * 判断参数 ExistedInstancesForNode 是否已赋值
                     * @return ExistedInstancesForNode 是否已赋值
                     */
                    bool ExistedInstancesForNodeHasBeenSet() const;

                    /**
                     * 获取CVM type and the corresponding data disk mounting configuration information.
                     * @return InstanceDataDiskMountSettings CVM type and the corresponding data disk mounting configuration information.
                     */
                    std::vector<InstanceDataDiskMountSetting> GetInstanceDataDiskMountSettings() const;

                    /**
                     * 设置CVM type and the corresponding data disk mounting configuration information.
                     * @param InstanceDataDiskMountSettings CVM type and the corresponding data disk mounting configuration information.
                     */
                    void SetInstanceDataDiskMountSettings(const std::vector<InstanceDataDiskMountSetting>& _instanceDataDiskMountSettings);

                    /**
                     * 判断参数 InstanceDataDiskMountSettings 是否已赋值
                     * @return InstanceDataDiskMountSettings 是否已赋值
                     */
                    bool InstanceDataDiskMountSettingsHasBeenSet() const;

                    /**
                     * 获取Information of the add-on to be installed
                     * @return ExtensionAddons Information of the add-on to be installed
                     */
                    std::vector<ExtensionAddon> GetExtensionAddons() const;

                    /**
                     * 设置Information of the add-on to be installed
                     * @param ExtensionAddons Information of the add-on to be installed
                     */
                    void SetExtensionAddons(const std::vector<ExtensionAddon>& _extensionAddons);

                    /**
                     * 判断参数 ExtensionAddons 是否已赋值
                     * @return ExtensionAddons 是否已赋值
                     */
                    bool ExtensionAddonsHasBeenSet() const;

                private:

                    /**
                     * Container networking configuration information for the cluster
                     */
                    ClusterCIDRSettings m_clusterCIDRSettings;
                    bool m_clusterCIDRSettingsHasBeenSet;

                    /**
                     * Cluster type. Managed cluster: MANAGED_CLUSTER; self-deployed cluster: INDEPENDENT_CLUSTER.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Pass-through parameter for CVM creation in the format of a JSON string. For more information, see the API for [creating a CVM instance](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1).
                     */
                    std::vector<RunInstancesForNode> m_runInstancesForNode;
                    bool m_runInstancesForNodeHasBeenSet;

                    /**
                     * Basic configuration information of the cluster
                     */
                    ClusterBasicSettings m_clusterBasicSettings;
                    bool m_clusterBasicSettingsHasBeenSet;

                    /**
                     * Advanced configuration information of the cluster
                     */
                    ClusterAdvancedSettings m_clusterAdvancedSettings;
                    bool m_clusterAdvancedSettingsHasBeenSet;

                    /**
                     * Advanced configuration information of the node
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

                    /**
                     * The configuration information for existing instances. All instances must be in the same VPC. Up to 100 instances are allowed in one VPC. Spot instances are not supported.
                     */
                    std::vector<ExistedInstancesForNode> m_existedInstancesForNode;
                    bool m_existedInstancesForNodeHasBeenSet;

                    /**
                     * CVM type and the corresponding data disk mounting configuration information.
                     */
                    std::vector<InstanceDataDiskMountSetting> m_instanceDataDiskMountSettings;
                    bool m_instanceDataDiskMountSettingsHasBeenSet;

                    /**
                     * Information of the add-on to be installed
                     */
                    std::vector<ExtensionAddon> m_extensionAddons;
                    bool m_extensionAddonsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERREQUEST_H_
