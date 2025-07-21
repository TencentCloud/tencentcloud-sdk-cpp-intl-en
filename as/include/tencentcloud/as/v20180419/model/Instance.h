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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_INSTANCE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Instance information
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Auto scaling group ID
                     * @return AutoScalingGroupId Auto scaling group ID
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Auto scaling group ID
                     * @param _autoScalingGroupId Auto scaling group ID
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取Launch configuration ID
                     * @return LaunchConfigurationId Launch configuration ID
                     * 
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置Launch configuration ID
                     * @param _launchConfigurationId Launch configuration ID
                     * 
                     */
                    void SetLaunchConfigurationId(const std::string& _launchConfigurationId);

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     * 
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                    /**
                     * 获取Launch configuration name
                     * @return LaunchConfigurationName Launch configuration name
                     * 
                     */
                    std::string GetLaunchConfigurationName() const;

                    /**
                     * 设置Launch configuration name
                     * @param _launchConfigurationName Launch configuration name
                     * 
                     */
                    void SetLaunchConfigurationName(const std::string& _launchConfigurationName);

                    /**
                     * 判断参数 LaunchConfigurationName 是否已赋值
                     * @return LaunchConfigurationName 是否已赋值
                     * 
                     */
                    bool LaunchConfigurationNameHasBeenSet() const;

                    /**
                     * 获取Lifecycle status. valid values are as follows:.
<Li>IN_SERVICE: running</li>.
<Li>CREATING: specifies the instance is being created.</li>.
<Li>CREATION_FAILED: creation failed.</li>.
<Li>`TERMINATING`: the instance is being terminated.</li>.
<Li>`TERMINATION_FAILED`: the instance fails to be terminated.</li>.
<Li>ATTACHING: binding</li>.
<Li>`ATTACH_FAILED`: the instance fails to be bound.</li>.
<Li>DETACHING: specifies the unbinding is in progress.</li>.
<Li>`DETACH_FAILED`: the instance fails to be unbound.</li>.
<Li>`ATTACHING_LB`: binding to lb</li>.
<Li>DETACHING_LB: the lb is being unbound.</li>.
<Li>`MODIFYING_LB`: the lb is being modified.</li>.
<Li>`STARTING`: the instance is being started up.</li>.
<Li>`START_FAILED`: the instance fails to be started up.</li>.
<Li>`STOPPING`: the instance is being shut down.</li>.
<Li>`STOP_FAILED`: the instance fails to be shut down.</li>.
<Li>`STOPPED`: the instance is shut down.</li>.
<Li>`IN_LAUNCHING_HOOK`: the lifecycle hook is being scaled out.</li>.
<Li>`IN_TERMINATING_HOOK`: the lifecycle hook is being scaled in.</li>.
                     * @return LifeCycleState Lifecycle status. valid values are as follows:.
<Li>IN_SERVICE: running</li>.
<Li>CREATING: specifies the instance is being created.</li>.
<Li>CREATION_FAILED: creation failed.</li>.
<Li>`TERMINATING`: the instance is being terminated.</li>.
<Li>`TERMINATION_FAILED`: the instance fails to be terminated.</li>.
<Li>ATTACHING: binding</li>.
<Li>`ATTACH_FAILED`: the instance fails to be bound.</li>.
<Li>DETACHING: specifies the unbinding is in progress.</li>.
<Li>`DETACH_FAILED`: the instance fails to be unbound.</li>.
<Li>`ATTACHING_LB`: binding to lb</li>.
<Li>DETACHING_LB: the lb is being unbound.</li>.
<Li>`MODIFYING_LB`: the lb is being modified.</li>.
<Li>`STARTING`: the instance is being started up.</li>.
<Li>`START_FAILED`: the instance fails to be started up.</li>.
<Li>`STOPPING`: the instance is being shut down.</li>.
<Li>`STOP_FAILED`: the instance fails to be shut down.</li>.
<Li>`STOPPED`: the instance is shut down.</li>.
<Li>`IN_LAUNCHING_HOOK`: the lifecycle hook is being scaled out.</li>.
<Li>`IN_TERMINATING_HOOK`: the lifecycle hook is being scaled in.</li>.
                     * 
                     */
                    std::string GetLifeCycleState() const;

                    /**
                     * 设置Lifecycle status. valid values are as follows:.
<Li>IN_SERVICE: running</li>.
<Li>CREATING: specifies the instance is being created.</li>.
<Li>CREATION_FAILED: creation failed.</li>.
<Li>`TERMINATING`: the instance is being terminated.</li>.
<Li>`TERMINATION_FAILED`: the instance fails to be terminated.</li>.
<Li>ATTACHING: binding</li>.
<Li>`ATTACH_FAILED`: the instance fails to be bound.</li>.
<Li>DETACHING: specifies the unbinding is in progress.</li>.
<Li>`DETACH_FAILED`: the instance fails to be unbound.</li>.
<Li>`ATTACHING_LB`: binding to lb</li>.
<Li>DETACHING_LB: the lb is being unbound.</li>.
<Li>`MODIFYING_LB`: the lb is being modified.</li>.
<Li>`STARTING`: the instance is being started up.</li>.
<Li>`START_FAILED`: the instance fails to be started up.</li>.
<Li>`STOPPING`: the instance is being shut down.</li>.
<Li>`STOP_FAILED`: the instance fails to be shut down.</li>.
<Li>`STOPPED`: the instance is shut down.</li>.
<Li>`IN_LAUNCHING_HOOK`: the lifecycle hook is being scaled out.</li>.
<Li>`IN_TERMINATING_HOOK`: the lifecycle hook is being scaled in.</li>.
                     * @param _lifeCycleState Lifecycle status. valid values are as follows:.
<Li>IN_SERVICE: running</li>.
<Li>CREATING: specifies the instance is being created.</li>.
<Li>CREATION_FAILED: creation failed.</li>.
<Li>`TERMINATING`: the instance is being terminated.</li>.
<Li>`TERMINATION_FAILED`: the instance fails to be terminated.</li>.
<Li>ATTACHING: binding</li>.
<Li>`ATTACH_FAILED`: the instance fails to be bound.</li>.
<Li>DETACHING: specifies the unbinding is in progress.</li>.
<Li>`DETACH_FAILED`: the instance fails to be unbound.</li>.
<Li>`ATTACHING_LB`: binding to lb</li>.
<Li>DETACHING_LB: the lb is being unbound.</li>.
<Li>`MODIFYING_LB`: the lb is being modified.</li>.
<Li>`STARTING`: the instance is being started up.</li>.
<Li>`START_FAILED`: the instance fails to be started up.</li>.
<Li>`STOPPING`: the instance is being shut down.</li>.
<Li>`STOP_FAILED`: the instance fails to be shut down.</li>.
<Li>`STOPPED`: the instance is shut down.</li>.
<Li>`IN_LAUNCHING_HOOK`: the lifecycle hook is being scaled out.</li>.
<Li>`IN_TERMINATING_HOOK`: the lifecycle hook is being scaled in.</li>.
                     * 
                     */
                    void SetLifeCycleState(const std::string& _lifeCycleState);

                    /**
                     * 判断参数 LifeCycleState 是否已赋值
                     * @return LifeCycleState 是否已赋值
                     * 
                     */
                    bool LifeCycleStateHasBeenSet() const;

                    /**
                     * 获取Health status. valid values are as follows:.
<Li>HEALTHY: the instance is in Healthy status.</li>.
<Li>UNHEALTHY: instance ping unreachable</li>.
<Li>CLB_UNHEALTHY: the instance port listened by clb is unhealthy</li>.
                     * @return HealthStatus Health status. valid values are as follows:.
<Li>HEALTHY: the instance is in Healthy status.</li>.
<Li>UNHEALTHY: instance ping unreachable</li>.
<Li>CLB_UNHEALTHY: the instance port listened by clb is unhealthy</li>.
                     * 
                     */
                    std::string GetHealthStatus() const;

                    /**
                     * 设置Health status. valid values are as follows:.
<Li>HEALTHY: the instance is in Healthy status.</li>.
<Li>UNHEALTHY: instance ping unreachable</li>.
<Li>CLB_UNHEALTHY: the instance port listened by clb is unhealthy</li>.
                     * @param _healthStatus Health status. valid values are as follows:.
<Li>HEALTHY: the instance is in Healthy status.</li>.
<Li>UNHEALTHY: instance ping unreachable</li>.
<Li>CLB_UNHEALTHY: the instance port listened by clb is unhealthy</li>.
                     * 
                     */
                    void SetHealthStatus(const std::string& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取Whether to add scale-in protection
                     * @return ProtectedFromScaleIn Whether to add scale-in protection
                     * 
                     */
                    bool GetProtectedFromScaleIn() const;

                    /**
                     * 设置Whether to add scale-in protection
                     * @param _protectedFromScaleIn Whether to add scale-in protection
                     * 
                     */
                    void SetProtectedFromScaleIn(const bool& _protectedFromScaleIn);

                    /**
                     * 判断参数 ProtectedFromScaleIn 是否已赋值
                     * @return ProtectedFromScaleIn 是否已赋值
                     * 
                     */
                    bool ProtectedFromScaleInHasBeenSet() const;

                    /**
                     * 获取Availability zone
                     * @return Zone Availability zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone
                     * @param _zone Availability zone
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Creation type. Value range: AUTO_CREATION, MANUAL_ATTACHING.
                     * @return CreationType Creation type. Value range: AUTO_CREATION, MANUAL_ATTACHING.
                     * 
                     */
                    std::string GetCreationType() const;

                    /**
                     * 设置Creation type. Value range: AUTO_CREATION, MANUAL_ATTACHING.
                     * @param _creationType Creation type. Value range: AUTO_CREATION, MANUAL_ATTACHING.
                     * 
                     */
                    void SetCreationType(const std::string& _creationType);

                    /**
                     * 判断参数 CreationType 是否已赋值
                     * @return CreationType 是否已赋值
                     * 
                     */
                    bool CreationTypeHasBeenSet() const;

                    /**
                     * 获取Instance join time is displayed in a format that conforms to the ISO8601 standard and uses UTC time.
                     * @return AddTime Instance join time is displayed in a format that conforms to the ISO8601 standard and uses UTC time.
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Instance join time is displayed in a format that conforms to the ISO8601 standard and uses UTC time.
                     * @param _addTime Instance join time is displayed in a format that conforms to the ISO8601 standard and uses UTC time.
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Instance type
                     * @return InstanceType Instance type
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type
                     * @param _instanceType Instance type
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Version number
                     * @return VersionNumber Version number
                     * 
                     */
                    int64_t GetVersionNumber() const;

                    /**
                     * 设置Version number
                     * @param _versionNumber Version number
                     * 
                     */
                    void SetVersionNumber(const int64_t& _versionNumber);

                    /**
                     * 判断参数 VersionNumber 是否已赋值
                     * @return VersionNumber 是否已赋值
                     * 
                     */
                    bool VersionNumberHasBeenSet() const;

                    /**
                     * 获取Auto scaling group name
                     * @return AutoScalingGroupName Auto scaling group name
                     * 
                     */
                    std::string GetAutoScalingGroupName() const;

                    /**
                     * 设置Auto scaling group name
                     * @param _autoScalingGroupName Auto scaling group name
                     * 
                     */
                    void SetAutoScalingGroupName(const std::string& _autoScalingGroupName);

                    /**
                     * 判断参数 AutoScalingGroupName 是否已赋值
                     * @return AutoScalingGroupName 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupNameHasBeenSet() const;

                    /**
                     * 获取Preheat status. valid values are as follows:.
<Li>WAITING_ENTER_WARMUP: specifies the instance is waiting to enter preheating.</li>.
<Li>`NO_NEED_WARMUP`: warming up is not required.</li>.
<Li>IN_WARMUP: preheating.</li>.
<Li>AFTER_WARMUP: indicates the preheating is completed.</li>.
                     * @return WarmupStatus Preheat status. valid values are as follows:.
<Li>WAITING_ENTER_WARMUP: specifies the instance is waiting to enter preheating.</li>.
<Li>`NO_NEED_WARMUP`: warming up is not required.</li>.
<Li>IN_WARMUP: preheating.</li>.
<Li>AFTER_WARMUP: indicates the preheating is completed.</li>.
                     * 
                     */
                    std::string GetWarmupStatus() const;

                    /**
                     * 设置Preheat status. valid values are as follows:.
<Li>WAITING_ENTER_WARMUP: specifies the instance is waiting to enter preheating.</li>.
<Li>`NO_NEED_WARMUP`: warming up is not required.</li>.
<Li>IN_WARMUP: preheating.</li>.
<Li>AFTER_WARMUP: indicates the preheating is completed.</li>.
                     * @param _warmupStatus Preheat status. valid values are as follows:.
<Li>WAITING_ENTER_WARMUP: specifies the instance is waiting to enter preheating.</li>.
<Li>`NO_NEED_WARMUP`: warming up is not required.</li>.
<Li>IN_WARMUP: preheating.</li>.
<Li>AFTER_WARMUP: indicates the preheating is completed.</li>.
                     * 
                     */
                    void SetWarmupStatus(const std::string& _warmupStatus);

                    /**
                     * 判断参数 WarmupStatus 是否已赋值
                     * @return WarmupStatus 是否已赋值
                     * 
                     */
                    bool WarmupStatusHasBeenSet() const;

                    /**
                     * 获取Placement group ID. Only one can be specified.
                     * @return DisasterRecoverGroupIds Placement group ID. Only one can be specified.
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置Placement group ID. Only one can be specified.
                     * @param _disasterRecoverGroupIds Placement group ID. Only one can be specified.
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Auto scaling group ID
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Launch configuration ID
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * Launch configuration name
                     */
                    std::string m_launchConfigurationName;
                    bool m_launchConfigurationNameHasBeenSet;

                    /**
                     * Lifecycle status. valid values are as follows:.
<Li>IN_SERVICE: running</li>.
<Li>CREATING: specifies the instance is being created.</li>.
<Li>CREATION_FAILED: creation failed.</li>.
<Li>`TERMINATING`: the instance is being terminated.</li>.
<Li>`TERMINATION_FAILED`: the instance fails to be terminated.</li>.
<Li>ATTACHING: binding</li>.
<Li>`ATTACH_FAILED`: the instance fails to be bound.</li>.
<Li>DETACHING: specifies the unbinding is in progress.</li>.
<Li>`DETACH_FAILED`: the instance fails to be unbound.</li>.
<Li>`ATTACHING_LB`: binding to lb</li>.
<Li>DETACHING_LB: the lb is being unbound.</li>.
<Li>`MODIFYING_LB`: the lb is being modified.</li>.
<Li>`STARTING`: the instance is being started up.</li>.
<Li>`START_FAILED`: the instance fails to be started up.</li>.
<Li>`STOPPING`: the instance is being shut down.</li>.
<Li>`STOP_FAILED`: the instance fails to be shut down.</li>.
<Li>`STOPPED`: the instance is shut down.</li>.
<Li>`IN_LAUNCHING_HOOK`: the lifecycle hook is being scaled out.</li>.
<Li>`IN_TERMINATING_HOOK`: the lifecycle hook is being scaled in.</li>.
                     */
                    std::string m_lifeCycleState;
                    bool m_lifeCycleStateHasBeenSet;

                    /**
                     * Health status. valid values are as follows:.
<Li>HEALTHY: the instance is in Healthy status.</li>.
<Li>UNHEALTHY: instance ping unreachable</li>.
<Li>CLB_UNHEALTHY: the instance port listened by clb is unhealthy</li>.
                     */
                    std::string m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * Whether to add scale-in protection
                     */
                    bool m_protectedFromScaleIn;
                    bool m_protectedFromScaleInHasBeenSet;

                    /**
                     * Availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Creation type. Value range: AUTO_CREATION, MANUAL_ATTACHING.
                     */
                    std::string m_creationType;
                    bool m_creationTypeHasBeenSet;

                    /**
                     * Instance join time is displayed in a format that conforms to the ISO8601 standard and uses UTC time.
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Instance type
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Version number
                     */
                    int64_t m_versionNumber;
                    bool m_versionNumberHasBeenSet;

                    /**
                     * Auto scaling group name
                     */
                    std::string m_autoScalingGroupName;
                    bool m_autoScalingGroupNameHasBeenSet;

                    /**
                     * Preheat status. valid values are as follows:.
<Li>WAITING_ENTER_WARMUP: specifies the instance is waiting to enter preheating.</li>.
<Li>`NO_NEED_WARMUP`: warming up is not required.</li>.
<Li>IN_WARMUP: preheating.</li>.
<Li>AFTER_WARMUP: indicates the preheating is completed.</li>.
                     */
                    std::string m_warmupStatus;
                    bool m_warmupStatusHasBeenSet;

                    /**
                     * Placement group ID. Only one can be specified.
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_INSTANCE_H_
