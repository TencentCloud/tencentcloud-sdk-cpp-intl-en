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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_PUBLICASSETINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_PUBLICASSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetTag.h>
#include <tencentcloud/csip/v20221121/model/CustomTag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Asset information
                */
                class PublicAssetInfo : public AbstractModel
                {
                public:
                    PublicAssetInfo();
                    ~PublicAssetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Tenant ID</p>
                     * @return AppID <p>Tenant ID</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>Tenant ID</p>
                     * @param _appID <p>Tenant ID</p>
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>Cloud service provider</p>
                     * @return Provider <p>Cloud service provider</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>Cloud service provider</p>
                     * @param _provider <p>Cloud service provider</p>
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>Cloud vendor name.</p>
                     * @return ProviderName <p>Cloud vendor name.</p>
                     * 
                     */
                    std::string GetProviderName() const;

                    /**
                     * 设置<p>Cloud vendor name.</p>
                     * @param _providerName <p>Cloud vendor name.</p>
                     * 
                     */
                    void SetProviderName(const std::string& _providerName);

                    /**
                     * 判断参数 ProviderName 是否已赋值
                     * @return ProviderName 是否已赋值
                     * 
                     */
                    bool ProviderNameHasBeenSet() const;

                    /**
                     * 获取<p>Cloud Account ID</p>
                     * @return CloudAccountID <p>Cloud Account ID</p>
                     * 
                     */
                    std::string GetCloudAccountID() const;

                    /**
                     * 设置<p>Cloud Account ID</p>
                     * @param _cloudAccountID <p>Cloud Account ID</p>
                     * 
                     */
                    void SetCloudAccountID(const std::string& _cloudAccountID);

                    /**
                     * 判断参数 CloudAccountID 是否已赋值
                     * @return CloudAccountID 是否已赋值
                     * 
                     */
                    bool CloudAccountIDHasBeenSet() const;

                    /**
                     * 获取<p>Cloud account name</p>
                     * @return CloudAccountName <p>Cloud account name</p>
                     * 
                     */
                    std::string GetCloudAccountName() const;

                    /**
                     * 设置<p>Cloud account name</p>
                     * @param _cloudAccountName <p>Cloud account name</p>
                     * 
                     */
                    void SetCloudAccountName(const std::string& _cloudAccountName);

                    /**
                     * 判断参数 CloudAccountName 是否已赋值
                     * @return CloudAccountName 是否已赋值
                     * 
                     */
                    bool CloudAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>Asset ID.</p>
                     * @return AssetID <p>Asset ID.</p>
                     * 
                     */
                    std::string GetAssetID() const;

                    /**
                     * 设置<p>Asset ID.</p>
                     * @param _assetID <p>Asset ID.</p>
                     * 
                     */
                    void SetAssetID(const std::string& _assetID);

                    /**
                     * 判断参数 AssetID 是否已赋值
                     * @return AssetID 是否已赋值
                     * 
                     */
                    bool AssetIDHasBeenSet() const;

                    /**
                     * 获取<p>Asset name</p>
                     * @return AssetName <p>Asset name</p>
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置<p>Asset name</p>
                     * @param _assetName <p>Asset name</p>
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
                     * 获取<p>Asset type</p>
                     * @return AssetType <p>Asset type</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>Asset type</p>
                     * @param _assetType <p>Asset type</p>
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
                     * 获取<p>Asset type name</p>
                     * @return AssetTypeName <p>Asset type name</p>
                     * 
                     */
                    std::string GetAssetTypeName() const;

                    /**
                     * 设置<p>Asset type name</p>
                     * @param _assetTypeName <p>Asset type name</p>
                     * 
                     */
                    void SetAssetTypeName(const std::string& _assetTypeName);

                    /**
                     * 判断参数 AssetTypeName 是否已赋值
                     * @return AssetTypeName 是否已赋值
                     * 
                     */
                    bool AssetTypeNameHasBeenSet() const;

                    /**
                     * 获取<p>Asset tag.</p>
                     * @return Tags <p>Asset tag.</p>
                     * 
                     */
                    std::vector<AssetTag> GetTags() const;

                    /**
                     * 设置<p>Asset tag.</p>
                     * @param _tags <p>Asset tag.</p>
                     * 
                     */
                    void SetTags(const std::vector<AssetTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Public network address</p>
                     * @return Address <p>Public network address</p>
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置<p>Public network address</p>
                     * @param _address <p>Public network address</p>
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取<p>Public address type</p>
                     * @return AddressType <p>Public address type</p>
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置<p>Public address type</p>
                     * @param _addressType <p>Public address type</p>
                     * 
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                    /**
                     * 获取<p>Resolution address</p>
                     * @return ResolvedAddress <p>Resolution address</p>
                     * 
                     */
                    std::vector<std::string> GetResolvedAddress() const;

                    /**
                     * 设置<p>Resolution address</p>
                     * @param _resolvedAddress <p>Resolution address</p>
                     * 
                     */
                    void SetResolvedAddress(const std::vector<std::string>& _resolvedAddress);

                    /**
                     * 判断参数 ResolvedAddress 是否已赋值
                     * @return ResolvedAddress 是否已赋值
                     * 
                     */
                    bool ResolvedAddressHasBeenSet() const;

                    /**
                     * 获取<p>Region.</p>
                     * @return Region <p>Region.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region.</p>
                     * @param _region <p>Region.</p>
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
                     * 获取<p>Protection status</p>
                     * @return ProtectStatus <p>Protection status</p>
                     * 
                     */
                    uint64_t GetProtectStatus() const;

                    /**
                     * 设置<p>Protection status</p>
                     * @param _protectStatus <p>Protection status</p>
                     * 
                     */
                    void SetProtectStatus(const uint64_t& _protectStatus);

                    /**
                     * 判断参数 ProtectStatus 是否已赋值
                     * @return ProtectStatus 是否已赋值
                     * 
                     */
                    bool ProtectStatusHasBeenSet() const;

                    /**
                     * 获取<p>Number of risks</p>
                     * @return RiskCount <p>Number of risks</p>
                     * 
                     */
                    uint64_t GetRiskCount() const;

                    /**
                     * 设置<p>Number of risks</p>
                     * @param _riskCount <p>Number of risks</p>
                     * 
                     */
                    void SetRiskCount(const uint64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of alarms.</p>
                     * @return AlarmCount <p>Number of alarms.</p>
                     * 
                     */
                    uint64_t GetAlarmCount() const;

                    /**
                     * 设置<p>Number of alarms.</p>
                     * @param _alarmCount <p>Number of alarms.</p>
                     * 
                     */
                    void SetAlarmCount(const uint64_t& _alarmCount);

                    /**
                     * 判断参数 AlarmCount 是否已赋值
                     * @return AlarmCount 是否已赋值
                     * 
                     */
                    bool AlarmCountHasBeenSet() const;

                    /**
                     * 获取<p>Instance creation time</p>
                     * @return CreatedAt <p>Instance creation time</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>Instance creation time</p>
                     * @param _createdAt <p>Instance creation time</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>First sync time</p>
                     * @return FirstSyncTime <p>First sync time</p>
                     * 
                     */
                    std::string GetFirstSyncTime() const;

                    /**
                     * 设置<p>First sync time</p>
                     * @param _firstSyncTime <p>First sync time</p>
                     * 
                     */
                    void SetFirstSyncTime(const std::string& _firstSyncTime);

                    /**
                     * 判断参数 FirstSyncTime 是否已赋值
                     * @return FirstSyncTime 是否已赋值
                     * 
                     */
                    bool FirstSyncTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
                     * @return UpdateTime <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updateTime <p>Update time.</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Total number of severe risks</p>
                     * @return CriticalRiskCount <p>Total number of severe risks</p>
                     * 
                     */
                    uint64_t GetCriticalRiskCount() const;

                    /**
                     * 设置<p>Total number of severe risks</p>
                     * @param _criticalRiskCount <p>Total number of severe risks</p>
                     * 
                     */
                    void SetCriticalRiskCount(const uint64_t& _criticalRiskCount);

                    /**
                     * 判断参数 CriticalRiskCount 是否已赋值
                     * @return CriticalRiskCount 是否已赋值
                     * 
                     */
                    bool CriticalRiskCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of high risks</p>
                     * @return HighRiskCount <p>Total number of high risks</p>
                     * 
                     */
                    uint64_t GetHighRiskCount() const;

                    /**
                     * 设置<p>Total number of high risks</p>
                     * @param _highRiskCount <p>Total number of high risks</p>
                     * 
                     */
                    void SetHighRiskCount(const uint64_t& _highRiskCount);

                    /**
                     * 判断参数 HighRiskCount 是否已赋值
                     * @return HighRiskCount 是否已赋值
                     * 
                     */
                    bool HighRiskCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of medium risks</p>
                     * @return MediumRiskCount <p>Total number of medium risks</p>
                     * 
                     */
                    uint64_t GetMediumRiskCount() const;

                    /**
                     * 设置<p>Total number of medium risks</p>
                     * @param _mediumRiskCount <p>Total number of medium risks</p>
                     * 
                     */
                    void SetMediumRiskCount(const uint64_t& _mediumRiskCount);

                    /**
                     * 判断参数 MediumRiskCount 是否已赋值
                     * @return MediumRiskCount 是否已赋值
                     * 
                     */
                    bool MediumRiskCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of low risks</p>
                     * @return LowRiskCount <p>Total number of low risks</p>
                     * 
                     */
                    uint64_t GetLowRiskCount() const;

                    /**
                     * 设置<p>Total number of low risks</p>
                     * @param _lowRiskCount <p>Total number of low risks</p>
                     * 
                     */
                    void SetLowRiskCount(const uint64_t& _lowRiskCount);

                    /**
                     * 判断参数 LowRiskCount 是否已赋值
                     * @return LowRiskCount 是否已赋值
                     * 
                     */
                    bool LowRiskCountHasBeenSet() const;

                    /**
                     * 获取<p>Unique asset ID</p>
                     * @return AssetRID <p>Unique asset ID</p>
                     * 
                     */
                    std::string GetAssetRID() const;

                    /**
                     * 设置<p>Unique asset ID</p>
                     * @param _assetRID <p>Unique asset ID</p>
                     * 
                     */
                    void SetAssetRID(const std::string& _assetRID);

                    /**
                     * 判断参数 AssetRID 是否已赋值
                     * @return AssetRID 是否已赋值
                     * 
                     */
                    bool AssetRIDHasBeenSet() const;

                    /**
                     * 获取<p>CSC tag</p>
                     * @return CustomTags <p>CSC tag</p>
                     * 
                     */
                    std::vector<CustomTag> GetCustomTags() const;

                    /**
                     * 设置<p>CSC tag</p>
                     * @param _customTags <p>CSC tag</p>
                     * 
                     */
                    void SetCustomTags(const std::vector<CustomTag>& _customTags);

                    /**
                     * 判断参数 CustomTags 是否已赋值
                     * @return CustomTags 是否已赋值
                     * 
                     */
                    bool CustomTagsHasBeenSet() const;

                    /**
                     * 获取<p>Asset type icon</p>
                     * @return AssetTypeIconURL <p>Asset type icon</p>
                     * 
                     */
                    std::string GetAssetTypeIconURL() const;

                    /**
                     * 设置<p>Asset type icon</p>
                     * @param _assetTypeIconURL <p>Asset type icon</p>
                     * 
                     */
                    void SetAssetTypeIconURL(const std::string& _assetTypeIconURL);

                    /**
                     * 判断参数 AssetTypeIconURL 是否已赋值
                     * @return AssetTypeIconURL 是否已赋值
                     * 
                     */
                    bool AssetTypeIconURLHasBeenSet() const;

                private:

                    /**
                     * <p>Tenant ID</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Cloud service provider</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>Cloud vendor name.</p>
                     */
                    std::string m_providerName;
                    bool m_providerNameHasBeenSet;

                    /**
                     * <p>Cloud Account ID</p>
                     */
                    std::string m_cloudAccountID;
                    bool m_cloudAccountIDHasBeenSet;

                    /**
                     * <p>Cloud account name</p>
                     */
                    std::string m_cloudAccountName;
                    bool m_cloudAccountNameHasBeenSet;

                    /**
                     * <p>Asset ID.</p>
                     */
                    std::string m_assetID;
                    bool m_assetIDHasBeenSet;

                    /**
                     * <p>Asset name</p>
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * <p>Asset type</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>Asset type name</p>
                     */
                    std::string m_assetTypeName;
                    bool m_assetTypeNameHasBeenSet;

                    /**
                     * <p>Asset tag.</p>
                     */
                    std::vector<AssetTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Public network address</p>
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>Public address type</p>
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * <p>Resolution address</p>
                     */
                    std::vector<std::string> m_resolvedAddress;
                    bool m_resolvedAddressHasBeenSet;

                    /**
                     * <p>Region.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Protection status</p>
                     */
                    uint64_t m_protectStatus;
                    bool m_protectStatusHasBeenSet;

                    /**
                     * <p>Number of risks</p>
                     */
                    uint64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>Number of alarms.</p>
                     */
                    uint64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                    /**
                     * <p>Instance creation time</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>First sync time</p>
                     */
                    std::string m_firstSyncTime;
                    bool m_firstSyncTimeHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Total number of severe risks</p>
                     */
                    uint64_t m_criticalRiskCount;
                    bool m_criticalRiskCountHasBeenSet;

                    /**
                     * <p>Total number of high risks</p>
                     */
                    uint64_t m_highRiskCount;
                    bool m_highRiskCountHasBeenSet;

                    /**
                     * <p>Total number of medium risks</p>
                     */
                    uint64_t m_mediumRiskCount;
                    bool m_mediumRiskCountHasBeenSet;

                    /**
                     * <p>Total number of low risks</p>
                     */
                    uint64_t m_lowRiskCount;
                    bool m_lowRiskCountHasBeenSet;

                    /**
                     * <p>Unique asset ID</p>
                     */
                    std::string m_assetRID;
                    bool m_assetRIDHasBeenSet;

                    /**
                     * <p>CSC tag</p>
                     */
                    std::vector<CustomTag> m_customTags;
                    bool m_customTagsHasBeenSet;

                    /**
                     * <p>Asset type icon</p>
                     */
                    std::string m_assetTypeIconURL;
                    bool m_assetTypeIconURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_PUBLICASSETINFO_H_
