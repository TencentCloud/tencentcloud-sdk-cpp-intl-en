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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLAUNCHCONFIGURATIONATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLAUNCHCONFIGURATIONATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/InternetAccessible.h>
#include <tencentcloud/as/v20180419/model/InstanceChargePrepaid.h>
#include <tencentcloud/as/v20180419/model/InstanceMarketOptionsRequest.h>
#include <tencentcloud/as/v20180419/model/SystemDisk.h>
#include <tencentcloud/as/v20180419/model/DataDisk.h>
#include <tencentcloud/as/v20180419/model/HostNameSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceNameSettings.h>
#include <tencentcloud/as/v20180419/model/EnhancedService.h>
#include <tencentcloud/as/v20180419/model/IPv6InternetAccessible.h>
#include <tencentcloud/as/v20180419/model/LoginSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceTag.h>
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
                * ModifyLaunchConfigurationAttributes request structure.
                */
                class ModifyLaunchConfigurationAttributesRequest : public AbstractModel
                {
                public:
                    ModifyLaunchConfigurationAttributesRequest();
                    ~ModifyLaunchConfigurationAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Launch configuration ID. obtain the launch configuration ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/config) or calling the api DescribeLaunchConfigurations (https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the return information.
                     * @return LaunchConfigurationId Launch configuration ID. obtain the launch configuration ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/config) or calling the api DescribeLaunchConfigurations (https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the return information.
                     * 
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置Launch configuration ID. obtain the launch configuration ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/config) or calling the api DescribeLaunchConfigurations (https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the return information.
                     * @param _launchConfigurationId Launch configuration ID. obtain the launch configuration ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/config) or calling the api DescribeLaunchConfigurations (https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the return information.
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
                     * 获取Types of cvm instances. different instance models specify different resource specifications. supports up to 10 instance models.
The launch configuration uses `InstanceType` to indicate one single instance type and `InstanceTypes` to indicate multiple instance types. specifying the `InstanceTypes` field will invalidate the original `InstanceType`. specific values can be obtained by calling the api [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) to obtain the latest specification table or refer to [instance specifications](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1).
                     * @return InstanceTypes Types of cvm instances. different instance models specify different resource specifications. supports up to 10 instance models.
The launch configuration uses `InstanceType` to indicate one single instance type and `InstanceTypes` to indicate multiple instance types. specifying the `InstanceTypes` field will invalidate the original `InstanceType`. specific values can be obtained by calling the api [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) to obtain the latest specification table or refer to [instance specifications](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1).
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置Types of cvm instances. different instance models specify different resource specifications. supports up to 10 instance models.
The launch configuration uses `InstanceType` to indicate one single instance type and `InstanceTypes` to indicate multiple instance types. specifying the `InstanceTypes` field will invalidate the original `InstanceType`. specific values can be obtained by calling the api [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) to obtain the latest specification table or refer to [instance specifications](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1).
                     * @param _instanceTypes Types of cvm instances. different instance models specify different resource specifications. supports up to 10 instance models.
The launch configuration uses `InstanceType` to indicate one single instance type and `InstanceTypes` to indicate multiple instance types. specifying the `InstanceTypes` field will invalidate the original `InstanceType`. specific values can be obtained by calling the api [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) to obtain the latest specification table or refer to [instance specifications](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1).
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
                     * 获取InstanceType verification policy, which is effective when actual modification is made to InstanceTypes. Valid values include ALL and ANY and the default value is ANY.
<li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li>
<li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li>
Common reasons for unavailable InstanceTypes include the InstanceType being sold out, and the corresponding cloud disk being sold out.
If a model in InstanceTypes does not exist or has been abolished, a verification error will be reported regardless of the valid values set for InstanceTypesCheckPolicy.
                     * @return InstanceTypesCheckPolicy InstanceType verification policy, which is effective when actual modification is made to InstanceTypes. Valid values include ALL and ANY and the default value is ANY.
<li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li>
<li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li>
Common reasons for unavailable InstanceTypes include the InstanceType being sold out, and the corresponding cloud disk being sold out.
If a model in InstanceTypes does not exist or has been abolished, a verification error will be reported regardless of the valid values set for InstanceTypesCheckPolicy.
                     * 
                     */
                    std::string GetInstanceTypesCheckPolicy() const;

                    /**
                     * 设置InstanceType verification policy, which is effective when actual modification is made to InstanceTypes. Valid values include ALL and ANY and the default value is ANY.
<li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li>
<li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li>
Common reasons for unavailable InstanceTypes include the InstanceType being sold out, and the corresponding cloud disk being sold out.
If a model in InstanceTypes does not exist or has been abolished, a verification error will be reported regardless of the valid values set for InstanceTypesCheckPolicy.
                     * @param _instanceTypesCheckPolicy InstanceType verification policy, which is effective when actual modification is made to InstanceTypes. Valid values include ALL and ANY and the default value is ANY.
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
                     * 获取Display name of the launch configuration, which can contain Chinese characters, letters, numbers, underscores, separators ("-"), and decimal points with a maximum length of 60 bytes.
                     * @return LaunchConfigurationName Display name of the launch configuration, which can contain Chinese characters, letters, numbers, underscores, separators ("-"), and decimal points with a maximum length of 60 bytes.
                     * 
                     */
                    std::string GetLaunchConfigurationName() const;

                    /**
                     * 设置Display name of the launch configuration, which can contain Chinese characters, letters, numbers, underscores, separators ("-"), and decimal points with a maximum length of 60 bytes.
                     * @param _launchConfigurationName Display name of the launch configuration, which can contain Chinese characters, letters, numbers, underscores, separators ("-"), and decimal points with a maximum length of 60 bytes.
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
                     * 获取Base64-encoded custom data of up to 16 KB. If you want to clear `UserData`, set it to an empty string.
                     * @return UserData Base64-encoded custom data of up to 16 KB. If you want to clear `UserData`, set it to an empty string.
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置Base64-encoded custom data of up to 16 KB. If you want to clear `UserData`, set it to an empty string.
                     * @param _userData Base64-encoded custom data of up to 16 KB. If you want to clear `UserData`, set it to an empty string.
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
                     * 获取Security group to which the instance belongs. This parameter can be obtained from the `SecurityGroupId` field in the response of the [`DescribeSecurityGroups`](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1) API.
At least one security group is required for this parameter. The security group specified is sequential.
                     * @return SecurityGroupIds Security group to which the instance belongs. This parameter can be obtained from the `SecurityGroupId` field in the response of the [`DescribeSecurityGroups`](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1) API.
At least one security group is required for this parameter. The security group specified is sequential.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group to which the instance belongs. This parameter can be obtained from the `SecurityGroupId` field in the response of the [`DescribeSecurityGroups`](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1) API.
At least one security group is required for this parameter. The security group specified is sequential.
                     * @param _securityGroupIds Security group to which the instance belongs. This parameter can be obtained from the `SecurityGroupId` field in the response of the [`DescribeSecurityGroups`](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1) API.
At least one security group is required for this parameter. The security group specified is sequential.
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
                     * 获取Information of the public network bandwidth configuration.
When the public outbound network bandwidth is 0 Mbps, assigning a public IP is not allowed. Accordingly, if a public IP is assigned, the new public network outbound bandwidth must be greater than 0 Mbps.
                     * @return InternetAccessible Information of the public network bandwidth configuration.
When the public outbound network bandwidth is 0 Mbps, assigning a public IP is not allowed. Accordingly, if a public IP is assigned, the new public network outbound bandwidth must be greater than 0 Mbps.
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置Information of the public network bandwidth configuration.
When the public outbound network bandwidth is 0 Mbps, assigning a public IP is not allowed. Accordingly, if a public IP is assigned, the new public network outbound bandwidth must be greater than 0 Mbps.
                     * @param _internetAccessible Information of the public network bandwidth configuration.
When the public outbound network bandwidth is 0 Mbps, assigning a public IP is not allowed. Accordingly, if a public IP is assigned, the new public network outbound bandwidth must be greater than 0 Mbps.
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
                     * 获取Instance billing mode. Valid values:
<li>POSTPAID_BY_HOUR: pay-as-you-go hourly</li>
<li>SPOTPAID: spot instance</li>
<li> CDCPAID: dedicated cluster</li>
                     * @return InstanceChargeType Instance billing mode. Valid values:
<li>POSTPAID_BY_HOUR: pay-as-you-go hourly</li>
<li>SPOTPAID: spot instance</li>
<li> CDCPAID: dedicated cluster</li>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing mode. Valid values:
<li>POSTPAID_BY_HOUR: pay-as-you-go hourly</li>
<li>SPOTPAID: spot instance</li>
<li> CDCPAID: dedicated cluster</li>
                     * @param _instanceChargeType Instance billing mode. Valid values:
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
                     * 获取Parameter setting for the prepaid mode (monthly subscription mode). This parameter can specify the renewal period, whether to set the auto-renewal, and other attributes of the monthly-subscribed instances.
This parameter is required when changing the instance billing mode to monthly subscription. It will be automatically discarded after you choose another billing mode.
This field requires passing in the `Period` field. Other fields that are not passed in will use their default values.
This field can be modified only when the current billing mode is monthly subscription.
                     * @return InstanceChargePrepaid Parameter setting for the prepaid mode (monthly subscription mode). This parameter can specify the renewal period, whether to set the auto-renewal, and other attributes of the monthly-subscribed instances.
This parameter is required when changing the instance billing mode to monthly subscription. It will be automatically discarded after you choose another billing mode.
This field requires passing in the `Period` field. Other fields that are not passed in will use their default values.
This field can be modified only when the current billing mode is monthly subscription.
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置Parameter setting for the prepaid mode (monthly subscription mode). This parameter can specify the renewal period, whether to set the auto-renewal, and other attributes of the monthly-subscribed instances.
This parameter is required when changing the instance billing mode to monthly subscription. It will be automatically discarded after you choose another billing mode.
This field requires passing in the `Period` field. Other fields that are not passed in will use their default values.
This field can be modified only when the current billing mode is monthly subscription.
                     * @param _instanceChargePrepaid Parameter setting for the prepaid mode (monthly subscription mode). This parameter can specify the renewal period, whether to set the auto-renewal, and other attributes of the monthly-subscribed instances.
This parameter is required when changing the instance billing mode to monthly subscription. It will be automatically discarded after you choose another billing mode.
This field requires passing in the `Period` field. Other fields that are not passed in will use their default values.
This field can be modified only when the current billing mode is monthly subscription.
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
                     * 获取Market-related options for instances, such as parameters related to spot instances.
This parameter is required when changing the instance billing mode to spot instance. It will be automatically discarded after you choose another instance billing mode.
This field requires passing in the `MaxPrice` field under the `SpotOptions`. Other fields that are not passed in will use their default values.
This field can be modified only when the current billing mode is spot instance.
                     * @return InstanceMarketOptions Market-related options for instances, such as parameters related to spot instances.
This parameter is required when changing the instance billing mode to spot instance. It will be automatically discarded after you choose another instance billing mode.
This field requires passing in the `MaxPrice` field under the `SpotOptions`. Other fields that are not passed in will use their default values.
This field can be modified only when the current billing mode is spot instance.
                     * 
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置Market-related options for instances, such as parameters related to spot instances.
This parameter is required when changing the instance billing mode to spot instance. It will be automatically discarded after you choose another instance billing mode.
This field requires passing in the `MaxPrice` field under the `SpotOptions`. Other fields that are not passed in will use their default values.
This field can be modified only when the current billing mode is spot instance.
                     * @param _instanceMarketOptions Market-related options for instances, such as parameters related to spot instances.
This parameter is required when changing the instance billing mode to spot instance. It will be automatically discarded after you choose another instance billing mode.
This field requires passing in the `MaxPrice` field under the `SpotOptions`. Other fields that are not passed in will use their default values.
This field can be modified only when the current billing mode is spot instance.
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
                     * 获取Cloud disk type selection policy. Valid values:
<li>ORIGINAL: Use the set cloud disk type.</li>
<li>AUTOMATIC: Automatically select the currently available cloud disk type.</li>
                     * @return DiskTypePolicy Cloud disk type selection policy. Valid values:
<li>ORIGINAL: Use the set cloud disk type.</li>
<li>AUTOMATIC: Automatically select the currently available cloud disk type.</li>
                     * 
                     */
                    std::string GetDiskTypePolicy() const;

                    /**
                     * 设置Cloud disk type selection policy. Valid values:
<li>ORIGINAL: Use the set cloud disk type.</li>
<li>AUTOMATIC: Automatically select the currently available cloud disk type.</li>
                     * @param _diskTypePolicy Cloud disk type selection policy. Valid values:
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
                     * 获取Instance system disk configurations
                     * @return SystemDisk Instance system disk configurations
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置Instance system disk configurations
                     * @param _systemDisk Instance system disk configurations
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
                     * 获取Configuration information of instance data disks.
Up to 11 data disks can be specified and will be collectively modified. Please provide all the new values for the modification.
The default data disk should be the same as the system disk.
                     * @return DataDisks Configuration information of instance data disks.
Up to 11 data disks can be specified and will be collectively modified. Please provide all the new values for the modification.
The default data disk should be the same as the system disk.
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置Configuration information of instance data disks.
Up to 11 data disks can be specified and will be collectively modified. Please provide all the new values for the modification.
The default data disk should be the same as the system disk.
                     * @param _dataDisks Configuration information of instance data disks.
Up to 11 data disks can be specified and will be collectively modified. Please provide all the new values for the modification.
The default data disk should be the same as the system disk.
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
                     * 获取CVM hostname settings.
This field is not supported for Windows instances.
This field requires passing the `HostName` field. Other fields that are not passed in will use their default values.
                     * @return HostNameSettings CVM hostname settings.
This field is not supported for Windows instances.
This field requires passing the `HostName` field. Other fields that are not passed in will use their default values.
                     * 
                     */
                    HostNameSettings GetHostNameSettings() const;

                    /**
                     * 设置CVM hostname settings.
This field is not supported for Windows instances.
This field requires passing the `HostName` field. Other fields that are not passed in will use their default values.
                     * @param _hostNameSettings CVM hostname settings.
This field is not supported for Windows instances.
This field requires passing the `HostName` field. Other fields that are not passed in will use their default values.
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
                     * 获取Settings of CVM instance names. 
If this field is configured in a launch configuration, the `InstanceName` of a CVM created by the scaling group will be generated according to the configuration; otherwise, it will be in the `as-{{AutoScalingGroupName }}` format.
This field requires passing in the `InstanceName` field. Other fields that are not passed in will use their default values.
                     * @return InstanceNameSettings Settings of CVM instance names. 
If this field is configured in a launch configuration, the `InstanceName` of a CVM created by the scaling group will be generated according to the configuration; otherwise, it will be in the `as-{{AutoScalingGroupName }}` format.
This field requires passing in the `InstanceName` field. Other fields that are not passed in will use their default values.
                     * 
                     */
                    InstanceNameSettings GetInstanceNameSettings() const;

                    /**
                     * 设置Settings of CVM instance names. 
If this field is configured in a launch configuration, the `InstanceName` of a CVM created by the scaling group will be generated according to the configuration; otherwise, it will be in the `as-{{AutoScalingGroupName }}` format.
This field requires passing in the `InstanceName` field. Other fields that are not passed in will use their default values.
                     * @param _instanceNameSettings Settings of CVM instance names. 
If this field is configured in a launch configuration, the `InstanceName` of a CVM created by the scaling group will be generated according to the configuration; otherwise, it will be in the `as-{{AutoScalingGroupName }}` format.
This field requires passing in the `InstanceName` field. Other fields that are not passed in will use their default values.
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
                     * 获取Specifies whether to enable additional services, such as security services and monitoring service.
                     * @return EnhancedService Specifies whether to enable additional services, such as security services and monitoring service.
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置Specifies whether to enable additional services, such as security services and monitoring service.
                     * @param _enhancedService Specifies whether to enable additional services, such as security services and monitoring service.
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
                     * 获取Role name of the CAM role. can be obtained from roleName in the return value from the DescribeRoleList API (https://intl.cloud.tencent.com/document/product/598/36223?from_cn_redirect=1).
                     * @return CamRoleName Role name of the CAM role. can be obtained from roleName in the return value from the DescribeRoleList API (https://intl.cloud.tencent.com/document/product/598/36223?from_cn_redirect=1).
                     * 
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置Role name of the CAM role. can be obtained from roleName in the return value from the DescribeRoleList API (https://intl.cloud.tencent.com/document/product/598/36223?from_cn_redirect=1).
                     * @param _camRoleName Role name of the CAM role. can be obtained from roleName in the return value from the DescribeRoleList API (https://intl.cloud.tencent.com/document/product/598/36223?from_cn_redirect=1).
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
                     * 获取High-Performance computing cluster ID. you can obtain this parameter by calling the [DescribeHpcClusters](https://intl.cloud.tencent.com/document/product/213/83220?from_cn_redirect=1) api.
Note: this field is empty by default.
                     * @return HpcClusterId High-Performance computing cluster ID. you can obtain this parameter by calling the [DescribeHpcClusters](https://intl.cloud.tencent.com/document/product/213/83220?from_cn_redirect=1) api.
Note: this field is empty by default.
                     * 
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置High-Performance computing cluster ID. you can obtain this parameter by calling the [DescribeHpcClusters](https://intl.cloud.tencent.com/document/product/213/83220?from_cn_redirect=1) api.
Note: this field is empty by default.
                     * @param _hpcClusterId High-Performance computing cluster ID. you can obtain this parameter by calling the [DescribeHpcClusters](https://intl.cloud.tencent.com/document/product/213/83220?from_cn_redirect=1) api.
Note: this field is empty by default.
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
                     * 获取Placement group id. only one can be specified. obtain through the API [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/product/213/17810?from_cn_redirect=1).
                     * @return DisasterRecoverGroupIds Placement group id. only one can be specified. obtain through the API [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/product/213/17810?from_cn_redirect=1).
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置Placement group id. only one can be specified. obtain through the API [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/product/213/17810?from_cn_redirect=1).
                     * @param _disasterRecoverGroupIds Placement group id. only one can be specified. obtain through the API [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/product/213/17810?from_cn_redirect=1).
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
                     * 获取Instance login settings, which include passwords, keys, or the original login settings inherited from the image. <br>Please note that specifying new login settings will overwrite the existing ones. For instance, if you previously used a password for login and then use this parameter to switch the login settings to a key, the original password will be removed.
                     * @return LoginSettings Instance login settings, which include passwords, keys, or the original login settings inherited from the image. <br>Please note that specifying new login settings will overwrite the existing ones. For instance, if you previously used a password for login and then use this parameter to switch the login settings to a key, the original password will be removed.
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置Instance login settings, which include passwords, keys, or the original login settings inherited from the image. <br>Please note that specifying new login settings will overwrite the existing ones. For instance, if you previously used a password for login and then use this parameter to switch the login settings to a key, the original password will be removed.
                     * @param _loginSettings Instance login settings, which include passwords, keys, or the original login settings inherited from the image. <br>Please note that specifying new login settings will overwrite the existing ones. For instance, if you previously used a password for login and then use this parameter to switch the login settings to a key, the original password will be removed.
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
                     * 获取Instance tag list. By specifying this parameter, the instances added through scale-out can be bound to the tag. Up to 10 Tags can be specified.
This parameter will overwrite the original instance tag list. To add new tags, you need to pass the new tags along with the original tags.
                     * @return InstanceTags Instance tag list. By specifying this parameter, the instances added through scale-out can be bound to the tag. Up to 10 Tags can be specified.
This parameter will overwrite the original instance tag list. To add new tags, you need to pass the new tags along with the original tags.
                     * 
                     */
                    std::vector<InstanceTag> GetInstanceTags() const;

                    /**
                     * 设置Instance tag list. By specifying this parameter, the instances added through scale-out can be bound to the tag. Up to 10 Tags can be specified.
This parameter will overwrite the original instance tag list. To add new tags, you need to pass the new tags along with the original tags.
                     * @param _instanceTags Instance tag list. By specifying this parameter, the instances added through scale-out can be bound to the tag. Up to 10 Tags can be specified.
This parameter will overwrite the original instance tag list. To add new tags, you need to pass the new tags along with the original tags.
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
                     * 获取Image family name. this parameter can be obtained by calling the [DescribeImages](https://intl.cloud.tencent.com/document/product/213/15715?from_cn_redirect=1) api.
                     * @return ImageFamily Image family name. this parameter can be obtained by calling the [DescribeImages](https://intl.cloud.tencent.com/document/product/213/15715?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetImageFamily() const;

                    /**
                     * 设置Image family name. this parameter can be obtained by calling the [DescribeImages](https://intl.cloud.tencent.com/document/product/213/15715?from_cn_redirect=1) api.
                     * @param _imageFamily Image family name. this parameter can be obtained by calling the [DescribeImages](https://intl.cloud.tencent.com/document/product/213/15715?from_cn_redirect=1) api.
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
                     * 获取Cloud Dedicated Cluster (CDC) ID.
                     * @return DedicatedClusterId Cloud Dedicated Cluster (CDC) ID.
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置Cloud Dedicated Cluster (CDC) ID.
                     * @param _dedicatedClusterId Cloud Dedicated Cluster (CDC) ID.
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
                     * Launch configuration ID. obtain the launch configuration ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/config) or calling the api DescribeLaunchConfigurations (https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the return information.
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * [Image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are three types of images: <br/><li>Public images </li><li>Custom images </li><li>Shared images </li><br/>You can obtain the image IDs in the [CVM console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE).</li><li>You can also use the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response.</li>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Types of cvm instances. different instance models specify different resource specifications. supports up to 10 instance models.
The launch configuration uses `InstanceType` to indicate one single instance type and `InstanceTypes` to indicate multiple instance types. specifying the `InstanceTypes` field will invalidate the original `InstanceType`. specific values can be obtained by calling the api [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) to obtain the latest specification table or refer to [instance specifications](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1).
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * InstanceType verification policy, which is effective when actual modification is made to InstanceTypes. Valid values include ALL and ANY and the default value is ANY.
<li>ALL: Verification passes if all InstanceTypes are available; otherwise, a verification error will be reported.</li>
<li>ANY: Verification passes if any InstanceType is available; otherwise, a verification error will be reported.</li>
Common reasons for unavailable InstanceTypes include the InstanceType being sold out, and the corresponding cloud disk being sold out.
If a model in InstanceTypes does not exist or has been abolished, a verification error will be reported regardless of the valid values set for InstanceTypesCheckPolicy.
                     */
                    std::string m_instanceTypesCheckPolicy;
                    bool m_instanceTypesCheckPolicyHasBeenSet;

                    /**
                     * Display name of the launch configuration, which can contain Chinese characters, letters, numbers, underscores, separators ("-"), and decimal points with a maximum length of 60 bytes.
                     */
                    std::string m_launchConfigurationName;
                    bool m_launchConfigurationNameHasBeenSet;

                    /**
                     * Base64-encoded custom data of up to 16 KB. If you want to clear `UserData`, set it to an empty string.
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * Security group to which the instance belongs. This parameter can be obtained from the `SecurityGroupId` field in the response of the [`DescribeSecurityGroups`](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1) API.
At least one security group is required for this parameter. The security group specified is sequential.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Information of the public network bandwidth configuration.
When the public outbound network bandwidth is 0 Mbps, assigning a public IP is not allowed. Accordingly, if a public IP is assigned, the new public network outbound bandwidth must be greater than 0 Mbps.
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * Instance billing mode. Valid values:
<li>POSTPAID_BY_HOUR: pay-as-you-go hourly</li>
<li>SPOTPAID: spot instance</li>
<li> CDCPAID: dedicated cluster</li>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Parameter setting for the prepaid mode (monthly subscription mode). This parameter can specify the renewal period, whether to set the auto-renewal, and other attributes of the monthly-subscribed instances.
This parameter is required when changing the instance billing mode to monthly subscription. It will be automatically discarded after you choose another billing mode.
This field requires passing in the `Period` field. Other fields that are not passed in will use their default values.
This field can be modified only when the current billing mode is monthly subscription.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * Market-related options for instances, such as parameters related to spot instances.
This parameter is required when changing the instance billing mode to spot instance. It will be automatically discarded after you choose another instance billing mode.
This field requires passing in the `MaxPrice` field under the `SpotOptions`. Other fields that are not passed in will use their default values.
This field can be modified only when the current billing mode is spot instance.
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * Cloud disk type selection policy. Valid values:
<li>ORIGINAL: Use the set cloud disk type.</li>
<li>AUTOMATIC: Automatically select the currently available cloud disk type.</li>
                     */
                    std::string m_diskTypePolicy;
                    bool m_diskTypePolicyHasBeenSet;

                    /**
                     * Instance system disk configurations
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Configuration information of instance data disks.
Up to 11 data disks can be specified and will be collectively modified. Please provide all the new values for the modification.
The default data disk should be the same as the system disk.
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * CVM hostname settings.
This field is not supported for Windows instances.
This field requires passing the `HostName` field. Other fields that are not passed in will use their default values.
                     */
                    HostNameSettings m_hostNameSettings;
                    bool m_hostNameSettingsHasBeenSet;

                    /**
                     * Settings of CVM instance names. 
If this field is configured in a launch configuration, the `InstanceName` of a CVM created by the scaling group will be generated according to the configuration; otherwise, it will be in the `as-{{AutoScalingGroupName }}` format.
This field requires passing in the `InstanceName` field. Other fields that are not passed in will use their default values.
                     */
                    InstanceNameSettings m_instanceNameSettings;
                    bool m_instanceNameSettingsHasBeenSet;

                    /**
                     * Specifies whether to enable additional services, such as security services and monitoring service.
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * Role name of the CAM role. can be obtained from roleName in the return value from the DescribeRoleList API (https://intl.cloud.tencent.com/document/product/598/36223?from_cn_redirect=1).
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * High-Performance computing cluster ID. you can obtain this parameter by calling the [DescribeHpcClusters](https://intl.cloud.tencent.com/document/product/213/83220?from_cn_redirect=1) api.
Note: this field is empty by default.
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * IPv6 public network bandwidth configuration. If the IPv6 address is available in the new instance, public network bandwidth can be allocated to the IPv6 address. This parameter is invalid if `Ipv6AddressCount` of the scaling group associated with the launch configuration is 0.
                     */
                    IPv6InternetAccessible m_iPv6InternetAccessible;
                    bool m_iPv6InternetAccessibleHasBeenSet;

                    /**
                     * Placement group id. only one can be specified. obtain through the API [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/product/213/17810?from_cn_redirect=1).
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * Instance login settings, which include passwords, keys, or the original login settings inherited from the image. <br>Please note that specifying new login settings will overwrite the existing ones. For instance, if you previously used a password for login and then use this parameter to switch the login settings to a key, the original password will be removed.
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * Instance tag list. By specifying this parameter, the instances added through scale-out can be bound to the tag. Up to 10 Tags can be specified.
This parameter will overwrite the original instance tag list. To add new tags, you need to pass the new tags along with the original tags.
                     */
                    std::vector<InstanceTag> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * Image family name. this parameter can be obtained by calling the [DescribeImages](https://intl.cloud.tencent.com/document/product/213/15715?from_cn_redirect=1) api.
                     */
                    std::string m_imageFamily;
                    bool m_imageFamilyHasBeenSet;

                    /**
                     * Cloud Dedicated Cluster (CDC) ID.
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

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLAUNCHCONFIGURATIONATTRIBUTESREQUEST_H_
