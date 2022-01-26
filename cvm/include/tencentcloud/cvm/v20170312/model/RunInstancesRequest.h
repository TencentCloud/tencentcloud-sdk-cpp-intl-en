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
                     * 获取Instance [billing type](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1). <br><li>POSTPAID_BY_HOUR: pay-as-you-go billing by hour <br><li>CDHPAID: Dedicated CVM (associated with a dedicated host. Resource usage of the dedicated host is free of charge.) <br><li>SPOTPAID: [spot instance] (https://intl.cloud.tencent.com/document/product/213/17817)<br> Default value: POSTPAID_BY_HOUR.
                     * @return InstanceChargeType Instance [billing type](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1). <br><li>POSTPAID_BY_HOUR: pay-as-you-go billing by hour <br><li>CDHPAID: Dedicated CVM (associated with a dedicated host. Resource usage of the dedicated host is free of charge.) <br><li>SPOTPAID: [spot instance] (https://intl.cloud.tencent.com/document/product/213/17817)<br> Default value: POSTPAID_BY_HOUR.
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance [billing type](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1). <br><li>POSTPAID_BY_HOUR: pay-as-you-go billing by hour <br><li>CDHPAID: Dedicated CVM (associated with a dedicated host. Resource usage of the dedicated host is free of charge.) <br><li>SPOTPAID: [spot instance] (https://intl.cloud.tencent.com/document/product/213/17817)<br> Default value: POSTPAID_BY_HOUR.
                     * @param InstanceChargeType Instance [billing type](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1). <br><li>POSTPAID_BY_HOUR: pay-as-you-go billing by hour <br><li>CDHPAID: Dedicated CVM (associated with a dedicated host. Resource usage of the dedicated host is free of charge.) <br><li>SPOTPAID: [spot instance] (https://intl.cloud.tencent.com/document/product/213/17817)<br> Default value: POSTPAID_BY_HOUR.
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Configuration of prepaid instances. You can use the parameter to specify the attributes of prepaid instances, such as the subscription period and the auto-renewal plan. This parameter is required for prepaid instances.
                     * @return InstanceChargePrepaid Configuration of prepaid instances. You can use the parameter to specify the attributes of prepaid instances, such as the subscription period and the auto-renewal plan. This parameter is required for prepaid instances.
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置Configuration of prepaid instances. You can use the parameter to specify the attributes of prepaid instances, such as the subscription period and the auto-renewal plan. This parameter is required for prepaid instances.
                     * @param InstanceChargePrepaid Configuration of prepaid instances. You can use the parameter to specify the attributes of prepaid instances, such as the subscription period and the auto-renewal plan. This parameter is required for prepaid instances.
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone, project, and CDH. You can specify a CDH for a CVM by creating the CVM on the CDH.
                     * @return Placement Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone, project, and CDH. You can specify a CDH for a CVM by creating the CVM on the CDH.
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone, project, and CDH. You can specify a CDH for a CVM by creating the CVM on the CDH.
                     * @param Placement Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone, project, and CDH. You can specify a CDH for a CVM by creating the CVM on the CDH.
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取The instance model. Different resource specifications are specified for different instance models.
<br><li>To view specific values for `POSTPAID_BY_HOUR` instances, you can call [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) or refer to [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1). If this parameter is not specified, `S1.SMALL1` will be used by default.<br><li>For `CDHPAID` instances, the value of this parameter is in the format of `CDH_XCXG` based on the number of CPU cores and memory capacity. For example, if you want to create a CDH instance with a single-core CPU and 1 GB memory, specify this parameter as `CDH_1C1G`.
                     * @return InstanceType The instance model. Different resource specifications are specified for different instance models.
<br><li>To view specific values for `POSTPAID_BY_HOUR` instances, you can call [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) or refer to [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1). If this parameter is not specified, `S1.SMALL1` will be used by default.<br><li>For `CDHPAID` instances, the value of this parameter is in the format of `CDH_XCXG` based on the number of CPU cores and memory capacity. For example, if you want to create a CDH instance with a single-core CPU and 1 GB memory, specify this parameter as `CDH_1C1G`.
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置The instance model. Different resource specifications are specified for different instance models.
<br><li>To view specific values for `POSTPAID_BY_HOUR` instances, you can call [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) or refer to [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1). If this parameter is not specified, `S1.SMALL1` will be used by default.<br><li>For `CDHPAID` instances, the value of this parameter is in the format of `CDH_XCXG` based on the number of CPU cores and memory capacity. For example, if you want to create a CDH instance with a single-core CPU and 1 GB memory, specify this parameter as `CDH_1C1G`.
                     * @param InstanceType The instance model. Different resource specifications are specified for different instance models.
<br><li>To view specific values for `POSTPAID_BY_HOUR` instances, you can call [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) or refer to [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1). If this parameter is not specified, `S1.SMALL1` will be used by default.<br><li>For `CDHPAID` instances, the value of this parameter is in the format of `CDH_XCXG` based on the number of CPU cores and memory capacity. For example, if you want to create a CDH instance with a single-core CPU and 1 GB memory, specify this parameter as `CDH_1C1G`.
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取The [image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are four types of images:<br/><li>Public images</li><li>Custom images</li><li>Shared images</li><li>Marketplace images</li><br/>You can retrieve available image IDs in the following ways:<br/><li>For the IDs of `public images`, `custom images`, and `shared images`, log in to the [console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE) to query the information. For the IDs of `marketplace images`, go to [Cloud Marketplace](https://market.cloud.tencent.com/list). </li><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), pass in `InstanceType` to retrieve the list of images supported by the current model, and then find the `ImageId` in the response.</li>
                     * @return ImageId The [image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are four types of images:<br/><li>Public images</li><li>Custom images</li><li>Shared images</li><li>Marketplace images</li><br/>You can retrieve available image IDs in the following ways:<br/><li>For the IDs of `public images`, `custom images`, and `shared images`, log in to the [console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE) to query the information. For the IDs of `marketplace images`, go to [Cloud Marketplace](https://market.cloud.tencent.com/list). </li><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), pass in `InstanceType` to retrieve the list of images supported by the current model, and then find the `ImageId` in the response.</li>
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置The [image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are four types of images:<br/><li>Public images</li><li>Custom images</li><li>Shared images</li><li>Marketplace images</li><br/>You can retrieve available image IDs in the following ways:<br/><li>For the IDs of `public images`, `custom images`, and `shared images`, log in to the [console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE) to query the information. For the IDs of `marketplace images`, go to [Cloud Marketplace](https://market.cloud.tencent.com/list). </li><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), pass in `InstanceType` to retrieve the list of images supported by the current model, and then find the `ImageId` in the response.</li>
                     * @param ImageId The [image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are four types of images:<br/><li>Public images</li><li>Custom images</li><li>Shared images</li><li>Marketplace images</li><br/>You can retrieve available image IDs in the following ways:<br/><li>For the IDs of `public images`, `custom images`, and `shared images`, log in to the [console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE) to query the information. For the IDs of `marketplace images`, go to [Cloud Marketplace](https://market.cloud.tencent.com/list). </li><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), pass in `InstanceType` to retrieve the list of images supported by the current model, and then find the `ImageId` in the response.</li>
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取System disk configuration of the instance. If this parameter is not specified, the default value will be used.
                     * @return SystemDisk System disk configuration of the instance. If this parameter is not specified, the default value will be used.
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置System disk configuration of the instance. If this parameter is not specified, the default value will be used.
                     * @param SystemDisk System disk configuration of the instance. If this parameter is not specified, the default value will be used.
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取The configuration information of instance data disks. If this parameter is not specified, no data disk will be purchased by default. When purchasing, you can specify 21 data disks, which can contain at most 1 LOCAL_BASIC data disk or LOCAL_SSD data disk, and at most 20 CLOUD_BASIC data disks, CLOUD_PREMIUM data disks, or CLOUD_SSD data disks.
                     * @return DataDisks The configuration information of instance data disks. If this parameter is not specified, no data disk will be purchased by default. When purchasing, you can specify 21 data disks, which can contain at most 1 LOCAL_BASIC data disk or LOCAL_SSD data disk, and at most 20 CLOUD_BASIC data disks, CLOUD_PREMIUM data disks, or CLOUD_SSD data disks.
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置The configuration information of instance data disks. If this parameter is not specified, no data disk will be purchased by default. When purchasing, you can specify 21 data disks, which can contain at most 1 LOCAL_BASIC data disk or LOCAL_SSD data disk, and at most 20 CLOUD_BASIC data disks, CLOUD_PREMIUM data disks, or CLOUD_SSD data disks.
                     * @param DataDisks The configuration information of instance data disks. If this parameter is not specified, no data disk will be purchased by default. When purchasing, you can specify 21 data disks, which can contain at most 1 LOCAL_BASIC data disk or LOCAL_SSD data disk, and at most 20 CLOUD_BASIC data disks, CLOUD_PREMIUM data disks, or CLOUD_SSD data disks.
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取Configuration information of VPC. This parameter is used to specify VPC ID and subnet ID, etc. If this parameter is not specified, the classic network is used by default. If a VPC IP is specified in this parameter, it indicates the primary ENI IP of each instance. The value of parameter InstanceCount must be same as the number of VPC IPs, which cannot be greater than 20.
                     * @return VirtualPrivateCloud Configuration information of VPC. This parameter is used to specify VPC ID and subnet ID, etc. If this parameter is not specified, the classic network is used by default. If a VPC IP is specified in this parameter, it indicates the primary ENI IP of each instance. The value of parameter InstanceCount must be same as the number of VPC IPs, which cannot be greater than 20.
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置Configuration information of VPC. This parameter is used to specify VPC ID and subnet ID, etc. If this parameter is not specified, the classic network is used by default. If a VPC IP is specified in this parameter, it indicates the primary ENI IP of each instance. The value of parameter InstanceCount must be same as the number of VPC IPs, which cannot be greater than 20.
                     * @param VirtualPrivateCloud Configuration information of VPC. This parameter is used to specify VPC ID and subnet ID, etc. If this parameter is not specified, the classic network is used by default. If a VPC IP is specified in this parameter, it indicates the primary ENI IP of each instance. The value of parameter InstanceCount must be same as the number of VPC IPs, which cannot be greater than 20.
                     */
                    void SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud);

                    /**
                     * 判断参数 VirtualPrivateCloud 是否已赋值
                     * @return VirtualPrivateCloud 是否已赋值
                     */
                    bool VirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取Configuration of public network bandwidth. If this parameter is not specified, 0 Mbps will be used by default.
                     * @return InternetAccessible Configuration of public network bandwidth. If this parameter is not specified, 0 Mbps will be used by default.
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置Configuration of public network bandwidth. If this parameter is not specified, 0 Mbps will be used by default.
                     * @param InternetAccessible Configuration of public network bandwidth. If this parameter is not specified, 0 Mbps will be used by default.
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取The number of instances to be purchased. Value range: [1, 100]; default value: 1. The specified number of instances to be purchased cannot exceed the remaining quota allowed for the user. For more information on the quota, see [CVM instance purchase limit](https://intl.cloud.tencent.com/document/product/213/2664).
                     * @return InstanceCount The number of instances to be purchased. Value range: [1, 100]; default value: 1. The specified number of instances to be purchased cannot exceed the remaining quota allowed for the user. For more information on the quota, see [CVM instance purchase limit](https://intl.cloud.tencent.com/document/product/213/2664).
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置The number of instances to be purchased. Value range: [1, 100]; default value: 1. The specified number of instances to be purchased cannot exceed the remaining quota allowed for the user. For more information on the quota, see [CVM instance purchase limit](https://intl.cloud.tencent.com/document/product/213/2664).
                     * @param InstanceCount The number of instances to be purchased. Value range: [1, 100]; default value: 1. The specified number of instances to be purchased cannot exceed the remaining quota allowed for the user. For more information on the quota, see [CVM instance purchase limit](https://intl.cloud.tencent.com/document/product/213/2664).
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取Instance name to be displayed.<br><li>If this parameter is not specified, "Unnamed" will be displayed by default.</li><li>If you purchase multiple instances at the same time and specify a pattern string `{R:x}`, numbers `[x, x+n-1]` will be generated, where `n` represents the number of instances purchased. For example, you specify a pattern string, `server_{R:3}`. If you only purchase 1 instance, the instance will be named `server_3`; if you purchase 2, they will be named `server_3` and `server_4`. You can specify multiple pattern strings in the format of `{R:x}`.</li><li>If you purchase multiple instances at the same time and do not specify a pattern string, the instance names will be suffixed by `1, 2...n`, where `n` represents the number of instances purchased. For example, if you purchase 2 instances and name them as `server_`, the instance names will be displayed as `server_1` and `server_2`.</li><li>The instance name contains up to 60 characters (including pattern strings).
                     * @return InstanceName Instance name to be displayed.<br><li>If this parameter is not specified, "Unnamed" will be displayed by default.</li><li>If you purchase multiple instances at the same time and specify a pattern string `{R:x}`, numbers `[x, x+n-1]` will be generated, where `n` represents the number of instances purchased. For example, you specify a pattern string, `server_{R:3}`. If you only purchase 1 instance, the instance will be named `server_3`; if you purchase 2, they will be named `server_3` and `server_4`. You can specify multiple pattern strings in the format of `{R:x}`.</li><li>If you purchase multiple instances at the same time and do not specify a pattern string, the instance names will be suffixed by `1, 2...n`, where `n` represents the number of instances purchased. For example, if you purchase 2 instances and name them as `server_`, the instance names will be displayed as `server_1` and `server_2`.</li><li>The instance name contains up to 60 characters (including pattern strings).
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name to be displayed.<br><li>If this parameter is not specified, "Unnamed" will be displayed by default.</li><li>If you purchase multiple instances at the same time and specify a pattern string `{R:x}`, numbers `[x, x+n-1]` will be generated, where `n` represents the number of instances purchased. For example, you specify a pattern string, `server_{R:3}`. If you only purchase 1 instance, the instance will be named `server_3`; if you purchase 2, they will be named `server_3` and `server_4`. You can specify multiple pattern strings in the format of `{R:x}`.</li><li>If you purchase multiple instances at the same time and do not specify a pattern string, the instance names will be suffixed by `1, 2...n`, where `n` represents the number of instances purchased. For example, if you purchase 2 instances and name them as `server_`, the instance names will be displayed as `server_1` and `server_2`.</li><li>The instance name contains up to 60 characters (including pattern strings).
                     * @param InstanceName Instance name to be displayed.<br><li>If this parameter is not specified, "Unnamed" will be displayed by default.</li><li>If you purchase multiple instances at the same time and specify a pattern string `{R:x}`, numbers `[x, x+n-1]` will be generated, where `n` represents the number of instances purchased. For example, you specify a pattern string, `server_{R:3}`. If you only purchase 1 instance, the instance will be named `server_3`; if you purchase 2, they will be named `server_3` and `server_4`. You can specify multiple pattern strings in the format of `{R:x}`.</li><li>If you purchase multiple instances at the same time and do not specify a pattern string, the instance names will be suffixed by `1, 2...n`, where `n` represents the number of instances purchased. For example, if you purchase 2 instances and name them as `server_`, the instance names will be displayed as `server_1` and `server_2`.</li><li>The instance name contains up to 60 characters (including pattern strings).
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Login settings of the instance. You can use this parameter to set the login method, password, and key of the instance or keep the login settings of the original image. By default, a random password will be generated and sent to you via the Message Center.
                     * @return LoginSettings Login settings of the instance. You can use this parameter to set the login method, password, and key of the instance or keep the login settings of the original image. By default, a random password will be generated and sent to you via the Message Center.
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置Login settings of the instance. You can use this parameter to set the login method, password, and key of the instance or keep the login settings of the original image. By default, a random password will be generated and sent to you via the Message Center.
                     * @param LoginSettings Login settings of the instance. You can use this parameter to set the login method, password, and key of the instance or keep the login settings of the original image. By default, a random password will be generated and sent to you via the Message Center.
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response. If this parameter is not specified, the instance will be associated with default security groups.
                     * @return SecurityGroupIds Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response. If this parameter is not specified, the instance will be associated with default security groups.
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response. If this parameter is not specified, the instance will be associated with default security groups.
                     * @param SecurityGroupIds Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response. If this parameter is not specified, the instance will be associated with default security groups.
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable services such as Anti-DDoS and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Anti-DDoS are enabled for public images by default. However, for custom images and images from the marketplace, Anti-DDoS and Cloud Monitor are not enabled by default. The original services in the image will be retained.
                     * @return EnhancedService Specifies whether to enable services such as Anti-DDoS and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Anti-DDoS are enabled for public images by default. However, for custom images and images from the marketplace, Anti-DDoS and Cloud Monitor are not enabled by default. The original services in the image will be retained.
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置Specifies whether to enable services such as Anti-DDoS and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Anti-DDoS are enabled for public images by default. However, for custom images and images from the marketplace, Anti-DDoS and Cloud Monitor are not enabled by default. The original services in the image will be retained.
                     * @param EnhancedService Specifies whether to enable services such as Anti-DDoS and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Anti-DDoS are enabled for public images by default. However, for custom images and images from the marketplace, Anti-DDoS and Cloud Monitor are not enabled by default. The original services in the image will be retained.
                     */
                    void SetEnhancedService(const EnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取A string used to ensure the idempotency of the request, which is generated by the user and must be unique to each request. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. <br>For more information, see 'How to ensure idempotency'.
                     * @return ClientToken A string used to ensure the idempotency of the request, which is generated by the user and must be unique to each request. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. <br>For more information, see 'How to ensure idempotency'.
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A string used to ensure the idempotency of the request, which is generated by the user and must be unique to each request. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. <br>For more information, see 'How to ensure idempotency'.
                     * @param ClientToken A string used to ensure the idempotency of the request, which is generated by the user and must be unique to each request. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. <br>For more information, see 'How to ensure idempotency'.
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Instance hostname. <br><li>Dots (.) and dashes (-) can not be used as the first or last character of HostName nor used consecutively. <br<li>Windows instances: 2 to 15 characters, including English letters (case-insensitive), numbers and dashes (-). Dots and numeric-only names are not allowed. <br><li>Other instances (Linux, etc.): 2 to 60 characters, including English letters (case-insensitive), numbers, dashes (-) and dots. Note that consecutive dots are not allowed.<br><li>Batch naming: use `{R:x}` for batch naming if multiple instances are purchased. `x` is the serial number of the instance. It’s generated by [x, x+n-1], where `n` refers to the number of instances purchased. For example, if `server{R:3}` is input, if you purchase one instance, the hostname is `server3`. If you purchase two instances, the hostnames are `server3` and `server4` respectively. You can specify multiple pattern strings `{R:x}`. </li><br><li>Purchasing multiple instances: If no pattern string is specified, you shall add suffixes `1, 2...n` to the instance hostname. `n` represents the number of purchased instances. For example, if the instance hostname is `server`,  when two instances are purchased, the hostnames of instances purchased are respectively `server1` and `server2`.
                     * @return HostName Instance hostname. <br><li>Dots (.) and dashes (-) can not be used as the first or last character of HostName nor used consecutively. <br<li>Windows instances: 2 to 15 characters, including English letters (case-insensitive), numbers and dashes (-). Dots and numeric-only names are not allowed. <br><li>Other instances (Linux, etc.): 2 to 60 characters, including English letters (case-insensitive), numbers, dashes (-) and dots. Note that consecutive dots are not allowed.<br><li>Batch naming: use `{R:x}` for batch naming if multiple instances are purchased. `x` is the serial number of the instance. It’s generated by [x, x+n-1], where `n` refers to the number of instances purchased. For example, if `server{R:3}` is input, if you purchase one instance, the hostname is `server3`. If you purchase two instances, the hostnames are `server3` and `server4` respectively. You can specify multiple pattern strings `{R:x}`. </li><br><li>Purchasing multiple instances: If no pattern string is specified, you shall add suffixes `1, 2...n` to the instance hostname. `n` represents the number of purchased instances. For example, if the instance hostname is `server`,  when two instances are purchased, the hostnames of instances purchased are respectively `server1` and `server2`.
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Instance hostname. <br><li>Dots (.) and dashes (-) can not be used as the first or last character of HostName nor used consecutively. <br<li>Windows instances: 2 to 15 characters, including English letters (case-insensitive), numbers and dashes (-). Dots and numeric-only names are not allowed. <br><li>Other instances (Linux, etc.): 2 to 60 characters, including English letters (case-insensitive), numbers, dashes (-) and dots. Note that consecutive dots are not allowed.<br><li>Batch naming: use `{R:x}` for batch naming if multiple instances are purchased. `x` is the serial number of the instance. It’s generated by [x, x+n-1], where `n` refers to the number of instances purchased. For example, if `server{R:3}` is input, if you purchase one instance, the hostname is `server3`. If you purchase two instances, the hostnames are `server3` and `server4` respectively. You can specify multiple pattern strings `{R:x}`. </li><br><li>Purchasing multiple instances: If no pattern string is specified, you shall add suffixes `1, 2...n` to the instance hostname. `n` represents the number of purchased instances. For example, if the instance hostname is `server`,  when two instances are purchased, the hostnames of instances purchased are respectively `server1` and `server2`.
                     * @param HostName Instance hostname. <br><li>Dots (.) and dashes (-) can not be used as the first or last character of HostName nor used consecutively. <br<li>Windows instances: 2 to 15 characters, including English letters (case-insensitive), numbers and dashes (-). Dots and numeric-only names are not allowed. <br><li>Other instances (Linux, etc.): 2 to 60 characters, including English letters (case-insensitive), numbers, dashes (-) and dots. Note that consecutive dots are not allowed.<br><li>Batch naming: use `{R:x}` for batch naming if multiple instances are purchased. `x` is the serial number of the instance. It’s generated by [x, x+n-1], where `n` refers to the number of instances purchased. For example, if `server{R:3}` is input, if you purchase one instance, the hostname is `server3`. If you purchase two instances, the hostnames are `server3` and `server4` respectively. You can specify multiple pattern strings `{R:x}`. </li><br><li>Purchasing multiple instances: If no pattern string is specified, you shall add suffixes `1, 2...n` to the instance hostname. `n` represents the number of purchased instances. For example, if the instance hostname is `server`,  when two instances are purchased, the hostnames of instances purchased are respectively `server1` and `server2`.
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Scheduled tasks. You can use this parameter to specify scheduled tasks for the instance. Only scheduled termination is supported.
                     * @return ActionTimer Scheduled tasks. You can use this parameter to specify scheduled tasks for the instance. Only scheduled termination is supported.
                     */
                    ActionTimer GetActionTimer() const;

                    /**
                     * 设置Scheduled tasks. You can use this parameter to specify scheduled tasks for the instance. Only scheduled termination is supported.
                     * @param ActionTimer Scheduled tasks. You can use this parameter to specify scheduled tasks for the instance. Only scheduled termination is supported.
                     */
                    void SetActionTimer(const ActionTimer& _actionTimer);

                    /**
                     * 判断参数 ActionTimer 是否已赋值
                     * @return ActionTimer 是否已赋值
                     */
                    bool ActionTimerHasBeenSet() const;

                    /**
                     * 获取Placement group ID. You can only specify one.
                     * @return DisasterRecoverGroupIds Placement group ID. You can only specify one.
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置Placement group ID. You can only specify one.
                     * @param DisasterRecoverGroupIds Placement group ID. You can only specify one.
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取Binds the tag with the specified resources (CVM and CLB) as well
                     * @return TagSpecification Binds the tag with the specified resources (CVM and CLB) as well
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置Binds the tag with the specified resources (CVM and CLB) as well
                     * @param TagSpecification Binds the tag with the specified resources (CVM and CLB) as well
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取The market options of the instance.
                     * @return InstanceMarketOptions The market options of the instance.
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置The market options of the instance.
                     * @param InstanceMarketOptions The market options of the instance.
                     */
                    void SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions);

                    /**
                     * 判断参数 InstanceMarketOptions 是否已赋值
                     * @return InstanceMarketOptions 是否已赋值
                     */
                    bool InstanceMarketOptionsHasBeenSet() const;

                    /**
                     * 获取User data provided to the instance, which needs to be encoded in base64 format with the maximum size of 16KB. For more information on how to get the value of this parameter, see the commands you need to execute on startup for [Windows](https://intl.cloud.tencent.com/document/product/213/17526) or [Linux](https://intl.cloud.tencent.com/document/product/213/17525).
                     * @return UserData User data provided to the instance, which needs to be encoded in base64 format with the maximum size of 16KB. For more information on how to get the value of this parameter, see the commands you need to execute on startup for [Windows](https://intl.cloud.tencent.com/document/product/213/17526) or [Linux](https://intl.cloud.tencent.com/document/product/213/17525).
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置User data provided to the instance, which needs to be encoded in base64 format with the maximum size of 16KB. For more information on how to get the value of this parameter, see the commands you need to execute on startup for [Windows](https://intl.cloud.tencent.com/document/product/213/17526) or [Linux](https://intl.cloud.tencent.com/document/product/213/17525).
                     * @param UserData User data provided to the instance, which needs to be encoded in base64 format with the maximum size of 16KB. For more information on how to get the value of this parameter, see the commands you need to execute on startup for [Windows](https://intl.cloud.tencent.com/document/product/213/17526) or [Linux](https://intl.cloud.tencent.com/document/product/213/17525).
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取Whether the request is a dry run only.
true: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
false (default value): send a normal request and create instance(s) if all the requirements are met.
                     * @return DryRun Whether the request is a dry run only.
true: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
false (default value): send a normal request and create instance(s) if all the requirements are met.
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether the request is a dry run only.
true: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
false (default value): send a normal request and create instance(s) if all the requirements are met.
                     * @param DryRun Whether the request is a dry run only.
true: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
false (default value): send a normal request and create instance(s) if all the requirements are met.
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取CAM role name, which can be obtained from the `roleName` field in the response of the [`DescribeRoleList`](https://intl.cloud.tencent.com/document/product/598/13887?from_cn_redirect=1) API.
                     * @return CamRoleName CAM role name, which can be obtained from the `roleName` field in the response of the [`DescribeRoleList`](https://intl.cloud.tencent.com/document/product/598/13887?from_cn_redirect=1) API.
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置CAM role name, which can be obtained from the `roleName` field in the response of the [`DescribeRoleList`](https://intl.cloud.tencent.com/document/product/598/13887?from_cn_redirect=1) API.
                     * @param CamRoleName CAM role name, which can be obtained from the `roleName` field in the response of the [`DescribeRoleList`](https://intl.cloud.tencent.com/document/product/598/13887?from_cn_redirect=1) API.
                     */
                    void SetCamRoleName(const std::string& _camRoleName);

                    /**
                     * 判断参数 CamRoleName 是否已赋值
                     * @return CamRoleName 是否已赋值
                     */
                    bool CamRoleNameHasBeenSet() const;

                    /**
                     * 获取HPC cluster ID. The HPC cluster must and can only be specified for a high-performance computing instance.
                     * @return HpcClusterId HPC cluster ID. The HPC cluster must and can only be specified for a high-performance computing instance.
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置HPC cluster ID. The HPC cluster must and can only be specified for a high-performance computing instance.
                     * @param HpcClusterId HPC cluster ID. The HPC cluster must and can only be specified for a high-performance computing instance.
                     */
                    void SetHpcClusterId(const std::string& _hpcClusterId);

                    /**
                     * 判断参数 HpcClusterId 是否已赋值
                     * @return HpcClusterId 是否已赋值
                     */
                    bool HpcClusterIdHasBeenSet() const;

                private:

                    /**
                     * Instance [billing type](https://intl.cloud.tencent.com/document/product/213/2180?from_cn_redirect=1). <br><li>POSTPAID_BY_HOUR: pay-as-you-go billing by hour <br><li>CDHPAID: Dedicated CVM (associated with a dedicated host. Resource usage of the dedicated host is free of charge.) <br><li>SPOTPAID: [spot instance] (https://intl.cloud.tencent.com/document/product/213/17817)<br> Default value: POSTPAID_BY_HOUR.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Configuration of prepaid instances. You can use the parameter to specify the attributes of prepaid instances, such as the subscription period and the auto-renewal plan. This parameter is required for prepaid instances.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * Location of the instance. You can use this parameter to specify the attributes of the instance, such as its availability zone, project, and CDH. You can specify a CDH for a CVM by creating the CVM on the CDH.
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * The instance model. Different resource specifications are specified for different instance models.
<br><li>To view specific values for `POSTPAID_BY_HOUR` instances, you can call [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) or refer to [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1). If this parameter is not specified, `S1.SMALL1` will be used by default.<br><li>For `CDHPAID` instances, the value of this parameter is in the format of `CDH_XCXG` based on the number of CPU cores and memory capacity. For example, if you want to create a CDH instance with a single-core CPU and 1 GB memory, specify this parameter as `CDH_1C1G`.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * The [image](https://intl.cloud.tencent.com/document/product/213/4940?from_cn_redirect=1) ID in the format of `img-xxx`. There are four types of images:<br/><li>Public images</li><li>Custom images</li><li>Shared images</li><li>Marketplace images</li><br/>You can retrieve available image IDs in the following ways:<br/><li>For the IDs of `public images`, `custom images`, and `shared images`, log in to the [console](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE) to query the information. For the IDs of `marketplace images`, go to [Cloud Marketplace](https://market.cloud.tencent.com/list). </li><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1), pass in `InstanceType` to retrieve the list of images supported by the current model, and then find the `ImageId` in the response.</li>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * System disk configuration of the instance. If this parameter is not specified, the default value will be used.
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * The configuration information of instance data disks. If this parameter is not specified, no data disk will be purchased by default. When purchasing, you can specify 21 data disks, which can contain at most 1 LOCAL_BASIC data disk or LOCAL_SSD data disk, and at most 20 CLOUD_BASIC data disks, CLOUD_PREMIUM data disks, or CLOUD_SSD data disks.
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
                     * The number of instances to be purchased. Value range: [1, 100]; default value: 1. The specified number of instances to be purchased cannot exceed the remaining quota allowed for the user. For more information on the quota, see [CVM instance purchase limit](https://intl.cloud.tencent.com/document/product/213/2664).
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Instance name to be displayed.<br><li>If this parameter is not specified, "Unnamed" will be displayed by default.</li><li>If you purchase multiple instances at the same time and specify a pattern string `{R:x}`, numbers `[x, x+n-1]` will be generated, where `n` represents the number of instances purchased. For example, you specify a pattern string, `server_{R:3}`. If you only purchase 1 instance, the instance will be named `server_3`; if you purchase 2, they will be named `server_3` and `server_4`. You can specify multiple pattern strings in the format of `{R:x}`.</li><li>If you purchase multiple instances at the same time and do not specify a pattern string, the instance names will be suffixed by `1, 2...n`, where `n` represents the number of instances purchased. For example, if you purchase 2 instances and name them as `server_`, the instance names will be displayed as `server_1` and `server_2`.</li><li>The instance name contains up to 60 characters (including pattern strings).
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Login settings of the instance. You can use this parameter to set the login method, password, and key of the instance or keep the login settings of the original image. By default, a random password will be generated and sent to you via the Message Center.
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response. If this parameter is not specified, the instance will be associated with default security groups.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Specifies whether to enable services such as Anti-DDoS and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Anti-DDoS are enabled for public images by default. However, for custom images and images from the marketplace, Anti-DDoS and Cloud Monitor are not enabled by default. The original services in the image will be retained.
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * A string used to ensure the idempotency of the request, which is generated by the user and must be unique to each request. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. <br>For more information, see 'How to ensure idempotency'.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Instance hostname. <br><li>Dots (.) and dashes (-) can not be used as the first or last character of HostName nor used consecutively. <br<li>Windows instances: 2 to 15 characters, including English letters (case-insensitive), numbers and dashes (-). Dots and numeric-only names are not allowed. <br><li>Other instances (Linux, etc.): 2 to 60 characters, including English letters (case-insensitive), numbers, dashes (-) and dots. Note that consecutive dots are not allowed.<br><li>Batch naming: use `{R:x}` for batch naming if multiple instances are purchased. `x` is the serial number of the instance. It’s generated by [x, x+n-1], where `n` refers to the number of instances purchased. For example, if `server{R:3}` is input, if you purchase one instance, the hostname is `server3`. If you purchase two instances, the hostnames are `server3` and `server4` respectively. You can specify multiple pattern strings `{R:x}`. </li><br><li>Purchasing multiple instances: If no pattern string is specified, you shall add suffixes `1, 2...n` to the instance hostname. `n` represents the number of purchased instances. For example, if the instance hostname is `server`,  when two instances are purchased, the hostnames of instances purchased are respectively `server1` and `server2`.
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
                     * Binds the tag with the specified resources (CVM and CLB) as well
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * The market options of the instance.
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * User data provided to the instance, which needs to be encoded in base64 format with the maximum size of 16KB. For more information on how to get the value of this parameter, see the commands you need to execute on startup for [Windows](https://intl.cloud.tencent.com/document/product/213/17526) or [Linux](https://intl.cloud.tencent.com/document/product/213/17525).
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * Whether the request is a dry run only.
true: dry run only. The request will not create instance(s). A dry run can check whether all the required parameters are specified, whether the request format is right, whether the request exceeds service limits, and whether the specified CVMs are available.
If the dry run fails, the corresponding error code will be returned.
If the dry run succeeds, the RequestId will be returned.
false (default value): send a normal request and create instance(s) if all the requirements are met.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * CAM role name, which can be obtained from the `roleName` field in the response of the [`DescribeRoleList`](https://intl.cloud.tencent.com/document/product/598/13887?from_cn_redirect=1) API.
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * HPC cluster ID. The HPC cluster must and can only be specified for a high-performance computing instance.
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RUNINSTANCESREQUEST_H_
