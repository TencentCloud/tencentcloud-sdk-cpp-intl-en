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
#include <tencentcloud/as/v20180419/model/HostNameIndexSettings.h>


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
                     * 获取<p>Scaling group ID. obtain available scaling group ids in the following ways:</p><li>query scaling group ids by logging in to the <a href="https://console.cloud.tencent.com/autoscaling/group">console</a>.</li><li>obtain scaling group ids by calling the <a href="https://www.tencentcloud.com/document/api/377/20438?from_cn_redirect=1">DescribeAutoScalingGroups</a> api and retrieving AutoScalingGroupId from the returned information.</li>.
                     * @return AutoScalingGroupId <p>Scaling group ID. obtain available scaling group ids in the following ways:</p><li>query scaling group ids by logging in to the <a href="https://console.cloud.tencent.com/autoscaling/group">console</a>.</li><li>obtain scaling group ids by calling the <a href="https://www.tencentcloud.com/document/api/377/20438?from_cn_redirect=1">DescribeAutoScalingGroups</a> api and retrieving AutoScalingGroupId from the returned information.</li>.
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置<p>Scaling group ID. obtain available scaling group ids in the following ways:</p><li>query scaling group ids by logging in to the <a href="https://console.cloud.tencent.com/autoscaling/group">console</a>.</li><li>obtain scaling group ids by calling the <a href="https://www.tencentcloud.com/document/api/377/20438?from_cn_redirect=1">DescribeAutoScalingGroups</a> api and retrieving AutoScalingGroupId from the returned information.</li>.
                     * @param _autoScalingGroupId <p>Scaling group ID. obtain available scaling group ids in the following ways:</p><li>query scaling group ids by logging in to the <a href="https://console.cloud.tencent.com/autoscaling/group">console</a>.</li><li>obtain scaling group ids by calling the <a href="https://www.tencentcloud.com/document/api/377/20438?from_cn_redirect=1">DescribeAutoScalingGroups</a> api and retrieving AutoScalingGroupId from the returned information.</li>.
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
                     * 获取<p>The scaling group name must be unique in your account. name only supports chinese, english, digits, underscore, separator "-", and decimal point. the maximum length cannot exceed 55 bytes.</p>.
                     * @return AutoScalingGroupName <p>The scaling group name must be unique in your account. name only supports chinese, english, digits, underscore, separator "-", and decimal point. the maximum length cannot exceed 55 bytes.</p>.
                     * 
                     */
                    std::string GetAutoScalingGroupName() const;

                    /**
                     * 设置<p>The scaling group name must be unique in your account. name only supports chinese, english, digits, underscore, separator "-", and decimal point. the maximum length cannot exceed 55 bytes.</p>.
                     * @param _autoScalingGroupName <p>The scaling group name must be unique in your account. name only supports chinese, english, digits, underscore, separator "-", and decimal point. the maximum length cannot exceed 55 bytes.</p>.
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
                     * 获取<P>Default cooldown in seconds, value ranges from 0 to 3600, default value is 300.</p>.
                     * @return DefaultCooldown <P>Default cooldown in seconds, value ranges from 0 to 3600, default value is 300.</p>.
                     * 
                     */
                    uint64_t GetDefaultCooldown() const;

                    /**
                     * 设置<P>Default cooldown in seconds, value ranges from 0 to 3600, default value is 300.</p>.
                     * @param _defaultCooldown <P>Default cooldown in seconds, value ranges from 0 to 3600, default value is 300.</p>.
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
                     * 获取<P>Expected number of instances. value range [0,2000]. to meet the maximum value equal to or greater than the expected value, and the expected value equal to or greater than the minimum value.</p>.
                     * @return DesiredCapacity <P>Expected number of instances. value range [0,2000]. to meet the maximum value equal to or greater than the expected value, and the expected value equal to or greater than the minimum value.</p>.
                     * 
                     */
                    uint64_t GetDesiredCapacity() const;

                    /**
                     * 设置<P>Expected number of instances. value range [0,2000]. to meet the maximum value equal to or greater than the expected value, and the expected value equal to or greater than the minimum value.</p>.
                     * @param _desiredCapacity <P>Expected number of instances. value range [0,2000]. to meet the maximum value equal to or greater than the expected value, and the expected value equal to or greater than the minimum value.</p>.
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
                     * 获取<p>Launch configuration ID. obtain available launch configuration ids in the following ways:</p><li>query the launch configuration ID by logging in to the <a href="https://console.cloud.tencent.com/autoscaling/config">console</a>.</li><li>obtain the launch configuration ID by calling the <a href="https://www.tencentcloud.com/document/api/377/20445?from_cn_redirect=1">DescribeLaunchConfigurations</a> api and retrieving the LaunchConfigurationId from the returned information.</li>.
                     * @return LaunchConfigurationId <p>Launch configuration ID. obtain available launch configuration ids in the following ways:</p><li>query the launch configuration ID by logging in to the <a href="https://console.cloud.tencent.com/autoscaling/config">console</a>.</li><li>obtain the launch configuration ID by calling the <a href="https://www.tencentcloud.com/document/api/377/20445?from_cn_redirect=1">DescribeLaunchConfigurations</a> api and retrieving the LaunchConfigurationId from the returned information.</li>.
                     * 
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置<p>Launch configuration ID. obtain available launch configuration ids in the following ways:</p><li>query the launch configuration ID by logging in to the <a href="https://console.cloud.tencent.com/autoscaling/config">console</a>.</li><li>obtain the launch configuration ID by calling the <a href="https://www.tencentcloud.com/document/api/377/20445?from_cn_redirect=1">DescribeLaunchConfigurations</a> api and retrieving the LaunchConfigurationId from the returned information.</li>.
                     * @param _launchConfigurationId <p>Launch configuration ID. obtain available launch configuration ids in the following ways:</p><li>query the launch configuration ID by logging in to the <a href="https://console.cloud.tencent.com/autoscaling/config">console</a>.</li><li>obtain the launch configuration ID by calling the <a href="https://www.tencentcloud.com/document/api/377/20445?from_cn_redirect=1">DescribeLaunchConfigurations</a> api and retrieving the LaunchConfigurationId from the returned information.</li>.
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
                     * 获取<P>Maximum number of instances. value range: [0,2000]. to meet the requirement, the maximum value must be equal to or greater than the expected value, and the expected value must be equal to or greater than the minimum value.</p>.
                     * @return MaxSize <P>Maximum number of instances. value range: [0,2000]. to meet the requirement, the maximum value must be equal to or greater than the expected value, and the expected value must be equal to or greater than the minimum value.</p>.
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置<P>Maximum number of instances. value range: [0,2000]. to meet the requirement, the maximum value must be equal to or greater than the expected value, and the expected value must be equal to or greater than the minimum value.</p>.
                     * @param _maxSize <P>Maximum number of instances. value range: [0,2000]. to meet the requirement, the maximum value must be equal to or greater than the expected value, and the expected value must be equal to or greater than the minimum value.</p>.
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
                     * 获取<P>Minimum number of instances. value range: [0,2000]. to meet the requirement, the maximum value must be equal to or greater than the expected value, and the expected value must be equal to or greater than the minimum value.</p>.
                     * @return MinSize <P>Minimum number of instances. value range: [0,2000]. to meet the requirement, the maximum value must be equal to or greater than the expected value, and the expected value must be equal to or greater than the minimum value.</p>.
                     * 
                     */
                    uint64_t GetMinSize() const;

                    /**
                     * 设置<P>Minimum number of instances. value range: [0,2000]. to meet the requirement, the maximum value must be equal to or greater than the expected value, and the expected value must be equal to or greater than the minimum value.</p>.
                     * @param _minSize <P>Minimum number of instances. value range: [0,2000]. to meet the requirement, the maximum value must be equal to or greater than the expected value, and the expected value must be equal to or greater than the minimum value.</p>.
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
                     * 获取<p>Project ID. obtain this parameter by calling the `ProjectId` field in the return value of <a href="https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1">DescribeProject</a>. default value is 0, indicating usage of the default project.</p>.
                     * @return ProjectId <p>Project ID. obtain this parameter by calling the `ProjectId` field in the return value of <a href="https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1">DescribeProject</a>. default value is 0, indicating usage of the default project.</p>.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID. obtain this parameter by calling the `ProjectId` field in the return value of <a href="https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1">DescribeProject</a>. default value is 0, indicating usage of the default project.</p>.
                     * @param _projectId <p>Project ID. obtain this parameter by calling the `ProjectId` field in the return value of <a href="https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1">DescribeProject</a>. default value is 0, indicating usage of the default project.</p>.
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
                     * 获取<p>subnet ID list. valid vpc subnet ids can be obtained by logging in to the <a href="https://console.cloud.tencent.com/vpc/subnet">console</a> for querying. you can also call the API <a href="https://www.tencentcloud.com/document/product/215/15784?from_cn_redirect=1">DescribeSubnets</a> and retrieve them from the SubnetId field in the API response.</p>.
                     * @return SubnetIds <p>subnet ID list. valid vpc subnet ids can be obtained by logging in to the <a href="https://console.cloud.tencent.com/vpc/subnet">console</a> for querying. you can also call the API <a href="https://www.tencentcloud.com/document/product/215/15784?from_cn_redirect=1">DescribeSubnets</a> and retrieve them from the SubnetId field in the API response.</p>.
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置<p>subnet ID list. valid vpc subnet ids can be obtained by logging in to the <a href="https://console.cloud.tencent.com/vpc/subnet">console</a> for querying. you can also call the API <a href="https://www.tencentcloud.com/document/product/215/15784?from_cn_redirect=1">DescribeSubnets</a> and retrieve them from the SubnetId field in the API response.</p>.
                     * @param _subnetIds <p>subnet ID list. valid vpc subnet ids can be obtained by logging in to the <a href="https://console.cloud.tencent.com/vpc/subnet">console</a> for querying. you can also call the API <a href="https://www.tencentcloud.com/document/product/215/15784?from_cn_redirect=1">DescribeSubnets</a> and retrieve them from the SubnetId field in the API response.</p>.
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
                     * 获取<p>Termination policy, whose maximum length is currently 1. valid values: OLDEST_INSTANCE and NEWEST_INSTANCE.</p><li> OLDEST_INSTANCE terminates the OLDEST INSTANCE in the scaling group first.</li><li> NEWEST_INSTANCE terminates the NEWEST INSTANCE in the scaling group first.</li>.
                     * @return TerminationPolicies <p>Termination policy, whose maximum length is currently 1. valid values: OLDEST_INSTANCE and NEWEST_INSTANCE.</p><li> OLDEST_INSTANCE terminates the OLDEST INSTANCE in the scaling group first.</li><li> NEWEST_INSTANCE terminates the NEWEST INSTANCE in the scaling group first.</li>.
                     * 
                     */
                    std::vector<std::string> GetTerminationPolicies() const;

                    /**
                     * 设置<p>Termination policy, whose maximum length is currently 1. valid values: OLDEST_INSTANCE and NEWEST_INSTANCE.</p><li> OLDEST_INSTANCE terminates the OLDEST INSTANCE in the scaling group first.</li><li> NEWEST_INSTANCE terminates the NEWEST INSTANCE in the scaling group first.</li>.
                     * @param _terminationPolicies <p>Termination policy, whose maximum length is currently 1. valid values: OLDEST_INSTANCE and NEWEST_INSTANCE.</p><li> OLDEST_INSTANCE terminates the OLDEST INSTANCE in the scaling group first.</li><li> NEWEST_INSTANCE terminates the NEWEST INSTANCE in the scaling group first.</li>.
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
                     * 获取<p>vpc ID. when modifying the vpc, you need to change the SubnetIds parameter to the subnet of this vpc. effective VpcId can be queried by logging in to the <a href="https://console.cloud.tencent.com/vpc/vpc">console</a>; you can also call the <a href="https://www.tencentcloud.com/document/api/215/15778?from_cn_redirect=1">DescribeVpc</a> api and get the VpcId field from the api response.</p>.
                     * @return VpcId <p>vpc ID. when modifying the vpc, you need to change the SubnetIds parameter to the subnet of this vpc. effective VpcId can be queried by logging in to the <a href="https://console.cloud.tencent.com/vpc/vpc">console</a>; you can also call the <a href="https://www.tencentcloud.com/document/api/215/15778?from_cn_redirect=1">DescribeVpc</a> api and get the VpcId field from the api response.</p>.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>vpc ID. when modifying the vpc, you need to change the SubnetIds parameter to the subnet of this vpc. effective VpcId can be queried by logging in to the <a href="https://console.cloud.tencent.com/vpc/vpc">console</a>; you can also call the <a href="https://www.tencentcloud.com/document/api/215/15778?from_cn_redirect=1">DescribeVpc</a> api and get the VpcId field from the api response.</p>.
                     * @param _vpcId <p>vpc ID. when modifying the vpc, you need to change the SubnetIds parameter to the subnet of this vpc. effective VpcId can be queried by logging in to the <a href="https://console.cloud.tencent.com/vpc/vpc">console</a>; you can also call the <a href="https://www.tencentcloud.com/document/api/215/15778?from_cn_redirect=1">DescribeVpc</a> api and get the VpcId field from the api response.</p>.
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
                     * 获取<P>AZ list</p>.
                     * @return Zones <P>AZ list</p>.
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<P>AZ list</p>.
                     * @param _zones <P>AZ list</p>.
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
                     * 获取<p>RETRY policy, whose valid values include IMMEDIATE_RETRY, INCREMENTAL_INTERVALS, and NO_RETRY, with the default value being IMMEDIATE_RETRY. a partially successful scaling operation is considered a failed activity.</p><li>IMMEDIATE_RETRY: RETRY immediately, attempting retries in rapid succession over a short period, and cease further retries after a certain number of consecutive failures (5 times).</li><li>INCREMENTAL_INTERVALS: INCREMENTAL interval RETRY, with the RETRY interval gradually increasing as the number of consecutive failures rises, ranging from seconds to 1 day.</li><li>NO_RETRY: NO RETRY until a user call or Alarm information is received again.</li>.
                     * @return RetryPolicy <p>RETRY policy, whose valid values include IMMEDIATE_RETRY, INCREMENTAL_INTERVALS, and NO_RETRY, with the default value being IMMEDIATE_RETRY. a partially successful scaling operation is considered a failed activity.</p><li>IMMEDIATE_RETRY: RETRY immediately, attempting retries in rapid succession over a short period, and cease further retries after a certain number of consecutive failures (5 times).</li><li>INCREMENTAL_INTERVALS: INCREMENTAL interval RETRY, with the RETRY interval gradually increasing as the number of consecutive failures rises, ranging from seconds to 1 day.</li><li>NO_RETRY: NO RETRY until a user call or Alarm information is received again.</li>.
                     * 
                     */
                    std::string GetRetryPolicy() const;

                    /**
                     * 设置<p>RETRY policy, whose valid values include IMMEDIATE_RETRY, INCREMENTAL_INTERVALS, and NO_RETRY, with the default value being IMMEDIATE_RETRY. a partially successful scaling operation is considered a failed activity.</p><li>IMMEDIATE_RETRY: RETRY immediately, attempting retries in rapid succession over a short period, and cease further retries after a certain number of consecutive failures (5 times).</li><li>INCREMENTAL_INTERVALS: INCREMENTAL interval RETRY, with the RETRY interval gradually increasing as the number of consecutive failures rises, ranging from seconds to 1 day.</li><li>NO_RETRY: NO RETRY until a user call or Alarm information is received again.</li>.
                     * @param _retryPolicy <p>RETRY policy, whose valid values include IMMEDIATE_RETRY, INCREMENTAL_INTERVALS, and NO_RETRY, with the default value being IMMEDIATE_RETRY. a partially successful scaling operation is considered a failed activity.</p><li>IMMEDIATE_RETRY: RETRY immediately, attempting retries in rapid succession over a short period, and cease further retries after a certain number of consecutive failures (5 times).</li><li>INCREMENTAL_INTERVALS: INCREMENTAL interval RETRY, with the RETRY interval gradually increasing as the number of consecutive failures rises, ranging from seconds to 1 day.</li><li>NO_RETRY: NO RETRY until a user call or Alarm information is received again.</li>.
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
                     * 获取<p>Availability Zone validation policy. valid values include ALL and ANY. default value: ANY. it is effective when scaling group actual change resource-related fields (launch configuration, az, subnet) are modified.</p><li> ALL: verification passes if ALL azs (Zone) or subnets (SubnetId) are available. otherwise, a verification error will be reported.</li><li> ANY: verification passes if ANY AZ (Zone) or subnet (SubnetId) is available. otherwise, a verification error will be reported.</li><p>common causes for unavailable azs or subnets include CVM instancetype sold out in the az, CBS cloud disk sold out in the az, insufficient quota in the az, or insufficient IP addresses in the subnet.</p><p>if Zones/SubnetIds contain nonexistent azs or subnets, a verification error will be reported regardless of the values of ZonesCheckPolicy.</p>.
                     * @return ZonesCheckPolicy <p>Availability Zone validation policy. valid values include ALL and ANY. default value: ANY. it is effective when scaling group actual change resource-related fields (launch configuration, az, subnet) are modified.</p><li> ALL: verification passes if ALL azs (Zone) or subnets (SubnetId) are available. otherwise, a verification error will be reported.</li><li> ANY: verification passes if ANY AZ (Zone) or subnet (SubnetId) is available. otherwise, a verification error will be reported.</li><p>common causes for unavailable azs or subnets include CVM instancetype sold out in the az, CBS cloud disk sold out in the az, insufficient quota in the az, or insufficient IP addresses in the subnet.</p><p>if Zones/SubnetIds contain nonexistent azs or subnets, a verification error will be reported regardless of the values of ZonesCheckPolicy.</p>.
                     * 
                     */
                    std::string GetZonesCheckPolicy() const;

                    /**
                     * 设置<p>Availability Zone validation policy. valid values include ALL and ANY. default value: ANY. it is effective when scaling group actual change resource-related fields (launch configuration, az, subnet) are modified.</p><li> ALL: verification passes if ALL azs (Zone) or subnets (SubnetId) are available. otherwise, a verification error will be reported.</li><li> ANY: verification passes if ANY AZ (Zone) or subnet (SubnetId) is available. otherwise, a verification error will be reported.</li><p>common causes for unavailable azs or subnets include CVM instancetype sold out in the az, CBS cloud disk sold out in the az, insufficient quota in the az, or insufficient IP addresses in the subnet.</p><p>if Zones/SubnetIds contain nonexistent azs or subnets, a verification error will be reported regardless of the values of ZonesCheckPolicy.</p>.
                     * @param _zonesCheckPolicy <p>Availability Zone validation policy. valid values include ALL and ANY. default value: ANY. it is effective when scaling group actual change resource-related fields (launch configuration, az, subnet) are modified.</p><li> ALL: verification passes if ALL azs (Zone) or subnets (SubnetId) are available. otherwise, a verification error will be reported.</li><li> ANY: verification passes if ANY AZ (Zone) or subnet (SubnetId) is available. otherwise, a verification error will be reported.</li><p>common causes for unavailable azs or subnets include CVM instancetype sold out in the az, CBS cloud disk sold out in the az, insufficient quota in the az, or insufficient IP addresses in the subnet.</p><p>if Zones/SubnetIds contain nonexistent azs or subnets, a verification error will be reported regardless of the values of ZonesCheckPolicy.</p>.
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
                     * 获取<P>Service settings, including cloud monitoring and unhealthy instance replacement.</p>.
                     * @return ServiceSettings <P>Service settings, including cloud monitoring and unhealthy instance replacement.</p>.
                     * 
                     */
                    ServiceSettings GetServiceSettings() const;

                    /**
                     * 设置<P>Service settings, including cloud monitoring and unhealthy instance replacement.</p>.
                     * @param _serviceSettings <P>Service settings, including cloud monitoring and unhealthy instance replacement.</p>.
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
                     * 获取<p>The instance has a configuration for the number of IPv6 addresses. valid values include 0 and 1. the default value is 0, which means the instance does not allocate an IPv6 address. you need to use a VPC that supports IPv6 and enable IPv6 CIDR in the subnet.</p>
                     * @return Ipv6AddressCount <p>The instance has a configuration for the number of IPv6 addresses. valid values include 0 and 1. the default value is 0, which means the instance does not allocate an IPv6 address. you need to use a VPC that supports IPv6 and enable IPv6 CIDR in the subnet.</p>
                     * 
                     */
                    int64_t GetIpv6AddressCount() const;

                    /**
                     * 设置<p>The instance has a configuration for the number of IPv6 addresses. valid values include 0 and 1. the default value is 0, which means the instance does not allocate an IPv6 address. you need to use a VPC that supports IPv6 and enable IPv6 CIDR in the subnet.</p>
                     * @param _ipv6AddressCount <p>The instance has a configuration for the number of IPv6 addresses. valid values include 0 and 1. the default value is 0, which means the instance does not allocate an IPv6 address. you need to use a VPC that supports IPv6 and enable IPv6 CIDR in the subnet.</p>
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
                     * 获取<p>The multi-az/subnet policy, with values including PRIORITY and EQUALITY, defaults to PRIORITY.</p><li> PRIORITY: attempt to create instances taking the order of the az/subnet list as the PRIORITY. if instances can be successfully created in the az/subnet with the highest PRIORITY, they will always be created there.</li> <li> EQUALITY: instances added through scale-out will be distributed across multiple azs/subnets to ensure A relatively balanced number of instances in each az/subnet after expansion.</li> <p>points to consider:</p><li> when the scaling group is based on A classic network, this policy applies to multi-az. when the scaling group is based on A VPC network, this policy applies to multi-subnet, no longer considering AZ factors. for example, with four subnets labeled A, B, c, and D, where A, B, and c are in availability zone 1 and D is in availability zone 2, consider subnets A, B, c, and D for sorting, without considering availability zones 1 and 2.</li> <li> this policy applies to multi-az/subnet but is not applicable to the instancetypes parameter of the launch configuration. selection of multiple models is according to PRIORITY policy.</li> <li> when creating instances according to the PRIORITY policy, ensure the policy for multiple models first, then the policy for multi-az/subnet. for example, with multiple models A and B, and multiple subnets 1, 2, and 3, attempts will be made in the order A1, A2, A3, B1, B2, B3. if A1 is sold out, A2 will be attempted (not B1).</li>.
                     * @return MultiZoneSubnetPolicy <p>The multi-az/subnet policy, with values including PRIORITY and EQUALITY, defaults to PRIORITY.</p><li> PRIORITY: attempt to create instances taking the order of the az/subnet list as the PRIORITY. if instances can be successfully created in the az/subnet with the highest PRIORITY, they will always be created there.</li> <li> EQUALITY: instances added through scale-out will be distributed across multiple azs/subnets to ensure A relatively balanced number of instances in each az/subnet after expansion.</li> <p>points to consider:</p><li> when the scaling group is based on A classic network, this policy applies to multi-az. when the scaling group is based on A VPC network, this policy applies to multi-subnet, no longer considering AZ factors. for example, with four subnets labeled A, B, c, and D, where A, B, and c are in availability zone 1 and D is in availability zone 2, consider subnets A, B, c, and D for sorting, without considering availability zones 1 and 2.</li> <li> this policy applies to multi-az/subnet but is not applicable to the instancetypes parameter of the launch configuration. selection of multiple models is according to PRIORITY policy.</li> <li> when creating instances according to the PRIORITY policy, ensure the policy for multiple models first, then the policy for multi-az/subnet. for example, with multiple models A and B, and multiple subnets 1, 2, and 3, attempts will be made in the order A1, A2, A3, B1, B2, B3. if A1 is sold out, A2 will be attempted (not B1).</li>.
                     * 
                     */
                    std::string GetMultiZoneSubnetPolicy() const;

                    /**
                     * 设置<p>The multi-az/subnet policy, with values including PRIORITY and EQUALITY, defaults to PRIORITY.</p><li> PRIORITY: attempt to create instances taking the order of the az/subnet list as the PRIORITY. if instances can be successfully created in the az/subnet with the highest PRIORITY, they will always be created there.</li> <li> EQUALITY: instances added through scale-out will be distributed across multiple azs/subnets to ensure A relatively balanced number of instances in each az/subnet after expansion.</li> <p>points to consider:</p><li> when the scaling group is based on A classic network, this policy applies to multi-az. when the scaling group is based on A VPC network, this policy applies to multi-subnet, no longer considering AZ factors. for example, with four subnets labeled A, B, c, and D, where A, B, and c are in availability zone 1 and D is in availability zone 2, consider subnets A, B, c, and D for sorting, without considering availability zones 1 and 2.</li> <li> this policy applies to multi-az/subnet but is not applicable to the instancetypes parameter of the launch configuration. selection of multiple models is according to PRIORITY policy.</li> <li> when creating instances according to the PRIORITY policy, ensure the policy for multiple models first, then the policy for multi-az/subnet. for example, with multiple models A and B, and multiple subnets 1, 2, and 3, attempts will be made in the order A1, A2, A3, B1, B2, B3. if A1 is sold out, A2 will be attempted (not B1).</li>.
                     * @param _multiZoneSubnetPolicy <p>The multi-az/subnet policy, with values including PRIORITY and EQUALITY, defaults to PRIORITY.</p><li> PRIORITY: attempt to create instances taking the order of the az/subnet list as the PRIORITY. if instances can be successfully created in the az/subnet with the highest PRIORITY, they will always be created there.</li> <li> EQUALITY: instances added through scale-out will be distributed across multiple azs/subnets to ensure A relatively balanced number of instances in each az/subnet after expansion.</li> <p>points to consider:</p><li> when the scaling group is based on A classic network, this policy applies to multi-az. when the scaling group is based on A VPC network, this policy applies to multi-subnet, no longer considering AZ factors. for example, with four subnets labeled A, B, c, and D, where A, B, and c are in availability zone 1 and D is in availability zone 2, consider subnets A, B, c, and D for sorting, without considering availability zones 1 and 2.</li> <li> this policy applies to multi-az/subnet but is not applicable to the instancetypes parameter of the launch configuration. selection of multiple models is according to PRIORITY policy.</li> <li> when creating instances according to the PRIORITY policy, ensure the policy for multiple models first, then the policy for multi-az/subnet. for example, with multiple models A and B, and multiple subnets 1, 2, and 3, attempts will be made in the order A1, A2, A3, B1, B2, B3. if A1 is sold out, A2 will be attempted (not B1).</li>.
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
                     * 获取<p>Scaling group instance health check type, values are as follows:</p><li>CVM: determine whether an instance is unhealthy based on its network status. an unhealthy network status refers to an event where instances become unreachable via PING. for detailed criteria of judgment, refer to [instance health check](https://www.tencentcloud.com/document/product/377/8553?from_cn_redirect=1).</li><li>CLB: determine whether an instance is unhealthy based on the health check status of CLB. for the principle of CLB health check, see [health check](https://www.tencentcloud.com/document/product/214/6097?from_cn_redirect=1).</li>.
                     * @return HealthCheckType <p>Scaling group instance health check type, values are as follows:</p><li>CVM: determine whether an instance is unhealthy based on its network status. an unhealthy network status refers to an event where instances become unreachable via PING. for detailed criteria of judgment, refer to [instance health check](https://www.tencentcloud.com/document/product/377/8553?from_cn_redirect=1).</li><li>CLB: determine whether an instance is unhealthy based on the health check status of CLB. for the principle of CLB health check, see [health check](https://www.tencentcloud.com/document/product/214/6097?from_cn_redirect=1).</li>.
                     * 
                     */
                    std::string GetHealthCheckType() const;

                    /**
                     * 设置<p>Scaling group instance health check type, values are as follows:</p><li>CVM: determine whether an instance is unhealthy based on its network status. an unhealthy network status refers to an event where instances become unreachable via PING. for detailed criteria of judgment, refer to [instance health check](https://www.tencentcloud.com/document/product/377/8553?from_cn_redirect=1).</li><li>CLB: determine whether an instance is unhealthy based on the health check status of CLB. for the principle of CLB health check, see [health check](https://www.tencentcloud.com/document/product/214/6097?from_cn_redirect=1).</li>.
                     * @param _healthCheckType <p>Scaling group instance health check type, values are as follows:</p><li>CVM: determine whether an instance is unhealthy based on its network status. an unhealthy network status refers to an event where instances become unreachable via PING. for detailed criteria of judgment, refer to [instance health check](https://www.tencentcloud.com/document/product/377/8553?from_cn_redirect=1).</li><li>CLB: determine whether an instance is unhealthy based on the health check status of CLB. for the principle of CLB health check, see [health check](https://www.tencentcloud.com/document/product/214/6097?from_cn_redirect=1).</li>.
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
                     * 获取<p>Specifies the CLB health check grace period in seconds.</p><p>value range: [0, 7200].</p><p>default value: 0.</p>
                     * @return LoadBalancerHealthCheckGracePeriod <p>Specifies the CLB health check grace period in seconds.</p><p>value range: [0, 7200].</p><p>default value: 0.</p>
                     * 
                     */
                    uint64_t GetLoadBalancerHealthCheckGracePeriod() const;

                    /**
                     * 设置<p>Specifies the CLB health check grace period in seconds.</p><p>value range: [0, 7200].</p><p>default value: 0.</p>
                     * @param _loadBalancerHealthCheckGracePeriod <p>Specifies the CLB health check grace period in seconds.</p><p>value range: [0, 7200].</p><p>default value: 0.</p>
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
                     * 获取<p>Instance allocation policy. valid values include LAUNCH_CONFIGURATION and SPOT_MIXED.</p><li> LAUNCH_CONFIGURATION represents the traditional startup CONFIGURATION mode.</li><li> SPOT_MIXED represents the SPOT hybrid mode. currently only support hybrid mode when the LAUNCH CONFIGURATION uses pay-as-you-go billing mode. in hybrid mode, the scaling group will scale out based on the SPOT model. the billing type of the associated LAUNCH CONFIGURATION cannot be modified when using hybrid mode.</li>.
                     * @return InstanceAllocationPolicy <p>Instance allocation policy. valid values include LAUNCH_CONFIGURATION and SPOT_MIXED.</p><li> LAUNCH_CONFIGURATION represents the traditional startup CONFIGURATION mode.</li><li> SPOT_MIXED represents the SPOT hybrid mode. currently only support hybrid mode when the LAUNCH CONFIGURATION uses pay-as-you-go billing mode. in hybrid mode, the scaling group will scale out based on the SPOT model. the billing type of the associated LAUNCH CONFIGURATION cannot be modified when using hybrid mode.</li>.
                     * 
                     */
                    std::string GetInstanceAllocationPolicy() const;

                    /**
                     * 设置<p>Instance allocation policy. valid values include LAUNCH_CONFIGURATION and SPOT_MIXED.</p><li> LAUNCH_CONFIGURATION represents the traditional startup CONFIGURATION mode.</li><li> SPOT_MIXED represents the SPOT hybrid mode. currently only support hybrid mode when the LAUNCH CONFIGURATION uses pay-as-you-go billing mode. in hybrid mode, the scaling group will scale out based on the SPOT model. the billing type of the associated LAUNCH CONFIGURATION cannot be modified when using hybrid mode.</li>.
                     * @param _instanceAllocationPolicy <p>Instance allocation policy. valid values include LAUNCH_CONFIGURATION and SPOT_MIXED.</p><li> LAUNCH_CONFIGURATION represents the traditional startup CONFIGURATION mode.</li><li> SPOT_MIXED represents the SPOT hybrid mode. currently only support hybrid mode when the LAUNCH CONFIGURATION uses pay-as-you-go billing mode. in hybrid mode, the scaling group will scale out based on the SPOT model. the billing type of the associated LAUNCH CONFIGURATION cannot be modified when using hybrid mode.</li>.
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
                     * 获取<p>Allocation policy of instances for each billing type in SPOT hybrid mode.<br>available only when InstanceAllocationPolicy is set to SPOT_MIXED.</p>.
                     * @return SpotMixedAllocationPolicy <p>Allocation policy of instances for each billing type in SPOT hybrid mode.<br>available only when InstanceAllocationPolicy is set to SPOT_MIXED.</p>.
                     * 
                     */
                    SpotMixedAllocationPolicy GetSpotMixedAllocationPolicy() const;

                    /**
                     * 设置<p>Allocation policy of instances for each billing type in SPOT hybrid mode.<br>available only when InstanceAllocationPolicy is set to SPOT_MIXED.</p>.
                     * @param _spotMixedAllocationPolicy <p>Allocation policy of instances for each billing type in SPOT hybrid mode.<br>available only when InstanceAllocationPolicy is set to SPOT_MIXED.</p>.
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
                     * 获取<p>The capacity rebalancing feature is only applicable to spot instances within the scaling group. valid values:</p><li> TRUE: enable this feature. when spot instances within the scaling group are about to be automatically recycled by the spot instance service, AS initiates the termination process of spot instances. if a scale-in hook is configured, trigger before termination. after the termination process starts, AS asynchronously initiates scale-out to reach the expected number of instances.</li> <li> FALSE: disable this feature. AS waits for the spot instance to be terminated before scaling out to reach the number of instances expected by the scaling group.</li>.
                     * @return CapacityRebalance <p>The capacity rebalancing feature is only applicable to spot instances within the scaling group. valid values:</p><li> TRUE: enable this feature. when spot instances within the scaling group are about to be automatically recycled by the spot instance service, AS initiates the termination process of spot instances. if a scale-in hook is configured, trigger before termination. after the termination process starts, AS asynchronously initiates scale-out to reach the expected number of instances.</li> <li> FALSE: disable this feature. AS waits for the spot instance to be terminated before scaling out to reach the number of instances expected by the scaling group.</li>.
                     * 
                     */
                    bool GetCapacityRebalance() const;

                    /**
                     * 设置<p>The capacity rebalancing feature is only applicable to spot instances within the scaling group. valid values:</p><li> TRUE: enable this feature. when spot instances within the scaling group are about to be automatically recycled by the spot instance service, AS initiates the termination process of spot instances. if a scale-in hook is configured, trigger before termination. after the termination process starts, AS asynchronously initiates scale-out to reach the expected number of instances.</li> <li> FALSE: disable this feature. AS waits for the spot instance to be terminated before scaling out to reach the number of instances expected by the scaling group.</li>.
                     * @param _capacityRebalance <p>The capacity rebalancing feature is only applicable to spot instances within the scaling group. valid values:</p><li> TRUE: enable this feature. when spot instances within the scaling group are about to be automatically recycled by the spot instance service, AS initiates the termination process of spot instances. if a scale-in hook is configured, trigger before termination. after the termination process starts, AS asynchronously initiates scale-out to reach the expected number of instances.</li> <li> FALSE: disable this feature. AS waits for the spot instance to be terminated before scaling out to reach the number of instances expected by the scaling group.</li>.
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
                     * 获取<P>Instance name sequencing settings. once enabled, append incremental numeric sequence to the names of instances automatically created within the scaling group.</p>.
                     * @return InstanceNameIndexSettings <P>Instance name sequencing settings. once enabled, append incremental numeric sequence to the names of instances automatically created within the scaling group.</p>.
                     * 
                     */
                    InstanceNameIndexSettings GetInstanceNameIndexSettings() const;

                    /**
                     * 设置<P>Instance name sequencing settings. once enabled, append incremental numeric sequence to the names of instances automatically created within the scaling group.</p>.
                     * @param _instanceNameIndexSettings <P>Instance name sequencing settings. once enabled, append incremental numeric sequence to the names of instances automatically created within the scaling group.</p>.
                     * 
                     */
                    void SetInstanceNameIndexSettings(const InstanceNameIndexSettings& _instanceNameIndexSettings);

                    /**
                     * 判断参数 InstanceNameIndexSettings 是否已赋值
                     * @return InstanceNameIndexSettings 是否已赋值
                     * 
                     */
                    bool InstanceNameIndexSettingsHasBeenSet() const;

                    /**
                     * 获取<P>Instance hostname sequencing settings. once enabled, append incremental numeric sequence to the hostname of instances automatically created within the scaling group.</p>.
                     * @return HostNameIndexSettings <P>Instance hostname sequencing settings. once enabled, append incremental numeric sequence to the hostname of instances automatically created within the scaling group.</p>.
                     * 
                     */
                    HostNameIndexSettings GetHostNameIndexSettings() const;

                    /**
                     * 设置<P>Instance hostname sequencing settings. once enabled, append incremental numeric sequence to the hostname of instances automatically created within the scaling group.</p>.
                     * @param _hostNameIndexSettings <P>Instance hostname sequencing settings. once enabled, append incremental numeric sequence to the hostname of instances automatically created within the scaling group.</p>.
                     * 
                     */
                    void SetHostNameIndexSettings(const HostNameIndexSettings& _hostNameIndexSettings);

                    /**
                     * 判断参数 HostNameIndexSettings 是否已赋值
                     * @return HostNameIndexSettings 是否已赋值
                     * 
                     */
                    bool HostNameIndexSettingsHasBeenSet() const;

                    /**
                     * 获取<p>The concurrent scaling up functionality for matching expected numbers cannot be set when InstanceAllocationPolicy is in spot hybrid mode or when ScalingMode is in the scaling-prioritized startup mode. currently only two matching expected number scale-out activities are supported to run concurrently. other types of activities such as specified quantity scale-out or scale-in cannot be specified. set to FALSE indicates disabled.</p>.
                     * @return ConcurrentScaleOutForDesiredCapacity <p>The concurrent scaling up functionality for matching expected numbers cannot be set when InstanceAllocationPolicy is in spot hybrid mode or when ScalingMode is in the scaling-prioritized startup mode. currently only two matching expected number scale-out activities are supported to run concurrently. other types of activities such as specified quantity scale-out or scale-in cannot be specified. set to FALSE indicates disabled.</p>.
                     * 
                     */
                    bool GetConcurrentScaleOutForDesiredCapacity() const;

                    /**
                     * 设置<p>The concurrent scaling up functionality for matching expected numbers cannot be set when InstanceAllocationPolicy is in spot hybrid mode or when ScalingMode is in the scaling-prioritized startup mode. currently only two matching expected number scale-out activities are supported to run concurrently. other types of activities such as specified quantity scale-out or scale-in cannot be specified. set to FALSE indicates disabled.</p>.
                     * @param _concurrentScaleOutForDesiredCapacity <p>The concurrent scaling up functionality for matching expected numbers cannot be set when InstanceAllocationPolicy is in spot hybrid mode or when ScalingMode is in the scaling-prioritized startup mode. currently only two matching expected number scale-out activities are supported to run concurrently. other types of activities such as specified quantity scale-out or scale-in cannot be specified. set to FALSE indicates disabled.</p>.
                     * 
                     */
                    void SetConcurrentScaleOutForDesiredCapacity(const bool& _concurrentScaleOutForDesiredCapacity);

                    /**
                     * 判断参数 ConcurrentScaleOutForDesiredCapacity 是否已赋值
                     * @return ConcurrentScaleOutForDesiredCapacity 是否已赋值
                     * 
                     */
                    bool ConcurrentScaleOutForDesiredCapacityHasBeenSet() const;

                private:

                    /**
                     * <p>Scaling group ID. obtain available scaling group ids in the following ways:</p><li>query scaling group ids by logging in to the <a href="https://console.cloud.tencent.com/autoscaling/group">console</a>.</li><li>obtain scaling group ids by calling the <a href="https://www.tencentcloud.com/document/api/377/20438?from_cn_redirect=1">DescribeAutoScalingGroups</a> api and retrieving AutoScalingGroupId from the returned information.</li>.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * <p>The scaling group name must be unique in your account. name only supports chinese, english, digits, underscore, separator "-", and decimal point. the maximum length cannot exceed 55 bytes.</p>.
                     */
                    std::string m_autoScalingGroupName;
                    bool m_autoScalingGroupNameHasBeenSet;

                    /**
                     * <P>Default cooldown in seconds, value ranges from 0 to 3600, default value is 300.</p>.
                     */
                    uint64_t m_defaultCooldown;
                    bool m_defaultCooldownHasBeenSet;

                    /**
                     * <P>Expected number of instances. value range [0,2000]. to meet the maximum value equal to or greater than the expected value, and the expected value equal to or greater than the minimum value.</p>.
                     */
                    uint64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                    /**
                     * <p>Launch configuration ID. obtain available launch configuration ids in the following ways:</p><li>query the launch configuration ID by logging in to the <a href="https://console.cloud.tencent.com/autoscaling/config">console</a>.</li><li>obtain the launch configuration ID by calling the <a href="https://www.tencentcloud.com/document/api/377/20445?from_cn_redirect=1">DescribeLaunchConfigurations</a> api and retrieving the LaunchConfigurationId from the returned information.</li>.
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * <P>Maximum number of instances. value range: [0,2000]. to meet the requirement, the maximum value must be equal to or greater than the expected value, and the expected value must be equal to or greater than the minimum value.</p>.
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * <P>Minimum number of instances. value range: [0,2000]. to meet the requirement, the maximum value must be equal to or greater than the expected value, and the expected value must be equal to or greater than the minimum value.</p>.
                     */
                    uint64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * <p>Project ID. obtain this parameter by calling the `ProjectId` field in the return value of <a href="https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1">DescribeProject</a>. default value is 0, indicating usage of the default project.</p>.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>subnet ID list. valid vpc subnet ids can be obtained by logging in to the <a href="https://console.cloud.tencent.com/vpc/subnet">console</a> for querying. you can also call the API <a href="https://www.tencentcloud.com/document/product/215/15784?from_cn_redirect=1">DescribeSubnets</a> and retrieve them from the SubnetId field in the API response.</p>.
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * <p>Termination policy, whose maximum length is currently 1. valid values: OLDEST_INSTANCE and NEWEST_INSTANCE.</p><li> OLDEST_INSTANCE terminates the OLDEST INSTANCE in the scaling group first.</li><li> NEWEST_INSTANCE terminates the NEWEST INSTANCE in the scaling group first.</li>.
                     */
                    std::vector<std::string> m_terminationPolicies;
                    bool m_terminationPoliciesHasBeenSet;

                    /**
                     * <p>vpc ID. when modifying the vpc, you need to change the SubnetIds parameter to the subnet of this vpc. effective VpcId can be queried by logging in to the <a href="https://console.cloud.tencent.com/vpc/vpc">console</a>; you can also call the <a href="https://www.tencentcloud.com/document/api/215/15778?from_cn_redirect=1">DescribeVpc</a> api and get the VpcId field from the api response.</p>.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <P>AZ list</p>.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>RETRY policy, whose valid values include IMMEDIATE_RETRY, INCREMENTAL_INTERVALS, and NO_RETRY, with the default value being IMMEDIATE_RETRY. a partially successful scaling operation is considered a failed activity.</p><li>IMMEDIATE_RETRY: RETRY immediately, attempting retries in rapid succession over a short period, and cease further retries after a certain number of consecutive failures (5 times).</li><li>INCREMENTAL_INTERVALS: INCREMENTAL interval RETRY, with the RETRY interval gradually increasing as the number of consecutive failures rises, ranging from seconds to 1 day.</li><li>NO_RETRY: NO RETRY until a user call or Alarm information is received again.</li>.
                     */
                    std::string m_retryPolicy;
                    bool m_retryPolicyHasBeenSet;

                    /**
                     * <p>Availability Zone validation policy. valid values include ALL and ANY. default value: ANY. it is effective when scaling group actual change resource-related fields (launch configuration, az, subnet) are modified.</p><li> ALL: verification passes if ALL azs (Zone) or subnets (SubnetId) are available. otherwise, a verification error will be reported.</li><li> ANY: verification passes if ANY AZ (Zone) or subnet (SubnetId) is available. otherwise, a verification error will be reported.</li><p>common causes for unavailable azs or subnets include CVM instancetype sold out in the az, CBS cloud disk sold out in the az, insufficient quota in the az, or insufficient IP addresses in the subnet.</p><p>if Zones/SubnetIds contain nonexistent azs or subnets, a verification error will be reported regardless of the values of ZonesCheckPolicy.</p>.
                     */
                    std::string m_zonesCheckPolicy;
                    bool m_zonesCheckPolicyHasBeenSet;

                    /**
                     * <P>Service settings, including cloud monitoring and unhealthy instance replacement.</p>.
                     */
                    ServiceSettings m_serviceSettings;
                    bool m_serviceSettingsHasBeenSet;

                    /**
                     * <p>The instance has a configuration for the number of IPv6 addresses. valid values include 0 and 1. the default value is 0, which means the instance does not allocate an IPv6 address. you need to use a VPC that supports IPv6 and enable IPv6 CIDR in the subnet.</p>
                     */
                    int64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                    /**
                     * <p>The multi-az/subnet policy, with values including PRIORITY and EQUALITY, defaults to PRIORITY.</p><li> PRIORITY: attempt to create instances taking the order of the az/subnet list as the PRIORITY. if instances can be successfully created in the az/subnet with the highest PRIORITY, they will always be created there.</li> <li> EQUALITY: instances added through scale-out will be distributed across multiple azs/subnets to ensure A relatively balanced number of instances in each az/subnet after expansion.</li> <p>points to consider:</p><li> when the scaling group is based on A classic network, this policy applies to multi-az. when the scaling group is based on A VPC network, this policy applies to multi-subnet, no longer considering AZ factors. for example, with four subnets labeled A, B, c, and D, where A, B, and c are in availability zone 1 and D is in availability zone 2, consider subnets A, B, c, and D for sorting, without considering availability zones 1 and 2.</li> <li> this policy applies to multi-az/subnet but is not applicable to the instancetypes parameter of the launch configuration. selection of multiple models is according to PRIORITY policy.</li> <li> when creating instances according to the PRIORITY policy, ensure the policy for multiple models first, then the policy for multi-az/subnet. for example, with multiple models A and B, and multiple subnets 1, 2, and 3, attempts will be made in the order A1, A2, A3, B1, B2, B3. if A1 is sold out, A2 will be attempted (not B1).</li>.
                     */
                    std::string m_multiZoneSubnetPolicy;
                    bool m_multiZoneSubnetPolicyHasBeenSet;

                    /**
                     * <p>Scaling group instance health check type, values are as follows:</p><li>CVM: determine whether an instance is unhealthy based on its network status. an unhealthy network status refers to an event where instances become unreachable via PING. for detailed criteria of judgment, refer to [instance health check](https://www.tencentcloud.com/document/product/377/8553?from_cn_redirect=1).</li><li>CLB: determine whether an instance is unhealthy based on the health check status of CLB. for the principle of CLB health check, see [health check](https://www.tencentcloud.com/document/product/214/6097?from_cn_redirect=1).</li>.
                     */
                    std::string m_healthCheckType;
                    bool m_healthCheckTypeHasBeenSet;

                    /**
                     * <p>Specifies the CLB health check grace period in seconds.</p><p>value range: [0, 7200].</p><p>default value: 0.</p>
                     */
                    uint64_t m_loadBalancerHealthCheckGracePeriod;
                    bool m_loadBalancerHealthCheckGracePeriodHasBeenSet;

                    /**
                     * <p>Instance allocation policy. valid values include LAUNCH_CONFIGURATION and SPOT_MIXED.</p><li> LAUNCH_CONFIGURATION represents the traditional startup CONFIGURATION mode.</li><li> SPOT_MIXED represents the SPOT hybrid mode. currently only support hybrid mode when the LAUNCH CONFIGURATION uses pay-as-you-go billing mode. in hybrid mode, the scaling group will scale out based on the SPOT model. the billing type of the associated LAUNCH CONFIGURATION cannot be modified when using hybrid mode.</li>.
                     */
                    std::string m_instanceAllocationPolicy;
                    bool m_instanceAllocationPolicyHasBeenSet;

                    /**
                     * <p>Allocation policy of instances for each billing type in SPOT hybrid mode.<br>available only when InstanceAllocationPolicy is set to SPOT_MIXED.</p>.
                     */
                    SpotMixedAllocationPolicy m_spotMixedAllocationPolicy;
                    bool m_spotMixedAllocationPolicyHasBeenSet;

                    /**
                     * <p>The capacity rebalancing feature is only applicable to spot instances within the scaling group. valid values:</p><li> TRUE: enable this feature. when spot instances within the scaling group are about to be automatically recycled by the spot instance service, AS initiates the termination process of spot instances. if a scale-in hook is configured, trigger before termination. after the termination process starts, AS asynchronously initiates scale-out to reach the expected number of instances.</li> <li> FALSE: disable this feature. AS waits for the spot instance to be terminated before scaling out to reach the number of instances expected by the scaling group.</li>.
                     */
                    bool m_capacityRebalance;
                    bool m_capacityRebalanceHasBeenSet;

                    /**
                     * <P>Instance name sequencing settings. once enabled, append incremental numeric sequence to the names of instances automatically created within the scaling group.</p>.
                     */
                    InstanceNameIndexSettings m_instanceNameIndexSettings;
                    bool m_instanceNameIndexSettingsHasBeenSet;

                    /**
                     * <P>Instance hostname sequencing settings. once enabled, append incremental numeric sequence to the hostname of instances automatically created within the scaling group.</p>.
                     */
                    HostNameIndexSettings m_hostNameIndexSettings;
                    bool m_hostNameIndexSettingsHasBeenSet;

                    /**
                     * <p>The concurrent scaling up functionality for matching expected numbers cannot be set when InstanceAllocationPolicy is in spot hybrid mode or when ScalingMode is in the scaling-prioritized startup mode. currently only two matching expected number scale-out activities are supported to run concurrently. other types of activities such as specified quantity scale-out or scale-in cannot be specified. set to FALSE indicates disabled.</p>.
                     */
                    bool m_concurrentScaleOutForDesiredCapacity;
                    bool m_concurrentScaleOutForDesiredCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_MODIFYAUTOSCALINGGROUPREQUEST_H_
