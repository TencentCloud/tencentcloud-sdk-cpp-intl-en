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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_RUNINSTANCESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_RUNINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ZoneInstanceCountISP.h>
#include <tencentcloud/ecm/v20190719/model/EnhancedService.h>
#include <tencentcloud/ecm/v20190719/model/TagSpecification.h>
#include <tencentcloud/ecm/v20190719/model/SystemDisk.h>
#include <tencentcloud/ecm/v20190719/model/DataDisk.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取List of AZs in which to create instances, the number of instances to be created, and the ISPs. You can create up to 100 instances in a region at a time.
                     * @return ZoneInstanceCountISPSet List of AZs in which to create instances, the number of instances to be created, and the ISPs. You can create up to 100 instances in a region at a time.
                     * 
                     */
                    std::vector<ZoneInstanceCountISP> GetZoneInstanceCountISPSet() const;

                    /**
                     * 设置List of AZs in which to create instances, the number of instances to be created, and the ISPs. You can create up to 100 instances in a region at a time.
                     * @param _zoneInstanceCountISPSet List of AZs in which to create instances, the number of instances to be created, and the ISPs. You can create up to 100 instances in a region at a time.
                     * 
                     */
                    void SetZoneInstanceCountISPSet(const std::vector<ZoneInstanceCountISP>& _zoneInstanceCountISPSet);

                    /**
                     * 判断参数 ZoneInstanceCountISPSet 是否已赋值
                     * @return ZoneInstanceCountISPSet 是否已赋值
                     * 
                     */
                    bool ZoneInstanceCountISPSetHasBeenSet() const;

                    /**
                     * 获取Instance login password. Different OS types have different limits on password complexity as detailed below:
The password of a Linux instance must contain 8–30 characters in at least two of the following character types: letters, digits, and special symbols [( ) ` ~ ! @ # $ % ^ & - + = | { } [ ] : ; ' , . ? / ]. The password of a Windows instance must contain 12–30 characters in at least three of the following character types: letters, digits, and special symbols [( ) ` ~ ! @ # $ % ^ & - + = | { } [ ] : ; ' , . ? /].
                     * @return Password Instance login password. Different OS types have different limits on password complexity as detailed below:
The password of a Linux instance must contain 8–30 characters in at least two of the following character types: letters, digits, and special symbols [( ) ` ~ ! @ # $ % ^ & - + = | { } [ ] : ; ' , . ? / ]. The password of a Windows instance must contain 12–30 characters in at least three of the following character types: letters, digits, and special symbols [( ) ` ~ ! @ # $ % ^ & - + = | { } [ ] : ; ' , . ? /].
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Instance login password. Different OS types have different limits on password complexity as detailed below:
The password of a Linux instance must contain 8–30 characters in at least two of the following character types: letters, digits, and special symbols [( ) ` ~ ! @ # $ % ^ & - + = | { } [ ] : ; ' , . ? / ]. The password of a Windows instance must contain 12–30 characters in at least three of the following character types: letters, digits, and special symbols [( ) ` ~ ! @ # $ % ^ & - + = | { } [ ] : ; ' , . ? /].
                     * @param _password Instance login password. Different OS types have different limits on password complexity as detailed below:
The password of a Linux instance must contain 8–30 characters in at least two of the following character types: letters, digits, and special symbols [( ) ` ~ ! @ # $ % ^ & - + = | { } [ ] : ; ' , . ? / ]. The password of a Windows instance must contain 12–30 characters in at least three of the following character types: letters, digits, and special symbols [( ) ` ~ ! @ # $ % ^ & - + = | { } [ ] : ; ' , . ? /].
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Public network outbound bandwidth cap in Mbps.
1. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used.
2. If you don't specify this parameter or specify it as `0` without specifying the module, the value of `InternetMaxBandwidthIn` will be used
                     * @return InternetMaxBandwidthOut Public network outbound bandwidth cap in Mbps.
1. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used.
2. If you don't specify this parameter or specify it as `0` without specifying the module, the value of `InternetMaxBandwidthIn` will be used
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Public network outbound bandwidth cap in Mbps.
1. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used.
2. If you don't specify this parameter or specify it as `0` without specifying the module, the value of `InternetMaxBandwidthIn` will be used
                     * @param _internetMaxBandwidthOut Public network outbound bandwidth cap in Mbps.
1. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used.
2. If you don't specify this parameter or specify it as `0` without specifying the module, the value of `InternetMaxBandwidthIn` will be used
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取Module ID. If you don't specify this parameter, you must specify the `ImageId`, `InstanceType`, `DataDiskSize`, and `InternetMaxBandwidthOut` parameters
                     * @return ModuleId Module ID. If you don't specify this parameter, you must specify the `ImageId`, `InstanceType`, `DataDiskSize`, and `InternetMaxBandwidthOut` parameters
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置Module ID. If you don't specify this parameter, you must specify the `ImageId`, `InstanceType`, `DataDiskSize`, and `InternetMaxBandwidthOut` parameters
                     * @param _moduleId Module ID. If you don't specify this parameter, you must specify the `ImageId`, `InstanceType`, `DataDiskSize`, and `InternetMaxBandwidthOut` parameters
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取Image ID. If you don't specify this parameter or specify it as null, the default value under the corresponding module will be used.
                     * @return ImageId Image ID. If you don't specify this parameter or specify it as null, the default value under the corresponding module will be used.
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID. If you don't specify this parameter or specify it as null, the default value under the corresponding module will be used.
                     * @param _imageId Image ID. If you don't specify this parameter or specify it as null, the default value under the corresponding module will be used.
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
                     * 获取Instance display name.
If this parameter is not specified, `Not named` will be displayed by default.
If you purchase multiple instances and specify the pattern string `{R:x}`, display names will be generated based on `[x, x+n-1]`, where `n` is the number of the purchased instances. For example, if you specify `server\_{R:3}` and purchase 1 instance, the display name will be `server\_3`, and if you purchase 2 instances, the display names will be `server\_3` and `server\_4` respectively.
You can specify multiple pattern strings `{R:x}`.
If you purchase multiple instances and don't specify the pattern string, the instance display names will be suffixed with 1, 2...n, where `n` indicates the number of the purchased instances. For example, if you specify `server_` and purchase 2 instances, the instance display names will be `server\_1` and `server\_2` respectively.
If the purchased instances belong to different regions or ISPs, the above rules will apply to each region and ISP independently.
It can contain up to 60 characters (including pattern string).
                     * @return InstanceName Instance display name.
If this parameter is not specified, `Not named` will be displayed by default.
If you purchase multiple instances and specify the pattern string `{R:x}`, display names will be generated based on `[x, x+n-1]`, where `n` is the number of the purchased instances. For example, if you specify `server\_{R:3}` and purchase 1 instance, the display name will be `server\_3`, and if you purchase 2 instances, the display names will be `server\_3` and `server\_4` respectively.
You can specify multiple pattern strings `{R:x}`.
If you purchase multiple instances and don't specify the pattern string, the instance display names will be suffixed with 1, 2...n, where `n` indicates the number of the purchased instances. For example, if you specify `server_` and purchase 2 instances, the instance display names will be `server\_1` and `server\_2` respectively.
If the purchased instances belong to different regions or ISPs, the above rules will apply to each region and ISP independently.
It can contain up to 60 characters (including pattern string).
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance display name.
If this parameter is not specified, `Not named` will be displayed by default.
If you purchase multiple instances and specify the pattern string `{R:x}`, display names will be generated based on `[x, x+n-1]`, where `n` is the number of the purchased instances. For example, if you specify `server\_{R:3}` and purchase 1 instance, the display name will be `server\_3`, and if you purchase 2 instances, the display names will be `server\_3` and `server\_4` respectively.
You can specify multiple pattern strings `{R:x}`.
If you purchase multiple instances and don't specify the pattern string, the instance display names will be suffixed with 1, 2...n, where `n` indicates the number of the purchased instances. For example, if you specify `server_` and purchase 2 instances, the instance display names will be `server\_1` and `server\_2` respectively.
If the purchased instances belong to different regions or ISPs, the above rules will apply to each region and ISP independently.
It can contain up to 60 characters (including pattern string).
                     * @param _instanceName Instance display name.
If this parameter is not specified, `Not named` will be displayed by default.
If you purchase multiple instances and specify the pattern string `{R:x}`, display names will be generated based on `[x, x+n-1]`, where `n` is the number of the purchased instances. For example, if you specify `server\_{R:3}` and purchase 1 instance, the display name will be `server\_3`, and if you purchase 2 instances, the display names will be `server\_3` and `server\_4` respectively.
You can specify multiple pattern strings `{R:x}`.
If you purchase multiple instances and don't specify the pattern string, the instance display names will be suffixed with 1, 2...n, where `n` indicates the number of the purchased instances. For example, if you specify `server_` and purchase 2 instances, the instance display names will be `server\_1` and `server\_2` respectively.
If the purchased instances belong to different regions or ISPs, the above rules will apply to each region and ISP independently.
It can contain up to 60 characters (including pattern string).
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
                     * 获取Server name
`HostName` cannot start or end with a dot or hyphen and cannot contain consecutive dots or hyphens.
Windows instance: the name can contain 2–15 letters, digits, and hyphens but not dots or only digits.
Other types (such as Linux) of instances: the name should be a combination of 2 to 60 characters, supporting multiple dots. A string between two dots can contain letters, digits, and hyphens.
                     * @return HostName Server name
`HostName` cannot start or end with a dot or hyphen and cannot contain consecutive dots or hyphens.
Windows instance: the name can contain 2–15 letters, digits, and hyphens but not dots or only digits.
Other types (such as Linux) of instances: the name should be a combination of 2 to 60 characters, supporting multiple dots. A string between two dots can contain letters, digits, and hyphens.
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Server name
`HostName` cannot start or end with a dot or hyphen and cannot contain consecutive dots or hyphens.
Windows instance: the name can contain 2–15 letters, digits, and hyphens but not dots or only digits.
Other types (such as Linux) of instances: the name should be a combination of 2 to 60 characters, supporting multiple dots. A string between two dots can contain letters, digits, and hyphens.
                     * @param _hostName Server name
`HostName` cannot start or end with a dot or hyphen and cannot contain consecutive dots or hyphens.
Windows instance: the name can contain 2–15 letters, digits, and hyphens but not dots or only digits.
Other types (such as Linux) of instances: the name should be a combination of 2 to 60 characters, supporting multiple dots. A string between two dots can contain letters, digits, and hyphens.
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
                     * 获取The string used to ensure the idempotency of the request. Currently, it is a reserved parameter; therefore, do not use it.
                     * @return ClientToken The string used to ensure the idempotency of the request. Currently, it is a reserved parameter; therefore, do not use it.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置The string used to ensure the idempotency of the request. Currently, it is a reserved parameter; therefore, do not use it.
                     * @param _clientToken The string used to ensure the idempotency of the request. Currently, it is a reserved parameter; therefore, do not use it.
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
                     * 获取Enhanced services. You can use this parameter to specify whether to enable services such as Cloud Security and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Cloud Security will be enabled for public images by default.
                     * @return EnhancedService Enhanced services. You can use this parameter to specify whether to enable services such as Cloud Security and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Cloud Security will be enabled for public images by default.
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置Enhanced services. You can use this parameter to specify whether to enable services such as Cloud Security and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Cloud Security will be enabled for public images by default.
                     * @param _enhancedService Enhanced services. You can use this parameter to specify whether to enable services such as Cloud Security and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Cloud Security will be enabled for public images by default.
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
                     * 获取Tag list
                     * @return TagSpecification Tag list
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置Tag list
                     * @param _tagSpecification Tag list
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
                     * 获取The user data provided to the instance, which needs to be Base64-encoded with a maximum size of 16 KB
                     * @return UserData The user data provided to the instance, which needs to be Base64-encoded with a maximum size of 16 KB
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置The user data provided to the instance, which needs to be Base64-encoded with a maximum size of 16 KB
                     * @param _userData The user data provided to the instance, which needs to be Base64-encoded with a maximum size of 16 KB
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
                     * 获取Model. If you don't specify this parameter or specify it as null, the default value under the corresponding module will be used.
                     * @return InstanceType Model. If you don't specify this parameter or specify it as null, the default value under the corresponding module will be used.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Model. If you don't specify this parameter or specify it as null, the default value under the corresponding module will be used.
                     * @param _instanceType Model. If you don't specify this parameter or specify it as null, the default value under the corresponding module will be used.
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
                     * 获取Data disk size in GB. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used
                     * @return DataDiskSize Data disk size in GB. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used
                     * 
                     */
                    int64_t GetDataDiskSize() const;

                    /**
                     * 设置Data disk size in GB. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used
                     * @param _dataDiskSize Data disk size in GB. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used
                     * 
                     */
                    void SetDataDiskSize(const int64_t& _dataDiskSize);

                    /**
                     * 判断参数 DataDiskSize 是否已赋值
                     * @return DataDiskSize 是否已赋值
                     * 
                     */
                    bool DataDiskSizeHasBeenSet() const;

                    /**
                     * 获取Security group of the instance, which can be obtained from the `sgId` field in the returned value of the `DescribeSecurityGroups` API. If this parameter is not specified, the default security group will be bound by default.
                     * @return SecurityGroupIds Security group of the instance, which can be obtained from the `sgId` field in the returned value of the `DescribeSecurityGroups` API. If this parameter is not specified, the default security group will be bound by default.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group of the instance, which can be obtained from the `sgId` field in the returned value of the `DescribeSecurityGroups` API. If this parameter is not specified, the default security group will be bound by default.
                     * @param _securityGroupIds Security group of the instance, which can be obtained from the `sgId` field in the returned value of the `DescribeSecurityGroups` API. If this parameter is not specified, the default security group will be bound by default.
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
                     * 获取System disk size in GB. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used
                     * @return SystemDiskSize System disk size in GB. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used
                     * 
                     */
                    uint64_t GetSystemDiskSize() const;

                    /**
                     * 设置System disk size in GB. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used
                     * @param _systemDiskSize System disk size in GB. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used
                     * 
                     */
                    void SetSystemDiskSize(const uint64_t& _systemDiskSize);

                    /**
                     * 判断参数 SystemDiskSize 是否已赋值
                     * @return SystemDiskSize 是否已赋值
                     * 
                     */
                    bool SystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取Public network inbound bandwidth cap in Mbps.
1. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used.
2. If you don't specify this parameter or specify it as `0` without specifying the module, the value of `InternetMaxBandwidthOut` will be used
                     * @return InternetMaxBandwidthIn Public network inbound bandwidth cap in Mbps.
1. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used.
2. If you don't specify this parameter or specify it as `0` without specifying the module, the value of `InternetMaxBandwidthOut` will be used
                     * 
                     */
                    int64_t GetInternetMaxBandwidthIn() const;

                    /**
                     * 设置Public network inbound bandwidth cap in Mbps.
1. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used.
2. If you don't specify this parameter or specify it as `0` without specifying the module, the value of `InternetMaxBandwidthOut` will be used
                     * @param _internetMaxBandwidthIn Public network inbound bandwidth cap in Mbps.
1. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used.
2. If you don't specify this parameter or specify it as `0` without specifying the module, the value of `InternetMaxBandwidthOut` will be used
                     * 
                     */
                    void SetInternetMaxBandwidthIn(const int64_t& _internetMaxBandwidthIn);

                    /**
                     * 判断参数 InternetMaxBandwidthIn 是否已赋值
                     * @return InternetMaxBandwidthIn 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthInHasBeenSet() const;

                    /**
                     * 获取Instance billing type. Valid values:
0: postpaid by resource usage, where the daily peak usage of the CPU, memory, and disk will be calculated. This billing mode applies only to non-GNR models;
1: hourly postpaid at the unit price of xx USD/instance/hour. This billing mode applies only to GNR models. To enable it, submit a ticket for application;
2: monthly postpaid at the unit price of xx USD/instance/month. This billing mode applies only to GNR models;
If this field is left empty, `0` will be selected by default for non-GNR models, and `2` will be selected by default for GNR models.
                     * @return InstanceChargeType Instance billing type. Valid values:
0: postpaid by resource usage, where the daily peak usage of the CPU, memory, and disk will be calculated. This billing mode applies only to non-GNR models;
1: hourly postpaid at the unit price of xx USD/instance/hour. This billing mode applies only to GNR models. To enable it, submit a ticket for application;
2: monthly postpaid at the unit price of xx USD/instance/month. This billing mode applies only to GNR models;
If this field is left empty, `0` will be selected by default for non-GNR models, and `2` will be selected by default for GNR models.
                     * 
                     */
                    int64_t GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing type. Valid values:
