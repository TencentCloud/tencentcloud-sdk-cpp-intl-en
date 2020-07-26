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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_ENVDATA_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_ENVDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/SystemDisk.h>
#include <tencentcloud/batch/v20170312/model/DataDisk.h>
#include <tencentcloud/batch/v20170312/model/VirtualPrivateCloud.h>
#include <tencentcloud/batch/v20170312/model/InternetAccessible.h>
#include <tencentcloud/batch/v20170312/model/LoginSettings.h>
#include <tencentcloud/batch/v20170312/model/EnhancedService.h>
#include <tencentcloud/batch/v20170312/model/InstanceMarketOptionsRequest.h>
#include <tencentcloud/batch/v20170312/model/InstanceTypeOptions.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Compute environment information
                */
                class EnvData : public AbstractModel
                {
                public:
                    EnvData();
                    ~EnvData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CVM instance type, which cannot be present together with InstanceTypes or InstanceTypeOptions at the same time.
                     * @return InstanceType CVM instance type, which cannot be present together with InstanceTypes or InstanceTypeOptions at the same time.
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置CVM instance type, which cannot be present together with InstanceTypes or InstanceTypeOptions at the same time.
                     * @param InstanceType CVM instance type, which cannot be present together with InstanceTypes or InstanceTypeOptions at the same time.
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取CVM image ID
                     * @return ImageId CVM image ID
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置CVM image ID
                     * @param ImageId CVM image ID
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取Information of the instance's system disk configuration
                     * @return SystemDisk Information of the instance's system disk configuration
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置Information of the instance's system disk configuration
                     * @param SystemDisk Information of the instance's system disk configuration
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取Information of the instance's data disk configuration
                     * @return DataDisks Information of the instance's data disk configuration
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置Information of the instance's data disk configuration
                     * @param DataDisks Information of the instance's data disk configuration
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取Information of the VPC configuration, which cannot be specified together with Zones and VirtualPrivateClouds.
                     * @return VirtualPrivateCloud Information of the VPC configuration, which cannot be specified together with Zones and VirtualPrivateClouds.
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置Information of the VPC configuration, which cannot be specified together with Zones and VirtualPrivateClouds.
                     * @param VirtualPrivateCloud Information of the VPC configuration, which cannot be specified together with Zones and VirtualPrivateClouds.
                     */
                    void SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud);

                    /**
                     * 判断参数 VirtualPrivateCloud 是否已赋值
                     * @return VirtualPrivateCloud 是否已赋值
                     */
                    bool VirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取Information of the public network bandwidth configuration
                     * @return InternetAccessible Information of the public network bandwidth configuration
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置Information of the public network bandwidth configuration
                     * @param InternetAccessible Information of the public network bandwidth configuration
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取CVM instance display name
                     * @return InstanceName CVM instance display name
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置CVM instance display name
                     * @param InstanceName CVM instance display name
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance login settings
                     * @return LoginSettings Instance login settings
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置Instance login settings
                     * @param LoginSettings Instance login settings
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取Security group of the instance
                     * @return SecurityGroupIds Security group of the instance
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group of the instance
                     * @param SecurityGroupIds Security group of the instance
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Enhanced service. This parameter is used to specify whether to enable Cloud Security, Cloud Monitoring and other services. If this parameter is not specified, Cloud Monitoring and Cloud Security will be enabled by default.
                     * @return EnhancedService Enhanced service. This parameter is used to specify whether to enable Cloud Security, Cloud Monitoring and other services. If this parameter is not specified, Cloud Monitoring and Cloud Security will be enabled by default.
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置Enhanced service. This parameter is used to specify whether to enable Cloud Security, Cloud Monitoring and other services. If this parameter is not specified, Cloud Monitoring and Cloud Security will be enabled by default.
                     * @param EnhancedService Enhanced service. This parameter is used to specify whether to enable Cloud Security, Cloud Monitoring and other services. If this parameter is not specified, Cloud Monitoring and Cloud Security will be enabled by default.
                     */
                    void SetEnhancedService(const EnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取CVM instance billing method <br><li>POSTPAID_BY_HOUR: pay-as-you-go by the hour <br><li>SPOTPAID: bidding <br>Default value: POSTPAID_BY_HOUR.
                     * @return InstanceChargeType CVM instance billing method <br><li>POSTPAID_BY_HOUR: pay-as-you-go by the hour <br><li>SPOTPAID: bidding <br>Default value: POSTPAID_BY_HOUR.
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置CVM instance billing method <br><li>POSTPAID_BY_HOUR: pay-as-you-go by the hour <br><li>SPOTPAID: bidding <br>Default value: POSTPAID_BY_HOUR.
                     * @param InstanceChargeType CVM instance billing method <br><li>POSTPAID_BY_HOUR: pay-as-you-go by the hour <br><li>SPOTPAID: bidding <br>Default value: POSTPAID_BY_HOUR.
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Market-related options of the instance, such as parameters related to spot instance
                     * @return InstanceMarketOptions Market-related options of the instance, such as parameters related to spot instance
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置Market-related options of the instance, such as parameters related to spot instance
                     * @param InstanceMarketOptions Market-related options of the instance, such as parameters related to spot instance
                     */
                    void SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions);

                    /**
                     * 判断参数 InstanceMarketOptions 是否已赋值
                     * @return InstanceMarketOptions 是否已赋值
                     */
                    bool InstanceMarketOptionsHasBeenSet() const;

                    /**
                     * 获取List of CVM instance types, which cannot be present together with InstanceType or InstanceTypeOptions at the same time. After the field is specified, the system will try creating compute nodes in the order of the models until successful creation and then stop the traversal process. Up to 10 models are supported.
                     * @return InstanceTypes List of CVM instance types, which cannot be present together with InstanceType or InstanceTypeOptions at the same time. After the field is specified, the system will try creating compute nodes in the order of the models until successful creation and then stop the traversal process. Up to 10 models are supported.
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置List of CVM instance types, which cannot be present together with InstanceType or InstanceTypeOptions at the same time. After the field is specified, the system will try creating compute nodes in the order of the models until successful creation and then stop the traversal process. Up to 10 models are supported.
                     * @param InstanceTypes List of CVM instance types, which cannot be present together with InstanceType or InstanceTypeOptions at the same time. After the field is specified, the system will try creating compute nodes in the order of the models until successful creation and then stop the traversal process. Up to 10 models are supported.
                     */
                    void SetInstanceTypes(const std::vector<std::string>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取CVM instance model configuration, which cannot be present together with InstanceType or InstanceTypes at the same time.
                     * @return InstanceTypeOptions CVM instance model configuration, which cannot be present together with InstanceType or InstanceTypes at the same time.
                     */
                    InstanceTypeOptions GetInstanceTypeOptions() const;

                    /**
                     * 设置CVM instance model configuration, which cannot be present together with InstanceType or InstanceTypes at the same time.
                     * @param InstanceTypeOptions CVM instance model configuration, which cannot be present together with InstanceType or InstanceTypes at the same time.
                     */
                    void SetInstanceTypeOptions(const InstanceTypeOptions& _instanceTypeOptions);

                    /**
                     * 判断参数 InstanceTypeOptions 是否已赋值
                     * @return InstanceTypeOptions 是否已赋值
                     */
                    bool InstanceTypeOptionsHasBeenSet() const;

                    /**
                     * 获取List of availability zones (creation of CVM instances across availability zones is supported), which cannot be specified together with VirtualPrivateCloud or VirtualPrivateClouds at the same time.
                     * @return Zones List of availability zones (creation of CVM instances across availability zones is supported), which cannot be specified together with VirtualPrivateCloud or VirtualPrivateClouds at the same time.
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置List of availability zones (creation of CVM instances across availability zones is supported), which cannot be specified together with VirtualPrivateCloud or VirtualPrivateClouds at the same time.
                     * @param Zones List of availability zones (creation of CVM instances across availability zones is supported), which cannot be specified together with VirtualPrivateCloud or VirtualPrivateClouds at the same time.
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取List of VPCs (creation of CVM instances across VPCs is supported), which cannot be specified together with VirtualPrivateCloud or Zones at the same time.
                     * @return VirtualPrivateClouds List of VPCs (creation of CVM instances across VPCs is supported), which cannot be specified together with VirtualPrivateCloud or Zones at the same time.
                     */
                    std::vector<VirtualPrivateCloud> GetVirtualPrivateClouds() const;

                    /**
                     * 设置List of VPCs (creation of CVM instances across VPCs is supported), which cannot be specified together with VirtualPrivateCloud or Zones at the same time.
                     * @param VirtualPrivateClouds List of VPCs (creation of CVM instances across VPCs is supported), which cannot be specified together with VirtualPrivateCloud or Zones at the same time.
                     */
                    void SetVirtualPrivateClouds(const std::vector<VirtualPrivateCloud>& _virtualPrivateClouds);

                    /**
                     * 判断参数 VirtualPrivateClouds 是否已赋值
                     * @return VirtualPrivateClouds 是否已赋值
                     */
                    bool VirtualPrivateCloudsHasBeenSet() const;

                private:

                    /**
                     * CVM instance type, which cannot be present together with InstanceTypes or InstanceTypeOptions at the same time.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * CVM image ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Information of the instance's system disk configuration
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Information of the instance's data disk configuration
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * Information of the VPC configuration, which cannot be specified together with Zones and VirtualPrivateClouds.
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * Information of the public network bandwidth configuration
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * CVM instance display name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance login settings
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * Security group of the instance
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Enhanced service. This parameter is used to specify whether to enable Cloud Security, Cloud Monitoring and other services. If this parameter is not specified, Cloud Monitoring and Cloud Security will be enabled by default.
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * CVM instance billing method <br><li>POSTPAID_BY_HOUR: pay-as-you-go by the hour <br><li>SPOTPAID: bidding <br>Default value: POSTPAID_BY_HOUR.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Market-related options of the instance, such as parameters related to spot instance
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * List of CVM instance types, which cannot be present together with InstanceType or InstanceTypeOptions at the same time. After the field is specified, the system will try creating compute nodes in the order of the models until successful creation and then stop the traversal process. Up to 10 models are supported.
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * CVM instance model configuration, which cannot be present together with InstanceType or InstanceTypes at the same time.
                     */
                    InstanceTypeOptions m_instanceTypeOptions;
                    bool m_instanceTypeOptionsHasBeenSet;

                    /**
                     * List of availability zones (creation of CVM instances across availability zones is supported), which cannot be specified together with VirtualPrivateCloud or VirtualPrivateClouds at the same time.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * List of VPCs (creation of CVM instances across VPCs is supported), which cannot be specified together with VirtualPrivateCloud or Zones at the same time.
                     */
                    std::vector<VirtualPrivateCloud> m_virtualPrivateClouds;
                    bool m_virtualPrivateCloudsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_ENVDATA_H_
