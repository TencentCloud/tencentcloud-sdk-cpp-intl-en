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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CREATELAUNCHTEMPLATEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CREATELAUNCHTEMPLATEREQUEST_H_

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
                * CreateLaunchTemplate request structure.
                */
                class CreateLaunchTemplateRequest : public AbstractModel
                {
                public:
                    CreateLaunchTemplateRequest();
                    ~CreateLaunchTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of an instance launch template. It contains 2 to 128 English or Chinese characters.
                     * @return LaunchTemplateName Name of an instance launch template. It contains 2 to 128 English or Chinese characters.
                     * 
                     */
                    std::string GetLaunchTemplateName() const;

                    /**
                     * 设置Name of an instance launch template. It contains 2 to 128 English or Chinese characters.
                     * @param _launchTemplateName Name of an instance launch template. It contains 2 to 128 English or Chinese characters.
                     * 
                     */
                    void SetLaunchTemplateName(const std::string& _launchTemplateName);

                    /**
                     * 判断参数 LaunchTemplateName 是否已赋值
                     * @return LaunchTemplateName 是否已赋值
                     * 
                     */
                    bool LaunchTemplateNameHasBeenSet() const;

                    /**
                     * 获取Location of the instance. You can specify attributes such as availability zone, project, and host (specified when creating a instance on the CDH) to which the instance belongs through this parameter.
                     * @return Placement Location of the instance. You can specify attributes such as availability zone, project, and host (specified when creating a instance on the CDH) to which the instance belongs through this parameter.
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Location of the instance. You can specify attributes such as availability zone, project, and host (specified when creating a instance on the CDH) to which the instance belongs through this parameter.
                     * @param _placement Location of the instance. You can specify attributes such as availability zone, project, and host (specified when creating a instance on the CDH) to which the instance belongs through this parameter.
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
                     * 获取Specify an effective [mirror](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. there are four image types: <li>PUBLIC image</li> <li>custom image</li> <li>shared image</li> <li>service market image</li>  you can obtain available mirror ids in the following ways: <li>the mirror ids of `PUBLIC image`, `custom image` and `shared image` can be queried by logging in to the [console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_image); the mirror ids of `service market image` can be queried through the [cloud market](https://market.cloud.tencent.com/list).</li> <li>call the api [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), input InstanceType to obtain the list of images supported by the current model, and take the `ImageId` field from the return information.</li>.
                     * @return ImageId Specify an effective [mirror](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. there are four image types: <li>PUBLIC image</li> <li>custom image</li> <li>shared image</li> <li>service market image</li>  you can obtain available mirror ids in the following ways: <li>the mirror ids of `PUBLIC image`, `custom image` and `shared image` can be queried by logging in to the [console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_image); the mirror ids of `service market image` can be queried through the [cloud market](https://market.cloud.tencent.com/list).</li> <li>call the api [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), input InstanceType to obtain the list of images supported by the current model, and take the `ImageId` field from the return information.</li>.
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Specify an effective [mirror](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. there are four image types: <li>PUBLIC image</li> <li>custom image</li> <li>shared image</li> <li>service market image</li>  you can obtain available mirror ids in the following ways: <li>the mirror ids of `PUBLIC image`, `custom image` and `shared image` can be queried by logging in to the [console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_image); the mirror ids of `service market image` can be queried through the [cloud market](https://market.cloud.tencent.com/list).</li> <li>call the api [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), input InstanceType to obtain the list of images supported by the current model, and take the `ImageId` field from the return information.</li>.
                     * @param _imageId Specify an effective [mirror](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. there are four image types: <li>PUBLIC image</li> <li>custom image</li> <li>shared image</li> <li>service market image</li>  you can obtain available mirror ids in the following ways: <li>the mirror ids of `PUBLIC image`, `custom image` and `shared image` can be queried by logging in to the [console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_image); the mirror ids of `service market image` can be queried through the [cloud market](https://market.cloud.tencent.com/list).</li> <li>call the api [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), input InstanceType to obtain the list of images supported by the current model, and take the `ImageId` field from the return information.</li>.
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
                     * 获取Version description of an instance launch template. It contains 2 to 256 English or Chinese characters.
                     * @return LaunchTemplateVersionDescription Version description of an instance launch template. It contains 2 to 256 English or Chinese characters.
                     * 
                     */
                    std::string GetLaunchTemplateVersionDescription() const;

                    /**
                     * 设置Version description of an instance launch template. It contains 2 to 256 English or Chinese characters.
                     * @param _launchTemplateVersionDescription Version description of an instance launch template. It contains 2 to 256 English or Chinese characters.
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

<br><li>For instances created with the payment modes PREPAID or POSTPAID_BY_HOUR, the specific values can be obtained BY calling the [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) api to get the latest specification table or referring to the [instance specifications](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1) description. if this parameter is not specified, the system will dynamically assign a default model based on the current resource sales situation in a region.</li><li>for instances created with the payment mode CDHPAID, this parameter has the prefix "CDH_" and is generated based on the CPU and memory configuration. the specific format is: CDH_XCXG. for example, for creating a CDH instance with 1 CPU core and 1 gb memory, this parameter should be CDH_1C1G.</li>.
                     * @return InstanceType Instance model. Different instance models specify different resource specifications.

<br><li>For instances created with the payment modes PREPAID or POSTPAID_BY_HOUR, the specific values can be obtained BY calling the [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) api to get the latest specification table or referring to the [instance specifications](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1) description. if this parameter is not specified, the system will dynamically assign a default model based on the current resource sales situation in a region.</li><li>for instances created with the payment mode CDHPAID, this parameter has the prefix "CDH_" and is generated based on the CPU and memory configuration. the specific format is: CDH_XCXG. for example, for creating a CDH instance with 1 CPU core and 1 gb memory, this parameter should be CDH_1C1G.</li>.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance model. Different instance models specify different resource specifications.

<br><li>For instances created with the payment modes PREPAID or POSTPAID_BY_HOUR, the specific values can be obtained BY calling the [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) api to get the latest specification table or referring to the [instance specifications](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1) description. if this parameter is not specified, the system will dynamically assign a default model based on the current resource sales situation in a region.</li><li>for instances created with the payment mode CDHPAID, this parameter has the prefix "CDH_" and is generated based on the CPU and memory configuration. the specific format is: CDH_XCXG. for example, for creating a CDH instance with 1 CPU core and 1 gb memory, this parameter should be CDH_1C1G.</li>.
                     * @param _instanceType Instance model. Different instance models specify different resource specifications.

<br><li>For instances created with the payment modes PREPAID or POSTPAID_BY_HOUR, the specific values can be obtained BY calling the [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) api to get the latest specification table or referring to the [instance specifications](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1) description. if this parameter is not specified, the system will dynamically assign a default model based on the current resource sales situation in a region.</li><li>for instances created with the payment mode CDHPAID, this parameter has the prefix "CDH_" and is generated based on the CPU and memory configuration. the specific format is: CDH_XCXG. for example, for creating a CDH instance with 1 CPU core and 1 gb memory, this parameter should be CDH_1C1G.</li>.
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
                     * 获取Instance system disk configuration information. If this parameter is not specified, it will be assigned based on the system default values.
                     * @return SystemDisk Instance system disk configuration information. If this parameter is not specified, it will be assigned based on the system default values.
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置Instance system disk configuration information. If this parameter is not specified, it will be assigned based on the system default values.
                     * @param _systemDisk Instance system disk configuration information. If this parameter is not specified, it will be assigned based on the system default values.
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
                     * 获取Instance data disk configuration information. if not specified, no data disks are purchased by default. support specifying 21 data disks at the time of purchase, among which a maximum of 1 LOCAL_BASIC data disk or LOCAL_SSD data disk can be included, and a maximum of 20 CLOUD_BASIC data disks, CLOUD_PREMIUM data disks or CLOUD_SSD data disks can be included.
                     * @return DataDisks Instance data disk configuration information. if not specified, no data disks are purchased by default. support specifying 21 data disks at the time of purchase, among which a maximum of 1 LOCAL_BASIC data disk or LOCAL_SSD data disk can be included, and a maximum of 20 CLOUD_BASIC data disks, CLOUD_PREMIUM data disks or CLOUD_SSD data disks can be included.
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置Instance data disk configuration information. if not specified, no data disks are purchased by default. support specifying 21 data disks at the time of purchase, among which a maximum of 1 LOCAL_BASIC data disk or LOCAL_SSD data disk can be included, and a maximum of 20 CLOUD_BASIC data disks, CLOUD_PREMIUM data disks or CLOUD_SSD data disks can be included.
                     * @param _dataDisks Instance data disk configuration information. if not specified, no data disks are purchased by default. support specifying 21 data disks at the time of purchase, among which a maximum of 1 LOCAL_BASIC data disk or LOCAL_SSD data disk can be included, and a maximum of 20 CLOUD_BASIC data disks, CLOUD_PREMIUM data disks or CLOUD_SSD data disks can be included.
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
                     * 获取VPC-related information configuration. You can specify information such as VPC ID and subnet ID through this parameter. If this parameter is not specified, use the basic network by default. If a VPC IP is specified in this parameter, it indicates the primary network interface card IP of each instance. In addition, the number of the InstanceCount parameter should be consistent with the number of the VPC IP and should not exceed 20.
                     * @return VirtualPrivateCloud VPC-related information configuration. You can specify information such as VPC ID and subnet ID through this parameter. If this parameter is not specified, use the basic network by default. If a VPC IP is specified in this parameter, it indicates the primary network interface card IP of each instance. In addition, the number of the InstanceCount parameter should be consistent with the number of the VPC IP and should not exceed 20.
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置VPC-related information configuration. You can specify information such as VPC ID and subnet ID through this parameter. If this parameter is not specified, use the basic network by default. If a VPC IP is specified in this parameter, it indicates the primary network interface card IP of each instance. In addition, the number of the InstanceCount parameter should be consistent with the number of the VPC IP and should not exceed 20.
                     * @param _virtualPrivateCloud VPC-related information configuration. You can specify information such as VPC ID and subnet ID through this parameter. If this parameter is not specified, use the basic network by default. If a VPC IP is specified in this parameter, it indicates the primary network interface card IP of each instance. In addition, the number of the InstanceCount parameter should be consistent with the number of the VPC IP and should not exceed 20.
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
                     * 获取Public bandwidth-related settings. If this parameter is not specified, the public bandwidth is 0 Mbps by default.
                     * @return InternetAccessible Public bandwidth-related settings. If this parameter is not specified, the public bandwidth is 0 Mbps by default.
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置Public bandwidth-related settings. If this parameter is not specified, the public bandwidth is 0 Mbps by default.
                     * @param _internetAccessible Public bandwidth-related settings. If this parameter is not specified, the public bandwidth is 0 Mbps by default.
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
                     * 获取Number of instances to purchase. value range for monthly subscription instances: [1, 300]. value range for pay-as-you-go instances: [1, 100]. default value: 1. the number of instances to purchase must not exceed the remaining user quota. for specific quota limitations, see [CVM instance purchase limitations](https://intl.cloud.tencent.com/document/product/213/2664?from_cn_redirect=1).
                     * @return InstanceCount Number of instances to purchase. value range for monthly subscription instances: [1, 300]. value range for pay-as-you-go instances: [1, 100]. default value: 1. the number of instances to purchase must not exceed the remaining user quota. for specific quota limitations, see [CVM instance purchase limitations](https://intl.cloud.tencent.com/document/product/213/2664?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置Number of instances to purchase. value range for monthly subscription instances: [1, 300]. value range for pay-as-you-go instances: [1, 100]. default value: 1. the number of instances to purchase must not exceed the remaining user quota. for specific quota limitations, see [CVM instance purchase limitations](https://intl.cloud.tencent.com/document/product/213/2664?from_cn_redirect=1).
                     * @param _instanceCount Number of instances to purchase. value range for monthly subscription instances: [1, 300]. value range for pay-as-you-go instances: [1, 100]. default value: 1. the number of instances to purchase must not exceed the remaining user quota. for specific quota limitations, see [CVM instance purchase limitations](https://intl.cloud.tencent.com/document/product/213/2664?from_cn_redirect=1).
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
                     * 获取Instance login settings. this parameter allows you to set the instance login method to key or maintain the original login settings of the image.
                     * @return LoginSettings Instance login settings. this parameter allows you to set the instance login method to key or maintain the original login settings of the image.
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置Instance login settings. this parameter allows you to set the instance login method to key or maintain the original login settings of the image.
                     * @param _loginSettings Instance login settings. this parameter allows you to set the instance login method to key or maintain the original login settings of the image.
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
                     * 获取Security group to which an instance belongs. this parameter can be obtained by calling the sgId field in the returned value of [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1). if not specified, the default security group is bound.
                     * @return SecurityGroupIds Security group to which an instance belongs. this parameter can be obtained by calling the sgId field in the returned value of [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1). if not specified, the default security group is bound.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group to which an instance belongs. this parameter can be obtained by calling the sgId field in the returned value of [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1). if not specified, the default security group is bound.
                     * @param _securityGroupIds Security group to which an instance belongs. this parameter can be obtained by calling the sgId field in the returned value of [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1). if not specified, the default security group is bound.
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
                     * 获取Enhanced services. You can specify whether to enable services such as Cloud Security and Cloud Monitor through this parameter. If this parameter is not specified, Cloud Monitor and Cloud Security are enabled for public images by default, but not enabled for custom images and marketplace images by default. Instead, they use services retained in the images.
                     * @return EnhancedService Enhanced services. You can specify whether to enable services such as Cloud Security and Cloud Monitor through this parameter. If this parameter is not specified, Cloud Monitor and Cloud Security are enabled for public images by default, but not enabled for custom images and marketplace images by default. Instead, they use services retained in the images.
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置Enhanced services. You can specify whether to enable services such as Cloud Security and Cloud Monitor through this parameter. If this parameter is not specified, Cloud Monitor and Cloud Security are enabled for public images by default, but not enabled for custom images and marketplace images by default. Instead, they use services retained in the images.
                     * @param _enhancedService Enhanced services. You can specify whether to enable services such as Cloud Security and Cloud Monitor through this parameter. If this parameter is not specified, Cloud Monitor and Cloud Security are enabled for public images by default, but not enabled for custom images and marketplace images by default. Instead, they use services retained in the images.
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
                     * 获取A string used to ensure the idempotence of the request. This string is generated by the customer and should be unique across different requests, with a maximum length of 64 ASCII characters. If this parameter is not specified, the idempotence of the request cannot be guaranteed.
                     * @return ClientToken A string used to ensure the idempotence of the request. This string is generated by the customer and should be unique across different requests, with a maximum length of 64 ASCII characters. If this parameter is not specified, the idempotence of the request cannot be guaranteed.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A string used to ensure the idempotence of the request. This string is generated by the customer and should be unique across different requests, with a maximum length of 64 ASCII characters. If this parameter is not specified, the idempotence of the request cannot be guaranteed.
                     * @param _clientToken A string used to ensure the idempotence of the request. This string is generated by the customer and should be unique across different requests, with a maximum length of 64 ASCII characters. If this parameter is not specified, the idempotence of the request cannot be guaranteed.
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
                     * 获取Specifies the HostName of the cloud virtual machine.<br><li>the dot (.) and hyphen (-) cannot be used at the beginning or end of the HostName, and cannot be used consecutively.</li><li>for Windows instances: the character length is 2 to 15. it consists of letters (case insensitive), digits, and hyphens (-). dots (.) are not supported, and it cannot be all digits.</li><li>for other types (such as Linux) instances: the character length is 2 to 60. multiple dots are allowed. each segment between dots can include letters (case insensitive), digits, and hyphens (-).</li>.
                     * @return HostName Specifies the HostName of the cloud virtual machine.<br><li>the dot (.) and hyphen (-) cannot be used at the beginning or end of the HostName, and cannot be used consecutively.</li><li>for Windows instances: the character length is 2 to 15. it consists of letters (case insensitive), digits, and hyphens (-). dots (.) are not supported, and it cannot be all digits.</li><li>for other types (such as Linux) instances: the character length is 2 to 60. multiple dots are allowed. each segment between dots can include letters (case insensitive), digits, and hyphens (-).</li>.
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Specifies the HostName of the cloud virtual machine.<br><li>the dot (.) and hyphen (-) cannot be used at the beginning or end of the HostName, and cannot be used consecutively.</li><li>for Windows instances: the character length is 2 to 15. it consists of letters (case insensitive), digits, and hyphens (-). dots (.) are not supported, and it cannot be all digits.</li><li>for other types (such as Linux) instances: the character length is 2 to 60. multiple dots are allowed. each segment between dots can include letters (case insensitive), digits, and hyphens (-).</li>.
                     * @param _hostName Specifies the HostName of the cloud virtual machine.<br><li>the dot (.) and hyphen (-) cannot be used at the beginning or end of the HostName, and cannot be used consecutively.</li><li>for Windows instances: the character length is 2 to 15. it consists of letters (case insensitive), digits, and hyphens (-). dots (.) are not supported, and it cannot be all digits.</li><li>for other types (such as Linux) instances: the character length is 2 to 60. multiple dots are allowed. each segment between dots can include letters (case insensitive), digits, and hyphens (-).</li>.
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
                     * 获取Scheduled task. You can specify a scheduled task for the instance through this parameter. Currently, only scheduled termination is supported.
                     * @return ActionTimer Scheduled task. You can specify a scheduled task for the instance through this parameter. Currently, only scheduled termination is supported.
                     * 
                     */
                    ActionTimer GetActionTimer() const;

                    /**
                     * 设置Scheduled task. You can specify a scheduled task for the instance through this parameter. Currently, only scheduled termination is supported.
                     * @param _actionTimer Scheduled task. You can specify a scheduled task for the instance through this parameter. Currently, only scheduled termination is supported.
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

                    /**
                     * 获取List of tag descriptions. You can bind tags to corresponding resource instances at the same time by specifying this parameter. Currently, only binding tags to the CVM is supported.
                     * @return TagSpecification List of tag descriptions. You can bind tags to corresponding resource instances at the same time by specifying this parameter. Currently, only binding tags to the CVM is supported.
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置List of tag descriptions. You can bind tags to corresponding resource instances at the same time by specifying this parameter. Currently, only binding tags to the CVM is supported.
                     * @param _tagSpecification List of tag descriptions. You can bind tags to corresponding resource instances at the same time by specifying this parameter. Currently, only binding tags to the CVM is supported.
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
                     * 获取Market-Related options of the instance, such as relevant parameters of the bidding instance. this parameter is required if the payment mode of the specified instance is spot payment.
                     * @return InstanceMarketOptions Market-Related options of the instance, such as relevant parameters of the bidding instance. this parameter is required if the payment mode of the specified instance is spot payment.
                     * 
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置Market-Related options of the instance, such as relevant parameters of the bidding instance. this parameter is required if the payment mode of the specified instance is spot payment.
                     * @param _instanceMarketOptions Market-Related options of the instance, such as relevant parameters of the bidding instance. this parameter is required if the payment mode of the specified instance is spot payment.
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
                     * 获取User data provided for an instance must be encoded in base64. valid values for maximum data size are up to 16 KB. for details on obtaining this parameter, see running commands at startup for Windows (https://intl.cloud.tencent.com/document/product/213/17526?from_cn_redirect=1) and Linux (https://intl.cloud.tencent.com/document/product/213/17525?from_cn_redirect=1).
                     * @return UserData User data provided for an instance must be encoded in base64. valid values for maximum data size are up to 16 KB. for details on obtaining this parameter, see running commands at startup for Windows (https://intl.cloud.tencent.com/document/product/213/17526?from_cn_redirect=1) and Linux (https://intl.cloud.tencent.com/document/product/213/17525?from_cn_redirect=1).
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置User data provided for an instance must be encoded in base64. valid values for maximum data size are up to 16 KB. for details on obtaining this parameter, see running commands at startup for Windows (https://intl.cloud.tencent.com/document/product/213/17526?from_cn_redirect=1) and Linux (https://intl.cloud.tencent.com/document/product/213/17525?from_cn_redirect=1).
                     * @param _userData User data provided for an instance must be encoded in base64. valid values for maximum data size are up to 16 KB. for details on obtaining this parameter, see running commands at startup for Windows (https://intl.cloud.tencent.com/document/product/213/17526?from_cn_redirect=1) and Linux (https://intl.cloud.tencent.com/document/product/213/17525?from_cn_redirect=1).
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
                     * 获取Whether it is a pre-check for this request only.
true: sends a check request without creating an instance. check items include whether required parameters are filled in, request format, service limits, and cvm inventory.
If the check fails, return the corresponding error code.
If the check passed, return RequestId.
false (default): sends a normal request. after passing the check, creates an instance directly.
                     * @return DryRun Whether it is a pre-check for this request only.
true: sends a check request without creating an instance. check items include whether required parameters are filled in, request format, service limits, and cvm inventory.
If the check fails, return the corresponding error code.
If the check passed, return RequestId.
false (default): sends a normal request. after passing the check, creates an instance directly.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether it is a pre-check for this request only.
true: sends a check request without creating an instance. check items include whether required parameters are filled in, request format, service limits, and cvm inventory.
If the check fails, return the corresponding error code.
If the check passed, return RequestId.
false (default): sends a normal request. after passing the check, creates an instance directly.
                     * @param _dryRun Whether it is a pre-check for this request only.
true: sends a check request without creating an instance. check items include whether required parameters are filled in, request format, service limits, and cvm inventory.
If the check fails, return the corresponding error code.
If the check passed, return RequestId.
false (default): sends a normal request. after passing the check, creates an instance directly.
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
                     * 获取CAM role name. it can be obtained through the roleName in the return value from the API DescribeRoleList.
                     * @return CamRoleName CAM role name. it can be obtained through the roleName in the return value from the API DescribeRoleList.
                     * 
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置CAM role name. it can be obtained through the roleName in the return value from the API DescribeRoleList.
                     * @param _camRoleName CAM role name. it can be obtained through the roleName in the return value from the API DescribeRoleList.
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
                     * 获取High-performance computing cluster ID. If the created instance is a high-performance computing instance, the cluster where the instance is placed should be specified. Otherwise, it cannot be specified.
                     * @return HpcClusterId High-performance computing cluster ID. If the created instance is a high-performance computing instance, the cluster where the instance is placed should be specified. Otherwise, it cannot be specified.
                     * 
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置High-performance computing cluster ID. If the created instance is a high-performance computing instance, the cluster where the instance is placed should be specified. Otherwise, it cannot be specified.
                     * @param _hpcClusterId High-performance computing cluster ID. If the created instance is a high-performance computing instance, the cluster where the instance is placed should be specified. Otherwise, it cannot be specified.
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
                     * 获取Prepaid mode, that is, annual and monthly subscription related parameter settings. Through this parameter, you can specify the purchase duration of annual and monthly subscription instances, whether to set auto-renewal, etc. If the specified instance's billing mode is the prepaid mode, this parameter must be passed.
                     * @return InstanceChargePrepaid Prepaid mode, that is, annual and monthly subscription related parameter settings. Through this parameter, you can specify the purchase duration of annual and monthly subscription instances, whether to set auto-renewal, etc. If the specified instance's billing mode is the prepaid mode, this parameter must be passed.
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置Prepaid mode, that is, annual and monthly subscription related parameter settings. Through this parameter, you can specify the purchase duration of annual and monthly subscription instances, whether to set auto-renewal, etc. If the specified instance's billing mode is the prepaid mode, this parameter must be passed.
                     * @param _instanceChargePrepaid Prepaid mode, that is, annual and monthly subscription related parameter settings. Through this parameter, you can specify the purchase duration of annual and monthly subscription instances, whether to set auto-renewal, etc. If the specified instance's billing mode is the prepaid mode, this parameter must be passed.
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
                     * 获取Instance destruction protection flag: indicates whether an instance is allowed to be deleted through an api. value ranges from: - **TRUE**: indicates that instance protection is enabled, deletion through apis is not allowed. - **FALSE**: indicates that instance protection is disabled, deletion through apis is allowed.  default value: FALSE.
                     * @return DisableApiTermination Instance destruction protection flag: indicates whether an instance is allowed to be deleted through an api. value ranges from: - **TRUE**: indicates that instance protection is enabled, deletion through apis is not allowed. - **FALSE**: indicates that instance protection is disabled, deletion through apis is allowed.  default value: FALSE.
                     * 
                     */
                    bool GetDisableApiTermination() const;

                    /**
                     * 设置Instance destruction protection flag: indicates whether an instance is allowed to be deleted through an api. value ranges from: - **TRUE**: indicates that instance protection is enabled, deletion through apis is not allowed. - **FALSE**: indicates that instance protection is disabled, deletion through apis is allowed.  default value: FALSE.
                     * @param _disableApiTermination Instance destruction protection flag: indicates whether an instance is allowed to be deleted through an api. value ranges from: - **TRUE**: indicates that instance protection is enabled, deletion through apis is not allowed. - **FALSE**: indicates that instance protection is disabled, deletion through apis is allowed.  default value: FALSE.
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
                     * 获取Description list of tags. by specifying this parameter, tags can be bound to the instance launch template.
                     * @return LaunchTemplateTagSpecification Description list of tags. by specifying this parameter, tags can be bound to the instance launch template.
                     * 
                     */
                    std::vector<TagSpecification> GetLaunchTemplateTagSpecification() const;

                    /**
                     * 设置Description list of tags. by specifying this parameter, tags can be bound to the instance launch template.
                     * @param _launchTemplateTagSpecification Description list of tags. by specifying this parameter, tags can be bound to the instance launch template.
                     * 
                     */
                    void SetLaunchTemplateTagSpecification(const std::vector<TagSpecification>& _launchTemplateTagSpecification);

                    /**
                     * 判断参数 LaunchTemplateTagSpecification 是否已赋值
                     * @return LaunchTemplateTagSpecification 是否已赋值
                     * 
                     */
                    bool LaunchTemplateTagSpecificationHasBeenSet() const;

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
                     * Name of an instance launch template. It contains 2 to 128 English or Chinese characters.
                     */
                    std::string m_launchTemplateName;
                    bool m_launchTemplateNameHasBeenSet;

                    /**
                     * Location of the instance. You can specify attributes such as availability zone, project, and host (specified when creating a instance on the CDH) to which the instance belongs through this parameter.
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Specify an effective [mirror](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. there are four image types: <li>PUBLIC image</li> <li>custom image</li> <li>shared image</li> <li>service market image</li>  you can obtain available mirror ids in the following ways: <li>the mirror ids of `PUBLIC image`, `custom image` and `shared image` can be queried by logging in to the [console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_image); the mirror ids of `service market image` can be queried through the [cloud market](https://market.cloud.tencent.com/list).</li> <li>call the api [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), input InstanceType to obtain the list of images supported by the current model, and take the `ImageId` field from the return information.</li>.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Version description of an instance launch template. It contains 2 to 256 English or Chinese characters.
                     */
                    std::string m_launchTemplateVersionDescription;
                    bool m_launchTemplateVersionDescriptionHasBeenSet;

                    /**
                     * Instance model. Different instance models specify different resource specifications.

<br><li>For instances created with the payment modes PREPAID or POSTPAID_BY_HOUR, the specific values can be obtained BY calling the [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) api to get the latest specification table or referring to the [instance specifications](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1) description. if this parameter is not specified, the system will dynamically assign a default model based on the current resource sales situation in a region.</li><li>for instances created with the payment mode CDHPAID, this parameter has the prefix "CDH_" and is generated based on the CPU and memory configuration. the specific format is: CDH_XCXG. for example, for creating a CDH instance with 1 CPU core and 1 gb memory, this parameter should be CDH_1C1G.</li>.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance system disk configuration information. If this parameter is not specified, it will be assigned based on the system default values.
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Instance data disk configuration information. if not specified, no data disks are purchased by default. support specifying 21 data disks at the time of purchase, among which a maximum of 1 LOCAL_BASIC data disk or LOCAL_SSD data disk can be included, and a maximum of 20 CLOUD_BASIC data disks, CLOUD_PREMIUM data disks or CLOUD_SSD data disks can be included.
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * VPC-related information configuration. You can specify information such as VPC ID and subnet ID through this parameter. If this parameter is not specified, use the basic network by default. If a VPC IP is specified in this parameter, it indicates the primary network interface card IP of each instance. In addition, the number of the InstanceCount parameter should be consistent with the number of the VPC IP and should not exceed 20.
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * Public bandwidth-related settings. If this parameter is not specified, the public bandwidth is 0 Mbps by default.
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * Number of instances to purchase. value range for monthly subscription instances: [1, 300]. value range for pay-as-you-go instances: [1, 100]. default value: 1. the number of instances to purchase must not exceed the remaining user quota. for specific quota limitations, see [CVM instance purchase limitations](https://intl.cloud.tencent.com/document/product/213/2664?from_cn_redirect=1).
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Instance display name. <li>if the instance display name is not specified, it will display by default as 'unnamed'.</li> <li>when purchasing multiple instances, if the pattern string `{R:x}` is specified, it indicates generating numbers `[x, x+n-1]`, where `n` represents the number of purchased instances. for example, `server_{R:3}` will result in instance display names as `server_3` when purchasing 1 instance; when purchasing 2 instances, the instance display names will be `server_3` and `server_4` respectively. it supports specifying multiple pattern strings `{R:x}`.</li> <li>when purchasing multiple instances, if no pattern string is specified, a suffix `1, 2...n` will be added to the instance display name, where `n` represents the number of purchased instances. for example, for `server_`, when purchasing 2 instances, the instance display names will be `server_1` and `server_2` respectively.</li> <li>it supports up to 128 characters (including pattern strings).</li>.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance login settings. this parameter allows you to set the instance login method to key or maintain the original login settings of the image.
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * Security group to which an instance belongs. this parameter can be obtained by calling the sgId field in the returned value of [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808?from_cn_redirect=1). if not specified, the default security group is bound.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Enhanced services. You can specify whether to enable services such as Cloud Security and Cloud Monitor through this parameter. If this parameter is not specified, Cloud Monitor and Cloud Security are enabled for public images by default, but not enabled for custom images and marketplace images by default. Instead, they use services retained in the images.
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * A string used to ensure the idempotence of the request. This string is generated by the customer and should be unique across different requests, with a maximum length of 64 ASCII characters. If this parameter is not specified, the idempotence of the request cannot be guaranteed.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Specifies the HostName of the cloud virtual machine.<br><li>the dot (.) and hyphen (-) cannot be used at the beginning or end of the HostName, and cannot be used consecutively.</li><li>for Windows instances: the character length is 2 to 15. it consists of letters (case insensitive), digits, and hyphens (-). dots (.) are not supported, and it cannot be all digits.</li><li>for other types (such as Linux) instances: the character length is 2 to 60. multiple dots are allowed. each segment between dots can include letters (case insensitive), digits, and hyphens (-).</li>.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Scheduled task. You can specify a scheduled task for the instance through this parameter. Currently, only scheduled termination is supported.
                     */
                    ActionTimer m_actionTimer;
                    bool m_actionTimerHasBeenSet;

                    /**
                     * Placement group ID. Only one can be specified.
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * List of tag descriptions. You can bind tags to corresponding resource instances at the same time by specifying this parameter. Currently, only binding tags to the CVM is supported.
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * Market-Related options of the instance, such as relevant parameters of the bidding instance. this parameter is required if the payment mode of the specified instance is spot payment.
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * User data provided for an instance must be encoded in base64. valid values for maximum data size are up to 16 KB. for details on obtaining this parameter, see running commands at startup for Windows (https://intl.cloud.tencent.com/document/product/213/17526?from_cn_redirect=1) and Linux (https://intl.cloud.tencent.com/document/product/213/17525?from_cn_redirect=1).
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * Whether it is a pre-check for this request only.
true: sends a check request without creating an instance. check items include whether required parameters are filled in, request format, service limits, and cvm inventory.
If the check fails, return the corresponding error code.
If the check passed, return RequestId.
false (default): sends a normal request. after passing the check, creates an instance directly.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * CAM role name. it can be obtained through the roleName in the return value from the API DescribeRoleList.
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * High-performance computing cluster ID. If the created instance is a high-performance computing instance, the cluster where the instance is placed should be specified. Otherwise, it cannot be specified.
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * Instance [billing mode](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1).<br><li>PREPAID: prepaid, that is, monthly subscription.</li><li>POSTPAID_BY_HOUR: pay-as-you-go by hour.</li><li>CDHPAID: CDH instance (created based on CDH; the resources of the host are free of charge).</li><li>SPOTPAID: spot payment.</li>Default value: POSTPAID_BY_HOUR.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Prepaid mode, that is, annual and monthly subscription related parameter settings. Through this parameter, you can specify the purchase duration of annual and monthly subscription instances, whether to set auto-renewal, etc. If the specified instance's billing mode is the prepaid mode, this parameter must be passed.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * Instance destruction protection flag: indicates whether an instance is allowed to be deleted through an api. value ranges from: - **TRUE**: indicates that instance protection is enabled, deletion through apis is not allowed. - **FALSE**: indicates that instance protection is disabled, deletion through apis is allowed.  default value: FALSE.
                     */
                    bool m_disableApiTermination;
                    bool m_disableApiTerminationHasBeenSet;

                    /**
                     * Description list of tags. by specifying this parameter, tags can be bound to the instance launch template.
                     */
                    std::vector<TagSpecification> m_launchTemplateTagSpecification;
                    bool m_launchTemplateTagSpecificationHasBeenSet;

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

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CREATELAUNCHTEMPLATEREQUEST_H_
