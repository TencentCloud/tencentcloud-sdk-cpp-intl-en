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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETDETAILITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETDETAILITEM_H_

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
                * Asset detail information
                */
                class AssetDetailItem : public AbstractModel
                {
                public:
                    AssetDetailItem();
                    ~AssetDetailItem() = default;
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
                     * 获取<p>Cloud API return tag</p>
                     * @return Tags <p>Cloud API return tag</p>
                     * 
                     */
                    std::vector<AssetTag> GetTags() const;

                    /**
                     * 设置<p>Cloud API return tag</p>
                     * @param _tags <p>Cloud API return tag</p>
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
                     * 获取<p>Security group ID collection</p>
                     * @return SecurityGroupIDs <p>Security group ID collection</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIDs() const;

                    /**
                     * 设置<p>Security group ID collection</p>
                     * @param _securityGroupIDs <p>Security group ID collection</p>
                     * 
                     */
                    void SetSecurityGroupIDs(const std::vector<std::string>& _securityGroupIDs);

                    /**
                     * 判断参数 SecurityGroupIDs 是否已赋值
                     * @return SecurityGroupIDs 是否已赋值
                     * 
                     */
                    bool SecurityGroupIDsHasBeenSet() const;

                    /**
                     * 获取<p>Public IP address</p>
                     * @return PublicIP <p>Public IP address</p>
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置<p>Public IP address</p>
                     * @param _publicIP <p>Public IP address</p>
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
                     * 获取<p>Private IP address.</p>
                     * @return PrivateIP <p>Private IP address.</p>
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置<p>Private IP address.</p>
                     * @param _privateIP <p>Private IP address.</p>
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
                     * 获取<p>Total number of risks</p>
                     * @return RiskCount <p>Total number of risks</p>
                     * 
                     */
                    uint64_t GetRiskCount() const;

                    /**
                     * 设置<p>Total number of risks</p>
                     * @param _riskCount <p>Total number of risks</p>
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
                     * 获取<p>Total number of alarms</p>
                     * @return AlarmCount <p>Total number of alarms</p>
                     * 
                     */
                    uint64_t GetAlarmCount() const;

                    /**
                     * 设置<p>Total number of alarms</p>
                     * @param _alarmCount <p>Total number of alarms</p>
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
                     * 获取<p>Cloud security center tag</p>
                     * @return CustomTags <p>Cloud security center tag</p>
                     * 
                     */
                    std::vector<CustomTag> GetCustomTags() const;

                    /**
                     * 设置<p>Cloud security center tag</p>
                     * @param _customTags <p>Cloud security center tag</p>
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

                    /**
                     * 获取<p>Asset unique identifier</p>
                     * @return AssetRID <p>Asset unique identifier</p>
                     * 
                     */
                    std::string GetAssetRID() const;

                    /**
                     * 设置<p>Asset unique identifier</p>
                     * @param _assetRID <p>Asset unique identifier</p>
                     * 
                     */
                    void SetAssetRID(const std::string& _assetRID);

                    /**
                     * 判断参数 AssetRID 是否已赋值
                     * @return AssetRID 是否已赋值
                     * 
                     */
                    bool AssetRIDHasBeenSet() const;

                private:

                    /**
                     * <p>Tenant ID</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

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
                     * <p>Asset type</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>Cloud API return tag</p>
                     */
                    std::vector<AssetTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Security group ID collection</p>
                     */
                    std::vector<std::string> m_securityGroupIDs;
                    bool m_securityGroupIDsHasBeenSet;

                    /**
                     * <p>Public IP address</p>
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * <p>Private IP address.</p>
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
                     * <p>Total number of risks</p>
                     */
                    uint64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>Total number of alarms</p>
                     */
                    uint64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                    /**
                     * <p>Asset name</p>
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * <p>Cloud security center tag</p>
                     */
                    std::vector<CustomTag> m_customTags;
                    bool m_customTagsHasBeenSet;

                    /**
                     * <p>Cloud service provider</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>Asset type name</p>
                     */
                    std::string m_assetTypeName;
                    bool m_assetTypeNameHasBeenSet;

                    /**
                     * <p>Asset type icon</p>
                     */
                    std::string m_assetTypeIconURL;
                    bool m_assetTypeIconURLHasBeenSet;

                    /**
                     * <p>Asset unique identifier</p>
                     */
                    std::string m_assetRID;
                    bool m_assetRIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETDETAILITEM_H_
