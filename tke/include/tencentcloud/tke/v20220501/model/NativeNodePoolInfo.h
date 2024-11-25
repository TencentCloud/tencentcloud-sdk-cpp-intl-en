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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_NATIVENODEPOOLINFO_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_NATIVENODEPOOLINFO_H_

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
#include <tencentcloud/tke/v20220501/model/InternetAccessible.h>
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
                * Native node pool information
                */
                class NativeNodePoolInfo : public AbstractModel
                {
                public:
                    NativeNodePoolInfo();
                    ~NativeNodePoolInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scaling configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Scaling Scaling configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    MachineSetScaling GetScaling() const;

                    /**
                     * 设置Scaling configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _scaling Scaling configuration
Note: This field may return "null", indicating that no valid value can be obtained.
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
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return SecurityGroupIds Security group list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _securityGroupIds Security group list
Note: This field may return "null", indicating that no valid value can be obtained.
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
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return UpgradeSettings Automatic upgrade configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    MachineUpgradeSettings GetUpgradeSettings() const;

                    /**
                     * 设置Automatic upgrade configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _upgradeSettings Automatic upgrade configuration
Note: This field may return "null", indicating that no valid value can be obtained.
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
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return AutoRepair Whether to enable self-healing capability
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetAutoRepair() const;

                    /**
                     * 设置Whether to enable self-healing capability
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _autoRepair Whether to enable self-healing capability
Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取Node billing type
                     * @return InstanceChargeType Node billing type
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Node billing type
                     * @param _instanceChargeType Node billing type
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
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return InstanceChargePrepaid Billing configuration of monthly subscription models
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置Billing configuration of monthly subscription models
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _instanceChargePrepaid Billing configuration of monthly subscription models
Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取Key ID list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return KeyIds Key ID list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置Key ID list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _keyIds Key ID list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                    /**
                     * 获取Machine system configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Management Machine system configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    ManagementConfig GetManagement() const;

                    /**
                     * 设置Machine system configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _management Machine system configuration
Note: This field may return "null", indicating that no valid value can be obtained.
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
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return HealthCheckPolicyName Fault self-healing rule name
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetHealthCheckPolicyName() const;

                    /**
                     * 设置Fault self-healing rule name
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _healthCheckPolicyName Fault self-healing rule name
Note: This field may return "null", indicating that no valid value can be obtained.
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
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return HostNamePattern hostname pattern string of native node pools
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetHostNamePattern() const;

                    /**
                     * 设置hostname pattern string of native node pools
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _hostNamePattern hostname pattern string of native node pools
Note: This field may return "null", indicating that no valid value can be obtained.
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
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return KubeletArgs kubelet custom parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKubeletArgs() const;

                    /**
                     * 设置kubelet custom parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _kubeletArgs kubelet custom parameters
Note: This field may return "null", indicating that no valid value can be obtained.
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
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Lifecycle Predefined script
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    LifecycleConfig GetLifecycle() const;

                    /**
                     * 设置Predefined script
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _lifecycle Predefined script
Note: This field may return "null", indicating that no valid value can be obtained.
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
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return RuntimeRootDir Runtime root directory
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRuntimeRootDir() const;

                    /**
                     * 设置Runtime root directory
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _runtimeRootDir Runtime root directory
Note: This field may return "null", indicating that no valid value can be obtained.
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
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return EnableAutoscaling Whether to enable Auto Scaling (AS)
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetEnableAutoscaling() const;

                    /**
                     * 设置Whether to enable Auto Scaling (AS)
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _enableAutoscaling Whether to enable Auto Scaling (AS)
Note: This field may return "null", indicating that no valid value can be obtained.
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
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Replicas Desired node count
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置Desired node count
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _replicas Desired node count
Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取Number of ready machines
                     * @return ReadyReplicas Number of ready machines
                     * 
                     */
                    int64_t GetReadyReplicas() const;

                    /**
                     * 设置Number of ready machines
                     * @param _readyReplicas Number of ready machines
                     * 
                     */
                    void SetReadyReplicas(const int64_t& _readyReplicas);

                    /**
                     * 判断参数 ReadyReplicas 是否已赋值
                     * @return ReadyReplicas 是否已赋值
                     * 
                     */
                    bool ReadyReplicasHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return InternetAccessible Public network bandwidth configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置Public network bandwidth configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _internetAccessible Public network bandwidth configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取Data disk of native node pools
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return DataDisks Data disk of native node pools
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置Data disk of native node pools
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _dataDisks Data disk of native node pools
Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取Native node models: Native, NativeCVM
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return MachineType Native node models: Native, NativeCVM
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Native node models: Native, NativeCVM
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _machineType Native node models: Native, NativeCVM
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                private:

                    /**
                     * Scaling configuration
Note: This field may return "null", indicating that no valid value can be obtained.
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
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Automatic upgrade configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    MachineUpgradeSettings m_upgradeSettings;
                    bool m_upgradeSettingsHasBeenSet;

                    /**
                     * Whether to enable self-healing capability
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    bool m_autoRepair;
                    bool m_autoRepairHasBeenSet;

                    /**
                     * Node billing type
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Billing configuration of monthly subscription models
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * System disk configuration
                     */
                    Disk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Key ID list
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                    /**
                     * Machine system configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    ManagementConfig m_management;
                    bool m_managementHasBeenSet;

                    /**
                     * Fault self-healing rule name
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_healthCheckPolicyName;
                    bool m_healthCheckPolicyNameHasBeenSet;

                    /**
                     * hostname pattern string of native node pools
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_hostNamePattern;
                    bool m_hostNamePatternHasBeenSet;

                    /**
                     * kubelet custom parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_kubeletArgs;
                    bool m_kubeletArgsHasBeenSet;

                    /**
                     * Predefined script
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    LifecycleConfig m_lifecycle;
                    bool m_lifecycleHasBeenSet;

                    /**
                     * Runtime root directory
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_runtimeRootDir;
                    bool m_runtimeRootDirHasBeenSet;

                    /**
                     * Whether to enable Auto Scaling (AS)
Note: This field may return "null", indicating that no valid value can be obtained.
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
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * Number of ready machines
                     */
                    int64_t m_readyReplicas;
                    bool m_readyReplicasHasBeenSet;

                    /**
                     * Public network bandwidth configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * Data disk of native node pools
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * Native node models: Native, NativeCVM
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_NATIVENODEPOOLINFO_H_
