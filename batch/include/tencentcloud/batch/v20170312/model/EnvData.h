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
                     * 获取CVM instance type. It cannot be specified together with `InstanceTypes` or `InstanceTypeOptions`.
                     * @return InstanceType CVM instance type. It cannot be specified together with `InstanceTypes` or `InstanceTypeOptions`.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置CVM instance type. It cannot be specified together with `InstanceTypes` or `InstanceTypeOptions`.
                     * @param _instanceType CVM instance type. It cannot be specified together with `InstanceTypes` or `InstanceTypeOptions`.
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
                     * 获取CVM image ID
                     * @return ImageId CVM image ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置CVM image ID
                     * @param _imageId CVM image ID
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
                     * 获取System disk configuration of the instance
                     * @return SystemDisk System disk configuration of the instance
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置System disk configuration of the instance
                     * @param _systemDisk System disk configuration of the instance
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
                     * 获取Data disk configuration of the instance
                     * @return DataDisks Data disk configuration of the instance
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置Data disk configuration of the instance
                     * @param _dataDisks Data disk configuration of the instance
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
                     * 获取Information of the VPC configuration. It cannot be specified together with `Zones` and `VirtualPrivateClouds`.
                     * @return VirtualPrivateCloud Information of the VPC configuration. It cannot be specified together with `Zones` and `VirtualPrivateClouds`.
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置Information of the VPC configuration. It cannot be specified together with `Zones` and `VirtualPrivateClouds`.
                     * @param _virtualPrivateCloud Information of the VPC configuration. It cannot be specified together with `Zones` and `VirtualPrivateClouds`.
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
                     * 获取Public network bandwidth configuration
                     * @return InternetAccessible Public network bandwidth configuration
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置Public network bandwidth configuration
                     * @param _internetAccessible Public network bandwidth configuration
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
                     * 获取CVM instance display name
                     * @return InstanceName CVM instance display name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置CVM instance display name
                     * @param _instanceName CVM instance display name
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
                     * 获取Instance login settings
                     * @return LoginSettings Instance login settings
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置Instance login settings
                     * @param _loginSettings Instance login settings
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
                     * 获取Security groups associated with the instance
                     * @return SecurityGroupIds Security groups associated with the instance
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security groups associated with the instance
                     * @param _securityGroupIds Security groups associated with the instance
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
                     * 获取Whether to activate CWPP agent and Cloud Monitor. CWPP agent and Cloud Monitor are activated by default.
                     * @return EnhancedService Whether to activate CWPP agent and Cloud Monitor. CWPP agent and Cloud Monitor are activated by default.
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置Whether to activate CWPP agent and Cloud Monitor. CWPP agent and Cloud Monitor are activated by default.
                     * @param _enhancedService Whether to activate CWPP agent and Cloud Monitor. CWPP agent and Cloud Monitor are activated by default.
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
                     * 获取CVM instance billing method <br><li>`POSTPAID_BY_HOUR` (default): Hourly-billed pay-as-you-go <br><li>`SPOTPAID`: Spot instance <br>
                     * @return InstanceChargeType CVM instance billing method <br><li>`POSTPAID_BY_HOUR` (default): Hourly-billed pay-as-you-go <br><li>`SPOTPAID`: Spot instance <br>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置CVM instance billing method <br><li>`POSTPAID_BY_HOUR` (default): Hourly-billed pay-as-you-go <br><li>`SPOTPAID`: Spot instance <br>
                     * @param _instanceChargeType CVM instance billing method <br><li>`POSTPAID_BY_HOUR` (default): Hourly-billed pay-as-you-go <br><li>`SPOTPAID`: Spot instance <br>
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
                     * 获取Market-related options for instances, such as parameters related to spot instances.
                     * @return InstanceMarketOptions Market-related options for instances, such as parameters related to spot instances.
                     * 
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置Market-related options for instances, such as parameters related to spot instances.
                     * @param _instanceMarketOptions Market-related options for instances, such as parameters related to spot instances.
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
                     * 获取Types of CVM instances to create (up to 10). The system creates compute nodes of types specified in this list from top to down till the creation is successful. It cannot be specified together with `InstanceType` or `InstanceTypeOptions`. 
                     * @return InstanceTypes Types of CVM instances to create (up to 10). The system creates compute nodes of types specified in this list from top to down till the creation is successful. It cannot be specified together with `InstanceType` or `InstanceTypeOptions`. 
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置Types of CVM instances to create (up to 10). The system creates compute nodes of types specified in this list from top to down till the creation is successful. It cannot be specified together with `InstanceType` or `InstanceTypeOptions`. 
                     * @param _instanceTypes Types of CVM instances to create (up to 10). The system creates compute nodes of types specified in this list from top to down till the creation is successful. It cannot be specified together with `InstanceType` or `InstanceTypeOptions`. 
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
                     * 获取CVM instance model configuration. It cannot be specified together with `InstanceType` or `InstanceTypes`.
                     * @return InstanceTypeOptions CVM instance model configuration. It cannot be specified together with `InstanceType` or `InstanceTypes`.
                     * 
                     */
                    InstanceTypeOptions GetInstanceTypeOptions() const;

                    /**
                     * 设置CVM instance model configuration. It cannot be specified together with `InstanceType` or `InstanceTypes`.
                     * @param _instanceTypeOptions CVM instance model configuration. It cannot be specified together with `InstanceType` or `InstanceTypes`.
                     * 
                     */
                    void SetInstanceTypeOptions(const InstanceTypeOptions& _instanceTypeOptions);

                    /**
                     * 判断参数 InstanceTypeOptions 是否已赋值
                     * @return InstanceTypeOptions 是否已赋值
                     * 
                     */
                    bool InstanceTypeOptionsHasBeenSet() const;

                    /**
                     * 获取List of availability zones. You can create CVM cross AZs in the same region. It cannot be specified together with `VirtualPrivateCloud` or `VirtualPrivateClouds`.
                     * @return Zones List of availability zones. You can create CVM cross AZs in the same region. It cannot be specified together with `VirtualPrivateCloud` or `VirtualPrivateClouds`.
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置List of availability zones. You can create CVM cross AZs in the same region. It cannot be specified together with `VirtualPrivateCloud` or `VirtualPrivateClouds`.
                     * @param _zones List of availability zones. You can create CVM cross AZs in the same region. It cannot be specified together with `VirtualPrivateCloud` or `VirtualPrivateClouds`.
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
                     * 获取List of VPCs (creation of CVM instances across VPCs is supported). It cannot be specified together with `VirtualPrivateCloud` or `Zones`.
                     * @return VirtualPrivateClouds List of VPCs (creation of CVM instances across VPCs is supported). It cannot be specified together with `VirtualPrivateCloud` or `Zones`.
                     * 
                     */
                    std::vector<VirtualPrivateCloud> GetVirtualPrivateClouds() const;

                    /**
                     * 设置List of VPCs (creation of CVM instances across VPCs is supported). It cannot be specified together with `VirtualPrivateCloud` or `Zones`.
                     * @param _virtualPrivateClouds List of VPCs (creation of CVM instances across VPCs is supported). It cannot be specified together with `VirtualPrivateCloud` or `Zones`.
                     * 
                     */
                    void SetVirtualPrivateClouds(const std::vector<VirtualPrivateCloud>& _virtualPrivateClouds);

                    /**
                     * 判断参数 VirtualPrivateClouds 是否已赋值
                     * @return VirtualPrivateClouds 是否已赋值
                     * 
                     */
                    bool VirtualPrivateCloudsHasBeenSet() const;

                private:

                    /**
                     * CVM instance type. It cannot be specified together with `InstanceTypes` or `InstanceTypeOptions`.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * CVM image ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * System disk configuration of the instance
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Data disk configuration of the instance
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * Information of the VPC configuration. It cannot be specified together with `Zones` and `VirtualPrivateClouds`.
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * Public network bandwidth configuration
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
                     * Security groups associated with the instance
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Whether to activate CWPP agent and Cloud Monitor. CWPP agent and Cloud Monitor are activated by default.
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * CVM instance billing method <br><li>`POSTPAID_BY_HOUR` (default): Hourly-billed pay-as-you-go <br><li>`SPOTPAID`: Spot instance <br>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Market-related options for instances, such as parameters related to spot instances.
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * Types of CVM instances to create (up to 10). The system creates compute nodes of types specified in this list from top to down till the creation is successful. It cannot be specified together with `InstanceType` or `InstanceTypeOptions`. 
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * CVM instance model configuration. It cannot be specified together with `InstanceType` or `InstanceTypes`.
                     */
                    InstanceTypeOptions m_instanceTypeOptions;
                    bool m_instanceTypeOptionsHasBeenSet;

                    /**
                     * List of availability zones. You can create CVM cross AZs in the same region. It cannot be specified together with `VirtualPrivateCloud` or `VirtualPrivateClouds`.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * List of VPCs (creation of CVM instances across VPCs is supported). It cannot be specified together with `VirtualPrivateCloud` or `Zones`.
                     */
                    std::vector<VirtualPrivateCloud> m_virtualPrivateClouds;
                    bool m_virtualPrivateCloudsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_ENVDATA_H_
