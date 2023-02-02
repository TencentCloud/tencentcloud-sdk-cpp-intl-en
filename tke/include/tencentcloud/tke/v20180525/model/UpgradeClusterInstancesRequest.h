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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADECLUSTERINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADECLUSTERINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/UpgradeNodeResetParam.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * UpgradeClusterInstances request structure.
                */
                class UpgradeClusterInstancesRequest : public AbstractModel
                {
                public:
                    UpgradeClusterInstancesRequest();
                    ~UpgradeClusterInstancesRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取create: starting an upgrade task
pause: pausing the task
resume: continuing the task
abort: stopping the task
                     * @return Operation create: starting an upgrade task
pause: pausing the task
resume: continuing the task
abort: stopping the task
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置create: starting an upgrade task
pause: pausing the task
resume: continuing the task
abort: stopping the task
                     * @param Operation create: starting an upgrade task
pause: pausing the task
resume: continuing the task
abort: stopping the task
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Upgrade type. It’s only required when `Operation` is set as `create`.
reset: the reinstallation and upgrade of major version
hot: the hot upgrade of minor version
major: in-place upgrade of major version
                     * @return UpgradeType Upgrade type. It’s only required when `Operation` is set as `create`.
reset: the reinstallation and upgrade of major version
hot: the hot upgrade of minor version
major: in-place upgrade of major version
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置Upgrade type. It’s only required when `Operation` is set as `create`.
reset: the reinstallation and upgrade of major version
hot: the hot upgrade of minor version
major: in-place upgrade of major version
                     * @param UpgradeType Upgrade type. It’s only required when `Operation` is set as `create`.
reset: the reinstallation and upgrade of major version
hot: the hot upgrade of minor version
major: in-place upgrade of major version
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     */
                    bool UpgradeTypeHasBeenSet() const;

                    /**
                     * 获取List of nodes that need to upgrade
                     * @return InstanceIds List of nodes that need to upgrade
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置List of nodes that need to upgrade
                     * @param InstanceIds List of nodes that need to upgrade
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取This parameter is used when the node joins the cluster again. Refer to the API of creating one or more cluster nodes.
                     * @return ResetParam This parameter is used when the node joins the cluster again. Refer to the API of creating one or more cluster nodes.
                     */
                    UpgradeNodeResetParam GetResetParam() const;

                    /**
                     * 设置This parameter is used when the node joins the cluster again. Refer to the API of creating one or more cluster nodes.
                     * @param ResetParam This parameter is used when the node joins the cluster again. Refer to the API of creating one or more cluster nodes.
                     */
                    void SetResetParam(const UpgradeNodeResetParam& _resetParam);

                    /**
                     * 判断参数 ResetParam 是否已赋值
                     * @return ResetParam 是否已赋值
                     */
                    bool ResetParamHasBeenSet() const;

                    /**
                     * 获取Whether to skip the pre-upgrade check of the node
                     * @return SkipPreCheck Whether to skip the pre-upgrade check of the node
                     */
                    bool GetSkipPreCheck() const;

                    /**
                     * 设置Whether to skip the pre-upgrade check of the node
                     * @param SkipPreCheck Whether to skip the pre-upgrade check of the node
                     */
                    void SetSkipPreCheck(const bool& _skipPreCheck);

                    /**
                     * 判断参数 SkipPreCheck 是否已赋值
                     * @return SkipPreCheck 是否已赋值
                     */
                    bool SkipPreCheckHasBeenSet() const;

                    /**
                     * 获取The maximum tolerable proportion of unavailable pods
                     * @return MaxNotReadyPercent The maximum tolerable proportion of unavailable pods
                     */
                    double GetMaxNotReadyPercent() const;

                    /**
                     * 设置The maximum tolerable proportion of unavailable pods
                     * @param MaxNotReadyPercent The maximum tolerable proportion of unavailable pods
                     */
                    void SetMaxNotReadyPercent(const double& _maxNotReadyPercent);

                    /**
                     * 判断参数 MaxNotReadyPercent 是否已赋值
                     * @return MaxNotReadyPercent 是否已赋值
                     */
                    bool MaxNotReadyPercentHasBeenSet() const;

                    /**
                     * 获取Whether to upgrade node runtime. Values: `true`, `false` (default).
                     * @return UpgradeRunTime Whether to upgrade node runtime. Values: `true`, `false` (default).
                     */
                    bool GetUpgradeRunTime() const;

                    /**
                     * 设置Whether to upgrade node runtime. Values: `true`, `false` (default).
                     * @param UpgradeRunTime Whether to upgrade node runtime. Values: `true`, `false` (default).
                     */
                    void SetUpgradeRunTime(const bool& _upgradeRunTime);

                    /**
                     * 判断参数 UpgradeRunTime 是否已赋值
                     * @return UpgradeRunTime 是否已赋值
                     */
                    bool UpgradeRunTimeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * create: starting an upgrade task
pause: pausing the task
resume: continuing the task
abort: stopping the task
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Upgrade type. It’s only required when `Operation` is set as `create`.
reset: the reinstallation and upgrade of major version
hot: the hot upgrade of minor version
major: in-place upgrade of major version
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * List of nodes that need to upgrade
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * This parameter is used when the node joins the cluster again. Refer to the API of creating one or more cluster nodes.
                     */
                    UpgradeNodeResetParam m_resetParam;
                    bool m_resetParamHasBeenSet;

                    /**
                     * Whether to skip the pre-upgrade check of the node
                     */
                    bool m_skipPreCheck;
                    bool m_skipPreCheckHasBeenSet;

                    /**
                     * The maximum tolerable proportion of unavailable pods
                     */
                    double m_maxNotReadyPercent;
                    bool m_maxNotReadyPercentHasBeenSet;

                    /**
                     * Whether to upgrade node runtime. Values: `true`, `false` (default).
                     */
                    bool m_upgradeRunTime;
                    bool m_upgradeRunTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADECLUSTERINSTANCESREQUEST_H_
