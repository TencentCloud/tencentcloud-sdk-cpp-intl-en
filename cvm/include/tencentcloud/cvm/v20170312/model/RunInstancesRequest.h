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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RUNINSTANCESREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RUNINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/InstanceChargePrepaid.h>
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
                * RunInstances request structure.
                */
                class RunInstancesRequest : public AbstractModel
                {
                public:
                    RunInstancesRequest();
                    ~RunInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance [billing type](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1). <br><li>`PREPAID`: Monthly Subscription, used for at least one month <br><li>`POSTPAID_BY_HOUR`: Hourly-based pay-as-you-go <br><li>`CDHPAID`: [Dedicated CVM](https://www.tencentcloud.com/document/product/416/5068?lang=en&pg=) (associated with a dedicated host. Resource usage of the dedicated host is free of charge.) <br><li>`SPOTPAID`: [Spot instance](https://intl.cloud.tencent.com/document/product/213/17817)<br>Default value: `POSTPAID_BY_HOUR`.
                     * @return InstanceChargeType Instance [billing type](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1). <br><li>`PREPAID`: Monthly Subscription, used for at least one month <br><li>`POSTPAID_BY_HOUR`: Hourly-based pay-as-you-go <br><li>`CDHPAID`: [Dedicated CVM](https://www.tencentcloud.com/document/product/416/5068?lang=en&pg=) (associated with a dedicated host. Resource usage of the dedicated host is free of charge.) <br><li>`SPOTPAID`: [Spot instance](https://intl.cloud.tencent.com/document/product/213/17817)<br>Default value: `POSTPAID_BY_HOUR`.
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance [billing type](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1). <br><li>`PREPAID`: Monthly Subscription, used for at least one month <br><li>`POSTPAID_BY_HOUR`: Hourly-based pay-as-you-go <br><li>`CDHPAID`: [Dedicated CVM](https://www.tencentcloud.com/document/product/416/5068?lang=en&pg=) (associated with a dedicated host. Resource usage of the dedicated host is free of charge.) <br><li>`SPOTPAID`: [Spot instance](https://intl.cloud.tencent.com/document/product/213/17817)<br>Default value: `POSTPAID_BY_HOUR`.
                     * @param _instanceChargeType Instance [billing type](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1). <br><li>`PREPAID`: Monthly Subscription, used for at least one month <br><li>`POSTPAID_BY_HOUR`: Hourly-based pay-as-you-go <br><li>`CDHPAID`: [Dedicated CVM](https://www.tencentcloud.com/document/product/416/5068?lang=en&pg=) (associated with a dedicated host. Resource usage of the dedicated host is free of charge.) <br><li>`SPOTPAID`: [Spot instance](https://intl.cloud.tencent.com/document/product/213/17817)<br>Default value: `POSTPAID_BY_HOUR`.
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
                     * 获取Location of the instance. You can use this parameter to specify the availability zone, project, and CDH (for dedicated CVMs).
 <b>Note: `Placement` is required when `LaunchTemplate` is not specified. If both the parameters are passed in, `Placement` prevails.</b>
                     * @return Placement Location of the instance. You can use this parameter to specify the availability zone, project, and CDH (for dedicated CVMs).
 <b>Note: `Placement` is required when `LaunchTemplate` is not specified. If both the parameters are passed in, `Placement` prevails.</b>
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Location of the instance. You can use this parameter to specify the availability zone, project, and CDH (for dedicated CVMs).
 <b>Note: `Placement` is required when `LaunchTemplate` is not specified. If both the parameters are passed in, `Placement` prevails.</b>
                     * @param _placement Location of the instance. You can use this parameter to specify the availability zone, project, and CDH (for dedicated CVMs).
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
                     * 获取The instance model. 
<br><li>To view specific values for `POSTPAID_BY_HOUR` instances, you can call [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) or refer to [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1). <br><li>For `CDHPAID` instances, the value of this parameter is in the format of `CDH_XCXG` based on the number of CPU cores and memory capacity. For example, if you want to create a CDH instance with a single-core CPU and 1 GB memory, specify this parameter as `CDH_1C1G`.
                     * @return InstanceType The instance model. 
<br><li>To view specific values for `POSTPAID_BY_HOUR` instances, you can call [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) or refer to [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1). <br><li>For `CDHPAID` instances, the value of this parameter is in the format of `CDH_XCXG` based on the number of CPU cores and memory capacity. For example, if you want to create a CDH instance with a single-core CPU and 1 GB memory, specify this parameter as `CDH_1C1G`.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置The instance model. 
<br><li>To view specific values for `POSTPAID_BY_HOUR` instances, you can call [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) or refer to [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1). <br><li>For `CDHPAID` instances, the value of this parameter is in the format of `CDH_XCXG` based on the number of CPU cores and memory capacity. For example, if you want to create a CDH instance with a single-core CPU and 1 GB memory, specify this parameter as `CDH_1C1G`.
                     * @param _instanceType The instance model. 
<br><li>To view specific values for `POSTPAID_BY_HOUR` instances, you can call [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) or refer to [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1). <br><li>For `CDHPAID` instances, the value of this parameter is in the format of `CDH_XCXG` based on the number of CPU cores and memory capacity. For example, if you want to create a CDH instance with a single-core CPU and 1 GB memory, specify this parameter as `CDH_1C1G`.
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
                     * 获取The [image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are three types of images:<br/><li>Public images</li><li>Custom images</li><li>Shared images</li><br/>To check the image ID:<br/><li>For public images, custom images, and shared images, go to the [CVM console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE). </li><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), pass in `InstanceType` to retrieve the list of images supported by the current model, and then find the `ImageId` in the response.</li>
 <b>Note: `ImageId` is required when `LaunchTemplate` is not specified. If both the parameters are passed in, `ImageId` prevails.</b>
                     * @return ImageId The [image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are three types of images:<br/><li>Public images</li><li>Custom images</li><li>Shared images</li><br/>To check the image ID:<br/><li>For public images, custom images, and shared images, go to the [CVM console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE). </li><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), pass in `InstanceType` to retrieve the list of images supported by the current model, and then find the `ImageId` in the response.</li>
 <b>Note: `ImageId` is required when `LaunchTemplate` is not specified. If both the parameters are passed in, `ImageId` prevails.</b>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置The [image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are three types of images:<br/><li>Public images</li><li>Custom images</li><li>Shared images</li><br/>To check the image ID:<br/><li>For public images, custom images, and shared images, go to the [CVM console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE). </li><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), pass in `InstanceType` to retrieve the list of images supported by the current model, and then find the `ImageId` in the response.</li>
 <b>Note: `ImageId` is required when `LaunchTemplate` is not specified. If both the parameters are passed in, `ImageId` prevails.</b>
                     * @param _imageId The [image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are three types of images:<br/><li>Public images</li><li>Custom images</li><li>Shared images</li><br/>To check the image ID:<br/><li>For public images, custom images, and shared images, go to the [CVM console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE). </li><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), pass in `InstanceType` to retrieve the list of images supported by the current model, and then find the `ImageId` in the response.</li>
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
                     * 获取Configuration information of VPC. This parameter is used to specify VPC ID and subnet ID, etc. If a VPC IP is specified in this parameter, it indicates the primary ENI IP of each instance. The value of parameter InstanceCount must be the same as the number of VPC IPs, which cannot be greater than 20.
                     * @return VirtualPrivateCloud Configuration information of VPC. This parameter is used to specify VPC ID and subnet ID, etc. If a VPC IP is specified in this parameter, it indicates the primary ENI IP of each instance. The value of parameter InstanceCount must be the same as the number of VPC IPs, which cannot be greater than 20.
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置Configuration information of VPC. This parameter is used to specify VPC ID and subnet ID, etc. If a VPC IP is specified in this parameter, it indicates the primary ENI IP of each instance. The value of parameter InstanceCount must be the same as the number of VPC IPs, which cannot be greater than 20.
                     * @param _virtualPrivateCloud Configuration information of VPC. This parameter is used to specify VPC ID and subnet ID, etc. If a VPC IP is specified in this parameter, it indicates the primary ENI IP of each instance. The value of parameter InstanceCount must be the same as the number of VPC IPs, which cannot be greater than 20.
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
                     * 获取The number of instances to be purchased. Value range for pay-as-you-go instances: [1, 100]. Default value: `1`. The specified number of instances to be purchased cannot exceed the remaining quota allowed for the user. For more information on the quota, see [Quota for CVM Instances](https://intl.cloud.tencent.com/document/product/213/2664).
                     * @return InstanceCount The number of instances to be purchased. Value range for pay-as-you-go instances: [1, 100]. Default value: `1`. The specified number of instances to be purchased cannot exceed the remaining quota allowed for the user. For more information on the quota, see [Quota for CVM Instances](https://intl.cloud.tencent.com/document/product/213/2664).
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置The number of instances to be purchased. Value range for pay-as-you-go instances: [1, 100]. Default value: `1`. The specified number of instances to be purchased cannot exceed the remaining quota allowed for the user. For more information on the quota, see [Quota for CVM Instances](https://intl.cloud.tencent.com/document/product/213/2664).
                     * @param _instanceCount The number of instances to be purchased. Value range for pay-as-you-go instances: [1, 100]. Default value: `1`. The specified number of instances to be purchased cannot exceed the remaining quota allowed for the user. For more information on the quota, see [Quota for CVM Instances](https://intl.cloud.tencent.com/document/product/213/2664).
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
                     * 获取Instance name.<br><li>If this parameter is not specified, "Unnamed" will be displayed by default.</li><li>If you purchase multiple instances and specify a pattern string `{R:x}`, numbers `[x, x+n-1]` will be generated, where `n` represents the number of instances purchased. For example, you specify a pattern string `server_{R:3}`. If you purchase only one instance, the instance will be named `server_3`; if you purchase two, they will be named `server_3` and `server_4`. You can specify multiple pattern strings in the format of `{R:x}`.</li><li>If you purchase multiple instances without specifying a pattern string, the instance names will be suffixed with `1, 2...n`, where `n` represents the number of instances purchased. For example, if you purchase two instances with the name `server_`, the instance names will be `server_1` and `server_2`.</li><li>This parameter can contain up to 60 characters (including pattern strings).</li>
                     * @return InstanceName Instance name.<br><li>If this parameter is not specified, "Unnamed" will be displayed by default.</li><li>If you purchase multiple instances and specify a pattern string `{R:x}`, numbers `[x, x+n-1]` will be generated, where `n` represents the number of instances purchased. For example, you specify a pattern string `server_{R:3}`. If you purchase only one instance, the instance will be named `server_3`; if you purchase two, they will be named `server_3` and `server_4`. You can specify multiple pattern strings in the format of `{R:x}`.</li><li>If you purchase multiple instances without specifying a pattern string, the instance names will be suffixed with `1, 2...n`, where `n` represents the number of instances purchased. For example, if you purchase two instances with the name `server_`, the instance names will be `server_1` and `server_2`.</li><li>This parameter can contain up to 60 characters (including pattern strings).</li>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.<br><li>If this parameter is not specified, "Unnamed" will be displayed by default.</li><li>If you purchase multiple instances and specify a pattern string `{R:x}`, numbers `[x, x+n-1]` will be generated, where `n` represents the number of instances purchased. For example, you specify a pattern string `server_{R:3}`. If you purchase only one instance, the instance will be named `server_3`; if you purchase two, they will be named `server_3` and `server_4`. You can specify multiple pattern strings in the format of `{R:x}`.</li><li>If you purchase multiple instances without specifying a pattern string, the instance names will be suffixed with `1, 2...n`, where `n` represents the number of instances purchased. For example, if you purchase two instances with the name `server_`, the instance names will be `server_1` and `server_2`.</li><li>This parameter can contain up to 60 characters (including pattern strings).</li>
                     * @param _instanceName Instance name.<br><li>If this parameter is not specified, "Unnamed" will be displayed by default.</li><li>If you purchase multiple instances and specify a pattern string `{R:x}`, numbers `[x, x+n-1]` will be generated, where `n` represents the number of instances purchased. For example, you specify a pattern string `server_{R:3}`. If you purchase only one instance, the instance will be named `server_3`; if you purchase two, they will be named `server_3` and `server_4`. You can specify multiple pattern strings in the format of `{R:x}`.</li><li>If you purchase multiple instances without specifying a pattern string, the instance names will be suffixed with `1, 2...n`, where `n` represents the number of instances purchased. For example, if you purchase two instances with the name `server_`, the instance names will be `server_1` and `server_2`.</li><li>This parameter can contain up to 60 characters (including pattern strings).</li>
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
                     * 获取Instance login settings. You can use this parameter to set the login method, password and key of the instance, or keep the original login settings of the image. If it's not specified, the user needs to set the login password using the "Reset password" option in the CVM console or calling the API `ResetInstancesPassword` to complete the creation of the CVM instance(s).
                     * @return LoginSettings Instance login settings. You can use this parameter to set the login method, password and key of the instance, or keep the original login settings of the image. If it's not specified, the user needs to set the login password using the "Reset password" option in the CVM console or calling the API `ResetInstancesPassword` to complete the creation of the CVM instance(s).
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置Instance login settings. You can use this parameter to set the login method, password and key of the instance, or keep the original login settings of the image. If it's not specified, the user needs to set the login password using the "Reset password" option in the CVM console or calling the API `ResetInstancesPassword` to complete the creation of the CVM instance(s).
                     * @param _loginSettings Instance login settings. You can use this parameter to set the login method, password and key of the instance, or keep the original login settings of the image. If it's not specified, the user needs to set the login password using the "Reset password" option in the CVM console or calling the API `ResetInstancesPassword` to complete the creation of the CVM instance(s).
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
                     * 获取Enhanced service. You can use this parameter to specify whether to enable services such as Anti-DDoS and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Anti-DDoS are enabled for public images by default. However, for custom images and images from the marketplace, Anti-DDoS and Cloud Monitor are not enabled by default. The original services in the image will be retained.
                     * @return EnhancedService Enhanced service. You can use this parameter to specify whether to enable services such as Anti-DDoS and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Anti-DDoS are enabled for public images by default. However, for custom images and images from the marketplace, Anti-DDoS and Cloud Monitor are not enabled by default. The original services in the image will be retained.
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置Enhanced service. You can use this parameter to specify whether to enable services such as Anti-DDoS and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Anti-DDoS are enabled for public images by default. However, for custom images and images from the marketplace, Anti-DDoS and Cloud Monitor are not enabled by default. The original services in the image will be retained.
                     * @param _enhancedService Enhanced service. You can use this parameter to specify whether to enable services such as Anti-DDoS and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Anti-DDoS are enabled for public images by default. However, for custom images and images from the marketplace, Anti-DDoS and Cloud Monitor are not enabled by default. The original services in the image will be retained.
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
                     * 获取A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idem-potency of the request cannot be guaranteed.
                     * @return ClientToken A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idem-potency of the request cannot be guaranteed.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idem-potency of the request cannot be guaranteed.
                     * @param _clientToken A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idem-potency of the request cannot be guaranteed.
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
                     * 获取Hostname of an instance.<br><li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><br><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><br><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 60 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li><br><li>If you purchase multiple instances and specify a pattern string `{R:x}`, numbers `[x, x+n-1]` will be generated, where `n` represents the number of instances purchased. For example, you specify a pattern string `server{R:3}`. If you purchase only one instance, the hostname will be `server3`; if you purchase two, they will be `server3` and `server4`. You can specify multiple pattern strings in the format of `{R:x}`.</li><br><li>If you purchase multiple instances without specifying a pattern string, the hostnames will be suffixed with `1, 2...n`, where `n` represents the number of instances purchased. For example, if you purchase two instances with the name `server`, the hostnames will be `server1` and `server2`.</li>
                     * @return HostName Hostname of an instance.<br><li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><br><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><br><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 60 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li><br><li>If you purchase multiple instances and specify a pattern string `{R:x}`, numbers `[x, x+n-1]` will be generated, where `n` represents the number of instances purchased. For example, you specify a pattern string `server{R:3}`. If you purchase only one instance, the hostname will be `server3`; if you purchase two, they will be `server3` and `server4`. You can specify multiple pattern strings in the format of `{R:x}`.</li><br><li>If you purchase multiple instances without specifying a pattern string, the hostnames will be suffixed with `1, 2...n`, where `n` represents the number of instances purchased. For example, if you purchase two instances with the name `server`, the hostnames will be `server1` and `server2`.</li>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Hostname of an instance.<br><li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><br><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><br><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 60 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li><br><li>If you purchase multiple instances and specify a pattern string `{R:x}`, numbers `[x, x+n-1]` will be generated, where `n` represents the number of instances purchased. For example, you specify a pattern string `server{R:3}`. If you purchase only one instance, the hostname will be `server3`; if you purchase two, they will be `server3` and `server4`. You can specify multiple pattern strings in the format of `{R:x}`.</li><br><li>If you purchase multiple instances without specifying a pattern string, the hostnames will be suffixed with `1, 2...n`, where `n` represents the number of instances purchased. For example, if you purchase two instances with the name `server`, the hostnames will be `server1` and `server2`.</li>
                     * @param _hostName Hostname of an instance.<br><li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><br><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><br><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 60 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li><br><li>If you purchase multiple instances and specify a pattern string `{R:x}`, numbers `[x, x+n-1]` will be generated, where `n` represents the number of instances purchased. For example, you specify a pattern string `server{R:3}`. If you purchase only one instance, the hostname will be `server3`; if you purchase two, they will be `server3` and `server4`. You can specify multiple pattern strings in the format of `{R:x}`.</li><br><li>If you purchase multiple instances without specifying a pattern string, the hostnames will be suffixed with `1, 2...n`, where `n` represents the number of instances purchased. For example, if you purchase two instances with the name `server`, the hostnames will be `server1` and `server2`.</li>
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
                     * 获取List of tag description. By specifying this parameter, the tag can be bound to the corresponding CVM and CBS instances at the same time.
                     * @return TagSpecification List of tag description. By specifying this parameter, the tag can be bound to the corresponding CVM and CBS instances at the same time.
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置List of tag description. By specifying this parameter, the tag can be bound to the corresponding CVM and CBS instances at the same time.
                     * @param _tagSpecification List of tag description. By specifying this parameter, the tag can be bound to the corresponding CVM and CBS instances at the same time.
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
                     * 获取User data provided to the instance. This parameter needs to be encoded in base64 format with the maximum size of 16 KB. For more information on how to get the value of this parameter, see the commands you need to execute on startup for [Windows](https://intl.cloud.tencent.com/document/product/213/17526) or [Linux](https://intl.cloud.tencent.com/document/product/213/17525).
                     * @return UserData User data provided to the instance. This parameter needs to be encoded in base64 format with the maximum size of 16 KB. For more information on how to get the value of this parameter, see the commands you need to execute on startup for [Windows](https://intl.cloud.tencent.com/document/product/213/17526) or [Linux](https://intl.cloud.tencent.com/document/product/213/17525).
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置User data provided to the instance. This parameter needs to be encoded in base64 format with the maximum size of 16 KB. For more information on how to get the value of this parameter, see the commands you need to execute on startup for [Windows](https://intl.cloud.tencent.com/document/product/213/17526) or [Linux](https://intl.cloud.tencent.com/document/product/213/17525).
                     * @param _userData User data provided to the instance. This parameter needs to be encoded in base64 format with the maximum size of 16 KB. For more information on how to get the value of this parameter, see the commands you need to execute on startup for [Windows](https://intl.cloud.tencent.com/document/product/213/17526) or [Linux](https://intl.cloud.tencent.com/document/product/213/17525).
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
                     * 获取
                     * @return Metadata 
                     * 
                     */
                    Metadata GetMetadata() const;

                    /**
                     * 设置
                     * @param _metadata 
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
                     * 获取Whether the request is a dry run only.
`true`: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
`false` (default value): Send a normal request and create instance(s) if all the requirements are met.
                     * @return DryRun Whether the request is a dry run only.
`true`: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
`false` (default value): Send a normal request and create instance(s) if all the requirements are met.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether the request is a dry run only.
`true`: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
`false` (default value): Send a normal request and create instance(s) if all the requirements are met.
                     * @param _dryRun Whether the request is a dry run only.
`true`: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
`false` (default value): Send a normal request and create instance(s) if all the requirements are met.
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
                     * 获取Instance launch template.
                     * @return LaunchTemplate Instance launch template.
                     * 
                     */
                    LaunchTemplate GetLaunchTemplate() const;

                    /**
                     * 设置Instance launch template.
                     * @param _launchTemplate Instance launch template.
                     * 
                     */
                    void SetLaunchTemplate(const LaunchTemplate& _launchTemplate);

                    /**
                     * 判断参数 LaunchTemplate 是否已赋值
                     * @return LaunchTemplate 是否已赋值
                     * 
                     */
                    bool LaunchTemplateHasBeenSet() const;

                    /**
                     * 获取Specify the ID of the dedicated cluster where the CVM is created.
                     * @return DedicatedClusterId Specify the ID of the dedicated cluster where the CVM is created.
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置Specify the ID of the dedicated cluster where the CVM is created.
                     * @param _dedicatedClusterId Specify the ID of the dedicated cluster where the CVM is created.
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
                     * 获取Specify the CHC physical server that used to create the CHC CVM.
                     * @return ChcIds Specify the CHC physical server that used to create the CHC CVM.
                     * 
                     */
                    std::vector<std::string> GetChcIds() const;

                    /**
                     * 设置Specify the CHC physical server that used to create the CHC CVM.
                     * @param _chcIds Specify the CHC physical server that used to create the CHC CVM.
                     * 
                     */
                    void SetChcIds(const std::vector<std::string>& _chcIds);

                    /**
                     * 判断参数 ChcIds 是否已赋值
                     * @return ChcIds 是否已赋值
                     * 
                     */
                    bool ChcIdsHasBeenSet() const;

                    /**
                     * 获取Instance termination protection flag, indicating whether an instance is allowed to be deleted through an API. Valid values:<br><li>true: Instance protection is enabled, and the instance is not allowed to be deleted through the API.</li><br><li>false: Instance protection is disabled, and the instance is allowed to be deleted through the API.</li><br><br>Default value: false.
                     * @return DisableApiTermination Instance termination protection flag, indicating whether an instance is allowed to be deleted through an API. Valid values:<br><li>true: Instance protection is enabled, and the instance is not allowed to be deleted through the API.</li><br><li>false: Instance protection is disabled, and the instance is allowed to be deleted through the API.</li><br><br>Default value: false.
                     * 
                     */
                    bool GetDisableApiTermination() const;

                    /**
                     * 设置Instance termination protection flag, indicating whether an instance is allowed to be deleted through an API. Valid values:<br><li>true: Instance protection is enabled, and the instance is not allowed to be deleted through the API.</li><br><li>false: Instance protection is disabled, and the instance is allowed to be deleted through the API.</li><br><br>Default value: false.
                     * @param _disableApiTermination Instance termination protection flag, indicating whether an instance is allowed to be deleted through an API. Valid values:<br><li>true: Instance protection is enabled, and the instance is not allowed to be deleted through the API.</li><br><li>false: Instance protection is disabled, and the instance is allowed to be deleted through the API.</li><br><br>Default value: false.
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
                     * 获取
                     * @return EnableJumboFrame 
                     * 
                     */
                    bool GetEnableJumboFrame() const;

                    /**
                     * 设置
                     * @param _enableJumboFrame 
                     * 
                     */
                    void SetEnableJumboFrame(const bool& _enableJumboFrame);

                    /**
                     * 判断参数 EnableJumboFrame 是否已赋值
                     * @return EnableJumboFrame 是否已赋值
                     * 
                     */
                    bool EnableJumboFrameHasBeenSet() const;

                private:

                    /**
                     * Instance [billing type](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1). <br><li>`PREPAID`: Monthly Subscription, used for at least one month <br><li>`POSTPAID_BY_HOUR`: Hourly-based pay-as-you-go <br><li>`CDHPAID`: [Dedicated CVM](https://www.tencentcloud.com/document/product/416/5068?lang=en&pg=) (associated with a dedicated host. Resource usage of the dedicated host is free of charge.) <br><li>`SPOTPAID`: [Spot instance](https://intl.cloud.tencent.com/document/product/213/17817)<br>Default value: `POSTPAID_BY_HOUR`.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Details of the monthly subscription, including the purchase period, auto-renewal. It is required if the `InstanceChargeType` is `PREPAID`.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * Location of the instance. You can use this parameter to specify the availability zone, project, and CDH (for dedicated CVMs).
 <b>Note: `Placement` is required when `LaunchTemplate` is not specified. If both the parameters are passed in, `Placement` prevails.</b>
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * The instance model. 
<br><li>To view specific values for `POSTPAID_BY_HOUR` instances, you can call [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) or refer to [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1). <br><li>For `CDHPAID` instances, the value of this parameter is in the format of `CDH_XCXG` based on the number of CPU cores and memory capacity. For example, if you want to create a CDH instance with a single-core CPU and 1 GB memory, specify this parameter as `CDH_1C1G`.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * The [image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are three types of images:<br/><li>Public images</li><li>Custom images</li><li>Shared images</li><br/>To check the image ID:<br/><li>For public images, custom images, and shared images, go to the [CVM console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE). </li><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), pass in `InstanceType` to retrieve the list of images supported by the current model, and then find the `ImageId` in the response.</li>
 <b>Note: `ImageId` is required when `LaunchTemplate` is not specified. If both the parameters are passed in, `ImageId` prevails.</b>
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
                     * Configuration information of VPC. This parameter is used to specify VPC ID and subnet ID, etc. If a VPC IP is specified in this parameter, it indicates the primary ENI IP of each instance. The value of parameter InstanceCount must be the same as the number of VPC IPs, which cannot be greater than 20.
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * Configuration of public network bandwidth. If this parameter is not specified, 0 Mbps will be used by default.
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * The number of instances to be purchased. Value range for pay-as-you-go instances: [1, 100]. Default value: `1`. The specified number of instances to be purchased cannot exceed the remaining quota allowed for the user. For more information on the quota, see [Quota for CVM Instances](https://intl.cloud.tencent.com/document/product/213/2664).
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Instance name.<br><li>If this parameter is not specified, "Unnamed" will be displayed by default.</li><li>If you purchase multiple instances and specify a pattern string `{R:x}`, numbers `[x, x+n-1]` will be generated, where `n` represents the number of instances purchased. For example, you specify a pattern string `server_{R:3}`. If you purchase only one instance, the instance will be named `server_3`; if you purchase two, they will be named `server_3` and `server_4`. You can specify multiple pattern strings in the format of `{R:x}`.</li><li>If you purchase multiple instances without specifying a pattern string, the instance names will be suffixed with `1, 2...n`, where `n` represents the number of instances purchased. For example, if you purchase two instances with the name `server_`, the instance names will be `server_1` and `server_2`.</li><li>This parameter can contain up to 60 characters (including pattern strings).</li>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance login settings. You can use this parameter to set the login method, password and key of the instance, or keep the original login settings of the image. If it's not specified, the user needs to set the login password using the "Reset password" option in the CVM console or calling the API `ResetInstancesPassword` to complete the creation of the CVM instance(s).
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response. If this parameter is not specified, the instance will be associated with default security groups.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Enhanced service. You can use this parameter to specify whether to enable services such as Anti-DDoS and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Anti-DDoS are enabled for public images by default. However, for custom images and images from the marketplace, Anti-DDoS and Cloud Monitor are not enabled by default. The original services in the image will be retained.
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idem-potency of the request cannot be guaranteed.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Hostname of an instance.<br><li>Period (.) and hyphen (-) should not be used as the first or last character of the hostname, and should not be used consecutively.</li><br><li>Windows instances: The hostname should contain 2 to 15 characters, including letters (case insensitive), digits, and hyphens (-), does not support periods (.), and should not be all digits.</li><br><li>Instances of other types (such as Linux instances): The hostname should contain 2 to 60 characters, including multiple periods (.), with each segment between periods considered as one section. Each section can contain letters (case insensitive), digits, and hyphens (-).</li><br><li>If you purchase multiple instances and specify a pattern string `{R:x}`, numbers `[x, x+n-1]` will be generated, where `n` represents the number of instances purchased. For example, you specify a pattern string `server{R:3}`. If you purchase only one instance, the hostname will be `server3`; if you purchase two, they will be `server3` and `server4`. You can specify multiple pattern strings in the format of `{R:x}`.</li><br><li>If you purchase multiple instances without specifying a pattern string, the hostnames will be suffixed with `1, 2...n`, where `n` represents the number of instances purchased. For example, if you purchase two instances with the name `server`, the hostnames will be `server1` and `server2`.</li>
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
                     * List of tag description. By specifying this parameter, the tag can be bound to the corresponding CVM and CBS instances at the same time.
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * The market options of the instance.
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * User data provided to the instance. This parameter needs to be encoded in base64 format with the maximum size of 16 KB. For more information on how to get the value of this parameter, see the commands you need to execute on startup for [Windows](https://intl.cloud.tencent.com/document/product/213/17526) or [Linux](https://intl.cloud.tencent.com/document/product/213/17525).
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * 
                     */
                    Metadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * Whether the request is a dry run only.
`true`: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
`false` (default value): Send a normal request and create instance(s) if all the requirements are met.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * Information about the CPU topology of an instance. If not specified, it is determined by system resources.
                     */
                    CpuTopology m_cpuTopology;
                    bool m_cpuTopologyHasBeenSet;

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
                     * Instance launch template.
                     */
                    LaunchTemplate m_launchTemplate;
                    bool m_launchTemplateHasBeenSet;

                    /**
                     * Specify the ID of the dedicated cluster where the CVM is created.
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * Specify the CHC physical server that used to create the CHC CVM.
                     */
                    std::vector<std::string> m_chcIds;
                    bool m_chcIdsHasBeenSet;

                    /**
                     * Instance termination protection flag, indicating whether an instance is allowed to be deleted through an API. Valid values:<br><li>true: Instance protection is enabled, and the instance is not allowed to be deleted through the API.</li><br><li>false: Instance protection is disabled, and the instance is allowed to be deleted through the API.</li><br><br>Default value: false.
                     */
                    bool m_disableApiTermination;
                    bool m_disableApiTerminationHasBeenSet;

                    /**
                     * 
                     */
                    bool m_enableJumboFrame;
                    bool m_enableJumboFrameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RUNINSTANCESREQUEST_H_
