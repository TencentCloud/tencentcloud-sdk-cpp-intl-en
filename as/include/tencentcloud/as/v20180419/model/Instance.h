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
                     * 获取Lifecycle status. Valid values:<br>
<li>`IN_SERVICE`: The instance is running.
<li>`CREATING`: The instance is being created.
<li>`CREATION_FAILED`: The instance fails to be created.
<li>`TERMINATING`: The instance is being terminated.
<li>`TERMINATION_FAILED`: The instance fails to be terminated.
<li>`ATTACHING`: The instance is being bound.
<li>`ATTACH_FAILED`: The instance fails to be bound.
<li>`DETACHING`: The instance is being unbound.
<li>`DETACH_FAILED`: The instance fails to be unbound.
<li>`ATTACHING_LB`: The LB is being bound.
<li>DETACHING_LB: The LB is being unbound.
<li>`MODIFYING_LB`: The LB is being modified.
<li>`STARTING`: The instance is being started up.
<li>`START_FAILED`: The instance fails to be started up.
<li>`STOPPING`: The instance is being shut down.
<li>`STOP_FAILED`: The instance fails to be shut down.
<li>`STOPPED`: The instance is shut down.
<li>`IN_LAUNCHING_HOOK`: The lifecycle hook is being scaled out.
<li>`IN_TERMINATING_HOOK`: The lifecycle hook is being scaled in.
                     * @return LifeCycleState Lifecycle status. Valid values:<br>
<li>`IN_SERVICE`: The instance is running.
<li>`CREATING`: The instance is being created.
<li>`CREATION_FAILED`: The instance fails to be created.
<li>`TERMINATING`: The instance is being terminated.
<li>`TERMINATION_FAILED`: The instance fails to be terminated.
<li>`ATTACHING`: The instance is being bound.
<li>`ATTACH_FAILED`: The instance fails to be bound.
<li>`DETACHING`: The instance is being unbound.
<li>`DETACH_FAILED`: The instance fails to be unbound.
<li>`ATTACHING_LB`: The LB is being bound.
<li>DETACHING_LB: The LB is being unbound.
<li>`MODIFYING_LB`: The LB is being modified.
<li>`STARTING`: The instance is being started up.
<li>`START_FAILED`: The instance fails to be started up.
<li>`STOPPING`: The instance is being shut down.
<li>`STOP_FAILED`: The instance fails to be shut down.
<li>`STOPPED`: The instance is shut down.
<li>`IN_LAUNCHING_HOOK`: The lifecycle hook is being scaled out.
<li>`IN_TERMINATING_HOOK`: The lifecycle hook is being scaled in.
                     * 
                     */
                    std::string GetLifeCycleState() const;

                    /**
                     * 设置Lifecycle status. Valid values:<br>
<li>`IN_SERVICE`: The instance is running.
<li>`CREATING`: The instance is being created.
<li>`CREATION_FAILED`: The instance fails to be created.
<li>`TERMINATING`: The instance is being terminated.
<li>`TERMINATION_FAILED`: The instance fails to be terminated.
<li>`ATTACHING`: The instance is being bound.
<li>`ATTACH_FAILED`: The instance fails to be bound.
<li>`DETACHING`: The instance is being unbound.
<li>`DETACH_FAILED`: The instance fails to be unbound.
<li>`ATTACHING_LB`: The LB is being bound.
<li>DETACHING_LB: The LB is being unbound.
<li>`MODIFYING_LB`: The LB is being modified.
<li>`STARTING`: The instance is being started up.
<li>`START_FAILED`: The instance fails to be started up.
<li>`STOPPING`: The instance is being shut down.
<li>`STOP_FAILED`: The instance fails to be shut down.
<li>`STOPPED`: The instance is shut down.
<li>`IN_LAUNCHING_HOOK`: The lifecycle hook is being scaled out.
<li>`IN_TERMINATING_HOOK`: The lifecycle hook is being scaled in.
                     * @param _lifeCycleState Lifecycle status. Valid values:<br>
<li>`IN_SERVICE`: The instance is running.
<li>`CREATING`: The instance is being created.
<li>`CREATION_FAILED`: The instance fails to be created.
<li>`TERMINATING`: The instance is being terminated.
<li>`TERMINATION_FAILED`: The instance fails to be terminated.
<li>`ATTACHING`: The instance is being bound.
<li>`ATTACH_FAILED`: The instance fails to be bound.
<li>`DETACHING`: The instance is being unbound.
<li>`DETACH_FAILED`: The instance fails to be unbound.
<li>`ATTACHING_LB`: The LB is being bound.
<li>DETACHING_LB: The LB is being unbound.
<li>`MODIFYING_LB`: The LB is being modified.
<li>`STARTING`: The instance is being started up.
<li>`START_FAILED`: The instance fails to be started up.
<li>`STOPPING`: The instance is being shut down.
<li>`STOP_FAILED`: The instance fails to be shut down.
<li>`STOPPED`: The instance is shut down.
<li>`IN_LAUNCHING_HOOK`: The lifecycle hook is being scaled out.
<li>`IN_TERMINATING_HOOK`: The lifecycle hook is being scaled in.
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
                     * 获取Health status. Value range: HEALTHY, UNHEALTHY
                     * @return HealthStatus Health status. Value range: HEALTHY, UNHEALTHY
                     * 
                     */
                    std::string GetHealthStatus() const;

                    /**
                     * 设置Health status. Value range: HEALTHY, UNHEALTHY
                     * @param _healthStatus Health status. Value range: HEALTHY, UNHEALTHY
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
                     * 获取Instance addition time
                     * @return AddTime Instance addition time
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Instance addition time
                     * @param _addTime Instance addition time
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
                     * 获取Warming up status. Valid values:
<li>`WAITING_ENTER_WARMUP`: The instance is waiting to be warmed up.
<li>`NO_NEED_WARMUP`: Warming up is not required.
<li>`IN_WARMUP`: The instance is being warmed up.
<li>`AFTER_WARMUP`: Warming up is completed.
                     * @return WarmupStatus Warming up status. Valid values:
<li>`WAITING_ENTER_WARMUP`: The instance is waiting to be warmed up.
<li>`NO_NEED_WARMUP`: Warming up is not required.
<li>`IN_WARMUP`: The instance is being warmed up.
<li>`AFTER_WARMUP`: Warming up is completed.
                     * 
                     */
                    std::string GetWarmupStatus() const;

                    /**
                     * 设置Warming up status. Valid values:
<li>`WAITING_ENTER_WARMUP`: The instance is waiting to be warmed up.
<li>`NO_NEED_WARMUP`: Warming up is not required.
<li>`IN_WARMUP`: The instance is being warmed up.
<li>`AFTER_WARMUP`: Warming up is completed.
                     * @param _warmupStatus Warming up status. Valid values:
<li>`WAITING_ENTER_WARMUP`: The instance is waiting to be warmed up.
<li>`NO_NEED_WARMUP`: Warming up is not required.
<li>`IN_WARMUP`: The instance is being warmed up.
<li>`AFTER_WARMUP`: Warming up is completed.
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
                     * 获取Placement group ID. Only one is allowed.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DisasterRecoverGroupIds Placement group ID. Only one is allowed.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置Placement group ID. Only one is allowed.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _disasterRecoverGroupIds Placement group ID. Only one is allowed.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * Lifecycle status. Valid values:<br>
<li>`IN_SERVICE`: The instance is running.
<li>`CREATING`: The instance is being created.
<li>`CREATION_FAILED`: The instance fails to be created.
<li>`TERMINATING`: The instance is being terminated.
<li>`TERMINATION_FAILED`: The instance fails to be terminated.
<li>`ATTACHING`: The instance is being bound.
<li>`ATTACH_FAILED`: The instance fails to be bound.
<li>`DETACHING`: The instance is being unbound.
<li>`DETACH_FAILED`: The instance fails to be unbound.
<li>`ATTACHING_LB`: The LB is being bound.
<li>DETACHING_LB: The LB is being unbound.
<li>`MODIFYING_LB`: The LB is being modified.
<li>`STARTING`: The instance is being started up.
<li>`START_FAILED`: The instance fails to be started up.
<li>`STOPPING`: The instance is being shut down.
<li>`STOP_FAILED`: The instance fails to be shut down.
<li>`STOPPED`: The instance is shut down.
<li>`IN_LAUNCHING_HOOK`: The lifecycle hook is being scaled out.
<li>`IN_TERMINATING_HOOK`: The lifecycle hook is being scaled in.
                     */
                    std::string m_lifeCycleState;
                    bool m_lifeCycleStateHasBeenSet;

                    /**
                     * Health status. Value range: HEALTHY, UNHEALTHY
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
                     * Instance addition time
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
                     * Warming up status. Valid values:
<li>`WAITING_ENTER_WARMUP`: The instance is waiting to be warmed up.
<li>`NO_NEED_WARMUP`: Warming up is not required.
<li>`IN_WARMUP`: The instance is being warmed up.
<li>`AFTER_WARMUP`: Warming up is completed.
                     */
                    std::string m_warmupStatus;
                    bool m_warmupStatusHasBeenSet;

                    /**
                     * Placement group ID. Only one is allowed.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_INSTANCE_H_
