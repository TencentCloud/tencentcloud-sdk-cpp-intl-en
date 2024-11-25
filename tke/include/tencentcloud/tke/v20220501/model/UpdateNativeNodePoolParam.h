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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_UPDATENATIVENODEPOOLPARAM_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_UPDATENATIVENODEPOOLPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/MachineSetScaling.h>
#include <tencentcloud/tke/v20220501/model/MachineUpgradeSettings.h>
#include <tencentcloud/tke/v20220501/model/InstanceChargePrepaid.h>
#include <tencentcloud/tke/v20220501/model/Disk.h>
#include <tencentcloud/tke/v20220501/model/ManagementConfig.h>
#include <tencentcloud/tke/v20220501/model/LifecycleConfig.h>
#include <tencentcloud/tke/v20220501/model/DataDisk.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Modify native node pool parameters
                */
                class UpdateNativeNodePoolParam : public AbstractModel
                {
                public:
                    UpdateNativeNodePoolParam();
                    ~UpdateNativeNodePoolParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scaling configuration
                     * @return Scaling Scaling configuration
                     * 
                     */
                    MachineSetScaling GetScaling() const;

                    /**
                     * 设置Scaling configuration
                     * @param _scaling Scaling configuration
                     * 
                     */
                    void SetScaling(const MachineSetScaling& _scaling);

                    /**
                     * 判断参数 Scaling 是否已赋值
                     * @return Scaling 是否已赋值
                     * 
                     */
                    bool ScalingHasBeenSet() const;

                    /**
                     * 获取Subnet list
                     * @return SubnetIds Subnet list
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置Subnet list
                     * @param _subnetIds Subnet list
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取Security group list
                     * @return SecurityGroupIds Security group list
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group list
                     * @param _securityGroupIds Security group list
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Automatic upgrade configuration
                     * @return UpgradeSettings Automatic upgrade configuration
                     * 
                     */
                    MachineUpgradeSettings GetUpgradeSettings() const;

                    /**
                     * 设置Automatic upgrade configuration
                     * @param _upgradeSettings Automatic upgrade configuration
                     * 
                     */
                    void SetUpgradeSettings(const MachineUpgradeSettings& _upgradeSettings);

                    /**
                     * 判断参数 UpgradeSettings 是否已赋值
                     * @return UpgradeSettings 是否已赋值
                     * 
                     */
                    bool UpgradeSettingsHasBeenSet() const;

                    /**
                     * 获取Whether to enable self-healing capability
                     * @return AutoRepair Whether to enable self-healing capability
                     * 
                     */
                    bool GetAutoRepair() const;

                    /**
                     * 设置Whether to enable self-healing capability
                     * @param _autoRepair Whether to enable self-healing capability
                     * 
                     */
                    void SetAutoRepair(const bool& _autoRepair);

                    /**
                     * 判断参数 AutoRepair 是否已赋值
                     * @return AutoRepair 是否已赋值
                     * 
                     */
                    bool AutoRepairHasBeenSet() const;

                    /**
                     * 获取Change the node billing type
Currently, only pay-as-you-go to monthly subscription is supported:
- PREPAID

                     * @return InstanceChargeType Change the node billing type
Currently, only pay-as-you-go to monthly subscription is supported:
- PREPAID

                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Change the node billing type
Currently, only pay-as-you-go to monthly subscription is supported:
- PREPAID

                     * @param _instanceChargeType Change the node billing type
Currently, only pay-as-you-go to monthly subscription is supported:
- PREPAID

                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Billing configuration of monthly subscription models
                     * @return InstanceChargePrepaid Billing configuration of monthly subscription models
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置Billing configuration of monthly subscription models
                     * @param _instanceChargePrepaid Billing configuration of monthly subscription models
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取System disk configuration
                     * @return SystemDisk System disk configuration
                     * 
                     */
                    Disk GetSystemDisk() const;

                    /**
                     * 设置System disk configuration
                     * @param _systemDisk System disk configuration
                     * 
                     */
                    void SetSystemDisk(const Disk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取Machine system configuration
                     * @return Management Machine system configuration
                     * 
                     */
                    ManagementConfig GetManagement() const;

                    /**
                     * 设置Machine system configuration
                     * @param _management Machine system configuration
                     * 
                     */
                    void SetManagement(const ManagementConfig& _management);

                    /**
                     * 判断参数 Management 是否已赋值
                     * @return Management 是否已赋值
                     * 
                     */
                    bool ManagementHasBeenSet() const;

                    /**
                     * 获取Fault self-healing rule name
                     * @return HealthCheckPolicyName Fault self-healing rule name
                     * 
                     */
                    std::string GetHealthCheckPolicyName() const;

                    /**
                     * 设置Fault self-healing rule name
                     * @param _healthCheckPolicyName Fault self-healing rule name
                     * 
                     */
                    void SetHealthCheckPolicyName(const std::string& _healthCheckPolicyName);

                    /**
                     * 判断参数 HealthCheckPolicyName 是否已赋值
                     * @return HealthCheckPolicyName 是否已赋值
                     * 
                     */
                    bool HealthCheckPolicyNameHasBeenSet() const;

                    /**
                     * 获取hostname pattern string of native node pools
                     * @return HostNamePattern hostname pattern string of native node pools
                     * 
                     */
                    std::string GetHostNamePattern() const;

                    /**
                     * 设置hostname pattern string of native node pools
                     * @param _hostNamePattern hostname pattern string of native node pools
                     * 
                     */
                    void SetHostNamePattern(const std::string& _hostNamePattern);

                    /**
                     * 判断参数 HostNamePattern 是否已赋值
                     * @return HostNamePattern 是否已赋值
                     * 
                     */
                    bool HostNamePatternHasBeenSet() const;

                    /**
                     * 获取kubelet custom parameters
                     * @return KubeletArgs kubelet custom parameters
                     * 
                     */
                    std::vector<std::string> GetKubeletArgs() const;

                    /**
                     * 设置kubelet custom parameters
                     * @param _kubeletArgs kubelet custom parameters
                     * 
                     */
                    void SetKubeletArgs(const std::vector<std::string>& _kubeletArgs);

                    /**
                     * 判断参数 KubeletArgs 是否已赋值
                     * @return KubeletArgs 是否已赋值
                     * 
                     */
                    bool KubeletArgsHasBeenSet() const;

                    /**
                     * 获取Predefined script
                     * @return Lifecycle Predefined script
                     * 
                     */
                    LifecycleConfig GetLifecycle() const;

                    /**
                     * 设置Predefined script
                     * @param _lifecycle Predefined script
                     * 
                     */
                    void SetLifecycle(const LifecycleConfig& _lifecycle);

                    /**
                     * 判断参数 Lifecycle 是否已赋值
                     * @return Lifecycle 是否已赋值
                     * 
                     */
                    bool LifecycleHasBeenSet() const;

                    /**
                     * 获取Runtime root directory
                     * @return RuntimeRootDir Runtime root directory
                     * 
                     */
                    std::string GetRuntimeRootDir() const;

                    /**
                     * 设置Runtime root directory
                     * @param _runtimeRootDir Runtime root directory
                     * 
                     */
                    void SetRuntimeRootDir(const std::string& _runtimeRootDir);

                    /**
                     * 判断参数 RuntimeRootDir 是否已赋值
                     * @return RuntimeRootDir 是否已赋值
                     * 
                     */
                    bool RuntimeRootDirHasBeenSet() const;

                    /**
                     * 获取Whether to enable Auto Scaling (AS)
                     * @return EnableAutoscaling Whether to enable Auto Scaling (AS)
                     * 
                     */
                    bool GetEnableAutoscaling() const;

                    /**
                     * 设置Whether to enable Auto Scaling (AS)
                     * @param _enableAutoscaling Whether to enable Auto Scaling (AS)
                     * 
                     */
                    void SetEnableAutoscaling(const bool& _enableAutoscaling);

                    /**
                     * 判断参数 EnableAutoscaling 是否已赋值
                     * @return EnableAutoscaling 是否已赋值
                     * 
                     */
                    bool EnableAutoscalingHasBeenSet() const;

                    /**
                     * 获取List of models
                     * @return InstanceTypes List of models
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置List of models
                     * @param _instanceTypes List of models
                     * 
                     */
                    void SetInstanceTypes(const std::vector<std::string>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     * 
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取Desired node count
                     * @return Replicas Desired node count
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置Desired node count
                     * @param _replicas Desired node count
                     * 
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取Data disk list
                     * @return DataDisks Data disk list
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置Data disk list
                     * @param _dataDisks Data disk list
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取ssh public key ID array
                     * @return KeyIds ssh public key ID array
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置ssh public key ID array
                     * @param _keyIds ssh public key ID array
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                private:

                    /**
                     * Scaling configuration
                     */
                    MachineSetScaling m_scaling;
                    bool m_scalingHasBeenSet;

                    /**
                     * Subnet list
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * Security group list
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Automatic upgrade configuration
                     */
                    MachineUpgradeSettings m_upgradeSettings;
                    bool m_upgradeSettingsHasBeenSet;

                    /**
                     * Whether to enable self-healing capability
                     */
                    bool m_autoRepair;
                    bool m_autoRepairHasBeenSet;

                    /**
                     * Change the node billing type
Currently, only pay-as-you-go to monthly subscription is supported:
- PREPAID

                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Billing configuration of monthly subscription models
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * System disk configuration
                     */
                    Disk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Machine system configuration
                     */
                    ManagementConfig m_management;
                    bool m_managementHasBeenSet;

                    /**
                     * Fault self-healing rule name
                     */
                    std::string m_healthCheckPolicyName;
                    bool m_healthCheckPolicyNameHasBeenSet;

                    /**
                     * hostname pattern string of native node pools
                     */
                    std::string m_hostNamePattern;
                    bool m_hostNamePatternHasBeenSet;

                    /**
                     * kubelet custom parameters
                     */
                    std::vector<std::string> m_kubeletArgs;
                    bool m_kubeletArgsHasBeenSet;

                    /**
                     * Predefined script
                     */
                    LifecycleConfig m_lifecycle;
                    bool m_lifecycleHasBeenSet;

                    /**
                     * Runtime root directory
                     */
                    std::string m_runtimeRootDir;
                    bool m_runtimeRootDirHasBeenSet;

                    /**
                     * Whether to enable Auto Scaling (AS)
                     */
                    bool m_enableAutoscaling;
                    bool m_enableAutoscalingHasBeenSet;

                    /**
                     * List of models
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * Desired node count
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * Data disk list
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * ssh public key ID array
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_UPDATENATIVENODEPOOLPARAM_H_
