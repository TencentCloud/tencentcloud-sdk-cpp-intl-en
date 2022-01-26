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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_COPYFLEETREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_COPYFLEETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/InboundPermission.h>
#include <tencentcloud/gse/v20191112/model/ResourceCreationLimitPolicy.h>
#include <tencentcloud/gse/v20191112/model/RuntimeConfiguration.h>
#include <tencentcloud/gse/v20191112/model/Tag.h>
#include <tencentcloud/gse/v20191112/model/DiskInfo.h>
#include <tencentcloud/gse/v20191112/model/CcnInfo.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * CopyFleet request structure.
                */
                class CopyFleetRequest : public AbstractModel
                {
                public:
                    CopyFleetRequest();
                    ~CopyFleetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Server fleet ID
                     * @return FleetId Server fleet ID
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置Server fleet ID
                     * @param FleetId Server fleet ID
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取Replica number. It should a value between 1 to the number of the remaining quota. It can be obtained through [Obtaining User Quota](https://intl.cloud.tencent.com/document/product/1165/48732?from_cn_redirect=1).
                     * @return CopyNumber Replica number. It should a value between 1 to the number of the remaining quota. It can be obtained through [Obtaining User Quota](https://intl.cloud.tencent.com/document/product/1165/48732?from_cn_redirect=1).
                     */
                    int64_t GetCopyNumber() const;

                    /**
                     * 设置Replica number. It should a value between 1 to the number of the remaining quota. It can be obtained through [Obtaining User Quota](https://intl.cloud.tencent.com/document/product/1165/48732?from_cn_redirect=1).
                     * @param CopyNumber Replica number. It should a value between 1 to the number of the remaining quota. It can be obtained through [Obtaining User Quota](https://intl.cloud.tencent.com/document/product/1165/48732?from_cn_redirect=1).
                     */
                    void SetCopyNumber(const int64_t& _copyNumber);

                    /**
                     * 判断参数 CopyNumber 是否已赋值
                     * @return CopyNumber 是否已赋值
                     */
                    bool CopyNumberHasBeenSet() const;

                    /**
                     * 获取Asset package ID
                     * @return AssetId Asset package ID
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Asset package ID
                     * @param AssetId Asset package ID
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取Description. The length is 0-100 characters.
                     * @return Description Description. The length is 0-100 characters.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description. The length is 0-100 characters.
                     * @param Description Description. The length is 0-100 characters.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Network configuration
                     * @return InboundPermissions Network configuration
                     */
                    std::vector<InboundPermission> GetInboundPermissions() const;

                    /**
                     * 设置Network configuration
                     * @param InboundPermissions Network configuration
                     */
                    void SetInboundPermissions(const std::vector<InboundPermission>& _inboundPermissions);

                    /**
                     * 判断参数 InboundPermissions 是否已赋值
                     * @return InboundPermissions 是否已赋值
                     */
                    bool InboundPermissionsHasBeenSet() const;

                    /**
                     * 获取Server type. It can be obtained through [Obtaining Server Instance Type List](https://intl.cloud.tencent.com/document/product/1165/48732?from_cn_redirect=1).
                     * @return InstanceType Server type. It can be obtained through [Obtaining Server Instance Type List](https://intl.cloud.tencent.com/document/product/1165/48732?from_cn_redirect=1).
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Server type. It can be obtained through [Obtaining Server Instance Type List](https://intl.cloud.tencent.com/document/product/1165/48732?from_cn_redirect=1).
                     * @param InstanceType Server type. It can be obtained through [Obtaining Server Instance Type List](https://intl.cloud.tencent.com/document/product/1165/48732?from_cn_redirect=1).
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Server fleet type, which only supports “ON_DEMAND” type now.
                     * @return FleetType Server fleet type, which only supports “ON_DEMAND” type now.
                     */
                    std::string GetFleetType() const;

                    /**
                     * 设置Server fleet type, which only supports “ON_DEMAND” type now.
                     * @param FleetType Server fleet type, which only supports “ON_DEMAND” type now.
                     */
                    void SetFleetType(const std::string& _fleetType);

                    /**
                     * 判断参数 FleetType 是否已赋值
                     * @return FleetType 是否已赋值
                     */
                    bool FleetTypeHasBeenSet() const;

                    /**
                     * 获取Server fleet name. The length is 1-50 characters.
                     * @return Name Server fleet name. The length is 1-50 characters.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Server fleet name. The length is 1-50 characters.
                     * @param Name Server fleet name. The length is 1-50 characters.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Protection policy. Valid values: NoProtection·(no protection), FullProtection (full protection), TimeLimitProtection (time-limited protection)
                     * @return NewGameServerSessionProtectionPolicy Protection policy. Valid values: NoProtection·(no protection), FullProtection (full protection), TimeLimitProtection (time-limited protection)
                     */
                    std::string GetNewGameServerSessionProtectionPolicy() const;

                    /**
                     * 设置Protection policy. Valid values: NoProtection·(no protection), FullProtection (full protection), TimeLimitProtection (time-limited protection)
                     * @param NewGameServerSessionProtectionPolicy Protection policy. Valid values: NoProtection·(no protection), FullProtection (full protection), TimeLimitProtection (time-limited protection)
                     */
                    void SetNewGameServerSessionProtectionPolicy(const std::string& _newGameServerSessionProtectionPolicy);

                    /**
                     * 判断参数 NewGameServerSessionProtectionPolicy 是否已赋值
                     * @return NewGameServerSessionProtectionPolicy 是否已赋值
                     */
                    bool NewGameServerSessionProtectionPolicyHasBeenSet() const;

                    /**
                     * 获取Limit policy of resource creation
                     * @return ResourceCreationLimitPolicy Limit policy of resource creation
                     */
                    ResourceCreationLimitPolicy GetResourceCreationLimitPolicy() const;

                    /**
                     * 设置Limit policy of resource creation
                     * @param ResourceCreationLimitPolicy Limit policy of resource creation
                     */
                    void SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& _resourceCreationLimitPolicy);

                    /**
                     * 判断参数 ResourceCreationLimitPolicy 是否已赋值
                     * @return ResourceCreationLimitPolicy 是否已赋值
                     */
                    bool ResourceCreationLimitPolicyHasBeenSet() const;

                    /**
                     * 获取Progress configuration
                     * @return RuntimeConfiguration Progress configuration
                     */
                    RuntimeConfiguration GetRuntimeConfiguration() const;

                    /**
                     * 设置Progress configuration
                     * @param RuntimeConfiguration Progress configuration
                     */
                    void SetRuntimeConfiguration(const RuntimeConfiguration& _runtimeConfiguration);

                    /**
                     * 判断参数 RuntimeConfiguration 是否已赋值
                     * @return RuntimeConfiguration 是否已赋值
                     */
                    bool RuntimeConfigurationHasBeenSet() const;

                    /**
                     * 获取Timeout period of time-limited protection. Value range: 5-1440 minutes. Default value: 60 minutes. This parameter is valid only when NewGameSessionProtectionPolicy is set as TimeLimitProtection.
                     * @return GameServerSessionProtectionTimeLimit Timeout period of time-limited protection. Value range: 5-1440 minutes. Default value: 60 minutes. This parameter is valid only when NewGameSessionProtectionPolicy is set as TimeLimitProtection.
                     */
                    int64_t GetGameServerSessionProtectionTimeLimit() const;

                    /**
                     * 设置Timeout period of time-limited protection. Value range: 5-1440 minutes. Default value: 60 minutes. This parameter is valid only when NewGameSessionProtectionPolicy is set as TimeLimitProtection.
                     * @param GameServerSessionProtectionTimeLimit Timeout period of time-limited protection. Value range: 5-1440 minutes. Default value: 60 minutes. This parameter is valid only when NewGameSessionProtectionPolicy is set as TimeLimitProtection.
                     */
                    void SetGameServerSessionProtectionTimeLimit(const int64_t& _gameServerSessionProtectionTimeLimit);

                    /**
                     * 判断参数 GameServerSessionProtectionTimeLimit 是否已赋值
                     * @return GameServerSessionProtectionTimeLimit 是否已赋值
                     */
                    bool GameServerSessionProtectionTimeLimitHasBeenSet() const;

                    /**
                     * 获取Whether to select scaling. Valid values: SCALING_SELECTED, SCALING_UNSELECTED. Default value: SCALING_UNSELECTED.
                     * @return SelectedScalingType Whether to select scaling. Valid values: SCALING_SELECTED, SCALING_UNSELECTED. Default value: SCALING_UNSELECTED.
                     */
                    std::string GetSelectedScalingType() const;

                    /**
                     * 设置Whether to select scaling. Valid values: SCALING_SELECTED, SCALING_UNSELECTED. Default value: SCALING_UNSELECTED.
                     * @param SelectedScalingType Whether to select scaling. Valid values: SCALING_SELECTED, SCALING_UNSELECTED. Default value: SCALING_UNSELECTED.
                     */
                    void SetSelectedScalingType(const std::string& _selectedScalingType);

                    /**
                     * 判断参数 SelectedScalingType 是否已赋值
                     * @return SelectedScalingType 是否已赋值
                     */
                    bool SelectedScalingTypeHasBeenSet() const;

                    /**
                     * 获取Whether to associate the fleet with a CCN instance: CCN_SELECTED_BEFORE_CREATE (associate before creation), CCN_SELECTED_AFTER_CREATE (associated after creation), or CCN_UNSELECTED (do not associate); CCN_UNSELECTED by default
                     * @return SelectedCcnType Whether to associate the fleet with a CCN instance: CCN_SELECTED_BEFORE_CREATE (associate before creation), CCN_SELECTED_AFTER_CREATE (associated after creation), or CCN_UNSELECTED (do not associate); CCN_UNSELECTED by default
                     */
                    std::string GetSelectedCcnType() const;

                    /**
                     * 设置Whether to associate the fleet with a CCN instance: CCN_SELECTED_BEFORE_CREATE (associate before creation), CCN_SELECTED_AFTER_CREATE (associated after creation), or CCN_UNSELECTED (do not associate); CCN_UNSELECTED by default
                     * @param SelectedCcnType Whether to associate the fleet with a CCN instance: CCN_SELECTED_BEFORE_CREATE (associate before creation), CCN_SELECTED_AFTER_CREATE (associated after creation), or CCN_UNSELECTED (do not associate); CCN_UNSELECTED by default
                     */
                    void SetSelectedCcnType(const std::string& _selectedCcnType);

                    /**
                     * 判断参数 SelectedCcnType 是否已赋值
                     * @return SelectedCcnType 是否已赋值
                     */
                    bool SelectedCcnTypeHasBeenSet() const;

                    /**
                     * 获取Tag list. Up to 50 tags.
                     * @return Tags Tag list. Up to 50 tags.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list. Up to 50 tags.
                     * @param Tags Tag list. Up to 50 tags.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取System disk. It can be a SSD (CLOUD_SSD) with 100-500 GB capacity or a Premium Cloud Storage disk (CLOUD_PREMIUM) with 50-500 GB capacity. The increment is 1.
                     * @return SystemDiskInfo System disk. It can be a SSD (CLOUD_SSD) with 100-500 GB capacity or a Premium Cloud Storage disk (CLOUD_PREMIUM) with 50-500 GB capacity. The increment is 1.
                     */
                    DiskInfo GetSystemDiskInfo() const;

                    /**
                     * 设置System disk. It can be a SSD (CLOUD_SSD) with 100-500 GB capacity or a Premium Cloud Storage disk (CLOUD_PREMIUM) with 50-500 GB capacity. The increment is 1.
                     * @param SystemDiskInfo System disk. It can be a SSD (CLOUD_SSD) with 100-500 GB capacity or a Premium Cloud Storage disk (CLOUD_PREMIUM) with 50-500 GB capacity. The increment is 1.
                     */
                    void SetSystemDiskInfo(const DiskInfo& _systemDiskInfo);

                    /**
                     * 判断参数 SystemDiskInfo 是否已赋值
                     * @return SystemDiskInfo 是否已赋值
                     */
                    bool SystemDiskInfoHasBeenSet() const;

                    /**
                     * 获取Data disk. It can be SSD disks (CLOUD_SSD) with 100-32000 GB capacity or Premium Cloud Storage disks (CLOUD_PREMIUM) with 10-32000 GB capacity. The increment is 10. 
                     * @return DataDiskInfo Data disk. It can be SSD disks (CLOUD_SSD) with 100-32000 GB capacity or Premium Cloud Storage disks (CLOUD_PREMIUM) with 10-32000 GB capacity. The increment is 10. 
                     */
                    std::vector<DiskInfo> GetDataDiskInfo() const;

                    /**
                     * 设置Data disk. It can be SSD disks (CLOUD_SSD) with 100-32000 GB capacity or Premium Cloud Storage disks (CLOUD_PREMIUM) with 10-32000 GB capacity. The increment is 10. 
                     * @param DataDiskInfo Data disk. It can be SSD disks (CLOUD_SSD) with 100-32000 GB capacity or Premium Cloud Storage disks (CLOUD_PREMIUM) with 10-32000 GB capacity. The increment is 10. 
                     */
                    void SetDataDiskInfo(const std::vector<DiskInfo>& _dataDiskInfo);

                    /**
                     * 判断参数 DataDiskInfo 是否已赋值
                     * @return DataDiskInfo 是否已赋值
                     */
                    bool DataDiskInfoHasBeenSet() const;

                    /**
                     * 获取Whether to select to replicate the timer policy: TIMER_SELECTED or TIMER_UNSELECTED. The default value is TIMER_UNSELECTED.
                     * @return SelectedTimerType Whether to select to replicate the timer policy: TIMER_SELECTED or TIMER_UNSELECTED. The default value is TIMER_UNSELECTED.
                     */
                    std::string GetSelectedTimerType() const;

                    /**
                     * 设置Whether to select to replicate the timer policy: TIMER_SELECTED or TIMER_UNSELECTED. The default value is TIMER_UNSELECTED.
                     * @param SelectedTimerType Whether to select to replicate the timer policy: TIMER_SELECTED or TIMER_UNSELECTED. The default value is TIMER_UNSELECTED.
                     */
                    void SetSelectedTimerType(const std::string& _selectedTimerType);

                    /**
                     * 判断参数 SelectedTimerType 是否已赋值
                     * @return SelectedTimerType 是否已赋值
                     */
                    bool SelectedTimerTypeHasBeenSet() const;

                    /**
                     * 获取Information of the CCN instance, including the owner account and the instance ID.
                     * @return CcnInfos Information of the CCN instance, including the owner account and the instance ID.
                     */
                    std::vector<CcnInfo> GetCcnInfos() const;

                    /**
                     * 设置Information of the CCN instance, including the owner account and the instance ID.
                     * @param CcnInfos Information of the CCN instance, including the owner account and the instance ID.
                     */
                    void SetCcnInfos(const std::vector<CcnInfo>& _ccnInfos);

                    /**
                     * 判断参数 CcnInfos 是否已赋值
                     * @return CcnInfos 是否已赋值
                     */
                    bool CcnInfosHasBeenSet() const;

                    /**
                     * 获取Maximum outbound public network bandwidth of the server fleet. Value range: 1 - 200 Mbps. Default value: 100 Mbps.
                     * @return InternetMaxBandwidthOut Maximum outbound public network bandwidth of the server fleet. Value range: 1 - 200 Mbps. Default value: 100 Mbps.
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Maximum outbound public network bandwidth of the server fleet. Value range: 1 - 200 Mbps. Default value: 100 Mbps.
                     * @param InternetMaxBandwidthOut Maximum outbound public network bandwidth of the server fleet. Value range: 1 - 200 Mbps. Default value: 100 Mbps.
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                private:

                    /**
                     * Server fleet ID
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * Replica number. It should a value between 1 to the number of the remaining quota. It can be obtained through [Obtaining User Quota](https://intl.cloud.tencent.com/document/product/1165/48732?from_cn_redirect=1).
                     */
                    int64_t m_copyNumber;
                    bool m_copyNumberHasBeenSet;

                    /**
                     * Asset package ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Description. The length is 0-100 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Network configuration
                     */
                    std::vector<InboundPermission> m_inboundPermissions;
                    bool m_inboundPermissionsHasBeenSet;

                    /**
                     * Server type. It can be obtained through [Obtaining Server Instance Type List](https://intl.cloud.tencent.com/document/product/1165/48732?from_cn_redirect=1).
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Server fleet type, which only supports “ON_DEMAND” type now.
                     */
                    std::string m_fleetType;
                    bool m_fleetTypeHasBeenSet;

                    /**
                     * Server fleet name. The length is 1-50 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Protection policy. Valid values: NoProtection·(no protection), FullProtection (full protection), TimeLimitProtection (time-limited protection)
                     */
                    std::string m_newGameServerSessionProtectionPolicy;
                    bool m_newGameServerSessionProtectionPolicyHasBeenSet;

                    /**
                     * Limit policy of resource creation
                     */
                    ResourceCreationLimitPolicy m_resourceCreationLimitPolicy;
                    bool m_resourceCreationLimitPolicyHasBeenSet;

                    /**
                     * Progress configuration
                     */
                    RuntimeConfiguration m_runtimeConfiguration;
                    bool m_runtimeConfigurationHasBeenSet;

                    /**
                     * Timeout period of time-limited protection. Value range: 5-1440 minutes. Default value: 60 minutes. This parameter is valid only when NewGameSessionProtectionPolicy is set as TimeLimitProtection.
                     */
                    int64_t m_gameServerSessionProtectionTimeLimit;
                    bool m_gameServerSessionProtectionTimeLimitHasBeenSet;

                    /**
                     * Whether to select scaling. Valid values: SCALING_SELECTED, SCALING_UNSELECTED. Default value: SCALING_UNSELECTED.
                     */
                    std::string m_selectedScalingType;
                    bool m_selectedScalingTypeHasBeenSet;

                    /**
                     * Whether to associate the fleet with a CCN instance: CCN_SELECTED_BEFORE_CREATE (associate before creation), CCN_SELECTED_AFTER_CREATE (associated after creation), or CCN_UNSELECTED (do not associate); CCN_UNSELECTED by default
                     */
                    std::string m_selectedCcnType;
                    bool m_selectedCcnTypeHasBeenSet;

                    /**
                     * Tag list. Up to 50 tags.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * System disk. It can be a SSD (CLOUD_SSD) with 100-500 GB capacity or a Premium Cloud Storage disk (CLOUD_PREMIUM) with 50-500 GB capacity. The increment is 1.
                     */
                    DiskInfo m_systemDiskInfo;
                    bool m_systemDiskInfoHasBeenSet;

                    /**
                     * Data disk. It can be SSD disks (CLOUD_SSD) with 100-32000 GB capacity or Premium Cloud Storage disks (CLOUD_PREMIUM) with 10-32000 GB capacity. The increment is 10. 
                     */
                    std::vector<DiskInfo> m_dataDiskInfo;
                    bool m_dataDiskInfoHasBeenSet;

                    /**
                     * Whether to select to replicate the timer policy: TIMER_SELECTED or TIMER_UNSELECTED. The default value is TIMER_UNSELECTED.
                     */
                    std::string m_selectedTimerType;
                    bool m_selectedTimerTypeHasBeenSet;

                    /**
                     * Information of the CCN instance, including the owner account and the instance ID.
                     */
                    std::vector<CcnInfo> m_ccnInfos;
                    bool m_ccnInfosHasBeenSet;

                    /**
                     * Maximum outbound public network bandwidth of the server fleet. Value range: 1 - 200 Mbps. Default value: 100 Mbps.
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_COPYFLEETREQUEST_H_
