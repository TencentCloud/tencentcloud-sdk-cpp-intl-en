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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CREATELAUNCHTEMPLATEVERSIONREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CREATELAUNCHTEMPLATEVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Placement.h>
#include <tencentcloud/cvm/v20170312/model/SystemDisk.h>
#include <tencentcloud/cvm/v20170312/model/DataDisk.h>
#include <tencentcloud/cvm/v20170312/model/VirtualPrivateCloud.h>
#include <tencentcloud/cvm/v20170312/model/InternetAccessible.h>
#include <tencentcloud/cvm/v20170312/model/LoginSettings.h>
#include <tencentcloud/cvm/v20170312/model/EnhancedService.h>
#include <tencentcloud/cvm/v20170312/model/ActionTimer.h>
#include <tencentcloud/cvm/v20170312/model/TagSpecification.h>
#include <tencentcloud/cvm/v20170312/model/InstanceMarketOptionsRequest.h>
#include <tencentcloud/cvm/v20170312/model/InstanceChargePrepaid.h>
#include <tencentcloud/cvm/v20170312/model/Metadata.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateLaunchTemplateVersion request structure.
                */
                class CreateLaunchTemplateVersionRequest : public AbstractModel
                {
                public:
                    CreateLaunchTemplateVersionRequest();
                    ~CreateLaunchTemplateVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone, project, and CDH (for dedicated CVMs)
                     * @return Placement Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone, project, and CDH (for dedicated CVMs)
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone, project, and CDH (for dedicated CVMs)
                     * @param _placement Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone, project, and CDH (for dedicated CVMs)
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取Instance launch template ID. This parameter is used as a basis for creating new template versions.
                     * @return LaunchTemplateId Instance launch template ID. This parameter is used as a basis for creating new template versions.
                     * 
                     */
                    std::string GetLaunchTemplateId() const;

                    /**
                     * 设置Instance launch template ID. This parameter is used as a basis for creating new template versions.
                     * @param _launchTemplateId Instance launch template ID. This parameter is used as a basis for creating new template versions.
                     * 
                     */
                    void SetLaunchTemplateId(const std::string& _launchTemplateId);

                    /**
                     * 判断参数 LaunchTemplateId 是否已赋值
                     * @return LaunchTemplateId 是否已赋值
                     * 
                     */
                    bool LaunchTemplateIdHasBeenSet() const;

                    /**
                     * 获取This parameter, when specified, is used to create instance launch templates. If this parameter is not specified, the default version will be used.
                     * @return LaunchTemplateVersion This parameter, when specified, is used to create instance launch templates. If this parameter is not specified, the default version will be used.
                     * 
                     */
                    int64_t GetLaunchTemplateVersion() const;

                    /**
                     * 设置This parameter, when specified, is used to create instance launch templates. If this parameter is not specified, the default version will be used.
                     * @param _launchTemplateVersion This parameter, when specified, is used to create instance launch templates. If this parameter is not specified, the default version will be used.
                     * 
                     */
                    void SetLaunchTemplateVersion(const int64_t& _launchTemplateVersion);

                    /**
                     * 判断参数 LaunchTemplateVersion 是否已赋值
                     * @return LaunchTemplateVersion 是否已赋值
                     * 
                     */
                    bool LaunchTemplateVersionHasBeenSet() const;

                    /**
                     * 获取Description of instance launch template versions. This parameter can contain 2-256 characters.
                     * @return LaunchTemplateVersionDescription Description of instance launch template versions. This parameter can contain 2-256 characters.
                     * 
                     */
                    std::string GetLaunchTemplateVersionDescription() const;

                    /**
                     * 设置Description of instance launch template versions. This parameter can contain 2-256 characters.
                     * @param _launchTemplateVersionDescription Description of instance launch template versions. This parameter can contain 2-256 characters.
                     * 
                     */
                    void SetLaunchTemplateVersionDescription(const std::string& _launchTemplateVersionDescription);

                    /**
                     * 判断参数 LaunchTemplateVersionDescription 是否已赋值
                     * @return LaunchTemplateVersionDescription 是否已赋值
                     * 
                     */
                    bool LaunchTemplateVersionDescriptionHasBeenSet() const;

                    /**
                     * 获取Instance model. Different instance models specify different resource specifications.

<br><li>For instances created with the payment modes PREPAID or POSTPAID_BY_HOUR, the specific values can be obtained by calling the [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) API for the latest specification table or referring to [Instance Specifications](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1). If this parameter is not specified, the system will dynamically assign a default model based on the current resource sales situation in a region.</li><br><li>For instances created with the payment mode CDHPAID, this parameter has the prefix "CDH_" and is generated based on the CPU and memory configuration. The specific format is: CDH_XCXG. For example, for creating a CDH instance with 1 CPU core and 1 GB memory, this parameter should be CDH_1C1G.</li>
                     * @return InstanceType Instance model. Different instance models specify different resource specifications.

<br><li>For instances created with the payment modes PREPAID or POSTPAID_BY_HOUR, the specific values can be obtained by calling the [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) API for the latest specification table or referring to [Instance Specifications](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1). If this parameter is not specified, the system will dynamically assign a default model based on the current resource sales situation in a region.</li><br><li>For instances created with the payment mode CDHPAID, this parameter has the prefix "CDH_" and is generated based on the CPU and memory configuration. The specific format is: CDH_XCXG. For example, for creating a CDH instance with 1 CPU core and 1 GB memory, this parameter should be CDH_1C1G.</li>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance model. Different instance models specify different resource specifications.

<br><li>For instances created with the payment modes PREPAID or POSTPAID_BY_HOUR, the specific values can be obtained by calling the [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) API for the latest specification table or referring to [Instance Specifications](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1). If this parameter is not specified, the system will dynamically assign a default model based on the current resource sales situation in a region.</li><br><li>For instances created with the payment mode CDHPAID, this parameter has the prefix "CDH_" and is generated based on the CPU and memory configuration. The specific format is: CDH_XCXG. For example, for creating a CDH instance with 1 CPU core and 1 GB memory, this parameter should be CDH_1C1G.</li>
                     * @param _instanceType Instance model. Different instance models specify different resource specifications.

<br><li>For instances created with the payment modes PREPAID or POSTPAID_BY_HOUR, the specific values can be obtained by calling the [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) API for the latest specification table or referring to [Instance Specifications](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1). If this parameter is not specified, the system will dynamically assign a default model based on the current resource sales situation in a region.</li><br><li>For instances created with the payment mode CDHPAID, this parameter has the prefix "CDH_" and is generated based on the CPU and memory configuration. The specific format is: CDH_XCXG. For example, for creating a CDH instance with 1 CPU core and 1 GB memory, this parameter should be CDH_1C1G.</li>
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
                     * 获取Assign an effective [mirror](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format like `img-xxx`. there are four image types: <br/><li>PUBLIC image</li><li>custom image</li><li>shared image</li><li>cloud image market</li><br/>you can obtain available mirror ids in the following ways: <br/><li>the mirror ids of `PUBLIC image`, `custom image` and `shared image` can be queried by logging in to the [console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_image); the mirror ID of `cloud image market` can be queried through the [cloud market](https://market.cloud.tencent.com/list).</li><li>call the api [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), input InstanceType to obtain the list of images supported by the current model, and take the `ImageId` field from the return information.</li>.
                     * @return ImageId Assign an effective [mirror](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format like `img-xxx`. there are four image types: <br/><li>PUBLIC image</li><li>custom image</li><li>shared image</li><li>cloud image market</li><br/>you can obtain available mirror ids in the following ways: <br/><li>the mirror ids of `PUBLIC image`, `custom image` and `shared image` can be queried by logging in to the [console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_image); the mirror ID of `cloud image market` can be queried through the [cloud market](https://market.cloud.tencent.com/list).</li><li>call the api [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), input InstanceType to obtain the list of images supported by the current model, and take the `ImageId` field from the return information.</li>.
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Assign an effective [mirror](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format like `img-xxx`. there are four image types: <br/><li>PUBLIC image</li><li>custom image</li><li>shared image</li><li>cloud image market</li><br/>you can obtain available mirror ids in the following ways: <br/><li>the mirror ids of `PUBLIC image`, `custom image` and `shared image` can be queried by logging in to the [console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_image); the mirror ID of `cloud image market` can be queried through the [cloud market](https://market.cloud.tencent.com/list).</li><li>call the api [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), input InstanceType to obtain the list of images supported by the current model, and take the `ImageId` field from the return information.</li>.
                     * @param _imageId Assign an effective [mirror](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format like `img-xxx`. there are four image types: <br/><li>PUBLIC image</li><li>custom image</li><li>shared image</li><li>cloud image market</li><br/>you can obtain available mirror ids in the following ways: <br/><li>the mirror ids of `PUBLIC image`, `custom image` and `shared image` can be queried by logging in to the [console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_image); the mirror ID of `cloud image market` can be queried through the [cloud market](https://market.cloud.tencent.com/list).</li><li>call the api [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), input InstanceType to obtain the list of images supported by the current model, and take the `ImageId` field from the return information.</li>.
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
                     * 获取The configuration information of instance data disks. If this parameter is not specified, no data disk will be purchased by default. When purchasing, you can specify 21 data disks, which can contain at most 1 LOCAL_BASIC or LOCAL_SSD data disk, and at most 20 CLOUD_BASIC, CLOUD_PREMIUM, or CLOUD_SSD data disks.
                     * @return DataDisks The configuration information of instance data disks. If this parameter is not specified, no data disk will be purchased by default. When purchasing, you can specify 21 data disks, which can contain at most 1 LOCAL_BASIC or LOCAL_SSD data disk, and at most 20 CLOUD_BASIC, CLOUD_PREMIUM, or CLOUD_SSD data disks.
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置The configuration information of instance data disks. If this parameter is not specified, no data disk will be purchased by default. When purchasing, you can specify 21 data disks, which can contain at most 1 LOCAL_BASIC or LOCAL_SSD data disk, and at most 20 CLOUD_BASIC, CLOUD_PREMIUM, or CLOUD_SSD data disks.
                     * @param _dataDisks The configuration information of instance data disks. If this parameter is not specified, no data disk will be purchased by default. When purchasing, you can specify 21 data disks, which can contain at most 1 LOCAL_BASIC or LOCAL_SSD data disk, and at most 20 CLOUD_BASIC, CLOUD_PREMIUM, or CLOUD_SSD data disks.
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
                     * 获取Configuration information of VPC. This parameter is used to specify VPC ID and subnet ID, etc. If this parameter is not specified, the classic network is used by default. If a VPC IP is specified in this parameter, it indicates the primary ENI IP of each instance. The value of parameter InstanceCount must be same as the number of VPC IPs, which cannot be greater than 20.
                     * @return VirtualPrivateCloud Configuration information of VPC. This parameter is used to specify VPC ID and subnet ID, etc. If this parameter is not specified, the classic network is used by default. If a VPC IP is specified in this parameter, it indicates the primary ENI IP of each instance. The value of parameter InstanceCount must be same as the number of VPC IPs, which cannot be greater than 20.
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置Configuration information of VPC. This parameter is used to specify VPC ID and subnet ID, etc. If this parameter is not specified, the classic network is used by default. If a VPC IP is specified in this parameter, it indicates the primary ENI IP of each instance. The value of parameter InstanceCount must be same as the number of VPC IPs, which cannot be greater than 20.
                     * @param _virtualPrivateCloud Configuration information of VPC. This parameter is used to specify VPC ID and subnet ID, etc. If this parameter is not specified, the classic network is used by default. If a VPC IP is specified in this parameter, it indicates the primary ENI IP of each instance. The value of parameter InstanceCount must be same as the number of VPC IPs, which cannot be greater than 20.
                     * 
                     */
                    void SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud);

                    /**
                     * 判断参数 VirtualPrivateCloud 是否已赋值
                     * @return VirtualPrivateCloud 是否已赋值
                     * 
                     */
                    bool VirtualPrivateCloudHasBeenSet() const;

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
                     * 获取Number of instances to be purchased. Value range for monthly-subscribed instances: [1, 300]. Value range for pay-as-you-go instances: [1, 100]. Default value: 1. The specified number of instances to be purchased cannot exceed the remaining quota allowed for the user. For more information on quota, see CVM instance [Purchase Limits](https://intl.cloud.tencent.com/document/product/213/2664).
                     * @return InstanceCount Number of instances to be purchased. Value range for monthly-subscribed instances: [1, 300]. Value range for pay-as-you-go instances: [1, 100]. Default value: 1. The specified number of instances to be purchased cannot exceed the remaining quota allowed for the user. For more information on quota, see CVM instance [Purchase Limits](https://intl.cloud.tencent.com/document/product/213/2664).
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置Number of instances to be purchased. Value range for monthly-subscribed instances: [1, 300]. Value range for pay-as-you-go instances: [1, 100]. Default value: 1. The specified number of instances to be purchased cannot exceed the remaining quota allowed for the user. For more information on quota, see CVM instance [Purchase Limits](https://intl.cloud.tencent.com/document/product/213/2664).
                     * @param _instanceCount Number of instances to be purchased. Value range for monthly-subscribed instances: [1, 300]. Value range for pay-as-you-go instances: [1, 100]. Default value: 1. The specified number of instances to be purchased cannot exceed the remaining quota allowed for the user. For more information on quota, see CVM instance [Purchase Limits](https://intl.cloud.tencent.com/document/product/213/2664).
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取Instance display name. <li>if the instance display name is not specified, it will display by default as 'unnamed'.</li> <li>when purchasing multiple instances, if the pattern string `{R:x}` is specified, it indicates generating numbers `[x, x+n-1]`, where `n` represents the number of purchased instances. for example, `server_{R:3}` will result in instance display names as `server_3` when purchasing 1 instance; when purchasing 2 instances, the instance display names will be `server_3` and `server_4` respectively. it supports specifying multiple pattern strings `{R:x}`.</li> <li>when purchasing multiple instances, if no pattern string is specified, a suffix `1, 2...n` will be added to the instance display name, where `n` represents the number of purchased instances. for example, for `server_`, when purchasing 2 instances, the instance display names will be `server_1` and `server_2` respectively.</li> <li>it supports up to 128 characters (including pattern strings).</li>.
                     * @return InstanceName Instance display name. <li>if the instance display name is not specified, it will display by default as 'unnamed'.</li> <li>when purchasing multiple instances, if the pattern string `{R:x}` is specified, it indicates generating numbers `[x, x+n-1]`, where `n` represents the number of purchased instances. for example, `server_{R:3}` will result in instance display names as `server_3` when purchasing 1 instance; when purchasing 2 instances, the instance display names will be `server_3` and `server_4` respectively. it supports specifying multiple pattern strings `{R:x}`.</li> <li>when purchasing multiple instances, if no pattern string is specified, a suffix `1, 2...n` will be added to the instance display name, where `n` represents the number of purchased instances. for example, for `server_`, when purchasing 2 instances, the instance display names will be `server_1` and `server_2` respectively.</li> <li>it supports up to 128 characters (including pattern strings).</li>.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance display name. <li>if the instance display name is not specified, it will display by default as 'unnamed'.</li> <li>when purchasing multiple instances, if the pattern string `{R:x}` is specified, it indicates generating numbers `[x, x+n-1]`, where `n` represents the number of purchased instances. for example, `server_{R:3}` will result in instance display names as `server_3` when purchasing 1 instance; when purchasing 2 instances, the instance display names will be `server_3` and `server_4` respectively. it supports specifying multiple pattern strings `{R:x}`.</li> <li>when purchasing multiple instances, if no pattern string is specified, a suffix `1, 2...n` will be added to the instance display name, where `n` represents the number of purchased instances. for example, for `server_`, when purchasing 2 instances, the instance display names will be `server_1` and `server_2` respectively.</li> <li>it supports up to 128 characters (including pattern strings).</li>.
                     * @param _instanceName Instance display name. <li>if the instance display name is not specified, it will display by default as 'unnamed'.</li> <li>when purchasing multiple instances, if the pattern string `{R:x}` is specified, it indicates generating numbers `[x, x+n-1]`, where `n` represents the number of purchased instances. for example, `server_{R:3}` will result in instance display names as `server_3` when purchasing 1 instance; when purchasing 2 instances, the instance display names will be `server_3` and `server_4` respectively. it supports specifying multiple pattern strings `{R:x}`.</li> <li>when purchasing multiple instances, if no pattern string is specified, a suffix `1, 2...n` will be added to the instance display name, where `n` represents the number of purchased instances. for example, for `server_`, when purchasing 2 instances, the instance display names will be `server_1` and `server_2` respectively.</li> <li>it supports up to 128 characters (including pattern strings).</li>.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance login settings. you can use this parameter to set the instance's login method to key or keep the original login settings of the image.
                     * @return LoginSettings Instance login settings. you can use this parameter to set the instance's login method to key or keep the original login settings of the image.
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置Instance login settings. you can use this parameter to set the instance's login method to key or keep the original login settings of the image.
                     * @param _loginSettings Instance login settings. you can use this parameter to set the instance's login method to key or keep the original login settings of the image.
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
                     * 获取Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response. If this parameter is not specified, the instance will be associated with default security groups.
                     * @return SecurityGroupIds Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response. If this parameter is not specified, the instance will be associated with default security groups.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response. If this parameter is not specified, the instance will be associated with default security groups.
                     * @param _securityGroupIds Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response. If this parameter is not specified, the instance will be associated with default security groups.
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
                     * 获取Enhanced service. this parameter can be used to specify whether to enable services such as cloud security and cloud monitoring. if this parameter is not specified, cloud monitor and cloud security services are enabled for public images by default; for custom images and marketplace images, cloud monitor and cloud security services are not enabled by default, and the services retained in the image will be used.
                     * @return EnhancedService Enhanced service. this parameter can be used to specify whether to enable services such as cloud security and cloud monitoring. if this parameter is not specified, cloud monitor and cloud security services are enabled for public images by default; for custom images and marketplace images, cloud monitor and cloud security services are not enabled by default, and the services retained in the image will be used.
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置Enhanced service. this parameter can be used to specify whether to enable services such as cloud security and cloud monitoring. if this parameter is not specified, cloud monitor and cloud security services are enabled for public images by default; for custom images and marketplace images, cloud monitor and cloud security services are not enabled by default, and the services retained in the image will be used.
                     * @param _enhancedService Enhanced service. this parameter can be used to specify whether to enable services such as cloud security and cloud monitoring. if this parameter is not specified, cloud monitor and cloud security services are enabled for public images by default; for custom images and marketplace images, cloud monitor and cloud security services are not enabled by default, and the services retained in the image will be used.
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
                     * 获取A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     * @return ClientToken A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     * @param _clientToken A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Hostname of Cloud Virtual Machine.<br><li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><br><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><br><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 60 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li>
                     * @return HostName Hostname of Cloud Virtual Machine.<br><li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><br><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><br><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 60 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Hostname of Cloud Virtual Machine.<br><li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><br><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><br><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 60 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li>
                     * @param _hostName Hostname of Cloud Virtual Machine.<br><li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><br><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><br><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 60 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li>
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Scheduled tasks. You can use this parameter to specify scheduled tasks for the instance. Only scheduled termination is supported.
                     * @return ActionTimer Scheduled tasks. You can use this parameter to specify scheduled tasks for the instance. Only scheduled termination is supported.
                     * 
                     */
                    ActionTimer GetActionTimer() const;

                    /**
                     * 设置Scheduled tasks. You can use this parameter to specify scheduled tasks for the instance. Only scheduled termination is supported.
                     * @param _actionTimer Scheduled tasks. You can use this parameter to specify scheduled tasks for the instance. Only scheduled termination is supported.
                     * 
                     */
                    void SetActionTimer(const ActionTimer& _actionTimer);

                    /**
                     * 判断参数 ActionTimer 是否已赋值
                     * @return ActionTimer 是否已赋值
                     * 
                     */
                    bool ActionTimerHasBeenSet() const;

                    /**
                     * 获取Placement group ID. You can only specify one.
                     * @return DisasterRecoverGroupIds Placement group ID. You can only specify one.
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置Placement group ID. You can only specify one.
                     * @param _disasterRecoverGroupIds Placement group ID. You can only specify one.
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
                     * 获取The tag description list. This parameter is used to bind a tag to a resource instance. A tag can only be bound to CVM instances.
                     * @return TagSpecification The tag description list. This parameter is used to bind a tag to a resource instance. A tag can only be bound to CVM instances.
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置The tag description list. This parameter is used to bind a tag to a resource instance. A tag can only be bound to CVM instances.
                     * @param _tagSpecification The tag description list. This parameter is used to bind a tag to a resource instance. A tag can only be bound to CVM instances.
                     * 
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

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
                     * 获取User data provided to the instance. This parameter needs to be encoded in base64 format with the maximum size of 16KB. For more information on how to get the value of this parameter, see the commands you need to execute on startup for [Windows](https://intl.cloud.tencent.com/document/product/213/17526) or [Linux](https://intl.cloud.tencent.com/document/product/213/17525).
                     * @return UserData User data provided to the instance. This parameter needs to be encoded in base64 format with the maximum size of 16KB. For more information on how to get the value of this parameter, see the commands you need to execute on startup for [Windows](https://intl.cloud.tencent.com/document/product/213/17526) or [Linux](https://intl.cloud.tencent.com/document/product/213/17525).
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置User data provided to the instance. This parameter needs to be encoded in base64 format with the maximum size of 16KB. For more information on how to get the value of this parameter, see the commands you need to execute on startup for [Windows](https://intl.cloud.tencent.com/document/product/213/17526) or [Linux](https://intl.cloud.tencent.com/document/product/213/17525).
                     * @param _userData User data provided to the instance. This parameter needs to be encoded in base64 format with the maximum size of 16KB. For more information on how to get the value of this parameter, see the commands you need to execute on startup for [Windows](https://intl.cloud.tencent.com/document/product/213/17526) or [Linux](https://intl.cloud.tencent.com/document/product/213/17525).
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
                     * 获取Whether the request is a dry run only.
`true`: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
`false` (default value): send a normal request and create instance(s) if all the requirements are met.
                     * @return DryRun Whether the request is a dry run only.
`true`: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
`false` (default value): send a normal request and create instance(s) if all the requirements are met.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether the request is a dry run only.
`true`: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
`false` (default value): send a normal request and create instance(s) if all the requirements are met.
                     * @param _dryRun Whether the request is a dry run only.
`true`: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
`false` (default value): send a normal request and create instance(s) if all the requirements are met.
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取CAM role name, which can be obtained from the `roleName` field in the response of the [`DescribeRoleList`](https://intl.cloud.tencent.com/document/product/598/36223?from_cn_redirect=1) API.
                     * @return CamRoleName CAM role name, which can be obtained from the `roleName` field in the response of the [`DescribeRoleList`](https://intl.cloud.tencent.com/document/product/598/36223?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置CAM role name, which can be obtained from the `roleName` field in the response of the [`DescribeRoleList`](https://intl.cloud.tencent.com/document/product/598/36223?from_cn_redirect=1) API.
                     * @param _camRoleName CAM role name, which can be obtained from the `roleName` field in the response of the [`DescribeRoleList`](https://intl.cloud.tencent.com/document/product/598/36223?from_cn_redirect=1) API.
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
                     * 获取HPC cluster ID. The HPC cluster must and can only be specified for a high-performance computing instance.
                     * @return HpcClusterId HPC cluster ID. The HPC cluster must and can only be specified for a high-performance computing instance.
                     * 
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置HPC cluster ID. The HPC cluster must and can only be specified for a high-performance computing instance.
                     * @param _hpcClusterId HPC cluster ID. The HPC cluster must and can only be specified for a high-performance computing instance.
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
                     * 获取Instance [billing mode](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1).<br><li>PREPAID: prepaid, that is, monthly subscription.</li><li>POSTPAID_BY_HOUR: pay-as-you-go by hour.</li><li>CDHPAID: CDH instance (created based on CDH; the resources of the host are free of charge).</li><li>SPOTPAID: spot payment.</li>Default value: POSTPAID_BY_HOUR.
                     * @return InstanceChargeType Instance [billing mode](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1).<br><li>PREPAID: prepaid, that is, monthly subscription.</li><li>POSTPAID_BY_HOUR: pay-as-you-go by hour.</li><li>CDHPAID: CDH instance (created based on CDH; the resources of the host are free of charge).</li><li>SPOTPAID: spot payment.</li>Default value: POSTPAID_BY_HOUR.
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance [billing mode](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1).<br><li>PREPAID: prepaid, that is, monthly subscription.</li><li>POSTPAID_BY_HOUR: pay-as-you-go by hour.</li><li>CDHPAID: CDH instance (created based on CDH; the resources of the host are free of charge).</li><li>SPOTPAID: spot payment.</li>Default value: POSTPAID_BY_HOUR.
                     * @param _instanceChargeType Instance [billing mode](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1).<br><li>PREPAID: prepaid, that is, monthly subscription.</li><li>POSTPAID_BY_HOUR: pay-as-you-go by hour.</li><li>CDHPAID: CDH instance (created based on CDH; the resources of the host are free of charge).</li><li>SPOTPAID: spot payment.</li>Default value: POSTPAID_BY_HOUR.
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
                     * 获取Instance termination protection flag, indicating whether an instance is allowed to be deleted through an API. Valid values:<br><li>TRUE: Instance protection is enabled, and the instance is not allowed to be deleted through the API.</li><br><li>FALSE: Instance protection is disabled, and the instance is allowed to be deleted through the API.</li><br><br>Default value: FALSE.
                     * @return DisableApiTermination Instance termination protection flag, indicating whether an instance is allowed to be deleted through an API. Valid values:<br><li>TRUE: Instance protection is enabled, and the instance is not allowed to be deleted through the API.</li><br><li>FALSE: Instance protection is disabled, and the instance is allowed to be deleted through the API.</li><br><br>Default value: FALSE.
                     * 
                     */
                    bool GetDisableApiTermination() const;

                    /**
                     * 设置Instance termination protection flag, indicating whether an instance is allowed to be deleted through an API. Valid values:<br><li>TRUE: Instance protection is enabled, and the instance is not allowed to be deleted through the API.</li><br><li>FALSE: Instance protection is disabled, and the instance is allowed to be deleted through the API.</li><br><br>Default value: FALSE.
                     * @param _disableApiTermination Instance termination protection flag, indicating whether an instance is allowed to be deleted through an API. Valid values:<br><li>TRUE: Instance protection is enabled, and the instance is not allowed to be deleted through the API.</li><br><li>FALSE: Instance protection is disabled, and the instance is allowed to be deleted through the API.</li><br><br>Default value: FALSE.
                     * 
                     */
                    void SetDisableApiTermination(const bool& _disableApiTermination);

                    /**
                     * 判断参数 DisableApiTermination 是否已赋值
                     * @return DisableApiTermination 是否已赋值
                     * 
                     */
                    bool DisableApiTerminationHasBeenSet() const;

                    /**
                     * 获取Custom metadata. specifies that custom metadata key-value pairs can be added when creating a CVM.
Note: this field is in beta test.
                     * @return Metadata Custom metadata. specifies that custom metadata key-value pairs can be added when creating a CVM.
Note: this field is in beta test.
                     * 
                     */
                    Metadata GetMetadata() const;

                    /**
                     * 设置Custom metadata. specifies that custom metadata key-value pairs can be added when creating a CVM.
Note: this field is in beta test.
                     * @param _metadata Custom metadata. specifies that custom metadata key-value pairs can be added when creating a CVM.
Note: this field is in beta test.
                     * 
                     */
                    void SetMetadata(const Metadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取Specifies that only the Update and Replace parameters are allowed. this parameter is valid only when custom Metadata is used in the template and Metadata is also transmitted in RunInstances. defaults to Replace.

-Update: if template t contains this parameter with a value of Update and metadata=[k1:v1, k2:v2], then RunInstances (with metadata=[k2:v3]) + t creates a cvm using metadata=[k1:v1, k2:v3]. 
-Replace: if the template t contains this parameter with a value of Replace and metadata=[k1:v1, k2:v2], then when creating a cvm using RunInstances (with metadata=[k2:v3]) + t, the created cvm will use metadata=[k2:v3]. 
Note: this field is in beta test.
                     * @return TemplateDataModifyAction Specifies that only the Update and Replace parameters are allowed. this parameter is valid only when custom Metadata is used in the template and Metadata is also transmitted in RunInstances. defaults to Replace.

-Update: if template t contains this parameter with a value of Update and metadata=[k1:v1, k2:v2], then RunInstances (with metadata=[k2:v3]) + t creates a cvm using metadata=[k1:v1, k2:v3]. 
-Replace: if the template t contains this parameter with a value of Replace and metadata=[k1:v1, k2:v2], then when creating a cvm using RunInstances (with metadata=[k2:v3]) + t, the created cvm will use metadata=[k2:v3]. 
Note: this field is in beta test.
                     * 
                     */
                    std::string GetTemplateDataModifyAction() const;

                    /**
                     * 设置Specifies that only the Update and Replace parameters are allowed. this parameter is valid only when custom Metadata is used in the template and Metadata is also transmitted in RunInstances. defaults to Replace.

-Update: if template t contains this parameter with a value of Update and metadata=[k1:v1, k2:v2], then RunInstances (with metadata=[k2:v3]) + t creates a cvm using metadata=[k1:v1, k2:v3]. 
-Replace: if the template t contains this parameter with a value of Replace and metadata=[k1:v1, k2:v2], then when creating a cvm using RunInstances (with metadata=[k2:v3]) + t, the created cvm will use metadata=[k2:v3]. 
Note: this field is in beta test.
                     * @param _templateDataModifyAction Specifies that only the Update and Replace parameters are allowed. this parameter is valid only when custom Metadata is used in the template and Metadata is also transmitted in RunInstances. defaults to Replace.

-Update: if template t contains this parameter with a value of Update and metadata=[k1:v1, k2:v2], then RunInstances (with metadata=[k2:v3]) + t creates a cvm using metadata=[k1:v1, k2:v3]. 
-Replace: if the template t contains this parameter with a value of Replace and metadata=[k1:v1, k2:v2], then when creating a cvm using RunInstances (with metadata=[k2:v3]) + t, the created cvm will use metadata=[k2:v3]. 
Note: this field is in beta test.
                     * 
                     */
                    void SetTemplateDataModifyAction(const std::string& _templateDataModifyAction);

                    /**
                     * 判断参数 TemplateDataModifyAction 是否已赋值
                     * @return TemplateDataModifyAction 是否已赋值
                     * 
                     */
                    bool TemplateDataModifyActionHasBeenSet() const;

                private:

                    /**
                     * Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone, project, and CDH (for dedicated CVMs)
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Instance launch template ID. This parameter is used as a basis for creating new template versions.
                     */
                    std::string m_launchTemplateId;
                    bool m_launchTemplateIdHasBeenSet;

                    /**
                     * This parameter, when specified, is used to create instance launch templates. If this parameter is not specified, the default version will be used.
                     */
                    int64_t m_launchTemplateVersion;
                    bool m_launchTemplateVersionHasBeenSet;

                    /**
                     * Description of instance launch template versions. This parameter can contain 2-256 characters.
                     */
                    std::string m_launchTemplateVersionDescription;
                    bool m_launchTemplateVersionDescriptionHasBeenSet;

                    /**
                     * Instance model. Different instance models specify different resource specifications.

<br><li>For instances created with the payment modes PREPAID or POSTPAID_BY_HOUR, the specific values can be obtained by calling the [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) API for the latest specification table or referring to [Instance Specifications](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1). If this parameter is not specified, the system will dynamically assign a default model based on the current resource sales situation in a region.</li><br><li>For instances created with the payment mode CDHPAID, this parameter has the prefix "CDH_" and is generated based on the CPU and memory configuration. The specific format is: CDH_XCXG. For example, for creating a CDH instance with 1 CPU core and 1 GB memory, this parameter should be CDH_1C1G.</li>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Assign an effective [mirror](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format like `img-xxx`. there are four image types: <br/><li>PUBLIC image</li><li>custom image</li><li>shared image</li><li>cloud image market</li><br/>you can obtain available mirror ids in the following ways: <br/><li>the mirror ids of `PUBLIC image`, `custom image` and `shared image` can be queried by logging in to the [console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_image); the mirror ID of `cloud image market` can be queried through the [cloud market](https://market.cloud.tencent.com/list).</li><li>call the api [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), input InstanceType to obtain the list of images supported by the current model, and take the `ImageId` field from the return information.</li>.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * System disk configuration of the instance. If this parameter is not specified, the default value will be used.
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * The configuration information of instance data disks. If this parameter is not specified, no data disk will be purchased by default. When purchasing, you can specify 21 data disks, which can contain at most 1 LOCAL_BASIC or LOCAL_SSD data disk, and at most 20 CLOUD_BASIC, CLOUD_PREMIUM, or CLOUD_SSD data disks.
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * Configuration information of VPC. This parameter is used to specify VPC ID and subnet ID, etc. If this parameter is not specified, the classic network is used by default. If a VPC IP is specified in this parameter, it indicates the primary ENI IP of each instance. The value of parameter InstanceCount must be same as the number of VPC IPs, which cannot be greater than 20.
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * Configuration of public network bandwidth. If this parameter is not specified, 0 Mbps will be used by default.
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * Number of instances to be purchased. Value range for monthly-subscribed instances: [1, 300]. Value range for pay-as-you-go instances: [1, 100]. Default value: 1. The specified number of instances to be purchased cannot exceed the remaining quota allowed for the user. For more information on quota, see CVM instance [Purchase Limits](https://intl.cloud.tencent.com/document/product/213/2664).
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Instance display name. <li>if the instance display name is not specified, it will display by default as 'unnamed'.</li> <li>when purchasing multiple instances, if the pattern string `{R:x}` is specified, it indicates generating numbers `[x, x+n-1]`, where `n` represents the number of purchased instances. for example, `server_{R:3}` will result in instance display names as `server_3` when purchasing 1 instance; when purchasing 2 instances, the instance display names will be `server_3` and `server_4` respectively. it supports specifying multiple pattern strings `{R:x}`.</li> <li>when purchasing multiple instances, if no pattern string is specified, a suffix `1, 2...n` will be added to the instance display name, where `n` represents the number of purchased instances. for example, for `server_`, when purchasing 2 instances, the instance display names will be `server_1` and `server_2` respectively.</li> <li>it supports up to 128 characters (including pattern strings).</li>.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance login settings. you can use this parameter to set the instance's login method to key or keep the original login settings of the image.
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response. If this parameter is not specified, the instance will be associated with default security groups.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Enhanced service. this parameter can be used to specify whether to enable services such as cloud security and cloud monitoring. if this parameter is not specified, cloud monitor and cloud security services are enabled for public images by default; for custom images and marketplace images, cloud monitor and cloud security services are not enabled by default, and the services retained in the image will be used.
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Hostname of Cloud Virtual Machine.<br><li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><br><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><br><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 60 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Scheduled tasks. You can use this parameter to specify scheduled tasks for the instance. Only scheduled termination is supported.
                     */
                    ActionTimer m_actionTimer;
                    bool m_actionTimerHasBeenSet;

                    /**
                     * Placement group ID. You can only specify one.
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * The tag description list. This parameter is used to bind a tag to a resource instance. A tag can only be bound to CVM instances.
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * Market options of the instance, such as parameters related to spot instances. This parameter is required for spot instances.
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * User data provided to the instance. This parameter needs to be encoded in base64 format with the maximum size of 16KB. For more information on how to get the value of this parameter, see the commands you need to execute on startup for [Windows](https://intl.cloud.tencent.com/document/product/213/17526) or [Linux](https://intl.cloud.tencent.com/document/product/213/17525).
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * Whether the request is a dry run only.
`true`: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
`false` (default value): send a normal request and create instance(s) if all the requirements are met.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * CAM role name, which can be obtained from the `roleName` field in the response of the [`DescribeRoleList`](https://intl.cloud.tencent.com/document/product/598/36223?from_cn_redirect=1) API.
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * HPC cluster ID. The HPC cluster must and can only be specified for a high-performance computing instance.
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * Instance [billing mode](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1).<br><li>PREPAID: prepaid, that is, monthly subscription.</li><li>POSTPAID_BY_HOUR: pay-as-you-go by hour.</li><li>CDHPAID: CDH instance (created based on CDH; the resources of the host are free of charge).</li><li>SPOTPAID: spot payment.</li>Default value: POSTPAID_BY_HOUR.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Details of the monthly subscription, including the purchase period, auto-renewal. It is required if the `InstanceChargeType` is `PREPAID`.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * Instance termination protection flag, indicating whether an instance is allowed to be deleted through an API. Valid values:<br><li>TRUE: Instance protection is enabled, and the instance is not allowed to be deleted through the API.</li><br><li>FALSE: Instance protection is disabled, and the instance is allowed to be deleted through the API.</li><br><br>Default value: FALSE.
                     */
                    bool m_disableApiTermination;
                    bool m_disableApiTerminationHasBeenSet;

                    /**
                     * Custom metadata. specifies that custom metadata key-value pairs can be added when creating a CVM.
Note: this field is in beta test.
                     */
                    Metadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * Specifies that only the Update and Replace parameters are allowed. this parameter is valid only when custom Metadata is used in the template and Metadata is also transmitted in RunInstances. defaults to Replace.

-Update: if template t contains this parameter with a value of Update and metadata=[k1:v1, k2:v2], then RunInstances (with metadata=[k2:v3]) + t creates a cvm using metadata=[k1:v1, k2:v3]. 
-Replace: if the template t contains this parameter with a value of Replace and metadata=[k1:v1, k2:v2], then when creating a cvm using RunInstances (with metadata=[k2:v3]) + t, the created cvm will use metadata=[k2:v3]. 
Note: this field is in beta test.
                     */
                    std::string m_templateDataModifyAction;
                    bool m_templateDataModifyActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CREATELAUNCHTEMPLATEVERSIONREQUEST_H_
