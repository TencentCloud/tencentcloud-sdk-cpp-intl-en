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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/AutoUpgradeClusterLevel.h>
#include <tencentcloud/tke/v20180525/model/ClusterProperty.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ModifyClusterAttribute request structure.
                */
                class ModifyClusterAttributeRequest : public AbstractModel
                {
                public:
                    ModifyClusterAttributeRequest();
                    ~ModifyClusterAttributeRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Project of the Cluster
                     * @return ProjectId Project of the Cluster
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project of the Cluster
                     * @param _projectId Project of the Cluster
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

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
                     * 获取Cluster specification
                     * @return ClusterLevel Cluster specification
                     * 
                     */
                    std::string GetClusterLevel() const;

                    /**
                     * 设置Cluster specification
                     * @param _clusterLevel Cluster specification
                     * 
                     */
                    void SetClusterLevel(const std::string& _clusterLevel);

                    /**
                     * 判断参数 ClusterLevel 是否已赋值
                     * @return ClusterLevel 是否已赋值
                     * 
                     */
                    bool ClusterLevelHasBeenSet() const;

                    /**
                     * 获取Auto-upgrades cluster specification
                     * @return AutoUpgradeClusterLevel Auto-upgrades cluster specification
                     * 
                     */
                    AutoUpgradeClusterLevel GetAutoUpgradeClusterLevel() const;

                    /**
                     * 设置Auto-upgrades cluster specification
                     * @param _autoUpgradeClusterLevel Auto-upgrades cluster specification
                     * 
                     */
                    void SetAutoUpgradeClusterLevel(const AutoUpgradeClusterLevel& _autoUpgradeClusterLevel);

                    /**
                     * 判断参数 AutoUpgradeClusterLevel 是否已赋值
                     * @return AutoUpgradeClusterLevel 是否已赋值
                     * 
                     */
                    bool AutoUpgradeClusterLevelHasBeenSet() const;

                    /**
                     * 获取Whether to enable qGPU Sharing
                     * @return QGPUShareEnable Whether to enable qGPU Sharing
                     * 
                     */
                    bool GetQGPUShareEnable() const;

                    /**
                     * 设置Whether to enable qGPU Sharing
                     * @param _qGPUShareEnable Whether to enable qGPU Sharing
                     * 
                     */
                    void SetQGPUShareEnable(const bool& _qGPUShareEnable);

                    /**
                     * 判断参数 QGPUShareEnable 是否已赋值
                     * @return QGPUShareEnable 是否已赋值
                     * 
                     */
                    bool QGPUShareEnableHasBeenSet() const;

                    /**
                     * 获取Cluster attributes
                     * @return ClusterProperty Cluster attributes
                     * 
                     */
                    ClusterProperty GetClusterProperty() const;

                    /**
                     * 设置Cluster attributes
                     * @param _clusterProperty Cluster attributes
                     * 
                     */
                    void SetClusterProperty(const ClusterProperty& _clusterProperty);

                    /**
                     * 判断参数 ClusterProperty 是否已赋值
                     * @return ClusterProperty 是否已赋值
                     * 
                     */
                    bool ClusterPropertyHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Project of the Cluster
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Cluster description
                     */
                    std::string m_clusterDesc;
                    bool m_clusterDescHasBeenSet;

                    /**
                     * Cluster specification
                     */
                    std::string m_clusterLevel;
                    bool m_clusterLevelHasBeenSet;

                    /**
                     * Auto-upgrades cluster specification
                     */
                    AutoUpgradeClusterLevel m_autoUpgradeClusterLevel;
                    bool m_autoUpgradeClusterLevelHasBeenSet;

                    /**
                     * Whether to enable qGPU Sharing
                     */
                    bool m_qGPUShareEnable;
                    bool m_qGPUShareEnableHasBeenSet;

                    /**
                     * Cluster attributes
                     */
                    ClusterProperty m_clusterProperty;
                    bool m_clusterPropertyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERATTRIBUTEREQUEST_H_
