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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETITEM_H_

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
                class AssetItem : public AbstractModel
                {
                public:
                    AssetItem();
                    ~AssetItem() = default;
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
                     * 获取<p>Cloud vendor name</p>
                     * @return ProviderName <p>Cloud vendor name</p>
                     * 
                     */
                    std::string GetProviderName() const;

                    /**
                     * 设置<p>Cloud vendor name</p>
                     * @param _providerName <p>Cloud vendor name</p>
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
                     * 获取<p>Asset running state.</p>
                     * @return AssetStatus <p>Asset running state.</p>
                     * 
                     */
                    std::string GetAssetStatus() const;

                    /**
                     * 设置<p>Asset running state.</p>
                     * @param _assetStatus <p>Asset running state.</p>
                     * 
                     */
                    void SetAssetStatus(const std::string& _assetStatus);

                    /**
                     * 判断参数 AssetStatus 是否已赋值
                     * @return AssetStatus 是否已赋值
                     * 
                     */
                    bool AssetStatusHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is exposed to the public network</p>
                     * @return PublicExpose <p>Whether it is exposed to the public network</p>
                     * 
                     */
                    uint64_t GetPublicExpose() const;

                    /**
                     * 设置<p>Whether it is exposed to the public network</p>
                     * @param _publicExpose <p>Whether it is exposed to the public network</p>
                     * 
                     */
                    void SetPublicExpose(const uint64_t& _publicExpose);

                    /**
                     * 判断参数 PublicExpose 是否已赋值
                     * @return PublicExpose 是否已赋值
                     * 
                     */
                    bool PublicExposeHasBeenSet() const;

                    /**
                     * 获取<p>Asset tag</p>
                     * @return Tags <p>Asset tag</p>
                     * 
                     */
                    std::vector<AssetTag> GetTags() const;

                    /**
                     * 设置<p>Asset tag</p>
                     * @param _tags <p>Asset tag</p>
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
                     * 获取<p>Public ip address</p>
                     * @return PublicIP <p>Public ip address</p>
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置<p>Public ip address</p>
                     * @param _publicIP <p>Public ip address</p>
                     * 
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取<p>Private ip</p>
                     * @return PrivateIP <p>Private ip</p>
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置<p>Private ip</p>
                     * @param _privateIP <p>Private ip</p>
                     * 
                     */
                    void SetPrivateIP(const std::string& _privateIP);

                    /**
                     * 判断参数 PrivateIP 是否已赋值
                     * @return PrivateIP 是否已赋值
                     * 
                     */
                    bool PrivateIPHasBeenSet() const;

                    /**
                     * 获取<p>Public network domain</p>
                     * @return PublicDomain <p>Public network domain</p>
                     * 
                     */
                    std::string GetPublicDomain() const;

                    /**
                     * 设置<p>Public network domain</p>
                     * @param _publicDomain <p>Public network domain</p>
                     * 
                     */
                    void SetPublicDomain(const std::string& _publicDomain);

                    /**
                     * 判断参数 PublicDomain 是否已赋值
                     * @return PublicDomain 是否已赋值
                     * 
                     */
                    bool PublicDomainHasBeenSet() const;

                    /**
                     * 获取<p>Private domain</p>
                     * @return PrivateDomain <p>Private domain</p>
                     * 
                     */
                    std::string GetPrivateDomain() const;

                    /**
                     * 设置<p>Private domain</p>
                     * @param _privateDomain <p>Private domain</p>
                     * 
                     */
                    void SetPrivateDomain(const std::string& _privateDomain);

                    /**
                     * 判断参数 PrivateDomain 是否已赋值
                     * @return PrivateDomain 是否已赋值
                     * 
                     */
                    bool PrivateDomainHasBeenSet() const;

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
                     * 获取<p>Operating system name</p>
                     * @return OsName <p>Operating system name</p>
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置<p>Operating system name</p>
                     * @param _osName <p>Operating system name</p>
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

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
                     * 获取<p>Region name.</p>
                     * @return RegionName <p>Region name.</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置<p>Region name.</p>
                     * @param _regionName <p>Region name.</p>
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取<p>Asset unique ID.</p>
                     * @return AssetRID <p>Asset unique ID.</p>
                     * 
                     */
                    std::string GetAssetRID() const;

                    /**
                     * 设置<p>Asset unique ID.</p>
                     * @param _assetRID <p>Asset unique ID.</p>
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
                     * <p>Cloud vendor name</p>
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
                     * <p>Asset running state.</p>
                     */
                    std::string m_assetStatus;
                    bool m_assetStatusHasBeenSet;

                    /**
                     * <p>Whether it is exposed to the public network</p>
                     */
                    uint64_t m_publicExpose;
                    bool m_publicExposeHasBeenSet;

                    /**
                     * <p>Asset tag</p>
                     */
                    std::vector<AssetTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Public ip address</p>
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * <p>Private ip</p>
                     */
                    std::string m_privateIP;
                    bool m_privateIPHasBeenSet;

                    /**
                     * <p>Public network domain</p>
                     */
                    std::string m_publicDomain;
                    bool m_publicDomainHasBeenSet;

                    /**
                     * <p>Private domain</p>
                     */
                    std::string m_privateDomain;
                    bool m_privateDomainHasBeenSet;

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
                     * <p>Operating system name</p>
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

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
                     * <p>Region.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Region name.</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>Asset unique ID.</p>
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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETITEM_H_
