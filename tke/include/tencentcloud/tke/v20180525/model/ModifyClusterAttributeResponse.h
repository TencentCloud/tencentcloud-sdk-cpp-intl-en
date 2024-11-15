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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERATTRIBUTERESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERATTRIBUTERESPONSE_H_

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
                * ModifyClusterAttribute response structure.
                */
                class ModifyClusterAttributeResponse : public AbstractModel
                {
                public:
                    ModifyClusterAttributeResponse();
                    ~ModifyClusterAttributeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Project of the Cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project of the Cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Cluster name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClusterName Cluster name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Cluster description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClusterDesc Cluster description
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterDesc() const;

                    /**
                     * 判断参数 ClusterDesc 是否已赋值
                     * @return ClusterDesc 是否已赋值
                     * 
                     */
                    bool ClusterDescHasBeenSet() const;

                    /**
                     * 获取Cluster specification
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ClusterLevel Cluster specification
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterLevel() const;

                    /**
                     * 判断参数 ClusterLevel 是否已赋值
                     * @return ClusterLevel 是否已赋值
                     * 
                     */
                    bool ClusterLevelHasBeenSet() const;

                    /**
                     * 获取Auto-upgrades cluster specification
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return AutoUpgradeClusterLevel Auto-upgrades cluster specification
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    AutoUpgradeClusterLevel GetAutoUpgradeClusterLevel() const;

                    /**
                     * 判断参数 AutoUpgradeClusterLevel 是否已赋值
                     * @return AutoUpgradeClusterLevel 是否已赋值
                     * 
                     */
                    bool AutoUpgradeClusterLevelHasBeenSet() const;

                    /**
                     * 获取Whether to enable qGPU Sharing
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return QGPUShareEnable Whether to enable qGPU Sharing
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetQGPUShareEnable() const;

                    /**
                     * 判断参数 QGPUShareEnable 是否已赋值
                     * @return QGPUShareEnable 是否已赋值
                     * 
                     */
                    bool QGPUShareEnableHasBeenSet() const;

                    /**
                     * 获取Cluster attributes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return ClusterProperty Cluster attributes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    ClusterProperty GetClusterProperty() const;

                    /**
                     * 判断参数 ClusterProperty 是否已赋值
                     * @return ClusterProperty 是否已赋值
                     * 
                     */
                    bool ClusterPropertyHasBeenSet() const;

                private:

                    /**
                     * Project of the Cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Cluster name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Cluster description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterDesc;
                    bool m_clusterDescHasBeenSet;

                    /**
                     * Cluster specification
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterLevel;
                    bool m_clusterLevelHasBeenSet;

                    /**
                     * Auto-upgrades cluster specification
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    AutoUpgradeClusterLevel m_autoUpgradeClusterLevel;
                    bool m_autoUpgradeClusterLevelHasBeenSet;

                    /**
                     * Whether to enable qGPU Sharing
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool m_qGPUShareEnable;
                    bool m_qGPUShareEnableHasBeenSet;

                    /**
                     * Cluster attributes
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    ClusterProperty m_clusterProperty;
                    bool m_clusterPropertyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERATTRIBUTERESPONSE_H_
