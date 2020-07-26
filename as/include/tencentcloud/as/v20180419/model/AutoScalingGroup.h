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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGGROUP_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/ForwardLoadBalancer.h>
#include <tencentcloud/as/v20180419/model/Tag.h>
#include <tencentcloud/as/v20180419/model/ServiceSettings.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Auto scaling group
                */
                class AutoScalingGroup : public AbstractModel
                {
                public:
                    AutoScalingGroup();
                    ~AutoScalingGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Auto scaling group ID
                     * @return AutoScalingGroupId Auto scaling group ID
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Auto scaling group ID
                     * @param AutoScalingGroupId Auto scaling group ID
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取Auto scaling group name
                     * @return AutoScalingGroupName Auto scaling group name
                     */
                    std::string GetAutoScalingGroupName() const;

                    /**
                     * 设置Auto scaling group name
                     * @param AutoScalingGroupName Auto scaling group name
                     */
                    void SetAutoScalingGroupName(const std::string& _autoScalingGroupName);

                    /**
                     * 判断参数 AutoScalingGroupName 是否已赋值
                     * @return AutoScalingGroupName 是否已赋值
                     */
                    bool AutoScalingGroupNameHasBeenSet() const;

                    /**
                     * 获取Current status of the auto scaling group. Value range: <br><li>NORMAL: normal <br><li>CVM_ABNORMAL: Exception with the launch configuration <br><li>LB_ABNORMAL: exception with the load balancer <br><li>VPC_ABNORMAL: exception with the VPC <br><li>INSUFFICIENT_BALANCE: insufficient balance <br><li>LB_BACKEND_REGION_NOT_MATCH: the backend region of the CLB instance is not the same as the one of AS service.<br>
                     * @return AutoScalingGroupStatus Current status of the auto scaling group. Value range: <br><li>NORMAL: normal <br><li>CVM_ABNORMAL: Exception with the launch configuration <br><li>LB_ABNORMAL: exception with the load balancer <br><li>VPC_ABNORMAL: exception with the VPC <br><li>INSUFFICIENT_BALANCE: insufficient balance <br><li>LB_BACKEND_REGION_NOT_MATCH: the backend region of the CLB instance is not the same as the one of AS service.<br>
                     */
                    std::string GetAutoScalingGroupStatus() const;

                    /**
                     * 设置Current status of the auto scaling group. Value range: <br><li>NORMAL: normal <br><li>CVM_ABNORMAL: Exception with the launch configuration <br><li>LB_ABNORMAL: exception with the load balancer <br><li>VPC_ABNORMAL: exception with the VPC <br><li>INSUFFICIENT_BALANCE: insufficient balance <br><li>LB_BACKEND_REGION_NOT_MATCH: the backend region of the CLB instance is not the same as the one of AS service.<br>
                     * @param AutoScalingGroupStatus Current status of the auto scaling group. Value range: <br><li>NORMAL: normal <br><li>CVM_ABNORMAL: Exception with the launch configuration <br><li>LB_ABNORMAL: exception with the load balancer <br><li>VPC_ABNORMAL: exception with the VPC <br><li>INSUFFICIENT_BALANCE: insufficient balance <br><li>LB_BACKEND_REGION_NOT_MATCH: the backend region of the CLB instance is not the same as the one of AS service.<br>
                     */
                    void SetAutoScalingGroupStatus(const std::string& _autoScalingGroupStatus);

                    /**
                     * 判断参数 AutoScalingGroupStatus 是否已赋值
                     * @return AutoScalingGroupStatus 是否已赋值
                     */
                    bool AutoScalingGroupStatusHasBeenSet() const;

                    /**
                     * 获取Creation time in UTC format
                     * @return CreatedTime Creation time in UTC format
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time in UTC format
                     * @param CreatedTime Creation time in UTC format
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Default cooldown period in seconds
                     * @return DefaultCooldown Default cooldown period in seconds
                     */
                    int64_t GetDefaultCooldown() const;

                    /**
                     * 设置Default cooldown period in seconds
                     * @param DefaultCooldown Default cooldown period in seconds
                     */
                    void SetDefaultCooldown(const int64_t& _defaultCooldown);

                    /**
                     * 判断参数 DefaultCooldown 是否已赋值
                     * @return DefaultCooldown 是否已赋值
                     */
                    bool DefaultCooldownHasBeenSet() const;

                    /**
                     * 获取Desired number of instances
                     * @return DesiredCapacity Desired number of instances
                     */
                    int64_t GetDesiredCapacity() const;

                    /**
                     * 设置Desired number of instances
                     * @param DesiredCapacity Desired number of instances
                     */
                    void SetDesiredCapacity(const int64_t& _desiredCapacity);

                    /**
                     * 判断参数 DesiredCapacity 是否已赋值
                     * @return DesiredCapacity 是否已赋值
                     */
                    bool DesiredCapacityHasBeenSet() const;

                    /**
                     * 获取Enabled status. Value range: `ENABLED`, `DISABLED`
                     * @return EnabledStatus Enabled status. Value range: `ENABLED`, `DISABLED`
                     */
                    std::string GetEnabledStatus() const;

                    /**
                     * 设置Enabled status. Value range: `ENABLED`, `DISABLED`
                     * @param EnabledStatus Enabled status. Value range: `ENABLED`, `DISABLED`
                     */
                    void SetEnabledStatus(const std::string& _enabledStatus);

                    /**
                     * 判断参数 EnabledStatus 是否已赋值
                     * @return EnabledStatus 是否已赋值
                     */
                    bool EnabledStatusHasBeenSet() const;

                    /**
                     * 获取List of application load balancers
                     * @return ForwardLoadBalancerSet List of application load balancers
                     */
                    std::vector<ForwardLoadBalancer> GetForwardLoadBalancerSet() const;

                    /**
                     * 设置List of application load balancers
                     * @param ForwardLoadBalancerSet List of application load balancers
                     */
                    void SetForwardLoadBalancerSet(const std::vector<ForwardLoadBalancer>& _forwardLoadBalancerSet);

                    /**
                     * 判断参数 ForwardLoadBalancerSet 是否已赋值
                     * @return ForwardLoadBalancerSet 是否已赋值
                     */
                    bool ForwardLoadBalancerSetHasBeenSet() const;

                    /**
                     * 获取Number of instances
                     * @return InstanceCount Number of instances
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置Number of instances
                     * @param InstanceCount Number of instances
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取Number of instances in `IN_SERVICE` status
                     * @return InServiceInstanceCount Number of instances in `IN_SERVICE` status
                     */
                    int64_t GetInServiceInstanceCount() const;

                    /**
                     * 设置Number of instances in `IN_SERVICE` status
                     * @param InServiceInstanceCount Number of instances in `IN_SERVICE` status
                     */
                    void SetInServiceInstanceCount(const int64_t& _inServiceInstanceCount);

                    /**
                     * 判断参数 InServiceInstanceCount 是否已赋值
                     * @return InServiceInstanceCount 是否已赋值
                     */
                    bool InServiceInstanceCountHasBeenSet() const;

                    /**
                     * 获取Launch configuration ID
                     * @return LaunchConfigurationId Launch configuration ID
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置Launch configuration ID
                     * @param LaunchConfigurationId Launch configuration ID
                     */
                    void SetLaunchConfigurationId(const std::string& _launchConfigurationId);

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                    /**
                     * 获取Launch configuration name
                     * @return LaunchConfigurationName Launch configuration name
                     */
                    std::string GetLaunchConfigurationName() const;

                    /**
                     * 设置Launch configuration name
                     * @param LaunchConfigurationName Launch configuration name
                     */
                    void SetLaunchConfigurationName(const std::string& _launchConfigurationName);

                    /**
                     * 判断参数 LaunchConfigurationName 是否已赋值
                     * @return LaunchConfigurationName 是否已赋值
                     */
                    bool LaunchConfigurationNameHasBeenSet() const;

                    /**
                     * 获取List of Classic load balancer IDs
                     * @return LoadBalancerIdSet List of Classic load balancer IDs
                     */
                    std::vector<std::string> GetLoadBalancerIdSet() const;

                    /**
                     * 设置List of Classic load balancer IDs
                     * @param LoadBalancerIdSet List of Classic load balancer IDs
                     */
                    void SetLoadBalancerIdSet(const std::vector<std::string>& _loadBalancerIdSet);

                    /**
                     * 判断参数 LoadBalancerIdSet 是否已赋值
                     * @return LoadBalancerIdSet 是否已赋值
                     */
                    bool LoadBalancerIdSetHasBeenSet() const;

                    /**
                     * 获取Maximum number of instances
                     * @return MaxSize Maximum number of instances
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置Maximum number of instances
                     * @param MaxSize Maximum number of instances
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取Minimum number of instances
                     * @return MinSize Minimum number of instances
                     */
                    int64_t GetMinSize() const;

                    /**
                     * 设置Minimum number of instances
                     * @param MinSize Minimum number of instances
                     */
                    void SetMinSize(const int64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param ProjectId Project ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取List of subnet IDs
                     * @return SubnetIdSet List of subnet IDs
                     */
                    std::vector<std::string> GetSubnetIdSet() const;

                    /**
                     * 设置List of subnet IDs
                     * @param SubnetIdSet List of subnet IDs
                     */
                    void SetSubnetIdSet(const std::vector<std::string>& _subnetIdSet);

                    /**
                     * 判断参数 SubnetIdSet 是否已赋值
                     * @return SubnetIdSet 是否已赋值
                     */
                    bool SubnetIdSetHasBeenSet() const;

                    /**
                     * 获取Termination policy
                     * @return TerminationPolicySet Termination policy
                     */
                    std::vector<std::string> GetTerminationPolicySet() const;

                    /**
                     * 设置Termination policy
                     * @param TerminationPolicySet Termination policy
                     */
                    void SetTerminationPolicySet(const std::vector<std::string>& _terminationPolicySet);

                    /**
                     * 判断参数 TerminationPolicySet 是否已赋值
                     * @return TerminationPolicySet 是否已赋值
                     */
                    bool TerminationPolicySetHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param VpcId VPC ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取List of availability zones
                     * @return ZoneSet List of availability zones
                     */
                    std::vector<std::string> GetZoneSet() const;

                    /**
                     * 设置List of availability zones
                     * @param ZoneSet List of availability zones
                     */
                    void SetZoneSet(const std::vector<std::string>& _zoneSet);

                    /**
                     * 判断参数 ZoneSet 是否已赋值
                     * @return ZoneSet 是否已赋值
                     */
                    bool ZoneSetHasBeenSet() const;

                    /**
                     * 获取Retry policy
                     * @return RetryPolicy Retry policy
                     */
                    std::string GetRetryPolicy() const;

                    /**
                     * 设置Retry policy
                     * @param RetryPolicy Retry policy
                     */
                    void SetRetryPolicy(const std::string& _retryPolicy);

                    /**
                     * 判断参数 RetryPolicy 是否已赋值
                     * @return RetryPolicy 是否已赋值
                     */
                    bool RetryPolicyHasBeenSet() const;

                    /**
                     * 获取Whether the auto scaling group is performing a scaling activity. `IN_ACTIVITY` indicates yes, and `NOT_IN_ACTIVITY` indicates no.
                     * @return InActivityStatus Whether the auto scaling group is performing a scaling activity. `IN_ACTIVITY` indicates yes, and `NOT_IN_ACTIVITY` indicates no.
                     */
                    std::string GetInActivityStatus() const;

                    /**
                     * 设置Whether the auto scaling group is performing a scaling activity. `IN_ACTIVITY` indicates yes, and `NOT_IN_ACTIVITY` indicates no.
                     * @param InActivityStatus Whether the auto scaling group is performing a scaling activity. `IN_ACTIVITY` indicates yes, and `NOT_IN_ACTIVITY` indicates no.
                     */
                    void SetInActivityStatus(const std::string& _inActivityStatus);

                    /**
                     * 判断参数 InActivityStatus 是否已赋值
                     * @return InActivityStatus 是否已赋值
                     */
                    bool InActivityStatusHasBeenSet() const;

                    /**
                     * 获取List of auto scaling group tags
                     * @return Tags List of auto scaling group tags
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of auto scaling group tags
                     * @param Tags List of auto scaling group tags
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Service settings
                     * @return ServiceSettings Service settings
                     */
                    ServiceSettings GetServiceSettings() const;

                    /**
                     * 设置Service settings
                     * @param ServiceSettings Service settings
                     */
                    void SetServiceSettings(const ServiceSettings& _serviceSettings);

                    /**
                     * 判断参数 ServiceSettings 是否已赋值
                     * @return ServiceSettings 是否已赋值
                     */
                    bool ServiceSettingsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Ipv6AddressCount 
                     */
                    int64_t GetIpv6AddressCount() const;

                    /**
                     * 设置
                     * @param Ipv6AddressCount 
                     */
                    void SetIpv6AddressCount(const int64_t& _ipv6AddressCount);

                    /**
                     * 判断参数 Ipv6AddressCount 是否已赋值
                     * @return Ipv6AddressCount 是否已赋值
                     */
                    bool Ipv6AddressCountHasBeenSet() const;

                    /**
                     * 获取
                     * @return MultiZoneSubnetPolicy 
                     */
                    std::string GetMultiZoneSubnetPolicy() const;

                    /**
                     * 设置
                     * @param MultiZoneSubnetPolicy 
                     */
                    void SetMultiZoneSubnetPolicy(const std::string& _multiZoneSubnetPolicy);

                    /**
                     * 判断参数 MultiZoneSubnetPolicy 是否已赋值
                     * @return MultiZoneSubnetPolicy 是否已赋值
                     */
                    bool MultiZoneSubnetPolicyHasBeenSet() const;

                private:

                    /**
                     * Auto scaling group ID
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Auto scaling group name
                     */
                    std::string m_autoScalingGroupName;
                    bool m_autoScalingGroupNameHasBeenSet;

                    /**
                     * Current status of the auto scaling group. Value range: <br><li>NORMAL: normal <br><li>CVM_ABNORMAL: Exception with the launch configuration <br><li>LB_ABNORMAL: exception with the load balancer <br><li>VPC_ABNORMAL: exception with the VPC <br><li>INSUFFICIENT_BALANCE: insufficient balance <br><li>LB_BACKEND_REGION_NOT_MATCH: the backend region of the CLB instance is not the same as the one of AS service.<br>
                     */
                    std::string m_autoScalingGroupStatus;
                    bool m_autoScalingGroupStatusHasBeenSet;

                    /**
                     * Creation time in UTC format
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Default cooldown period in seconds
                     */
                    int64_t m_defaultCooldown;
                    bool m_defaultCooldownHasBeenSet;

                    /**
                     * Desired number of instances
                     */
                    int64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                    /**
                     * Enabled status. Value range: `ENABLED`, `DISABLED`
                     */
                    std::string m_enabledStatus;
                    bool m_enabledStatusHasBeenSet;

                    /**
                     * List of application load balancers
                     */
                    std::vector<ForwardLoadBalancer> m_forwardLoadBalancerSet;
                    bool m_forwardLoadBalancerSetHasBeenSet;

                    /**
                     * Number of instances
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Number of instances in `IN_SERVICE` status
                     */
                    int64_t m_inServiceInstanceCount;
                    bool m_inServiceInstanceCountHasBeenSet;

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
                     * List of Classic load balancer IDs
                     */
                    std::vector<std::string> m_loadBalancerIdSet;
                    bool m_loadBalancerIdSetHasBeenSet;

                    /**
                     * Maximum number of instances
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * Minimum number of instances
                     */
                    int64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * List of subnet IDs
                     */
                    std::vector<std::string> m_subnetIdSet;
                    bool m_subnetIdSetHasBeenSet;

                    /**
                     * Termination policy
                     */
                    std::vector<std::string> m_terminationPolicySet;
                    bool m_terminationPolicySetHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * List of availability zones
                     */
                    std::vector<std::string> m_zoneSet;
                    bool m_zoneSetHasBeenSet;

                    /**
                     * Retry policy
                     */
                    std::string m_retryPolicy;
                    bool m_retryPolicyHasBeenSet;

                    /**
                     * Whether the auto scaling group is performing a scaling activity. `IN_ACTIVITY` indicates yes, and `NOT_IN_ACTIVITY` indicates no.
                     */
                    std::string m_inActivityStatus;
                    bool m_inActivityStatusHasBeenSet;

                    /**
                     * List of auto scaling group tags
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Service settings
                     */
                    ServiceSettings m_serviceSettings;
                    bool m_serviceSettingsHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_multiZoneSubnetPolicy;
                    bool m_multiZoneSubnetPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGGROUP_H_
