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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_FLEETATTRIBUTES_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_FLEETATTRIBUTES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/ResourceCreationLimitPolicy.h>
#include <tencentcloud/gse/v20191112/model/Tag.h>
#include <tencentcloud/gse/v20191112/model/DiskInfo.h>
#include <tencentcloud/gse/v20191112/model/RelatedCcnInfo.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * Service deployment attributes
                */
                class FleetAttributes : public AbstractModel
                {
                public:
                    FleetAttributes();
                    ~FleetAttributes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Server fleet creation time
                     * @return CreationTime Server fleet creation time
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置Server fleet creation time
                     * @param CreationTime Server fleet creation time
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取Description
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return Description Description
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param Description Description
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Description of server fleet resource
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return FleetArn Description of server fleet resource
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetFleetArn() const;

                    /**
                     * 设置Description of server fleet resource
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param FleetArn Description of server fleet resource
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetFleetArn(const std::string& _fleetArn);

                    /**
                     * 判断参数 FleetArn 是否已赋值
                     * @return FleetArn 是否已赋值
                     */
                    bool FleetArnHasBeenSet() const;

                    /**
                     * 获取Server fleet ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return FleetId Server fleet ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置Server fleet ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param FleetId Server fleet ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取Server fleet type, which only supports ON_DEMAND now.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return FleetType Server fleet type, which only supports ON_DEMAND now.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetFleetType() const;

                    /**
                     * 设置Server fleet type, which only supports ON_DEMAND now.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param FleetType Server fleet type, which only supports ON_DEMAND now.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetFleetType(const std::string& _fleetType);

                    /**
                     * 判断参数 FleetType 是否已赋值
                     * @return FleetType 是否已赋值
                     */
                    bool FleetTypeHasBeenSet() const;

                    /**
                     * 获取Server type, such as S5.LARGE8
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return InstanceType Server type, such as S5.LARGE8
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Server type, such as S5.LARGE8
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param InstanceType Server type, such as S5.LARGE8
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Server fleet name
                     * @return Name Server fleet name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Server fleet name
                     * @param Name Server fleet name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Game session protection policy
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return NewGameServerSessionProtectionPolicy Game session protection policy
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetNewGameServerSessionProtectionPolicy() const;

                    /**
                     * 设置Game session protection policy
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param NewGameServerSessionProtectionPolicy Game session protection policy
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetNewGameServerSessionProtectionPolicy(const std::string& _newGameServerSessionProtectionPolicy);

                    /**
                     * 判断参数 NewGameServerSessionProtectionPolicy 是否已赋值
                     * @return NewGameServerSessionProtectionPolicy 是否已赋值
                     */
                    bool NewGameServerSessionProtectionPolicyHasBeenSet() const;

                    /**
                     * 获取Operating system type
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return OperatingSystem Operating system type
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetOperatingSystem() const;

                    /**
                     * 设置Operating system type
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param OperatingSystem Operating system type
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetOperatingSystem(const std::string& _operatingSystem);

                    /**
                     * 判断参数 OperatingSystem 是否已赋值
                     * @return OperatingSystem 是否已赋值
                     */
                    bool OperatingSystemHasBeenSet() const;

                    /**
                     * 获取Limit policy of resource creation
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return ResourceCreationLimitPolicy Limit policy of resource creation
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    ResourceCreationLimitPolicy GetResourceCreationLimitPolicy() const;

                    /**
                     * 设置Limit policy of resource creation
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param ResourceCreationLimitPolicy Limit policy of resource creation
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& _resourceCreationLimitPolicy);

                    /**
                     * 判断参数 ResourceCreationLimitPolicy 是否已赋值
                     * @return ResourceCreationLimitPolicy 是否已赋值
                     */
                    bool ResourceCreationLimitPolicyHasBeenSet() const;

                    /**
                     * 获取Statuses: “Create”, “Downloading”, “Verifying”, “Generating”, “Activating”, “Active”, “Exception”, “Deleting”, and “End”.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return Status Statuses: “Create”, “Downloading”, “Verifying”, “Generating”, “Activating”, “Active”, “Exception”, “Deleting”, and “End”.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Statuses: “Create”, “Downloading”, “Verifying”, “Generating”, “Activating”, “Active”, “Exception”, “Deleting”, and “End”.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param Status Statuses: “Create”, “Downloading”, “Verifying”, “Generating”, “Activating”, “Active”, “Exception”, “Deleting”, and “End”.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The status of server fleet when it stopped. If this field is left empty, it means automatic scaling.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return StoppedActions The status of server fleet when it stopped. If this field is left empty, it means automatic scaling.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<std::string> GetStoppedActions() const;

                    /**
                     * 设置The status of server fleet when it stopped. If this field is left empty, it means automatic scaling.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param StoppedActions The status of server fleet when it stopped. If this field is left empty, it means automatic scaling.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetStoppedActions(const std::vector<std::string>& _stoppedActions);

                    /**
                     * 判断参数 StoppedActions 是否已赋值
                     * @return StoppedActions 是否已赋值
                     */
                    bool StoppedActionsHasBeenSet() const;

                    /**
                     * 获取Server fleet termination time
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return TerminationTime Server fleet termination time
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetTerminationTime() const;

                    /**
                     * 设置Server fleet termination time
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param TerminationTime Server fleet termination time
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetTerminationTime(const std::string& _terminationTime);

                    /**
                     * 判断参数 TerminationTime 是否已赋值
                     * @return TerminationTime 是否已赋值
                     */
                    bool TerminationTimeHasBeenSet() const;

                    /**
                     * 获取Timeout period of time-limited protection. Value range: 5-1440 minutes. Default value: 60 minutes.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return GameServerSessionProtectionTimeLimit Timeout period of time-limited protection. Value range: 5-1440 minutes. Default value: 60 minutes.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    uint64_t GetGameServerSessionProtectionTimeLimit() const;

                    /**
                     * 设置Timeout period of time-limited protection. Value range: 5-1440 minutes. Default value: 60 minutes.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param GameServerSessionProtectionTimeLimit Timeout period of time-limited protection. Value range: 5-1440 minutes. Default value: 60 minutes.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetGameServerSessionProtectionTimeLimit(const uint64_t& _gameServerSessionProtectionTimeLimit);

                    /**
                     * 判断参数 GameServerSessionProtectionTimeLimit 是否已赋值
                     * @return GameServerSessionProtectionTimeLimit 是否已赋值
                     */
                    bool GameServerSessionProtectionTimeLimitHasBeenSet() const;

                    /**
                     * 获取Billing status: Unactivated, Activated, Exception, Isolated due to arrears, Terminated, and Unfrozen.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return BillingStatus Billing status: Unactivated, Activated, Exception, Isolated due to arrears, Terminated, and Unfrozen.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetBillingStatus() const;

                    /**
                     * 设置Billing status: Unactivated, Activated, Exception, Isolated due to arrears, Terminated, and Unfrozen.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param BillingStatus Billing status: Unactivated, Activated, Exception, Isolated due to arrears, Terminated, and Unfrozen.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetBillingStatus(const std::string& _billingStatus);

                    /**
                     * 判断参数 BillingStatus 是否已赋值
                     * @return BillingStatus 是否已赋值
                     */
                    bool BillingStatusHasBeenSet() const;

                    /**
                     * 获取Tag list. Up to 50 tags.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return Tags Tag list. Up to 50 tags.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list. Up to 50 tags.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param Tags Tag list. Up to 50 tags.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Data disk. It can be SSD disks (CLOUD_SSD) with 100-32000 GB capacity or Premium Cloud Storage disks (CLOUD_PREMIUM) with 10-32000 GB capacity. The increment is 10. 
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return DataDiskInfo Data disk. It can be SSD disks (CLOUD_SSD) with 100-32000 GB capacity or Premium Cloud Storage disks (CLOUD_PREMIUM) with 10-32000 GB capacity. The increment is 10. 
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<DiskInfo> GetDataDiskInfo() const;

                    /**
                     * 设置Data disk. It can be SSD disks (CLOUD_SSD) with 100-32000 GB capacity or Premium Cloud Storage disks (CLOUD_PREMIUM) with 10-32000 GB capacity. The increment is 10. 
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param DataDiskInfo Data disk. It can be SSD disks (CLOUD_SSD) with 100-32000 GB capacity or Premium Cloud Storage disks (CLOUD_PREMIUM) with 10-32000 GB capacity. The increment is 10. 
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetDataDiskInfo(const std::vector<DiskInfo>& _dataDiskInfo);

                    /**
                     * 判断参数 DataDiskInfo 是否已赋值
                     * @return DataDiskInfo 是否已赋值
                     */
                    bool DataDiskInfoHasBeenSet() const;

                    /**
                     * 获取System disk. It can be a SSD (CLOUD_SSD) with 100-500 GB capacity or a Premium Cloud Storage disk (CLOUD_PREMIUM) with 50-500 GB capacity. The increment is 1.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return SystemDiskInfo System disk. It can be a SSD (CLOUD_SSD) with 100-500 GB capacity or a Premium Cloud Storage disk (CLOUD_PREMIUM) with 50-500 GB capacity. The increment is 1.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    DiskInfo GetSystemDiskInfo() const;

                    /**
                     * 设置System disk. It can be a SSD (CLOUD_SSD) with 100-500 GB capacity or a Premium Cloud Storage disk (CLOUD_PREMIUM) with 50-500 GB capacity. The increment is 1.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param SystemDiskInfo System disk. It can be a SSD (CLOUD_SSD) with 100-500 GB capacity or a Premium Cloud Storage disk (CLOUD_PREMIUM) with 50-500 GB capacity. The increment is 1.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetSystemDiskInfo(const DiskInfo& _systemDiskInfo);

                    /**
                     * 判断参数 SystemDiskInfo 是否已赋值
                     * @return SystemDiskInfo 是否已赋值
                     */
                    bool SystemDiskInfoHasBeenSet() const;

                    /**
                     * 获取CCN instance information
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return RelatedCcnInfos CCN instance information
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<RelatedCcnInfo> GetRelatedCcnInfos() const;

                    /**
                     * 设置CCN instance information
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param RelatedCcnInfos CCN instance information
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetRelatedCcnInfos(const std::vector<RelatedCcnInfo>& _relatedCcnInfos);

                    /**
                     * 判断参数 RelatedCcnInfos 是否已赋值
                     * @return RelatedCcnInfos 是否已赋值
                     */
                    bool RelatedCcnInfosHasBeenSet() const;

                    /**
                     * 获取Maximum outbound public network bandwidth of the server fleet. Value range: 1 - 200 Mbps. Default value: 100 Mbps.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return InternetMaxBandwidthOut Maximum outbound public network bandwidth of the server fleet. Value range: 1 - 200 Mbps. Default value: 100 Mbps.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Maximum outbound public network bandwidth of the server fleet. Value range: 1 - 200 Mbps. Default value: 100 Mbps.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param InternetMaxBandwidthOut Maximum outbound public network bandwidth of the server fleet. Value range: 1 - 200 Mbps. Default value: 100 Mbps.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                private:

                    /**
                     * Asset package ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Server fleet creation time
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * Description
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Description of server fleet resource
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_fleetArn;
                    bool m_fleetArnHasBeenSet;

                    /**
                     * Server fleet ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * Server fleet type, which only supports ON_DEMAND now.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_fleetType;
                    bool m_fleetTypeHasBeenSet;

                    /**
                     * Server type, such as S5.LARGE8
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Server fleet name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Game session protection policy
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_newGameServerSessionProtectionPolicy;
                    bool m_newGameServerSessionProtectionPolicyHasBeenSet;

                    /**
                     * Operating system type
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_operatingSystem;
                    bool m_operatingSystemHasBeenSet;

                    /**
                     * Limit policy of resource creation
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    ResourceCreationLimitPolicy m_resourceCreationLimitPolicy;
                    bool m_resourceCreationLimitPolicyHasBeenSet;

                    /**
                     * Statuses: “Create”, “Downloading”, “Verifying”, “Generating”, “Activating”, “Active”, “Exception”, “Deleting”, and “End”.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The status of server fleet when it stopped. If this field is left empty, it means automatic scaling.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<std::string> m_stoppedActions;
                    bool m_stoppedActionsHasBeenSet;

                    /**
                     * Server fleet termination time
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_terminationTime;
                    bool m_terminationTimeHasBeenSet;

                    /**
                     * Timeout period of time-limited protection. Value range: 5-1440 minutes. Default value: 60 minutes.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    uint64_t m_gameServerSessionProtectionTimeLimit;
                    bool m_gameServerSessionProtectionTimeLimitHasBeenSet;

                    /**
                     * Billing status: Unactivated, Activated, Exception, Isolated due to arrears, Terminated, and Unfrozen.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_billingStatus;
                    bool m_billingStatusHasBeenSet;

                    /**
                     * Tag list. Up to 50 tags.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Data disk. It can be SSD disks (CLOUD_SSD) with 100-32000 GB capacity or Premium Cloud Storage disks (CLOUD_PREMIUM) with 10-32000 GB capacity. The increment is 10. 
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<DiskInfo> m_dataDiskInfo;
                    bool m_dataDiskInfoHasBeenSet;

                    /**
                     * System disk. It can be a SSD (CLOUD_SSD) with 100-500 GB capacity or a Premium Cloud Storage disk (CLOUD_PREMIUM) with 50-500 GB capacity. The increment is 1.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    DiskInfo m_systemDiskInfo;
                    bool m_systemDiskInfoHasBeenSet;

                    /**
                     * CCN instance information
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<RelatedCcnInfo> m_relatedCcnInfos;
                    bool m_relatedCcnInfosHasBeenSet;

                    /**
                     * Maximum outbound public network bandwidth of the server fleet. Value range: 1 - 200 Mbps. Default value: 100 Mbps.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_FLEETATTRIBUTES_H_
