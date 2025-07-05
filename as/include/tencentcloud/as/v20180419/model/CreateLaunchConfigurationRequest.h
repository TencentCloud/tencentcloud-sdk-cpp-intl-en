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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CREATELAUNCHCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CREATELAUNCHCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/SystemDisk.h>
#include <tencentcloud/as/v20180419/model/DataDisk.h>
#include <tencentcloud/as/v20180419/model/InternetAccessible.h>
#include <tencentcloud/as/v20180419/model/LoginSettings.h>
#include <tencentcloud/as/v20180419/model/EnhancedService.h>
#include <tencentcloud/as/v20180419/model/InstanceMarketOptionsRequest.h>
#include <tencentcloud/as/v20180419/model/InstanceTag.h>
#include <tencentcloud/as/v20180419/model/Tag.h>
#include <tencentcloud/as/v20180419/model/HostNameSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceNameSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceChargePrepaid.h>
#include <tencentcloud/as/v20180419/model/IPv6InternetAccessible.h>
#include <tencentcloud/as/v20180419/model/Metadata.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * CreateLaunchConfiguration request structure.
                */
                class CreateLaunchConfigurationRequest : public AbstractModel
                {
                public:
                    CreateLaunchConfigurationRequest();
                    ~CreateLaunchConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Display name of the launch configuration, which can contain letters, digits, underscores and hyphens (-), and dots. Up to of 60 bytes allowed..
                     * @return LaunchConfigurationName Display name of the launch configuration, which can contain letters, digits, underscores and hyphens (-), and dots. Up to of 60 bytes allowed..
                     * 
                     */
                    std::string GetLaunchConfigurationName() const;

                    /**
                     * 设置Display name of the launch configuration, which can contain letters, digits, underscores and hyphens (-), and dots. Up to of 60 bytes allowed..
                     * @param _launchConfigurationName Display name of the launch configuration, which can contain letters, digits, underscores and hyphens (-), and dots. Up to of 60 bytes allowed..
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
                     * 获取[Image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are three types of images: <br/><li>Public images </li><li>Custom images </li><li>Shared images </li><br/>You can obtain the image IDs in the [CVM console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE).</li><li>You can also use the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response.</li>
                     * @return ImageId [Image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are three types of images: <br/><li>Public images </li><li>Custom images </li><li>Shared images </li><br/>You can obtain the image IDs in the [CVM console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE).</li><li>You can also use the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response.</li>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置[Image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are three types of images: <br/><li>Public images </li><li>Custom images </li><li>Shared images </li><br/>You can obtain the image IDs in the [CVM console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE).</li><li>You can also use the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response.</li>
                     * @param _imageId [Image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are three types of images: <br/><li>Public images </li><li>Custom images </li><li>Shared images </li><br/>You can obtain the image IDs in the [CVM console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE).</li><li>You can also use the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response.</li>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取Project ID of the launch configuration. The default project is used if it is left blank.
Note that this project ID is not the same as the project ID of the scaling group. 
                     * @return ProjectId Project ID of the launch configuration. The default project is used if it is left blank.
Note that this project ID is not the same as the project ID of the scaling group. 
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID of the launch configuration. The default project is used if it is left blank.
Note that this project ID is not the same as the project ID of the scaling group. 
                     * @param _projectId Project ID of the launch configuration. The default project is used if it is left blank.
Note that this project ID is not the same as the project ID of the scaling group. 
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
                     * 获取Instance model. Different instance models specify different resource specifications. The specific value can be obtained by calling the [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) API to get the latest specification table or referring to the descriptions in [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1).
`InstanceType` and `InstanceTypes` are mutually exclusive, and one and only one of them must be entered.
                     * @return InstanceType Instance model. Different instance models specify different resource specifications. The specific value can be obtained by calling the [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) API to get the latest specification table or referring to the descriptions in [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1).
`InstanceType` and `InstanceTypes` are mutually exclusive, and one and only one of them must be entered.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance model. Different instance models specify different resource specifications. The specific value can be obtained by calling the [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) API to get the latest specification table or referring to the descriptions in [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1).
`InstanceType` and `InstanceTypes` are mutually exclusive, and one and only one of them must be entered.
                     * @param _instanceType Instance model. Different instance models specify different resource specifications. The specific value can be obtained by calling the [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) API to get the latest specification table or referring to the descriptions in [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1).
`InstanceType` and `InstanceTypes` are mutually exclusive, and one and only one of them must be entered.
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
                     * 获取System disk configuration of the instance. If this parameter is not specified, the default value will be used.
                     * @return SystemDisk System disk configuration of the instance. If this parameter is not specified, the default value will be used.
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置System disk configuration of the instance. If this parameter is not specified, the default value will be used.
                     * @param _systemDisk System disk configuration of the instance. If this parameter is not specified, the default value will be used.
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取Information of the instance's data disk configuration. If this parameter is not specified, no data disk is purchased by default. Up to 11 data disks can be supported.
                     * @return DataDisks Information of the instance's data disk configuration. If this parameter is not specified, no data disk is purchased by default. Up to 11 data disks can be supported.
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置Information of the instance's data disk configuration. If this parameter is not specified, no data disk is purchased by default. Up to 11 data disks can be supported.
                     * @param _dataDisks Information of the instance's data disk configuration. If this parameter is not specified, no data disk is purchased by default. Up to 11 data disks can be supported.
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
                     * 获取Configuration of public network bandwidth. If this parameter is not specified, 0 Mbps will be used by default.
                     * @return InternetAccessible Configuration of public network bandwidth. If this parameter is not specified, 0 Mbps will be used by default.
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置Configuration of public network bandwidth. If this parameter is not specified, 0 Mbps will be used by default.
                     * @param _internetAccessible Configuration of public network bandwidth. If this parameter is not specified, 0 Mbps will be used by default.
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
                     * 获取Login settings of the instance. You can use this parameter to set the login method, password, and key of the instance or keep the login settings of the original image. By default, a random password will be generated and sent to you via the Message Center.
                     * @return LoginSettings Login settings of the instance. You can use this parameter to set the login method, password, and key of the instance or keep the login settings of the original image. By default, a random password will be generated and sent to you via the Message Center.
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置Login settings of the instance. You can use this parameter to set the login method, password, and key of the instance or keep the login settings of the original image. By default, a random password will be generated and sent to you via the Message Center.
                     * @param _loginSettings Login settings of the instance. You can use this parameter to set the login method, password, and key of the instance or keep the login settings of the original image. By default, a random password will be generated and sent to you via the Message Center.
                     * 
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取The security group to which the instance belongs. This parameter can be obtained by calling the `SecurityGroupId` field in the returned value of [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1). If this parameter is not specified, no security group will be bound by default.
                     * @return SecurityGroupIds The security group to which the instance belongs. This parameter can be obtained by calling the `SecurityGroupId` field in the returned value of [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1). If this parameter is not specified, no security group will be bound by default.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置The security group to which the instance belongs. This parameter can be obtained by calling the `SecurityGroupId` field in the returned value of [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1). If this parameter is not specified, no security group will be bound by default.
                     * @param _securityGroupIds The security group to which the instance belongs. This parameter can be obtained by calling the `SecurityGroupId` field in the returned value of [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1). If this parameter is not specified, no security group will be bound by default.
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
                     * 获取Enhanced services. You can use this parameter to specify whether to enable services such as Cloud Security and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Cloud Security will be enabled by default.
                     * @return EnhancedService Enhanced services. You can use this parameter to specify whether to enable services such as Cloud Security and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Cloud Security will be enabled by default.
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置Enhanced services. You can use this parameter to specify whether to enable services such as Cloud Security and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Cloud Security will be enabled by default.
                     * @param _enhancedService Enhanced services. You can use this parameter to specify whether to enable services such as Cloud Security and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Cloud Security will be enabled by default.
                     * 
                     */
                    void SetEnhancedService(const EnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     * 
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取Base64-encoded custom data of up to 16 KB.
                     * @return UserData Base64-encoded custom data of up to 16 KB.
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置Base64-encoded custom data of up to 16 KB.
                     * @param _userData Base64-encoded custom data of up to 16 KB.
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取Instance billing mode. CVM instances take `POSTPAID_BY_HOUR` by default. Valid values:
<li>POSTPAID_BY_HOUR: pay-as-you-go hourly</li>
<li>SPOTPAID: spot instance</li>
<li> CDCPAID: dedicated cluster</li>
                     * @return InstanceChargeType Instance billing mode. CVM instances take `POSTPAID_BY_HOUR` by default. Valid values:
<li>POSTPAID_BY_HOUR: pay-as-you-go hourly</li>
<li>SPOTPAID: spot instance</li>
<li> CDCPAID: dedicated cluster</li>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing mode. CVM instances take `POSTPAID_BY_HOUR` by default. Valid values:
<li>POSTPAID_BY_HOUR: pay-as-you-go hourly</li>
<li>SPOTPAID: spot instance</li>
<li> CDCPAID: dedicated cluster</li>
                     * @param _instanceChargeType Instance billing mode. CVM instances take `POSTPAID_BY_HOUR` by default. Valid values:
<li>POSTPAID_BY_HOUR: pay-as-you-go hourly</li>
<li>SPOTPAID: spot instance</li>
<li> CDCPAID: dedicated cluster</li>
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
                     * 获取Market options of the instance, such as parameters related to spot instances. This parameter is required for spot instances.
                     * @return InstanceMarketOptions Market options of the instance, such as parameters related to spot instances. This parameter is required for spot instances.
                     * 
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置Market options of the instance, such as parameters related to spot instances. This parameter is required for spot instances.
                     * @param _instanceMarketOptions Market options of the instance, such as parameters related to spot instances. This parameter is required for spot instances.
                     * 
                     */
                    void SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions);

                    /**
                     * 判断参数 InstanceMarketOptions 是否已赋值
                     * @return InstanceMarketOptions 是否已赋值
                     * 
                     */
                    bool InstanceMarketOptionsHasBeenSet() const;

                    /**
                     * 获取List of instance models. Different instance models specify different resource specifications. Up to 10 instance models can be supported.
`InstanceType` and `InstanceTypes` are mutually exclusive, and one and only one of them must be entered.
                     * @return InstanceTypes List of instance models. Different instance models specify different resource specifications. Up to 10 instance models can be supported.
`InstanceType` and `InstanceTypes` are mutually exclusive, and one and only one of them must be entered.
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置List of instance models. Different instance models specify different resource specifications. Up to 10 instance models can be supported.
`InstanceType` and `InstanceTypes` are mutually exclusive, and one and only one of them must be entered.
                     * @param _instanceTypes List of instance models. Different instance models specify different resource specifications. Up to 10 instance models can be supported.
`InstanceType` and `InstanceTypes` are mutually exclusive, and one and only one of them must be entered.
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
                     * 获取CAM role name. This parameter can be obtained from the `roleName` field returned by DescribeRoleList API.
                     * @return CamRoleName CAM role name. This parameter can be obtained from the `roleName` field returned by DescribeRoleList API.
                     * 
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置CAM role name. This parameter can be obtained from the `roleName` field returned by DescribeRoleList API.
                     * @param _camRoleName CAM role name. This parameter can be obtained from the `roleName` field returned by DescribeRoleList API.
                     * 
                     */
                    void SetCamRoleName(const std::string& _camRoleName);

                    /**
                     * 判断参数 CamRoleName 是否已赋值
                     * @return CamRoleName 是否已赋值
                     * 
                     */
                    bool CamRoleNameHasBeenSet() const;

                    /**
                     * 获取InstanceType verification policy, whose valid values include ALL and ANY, with the default value being ANY.
<li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li>
<li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li>

Common reasons for unavailable InstanceTypes include the InstanceType being sold out, and the corresponding cloud disk being sold out.
If a model in InstanceTypes does not exist or has been abolished, a verification error will be reported regardless of the valid values set for InstanceTypesCheckPolicy.
                     * @return InstanceTypesCheckPolicy InstanceType verification policy, whose valid values include ALL and ANY, with the default value being ANY.
<li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li>
<li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li>

Common reasons for unavailable InstanceTypes include the InstanceType being sold out, and the corresponding cloud disk being sold out.
If a model in InstanceTypes does not exist or has been abolished, a verification error will be reported regardless of the valid values set for InstanceTypesCheckPolicy.
                     * 
                     */
                    std::string GetInstanceTypesCheckPolicy() const;

                    /**
                     * 设置InstanceType verification policy, whose valid values include ALL and ANY, with the default value being ANY.
<li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li>
<li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li>

Common reasons for unavailable InstanceTypes include the InstanceType being sold out, and the corresponding cloud disk being sold out.
If a model in InstanceTypes does not exist or has been abolished, a verification error will be reported regardless of the valid values set for InstanceTypesCheckPolicy.
                     * @param _instanceTypesCheckPolicy InstanceType verification policy, whose valid values include ALL and ANY, with the default value being ANY.
<li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li>
<li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li>

Common reasons for unavailable InstanceTypes include the InstanceType being sold out, and the corresponding cloud disk being sold out.
If a model in InstanceTypes does not exist or has been abolished, a verification error will be reported regardless of the valid values set for InstanceTypesCheckPolicy.
                     * 
                     */
                    void SetInstanceTypesCheckPolicy(const std::string& _instanceTypesCheckPolicy);

                    /**
                     * 判断参数 InstanceTypesCheckPolicy 是否已赋值
                     * @return InstanceTypesCheckPolicy 是否已赋值
                     * 
                     */
                    bool InstanceTypesCheckPolicyHasBeenSet() const;

                    /**
                     * 获取List of tags. This parameter is used to bind up to 10 tags to newly added instances.
                     * @return InstanceTags List of tags. This parameter is used to bind up to 10 tags to newly added instances.
                     * 
                     */
                    std::vector<InstanceTag> GetInstanceTags() const;

                    /**
                     * 设置List of tags. This parameter is used to bind up to 10 tags to newly added instances.
                     * @param _instanceTags List of tags. This parameter is used to bind up to 10 tags to newly added instances.
                     * 
                     */
                    void SetInstanceTags(const std::vector<InstanceTag>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     * 
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取List of tags. You can specify tags that you want to bind to the launch configuration. Each launch configuration can have up to 30 tags.
                     * @return Tags List of tags. You can specify tags that you want to bind to the launch configuration. Each launch configuration can have up to 30 tags.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags. You can specify tags that you want to bind to the launch configuration. Each launch configuration can have up to 30 tags.
                     * @param _tags List of tags. You can specify tags that you want to bind to the launch configuration. Each launch configuration can have up to 30 tags.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取CVM hostname settings.
                     * @return HostNameSettings CVM hostname settings.
                     * 
                     */
                    HostNameSettings GetHostNameSettings() const;

                    /**
                     * 设置CVM hostname settings.
                     * @param _hostNameSettings CVM hostname settings.
                     * 
                     */
                    void SetHostNameSettings(const HostNameSettings& _hostNameSettings);

                    /**
                     * 判断参数 HostNameSettings 是否已赋值
                     * @return HostNameSettings 是否已赋值
                     * 
                     */
                    bool HostNameSettingsHasBeenSet() const;

                    /**
                     * 获取Settings of CVM instance names
If this field is configured in a launch configuration, the `InstanceName` of a CVM created by the scaling group will be generated according to the configuration; otherwise, it will be in the `as-{{AutoScalingGroupName }}` format.
                     * @return InstanceNameSettings Settings of CVM instance names
If this field is configured in a launch configuration, the `InstanceName` of a CVM created by the scaling group will be generated according to the configuration; otherwise, it will be in the `as-{{AutoScalingGroupName }}` format.
                     * 
                     */
                    InstanceNameSettings GetInstanceNameSettings() const;

                    /**
                     * 设置Settings of CVM instance names
If this field is configured in a launch configuration, the `InstanceName` of a CVM created by the scaling group will be generated according to the configuration; otherwise, it will be in the `as-{{AutoScalingGroupName }}` format.
                     * @param _instanceNameSettings Settings of CVM instance names
If this field is configured in a launch configuration, the `InstanceName` of a CVM created by the scaling group will be generated according to the configuration; otherwise, it will be in the `as-{{AutoScalingGroupName }}` format.
                     * 
                     */
                    void SetInstanceNameSettings(const InstanceNameSettings& _instanceNameSettings);

                    /**
                     * 判断参数 InstanceNameSettings 是否已赋值
                     * @return InstanceNameSettings 是否已赋值
                     * 
                     */
                    bool InstanceNameSettingsHasBeenSet() const;

                    /**
                     * 获取Details of the monthly subscription, including the purchase period, auto-renewal. It is required if the `InstanceChargeType` is `PREPAID`.
                     * @return InstanceChargePrepaid Details of the monthly subscription, including the purchase period, auto-renewal. It is required if the `InstanceChargeType` is `PREPAID`.
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置Details of the monthly subscription, including the purchase period, auto-renewal. It is required if the `InstanceChargeType` is `PREPAID`.
                     * @param _instanceChargePrepaid Details of the monthly subscription, including the purchase period, auto-renewal. It is required if the `InstanceChargeType` is `PREPAID`.
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
                     * 获取Cloud disk type selection policy, whose default value is ORIGINAL. Valid values:
<li>ORIGINAL: Use the set cloud disk type.</li>
<li>AUTOMATIC: Automatically select the currently available cloud disk type.</li>
                     * @return DiskTypePolicy Cloud disk type selection policy, whose default value is ORIGINAL. Valid values:
<li>ORIGINAL: Use the set cloud disk type.</li>
<li>AUTOMATIC: Automatically select the currently available cloud disk type.</li>
                     * 
                     */
                    std::string GetDiskTypePolicy() const;

                    /**
                     * 设置Cloud disk type selection policy, whose default value is ORIGINAL. Valid values:
<li>ORIGINAL: Use the set cloud disk type.</li>
<li>AUTOMATIC: Automatically select the currently available cloud disk type.</li>
                     * @param _diskTypePolicy Cloud disk type selection policy, whose default value is ORIGINAL. Valid values:
<li>ORIGINAL: Use the set cloud disk type.</li>
<li>AUTOMATIC: Automatically select the currently available cloud disk type.</li>
                     * 
                     */
                    void SetDiskTypePolicy(const std::string& _diskTypePolicy);

                    /**
                     * 判断参数 DiskTypePolicy 是否已赋值
                     * @return DiskTypePolicy 是否已赋值
                     * 
                     */
                    bool DiskTypePolicyHasBeenSet() const;

                    /**
                     * 获取HPC ID<br>
Note: This field is default to empty
                     * @return HpcClusterId HPC ID<br>
Note: This field is default to empty
                     * 
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置HPC ID<br>
Note: This field is default to empty
                     * @param _hpcClusterId HPC ID<br>
Note: This field is default to empty
                     * 
                     */
                    void SetHpcClusterId(const std::string& _hpcClusterId);

                    /**
                     * 判断参数 HpcClusterId 是否已赋值
                     * @return HpcClusterId 是否已赋值
                     * 
                     */
                    bool HpcClusterIdHasBeenSet() const;

                    /**
                     * 获取IPv6 public network bandwidth configuration. If the IPv6 address is available in the new instance, public network bandwidth can be allocated to the IPv6 address. This parameter is invalid if `Ipv6AddressCount` of the scaling group associated with the launch configuration is 0.
                     * @return IPv6InternetAccessible IPv6 public network bandwidth configuration. If the IPv6 address is available in the new instance, public network bandwidth can be allocated to the IPv6 address. This parameter is invalid if `Ipv6AddressCount` of the scaling group associated with the launch configuration is 0.
                     * 
                     */
                    IPv6InternetAccessible GetIPv6InternetAccessible() const;

                    /**
                     * 设置IPv6 public network bandwidth configuration. If the IPv6 address is available in the new instance, public network bandwidth can be allocated to the IPv6 address. This parameter is invalid if `Ipv6AddressCount` of the scaling group associated with the launch configuration is 0.
                     * @param _iPv6InternetAccessible IPv6 public network bandwidth configuration. If the IPv6 address is available in the new instance, public network bandwidth can be allocated to the IPv6 address. This parameter is invalid if `Ipv6AddressCount` of the scaling group associated with the launch configuration is 0.
                     * 
                     */
                    void SetIPv6InternetAccessible(const IPv6InternetAccessible& _iPv6InternetAccessible);

                    /**
                     * 判断参数 IPv6InternetAccessible 是否已赋值
                     * @return IPv6InternetAccessible 是否已赋值
                     * 
                     */
                    bool IPv6InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取Placement group ID. Only one is allowed.
                     * @return DisasterRecoverGroupIds Placement group ID. Only one is allowed.
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置Placement group ID. Only one is allowed.
                     * @param _disasterRecoverGroupIds Placement group ID. Only one is allowed.
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取Image family name. Either image ID or image family name should be filled in, and only one of which can be filled.
                     * @return ImageFamily Image family name. Either image ID or image family name should be filled in, and only one of which can be filled.
                     * 
                     */
                    std::string GetImageFamily() const;

                    /**
                     * 设置Image family name. Either image ID or image family name should be filled in, and only one of which can be filled.
                     * @param _imageFamily Image family name. Either image ID or image family name should be filled in, and only one of which can be filled.
                     * 
                     */
                    void SetImageFamily(const std::string& _imageFamily);

                    /**
                     * 判断参数 ImageFamily 是否已赋值
                     * @return ImageFamily 是否已赋值
                     * 
                     */
                    bool ImageFamilyHasBeenSet() const;

                    /**
                     * 获取CDC ID.
                     * @return DedicatedClusterId CDC ID.
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置CDC ID.
                     * @param _dedicatedClusterId CDC ID.
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取Custom metadata.
                     * @return Metadata Custom metadata.
                     * 
                     */
                    Metadata GetMetadata() const;

                    /**
                     * 设置Custom metadata.
                     * @param _metadata Custom metadata.
                     * 
                     */
                    void SetMetadata(const Metadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                private:

                    /**
                     * Display name of the launch configuration, which can contain letters, digits, underscores and hyphens (-), and dots. Up to of 60 bytes allowed..
                     */
                    std::string m_launchConfigurationName;
                    bool m_launchConfigurationNameHasBeenSet;

                    /**
                     * [Image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are three types of images: <br/><li>Public images </li><li>Custom images </li><li>Shared images </li><br/>You can obtain the image IDs in the [CVM console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE).</li><li>You can also use the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response.</li>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Project ID of the launch configuration. The default project is used if it is left blank.
Note that this project ID is not the same as the project ID of the scaling group. 
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Instance model. Different instance models specify different resource specifications. The specific value can be obtained by calling the [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) API to get the latest specification table or referring to the descriptions in [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1).
`InstanceType` and `InstanceTypes` are mutually exclusive, and one and only one of them must be entered.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * System disk configuration of the instance. If this parameter is not specified, the default value will be used.
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Information of the instance's data disk configuration. If this parameter is not specified, no data disk is purchased by default. Up to 11 data disks can be supported.
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * Configuration of public network bandwidth. If this parameter is not specified, 0 Mbps will be used by default.
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * Login settings of the instance. You can use this parameter to set the login method, password, and key of the instance or keep the login settings of the original image. By default, a random password will be generated and sent to you via the Message Center.
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * The security group to which the instance belongs. This parameter can be obtained by calling the `SecurityGroupId` field in the returned value of [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1). If this parameter is not specified, no security group will be bound by default.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Enhanced services. You can use this parameter to specify whether to enable services such as Cloud Security and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Cloud Security will be enabled by default.
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * Base64-encoded custom data of up to 16 KB.
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * Instance billing mode. CVM instances take `POSTPAID_BY_HOUR` by default. Valid values:
<li>POSTPAID_BY_HOUR: pay-as-you-go hourly</li>
<li>SPOTPAID: spot instance</li>
<li> CDCPAID: dedicated cluster</li>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Market options of the instance, such as parameters related to spot instances. This parameter is required for spot instances.
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * List of instance models. Different instance models specify different resource specifications. Up to 10 instance models can be supported.
`InstanceType` and `InstanceTypes` are mutually exclusive, and one and only one of them must be entered.
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * CAM role name. This parameter can be obtained from the `roleName` field returned by DescribeRoleList API.
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * InstanceType verification policy, whose valid values include ALL and ANY, with the default value being ANY.
<li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li>
<li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li>

Common reasons for unavailable InstanceTypes include the InstanceType being sold out, and the corresponding cloud disk being sold out.
If a model in InstanceTypes does not exist or has been abolished, a verification error will be reported regardless of the valid values set for InstanceTypesCheckPolicy.
                     */
                    std::string m_instanceTypesCheckPolicy;
                    bool m_instanceTypesCheckPolicyHasBeenSet;

                    /**
                     * List of tags. This parameter is used to bind up to 10 tags to newly added instances.
                     */
                    std::vector<InstanceTag> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * List of tags. You can specify tags that you want to bind to the launch configuration. Each launch configuration can have up to 30 tags.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * CVM hostname settings.
                     */
                    HostNameSettings m_hostNameSettings;
                    bool m_hostNameSettingsHasBeenSet;

                    /**
                     * Settings of CVM instance names
If this field is configured in a launch configuration, the `InstanceName` of a CVM created by the scaling group will be generated according to the configuration; otherwise, it will be in the `as-{{AutoScalingGroupName }}` format.
                     */
                    InstanceNameSettings m_instanceNameSettings;
                    bool m_instanceNameSettingsHasBeenSet;

                    /**
                     * Details of the monthly subscription, including the purchase period, auto-renewal. It is required if the `InstanceChargeType` is `PREPAID`.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * Cloud disk type selection policy, whose default value is ORIGINAL. Valid values:
<li>ORIGINAL: Use the set cloud disk type.</li>
<li>AUTOMATIC: Automatically select the currently available cloud disk type.</li>
                     */
                    std::string m_diskTypePolicy;
                    bool m_diskTypePolicyHasBeenSet;

                    /**
                     * HPC ID<br>
Note: This field is default to empty
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * IPv6 public network bandwidth configuration. If the IPv6 address is available in the new instance, public network bandwidth can be allocated to the IPv6 address. This parameter is invalid if `Ipv6AddressCount` of the scaling group associated with the launch configuration is 0.
                     */
                    IPv6InternetAccessible m_iPv6InternetAccessible;
                    bool m_iPv6InternetAccessibleHasBeenSet;

                    /**
                     * Placement group ID. Only one is allowed.
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * Image family name. Either image ID or image family name should be filled in, and only one of which can be filled.
                     */
                    std::string m_imageFamily;
                    bool m_imageFamilyHasBeenSet;

                    /**
                     * CDC ID.
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * Custom metadata.
                     */
                    Metadata m_metadata;
                    bool m_metadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CREATELAUNCHCONFIGURATIONREQUEST_H_
