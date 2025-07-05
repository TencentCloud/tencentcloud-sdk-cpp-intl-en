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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DOMAINASSETVO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DOMAINASSETVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Tag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Domain assets 
                */
                class DomainAssetVO : public AbstractModel
                {
                public:
                    DomainAssetVO();
                    ~DomainAssetVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetId Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAssetId() const;

                    /**
                     * 设置Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetId Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssetId(const std::vector<std::string>& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetName Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAssetName() const;

                    /**
                     * 设置Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetName Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssetName(const std::vector<std::string>& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetType Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAssetType() const;

                    /**
                     * 设置Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetType Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssetType(const std::vector<std::string>& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Region Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetRegion() const;

                    /**
                     * 设置Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _region Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::vector<std::string>& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取WAF status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return WAFStatus WAF status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWAFStatus() const;

                    /**
                     * 设置WAF status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _wAFStatus WAF status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWAFStatus(const uint64_t& _wAFStatus);

                    /**
                     * 判断参数 WAFStatus 是否已赋值
                     * @return WAFStatus 是否已赋值
                     * 
                     */
                    bool WAFStatusHasBeenSet() const;

                    /**
                     * 获取Asset creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetCreateTime Asset creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAssetCreateTime() const;

                    /**
                     * 设置Asset creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetCreateTime Asset creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssetCreateTime(const std::string& _assetCreateTime);

                    /**
                     * 判断参数 AssetCreateTime 是否已赋值
                     * @return AssetCreateTime 是否已赋值
                     * 
                     */
                    bool AssetCreateTimeHasBeenSet() const;

                    /**
                     * 获取Appid
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AppId Appid
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置Appid
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _appId Appid
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Account ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Uin Account ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Account ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _uin Account ID
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Account name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return NickName Account name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置Account name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _nickName Account name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取Whether it's a critical asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return IsCore Whether it's a critical asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsCore() const;

                    /**
                     * 设置Whether it's a critical asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _isCore Whether it's a critical asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsCore(const uint64_t& _isCore);

                    /**
                     * 判断参数 IsCore 是否已赋值
                     * @return IsCore 是否已赋值
                     * 
                     */
                    bool IsCoreHasBeenSet() const;

                    /**
                     * 获取Whether it's a cloud asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return IsCloud Whether it's a cloud asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsCloud() const;

                    /**
                     * 设置Whether it's a cloud asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _isCloud Whether it's a cloud asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsCloud(const uint64_t& _isCloud);

                    /**
                     * 判断参数 IsCloud 是否已赋值
                     * @return IsCloud 是否已赋值
                     * 
                     */
                    bool IsCloudHasBeenSet() const;

                    /**
                     * 获取Network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Attack Network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAttack() const;

                    /**
                     * 设置Network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _attack Network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttack(const uint64_t& _attack);

                    /**
                     * 判断参数 Attack 是否已赋值
                     * @return Attack 是否已赋值
                     * 
                     */
                    bool AttackHasBeenSet() const;

                    /**
                     * 获取Network access
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Access Network access
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAccess() const;

                    /**
                     * 设置Network access
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _access Network access
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccess(const uint64_t& _access);

                    /**
                     * 判断参数 Access 是否已赋值
                     * @return Access 是否已赋值
                     * 
                     */
                    bool AccessHasBeenSet() const;

                    /**
                     * 获取Number of blocked attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Intercept Number of blocked attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIntercept() const;

                    /**
                     * 设置Number of blocked attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _intercept Number of blocked attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIntercept(const uint64_t& _intercept);

                    /**
                     * 判断参数 Intercept 是否已赋值
                     * @return Intercept 是否已赋值
                     * 
                     */
                    bool InterceptHasBeenSet() const;

                    /**
                     * 获取Inbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return InBandwidth Inbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInBandwidth() const;

                    /**
                     * 设置Inbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _inBandwidth Inbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInBandwidth(const std::string& _inBandwidth);

                    /**
                     * 判断参数 InBandwidth 是否已赋值
                     * @return InBandwidth 是否已赋值
                     * 
                     */
                    bool InBandwidthHasBeenSet() const;

                    /**
                     * 获取Outbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return OutBandwidth Outbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOutBandwidth() const;

                    /**
                     * 设置Outbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _outBandwidth Outbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutBandwidth(const std::string& _outBandwidth);

                    /**
                     * 判断参数 OutBandwidth 是否已赋值
                     * @return OutBandwidth 是否已赋值
                     * 
                     */
                    bool OutBandwidthHasBeenSet() const;

                    /**
                     * 获取Total inbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return InFlow Total inbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInFlow() const;

                    /**
                     * 设置Total inbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _inFlow Total inbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInFlow(const std::string& _inFlow);

                    /**
                     * 判断参数 InFlow 是否已赋值
                     * @return InFlow 是否已赋值
                     * 
                     */
                    bool InFlowHasBeenSet() const;

                    /**
                     * 获取Total outbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return OutFlow Total outbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOutFlow() const;

                    /**
                     * 设置Total outbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _outFlow Total outbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutFlow(const std::string& _outFlow);

                    /**
                     * 判断参数 OutFlow 是否已赋值
                     * @return OutFlow 是否已赋值
                     * 
                     */
                    bool OutFlowHasBeenSet() const;

                    /**
                     * 获取Last scan time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return LastScanTime Last scan time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置Last scan time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _lastScanTime Last scan time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取Port risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PortRisk Port risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPortRisk() const;

                    /**
                     * 设置Port risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _portRisk Port risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPortRisk(const uint64_t& _portRisk);

                    /**
                     * 判断参数 PortRisk 是否已赋值
                     * @return PortRisk 是否已赋值
                     * 
                     */
                    bool PortRiskHasBeenSet() const;

                    /**
                     * 获取Vulnerabilities
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VulnerabilityRisk Vulnerabilities
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVulnerabilityRisk() const;

                    /**
                     * 设置Vulnerabilities
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _vulnerabilityRisk Vulnerabilities
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVulnerabilityRisk(const uint64_t& _vulnerabilityRisk);

                    /**
                     * 判断参数 VulnerabilityRisk 是否已赋值
                     * @return VulnerabilityRisk 是否已赋值
                     * 
                     */
                    bool VulnerabilityRiskHasBeenSet() const;

                    /**
                     * 获取Configuration risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ConfigurationRisk Configuration risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetConfigurationRisk() const;

                    /**
                     * 设置Configuration risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _configurationRisk Configuration risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfigurationRisk(const uint64_t& _configurationRisk);

                    /**
                     * 判断参数 ConfigurationRisk 是否已赋值
                     * @return ConfigurationRisk 是否已赋值
                     * 
                     */
                    bool ConfigurationRiskHasBeenSet() const;

                    /**
                     * 获取Scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ScanTask Scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetScanTask() const;

                    /**
                     * 设置Scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _scanTask Scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanTask(const uint64_t& _scanTask);

                    /**
                     * 判断参数 ScanTask 是否已赋值
                     * @return ScanTask 是否已赋值
                     * 
                     */
                    bool ScanTaskHasBeenSet() const;

                    /**
                     * 获取Domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return SubDomain Domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置Domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _subDomain Domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取Resolved IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return SeverIp Resolved IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSeverIp() const;

                    /**
                     * 设置Resolved IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _severIp Resolved IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSeverIp(const std::vector<std::string>& _severIp);

                    /**
                     * 判断参数 SeverIp 是否已赋值
                     * @return SeverIp 是否已赋值
                     * 
                     */
                    bool SeverIpHasBeenSet() const;

                    /**
                     * 获取Bot access requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return BotCount Bot access requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetBotCount() const;

                    /**
                     * 设置Bot access requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _botCount Bot access requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBotCount(const uint64_t& _botCount);

                    /**
                     * 判断参数 BotCount 是否已赋值
                     * @return BotCount 是否已赋值
                     * 
                     */
                    bool BotCountHasBeenSet() const;

                    /**
                     * 获取Weak password risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return WeakPassword Weak password risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWeakPassword() const;

                    /**
                     * 设置Weak password risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _weakPassword Weak password risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWeakPassword(const uint64_t& _weakPassword);

                    /**
                     * 判断参数 WeakPassword 是否已赋值
                     * @return WeakPassword 是否已赋值
                     * 
                     */
                    bool WeakPasswordHasBeenSet() const;

                    /**
                     * 获取Content risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return WebContentRisk Content risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWebContentRisk() const;

                    /**
                     * 设置Content risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _webContentRisk Content risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWebContentRisk(const uint64_t& _webContentRisk);

                    /**
                     * 判断参数 WebContentRisk 是否已赋值
                     * @return WebContentRisk 是否已赋值
                     * 
                     */
                    bool WebContentRiskHasBeenSet() const;

                    /**
                     * 获取Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Tag Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _tag Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取The type of associated instances.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return SourceType The type of associated instances.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置The type of associated instances.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _sourceType The type of associated instances.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Member ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return MemberId Member ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置Member ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _memberId Member ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取CC attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CCAttack CC attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCCAttack() const;

                    /**
                     * 设置CC attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cCAttack CC attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCCAttack(const int64_t& _cCAttack);

                    /**
                     * 判断参数 CCAttack 是否已赋值
                     * @return CCAttack 是否已赋值
                     * 
                     */
                    bool CCAttackHasBeenSet() const;

                    /**
                     * 获取Web attack
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return WebAttack Web attack
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetWebAttack() const;

                    /**
                     * 设置Web attack
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _webAttack Web attack
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWebAttack(const int64_t& _webAttack);

                    /**
                     * 判断参数 WebAttack 是否已赋值
                     * @return WebAttack 是否已赋值
                     * 
                     */
                    bool WebAttackHasBeenSet() const;

                    /**
                     * 获取Services exposed to risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ServiceRisk Services exposed to risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetServiceRisk() const;

                    /**
                     * 设置Services exposed to risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _serviceRisk Services exposed to risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceRisk(const uint64_t& _serviceRisk);

                    /**
                     * 判断参数 ServiceRisk 是否已赋值
                     * @return ServiceRisk 是否已赋值
                     * 
                     */
                    bool ServiceRiskHasBeenSet() const;

                    /**
                     * 获取Whether it's a newly-added asset. Values: `1` (Yes), `0` (No)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return IsNewAsset Whether it's a newly-added asset. Values: `1` (Yes), `0` (No)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsNewAsset() const;

                    /**
                     * 设置Whether it's a newly-added asset. Values: `1` (Yes), `0` (No)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _isNewAsset Whether it's a newly-added asset. Values: `1` (Yes), `0` (No)
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Random third-level domain name of the asset pending ownership verification
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VerifyDomain Random third-level domain name of the asset pending ownership verification
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVerifyDomain() const;

                    /**
                     * 设置Random third-level domain name of the asset pending ownership verification
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _verifyDomain Random third-level domain name of the asset pending ownership verification
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVerifyDomain(const std::string& _verifyDomain);

                    /**
                     * 判断参数 VerifyDomain 是否已赋值
                     * @return VerifyDomain 是否已赋值
                     * 
                     */
                    bool VerifyDomainHasBeenSet() const;

                    /**
                     * 获取TXT record of the asset pending ownership verification
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VerifyTXTRecord TXT record of the asset pending ownership verification
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVerifyTXTRecord() const;

                    /**
                     * 设置TXT record of the asset pending ownership verification
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _verifyTXTRecord TXT record of the asset pending ownership verification
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVerifyTXTRecord(const std::string& _verifyTXTRecord);

                    /**
                     * 判断参数 VerifyTXTRecord 是否已赋值
                     * @return VerifyTXTRecord 是否已赋值
                     * 
                     */
                    bool VerifyTXTRecordHasBeenSet() const;

                    /**
                     * 获取Ownership verification status of the asset. `0`: Pending verification; `1`: Verified; `2`: Verifying; `3`: TXT record verification failed; `4`: Human verification failed.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VerifyStatus Ownership verification status of the asset. `0`: Pending verification; `1`: Verified; `2`: Verifying; `3`: TXT record verification failed; `4`: Human verification failed.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVerifyStatus() const;

                    /**
                     * 设置Ownership verification status of the asset. `0`: Pending verification; `1`: Verified; `2`: Verifying; `3`: TXT record verification failed; `4`: Human verification failed.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _verifyStatus Ownership verification status of the asset. `0`: Pending verification; `1`: Verified; `2`: Verifying; `3`: TXT record verification failed; `4`: Human verification failed.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVerifyStatus(const int64_t& _verifyStatus);

                    /**
                     * 判断参数 VerifyStatus 是否已赋值
                     * @return VerifyStatus 是否已赋值
                     * 
                     */
                    bool VerifyStatusHasBeenSet() const;

                    /**
                     * 获取u200cNumber of bot attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return BotAccessCount u200cNumber of bot attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBotAccessCount() const;

                    /**
                     * 设置u200cNumber of bot attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _botAccessCount u200cNumber of bot attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBotAccessCount(const int64_t& _botAccessCount);

                    /**
                     * 判断参数 BotAccessCount 是否已赋值
                     * @return BotAccessCount 是否已赋值
                     * 
                     */
                    bool BotAccessCountHasBeenSet() const;

                private:

                    /**
                     * Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * WAF status
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_wAFStatus;
                    bool m_wAFStatusHasBeenSet;

                    /**
                     * Asset creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_assetCreateTime;
                    bool m_assetCreateTimeHasBeenSet;

                    /**
                     * Appid
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Account ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Account name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * Whether it's a critical asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                    /**
                     * Whether it's a cloud asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isCloud;
                    bool m_isCloudHasBeenSet;

                    /**
                     * Network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_attack;
                    bool m_attackHasBeenSet;

                    /**
                     * Network access
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_access;
                    bool m_accessHasBeenSet;

                    /**
                     * Number of blocked attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_intercept;
                    bool m_interceptHasBeenSet;

                    /**
                     * Inbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_inBandwidth;
                    bool m_inBandwidthHasBeenSet;

                    /**
                     * Outbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_outBandwidth;
                    bool m_outBandwidthHasBeenSet;

                    /**
                     * Total inbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_inFlow;
                    bool m_inFlowHasBeenSet;

                    /**
                     * Total outbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_outFlow;
                    bool m_outFlowHasBeenSet;

                    /**
                     * Last scan time
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * Port risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_portRisk;
                    bool m_portRiskHasBeenSet;

                    /**
                     * Vulnerabilities
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_vulnerabilityRisk;
                    bool m_vulnerabilityRiskHasBeenSet;

                    /**
                     * Configuration risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_configurationRisk;
                    bool m_configurationRiskHasBeenSet;

                    /**
                     * Scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scanTask;
                    bool m_scanTaskHasBeenSet;

                    /**
                     * Domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * Resolved IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_severIp;
                    bool m_severIpHasBeenSet;

                    /**
                     * Bot access requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_botCount;
                    bool m_botCountHasBeenSet;

                    /**
                     * Weak password risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_weakPassword;
                    bool m_weakPasswordHasBeenSet;

                    /**
                     * Content risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_webContentRisk;
                    bool m_webContentRiskHasBeenSet;

                    /**
                     * Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * The type of associated instances.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Member ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * CC attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cCAttack;
                    bool m_cCAttackHasBeenSet;

                    /**
                     * Web attack
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_webAttack;
                    bool m_webAttackHasBeenSet;

                    /**
                     * Services exposed to risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_serviceRisk;
                    bool m_serviceRiskHasBeenSet;

                    /**
                     * Whether it's a newly-added asset. Values: `1` (Yes), `0` (No)
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isNewAsset;
                    bool m_isNewAssetHasBeenSet;

                    /**
                     * Random third-level domain name of the asset pending ownership verification
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_verifyDomain;
                    bool m_verifyDomainHasBeenSet;

                    /**
                     * TXT record of the asset pending ownership verification
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_verifyTXTRecord;
                    bool m_verifyTXTRecordHasBeenSet;

                    /**
                     * Ownership verification status of the asset. `0`: Pending verification; `1`: Verified; `2`: Verifying; `3`: TXT record verification failed; `4`: Human verification failed.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_verifyStatus;
                    bool m_verifyStatusHasBeenSet;

                    /**
                     * u200cNumber of bot attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_botAccessCount;
                    bool m_botAccessCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DOMAINASSETVO_H_
