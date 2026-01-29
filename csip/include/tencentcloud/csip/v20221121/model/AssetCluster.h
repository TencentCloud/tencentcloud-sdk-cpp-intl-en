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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETCLUSTER_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETCLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * This example shows you how to obtain the cluster list.

Cluster protection status. enumerate on the left. display on the right.
Cluster protection status. 
Not connected.
Unprotected. 
2: partial protection. 
3: under protection. 
4: access exception. 
5: accessing. 
6: uninstalling. 
7: uninstallation exception.
                */
                class AssetCluster : public AbstractModel
                {
                public:
                    AssetCluster();
                    ~AssetCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tenant ID
                     * @return AppId Tenant ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置Tenant ID
                     * @param _appId Tenant ID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Tenant uin.
                     * @return Uin Tenant uin.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Tenant uin.
                     * @param _uin Tenant uin.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Tenant Nickname
                     * @return Nick Tenant Nickname
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置Tenant Nickname
                     * @param _nick Tenant Nickname
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
                     * @param _region Region.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Cluster ID.
                     * @return AssetId Cluster ID.
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _assetId Cluster ID.
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取Cluster name.
                     * @return AssetName Cluster name.
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置Cluster name.
                     * @param _assetName Cluster name.
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取Cluster type.
                     * @return AssetType Cluster type.
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Cluster type.
                     * @param _assetType Cluster type.
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取Cluster Creation Time
                     * @return InstanceCreateTime Cluster Creation Time
                     * 
                     */
                    std::string GetInstanceCreateTime() const;

                    /**
                     * 设置Cluster Creation Time
                     * @param _instanceCreateTime Cluster Creation Time
                     * 
                     */
                    void SetInstanceCreateTime(const std::string& _instanceCreateTime);

                    /**
                     * 判断参数 InstanceCreateTime 是否已赋值
                     * @return InstanceCreateTime 是否已赋值
                     * 
                     */
                    bool InstanceCreateTimeHasBeenSet() const;

                    /**
                     * 获取Status.
                     * @return Status Status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status.
                     * @param _status Status.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Cluster protection status, enumerate on the left, display on the right.
Protection status of the cluster. 
0: not connected.
Unprotected. 
2: partial protection. 
3: under protection. 
4: access exception. 
5: accessing. 
Uninstalling. 
7: uninstallation exception.
                     * @return ProtectStatus Cluster protection status, enumerate on the left, display on the right.
Protection status of the cluster. 
0: not connected.
Unprotected. 
2: partial protection. 
3: under protection. 
4: access exception. 
5: accessing. 
Uninstalling. 
7: uninstallation exception.
                     * 
                     */
                    int64_t GetProtectStatus() const;

                    /**
                     * 设置Cluster protection status, enumerate on the left, display on the right.
Protection status of the cluster. 
0: not connected.
Unprotected. 
2: partial protection. 
3: under protection. 
4: access exception. 
5: accessing. 
Uninstalling. 
7: uninstallation exception.
                     * @param _protectStatus Cluster protection status, enumerate on the left, display on the right.
Protection status of the cluster. 
0: not connected.
Unprotected. 
2: partial protection. 
3: under protection. 
4: access exception. 
5: accessing. 
Uninstalling. 
7: uninstallation exception.
                     * 
                     */
                    void SetProtectStatus(const int64_t& _protectStatus);

                    /**
                     * 判断参数 ProtectStatus 是否已赋值
                     * @return ProtectStatus 是否已赋值
                     * 
                     */
                    bool ProtectStatusHasBeenSet() const;

                    /**
                     * 获取Access information, being empty indicates no access exception info.
                     * @return ProtectInfo Access information, being empty indicates no access exception info.
                     * 
                     */
                    std::string GetProtectInfo() const;

                    /**
                     * 设置Access information, being empty indicates no access exception info.
                     * @param _protectInfo Access information, being empty indicates no access exception info.
                     * 
                     */
                    void SetProtectInfo(const std::string& _protectInfo);

                    /**
                     * 判断参数 ProtectInfo 是否已赋值
                     * @return ProtectInfo 是否已赋值
                     * 
                     */
                    bool ProtectInfoHasBeenSet() const;

                    /**
                     * 获取VPC id.
                     * @return VpcId VPC id.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC id.
                     * @param _vpcId VPC id.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC name.
                     * @return VpcName VPC name.
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name.
                     * @param _vpcName VPC name.
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取kubernetes version.
                     * @return KubernetesVersion kubernetes version.
                     * 
                     */
                    std::string GetKubernetesVersion() const;

                    /**
                     * 设置kubernetes version.
                     * @param _kubernetesVersion kubernetes version.
                     * 
                     */
                    void SetKubernetesVersion(const std::string& _kubernetesVersion);

                    /**
                     * 判断参数 KubernetesVersion 是否已赋值
                     * @return KubernetesVersion 是否已赋值
                     * 
                     */
                    bool KubernetesVersionHasBeenSet() const;

                    /**
                     * 获取Runtime component.
                     * @return Component Runtime component.
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置Runtime component.
                     * @param _component Runtime component.
                     * 
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取Runtime component version.
                     * @return ComponentVersion Runtime component version.
                     * 
                     */
                    std::string GetComponentVersion() const;

                    /**
                     * 设置Runtime component version.
                     * @param _componentVersion Runtime component version.
                     * 
                     */
                    void SetComponentVersion(const std::string& _componentVersion);

                    /**
                     * 判断参数 ComponentVersion 是否已赋值
                     * @return ComponentVersion 是否已赋值
                     * 
                     */
                    bool ComponentVersionHasBeenSet() const;

                    /**
                     * 获取Component status.
                     * @return ComponentStatus Component status.
                     * 
                     */
                    std::string GetComponentStatus() const;

                    /**
                     * 设置Component status.
                     * @param _componentStatus Component status.
                     * 
                     */
                    void SetComponentStatus(const std::string& _componentStatus);

                    /**
                     * 判断参数 ComponentStatus 是否已赋值
                     * @return ComponentStatus 是否已赋值
                     * 
                     */
                    bool ComponentStatusHasBeenSet() const;

                    /**
                     * 获取Health Checkup Time
                     * @return CheckTime Health Checkup Time
                     * 
                     */
                    std::string GetCheckTime() const;

                    /**
                     * 设置Health Checkup Time
                     * @param _checkTime Health Checkup Time
                     * 
                     */
                    void SetCheckTime(const std::string& _checkTime);

                    /**
                     * 判断参数 CheckTime 是否已赋值
                     * @return CheckTime 是否已赋值
                     * 
                     */
                    bool CheckTimeHasBeenSet() const;

                    /**
                     * 获取Associated hosts.
                     * @return MachineCount Associated hosts.
                     * 
                     */
                    int64_t GetMachineCount() const;

                    /**
                     * 设置Associated hosts.
                     * @param _machineCount Associated hosts.
                     * 
                     */
                    void SetMachineCount(const int64_t& _machineCount);

                    /**
                     * 判断参数 MachineCount 是否已赋值
                     * @return MachineCount 是否已赋值
                     * 
                     */
                    bool MachineCountHasBeenSet() const;

                    /**
                     * 获取Associated Pod Count
                     * @return PodCount Associated Pod Count
                     * 
                     */
                    int64_t GetPodCount() const;

                    /**
                     * 设置Associated Pod Count
                     * @param _podCount Associated Pod Count
                     * 
                     */
                    void SetPodCount(const int64_t& _podCount);

                    /**
                     * 判断参数 PodCount 是否已赋值
                     * @return PodCount 是否已赋值
                     * 
                     */
                    bool PodCountHasBeenSet() const;

                    /**
                     * 获取Associated Service Count
                     * @return ServiceCount Associated Service Count
                     * 
                     */
                    int64_t GetServiceCount() const;

                    /**
                     * 设置Associated Service Count
                     * @param _serviceCount Associated Service Count
                     * 
                     */
                    void SetServiceCount(const int64_t& _serviceCount);

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取Vulnerability risk.
                     * @return VulRisk Vulnerability risk.
                     * 
                     */
                    int64_t GetVulRisk() const;

                    /**
                     * 设置Vulnerability risk.
                     * @param _vulRisk Vulnerability risk.
                     * 
                     */
                    void SetVulRisk(const int64_t& _vulRisk);

                    /**
                     * 判断参数 VulRisk 是否已赋值
                     * @return VulRisk 是否已赋值
                     * 
                     */
                    bool VulRiskHasBeenSet() const;

                    /**
                     * 获取Configuration risk.
                     * @return CFGRisk Configuration risk.
                     * 
                     */
                    int64_t GetCFGRisk() const;

                    /**
                     * 设置Configuration risk.
                     * @param _cFGRisk Configuration risk.
                     * 
                     */
                    void SetCFGRisk(const int64_t& _cFGRisk);

                    /**
                     * 判断参数 CFGRisk 是否已赋值
                     * @return CFGRisk 是否已赋值
                     * 
                     */
                    bool CFGRiskHasBeenSet() const;

                    /**
                     * 获取Health Checkup Count
                     * @return CheckCount Health Checkup Count
                     * 
                     */
                    int64_t GetCheckCount() const;

                    /**
                     * 设置Health Checkup Count
                     * @param _checkCount Health Checkup Count
                     * 
                     */
                    void SetCheckCount(const int64_t& _checkCount);

                    /**
                     * 判断参数 CheckCount 是否已赋值
                     * @return CheckCount 是否已赋值
                     * 
                     */
                    bool CheckCountHasBeenSet() const;

                    /**
                     * 获取Whether it is core. 1: Core; 2: Non-core.
                     * @return IsCore Whether it is core. 1: Core; 2: Non-core.
                     * 
                     */
                    int64_t GetIsCore() const;

                    /**
                     * 设置Whether it is core. 1: Core; 2: Non-core.
                     * @param _isCore Whether it is core. 1: Core; 2: Non-core.
                     * 
                     */
                    void SetIsCore(const int64_t& _isCore);

                    /**
                     * 判断参数 IsCore 是否已赋值
                     * @return IsCore 是否已赋值
                     * 
                     */
                    bool IsCoreHasBeenSet() const;

                    /**
                     * 获取New Asset or Not. 1: New
                     * @return IsNewAsset New Asset or Not. 1: New
                     * 
                     */
                    uint64_t GetIsNewAsset() const;

                    /**
                     * 设置New Asset or Not. 1: New
                     * @param _isNewAsset New Asset or Not. 1: New
                     * 
                     */
                    void SetIsNewAsset(const uint64_t& _isNewAsset);

                    /**
                     * 判断参数 IsNewAsset 是否已赋值
                     * @return IsNewAsset 是否已赋值
                     * 
                     */
                    bool IsNewAssetHasBeenSet() const;

                    /**
                     * 获取Cloud asset type: 0: tencent cloud, 1: aws, 2: azure.
                     * @return CloudType Cloud asset type: 0: tencent cloud, 1: aws, 2: azure.
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置Cloud asset type: 0: tencent cloud, 1: aws, 2: azure.
                     * @param _cloudType Cloud asset type: 0: tencent cloud, 1: aws, 2: azure.
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                private:

                    /**
                     * Tenant ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Tenant uin.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Tenant Nickname
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Cluster ID.
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Cluster name.
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * Cluster type.
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Cluster Creation Time
                     */
                    std::string m_instanceCreateTime;
                    bool m_instanceCreateTimeHasBeenSet;

                    /**
                     * Status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Cluster protection status, enumerate on the left, display on the right.
Protection status of the cluster. 
0: not connected.
Unprotected. 
2: partial protection. 
3: under protection. 
4: access exception. 
5: accessing. 
Uninstalling. 
7: uninstallation exception.
                     */
                    int64_t m_protectStatus;
                    bool m_protectStatusHasBeenSet;

                    /**
                     * Access information, being empty indicates no access exception info.
                     */
                    std::string m_protectInfo;
                    bool m_protectInfoHasBeenSet;

                    /**
                     * VPC id.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC name.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * kubernetes version.
                     */
                    std::string m_kubernetesVersion;
                    bool m_kubernetesVersionHasBeenSet;

                    /**
                     * Runtime component.
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * Runtime component version.
                     */
                    std::string m_componentVersion;
                    bool m_componentVersionHasBeenSet;

                    /**
                     * Component status.
                     */
                    std::string m_componentStatus;
                    bool m_componentStatusHasBeenSet;

                    /**
                     * Health Checkup Time
                     */
                    std::string m_checkTime;
                    bool m_checkTimeHasBeenSet;

                    /**
                     * Associated hosts.
                     */
                    int64_t m_machineCount;
                    bool m_machineCountHasBeenSet;

                    /**
                     * Associated Pod Count
                     */
                    int64_t m_podCount;
                    bool m_podCountHasBeenSet;

                    /**
                     * Associated Service Count
                     */
                    int64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * Vulnerability risk.
                     */
                    int64_t m_vulRisk;
                    bool m_vulRiskHasBeenSet;

                    /**
                     * Configuration risk.
                     */
                    int64_t m_cFGRisk;
                    bool m_cFGRiskHasBeenSet;

                    /**
                     * Health Checkup Count
                     */
                    int64_t m_checkCount;
                    bool m_checkCountHasBeenSet;

                    /**
                     * Whether it is core. 1: Core; 2: Non-core.
                     */
                    int64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                    /**
                     * New Asset or Not. 1: New
                     */
                    uint64_t m_isNewAsset;
                    bool m_isNewAssetHasBeenSet;

                    /**
                     * Cloud asset type: 0: tencent cloud, 1: aws, 2: azure.
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETCLUSTER_H_
