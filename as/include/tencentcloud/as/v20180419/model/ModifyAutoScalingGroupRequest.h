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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_MODIFYAUTOSCALINGGROUPREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_MODIFYAUTOSCALINGGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/ServiceSettings.h>
#include <tencentcloud/as/v20180419/model/SpotMixedAllocationPolicy.h>
#include <tencentcloud/as/v20180419/model/InstanceNameIndexSettings.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * ModifyAutoScalingGroup request structure.
                */
                class ModifyAutoScalingGroupRequest : public AbstractModel
                {
                public:
                    ModifyAutoScalingGroupRequest();
                    ~ModifyAutoScalingGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     * @return AutoScalingGroupId Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     * @param _autoScalingGroupId Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
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
                     * 获取Auto scaling group name, which can only contain letters, numbers, underscores, hyphens ("-"), and decimal points with a maximum length of 55 bytes and must be unique under your account.
                     * @return AutoScalingGroupName Auto scaling group name, which can only contain letters, numbers, underscores, hyphens ("-"), and decimal points with a maximum length of 55 bytes and must be unique under your account.
                     * 
                     */
                    std::string GetAutoScalingGroupName() const;

                    /**
                     * 设置Auto scaling group name, which can only contain letters, numbers, underscores, hyphens ("-"), and decimal points with a maximum length of 55 bytes and must be unique under your account.
                     * @param _autoScalingGroupName Auto scaling group name, which can only contain letters, numbers, underscores, hyphens ("-"), and decimal points with a maximum length of 55 bytes and must be unique under your account.
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
                     * 获取Default cooldown period in seconds. value ranges from 0 to 3600. default value: 300.
                     * @return DefaultCooldown Default cooldown period in seconds. value ranges from 0 to 3600. default value: 300.
                     * 
                     */
                    uint64_t GetDefaultCooldown() const;

                    /**
                     * 设置Default cooldown period in seconds. value ranges from 0 to 3600. default value: 300.
                     * @param _defaultCooldown Default cooldown period in seconds. value ranges from 0 to 3600. default value: 300.
                     * 
                     */
                    void SetDefaultCooldown(const uint64_t& _defaultCooldown);

                    /**
                     * 判断参数 DefaultCooldown 是否已赋值
                     * @return DefaultCooldown 是否已赋值
                     * 
                     */
                    bool DefaultCooldownHasBeenSet() const;

                    /**
                     * 获取Expected number of instances, value ranges from 0 to 2000. to meet maximum value greater than or equal to expected value, expected value greater than or equal to minimum value.
                     * @return DesiredCapacity Expected number of instances, value ranges from 0 to 2000. to meet maximum value greater than or equal to expected value, expected value greater than or equal to minimum value.
                     * 
                     */
                    uint64_t GetDesiredCapacity() const;

                    /**
                     * 设置Expected number of instances, value ranges from 0 to 2000. to meet maximum value greater than or equal to expected value, expected value greater than or equal to minimum value.
                     * @param _desiredCapacity Expected number of instances, value ranges from 0 to 2000. to meet maximum value greater than or equal to expected value, expected value greater than or equal to minimum value.
                     * 
                     */
                    void SetDesiredCapacity(const uint64_t& _desiredCapacity);

                    /**
                     * 判断参数 DesiredCapacity 是否已赋值
                     * @return DesiredCapacity 是否已赋值
                     * 
                     */
                    bool DesiredCapacityHasBeenSet() const;

                    /**
                     * 获取Launch configuration ID. obtain available launch configuration ids in the following ways:.
<li>Queries the launch configuration ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/config).</li>.
<li>Specifies the launch configuration ID obtained by calling the api [DescribeLaunchConfigurations](https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the return information.</li>.
                     * @return LaunchConfigurationId Launch configuration ID. obtain available launch configuration ids in the following ways:.
<li>Queries the launch configuration ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/config).</li>.
<li>Specifies the launch configuration ID obtained by calling the api [DescribeLaunchConfigurations](https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the return information.</li>.
                     * 
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置Launch configuration ID. obtain available launch configuration ids in the following ways:.
<li>Queries the launch configuration ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/config).</li>.
<li>Specifies the launch configuration ID obtained by calling the api [DescribeLaunchConfigurations](https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the return information.</li>.
                     * @param _launchConfigurationId Launch configuration ID. obtain available launch configuration ids in the following ways:.
<li>Queries the launch configuration ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/config).</li>.
<li>Specifies the launch configuration ID obtained by calling the api [DescribeLaunchConfigurations](https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the return information.</li>.
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
                     * 获取Maximum number of instances, value range from 0 to 2000. to meet maximum value greater than or equal to expected value, expected value greater than or equal to minimum value.
                     * @return MaxSize Maximum number of instances, value range from 0 to 2000. to meet maximum value greater than or equal to expected value, expected value greater than or equal to minimum value.
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置Maximum number of instances, value range from 0 to 2000. to meet maximum value greater than or equal to expected value, expected value greater than or equal to minimum value.
                     * @param _maxSize Maximum number of instances, value range from 0 to 2000. to meet maximum value greater than or equal to expected value, expected value greater than or equal to minimum value.
                     * 
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取Minimum number of instances. value range [0,2000]. to meet maximum value equal to or greater than expected value, expected value equal to or greater than minimum value.
                     * @return MinSize Minimum number of instances. value range [0,2000]. to meet maximum value equal to or greater than expected value, expected value equal to or greater than minimum value.
                     * 
                     */
                    uint64_t GetMinSize() const;

                    /**
                     * 设置Minimum number of instances. value range [0,2000]. to meet maximum value equal to or greater than expected value, expected value equal to or greater than minimum value.
                     * @param _minSize Minimum number of instances. value range [0,2000]. to meet maximum value equal to or greater than expected value, expected value equal to or greater than minimum value.
                     * 
                     */
                    void SetMinSize(const uint64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     * 
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取Project ID. obtain this parameter by calling [DescribeProject](https://intl.cloud.tencent.com/document/api/651/78725?from_cn_redirect=1), `ProjectId` field in the return value. default value is 0, indicates usage of the default project.
                     * @return ProjectId Project ID. obtain this parameter by calling [DescribeProject](https://intl.cloud.tencent.com/document/api/651/78725?from_cn_redirect=1), `ProjectId` field in the return value. default value is 0, indicates usage of the default project.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID. obtain this parameter by calling [DescribeProject](https://intl.cloud.tencent.com/document/api/651/78725?from_cn_redirect=1), `ProjectId` field in the return value. default value is 0, indicates usage of the default project.
                     * @param _projectId Project ID. obtain this parameter by calling [DescribeProject](https://intl.cloud.tencent.com/document/api/651/78725?from_cn_redirect=1), `ProjectId` field in the return value. default value is 0, indicates usage of the default project.
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取subnet ID list. you can obtain a valid vpc subnet ID by logging in to the [console](https://console.cloud.tencent.com/vpc/subnet). you can also call the API [DescribeSubnets](https://intl.cloud.tencent.com/document/product/215/15784?from_cn_redirect=1) and retrieve the valid vpc subnet ID from the SubnetId field in the API response.
                     * @return SubnetIds subnet ID list. you can obtain a valid vpc subnet ID by logging in to the [console](https://console.cloud.tencent.com/vpc/subnet). you can also call the API [DescribeSubnets](https://intl.cloud.tencent.com/document/product/215/15784?from_cn_redirect=1) and retrieve the valid vpc subnet ID from the SubnetId field in the API response.
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置subnet ID list. you can obtain a valid vpc subnet ID by logging in to the [console](https://console.cloud.tencent.com/vpc/subnet). you can also call the API [DescribeSubnets](https://intl.cloud.tencent.com/document/product/215/15784?from_cn_redirect=1) and retrieve the valid vpc subnet ID from the SubnetId field in the API response.
                     * @param _subnetIds subnet ID list. you can obtain a valid vpc subnet ID by logging in to the [console](https://console.cloud.tencent.com/vpc/subnet). you can also call the API [DescribeSubnets](https://intl.cloud.tencent.com/document/product/215/15784?from_cn_redirect=1) and retrieve the valid vpc subnet ID from the SubnetId field in the API response.
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
                     * 获取Termination policy, whose maximum length is currently 1. Valid values include OLDEST_INSTANCE and NEWEST_INSTANCE.
<li>OLDEST_INSTANCE: Terminate the oldest instance in the scaling group first.</li>
<li>NEWEST_INSTANCE: Terminate the newest instance in the scaling group first.</li>
                     * @return TerminationPolicies Termination policy, whose maximum length is currently 1. Valid values include OLDEST_INSTANCE and NEWEST_INSTANCE.
<li>OLDEST_INSTANCE: Terminate the oldest instance in the scaling group first.</li>
<li>NEWEST_INSTANCE: Terminate the newest instance in the scaling group first.</li>
                     * 
                     */
                    std::vector<std::string> GetTerminationPolicies() const;

                    /**
                     * 设置Termination policy, whose maximum length is currently 1. Valid values include OLDEST_INSTANCE and NEWEST_INSTANCE.
<li>OLDEST_INSTANCE: Terminate the oldest instance in the scaling group first.</li>
<li>NEWEST_INSTANCE: Terminate the newest instance in the scaling group first.</li>
                     * @param _terminationPolicies Termination policy, whose maximum length is currently 1. Valid values include OLDEST_INSTANCE and NEWEST_INSTANCE.
<li>OLDEST_INSTANCE: Terminate the oldest instance in the scaling group first.</li>
<li>NEWEST_INSTANCE: Terminate the newest instance in the scaling group first.</li>
                     * 
                     */
                    void SetTerminationPolicies(const std::vector<std::string>& _terminationPolicies);

                    /**
                     * 判断参数 TerminationPolicies 是否已赋值
                     * @return TerminationPolicies 是否已赋值
                     * 
                     */
                    bool TerminationPoliciesHasBeenSet() const;

                    /**
                     * 获取vpc ID. when modifying the vpc, you need to change the SubnetIds parameter to the subnet of this vpc. effective VpcId can be queried by logging in to the console (https://console.cloud.tencent.com/vpc/vpc) or obtained from the VpcId field in the api response by calling the DescribeVpc api (https://intl.cloud.tencent.com/document/api/215/15778?from_cn_redirect=1).
                     * @return VpcId vpc ID. when modifying the vpc, you need to change the SubnetIds parameter to the subnet of this vpc. effective VpcId can be queried by logging in to the console (https://console.cloud.tencent.com/vpc/vpc) or obtained from the VpcId field in the api response by calling the DescribeVpc api (https://intl.cloud.tencent.com/document/api/215/15778?from_cn_redirect=1).
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc ID. when modifying the vpc, you need to change the SubnetIds parameter to the subnet of this vpc. effective VpcId can be queried by logging in to the console (https://console.cloud.tencent.com/vpc/vpc) or obtained from the VpcId field in the api response by calling the DescribeVpc api (https://intl.cloud.tencent.com/document/api/215/15778?from_cn_redirect=1).
                     * @param _vpcId vpc ID. when modifying the vpc, you need to change the SubnetIds parameter to the subnet of this vpc. effective VpcId can be queried by logging in to the console (https://console.cloud.tencent.com/vpc/vpc) or obtained from the VpcId field in the api response by calling the DescribeVpc api (https://intl.cloud.tencent.com/document/api/215/15778?from_cn_redirect=1).
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取List of availability zones
                     * @return Zones List of availability zones
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置List of availability zones
                     * @param _zones List of availability zones
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取Retry policy, whose valid values include IMMEDIATE_RETRY, INCREMENTAL_INTERVALS, and NO_RETRY, with the default value being IMMEDIATE_RETRY. A partially successful scaling activity is considered a failed activity.
<li>IMMEDIATE_RETRY: Immediately retry, and quickly retry in a short period. There will be no retry anymore after a certain number of consecutive failures (5).</li>
<li>INCREMENTAL_INTERVALS: Retry with incremental intervals. As the number of consecutive failures increases, the retry intervals gradually become longer, ranging from seconds to one day.</li>
<li>NO_RETRY: There will be no retry until another user call or alarm information is received.</li>
                     * @return RetryPolicy Retry policy, whose valid values include IMMEDIATE_RETRY, INCREMENTAL_INTERVALS, and NO_RETRY, with the default value being IMMEDIATE_RETRY. A partially successful scaling activity is considered a failed activity.
<li>IMMEDIATE_RETRY: Immediately retry, and quickly retry in a short period. There will be no retry anymore after a certain number of consecutive failures (5).</li>
<li>INCREMENTAL_INTERVALS: Retry with incremental intervals. As the number of consecutive failures increases, the retry intervals gradually become longer, ranging from seconds to one day.</li>
<li>NO_RETRY: There will be no retry until another user call or alarm information is received.</li>
                     * 
                     */
                    std::string GetRetryPolicy() const;

                    /**
                     * 设置Retry policy, whose valid values include IMMEDIATE_RETRY, INCREMENTAL_INTERVALS, and NO_RETRY, with the default value being IMMEDIATE_RETRY. A partially successful scaling activity is considered a failed activity.
<li>IMMEDIATE_RETRY: Immediately retry, and quickly retry in a short period. There will be no retry anymore after a certain number of consecutive failures (5).</li>
<li>INCREMENTAL_INTERVALS: Retry with incremental intervals. As the number of consecutive failures increases, the retry intervals gradually become longer, ranging from seconds to one day.</li>
<li>NO_RETRY: There will be no retry until another user call or alarm information is received.</li>
                     * @param _retryPolicy Retry policy, whose valid values include IMMEDIATE_RETRY, INCREMENTAL_INTERVALS, and NO_RETRY, with the default value being IMMEDIATE_RETRY. A partially successful scaling activity is considered a failed activity.
<li>IMMEDIATE_RETRY: Immediately retry, and quickly retry in a short period. There will be no retry anymore after a certain number of consecutive failures (5).</li>
<li>INCREMENTAL_INTERVALS: Retry with incremental intervals. As the number of consecutive failures increases, the retry intervals gradually become longer, ranging from seconds to one day.</li>
<li>NO_RETRY: There will be no retry until another user call or alarm information is received.</li>
                     * 
                     */
                    void SetRetryPolicy(const std::string& _retryPolicy);

                    /**
                     * 判断参数 RetryPolicy 是否已赋值
                     * @return RetryPolicy 是否已赋值
                     * 
                     */
                    bool RetryPolicyHasBeenSet() const;

                    /**
                     * 获取AZ verification policy, whose valid values include ALL and ANY, with the default value being ANY. This policy comes into effect when actual changes are made to resource-related fields in the scaling group (such as launch configuration, AZ, or subnet).
<li>ALL: Verification passes if all AZs or subnets are available; otherwise, a verification error will be reported.<li>
<li>ANY: Verification passes if any AZ or subnet is available; otherwise, a verification error will be reported.</li>

Common reasons for unavailable AZs or subnets include the CVM InstanceType in the AZ being sold out, the CBS cloud disk in the AZ being sold out, insufficient quota in the AZ, and insufficient IP addresses in the subnet.
If there is no AZ or subnet in Zones/SubnetIds, a verification error will be reported regardless of the values of ZonesCheckPolicy.
                     * @return ZonesCheckPolicy AZ verification policy, whose valid values include ALL and ANY, with the default value being ANY. This policy comes into effect when actual changes are made to resource-related fields in the scaling group (such as launch configuration, AZ, or subnet).
<li>ALL: Verification passes if all AZs or subnets are available; otherwise, a verification error will be reported.<li>
<li>ANY: Verification passes if any AZ or subnet is available; otherwise, a verification error will be reported.</li>

Common reasons for unavailable AZs or subnets include the CVM InstanceType in the AZ being sold out, the CBS cloud disk in the AZ being sold out, insufficient quota in the AZ, and insufficient IP addresses in the subnet.
If there is no AZ or subnet in Zones/SubnetIds, a verification error will be reported regardless of the values of ZonesCheckPolicy.
                     * 
                     */
                    std::string GetZonesCheckPolicy() const;

                    /**
                     * 设置AZ verification policy, whose valid values include ALL and ANY, with the default value being ANY. This policy comes into effect when actual changes are made to resource-related fields in the scaling group (such as launch configuration, AZ, or subnet).
<li>ALL: Verification passes if all AZs or subnets are available; otherwise, a verification error will be reported.<li>
<li>ANY: Verification passes if any AZ or subnet is available; otherwise, a verification error will be reported.</li>

Common reasons for unavailable AZs or subnets include the CVM InstanceType in the AZ being sold out, the CBS cloud disk in the AZ being sold out, insufficient quota in the AZ, and insufficient IP addresses in the subnet.
If there is no AZ or subnet in Zones/SubnetIds, a verification error will be reported regardless of the values of ZonesCheckPolicy.
                     * @param _zonesCheckPolicy AZ verification policy, whose valid values include ALL and ANY, with the default value being ANY. This policy comes into effect when actual changes are made to resource-related fields in the scaling group (such as launch configuration, AZ, or subnet).
<li>ALL: Verification passes if all AZs or subnets are available; otherwise, a verification error will be reported.<li>
<li>ANY: Verification passes if any AZ or subnet is available; otherwise, a verification error will be reported.</li>

Common reasons for unavailable AZs or subnets include the CVM InstanceType in the AZ being sold out, the CBS cloud disk in the AZ being sold out, insufficient quota in the AZ, and insufficient IP addresses in the subnet.
If there is no AZ or subnet in Zones/SubnetIds, a verification error will be reported regardless of the values of ZonesCheckPolicy.
                     * 
                     */
                    void SetZonesCheckPolicy(const std::string& _zonesCheckPolicy);

                    /**
                     * 判断参数 ZonesCheckPolicy 是否已赋值
                     * @return ZonesCheckPolicy 是否已赋值
                     * 
                     */
                    bool ZonesCheckPolicyHasBeenSet() const;

                    /**
                     * 获取Service settings such as unhealthy instance replacement.
                     * @return ServiceSettings Service settings such as unhealthy instance replacement.
                     * 
                     */
                    ServiceSettings GetServiceSettings() const;

                    /**
                     * 设置Service settings such as unhealthy instance replacement.
                     * @param _serviceSettings Service settings such as unhealthy instance replacement.
                     * 
                     */
                    void SetServiceSettings(const ServiceSettings& _serviceSettings);

                    /**
                     * 判断参数 ServiceSettings 是否已赋值
                     * @return ServiceSettings 是否已赋值
                     * 
                     */
                    bool ServiceSettingsHasBeenSet() const;

                    /**
                     * 获取The number of IPv6 addresses that an instance has. valid values: 0 and 1. default value: 0, which means the instance does not allocate an IPv6 address. use a private network that supports IPv6 and enable IPv6 CIDR in the subnet. for usage restrictions, see [IPv6 usage limits](https://intl.cloud.tencent.com/document/product/1142/38369?from_cn_redirect=1).
                     * @return Ipv6AddressCount The number of IPv6 addresses that an instance has. valid values: 0 and 1. default value: 0, which means the instance does not allocate an IPv6 address. use a private network that supports IPv6 and enable IPv6 CIDR in the subnet. for usage restrictions, see [IPv6 usage limits](https://intl.cloud.tencent.com/document/product/1142/38369?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetIpv6AddressCount() const;

                    /**
                     * 设置The number of IPv6 addresses that an instance has. valid values: 0 and 1. default value: 0, which means the instance does not allocate an IPv6 address. use a private network that supports IPv6 and enable IPv6 CIDR in the subnet. for usage restrictions, see [IPv6 usage limits](https://intl.cloud.tencent.com/document/product/1142/38369?from_cn_redirect=1).
                     * @param _ipv6AddressCount The number of IPv6 addresses that an instance has. valid values: 0 and 1. default value: 0, which means the instance does not allocate an IPv6 address. use a private network that supports IPv6 and enable IPv6 CIDR in the subnet. for usage restrictions, see [IPv6 usage limits](https://intl.cloud.tencent.com/document/product/1142/38369?from_cn_redirect=1).
                     * 
                     */
                    void SetIpv6AddressCount(const int64_t& _ipv6AddressCount);

                    /**
                     * 判断参数 Ipv6AddressCount 是否已赋值
                     * @return Ipv6AddressCount 是否已赋值
                     * 
                     */
                    bool Ipv6AddressCountHasBeenSet() const;

                    /**
                     * 获取Multi-AZ/multi-subnet policy, whose valid values include PRIORITY and EQUALITY, with the default value being PRIORITY.
<li>PRIORITY: Instances are attempted to be created taking the order of the AZ/subnet list as the priority. If the highest-priority AZ/subnet can create instances successfully, instances can always be created in that AZ/subnet.</li>
<li>EQUALITY: The instances added through scale-out will be distributed across multiple AZs/subnets to ensure a relatively balanced number of instances in each AZ/subnet after scaling out.</li>

Points to consider regarding this policy:
<li>When the scaling group is based on a classic network, this policy applies to the multi-AZ; when the scaling group is based on a VPC network, this policy applies to the multi-subnet, in this case, the AZs are no longer considered. For example, if there are four subnets labeled A, B, C, and D, where A, B, and C are in AZ 1 and D is in AZ 2, the subnets A, B, C, and D are considered for sorting without regard to AZs 1 and 2.</li>
<li>This policy applies to the multi-AZ/multi-subnet and not to the InstanceTypes parameter of the launch configuration, which is selected according to the priority policy.</li>
<li>When instances are created according to the PRIORITY policy, ensure the policy for multiple models first, followed by the policy for the multi-AZ/subnet. For example, with models A and B and subnets 1, 2, and 3, attempts will be made in the order of A1, A2, A3, B1, B2, and B3. If A1 is sold out, A2 will be attempted (instead of B1).</li>
                     * @return MultiZoneSubnetPolicy Multi-AZ/multi-subnet policy, whose valid values include PRIORITY and EQUALITY, with the default value being PRIORITY.
<li>PRIORITY: Instances are attempted to be created taking the order of the AZ/subnet list as the priority. If the highest-priority AZ/subnet can create instances successfully, instances can always be created in that AZ/subnet.</li>
<li>EQUALITY: The instances added through scale-out will be distributed across multiple AZs/subnets to ensure a relatively balanced number of instances in each AZ/subnet after scaling out.</li>

Points to consider regarding this policy:
<li>When the scaling group is based on a classic network, this policy applies to the multi-AZ; when the scaling group is based on a VPC network, this policy applies to the multi-subnet, in this case, the AZs are no longer considered. For example, if there are four subnets labeled A, B, C, and D, where A, B, and C are in AZ 1 and D is in AZ 2, the subnets A, B, C, and D are considered for sorting without regard to AZs 1 and 2.</li>
<li>This policy applies to the multi-AZ/multi-subnet and not to the InstanceTypes parameter of the launch configuration, which is selected according to the priority policy.</li>
<li>When instances are created according to the PRIORITY policy, ensure the policy for multiple models first, followed by the policy for the multi-AZ/subnet. For example, with models A and B and subnets 1, 2, and 3, attempts will be made in the order of A1, A2, A3, B1, B2, and B3. If A1 is sold out, A2 will be attempted (instead of B1).</li>
                     * 
                     */
                    std::string GetMultiZoneSubnetPolicy() const;

                    /**
                     * 设置Multi-AZ/multi-subnet policy, whose valid values include PRIORITY and EQUALITY, with the default value being PRIORITY.
<li>PRIORITY: Instances are attempted to be created taking the order of the AZ/subnet list as the priority. If the highest-priority AZ/subnet can create instances successfully, instances can always be created in that AZ/subnet.</li>
<li>EQUALITY: The instances added through scale-out will be distributed across multiple AZs/subnets to ensure a relatively balanced number of instances in each AZ/subnet after scaling out.</li>

Points to consider regarding this policy:
<li>When the scaling group is based on a classic network, this policy applies to the multi-AZ; when the scaling group is based on a VPC network, this policy applies to the multi-subnet, in this case, the AZs are no longer considered. For example, if there are four subnets labeled A, B, C, and D, where A, B, and C are in AZ 1 and D is in AZ 2, the subnets A, B, C, and D are considered for sorting without regard to AZs 1 and 2.</li>
<li>This policy applies to the multi-AZ/multi-subnet and not to the InstanceTypes parameter of the launch configuration, which is selected according to the priority policy.</li>
<li>When instances are created according to the PRIORITY policy, ensure the policy for multiple models first, followed by the policy for the multi-AZ/subnet. For example, with models A and B and subnets 1, 2, and 3, attempts will be made in the order of A1, A2, A3, B1, B2, and B3. If A1 is sold out, A2 will be attempted (instead of B1).</li>
                     * @param _multiZoneSubnetPolicy Multi-AZ/multi-subnet policy, whose valid values include PRIORITY and EQUALITY, with the default value being PRIORITY.
<li>PRIORITY: Instances are attempted to be created taking the order of the AZ/subnet list as the priority. If the highest-priority AZ/subnet can create instances successfully, instances can always be created in that AZ/subnet.</li>
<li>EQUALITY: The instances added through scale-out will be distributed across multiple AZs/subnets to ensure a relatively balanced number of instances in each AZ/subnet after scaling out.</li>

Points to consider regarding this policy:
<li>When the scaling group is based on a classic network, this policy applies to the multi-AZ; when the scaling group is based on a VPC network, this policy applies to the multi-subnet, in this case, the AZs are no longer considered. For example, if there are four subnets labeled A, B, C, and D, where A, B, and C are in AZ 1 and D is in AZ 2, the subnets A, B, C, and D are considered for sorting without regard to AZs 1 and 2.</li>
<li>This policy applies to the multi-AZ/multi-subnet and not to the InstanceTypes parameter of the launch configuration, which is selected according to the priority policy.</li>
<li>When instances are created according to the PRIORITY policy, ensure the policy for multiple models first, followed by the policy for the multi-AZ/subnet. For example, with models A and B and subnets 1, 2, and 3, attempts will be made in the order of A1, A2, A3, B1, B2, and B3. If A1 is sold out, A2 will be attempted (instead of B1).</li>
                     * 
                     */
                    void SetMultiZoneSubnetPolicy(const std::string& _multiZoneSubnetPolicy);

                    /**
                     * 判断参数 MultiZoneSubnetPolicy 是否已赋值
                     * @return MultiZoneSubnetPolicy 是否已赋值
                     * 
                     */
                    bool MultiZoneSubnetPolicyHasBeenSet() const;

                    /**
                     * 获取Scaling group instance health check type, whose valid values include:
<li>CVM: Determines whether an instance is unhealthy based on its network status. An unhealthy network status is indicated by an event where instances become unreachable via PING. Detailed criteria of judgment can be found in [Instance Health Check](https://intl.cloud.tencent.com/document/product/377/8553?from_cn_redirect=1).</li>
<li>CLB: Determines whether an instance is unhealthy based on the health check status of CLB. For principles behind CLB health checks, see [Health Check](https://intl.cloud.tencent.com/document/product/214/6097?from_cn_redirect=1).</li>
                     * @return HealthCheckType Scaling group instance health check type, whose valid values include:
<li>CVM: Determines whether an instance is unhealthy based on its network status. An unhealthy network status is indicated by an event where instances become unreachable via PING. Detailed criteria of judgment can be found in [Instance Health Check](https://intl.cloud.tencent.com/document/product/377/8553?from_cn_redirect=1).</li>
<li>CLB: Determines whether an instance is unhealthy based on the health check status of CLB. For principles behind CLB health checks, see [Health Check](https://intl.cloud.tencent.com/document/product/214/6097?from_cn_redirect=1).</li>
                     * 
                     */
                    std::string GetHealthCheckType() const;

                    /**
                     * 设置Scaling group instance health check type, whose valid values include:
<li>CVM: Determines whether an instance is unhealthy based on its network status. An unhealthy network status is indicated by an event where instances become unreachable via PING. Detailed criteria of judgment can be found in [Instance Health Check](https://intl.cloud.tencent.com/document/product/377/8553?from_cn_redirect=1).</li>
<li>CLB: Determines whether an instance is unhealthy based on the health check status of CLB. For principles behind CLB health checks, see [Health Check](https://intl.cloud.tencent.com/document/product/214/6097?from_cn_redirect=1).</li>
                     * @param _healthCheckType Scaling group instance health check type, whose valid values include:
<li>CVM: Determines whether an instance is unhealthy based on its network status. An unhealthy network status is indicated by an event where instances become unreachable via PING. Detailed criteria of judgment can be found in [Instance Health Check](https://intl.cloud.tencent.com/document/product/377/8553?from_cn_redirect=1).</li>
<li>CLB: Determines whether an instance is unhealthy based on the health check status of CLB. For principles behind CLB health checks, see [Health Check](https://intl.cloud.tencent.com/document/product/214/6097?from_cn_redirect=1).</li>
                     * 
                     */
                    void SetHealthCheckType(const std::string& _healthCheckType);

                    /**
                     * 判断参数 HealthCheckType 是否已赋值
                     * @return HealthCheckType 是否已赋值
                     * 
                     */
                    bool HealthCheckTypeHasBeenSet() const;

                    /**
                     * 获取Grace period of the CLB health check
                     * @return LoadBalancerHealthCheckGracePeriod Grace period of the CLB health check
                     * 
                     */
                    uint64_t GetLoadBalancerHealthCheckGracePeriod() const;

                    /**
                     * 设置Grace period of the CLB health check
                     * @param _loadBalancerHealthCheckGracePeriod Grace period of the CLB health check
                     * 
                     */
                    void SetLoadBalancerHealthCheckGracePeriod(const uint64_t& _loadBalancerHealthCheckGracePeriod);

                    /**
                     * 判断参数 LoadBalancerHealthCheckGracePeriod 是否已赋值
                     * @return LoadBalancerHealthCheckGracePeriod 是否已赋值
                     * 
                     */
                    bool LoadBalancerHealthCheckGracePeriodHasBeenSet() const;

                    /**
                     * 获取Instance assignment policy, whose valid values include LAUNCH_CONFIGURATION and SPOT_MIXED.
<li>LAUNCH_CONFIGURATION: Represent the traditional mode of assigning instances according to the launch configuration.</li>
<li>SPOT_MIXED: Represent the spot mixed mode. Currently, this mode is supported only when the launch configuration is set to the pay-as-you-go billing mode. In the mixed mode, the scaling group will scale out pay-as-you-go models or spot models based on the predefined settings. When the mixed mode is used, the billing type of the associated launch configuration cannot be modified.</li>
                     * @return InstanceAllocationPolicy Instance assignment policy, whose valid values include LAUNCH_CONFIGURATION and SPOT_MIXED.
<li>LAUNCH_CONFIGURATION: Represent the traditional mode of assigning instances according to the launch configuration.</li>
<li>SPOT_MIXED: Represent the spot mixed mode. Currently, this mode is supported only when the launch configuration is set to the pay-as-you-go billing mode. In the mixed mode, the scaling group will scale out pay-as-you-go models or spot models based on the predefined settings. When the mixed mode is used, the billing type of the associated launch configuration cannot be modified.</li>
                     * 
                     */
                    std::string GetInstanceAllocationPolicy() const;

                    /**
                     * 设置Instance assignment policy, whose valid values include LAUNCH_CONFIGURATION and SPOT_MIXED.
<li>LAUNCH_CONFIGURATION: Represent the traditional mode of assigning instances according to the launch configuration.</li>
<li>SPOT_MIXED: Represent the spot mixed mode. Currently, this mode is supported only when the launch configuration is set to the pay-as-you-go billing mode. In the mixed mode, the scaling group will scale out pay-as-you-go models or spot models based on the predefined settings. When the mixed mode is used, the billing type of the associated launch configuration cannot be modified.</li>
                     * @param _instanceAllocationPolicy Instance assignment policy, whose valid values include LAUNCH_CONFIGURATION and SPOT_MIXED.
<li>LAUNCH_CONFIGURATION: Represent the traditional mode of assigning instances according to the launch configuration.</li>
<li>SPOT_MIXED: Represent the spot mixed mode. Currently, this mode is supported only when the launch configuration is set to the pay-as-you-go billing mode. In the mixed mode, the scaling group will scale out pay-as-you-go models or spot models based on the predefined settings. When the mixed mode is used, the billing type of the associated launch configuration cannot be modified.</li>
                     * 
                     */
                    void SetInstanceAllocationPolicy(const std::string& _instanceAllocationPolicy);

                    /**
                     * 判断参数 InstanceAllocationPolicy 是否已赋值
                     * @return InstanceAllocationPolicy 是否已赋值
                     * 
                     */
                    bool InstanceAllocationPolicyHasBeenSet() const;

                    /**
                     * 获取Specifies how to assign pay-as-you-go instances and spot instances.
This parameter is valid only when `InstanceAllocationPolicy` is set to `SPOT_MIXED`.
                     * @return SpotMixedAllocationPolicy Specifies how to assign pay-as-you-go instances and spot instances.
This parameter is valid only when `InstanceAllocationPolicy` is set to `SPOT_MIXED`.
                     * 
                     */
                    SpotMixedAllocationPolicy GetSpotMixedAllocationPolicy() const;

                    /**
                     * 设置Specifies how to assign pay-as-you-go instances and spot instances.
This parameter is valid only when `InstanceAllocationPolicy` is set to `SPOT_MIXED`.
                     * @param _spotMixedAllocationPolicy Specifies how to assign pay-as-you-go instances and spot instances.
This parameter is valid only when `InstanceAllocationPolicy` is set to `SPOT_MIXED`.
                     * 
                     */
                    void SetSpotMixedAllocationPolicy(const SpotMixedAllocationPolicy& _spotMixedAllocationPolicy);

                    /**
                     * 判断参数 SpotMixedAllocationPolicy 是否已赋值
                     * @return SpotMixedAllocationPolicy 是否已赋值
                     * 
                     */
                    bool SpotMixedAllocationPolicyHasBeenSet() const;

                    /**
                     * 获取Capacity rebalancing feature, which is applicable only to spot instances within the scaling group. Valid values:
<li>TRUE: Enable this feature. When spot instances in the scaling group are about to be automatically recycled by the spot instance service, AS proactively initiates the termination process of the spot instances. If there is a configured scale-in hook, it will be triggered before termination. After the termination process starts, AS asynchronously initiates the scale-out to reach the expected number of instances.</li>
<li>FALSE: Disable this feature. AS waits for the spot instance to be terminated before scaling out to reach the number of instances expected by the scaling group.</li>
                     * @return CapacityRebalance Capacity rebalancing feature, which is applicable only to spot instances within the scaling group. Valid values:
<li>TRUE: Enable this feature. When spot instances in the scaling group are about to be automatically recycled by the spot instance service, AS proactively initiates the termination process of the spot instances. If there is a configured scale-in hook, it will be triggered before termination. After the termination process starts, AS asynchronously initiates the scale-out to reach the expected number of instances.</li>
<li>FALSE: Disable this feature. AS waits for the spot instance to be terminated before scaling out to reach the number of instances expected by the scaling group.</li>
                     * 
                     */
                    bool GetCapacityRebalance() const;

                    /**
                     * 设置Capacity rebalancing feature, which is applicable only to spot instances within the scaling group. Valid values:
<li>TRUE: Enable this feature. When spot instances in the scaling group are about to be automatically recycled by the spot instance service, AS proactively initiates the termination process of the spot instances. If there is a configured scale-in hook, it will be triggered before termination. After the termination process starts, AS asynchronously initiates the scale-out to reach the expected number of instances.</li>
<li>FALSE: Disable this feature. AS waits for the spot instance to be terminated before scaling out to reach the number of instances expected by the scaling group.</li>
                     * @param _capacityRebalance Capacity rebalancing feature, which is applicable only to spot instances within the scaling group. Valid values:
<li>TRUE: Enable this feature. When spot instances in the scaling group are about to be automatically recycled by the spot instance service, AS proactively initiates the termination process of the spot instances. If there is a configured scale-in hook, it will be triggered before termination. After the termination process starts, AS asynchronously initiates the scale-out to reach the expected number of instances.</li>
<li>FALSE: Disable this feature. AS waits for the spot instance to be terminated before scaling out to reach the number of instances expected by the scaling group.</li>
                     * 
                     */
                    void SetCapacityRebalance(const bool& _capacityRebalance);

                    /**
                     * 判断参数 CapacityRebalance 是否已赋值
                     * @return CapacityRebalance 是否已赋值
                     * 
                     */
                    bool CapacityRebalanceHasBeenSet() const;

                    /**
                     * 获取Instance name sequencing settings. When enabled, an incremental numeric sequence will be appended to the names of instances automatically created within the scaling group.
                     * @return InstanceNameIndexSettings Instance name sequencing settings. When enabled, an incremental numeric sequence will be appended to the names of instances automatically created within the scaling group.
                     * 
                     */
                    InstanceNameIndexSettings GetInstanceNameIndexSettings() const;

                    /**
                     * 设置Instance name sequencing settings. When enabled, an incremental numeric sequence will be appended to the names of instances automatically created within the scaling group.
                     * @param _instanceNameIndexSettings Instance name sequencing settings. When enabled, an incremental numeric sequence will be appended to the names of instances automatically created within the scaling group.
                     * 
                     */
                    void SetInstanceNameIndexSettings(const InstanceNameIndexSettings& _instanceNameIndexSettings);

                    /**
                     * 判断参数 InstanceNameIndexSettings 是否已赋值
                     * @return InstanceNameIndexSettings 是否已赋值
                     * 
                     */
                    bool InstanceNameIndexSettingsHasBeenSet() const;

                private:

                    /**
                     * Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Auto scaling group name, which can only contain letters, numbers, underscores, hyphens ("-"), and decimal points with a maximum length of 55 bytes and must be unique under your account.
                     */
                    std::string m_autoScalingGroupName;
                    bool m_autoScalingGroupNameHasBeenSet;

                    /**
                     * Default cooldown period in seconds. value ranges from 0 to 3600. default value: 300.
                     */
                    uint64_t m_defaultCooldown;
                    bool m_defaultCooldownHasBeenSet;

                    /**
                     * Expected number of instances, value ranges from 0 to 2000. to meet maximum value greater than or equal to expected value, expected value greater than or equal to minimum value.
                     */
                    uint64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                    /**
                     * Launch configuration ID. obtain available launch configuration ids in the following ways:.
<li>Queries the launch configuration ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/config).</li>.
<li>Specifies the launch configuration ID obtained by calling the api [DescribeLaunchConfigurations](https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the return information.</li>.
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * Maximum number of instances, value range from 0 to 2000. to meet maximum value greater than or equal to expected value, expected value greater than or equal to minimum value.
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * Minimum number of instances. value range [0,2000]. to meet maximum value equal to or greater than expected value, expected value equal to or greater than minimum value.
                     */
                    uint64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * Project ID. obtain this parameter by calling [DescribeProject](https://intl.cloud.tencent.com/document/api/651/78725?from_cn_redirect=1), `ProjectId` field in the return value. default value is 0, indicates usage of the default project.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * subnet ID list. you can obtain a valid vpc subnet ID by logging in to the [console](https://console.cloud.tencent.com/vpc/subnet). you can also call the API [DescribeSubnets](https://intl.cloud.tencent.com/document/product/215/15784?from_cn_redirect=1) and retrieve the valid vpc subnet ID from the SubnetId field in the API response.
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * Termination policy, whose maximum length is currently 1. Valid values include OLDEST_INSTANCE and NEWEST_INSTANCE.
<li>OLDEST_INSTANCE: Terminate the oldest instance in the scaling group first.</li>
<li>NEWEST_INSTANCE: Terminate the newest instance in the scaling group first.</li>
                     */
                    std::vector<std::string> m_terminationPolicies;
                    bool m_terminationPoliciesHasBeenSet;

                    /**
                     * vpc ID. when modifying the vpc, you need to change the SubnetIds parameter to the subnet of this vpc. effective VpcId can be queried by logging in to the console (https://console.cloud.tencent.com/vpc/vpc) or obtained from the VpcId field in the api response by calling the DescribeVpc api (https://intl.cloud.tencent.com/document/api/215/15778?from_cn_redirect=1).
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * List of availability zones
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Retry policy, whose valid values include IMMEDIATE_RETRY, INCREMENTAL_INTERVALS, and NO_RETRY, with the default value being IMMEDIATE_RETRY. A partially successful scaling activity is considered a failed activity.
<li>IMMEDIATE_RETRY: Immediately retry, and quickly retry in a short period. There will be no retry anymore after a certain number of consecutive failures (5).</li>
<li>INCREMENTAL_INTERVALS: Retry with incremental intervals. As the number of consecutive failures increases, the retry intervals gradually become longer, ranging from seconds to one day.</li>
<li>NO_RETRY: There will be no retry until another user call or alarm information is received.</li>
                     */
                    std::string m_retryPolicy;
                    bool m_retryPolicyHasBeenSet;

                    /**
                     * AZ verification policy, whose valid values include ALL and ANY, with the default value being ANY. This policy comes into effect when actual changes are made to resource-related fields in the scaling group (such as launch configuration, AZ, or subnet).
<li>ALL: Verification passes if all AZs or subnets are available; otherwise, a verification error will be reported.<li>
<li>ANY: Verification passes if any AZ or subnet is available; otherwise, a verification error will be reported.</li>

Common reasons for unavailable AZs or subnets include the CVM InstanceType in the AZ being sold out, the CBS cloud disk in the AZ being sold out, insufficient quota in the AZ, and insufficient IP addresses in the subnet.
If there is no AZ or subnet in Zones/SubnetIds, a verification error will be reported regardless of the values of ZonesCheckPolicy.
                     */
                    std::string m_zonesCheckPolicy;
                    bool m_zonesCheckPolicyHasBeenSet;

                    /**
                     * Service settings such as unhealthy instance replacement.
                     */
                    ServiceSettings m_serviceSettings;
                    bool m_serviceSettingsHasBeenSet;

                    /**
                     * The number of IPv6 addresses that an instance has. valid values: 0 and 1. default value: 0, which means the instance does not allocate an IPv6 address. use a private network that supports IPv6 and enable IPv6 CIDR in the subnet. for usage restrictions, see [IPv6 usage limits](https://intl.cloud.tencent.com/document/product/1142/38369?from_cn_redirect=1).
                     */
                    int64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                    /**
                     * Multi-AZ/multi-subnet policy, whose valid values include PRIORITY and EQUALITY, with the default value being PRIORITY.
<li>PRIORITY: Instances are attempted to be created taking the order of the AZ/subnet list as the priority. If the highest-priority AZ/subnet can create instances successfully, instances can always be created in that AZ/subnet.</li>
<li>EQUALITY: The instances added through scale-out will be distributed across multiple AZs/subnets to ensure a relatively balanced number of instances in each AZ/subnet after scaling out.</li>

Points to consider regarding this policy:
<li>When the scaling group is based on a classic network, this policy applies to the multi-AZ; when the scaling group is based on a VPC network, this policy applies to the multi-subnet, in this case, the AZs are no longer considered. For example, if there are four subnets labeled A, B, C, and D, where A, B, and C are in AZ 1 and D is in AZ 2, the subnets A, B, C, and D are considered for sorting without regard to AZs 1 and 2.</li>
<li>This policy applies to the multi-AZ/multi-subnet and not to the InstanceTypes parameter of the launch configuration, which is selected according to the priority policy.</li>
<li>When instances are created according to the PRIORITY policy, ensure the policy for multiple models first, followed by the policy for the multi-AZ/subnet. For example, with models A and B and subnets 1, 2, and 3, attempts will be made in the order of A1, A2, A3, B1, B2, and B3. If A1 is sold out, A2 will be attempted (instead of B1).</li>
                     */
                    std::string m_multiZoneSubnetPolicy;
                    bool m_multiZoneSubnetPolicyHasBeenSet;

                    /**
                     * Scaling group instance health check type, whose valid values include:
<li>CVM: Determines whether an instance is unhealthy based on its network status. An unhealthy network status is indicated by an event where instances become unreachable via PING. Detailed criteria of judgment can be found in [Instance Health Check](https://intl.cloud.tencent.com/document/product/377/8553?from_cn_redirect=1).</li>
<li>CLB: Determines whether an instance is unhealthy based on the health check status of CLB. For principles behind CLB health checks, see [Health Check](https://intl.cloud.tencent.com/document/product/214/6097?from_cn_redirect=1).</li>
                     */
                    std::string m_healthCheckType;
                    bool m_healthCheckTypeHasBeenSet;

                    /**
                     * Grace period of the CLB health check
                     */
                    uint64_t m_loadBalancerHealthCheckGracePeriod;
                    bool m_loadBalancerHealthCheckGracePeriodHasBeenSet;

                    /**
                     * Instance assignment policy, whose valid values include LAUNCH_CONFIGURATION and SPOT_MIXED.
<li>LAUNCH_CONFIGURATION: Represent the traditional mode of assigning instances according to the launch configuration.</li>
<li>SPOT_MIXED: Represent the spot mixed mode. Currently, this mode is supported only when the launch configuration is set to the pay-as-you-go billing mode. In the mixed mode, the scaling group will scale out pay-as-you-go models or spot models based on the predefined settings. When the mixed mode is used, the billing type of the associated launch configuration cannot be modified.</li>
                     */
                    std::string m_instanceAllocationPolicy;
                    bool m_instanceAllocationPolicyHasBeenSet;

                    /**
                     * Specifies how to assign pay-as-you-go instances and spot instances.
This parameter is valid only when `InstanceAllocationPolicy` is set to `SPOT_MIXED`.
                     */
                    SpotMixedAllocationPolicy m_spotMixedAllocationPolicy;
                    bool m_spotMixedAllocationPolicyHasBeenSet;

                    /**
                     * Capacity rebalancing feature, which is applicable only to spot instances within the scaling group. Valid values:
<li>TRUE: Enable this feature. When spot instances in the scaling group are about to be automatically recycled by the spot instance service, AS proactively initiates the termination process of the spot instances. If there is a configured scale-in hook, it will be triggered before termination. After the termination process starts, AS asynchronously initiates the scale-out to reach the expected number of instances.</li>
<li>FALSE: Disable this feature. AS waits for the spot instance to be terminated before scaling out to reach the number of instances expected by the scaling group.</li>
                     */
                    bool m_capacityRebalance;
                    bool m_capacityRebalanceHasBeenSet;

                    /**
                     * Instance name sequencing settings. When enabled, an incremental numeric sequence will be appended to the names of instances automatically created within the scaling group.
                     */
                    InstanceNameIndexSettings m_instanceNameIndexSettings;
                    bool m_instanceNameIndexSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_MODIFYAUTOSCALINGGROUPREQUEST_H_
