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
                     * @return AssetId Asset ID
                     * 
                     */
                    std::vector<std::string> GetAssetId() const;

                    /**
                     * 设置Asset ID
                     * @param _assetId Asset ID
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
                     * 获取Asset Name
                     * @return AssetName Asset Name
                     * 
                     */
                    std::vector<std::string> GetAssetName() const;

                    /**
                     * 设置Asset Name
                     * @param _assetName Asset Name
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
                     * @return AssetType Asset type
                     * 
                     */
                    std::vector<std::string> GetAssetType() const;

                    /**
                     * 设置Asset type
                     * @param _assetType Asset type
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
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::vector<std::string> GetRegion() const;

                    /**
                     * 设置Region.
                     * @param _region Region.
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
                     * 获取WAF Status
                     * @return WAFStatus WAF Status
                     * 
                     */
                    uint64_t GetWAFStatus() const;

                    /**
                     * 设置WAF Status
                     * @param _wAFStatus WAF Status
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
                     * 获取Asset Creation Time
                     * @return AssetCreateTime Asset Creation Time
                     * 
                     */
                    std::string GetAssetCreateTime() const;

                    /**
                     * 设置Asset Creation Time
                     * @param _assetCreateTime Asset Creation Time
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
                     * @return AppId Appid
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置Appid
                     * @param _appId Appid
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
                     * @return Uin Account ID
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Account ID
                     * @param _uin Account ID
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
                     * @return NickName Account name
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置Account name
                     * @param _nickName Account name
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
                     * 获取Core or Not
                     * @return IsCore Core or Not
                     * 
                     */
                    uint64_t GetIsCore() const;

                    /**
                     * 设置Core or Not
                     * @param _isCore Core or Not
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
                     * 获取Whether it is on-cloud asset.
                     * @return IsCloud Whether it is on-cloud asset.
                     * 
                     */
                    uint64_t GetIsCloud() const;

                    /**
                     * 设置Whether it is on-cloud asset.
                     * @param _isCloud Whether it is on-cloud asset.
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
                     * 获取network attack
                     * @return Attack network attack
                     * 
                     */
                    uint64_t GetAttack() const;

                    /**
                     * 设置network attack
                     * @param _attack network attack
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
                     * @return Access Network access
                     * 
                     */
                    uint64_t GetAccess() const;

                    /**
                     * 设置Network access
                     * @param _access Network access
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
                     * 获取Network Interception
                     * @return Intercept Network Interception
                     * 
                     */
                    uint64_t GetIntercept() const;

                    /**
                     * 设置Network Interception
                     * @param _intercept Network Interception
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
                     * @return InBandwidth Inbound peak bandwidth
                     * 
                     */
                    std::string GetInBandwidth() const;

                    /**
                     * 设置Inbound peak bandwidth
                     * @param _inBandwidth Inbound peak bandwidth
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
                     * @return OutBandwidth Outbound peak bandwidth
                     * 
                     */
                    std::string GetOutBandwidth() const;

                    /**
                     * 设置Outbound peak bandwidth
                     * @param _outBandwidth Outbound peak bandwidth
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
                     * 获取Cumulative Inbound Traffic
                     * @return InFlow Cumulative Inbound Traffic
                     * 
                     */
                    std::string GetInFlow() const;

                    /**
                     * 设置Cumulative Inbound Traffic
                     * @param _inFlow Cumulative Inbound Traffic
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
                     * 获取Cumulative Outbound Traffic
                     * @return OutFlow Cumulative Outbound Traffic
                     * 
                     */
                    std::string GetOutFlow() const;

                    /**
                     * 设置Cumulative Outbound Traffic
                     * @param _outFlow Cumulative Outbound Traffic
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
                     * @return LastScanTime Last scan time
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置Last scan time
                     * @param _lastScanTime Last scan time
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
                     * 获取port risk
                     * @return PortRisk port risk
                     * 
                     */
                    uint64_t GetPortRisk() const;

                    /**
                     * 设置port risk
                     * @param _portRisk port risk
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
                     * 获取Vulnerability risk
                     * @return VulnerabilityRisk Vulnerability risk
                     * 
                     */
                    uint64_t GetVulnerabilityRisk() const;

                    /**
                     * 设置Vulnerability risk
                     * @param _vulnerabilityRisk Vulnerability risk
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
                     * 获取Configuration risk
                     * @return ConfigurationRisk Configuration risk
                     * 
                     */
                    uint64_t GetConfigurationRisk() const;

                    /**
                     * 设置Configuration risk
                     * @param _configurationRisk Configuration risk
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
                     * 获取Scan Task
                     * @return ScanTask Scan Task
                     * 
                     */
                    uint64_t GetScanTask() const;

                    /**
                     * 设置Scan Task
                     * @param _scanTask Scan Task
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
                     * 获取Domain
                     * @return SubDomain Domain
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置Domain
                     * @param _subDomain Domain
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
                     * 获取Resolve IP
                     * @return SeverIp Resolve IP
                     * 
                     */
                    std::vector<std::string> GetSeverIp() const;

                    /**
                     * 设置Resolve IP
                     * @param _severIp Resolve IP
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
                     * 获取Number of Bot Attacks
                     * @return BotCount Number of Bot Attacks
                     * 
                     */
                    uint64_t GetBotCount() const;

                    /**
                     * 设置Number of Bot Attacks
                     * @param _botCount Number of Bot Attacks
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
                     * 获取Weak password risk
                     * @return WeakPassword Weak password risk
                     * 
                     */
                    uint64_t GetWeakPassword() const;

                    /**
                     * 设置Weak password risk
                     * @param _weakPassword Weak password risk
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
                     * 获取Content risk
                     * @return WebContentRisk Content risk
                     * 
                     */
                    uint64_t GetWebContentRisk() const;

                    /**
                     * 设置Content risk
                     * @param _webContentRisk Content risk
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
                     * 获取tag
                     * @return Tag tag
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置tag
                     * @param _tag tag
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
                     * 获取Associated instance type
                     * @return SourceType Associated instance type
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置Associated instance type
                     * @param _sourceType Associated instance type
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
                     * 获取Member ID information
                     * @return MemberId Member ID information
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置Member ID information
                     * @param _memberId Member ID information
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
                     * 获取CC Attack
                     * @return CCAttack CC Attack
                     * 
                     */
                    int64_t GetCCAttack() const;

                    /**
                     * 设置CC Attack
                     * @param _cCAttack CC Attack
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
                     * 获取Web Attack
                     * @return WebAttack Web Attack
                     * 
                     */
                    int64_t GetWebAttack() const;

                    /**
                     * 设置Web Attack
                     * @param _webAttack Web Attack
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
                     * 获取Number of Risk Service Exposures
                     * @return ServiceRisk Number of Risk Service Exposures
                     * 
                     */
                    uint64_t GetServiceRisk() const;

                    /**
                     * 设置Number of Risk Service Exposures
                     * @param _serviceRisk Number of Risk Service Exposures
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
                     * 获取Random Layer-3 Domain of Assets to Be Recognized
                     * @return VerifyDomain Random Layer-3 Domain of Assets to Be Recognized
                     * 
                     */
                    std::string GetVerifyDomain() const;

                    /**
                     * 设置Random Layer-3 Domain of Assets to Be Recognized
                     * @param _verifyDomain Random Layer-3 Domain of Assets to Be Recognized
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
                     * 获取TXT Record Content of Pending Confirmation Assets
                     * @return VerifyTXTRecord TXT Record Content of Pending Confirmation Assets
                     * 
                     */
                    std::string GetVerifyTXTRecord() const;

                    /**
                     * 设置TXT Record Content of Pending Confirmation Assets
                     * @param _verifyTXTRecord TXT Record Content of Pending Confirmation Assets
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
                     * 获取Authentication Status of Assets Pending Recognition. 0: Pending Authentication; 1: Authentication Succeeded; 2: Authentication in Progress; 3: TXT Authentication Failed; 4: Manual Authentication Failed.
                     * @return VerifyStatus Authentication Status of Assets Pending Recognition. 0: Pending Authentication; 1: Authentication Succeeded; 2: Authentication in Progress; 3: TXT Authentication Failed; 4: Manual Authentication Failed.
                     * 
                     */
                    int64_t GetVerifyStatus() const;

                    /**
                     * 设置Authentication Status of Assets Pending Recognition. 0: Pending Authentication; 1: Authentication Succeeded; 2: Authentication in Progress; 3: TXT Authentication Failed; 4: Manual Authentication Failed.
                     * @param _verifyStatus Authentication Status of Assets Pending Recognition. 0: Pending Authentication; 1: Authentication Succeeded; 2: Authentication in Progress; 3: TXT Authentication Failed; 4: Manual Authentication Failed.
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
                     * 获取Bot Access Count
                     * @return BotAccessCount Bot Access Count
                     * 
                     */
                    int64_t GetBotAccessCount() const;

                    /**
                     * 设置Bot Access Count
                     * @param _botAccessCount Bot Access Count
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
                     */
                    std::vector<std::string> m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Asset Name
                     */
                    std::vector<std::string> m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * Asset type
                     */
                    std::vector<std::string> m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Region.
                     */
                    std::vector<std::string> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * WAF Status
                     */
                    uint64_t m_wAFStatus;
                    bool m_wAFStatusHasBeenSet;

                    /**
                     * Asset Creation Time
                     */
                    std::string m_assetCreateTime;
                    bool m_assetCreateTimeHasBeenSet;

                    /**
                     * Appid
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Account ID
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Account name
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * Core or Not
                     */
                    uint64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                    /**
                     * Whether it is on-cloud asset.
                     */
                    uint64_t m_isCloud;
                    bool m_isCloudHasBeenSet;

                    /**
                     * network attack
                     */
                    uint64_t m_attack;
                    bool m_attackHasBeenSet;

                    /**
                     * Network access
                     */
                    uint64_t m_access;
                    bool m_accessHasBeenSet;

                    /**
                     * Network Interception
                     */
                    uint64_t m_intercept;
                    bool m_interceptHasBeenSet;

                    /**
                     * Inbound peak bandwidth
                     */
                    std::string m_inBandwidth;
                    bool m_inBandwidthHasBeenSet;

                    /**
                     * Outbound peak bandwidth
                     */
                    std::string m_outBandwidth;
                    bool m_outBandwidthHasBeenSet;

                    /**
                     * Cumulative Inbound Traffic
                     */
                    std::string m_inFlow;
                    bool m_inFlowHasBeenSet;

                    /**
                     * Cumulative Outbound Traffic
                     */
                    std::string m_outFlow;
                    bool m_outFlowHasBeenSet;

                    /**
                     * Last scan time
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * port risk
                     */
                    uint64_t m_portRisk;
                    bool m_portRiskHasBeenSet;

                    /**
                     * Vulnerability risk
                     */
                    uint64_t m_vulnerabilityRisk;
                    bool m_vulnerabilityRiskHasBeenSet;

                    /**
                     * Configuration risk
                     */
                    uint64_t m_configurationRisk;
                    bool m_configurationRiskHasBeenSet;

                    /**
                     * Scan Task
                     */
                    uint64_t m_scanTask;
                    bool m_scanTaskHasBeenSet;

                    /**
                     * Domain
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * Resolve IP
                     */
                    std::vector<std::string> m_severIp;
                    bool m_severIpHasBeenSet;

                    /**
                     * Number of Bot Attacks
                     */
                    uint64_t m_botCount;
                    bool m_botCountHasBeenSet;

                    /**
                     * Weak password risk
                     */
                    uint64_t m_weakPassword;
                    bool m_weakPasswordHasBeenSet;

                    /**
                     * Content risk
                     */
                    uint64_t m_webContentRisk;
                    bool m_webContentRiskHasBeenSet;

                    /**
                     * tag
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Associated instance type
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Member ID information
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * CC Attack
                     */
                    int64_t m_cCAttack;
                    bool m_cCAttackHasBeenSet;

                    /**
                     * Web Attack
                     */
                    int64_t m_webAttack;
                    bool m_webAttackHasBeenSet;

                    /**
                     * Number of Risk Service Exposures
                     */
                    uint64_t m_serviceRisk;
                    bool m_serviceRiskHasBeenSet;

                    /**
                     * New Asset or Not. 1: New
                     */
                    uint64_t m_isNewAsset;
                    bool m_isNewAssetHasBeenSet;

                    /**
                     * Random Layer-3 Domain of Assets to Be Recognized
                     */
                    std::string m_verifyDomain;
                    bool m_verifyDomainHasBeenSet;

                    /**
                     * TXT Record Content of Pending Confirmation Assets
                     */
                    std::string m_verifyTXTRecord;
                    bool m_verifyTXTRecordHasBeenSet;

                    /**
                     * Authentication Status of Assets Pending Recognition. 0: Pending Authentication; 1: Authentication Succeeded; 2: Authentication in Progress; 3: TXT Authentication Failed; 4: Manual Authentication Failed.
                     */
                    int64_t m_verifyStatus;
                    bool m_verifyStatusHasBeenSet;

                    /**
                     * Bot Access Count
                     */
                    int64_t m_botAccessCount;
                    bool m_botAccessCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DOMAINASSETVO_H_
