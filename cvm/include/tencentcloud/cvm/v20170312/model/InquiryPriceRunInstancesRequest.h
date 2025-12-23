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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INQUIRYPRICERUNINSTANCESREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INQUIRYPRICERUNINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Placement.h>
#include <tencentcloud/cvm/v20170312/model/InstanceChargePrepaid.h>
#include <tencentcloud/cvm/v20170312/model/SystemDisk.h>
#include <tencentcloud/cvm/v20170312/model/DataDisk.h>
#include <tencentcloud/cvm/v20170312/model/VirtualPrivateCloud.h>
#include <tencentcloud/cvm/v20170312/model/InternetAccessible.h>
#include <tencentcloud/cvm/v20170312/model/LoginSettings.h>
#include <tencentcloud/cvm/v20170312/model/EnhancedService.h>
#include <tencentcloud/cvm/v20170312/model/TagSpecification.h>
#include <tencentcloud/cvm/v20170312/model/InstanceMarketOptionsRequest.h>
#include <tencentcloud/cvm/v20170312/model/Metadata.h>
#include <tencentcloud/cvm/v20170312/model/CpuTopology.h>
#include <tencentcloud/cvm/v20170312/model/LaunchTemplate.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InquiryPriceRunInstances request structure.
                */
                class InquiryPriceRunInstancesRequest : public AbstractModel
                {
                public:
                    InquiryPriceRunInstancesRequest();
                    ~InquiryPriceRunInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone and project.
 <b>Note: `Placement` is required when `LaunchTemplate` is not specified. If both the parameters are passed in, `Placement` prevails.</b>
                     * @return Placement Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone and project.
 <b>Note: `Placement` is required when `LaunchTemplate` is not specified. If both the parameters are passed in, `Placement` prevails.</b>
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone and project.
 <b>Note: `Placement` is required when `LaunchTemplate` is not specified. If both the parameters are passed in, `Placement` prevails.</b>
                     * @param _placement Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone and project.
 <b>Note: `Placement` is required when `LaunchTemplate` is not specified. If both the parameters are passed in, `Placement` prevails.</b>
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
                     * 获取[Image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are three types of images: <br/><li>Public images</li><li>Custom images</li><li>Shared images</li><br/>You can obtain the available image IDs in the following ways: <br/><li>For IDs of `public images`, `custom images`, and `shared images`, log in to the [CVM console](https://console.tencentcloud.com/cvm/image/index?rid=1&tab=PUBLIC_IMAGE&imageType=PUBLIC_IMAGE) to query the information. </li><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response.</li>
 <b>Note: `ImageId` is required when `LaunchTemplate` is not specified. If both the parameters are passed in, `ImageId` prevails.</b>
                     * @return ImageId [Image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are three types of images: <br/><li>Public images</li><li>Custom images</li><li>Shared images</li><br/>You can obtain the available image IDs in the following ways: <br/><li>For IDs of `public images`, `custom images`, and `shared images`, log in to the [CVM console](https://console.tencentcloud.com/cvm/image/index?rid=1&tab=PUBLIC_IMAGE&imageType=PUBLIC_IMAGE) to query the information. </li><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response.</li>
 <b>Note: `ImageId` is required when `LaunchTemplate` is not specified. If both the parameters are passed in, `ImageId` prevails.</b>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置[Image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are three types of images: <br/><li>Public images</li><li>Custom images</li><li>Shared images</li><br/>You can obtain the available image IDs in the following ways: <br/><li>For IDs of `public images`, `custom images`, and `shared images`, log in to the [CVM console](https://console.tencentcloud.com/cvm/image/index?rid=1&tab=PUBLIC_IMAGE&imageType=PUBLIC_IMAGE) to query the information. </li><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response.</li>
 <b>Note: `ImageId` is required when `LaunchTemplate` is not specified. If both the parameters are passed in, `ImageId` prevails.</b>
                     * @param _imageId [Image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are three types of images: <br/><li>Public images</li><li>Custom images</li><li>Shared images</li><br/>You can obtain the available image IDs in the following ways: <br/><li>For IDs of `public images`, `custom images`, and `shared images`, log in to the [CVM console](https://console.tencentcloud.com/cvm/image/index?rid=1&tab=PUBLIC_IMAGE&imageType=PUBLIC_IMAGE) to query the information. </li><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response.</li>
 <b>Note: `ImageId` is required when `LaunchTemplate` is not specified. If both the parameters are passed in, `ImageId` prevails.</b>
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
                     * 获取The instance [billing method](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1).<br><li>POSTPAID_BY_HOUR: Pay-as-you-go on an hourly basis<br>Default value: POSTPAID_BY_HOUR.
                     * @return InstanceChargeType The instance [billing method](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1).<br><li>POSTPAID_BY_HOUR: Pay-as-you-go on an hourly basis<br>Default value: POSTPAID_BY_HOUR.
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置The instance [billing method](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1).<br><li>POSTPAID_BY_HOUR: Pay-as-you-go on an hourly basis<br>Default value: POSTPAID_BY_HOUR.
                     * @param _instanceChargeType The instance [billing method](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1).<br><li>POSTPAID_BY_HOUR: Pay-as-you-go on an hourly basis<br>Default value: POSTPAID_BY_HOUR.
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
                     * 获取Instance model. Different instance models specify different resource specifications.
<br><li>For instances created with the payment modes PREPAID or POSTPAID_BY_HOUR, specifies the specific values obtained BY calling the [DescribeInstanceTypeConfig](https://www.tencentcloud.com/document/product/1119/45686?lang=en) api for the latest specification table or referring to [instance specifications](https://www.tencentcloud.com/document/product/213/11518). if not specified, the system will dynamically assign a default model based on the current resource sales situation in a region.</li><br><li>for instances created with the payment mode CDHPAID, indicates this parameter uses the prefix "CDH_" and is generated based on CPU and memory configuration. the specific format is: CDH_XCXG. for example, for creating a CDH instance with 1 CPU core and 1 gb memory, this parameter should be CDH_1C1G.</li>.
                     * @return InstanceType Instance model. Different instance models specify different resource specifications.
<br><li>For instances created with the payment modes PREPAID or POSTPAID_BY_HOUR, specifies the specific values obtained BY calling the [DescribeInstanceTypeConfig](https://www.tencentcloud.com/document/product/1119/45686?lang=en) api for the latest specification table or referring to [instance specifications](https://www.tencentcloud.com/document/product/213/11518). if not specified, the system will dynamically assign a default model based on the current resource sales situation in a region.</li><br><li>for instances created with the payment mode CDHPAID, indicates this parameter uses the prefix "CDH_" and is generated based on CPU and memory configuration. the specific format is: CDH_XCXG. for example, for creating a CDH instance with 1 CPU core and 1 gb memory, this parameter should be CDH_1C1G.</li>.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance model. Different instance models specify different resource specifications.
<br><li>For instances created with the payment modes PREPAID or POSTPAID_BY_HOUR, specifies the specific values obtained BY calling the [DescribeInstanceTypeConfig](https://www.tencentcloud.com/document/product/1119/45686?lang=en) api for the latest specification table or referring to [instance specifications](https://www.tencentcloud.com/document/product/213/11518). if not specified, the system will dynamically assign a default model based on the current resource sales situation in a region.</li><br><li>for instances created with the payment mode CDHPAID, indicates this parameter uses the prefix "CDH_" and is generated based on CPU and memory configuration. the specific format is: CDH_XCXG. for example, for creating a CDH instance with 1 CPU core and 1 gb memory, this parameter should be CDH_1C1G.</li>.
                     * @param _instanceType Instance model. Different instance models specify different resource specifications.
<br><li>For instances created with the payment modes PREPAID or POSTPAID_BY_HOUR, specifies the specific values obtained BY calling the [DescribeInstanceTypeConfig](https://www.tencentcloud.com/document/product/1119/45686?lang=en) api for the latest specification table or referring to [instance specifications](https://www.tencentcloud.com/document/product/213/11518). if not specified, the system will dynamically assign a default model based on the current resource sales situation in a region.</li><br><li>for instances created with the payment mode CDHPAID, indicates this parameter uses the prefix "CDH_" and is generated based on CPU and memory configuration. the specific format is: CDH_XCXG. for example, for creating a CDH instance with 1 CPU core and 1 gb memory, this parameter should be CDH_1C1G.</li>.
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
                     * 获取Data disk configuration of the instance. If the parameter is not specified, no data disk will be purchased by default. If you want to purchase data disks, you can specify 21 data disks, including up to 1 `LOCAL_BASIC` data disk or `LOCAL_SSD` data disk and up to 20 `CLOUD_BASIC` data disks, `CLOUD_PREMIUM` data disks, or `CLOUD_SSD` data disks.
                     * @return DataDisks Data disk configuration of the instance. If the parameter is not specified, no data disk will be purchased by default. If you want to purchase data disks, you can specify 21 data disks, including up to 1 `LOCAL_BASIC` data disk or `LOCAL_SSD` data disk and up to 20 `CLOUD_BASIC` data disks, `CLOUD_PREMIUM` data disks, or `CLOUD_SSD` data disks.
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置Data disk configuration of the instance. If the parameter is not specified, no data disk will be purchased by default. If you want to purchase data disks, you can specify 21 data disks, including up to 1 `LOCAL_BASIC` data disk or `LOCAL_SSD` data disk and up to 20 `CLOUD_BASIC` data disks, `CLOUD_PREMIUM` data disks, or `CLOUD_SSD` data disks.
                     * @param _dataDisks Data disk configuration of the instance. If the parameter is not specified, no data disk will be purchased by default. If you want to purchase data disks, you can specify 21 data disks, including up to 1 `LOCAL_BASIC` data disk or `LOCAL_SSD` data disk and up to 20 `CLOUD_BASIC` data disks, `CLOUD_PREMIUM` data disks, or `CLOUD_SSD` data disks.
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
                     * 获取VPC configurations (VPC ID, subnet ID, etc). If It's not specified, the classic network will be used by default. If a VPC IP is specified in this parameter, the `InstanceCount` can only be 1.
                     * @return VirtualPrivateCloud VPC configurations (VPC ID, subnet ID, etc). If It's not specified, the classic network will be used by default. If a VPC IP is specified in this parameter, the `InstanceCount` can only be 1.
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置VPC configurations (VPC ID, subnet ID, etc). If It's not specified, the classic network will be used by default. If a VPC IP is specified in this parameter, the `InstanceCount` can only be 1.
                     * @param _virtualPrivateCloud VPC configurations (VPC ID, subnet ID, etc). If It's not specified, the classic network will be used by default. If a VPC IP is specified in this parameter, the `InstanceCount` can only be 1.
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
                     * 获取Configuration of public network bandwidth. If it's not specified, 0 Mbps is used by default.
                     * @return InternetAccessible Configuration of public network bandwidth. If it's not specified, 0 Mbps is used by default.
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置Configuration of public network bandwidth. If it's not specified, 0 Mbps is used by default.
                     * @param _internetAccessible Configuration of public network bandwidth. If it's not specified, 0 Mbps is used by default.
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
                     * 获取Number of instances to purchase. Value range: 1 (default) to 100. It cannot exceed the remaining CVM quota of the user. For more information on quota, see [Restrictions on CVM Instance Purchase](https://intl.cloud.tencent.com/document/product/213/2664).
                     * @return InstanceCount Number of instances to purchase. Value range: 1 (default) to 100. It cannot exceed the remaining CVM quota of the user. For more information on quota, see [Restrictions on CVM Instance Purchase](https://intl.cloud.tencent.com/document/product/213/2664).
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置Number of instances to purchase. Value range: 1 (default) to 100. It cannot exceed the remaining CVM quota of the user. For more information on quota, see [Restrictions on CVM Instance Purchase](https://intl.cloud.tencent.com/document/product/213/2664).
                     * @param _instanceCount Number of instances to purchase. Value range: 1 (default) to 100. It cannot exceed the remaining CVM quota of the user. For more information on quota, see [Restrictions on CVM Instance Purchase](https://intl.cloud.tencent.com/document/product/213/2664).
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
                     * 获取Instance display name. <li>if no instance display name is specified, it will display 'unnamed' by default.</li> <li>when purchasing multiple instances, if the pattern string `{R:x}` is specified, it means generating numbers `[x, x+n-1]`, where `n` represents the number of purchased instances. for example, `server_{R:3}`: when purchasing 1 instance, the instance display name is `server_3`; when purchasing 2 instances, the instance display names are `server_3` and `server_4` respectively. supports specifying multiple pattern strings `{R:x}`.</li> <li>when purchasing multiple instances without specifying a pattern string, suffixes `1, 2...n` will be added to the instance display name, where `n` represents the number of purchased instances. for example, `server_`: when purchasing 2 instances, the instance display names are `server_1` and `server_2` respectively.</li> <li>supports up to 128 characters (including pattern strings).</li>.
                     * @return InstanceName Instance display name. <li>if no instance display name is specified, it will display 'unnamed' by default.</li> <li>when purchasing multiple instances, if the pattern string `{R:x}` is specified, it means generating numbers `[x, x+n-1]`, where `n` represents the number of purchased instances. for example, `server_{R:3}`: when purchasing 1 instance, the instance display name is `server_3`; when purchasing 2 instances, the instance display names are `server_3` and `server_4` respectively. supports specifying multiple pattern strings `{R:x}`.</li> <li>when purchasing multiple instances without specifying a pattern string, suffixes `1, 2...n` will be added to the instance display name, where `n` represents the number of purchased instances. for example, `server_`: when purchasing 2 instances, the instance display names are `server_1` and `server_2` respectively.</li> <li>supports up to 128 characters (including pattern strings).</li>.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance display name. <li>if no instance display name is specified, it will display 'unnamed' by default.</li> <li>when purchasing multiple instances, if the pattern string `{R:x}` is specified, it means generating numbers `[x, x+n-1]`, where `n` represents the number of purchased instances. for example, `server_{R:3}`: when purchasing 1 instance, the instance display name is `server_3`; when purchasing 2 instances, the instance display names are `server_3` and `server_4` respectively. supports specifying multiple pattern strings `{R:x}`.</li> <li>when purchasing multiple instances without specifying a pattern string, suffixes `1, 2...n` will be added to the instance display name, where `n` represents the number of purchased instances. for example, `server_`: when purchasing 2 instances, the instance display names are `server_1` and `server_2` respectively.</li> <li>supports up to 128 characters (including pattern strings).</li>.
                     * @param _instanceName Instance display name. <li>if no instance display name is specified, it will display 'unnamed' by default.</li> <li>when purchasing multiple instances, if the pattern string `{R:x}` is specified, it means generating numbers `[x, x+n-1]`, where `n` represents the number of purchased instances. for example, `server_{R:3}`: when purchasing 1 instance, the instance display name is `server_3`; when purchasing 2 instances, the instance display names are `server_3` and `server_4` respectively. supports specifying multiple pattern strings `{R:x}`.</li> <li>when purchasing multiple instances without specifying a pattern string, suffixes `1, 2...n` will be added to the instance display name, where `n` represents the number of purchased instances. for example, `server_`: when purchasing 2 instances, the instance display names are `server_1` and `server_2` respectively.</li> <li>supports up to 128 characters (including pattern strings).</li>.
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
                     * 获取Login settings of the instance. You can use this parameter to set the login method, password, and key of the instance, or keep the original login settings of the image. By default, a random password will be generated and sent to you via the Message Center.
                     * @return LoginSettings Login settings of the instance. You can use this parameter to set the login method, password, and key of the instance, or keep the original login settings of the image. By default, a random password will be generated and sent to you via the Message Center.
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置Login settings of the instance. You can use this parameter to set the login method, password, and key of the instance, or keep the original login settings of the image. By default, a random password will be generated and sent to you via the Message Center.
                     * @param _loginSettings Login settings of the instance. You can use this parameter to set the login method, password, and key of the instance, or keep the original login settings of the image. By default, a random password will be generated and sent to you via the Message Center.
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
                     * 获取Security group to which an instance belongs. obtain this parameter by calling the `SecurityGroupId` field in the return value of [DescribeSecurityGroups](https://www.tencentcloud.com/document/product/215/15808). if not specified, bind the default security group under the designated project. if the default security group does not exist, automatically create it.
                     * @return SecurityGroupIds Security group to which an instance belongs. obtain this parameter by calling the `SecurityGroupId` field in the return value of [DescribeSecurityGroups](https://www.tencentcloud.com/document/product/215/15808). if not specified, bind the default security group under the designated project. if the default security group does not exist, automatically create it.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group to which an instance belongs. obtain this parameter by calling the `SecurityGroupId` field in the return value of [DescribeSecurityGroups](https://www.tencentcloud.com/document/product/215/15808). if not specified, bind the default security group under the designated project. if the default security group does not exist, automatically create it.
                     * @param _securityGroupIds Security group to which an instance belongs. obtain this parameter by calling the `SecurityGroupId` field in the return value of [DescribeSecurityGroups](https://www.tencentcloud.com/document/product/215/15808). if not specified, bind the default security group under the designated project. if the default security group does not exist, automatically create it.
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
                     * 获取A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.<br>For more information, see Ensuring Idempotency.
                     * @return ClientToken A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.<br>For more information, see Ensuring Idempotency.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.<br>For more information, see Ensuring Idempotency.
                     * @param _clientToken A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.<br>For more information, see Ensuring Idempotency.
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
                     * 获取Hostname of Cloud Virtual Machine.<br><li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><br><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><br><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 30 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li>
                     * @return HostName Hostname of Cloud Virtual Machine.<br><li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><br><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><br><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 30 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Hostname of Cloud Virtual Machine.<br><li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><br><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><br><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 30 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li>
                     * @param _hostName Hostname of Cloud Virtual Machine.<br><li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><br><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><br><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 30 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li>
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
                     * 获取The market options of the instance.
                     * @return InstanceMarketOptions The market options of the instance.
                     * 
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置The market options of the instance.
                     * @param _instanceMarketOptions The market options of the instance.
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
                     * 获取Custom metadata, supports creating key-value pairs of custom metadata when creating a CVM.

**Note: this field is in beta test.**.
                     * @return Metadata Custom metadata, supports creating key-value pairs of custom metadata when creating a CVM.

**Note: this field is in beta test.**.
                     * 
                     */
                    Metadata GetMetadata() const;

                    /**
                     * 设置Custom metadata, supports creating key-value pairs of custom metadata when creating a CVM.

**Note: this field is in beta test.**.
                     * @param _metadata Custom metadata, supports creating key-value pairs of custom metadata when creating a CVM.

**Note: this field is in beta test.**.
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
                     * 获取HPC cluster ID.
                     * @return HpcClusterId HPC cluster ID.
                     * 
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置HPC cluster ID.
                     * @param _hpcClusterId HPC cluster ID.
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
                     * 获取Information about the CPU topology of an instance. If not specified, it is determined by system resources.
                     * @return CpuTopology Information about the CPU topology of an instance. If not specified, it is determined by system resources.
                     * 
                     */
                    CpuTopology GetCpuTopology() const;

                    /**
                     * 设置Information about the CPU topology of an instance. If not specified, it is determined by system resources.
                     * @param _cpuTopology Information about the CPU topology of an instance. If not specified, it is determined by system resources.
                     * 
                     */
                    void SetCpuTopology(const CpuTopology& _cpuTopology);

                    /**
                     * 判断参数 CpuTopology 是否已赋值
                     * @return CpuTopology 是否已赋值
                     * 
                     */
                    bool CpuTopologyHasBeenSet() const;

                    /**
                     * 获取
                     * @return LaunchTemplate 
                     * 
                     */
                    LaunchTemplate GetLaunchTemplate() const;

                    /**
                     * 设置
                     * @param _launchTemplate 
                     * 
                     */
                    void SetLaunchTemplate(const LaunchTemplate& _launchTemplate);

                    /**
                     * 判断参数 LaunchTemplate 是否已赋值
                     * @return LaunchTemplate 是否已赋值
                     * 
                     */
                    bool LaunchTemplateHasBeenSet() const;

                private:

                    /**
                     * Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone and project.
 <b>Note: `Placement` is required when `LaunchTemplate` is not specified. If both the parameters are passed in, `Placement` prevails.</b>
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * [Image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are three types of images: <br/><li>Public images</li><li>Custom images</li><li>Shared images</li><br/>You can obtain the available image IDs in the following ways: <br/><li>For IDs of `public images`, `custom images`, and `shared images`, log in to the [CVM console](https://console.tencentcloud.com/cvm/image/index?rid=1&tab=PUBLIC_IMAGE&imageType=PUBLIC_IMAGE) to query the information. </li><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response.</li>
 <b>Note: `ImageId` is required when `LaunchTemplate` is not specified. If both the parameters are passed in, `ImageId` prevails.</b>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * The instance [billing method](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1).<br><li>POSTPAID_BY_HOUR: Pay-as-you-go on an hourly basis<br>Default value: POSTPAID_BY_HOUR.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Details of the monthly subscription, including the purchase period, auto-renewal. It is required if the `InstanceChargeType` is `PREPAID`. 
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * Instance model. Different instance models specify different resource specifications.
<br><li>For instances created with the payment modes PREPAID or POSTPAID_BY_HOUR, specifies the specific values obtained BY calling the [DescribeInstanceTypeConfig](https://www.tencentcloud.com/document/product/1119/45686?lang=en) api for the latest specification table or referring to [instance specifications](https://www.tencentcloud.com/document/product/213/11518). if not specified, the system will dynamically assign a default model based on the current resource sales situation in a region.</li><br><li>for instances created with the payment mode CDHPAID, indicates this parameter uses the prefix "CDH_" and is generated based on CPU and memory configuration. the specific format is: CDH_XCXG. for example, for creating a CDH instance with 1 CPU core and 1 gb memory, this parameter should be CDH_1C1G.</li>.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * System disk configuration of the instance. If this parameter is not specified, the default value will be used.
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Data disk configuration of the instance. If the parameter is not specified, no data disk will be purchased by default. If you want to purchase data disks, you can specify 21 data disks, including up to 1 `LOCAL_BASIC` data disk or `LOCAL_SSD` data disk and up to 20 `CLOUD_BASIC` data disks, `CLOUD_PREMIUM` data disks, or `CLOUD_SSD` data disks.
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * VPC configurations (VPC ID, subnet ID, etc). If It's not specified, the classic network will be used by default. If a VPC IP is specified in this parameter, the `InstanceCount` can only be 1.
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * Configuration of public network bandwidth. If it's not specified, 0 Mbps is used by default.
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * Number of instances to purchase. Value range: 1 (default) to 100. It cannot exceed the remaining CVM quota of the user. For more information on quota, see [Restrictions on CVM Instance Purchase](https://intl.cloud.tencent.com/document/product/213/2664).
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Instance display name. <li>if no instance display name is specified, it will display 'unnamed' by default.</li> <li>when purchasing multiple instances, if the pattern string `{R:x}` is specified, it means generating numbers `[x, x+n-1]`, where `n` represents the number of purchased instances. for example, `server_{R:3}`: when purchasing 1 instance, the instance display name is `server_3`; when purchasing 2 instances, the instance display names are `server_3` and `server_4` respectively. supports specifying multiple pattern strings `{R:x}`.</li> <li>when purchasing multiple instances without specifying a pattern string, suffixes `1, 2...n` will be added to the instance display name, where `n` represents the number of purchased instances. for example, `server_`: when purchasing 2 instances, the instance display names are `server_1` and `server_2` respectively.</li> <li>supports up to 128 characters (including pattern strings).</li>.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Login settings of the instance. You can use this parameter to set the login method, password, and key of the instance, or keep the original login settings of the image. By default, a random password will be generated and sent to you via the Message Center.
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * Security group to which an instance belongs. obtain this parameter by calling the `SecurityGroupId` field in the return value of [DescribeSecurityGroups](https://www.tencentcloud.com/document/product/215/15808). if not specified, bind the default security group under the designated project. if the default security group does not exist, automatically create it.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Enhanced services. You can use this parameter to specify whether to enable services such as Cloud Security and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Cloud Security will be enabled by default.
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.<br>For more information, see Ensuring Idempotency.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Hostname of Cloud Virtual Machine.<br><li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><br><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><br><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 30 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * The tag description list. This parameter is used to bind a tag to a resource instance. A tag can only be bound to CVM instances.
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * The market options of the instance.
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * Custom metadata, supports creating key-value pairs of custom metadata when creating a CVM.

**Note: this field is in beta test.**.
                     */
                    Metadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * HPC cluster ID.
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * Information about the CPU topology of an instance. If not specified, it is determined by system resources.
                     */
                    CpuTopology m_cpuTopology;
                    bool m_cpuTopologyHasBeenSet;

                    /**
                     * 
                     */
                    LaunchTemplate m_launchTemplate;
                    bool m_launchTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INQUIRYPRICERUNINSTANCESREQUEST_H_