0: postpaid by resource usage, where the daily peak usage of the CPU, memory, and disk will be calculated. This billing mode applies only to non-GNR models;
1: hourly postpaid at the unit price of xx USD/instance/hour. This billing mode applies only to GNR models. To enable it, submit a ticket for application;
2: monthly postpaid at the unit price of xx USD/instance/month. This billing mode applies only to GNR models;
If this field is left empty, `0` will be selected by default for non-GNR models, and `2` will be selected by default for GNR models.
                     * @param _instanceChargeType Instance billing type. Valid values:
0: postpaid by resource usage, where the daily peak usage of the CPU, memory, and disk will be calculated. This billing mode applies only to non-GNR models;
1: hourly postpaid at the unit price of xx USD/instance/hour. This billing mode applies only to GNR models. To enable it, submit a ticket for application;
2: monthly postpaid at the unit price of xx USD/instance/month. This billing mode applies only to GNR models;
If this field is left empty, `0` will be selected by default for non-GNR models, and `2` will be selected by default for GNR models.
                     * 
                     */
                    void SetInstanceChargeType(const int64_t& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Key pair.
                     * @return KeyIds Key pair.
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置Key pair.
                     * @param _keyIds Key pair.
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                    /**
                     * 获取Whether to keep the original settings for the image. You cannot specify this parameter if `Password` or `KeyIds.N` is specified. You can specify this parameter as `TRUE` only when you create an instance by using a custom image, shared image, or image imported from an external resource. Valid values:
TRUE: yes
FALSE: no

Default value: FALSE.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return KeepImageLogin Whether to keep the original settings for the image. You cannot specify this parameter if `Password` or `KeyIds.N` is specified. You can specify this parameter as `TRUE` only when you create an instance by using a custom image, shared image, or image imported from an external resource. Valid values:
TRUE: yes
FALSE: no

Default value: FALSE.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKeepImageLogin() const;

                    /**
                     * 设置Whether to keep the original settings for the image. You cannot specify this parameter if `Password` or `KeyIds.N` is specified. You can specify this parameter as `TRUE` only when you create an instance by using a custom image, shared image, or image imported from an external resource. Valid values:
TRUE: yes
FALSE: no

Default value: FALSE.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _keepImageLogin Whether to keep the original settings for the image. You cannot specify this parameter if `Password` or `KeyIds.N` is specified. You can specify this parameter as `TRUE` only when you create an instance by using a custom image, shared image, or image imported from an external resource. Valid values:
TRUE: yes
FALSE: no

Default value: FALSE.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKeepImageLogin(const std::string& _keepImageLogin);

                    /**
                     * 判断参数 KeepImageLogin 是否已赋值
                     * @return KeepImageLogin 是否已赋值
                     * 
                     */
                    bool KeepImageLoginHasBeenSet() const;

                    /**
                     * 获取System disk information.
                     * @return SystemDisk System disk information.
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置System disk information.
                     * @param _systemDisk System disk information.
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
                     * 获取Data disk information.
                     * @return DataDisks Data disk information.
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置Data disk information.
                     * @param _dataDisks Data disk information.
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                private:

                    /**
                     * List of AZs in which to create instances, the number of instances to be created, and the ISPs. You can create up to 100 instances in a region at a time.
                     */
                    std::vector<ZoneInstanceCountISP> m_zoneInstanceCountISPSet;
                    bool m_zoneInstanceCountISPSetHasBeenSet;

                    /**
                     * Instance login password. Different OS types have different limits on password complexity as detailed below:
The password of a Linux instance must contain 8–30 characters in at least two of the following character types: letters, digits, and special symbols [( ) ` ~ ! @ # $ % ^ & - + = | { } [ ] : ; ' , . ? / ]. The password of a Windows instance must contain 12–30 characters in at least three of the following character types: letters, digits, and special symbols [( ) ` ~ ! @ # $ % ^ & - + = | { } [ ] : ; ' , . ? /].
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Public network outbound bandwidth cap in Mbps.
1. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used.
2. If you don't specify this parameter or specify it as `0` without specifying the module, the value of `InternetMaxBandwidthIn` will be used
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Module ID. If you don't specify this parameter, you must specify the `ImageId`, `InstanceType`, `DataDiskSize`, and `InternetMaxBandwidthOut` parameters
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * Image ID. If you don't specify this parameter or specify it as null, the default value under the corresponding module will be used.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Instance display name.
If this parameter is not specified, `Not named` will be displayed by default.
If you purchase multiple instances and specify the pattern string `{R:x}`, display names will be generated based on `[x, x+n-1]`, where `n` is the number of the purchased instances. For example, if you specify `server\_{R:3}` and purchase 1 instance, the display name will be `server\_3`, and if you purchase 2 instances, the display names will be `server\_3` and `server\_4` respectively.
You can specify multiple pattern strings `{R:x}`.
If you purchase multiple instances and don't specify the pattern string, the instance display names will be suffixed with 1, 2...n, where `n` indicates the number of the purchased instances. For example, if you specify `server_` and purchase 2 instances, the instance display names will be `server\_1` and `server\_2` respectively.
If the purchased instances belong to different regions or ISPs, the above rules will apply to each region and ISP independently.
It can contain up to 60 characters (including pattern string).
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Server name
`HostName` cannot start or end with a dot or hyphen and cannot contain consecutive dots or hyphens.
Windows instance: the name can contain 2–15 letters, digits, and hyphens but not dots or only digits.
Other types (such as Linux) of instances: the name should be a combination of 2 to 60 characters, supporting multiple dots. A string between two dots can contain letters, digits, and hyphens.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * The string used to ensure the idempotency of the request. Currently, it is a reserved parameter; therefore, do not use it.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Enhanced services. You can use this parameter to specify whether to enable services such as Cloud Security and Cloud Monitor. If this parameter is not specified, Cloud Monitor and Cloud Security will be enabled for public images by default.
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * Tag list
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * The user data provided to the instance, which needs to be Base64-encoded with a maximum size of 16 KB
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * Model. If you don't specify this parameter or specify it as null, the default value under the corresponding module will be used.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Data disk size in GB. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used
                     */
                    int64_t m_dataDiskSize;
                    bool m_dataDiskSizeHasBeenSet;

                    /**
                     * Security group of the instance, which can be obtained from the `sgId` field in the returned value of the `DescribeSecurityGroups` API. If this parameter is not specified, the default security group will be bound by default.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * System disk size in GB. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used
                     */
                    uint64_t m_systemDiskSize;
                    bool m_systemDiskSizeHasBeenSet;

                    /**
                     * Public network inbound bandwidth cap in Mbps.
1. If you don't specify this parameter or specify it as `0`, the default value under the corresponding module will be used.
2. If you don't specify this parameter or specify it as `0` without specifying the module, the value of `InternetMaxBandwidthOut` will be used
                     */
                    int64_t m_internetMaxBandwidthIn;
                    bool m_internetMaxBandwidthInHasBeenSet;

                    /**
                     * Instance billing type. Valid values:
0: postpaid by resource usage, where the daily peak usage of the CPU, memory, and disk will be calculated. This billing mode applies only to non-GNR models;
1: hourly postpaid at the unit price of xx USD/instance/hour. This billing mode applies only to GNR models. To enable it, submit a ticket for application;
2: monthly postpaid at the unit price of xx USD/instance/month. This billing mode applies only to GNR models;
If this field is left empty, `0` will be selected by default for non-GNR models, and `2` will be selected by default for GNR models.
                     */
                    int64_t m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Key pair.
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                    /**
                     * Whether to keep the original settings for the image. You cannot specify this parameter if `Password` or `KeyIds.N` is specified. You can specify this parameter as `TRUE` only when you create an instance by using a custom image, shared image, or image imported from an external resource. Valid values:
TRUE: yes
FALSE: no

Default value: FALSE.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keepImageLogin;
                    bool m_keepImageLoginHasBeenSet;

                    /**
                     * System disk information.
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Data disk information.
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_RUNINSTANCESREQUEST_H_
